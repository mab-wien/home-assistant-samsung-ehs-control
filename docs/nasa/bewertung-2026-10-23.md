# NASA-Rohwerte: Bewertung und erste Deutung (23.10.2026)

Grundlage: HA-Verlauf der 204 `wp_nasa_*`-Sensoren seit Einbindung am 22.10.2026 (~5 h), Minutenraster,
Korrelation gegen alle benannten `wp_*`-Sensoren; Fremdnamen aus Beormund (`nasa_labels.py`, Doku) und
EHS-Sentinel. **Alles hier ist vermutet**, bestätigt ist nur, was ausdrücklich so markiert ist.

## Darstellung in Home Assistant

- Zahlenwerte (NASA-Typ VAR/LVAR, Kennungs-Bits 9–10 = 1/2): `state_class: measurement` → Kurve statt Statusband (106 Sensoren).
- Codes (Typ ENUM): bleiben Statusbänder (95 Sensoren).
- `0x0202` (Fehlercode 1): bleibt Code; der Füllwert 65535 wird ausgeblendet.

## Dauersender

| Kennung | Updates/h | Verhalten | Bewertung | Maßnahme |
|---|---|---|---|---|
| 0x8224 | ~850 | 52–263 | identisch mit DSH1 (0x827A) × 10, r = 1,000 | `throttle_average: 60s` |
| 0x82B2 | ~270 | 52–262 | ebenfalls DSH1 × 10, r = 1,000 | `throttle_average: 60s` |
| 0x8278 | ~105 | springt sekündlich 100 ↔ 110 | Beormund: `OUT_SENSOR_OCT1` („Compressor OCT1“), Bedeutung offen | `throttle_average: 60s` |
| 0x22FB | ~80 | alle ~43 s neuer Wert 32–610 | keine Korrelation gefunden | unverändert (periodische Sendung) |
| 0x0202 | ~55 | alle ~2,2 min für 1–7 s 0, sonst 65535 | Beormund: `AD_ERROR_CODE1` | 65535 ausgeblendet |
| 0x4204 | ~70 | Temperatur | Vorlauf Tw2 (0x4238) minus ~2 K, r = 1,000 | unverändert |

## Deutungen (vermutet)

| Kennung | Wertebereich | Abgleich mit bekanntem Sensor | Fremdname | Vermutung |
|---|---|---|---|---|
| 0x420C | 43–78 | Außentemperatur × 10, r = 0,996 | `NASA_INDOOR_OUTER_TEMP` | Außentemperatur, wie sie die Inneneinheit verwendet (°C × 10) |
| 0x4202 | 32,5–37,4 °C | Heizkurve Vorlauf Soll 1:1, r = 0,993 | EHS-Sentinel: `DHW_HEAT_UNTIL` | eher aktueller Vorlauf-Zielwert als Warmwasser-Grenze |
| 0x4204 | 31,3–34,2 °C | Vorlauf Tw2 − 2 K, r = 1,000 | `NASA_MODIFIED_CURRENT_TEMP` | korrigierte Ist-Temperatur für die Regelung |
| 0x82DE | 30,6–33,5 °C | Doppelrohr-WT 0x821C 1:1, r = 1,000 | `NASA_OUTDOOR_EVA_IN` | Kältemittel am Platten-WT (Doppel) |
| 0x8224, 0x82B2 | 52–263 | DSH1 × 10 | – | Doppel der Heißgasüberhitzung |
| 0x8225 | 338–374 | schwach mit Vorlauf Soll (r = 0,75) | – | Temperatur × 10 (33,8–37,4 °C), Bedeutung offen |
| 0x22F7 | 14–17 | Außeneinheit Spannung, r = 0,93 | – | spannungsabhängig, Bedeutung offen |
| 0x22FC | 960–2449 | steigt stetig | – | Zähler/Integrator |
| 0x824C | 5024–11437 | steigt stetig | – | Zähler/Integrator |
| 0x8405 | 13592–13596 | – | `COMP1_RUNNING_TIME` | Verdichter-Laufzeit in Stunden |
| 0x4125 | 0/1/2 | 22.10. 22:37:24 → 1, 22:38:45 → 2 (zeitgleich Write-Pakete der Inneneinheit) | `FSV_LOAD_SAVE` | FSV-Menü laden (1) / speichern (2) |
| 0x4038 | 255 | – | `IN_STATE_HUMIDITY_PERCENT` | kein Feuchtefühler vorhanden (255 = leer) |

Konstante Werte 65535 / 255 bedeuten bei Samsung meist „nicht vorhanden“. 12 Sensoren liefern bisher keinen Wert.
