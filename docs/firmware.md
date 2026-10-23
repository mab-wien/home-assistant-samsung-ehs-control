# Firmware-Protokoll

Je bereitgestellter Firmware: Datum, Git-Commit der YAML, ESPHome-Version, Stand der externen Komponente (Beormund), wer geflasht hat, Ergebnis.
Der zuletzt funktionierende Stand wird zusätzlich als Git-Tag `firmware-JJJJ-MM-TT` markiert (Wiederherstellung).

| Datum | YAML-Commit | ESPHome | Beormund samsung_nasa | geflasht über | Ergebnis |
|---|---|---|---|---|---|
| 20.10.2026 | 47dde9a | 2026.9.1 (Build 20.10.2026 07:19 UTC) | @main (zum Build-Zeitpunkt, Commit unbekannt) | ESPHome Device Builder (HA) | läuft |
| 22.10.2026 21:49 | 291065e | 2026.9.1 (Container auf mab-rog02) | Fork mab-wien/esphome-samsung-nasa@93bb832 (Branch diagnose) | OTA vom Server | läuft; 204 Entitäten auf wp_* umgezogen, Verlauf erhalten |
| 22.10.2026 22:13 | f0bf9e0 | 2026.9.1 (Container auf mab-rog02) | Fork @93bb832 | OTA vom Server | läuft; +204 NASA-Rohwert-Sensoren (wp_nasa_XXXX), RAM 51 %, freier Heap ~78 kB |
| 23.10.2026 02:09 | 22b44cf | 2026.9.1 (Container auf mab-rog02) | Fork @93bb832 | OTA vom Server | läuft; NASA-Zahlenwerte mit state_class (Kurven), Dauersender gedrosselt, Stand inkl. FSV 5012/5042/5043 und OCT1 aus GitHub |
| 23.10.2026 02:21 | 06a0bab | 2026.9.1 (Container auf mab-rog02) | Fork @93bb832 | OTA vom Server | läuft; alle 352 Sensoren mit delta: 0 (nur echte Änderungen über WLAN), RAM 58 %, freier Heap ~67 kB |
| 23.10.2026 09:32 | ee5e1b5 | 2026.9.1 (Container auf mab-rog02) | Fork @0ad8fc3 (Strukturen) | OTA vom Server | läuft; 11 Struktur-Kennungen als Text-Sensoren (Text oder Hex), Struktur-Dekodierung im Fork korrigiert, RAM 59 % |
| 23.10.2026 09:40 | COMMIT | 2026.9.1 (Container auf mab-rog02) | Fork @d0bce2d (Strukturformate) | OTA vom Server | läuft; Main Micom/EEPROM als „DB91-… JJMMTT“, Product Option als „[0]…-[3]…“ (S-NET-Abgleich) |

Seit 22.10.2026 ist die Komponente auf einen festen Commit des Forks festgelegt. Rückweg: Tag `firmware-2026-10-23d` (ältere Tags am 23.10.2026 gelöscht; frühere Stände über den YAML-Commit in der Tabelle).
