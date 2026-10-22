# NASA-Bestandsabgleich (22.10.2026)

Quellen: ESPHome-YAML `esphome/esphome-samsung-hvac-bus.yaml` (Commit 47dde9a), Beormund `esphome-samsung-nasa` @a769b47 (20.10.2026, 766 Labels), EHS-Sentinel `NasaRepository.yml` (645 Kennungen), Busmitschnitt per Syslog am 20.10.2026 (14 min Debug, 320 Kennungen), HA-Zustände und Zeitreihen-DB.

Grenzen: Der Mitschnitt umfasst nur 14 Minuten; selten gesendete Kennungen fehlen. Werte sind decodierte Rohzahlen ohne Skalierung. Namen aus Beormund/EHS-Sentinel sind Fremdzuordnungen, nicht bestätigt.

## Übersicht

| | Anzahl |
|---|--:|
| Konfigurierte samsung_nasa-Einträge | 188 |
| davon intern (FSV-Quellen) | 92 |
| davon im Mitschnitt gesehen | 119 |
| Konfiguriert, in HA ohne Daten | 10 |
| WP-Entitäten in HA / davon nicht historisiert | 204 / 0 |
| Kennungen auf dem Bus, nicht konfiguriert | 209 |
| davon mit Beormund-Label / mit EHS-Sentinel-Eintrag | 202 / 102 |
| davon im Mitschnitt veränderlich | 28 |

## Konfiguriert, aber ohne Daten in HA

| Kennung | Name | Zustand | im Mitschnitt |
|---|---|---|---|
| 0x42D8 | Zone1 Water Target | unknown | ja |
| 0x42D9 | Zone2 Water Target | unknown | ja |
| 0x4284 | Inneneinheit Leistungsaufnahme (NASA) | unknown | nein |
| 0x8022 | EVI SOL1 Status Rohwert | unknown | nein |
| 0x8023 | EVI SOL2 Status Rohwert | unknown | nein |
| 0x8223 | Heissgas Solltemperatur Rohwert | unknown | nein |
| 0x431E | FSV 1061 - Vorlauftemperatur Hysterese Heizen (Test) | unknown | nein |
| 0x431F | FSV 1062 - Vorlauftemperatur Hysterese Kühlen (Test) | unknown | nein |
| 0x4320 | FSV 1063 - Raumtemperatur Hysterese Heizen (Test) | unknown | nein |
| 0x4321 | FSV 1064 - Raumtemperatur Hysterese Kühlen (Test) | unknown | nein |

FSV 1061–1064 (0x431E–0x4321) sind unbestätigte Leseproben; FSV 6031 ist weder bei Beormund noch bei EHS-Sentinel einer Kennung zugeordnet.

## Auf dem Bus, nicht konfiguriert – veränderliche Werte (Kandidaten)

| Kennung | Label (Beormund) | EHS-Sentinel | Quelle | Meldungen | versch. Werte | Beispiele (roh) |
|---|---|---|---|--:|--:|---|
| 0x82ED | VAR_OUT___ | – | 10.00.00 | 27 | 14 | 381, 382, 383, 385, 386 |
| 0x82DE | NASA_OUTDOOR_EVA_IN | NASA_OUTDOOR_EVA_IN (value / 10) | 10.00.00 | 29 | 12 | 142, 145, 146, 147, 151 |
| 0x22FB | VAR_NM___ | – | 10.00.00, 20.00.00 | 7 | 6 | 41, 42, 55, 76, 79 |
| 0x8225 | VAR_OUT___ | – | 10.00.00 | 32 | 6 | 0, 311, 315, 337, 338 |
| 0x4204 | VAR_IN___ | NASA_MODIFIED_CURRENT_TEMP (value / 10) | 20.00.00 | 6 | 5 | 240, 260, 268, 295, 65016 |
| 0x420C | NASA_INDOOR_OUTER_TEMP | NASA_INDOOR_OUTER_TEMP (value / 10) | 20.00.00 | 6 | 4 | 56, 57, 62, 89 |
| 0x4401 | LVAR_IN___ | – | 20.00.00 | 7 | 4 | 0, 14, 109, 110 |
| 0x8249 | VAR_OUT___ | – | 10.00.00 | 93 | 4 | 0, 1, 3, 255 |
| 0x0202 | VAR_AD_ERROR_CODE1 | NASA_ERROR_CODE1 | 10.00.00, 20.00.00 | 30 | 3 | 0, 438, 65535 |
| 0x22F7 | VAR_NM___ | – | 10.00.00, 20.00.00 | 7 | 3 | 0, 14, 15 |
| 0x4202 | VAR_IN_TEMP_DISCHARGE_REQUEST | – | 20.00.00 | 3 | 3 | 0, 300, 340 |
| 0x8404 | LVAR_OUT___ | – | 10.00.00 | 93 | 3 | 0, 8388672, 75497536 |
| 0x0608 | STR_AD_DBCODE_MICOM_MAIN | NASA_MICOM_CODE | 10.00.00 | 3 | 2 | 10, 13 |
| 0x2004 | NASA_PNP | NASA_PNP | 10.00.00, 20.ff.ff | 3 | 2 | 0, 1 |
| 0x22FC | VAR_NM___ | – | 10.00.00, 20.00.00 | 3 | 2 | 144, 858 |
| 0x22FE | VAR_NM___ | – | 10.00.00, 20.00.00 | 3 | 2 | 1, 5 |
| 0x22FF | VAR_NM___ | – | 10.00.00, 20.00.00 | 3 | 2 | 2, 3 |
| 0x4213 | VAR_IN___ | – | 20.00.00 | 3 | 2 | 0, 200 |
| 0x8003 | ENUM_OUT_OPERATION_HEATCOOL | NASA_OUTDOOR_OPERATION_MODE | 10.00.00 | 95 | 2 | 0, 2 |
| 0x8031 | ENUM_OUT___ | – | 10.00.00 | 95 | 2 | 0, 1 |
| 0x803F | ENUM_OUT___ | – | 10.00.00 | 93 | 2 | 0, 43 |
| 0x8063 | ENUM_OUT___ | – | 10.00.00 | 27 | 2 | 0, 1 |
| 0x8243 | VAR_OUT___ | – | 10.00.00 | 93 | 2 | 0, 200 |
| 0x8245 | NASA_OUTDOOR_OIL_BALANCE_STEP | NASA_OUTDOOR_OIL_BALANCE_STEP | 10.00.00 | 27 | 2 | 0, 255 |
| 0x8247 | NASA_OUTDOOR_DEFROST_STEP | NASA_OUTDOOR_DEFROST_STEP | 10.00.00 | 94 | 2 | 0, 255 |
| 0x8248 | NASA_OUTDOOR_SAFETY_START | NASA_OUTDOOR_SAFETY_START | 10.00.00 | 121 | 2 | 0, 255 |
| 0x82B5 | VAR_OUT___ | – | 10.00.00 | 27 | 2 | 0, 25 |
| 0x8408 | LVAR_OUT___ | – | 10.00.00 | 27 | 2 | 24, 152 |

Vollständige Liste (auch konstante Werte): `kennungen-beobachtet-2026-10-20.csv`.
