# NASA-Kennungen

- [`erkenntnisse.md`](erkenntnisse.md): gesicherte und vermutete Bedeutungen einzelner Kennungen, Dauersender.
- [`busadressen-wifi-kit.md`](busadressen-wifi-kit.md): Adressklassen, Anmeldung des WiFi-Kits (PnP, 0x4612-FSV-Abfrage), bestätigte Strukturen.
- [`diagnose-803f-8404.md`](diagnose-803f-8404.md): Bitfeld 0x8404 und Zähler 0x803F rund um E438.

Fremdnamen sind Hinweise, keine bestätigten Zuordnungen.

## Einordnung der Werte (06.11.2026)

Jeder Wert hat zwei Merkmale, ermittelt aus 14 Tagen Busverlauf (Zahl der Werte und Wechsel, nur aufwärts zählend):

| Merkmal | Ausprägungen |
| --- | --- |
| Art | statisch (Einstellungen, Gerätedaten, Versionen), dynamisch (Mess- und Zustandswerte), Zähler, nie gesehen |
| Relevanz | relevant (benannte Werte, Bedienung), Diagnose (Rohwert, ändert sich im Betrieb, Bedeutung unbestätigt), ohne Funktion (in dieser Anlage konstant oder nie gesendet) |

Rohwerte „ohne Funktion“ sind im YAML `internal: true`: keine HA-Entität, der ESP empfängt sie weiter, im Debug-Mitschnitt bleiben sie sichtbar.
Benannte Werte ohne Funktion (z. B. Zone 2, nicht vorhandene Fühler) bleiben in HA, weil Auswertungen sie nutzen.
Statische Werte werden beim Start und einmal täglich gelesen; Zähler haben `total_increasing`.
