# NASA-Kennungen: gesicherte Erkenntnisse (Stand 01.11.2026)

Kurzfassung früherer Arbeitsdateien (Bestandsabgleich 22.10., Bewertung 23.10., nächtliche Deutung). Alles ist an
einer EHS Mono (AE260RNWMGG / AE140BXYDGG) beobachtet. **Vermutet** heißt: aus Korrelation abgeleitet, nicht belegt.
Fremdnamen (Beormund-Labels, EHS-Sentinel) sind Hinweise, keine bestätigten Zuordnungen.

## Darstellung

- Zahlenwerte (Typ VAR/LVAR, Kennungs-Bits 9–10 = 1/2) mit `state_class: measurement`, Codes (ENUM) als Statusband.
- 65535 bzw. 255 bedeuten meist „nicht vorhanden“.

## Dauersender (gedrosselt)

| Kennung | Verhalten | Bewertung |
|---|---|---|
| 0x8224, 0x82B2 | ~850 bzw. ~270 Updates/h | identisch mit Heißgas-Überhitzung DSH1 (0x827A) × 10, r = 1,000 |
| 0x8278 | springt sekündlich | OCT1-Temperatur, Rohwert / 10 (bestätigt) |
| 0x0202 | alle ~2,2 min kurz 0, sonst 65535 | Fehlercode der Anzeige; 65535 ausgeblendet |

## Deutungen (vermutet)

| Kennung | Abgleich | Vermutung |
|---|---|---|
| 0x420C | Außentemperatur × 10, r = 0,996 | Außentemperatur, wie die Inneneinheit sie verwendet |
| 0x4202 | Heizkurve Vorlauf Soll 1:1, r = 0,993 | aktueller Vorlauf-Zielwert |
| 0x4204 | Vorlauf Tw2 − 2 K, r = 1,000 | korrigierte Ist-Temperatur für die Regelung |
| 0x82DE | Doppelrohr-WT 0x821C 1:1 | Kältemittel am Platten-Wärmetauscher |
| 0x22FC, 0x824C | steigen stetig | Zähler/Integrator, Bedeutung offen |
| 0x8405 | – | Verdichter-Laufzeit in Stunden |
| 0x4125 | 1/2 beim Laden/Speichern im FSV-Menü | FSV laden (1) / speichern (2) |
| 0x4038 | konstant 255 | kein Feuchtefühler |

Laufende Auswertung (Verläufe, neue Kennungen): Analyse-Server, nicht in diesem Repository.
