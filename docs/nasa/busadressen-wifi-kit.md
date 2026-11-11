# NASA-Busadressen und WiFi-Kit

Das Protokollwissen (Adressen, Anmeldung des WiFi-Kits, FSV-Abfrage über 0x4612, bestätigte Strukturen und ihre
Formate) steht in der Komponente: [samsung_nasa_protocol.md, Abschnitt „Observed bus behaviour“](https://github.com/Beormund/esphome-samsung-nasa/blob/main/samsung_nasa_protocol.md#observed-bus-behaviour).
Die Formatierung der Strukturen (`structure_format`) liefert ebenfalls die Komponente; die YAML wählt nur aus.

An dieser Anlage:

| Gerät | NASA-Adresse | in der YAML |
|---|---|---|
| Inneneinheit AE260RNWMGG | 20.00.00 | `samsung_indoor` |
| Außeneinheit AE140BXYDGG | 10.00.00 | `samsung_outdoor` |
| WLAN-Modul MIM-H04EN | 62.00.91 (dezimal 62.00.145) | `samsung_wifikit` |
| ESP (diese YAML) | 80.ff.02 | `source_address` |
| Debug-Zugang | 80.ff.00 / 80.ff.01 | – |

Struktur-Sensoren in HA: `wp_modellbezeichnung`, `wp_ausseneinheit_standort`, `wp_ausseneinheit_seriennummer`,
`wp_inneneinheit_seriennummer`, `wp_inverter_micom`, `wp_nasa_0600`, `wp_nasa_0608_innen`, `wp_nasa_0608_aussen`,
`wp_nasa_060c`, `wp_nasa_461e` und die MAC des WLAN-Moduls. Der ESP liest sie in der Startrunde (vor dem WLAN), `wp_nasa_461e` zusätzlich bei jeder Änderung des Fehlercodes;
manuell über die Tasten in [`../diagnose.md`](../diagnose.md).
