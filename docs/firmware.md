# Firmware-Stand

Aktuell auf dem ESP (Stand 11.11.2026):

| | |
|---|---|
| ESPHome | 2026.10.2 (Container `esphome/esphome:2026.10.2`) |
| Komponente `samsung_nasa` | [Beormund/esphome-samsung-nasa](https://github.com/Beormund/esphome-samsung-nasa) @ `f174605` (Branch `test`, enthält #154–#158 und #160) |
| Absenderadresse | `80.ff.02` (`source_address`) |
| Druckwerte | Hoch-/Niederdruck in bar (Überdruck) |
| Flashen | OTA vom Server, siehe [README](../README.md#bauen-und-flashen) |
| Ergebnis | läuft, nach dem Start alle Werte vorhanden, Fehlercode 0 |

Nicht übermittelte Werte: Zone 1/2 Vorlauf-Soll, EVI SOL1/2, Heißgas-Solltemperatur und FSV 6041 sind in der YAML
`internal`, weil diese Anlage darauf keinen Wert liefert (65535 bzw. keine Antwort).
