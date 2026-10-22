# Firmware-Protokoll

Je bereitgestellter Firmware: Datum, Git-Commit der YAML, ESPHome-Version, Stand der externen Komponente (Beormund), wer geflasht hat, Ergebnis.
Der zuletzt funktionierende Stand wird zusätzlich als Git-Tag `firmware-JJJJ-MM-TT` markiert (Wiederherstellung).

| Datum | YAML-Commit | ESPHome | Beormund samsung_nasa | geflasht über | Ergebnis |
|---|---|---|---|---|---|
| 20.10.2026 | 47dde9a | ≥ 2026.5.0 (genaue Version nachtragen) | @main (zum Build-Zeitpunkt, Commit unbekannt) | ESPHome Device Builder (HA) | läuft |

Offen: Beormund ist mit `@main` eingebunden – künftig auf einen Commit festlegen, damit Builds reproduzierbar sind.
