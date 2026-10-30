# Diagnose 0x803F und 0x8404 (Stand 30.10.2026)

Dauerhaft und ohne Debug empfangen, rein passiv (keine zusätzlichen Busabfragen; alle Kennungen waren schon registriert).
Firmware vom 30.10.2026, siehe [firmware.md](../firmware.md).

## Entitäten

| Entität (HA) | Inhalt |
|---|---|
| `sensor.wp_nasa_803f` | 0x803F Rohwert (bestehend, unverändert) |
| `sensor.wp_nasa_8404` | 0x8404 als Gleitkommawert (bestehend). Verliert bei Werten > 2^24 die unteren Bits, z. B. Bit 1 bei 0x04808202 |
| `sensor.warmepumpe_warmepumpe_nasa_0x8404_rohwert_exakt` | 0x8404 als exakte Ganzzahl (Text) |
| `sensor.warmepumpe_warmepumpe_nasa_0x8404_hex` | 0x8404 hexadezimal, z. B. `0x00800042` |
| `binary_sensor.warmepumpe_warmepumpe_nasa_0x8404_bit_NN` | Einzelbits 01, 06, 09, 13, 15, 16, 18, 23, 26 (nur bisher beobachtete Bits), ohne Funktionsnamen |
| `sensor.warmepumpe_warmepumpe_nasa_0x803f_letzter_empfang` | Zeitpunkt des letzten empfangenen Telegramms (Zeitstempel), höchstens einmal pro Minute |
| `sensor.warmepumpe_warmepumpe_nasa_0x8404_letzter_empfang` | dito für 0x8404 |

Die neuen Entitäten tragen noch das automatische Präfix `warmepumpe_warmepumpe_`. Umbenennen auf `wp_nasa_…` geht nur mit Admin-Zugang in HA.
Unbekannt bleibt unbekannt: Die Bit- und Hex-Entitäten haben bis zum ersten Empfang nach einem Neustart keinen Wert, nicht 0.

Weitere Diagnosewerte waren schon vorhanden und speichern jede Änderung (`delta: 0`, keine Glättung):
0x8235 `sensor.wp_fehlercode`, 0x822E `sensor.wp_evi_eev_ansteuerung_rohwert`, 0x8229 `sensor.wp_haupt_eev1`,
0x827A `sensor.wp_verdichter_ueberhitzungsfuehler_dsh1_temperatur`, 0x8238 Frequenz, 0x820A Heißgas, 0x821A Ansaugung,
0x8206/0x8208 Hoch-/Niederdruck, 0x829F/0x82A0 Sättigungstemperaturen.
Abgleich 29.10. 23:58–23:59:58: Zahl der Wertwechsel in der Datenbank gleich der Zahl der Wertwechsel auf dem Bus.

## Befunde (beobachtet / vermutet / bestätigt)

- 0x827A: Rohwert /10 = K. Beobachtet: gleich 0x820A − 0x829F (Heißgas minus Hochdruck-Sättigung), also Samsungs DSH-Regelwert. Kein Fühler.
- 0x8404: beobachtet als Zustands-Bitfeld der Außeneinheit. Vermutet: Bit 26 Freigabe (fehlt in Prohibit), Bit 15 Regelbetrieb, Bit 9 Anforderung, Bit 6 Stillstand. Nicht bestätigt.
- 0x8404 = 0x800040 tritt auch bei Stopp ohne Fehler auf (23.10.2026), also nicht E438-spezifisch.
- 0x803F: beobachtet 0 im Normalbetrieb, 32 im E438-Fehlertelegramm, danach 43 bis zum Reset. Bedeutung offen, andere Fehler bisher nicht gesehen.
- **Widerlegt:** automatische Zuordnung von 0x8404 zur „Außeneinheit Bodenheizung Status“ (Bodenwannenheizung). Kein Bit folgt ihr, 0x8404 ändert sich auch bei ausgeschalteter Heizung. Im NASA-Katalog als manuell geprüft markiert, damit die nächtliche Deutung es nicht wieder einträgt.
