# Samsung EHS – ESPHome & Home Assistant

ESPHome-Konfiguration für eine Samsung-EHS-Wärmepumpe (ClimateHub Mono, Inneneinheit AE260RNWMGG, Außeneinheit
AE140BXYDGG) am internen NASA-Bus (RS485) – Messwerte, FSV-Lesekopien und ausgewählte Steuerungen in Home Assistant.

## Aufbau

| Pfad | Inhalt |
|---|---|
| [`esphome/esphome-samsung-hvac-bus.yaml`](esphome/esphome-samsung-hvac-bus.yaml) | vollständige Gerätekonfiguration (ESP32 M5Stack Atom) |
| [`esphome/secrets.example.yaml`](esphome/secrets.example.yaml) | Vorlage für `secrets.yaml` (echte Werte nie ins Repo) |
| [`docs/entitaeten.md`](docs/entitaeten.md) | alle Entitäten mit Name, entity_id (`wp_*`), Quelle und Einheit |
| [`docs/diagnose.md`](docs/diagnose.md) | Debug-Mitschnitt, Rohbytes, Syslog-Format, NASA-Katalog |
| [`docs/firmware.md`](docs/firmware.md) | Protokoll jeder geflashten Firmware (Commit, ESPHome-Version, Komponente) |
| [`docs/nasa/`](docs/nasa/) | Bestandsabgleich der NASA-Kennungen und beobachtete, noch nicht eingebundene Werte |
| [`docs/archiv/`](docs/archiv/) | abgeschlossene Umbauten (z. B. Umbenennung auf `wp_*` am 22.10.2026) |

## Hardware

- ESP32 (M5Stack Atom) mit RS485-Modul, UART 9600 Baud, gerade Parität (GPIO19 TX, GPIO22 RX)
- Anschluss am NASA-Bus der Inneneinheit

## Software

- ESPHome 2026.9.1
- Komponente `samsung_nasa`: Fork [mab-wien/esphome-samsung-nasa](https://github.com/mab-wien/esphome-samsung-nasa)
  (Basis Beormund), in der YAML auf einen festen Commit gesetzt – Builds sind reproduzierbar
- Home Assistant über die ESPHome-API (verschlüsselt)

## Bauen und flashen

Maßgeblich ist dieses Repository. Kompiliert wird in einem ESPHome-Container (gleiche Version wie oben), geflasht per OTA
über WLAN; im Notfall per USB. Vor jedem Flash: `esphome config` und `compile`, danach Eintrag in
[`docs/firmware.md`](docs/firmware.md) und Git-Tag `firmware-JJJJ-MM-TT` (Rückweg).

```bash
docker run --rm -v "$PWD/esphome:/config" esphome/esphome:2026.9.1 compile esphome-samsung-hvac-bus.yaml
docker run --rm --network host -v "$PWD/esphome:/config" esphome/esphome:2026.9.1 upload esphome-samsung-hvac-bus.yaml --device <IP>
```

## Namensschema

Deutsche Anzeigenamen ohne Geräte-Präfix; entity_ids einheitlich `wp_<name>`, FSV-Lesekopien `wp_fsv_NNNN`.
FSV-Einstellungen selbst bleiben `internal` (nicht schreibbar aus HA); sichtbar sind nur ihre Lesekopien.

## Hinweis

Das Projekt kommuniziert direkt mit dem internen Bus der Wärmepumpe. Schreibbare Entitäten wirken unmittelbar auf die
Anlage. Nutzung auf eigene Verantwortung.
