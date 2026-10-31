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
| 23.10.2026 11:55 | 95f583c | 2026.9.1 (Container auf mab-rog02) | Fork @a88d62d | OTA vom Server | läuft; Rohbyte-Modus sendet nur RAW (Server dekodiert), q zählt jede Zeile, d/k entfernt, Paketköpfe nur im Debug |
| 30.10.2026 00:43 | (dieser Commit) | 2026.9.1 (Container auf mab-rog02) | Fork @a88d62d | OTA vom Server | läuft; 0x8404 exakt/hex/Bits, Empfangszeit 0x803F/0x8404 (docs/nasa/diagnose-803f-8404.md), RAM 60 %, freier Heap ~64 kB; Sicherung des Vorstands: ~/backups/esp-firmware-20261030 auf mab-rog02 |
| 30.10.2026 06:50 | (dieser Commit) | 2026.10.1 (Container auf mab-rog02) | Fork @03c6fc9 (Branch diagnose-2026.10 = Beormund main inkl. PR #123/#124 + Diagnose + numeric_format) | OTA vom Server | läuft; min_version 2026.10.0, RAM 59,7 %, freier Heap ~65 kB; Binärdateien ~/backups/esp-firmware-20261030b |
| 30.10.2026 07:22 | (dieser Commit) | 2026.10.1 (Container auf mab-rog02) | Fork @98931f4 (Branch diagnose-2026.10b = Beormund main + PR #130/#132/#133/#134) | OTA vom Server | läuft; FSV 5012/5042/5043 in der täglichen Leseliste (nach Neustart nicht mehr unbekannt), STATS/n= im Debug geprüft (0 Fehler), Heap ~64 kB |
| 30.10.2026 07:52 | (dieser Commit) | 2026.10.1 (Container auf mab-rog02) | Fork @6183daa (diagnose-2026.10b + read-addressed) | OTA vom Server | läuft; Sensor 0x422B ergänzt. Gezielter Read 0x8223/0x422B getestet: Antwort 65535 (nicht vorhanden), daher keine regelmäßige Abfrage |
| 30.10.2026 08:00 | (dieser Commit) | 2026.10.1 (Container auf mab-rog02) | Fork @ba87cef (diagnose-2026.10b + sensors-from-snet) | OTA vom Server | läuft; 0x4211/0x4212 in kW (13,95), 0x8287 5 HP, 0x82E3 14,0 kW, 0x4239 Skalierung aus Bibliothek (TW3 52,3 °C bei TW2 53,7 °C); zwischen 07:53 und 08:00 TW3 doppelt skaliert (×0,01) in der DB |
| 31.10.2026 13:52 | (dieser Commit) | 2026.10.1 (Container auf mab-rog02) | Fork @7b4cec7 (diagnose-2026.10d = 2026.10c + Aktion samsung_nasa.send_structure) | OTA vom Server | läuft; Knöpfe 0x461E/0x860B nutzen die neue YAML-Aktion statt Lambda (Wunsch Beormund in PR #138). Test 13:53: 0x860B 30 Datensätze vollständig, 0x461E beantwortet |

Seit 22.10.2026 ist die Komponente auf einen festen Commit des Forks festgelegt. Rückweg: Tag `firmware-2026-10-31b` (Vorstände: `firmware-2026-10-31`, `firmware-2026-10-30e`, `firmware-2026-10-30d`, `firmware-2026-10-30c`, `firmware-2026-10-30b`, `firmware-2026-10-30` mit ESPHome 2026.9.1, `firmware-2026-10-23k`) (ältere Tags am 23.10.2026 gelöscht; frühere Stände über den YAML-Commit in der Tabelle).
