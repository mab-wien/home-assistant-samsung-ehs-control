# Firmware-Stand

Aktuell auf dem ESP (Stand 16.11.2026):

| | |
|---|---|
| ESPHome | 2026.10.2 (Container `esphome/esphome:2026.10.2`) |
| Komponente `samsung_nasa` | [Beormund/esphome-samsung-nasa](https://github.com/Beormund/esphome-samsung-nasa) @ `3f2bede` (`main`, enthält #154–#158 und #160) |
| Absenderadresse | `80.ff.02` (`source_address`) |
| Druckwerte | Hoch-/Niederdruck in bar (Überdruck) |
| Flashen | OTA vom Server, siehe [README](../README.md#bauen-und-flashen) |
| Schreibbare FSV | FSV 3026 (max. Heizzeit zwischen WW, 0,5–10 h; Anzeige rundet wegen Ganzzahl-Division unter 1 h auf 0), FSV 3032 (Heizstab-Verzögerung, 20–95 min), FSV 4013 (Heizgrenze außen, 10–35 °C) und FSV 4052 (Inverterpumpe Sollspreizung, 2–8 K) als Zahl, FSV 2093 (Raumtemperaturregelung Betriebsart, 1–4) und FSV 2091 (Externer Raumthermostat Zone 1, 0–4, deutsche Texte nach MIM-E03EN-Handbuch S. 28) als Auswahl in HA |
| Ergebnis | läuft, nach dem Start alle Werte vorhanden, Fehlercode 0 |

Thermostat-Eingang Zone 1 (NASA 0x4069, Klemmen B20/B22) seit 16.11.2026 wieder in HA (`sensor.nasa_rohwerte_diagnose_nasa_0x4069_in_thermostat1`,
0 aus, 1 Kühlen, 2 Heizen), zur Kontrolle der Brücke für den Thermostatbetrieb (FSV 2091).

Nicht übermittelte Werte: Zone 1/2 Vorlauf-Soll, EVI SOL1/2, Heißgas-Solltemperatur und FSV 6041 sind in der YAML
`internal`, weil diese Anlage darauf keinen Wert liefert (65535 bzw. keine Antwort).

## Neu/unbekannt (17.11.2026)

12 Kennungen, die das Außengerät nur auf gezielte Anfrage beantwortet (`request_read` mit `addressed: true` an
10.00.00, alle 10 min, nur lesend): 0x80B7, 0x82B0, 0x82B1, 0x82AC, 0x82AD, 0x823A, 0x8283, 0x82C6, 0x82F3, 0x8299,
0x808A, 0x8257. In HA als „Neu 0x… (unbekannt)“ unter den Rohwerten; Bedeutung wird aus den Verläufen bestimmt.
Erste Werte 08:26: 80B7 = 255, 82B0 = 29, 82B1 = 65400 (−136), 82AC = 299, 82AD = 65515 (−21), 8283 = 365, 8257 = 43,
übrige 0/65535. Ein Versuch mit 107 Kennungen per Rundsendung (07:19–08:13) brachte keine Antworten und senkte den
freien Speicher auf ~25 KB (Syslog sperrte) – zurückgebaut.

### Neu/unbekannt, Runde 2 (17.11.2026)

Zusätzlich 0x824A, 0x8289, 0x828A, 0x828B, 0x828C, 0x8297, 0x829E, 0x826A, 0x827B, 0x827D, 0x82AB (in Debug-Abfragen
veränderlich) sowie 0x840D als exakter Hex-Text (`numeric_format: hex`; als Float-Sensor gingen bei 32 Bit die unteren
Bits verloren). Alle 24 Kennungen gezielt an 10.00.00 in drei Gruppen alle 600 s gelesen. Kein Änderungsfilter mehr:
jede Antwort wird veröffentlicht, HA führt die Empfangszeit als `last_reported` (gilt nicht für den Hex-Text, der nur
bei Änderung sendet). Rohwerte unskaliert, Bedeutung unbestätigt.
