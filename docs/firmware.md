# Firmware-Protokoll

Je bereitgestellter Firmware: Datum, Git-Commit der YAML, ESPHome-Version, Stand der externen Komponente (Beormund), wer geflasht hat, Ergebnis.
Der zuletzt funktionierende Stand wird zusätzlich als Git-Tag `firmware-JJJJ-MM-TT` markiert (Wiederherstellung).

| Datum | YAML-Commit | ESPHome | Beormund samsung_nasa | geflasht über | Ergebnis |
|---|---|---|---|---|---|
| 20.10.2026 | 47dde9a | 2026.9.1 (Build 20.10.2026 07:19 UTC) | @main (zum Build-Zeitpunkt, Commit unbekannt) | ESPHome Device Builder (HA) | läuft |
| 22.10.2026 21:49 | 291065e | 2026.9.1 (Container auf mab-rog02) | Fork mab-wien/esphome-samsung-nasa@93bb832 (Branch diagnose) | OTA vom Server | läuft; 204 Entitäten auf wp_* umgezogen, Verlauf erhalten |

Seit 22.10.2026 ist die Komponente auf einen festen Commit des Forks festgelegt. Rückweg: Tag `firmware-2026-10-20`.
