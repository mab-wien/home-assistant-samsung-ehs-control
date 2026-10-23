# NASA-Busadressen und WiFi-Kit

Das Protokollwissen (Adressen, Anmeldung des WiFi-Kits, FSV-Abfrage über 0x4612, bestätigte Strukturen und ihre
Formate) steht seit 23.10.2026 im Fork: [samsung_nasa_protocol.md, Abschnitt „Observed bus behaviour“](https://github.com/mab-wien/esphome-samsung-nasa/blob/main/samsung_nasa_protocol.md#observed-bus-behaviour).
Die Formatierung der Strukturen (`structure_format`) liefert ebenfalls der Fork; die YAML wählt nur aus.

An dieser Anlage:

| Gerät | NASA-Adresse | in der YAML |
|---|---|---|
| Inneneinheit AE260RNWMGG | 20.00.00 | `samsung_indoor` |
| Außeneinheit AE140BXYDGG | 10.00.00 | `samsung_outdoor` |
| WLAN-Modul MIM-H04EN | 62.00.91 (S-NET 62.00.145) | `samsung_wifikit` |
| S-NET Pro 2 (Servicelaptop) | 80.ff.00 / 80.ff.01 | – |

Struktur-Sensoren in HA: `wp_modellbezeichnung`, `wp_ausseneinheit_standort`, `wp_ausseneinheit_seriennummer`,
`wp_inneneinheit_seriennummer`, `wp_inverter_micom`, `wp_nasa_0600`, `wp_nasa_0608_innen`, `wp_nasa_0608_aussen`,
`wp_nasa_060c`, `wp_nasa_461e` und die MAC des WLAN-Moduls. Sie füllen sich nur, wenn jemand sie abfragt (S-NET,
WLAN-Modul beim Start); der ESP fragt Strukturen bisher nicht selbst an.
