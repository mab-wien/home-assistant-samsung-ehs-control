# Samsung EHS – ESPHome & Home Assistant

ESPHome-Konfiguration für eine Samsung-EHS-Wärmepumpe (ClimateHub Mono, Inneneinheit AE260RNWMGG, Außeneinheit
AE140BXYDGG) am internen NASA-Bus (RS485) – Messwerte, FSV-Lesekopien und ausgewählte Steuerungen in Home Assistant.

> ⚠️ **Sicherheitshinweis**
>
> Nutzung auf eigene Verantwortung. Schreibende Aktionen – schreibbare Zahlen, Auswahlfelder und Schalter,
> `request_write`, `request_write_as`, `send_structure` mit Datentyp Write und die Tasten in dieser Konfiguration –
> verändern Einstellungen der Wärmepumpe. Nicht jede Kennung und nicht jeder Wert wird von jedem Gerät und jeder
> Firmware unterstützt: nur senden, was die eigene Anlage nachweislich annimmt. Siehe [Warnung](#warnung) und die
> Sicherheitshinweise im [README der Komponente](https://github.com/Beormund/esphome-samsung-nasa#readme) – beide
> vor der Nutzung lesen.
>
> Die Konfiguration ist auf genau diese Anlage abgestimmt und als Beispiel gedacht. Andere Geräte, Firmware-Stände
> und Installationen (Zusatzheizung, mehrere Zonen, weitere Pumpen, externe Zähler) unterscheiden sich in
> Kennungen, Wertebereichen, Skalierung und Busadressen; manche Werte liefert nicht jede Anlage. Vor dem Übernehmen
> jede Entität an der eigenen Anlage prüfen; was hier fehlt, steht unter [Nicht enthalten](#nicht-enthalten).
> Energie- und COP-Werte stammen aus den Zählern der Wärmepumpe und sind teils berechnet; genauer sind ein echter
> Strom- und Wärmemengenzähler.

## Aufbau

| Pfad | Inhalt |
|---|---|
| [`esphome/esphome-samsung-hvac-bus.yaml`](esphome/esphome-samsung-hvac-bus.yaml) | vollständige Gerätekonfiguration (ESP32 M5Stack Atom) |
| [`esphome/secrets.example.yaml`](esphome/secrets.example.yaml) | Vorlage für `secrets.yaml` (echte Werte nie ins Repo) |
| [`docs/entitaeten.md`](docs/entitaeten.md) | alle Entitäten mit Name, entity_id (`wp_*`), Quelle und Einheit |
| [`docs/diagnose.md`](docs/diagnose.md) | Debug-Mitschnitt, Rohbytes, Syslog-Format, NASA-Katalog, Fehlerdaten des Außengeräts |
| [`docs/firmware.md`](docs/firmware.md) | aktueller Firmware-Stand (ESPHome-Version, Komponente) |
| [`docs/nasa/`](docs/nasa/) | Erkenntnisse zu NASA-Kennungen, Busadressen, Diagnose E438 |

## Hardware

- ESP32 (M5Stack Atom) mit RS485-Modul, UART 9600 Baud, gerade Parität (GPIO19 TX, GPIO22 RX)
- Anschluss am NASA-Bus der Inneneinheit

## Software

- ESPHome 2026.10.2
- Komponente `samsung_nasa` von [Beormund/esphome-samsung-nasa](https://github.com/Beormund/esphome-samsung-nasa),
  in der YAML auf einen festen Commit gesetzt – Builds sind reproduzierbar. Eigene Erweiterungen sind als Pull Requests
  dort eingeflossen (#123, #124, #130–#135, #138, #139, #141–#143, #145, #146, #150, #151, #154–#156, #158, #160).
- Aktueller Stand: [`docs/firmware.md`](docs/firmware.md)
- Home Assistant über die ESPHome-API (verschlüsselt)

## Bauen und flashen

Maßgeblich ist dieses Repository. Kompiliert wird in einem ESPHome-Container (gleiche Version wie oben), geflasht per OTA
über WLAN; im Notfall per USB. Vor jedem Flash: `esphome config` und `compile`, danach
[`docs/firmware.md`](docs/firmware.md) aktualisieren.

```bash
docker run --rm -v "$PWD/esphome:/config" esphome/esphome:2026.10.2 compile esphome-samsung-hvac-bus.yaml
docker run --rm --network host -v "$PWD/esphome:/config" esphome/esphome:2026.10.2 upload esphome-samsung-hvac-bus.yaml --device <IP>
```

## Namensschema

Deutsche Anzeigenamen ohne Geräte-Präfix; entity_ids einheitlich `wp_<name>`, FSV-Lesekopien `wp_fsv_NNNN`.
FSV-Einstellungen selbst bleiben `internal` (nicht schreibbar aus HA); sichtbar sind nur ihre Lesekopien.

## Nicht enthalten

Diese Konfiguration deckt nur ab, was diese Anlage nutzt. Für andere Installationen kann Folgendes fehlen; die
Komponente unterstützt es, siehe [README der Komponente](https://github.com/Beormund/esphome-samsung-nasa#readme):

- **Climate-Kachel für den Heizungs-Sollwert** – die Kachel „Heizung“ zeigt nur Ein/Aus, Vorlauf und
  Anforderung, weil die Anlage nach Heizkurve regelt (Versatz als eigene Zahl).
- **Zone 2** (Sollwerte, Ein/Aus, Raum- und Vorlauftemperatur) – hier nur als interne Rohwerte, da nicht verbaut.
- **Kühlbetrieb** und Klimageräte-Werte (z. B. Luftfeuchte) – nicht genutzt.
- **Fremdthermostate** (Anforderungssignale Zone 1/2) – nur als Rohwerte.
- **FSV schreiben** – FSV sind nur als Lesekopien sichtbar; Einstellungen erfolgen am Bedienteil.
- **Fehlerhistorie löschen** (0x40D6) – bewusst nicht enthalten.

## Warnung

Das Projekt kommuniziert direkt mit dem internen Bus der Wärmepumpe. Schreibbare Entitäten wirken unmittelbar auf die
Anlage. Falsche oder unbeabsichtigte Schreibvorgänge können Einstellungen verstellen, den Betrieb stören, Störungen
auslösen oder die Anlage beschädigen. Nur Werte schreiben, deren Bedeutung und zulässigen Bereich man an der eigenen
Anlage kennt. Nicht jede Kennung und nicht jeder Wert wird von jedem Gerät und jeder Firmware unterstützt. Die
Sicherheitshinweise und Warnungen im [README der Komponente](https://github.com/Beormund/esphome-samsung-nasa#readme)
gelten ebenso und sind vor der Nutzung zu lesen. Nutzung auf eigene Verantwortung.

## Hinweis zu Samsung

Unabhängiges Community-Projekt, keine Verbindung zu Samsung und keine Freigabe durch Samsung. Handbücher und
Service-Unterlagen bitte über den offiziellen Samsung-Support beziehen.
