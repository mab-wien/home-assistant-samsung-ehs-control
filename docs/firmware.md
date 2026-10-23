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
| 23.10.2026 09:40 | 1d9a2e6 | 2026.9.1 (Container auf mab-rog02) | Fork @d0bce2d (Strukturformate) | OTA vom Server | läuft; Main Micom/EEPROM als „DB91-… JJMMTT“, Product Option als „[0]…-[3]…“ (S-NET-Abgleich) |
| 23.10.2026 10:05 | fb05a52 | 2026.9.1 (Container auf mab-rog02) | Fork @d0bce2d | OTA vom Server | läuft; FSV 5012/5042/5043 aus der Fork-Bibliothek statt eigener Rohwerte (0x4274/0x40A5/0x40A6 entfernt) |
| 23.10.2026 10:27 | f7d55e4 | 2026.9.1 (Container auf mab-rog02) | Fork @99d84c9 | OTA vom Server | läuft; Normalstand nach Startmitschnitt (Debug wieder AUS beim Start); Modell, Standort, Seriennummern, Inverter-Micom, Fehlerhistorie als Text-Sensoren |
| 23.10.2026 10:45 | 19a6a16 | 2026.9.1 (Container auf mab-rog02) | Fork @cee28a4 | OTA vom Server | läuft; Fork-Switch setzt has_state → 13 Ein/Aus-FSV-Lesekopien erstmals mit Wert (S-NET-Export bestätigt) |
| 23.10.2026 10:52 | 058bee0 | 2026.9.1 (Container auf mab-rog02) | Fork @cee28a4 | OTA vom Server | läuft; FSV 1061–1064 (0x431E–0x4321, Anlage meldet 65535) auskommentiert |
| 23.10.2026 11:07 | cb6ed26 | 2026.9.1 (Container auf mab-rog02) | Fork @f71483a | OTA vom Server | läuft; Strukturlänge aus Paketlänge (vorher Fremdbytes aus dem Puffer), Text mit Längenbyte (0x061A) |
| 23.10.2026 11:32 | 982e988 | 2026.9.1 (Container auf mab-rog02) | Fork @6534c4e | OTA vom Server | läuft; WLAN-Modul als Gerät 62.00.91, MAC-Adresse (0x061C, Format mac) als Text-Sensor |
| 23.10.2026 11:55 | COMMIT | 2026.9.1 (Container auf mab-rog02) | Fork @a88d62d | OTA vom Server | läuft; Rohbyte-Modus sendet nur RAW (Server dekodiert), q zählt jede Zeile, d/k entfernt, Paketköpfe nur im Debug |

Seit 22.10.2026 ist die Komponente auf einen festen Commit des Forks festgelegt. Rückweg: Tag `firmware-2026-10-23k` (ältere Tags am 23.10.2026 gelöscht; frühere Stände über den YAML-Commit in der Tabelle).
