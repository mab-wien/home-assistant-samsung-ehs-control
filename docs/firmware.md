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
