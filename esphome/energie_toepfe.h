// Energie, Laufzeit und Starts je Betriebsart (Heizen, Warmwasser, Pause, unbekannt), 09.11.2026.
// Die Zählerstände der Wärmepumpe (Wärme 0x4427, Strom 0x8414, kWh) kommen etwa einmal pro Minute. Jeder Zuwachs
// wird zeitanteilig auf die Betriebsarten verteilt, die seit dem vorigen Zählerstand galten. Alles liegt nur im RAM:
// nach einem Neustart beginnen die Töpfe bei 0 (total_increasing in HA zählt weiter), der erste Zählerstand ist
// nur Ausgangswert. Abtauen zählt zur laufenden Betriebsart und wird zusätzlich als „davon Abtauen“ geführt.
#pragma once
#include <cstdint>

namespace energie_toepfe {

enum Art : uint8_t { HEIZEN = 0, WARMWASSER = 1, PAUSE = 2, UNBEKANNT = 3, ANZAHL = 4 };

struct Zaehler {
  bool hat_stand = false;
  float letzter_stand = 0;
  double zeit_ms[ANZAHL] = {0};  // Zeit je Betriebsart seit dem letzten Zählerstand
  double abtau_ms = 0;
  double topf_kwh[ANZAHL] = {0};
  double abtau_kwh = 0;
};

struct Zustand {
  Art art = UNBEKANNT;
  bool abtau = false;
  bool hat_zeit = false;
  uint32_t seit_ms = 0;
  Zaehler zaehler[2];  // 0 = Wärme, 1 = Strom
  double lauf_ms[ANZAHL] = {0};
  double abtau_lauf_ms = 0;
  uint32_t starts[ANZAHL] = {0};
};

inline Zustand &zustand() {
  static Zustand z;
  return z;
}

// Betriebsart aus Verdichterfrequenz und Dreiwegeventil; ohne gültige Werte unbekannt.
inline Art art_aus(bool hz_gueltig, float hz, bool ventil_gueltig, bool ventil_ww) {
  if (!hz_gueltig) return UNBEKANNT;
  if (hz <= 0) return PAUSE;
  if (!ventil_gueltig) return UNBEKANNT;
  return ventil_ww ? WARMWASSER : HEIZEN;
}

// Vergangene Zeit dem bisherigen Zustand gutschreiben, dann den neuen übernehmen.
inline void fortschreiben(uint32_t jetzt_ms, Art art, bool abtau) {
  Zustand &z = zustand();
  abtau = abtau && (art == HEIZEN || art == WARMWASSER);
  if (z.hat_zeit) {
    double dt = (double) (uint32_t) (jetzt_ms - z.seit_ms);
    z.lauf_ms[z.art] += dt;
    if (z.abtau) z.abtau_lauf_ms += dt;
    for (auto &c : z.zaehler) {
      c.zeit_ms[z.art] += dt;
      if (z.abtau) c.abtau_ms += dt;
    }
    if (z.art == PAUSE && (art == HEIZEN || art == WARMWASSER)) z.starts[art]++;
  }
  z.art = art;
  z.abtau = abtau;
  z.seit_ms = jetzt_ms;
  z.hat_zeit = true;
}

inline void zeit_zuruecksetzen(Zaehler &c) {
  for (auto &t : c.zeit_ms) t = 0;
  c.abtau_ms = 0;
}

// Neuer Zählerstand (kWh). Liefert true, wenn ein Zuwachs verteilt wurde.
inline bool zaehlerstand(int nr, float stand, uint32_t jetzt_ms) {
  Zustand &z = zustand();
  fortschreiben(jetzt_ms, z.art, z.abtau);
  Zaehler &c = z.zaehler[nr];
  if (!(stand > 0)) return false;  // NaN oder 0: kein gültiger Stand
  if (!c.hat_stand) {
    c.hat_stand = true;
    c.letzter_stand = stand;
    zeit_zuruecksetzen(c);
    return false;
  }
  double zuwachs = (double) stand - (double) c.letzter_stand;
  if (zuwachs == 0) return false;
  double summe_ms = 0;
  for (double t : c.zeit_ms) summe_ms += t;
  // Rücksprung oder unplausibler Sprung (> 30 kW über die Zeit seit dem letzten Stand): neu ansetzen, nichts verteilen
  if (zuwachs < 0 || zuwachs > 30.0 * summe_ms / 3.6e6 + 0.05) {
    if (zuwachs < 0 && zuwachs > -0.05) return false;  // kleine Rundungsschwankung, alten Stand behalten
    c.letzter_stand = stand;
    zeit_zuruecksetzen(c);
    return false;
  }
  if (summe_ms <= 0) {
    c.topf_kwh[z.art] += zuwachs;
    if (z.abtau) c.abtau_kwh += zuwachs;
  } else {
    for (int a = 0; a < ANZAHL; a++) c.topf_kwh[a] += zuwachs * c.zeit_ms[a] / summe_ms;
    c.abtau_kwh += zuwachs * c.abtau_ms / summe_ms;
  }
  c.letzter_stand = stand;
  zeit_zuruecksetzen(c);
  return true;
}

inline float kwh(int nr, Art art) { return (float) zustand().zaehler[nr].topf_kwh[art]; }
inline float abtau_kwh(int nr) { return (float) zustand().zaehler[nr].abtau_kwh; }
inline float laufzeit_h(Art art) { return (float) (zustand().lauf_ms[art] / 3.6e6); }
inline float abtau_h() { return (float) (zustand().abtau_lauf_ms / 3.6e6); }
inline float starts(Art art) { return (float) zustand().starts[art]; }

}  // namespace energie_toepfe
