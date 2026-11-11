# Entitäten der Wärmepumpe

Stand: 11.11.2026 (328 Entitäten in Home Assistant). Alle entity_ids beginnen mit `wp_`; der Anzeigename in HA ist
„Wärmepumpe <Name>“ bzw. bei FSV „<FSV-Gruppe> <Name>“. Schreibbare Entitäten (Zahl, Auswahl, Schalter, Taste) wirken direkt auf die Anlage.

Erzeugt aus `esphome/esphome-samsung-hvac-bus.yaml` (validierte Konfiguration) und den Entitäten in Home Assistant. Quelle „NASA 0x…“ = Kennung auf dem Samsung-Bus, „FSV“ = Feldeinstellung. Als `internal` markierte Sensoren (Werte, die diese Anlage nicht liefert, und interne Hilfswerte) fehlen hier, ebenso Auswertungen,
die ein Server außerhalb dieses Repositorys in HA einspeist (`wp_diagnose_*`, `wp_analyse_*`).

## Diagnose & Bus (104)

| Name | entity_id | Art | Quelle | Einheit |
|---|---|---|---|---|
| Abtauschritt | `sensor.wp_nasa_8247` | Sensor | NASA 0x8247 |  |
| Abtauschritt logisch | `sensor.wp_nasa_8062` | Sensor | NASA 0x8062 |  |
| Angeforderte Austrittstemperatur | `sensor.wp_nasa_4202` | Sensor | NASA 0x4202 | °C |
| Angeforderte Leistung Innengerät | `sensor.wp_nasa_4211` | Sensor | NASA 0x4211 | kW |
| Außeneinheit Seriennummer | `sensor.wp_ausseneinheit_seriennummer` | Text | NASA 0x0607 |  |
| Außeneinheit Standort | `sensor.wp_ausseneinheit_standort` | Text | NASA 0x0605 |  |
| Außentemperatur Innengerät Rohwert | `sensor.wp_nasa_420c` | Sensor | NASA 0x420C |  |
| Betriebszustand Außengerät | `sensor.wp_nasa_8003` | Text | NASA 0x8003 |  |
| Debug & Syslog | `switch.wp_debug_syslog` | Schalter | berechnet (Template) |  |
| Doppelrohr-Wärmetauscher Temperatur Kopie | `sensor.wp_nasa_82de` | Sensor | NASA 0x82DE | °C |
| Durchflusssensor Messsignal (NASA) | `sensor.wp_durchflusssensor_messsignal_nasa` | Sensor | NASA 0x42E8 | V |
| E438 Reset-Test 0x8065 | `button.wp_e438_reset_test_0x8065` | Taste | berechnet (Template) |  |
| EEPROM-Stand Außengerät | `sensor.wp_nasa_060c` | Text | NASA 0x060C |  |
| Fehler zurücksetzen (E438) | `button.wp_e438_reset_0x8065_wert_2_write` | Taste | berechnet (Template) |  |
| Fehlercode | `sensor.wp_fehlercode` | Sensor | NASA 0x8235 |  |
| Fehlercode Kopie Außengerät | `sensor.wp_nasa_0202` | Sensor | NASA 0x0202 |  |
| Fehlercode Kopie Innengerät | `sensor.wp_nasa_440f` | Sensor | NASA 0x440F |  |
| Fehlercodes Aussengeraet 0x860B abrufen | `button.wp_fehlercodes_aussengeraet_0x860b_abrufen` | Taste | berechnet (Template) |  |
| Fehlerhistorie 0x461E lesen | `button.wp_fehlerhistorie_0x461e_lesen` | Taste | berechnet (Template) |  |
| Fehlerhistorie Innengerät | `sensor.wp_nasa_461e` | Text | NASA 0x461E |  |
| Firmware-Stand Außengerät | `sensor.wp_nasa_0608_aussen` | Text | NASA 0x0608 |  |
| Firmware-Stand Innengerät | `sensor.wp_nasa_0608_innen` | Text | NASA 0x0608 |  |
| Freier Speicher | `sensor.wp_freier_speicher` | Sensor | berechnet (Template) | B |
| FSV-Info Antwort (0x4612) | `sensor.wp_fsv_info_antwort_0x4612` | Text | NASA 0x4612 |  |
| Gerätedaten lesen | `button.wp_geraetedaten_lesen` | Taste | berechnet (Template) |  |
| Heizanteil Außengerät | `sensor.wp_nasa_8231` | Sensor | NASA 0x8231 |  |
| Heißgas Soll Heizen Innengerät Rohwert | `sensor.wp_heissgas_soll_heizen_innengeraet_rohwert` | Sensor | NASA 0x422B |  |
| HR-Bypass-EEV | `sensor.wp_nasa_82e8` | Sensor | NASA 0x82E8 |  |
| Inneneinheit Leistungsaufnahme (NASA) | `sensor.wp_inneneinheit_leistungsaufnahme_nasa` | Sensor | NASA 0x4284 | W |
| Inneneinheit Seriennummer | `sensor.wp_inneneinheit_seriennummer` | Text | NASA 0x0607 |  |
| Innengeräte Gesamtkapazität 1 | `sensor.wp_nasa_82a8` | Sensor | NASA 0x82A8 |  |
| Innengeräte Gesamtkapazität 2 | `sensor.wp_nasa_82a9` | Sensor | NASA 0x82A9 |  |
| Installationsleistung Außengerät | `sensor.wp_nasa_8287` | Sensor | NASA 0x8287 | HP |
| Inverter Micom | `sensor.wp_inverter_micom` | Text | NASA 0x8601 |  |
| Leisebetrieb Status | `sensor.wp_nasa_4046` | Sensor | NASA 0x4046 |  |
| Leistung absolut Innengerät | `sensor.wp_nasa_4212` | Sensor | NASA 0x4212 | kW |
| Lüfter Betriebszustand Außengerät | `sensor.wp_nasa_800d` | Text | NASA 0x800D |  |
| Modellbezeichnung | `sensor.wp_modellbezeichnung` | Text | NASA 0x061A |  |
| NASA 0x0418 | `sensor.wp_nasa_0418` | Sensor | NASA 0x0418 |  |
| NASA 0x22F7 | `sensor.wp_nasa_22f7` | Sensor | NASA 0x22F7 |  |
| NASA 0x22FB | `sensor.wp_nasa_22fb` | Sensor | NASA 0x22FB |  |
| NASA 0x22FC | `sensor.wp_nasa_22fc` | Sensor | NASA 0x22FC |  |
| NASA 0x22FD | `sensor.wp_nasa_22fd` | Sensor | NASA 0x22FD |  |
| NASA 0x22FE | `sensor.wp_nasa_22fe` | Sensor | NASA 0x22FE |  |
| NASA 0x402A | `sensor.wp_nasa_402a` | Sensor | NASA 0x402A |  |
| NASA 0x4059 | `sensor.wp_nasa_4059` | Sensor | NASA 0x4059 |  |
| NASA 0x4213 | `sensor.wp_nasa_4213` | Sensor | NASA 0x4213 |  |
| NASA 0x4301 | `sensor.wp_nasa_4301` | Sensor | NASA 0x4301 |  |
| NASA 0x4401 | `sensor.wp_nasa_4401` | Sensor | NASA 0x4401 |  |
| NASA 0x440E | `sensor.wp_nasa_440e` | Sensor | NASA 0x440E |  |
| NASA 0x8005 | `sensor.wp_nasa_8005` | Sensor | NASA 0x8005 |  |
| NASA 0x8031 | `sensor.wp_nasa_8031` | Sensor | NASA 0x8031 |  |
| NASA 0x8032 | `sensor.wp_nasa_8032` | Sensor | NASA 0x8032 |  |
| NASA 0x8033 | `sensor.wp_nasa_8033` | Sensor | NASA 0x8033 |  |
| NASA 0x803F | `sensor.wp_nasa_803f` | Sensor | NASA 0x803F |  |
| NASA 0x803F letzter Empfang | `sensor.wp_nasa_803f_letzter_empfang` | Text | berechnet (Template) |  |
| NASA 0x805E | `sensor.wp_nasa_805e` | Sensor | NASA 0x805E |  |
| NASA 0x8063 | `sensor.wp_nasa_8063` | Sensor | NASA 0x8063 |  |
| NASA 0x8077 | `sensor.wp_nasa_8077` | Sensor | NASA 0x8077 |  |
| NASA 0x8078 | `sensor.wp_nasa_8078` | Sensor | NASA 0x8078 |  |
| NASA 0x8079 | `sensor.wp_nasa_8079` | Sensor | NASA 0x8079 |  |
| NASA 0x807F | `sensor.wp_nasa_807f` | Sensor | NASA 0x807F |  |
| NASA 0x8224 | `sensor.wp_nasa_8224` | Sensor | NASA 0x8224 |  |
| NASA 0x8225 | `sensor.wp_nasa_8225` | Sensor | NASA 0x8225 |  |
| NASA 0x823C | `sensor.wp_nasa_823c` | Sensor | NASA 0x823C |  |
| NASA 0x8243 | `sensor.wp_nasa_8243` | Sensor | NASA 0x8243 |  |
| NASA 0x8249 | `sensor.wp_nasa_8249` | Sensor | NASA 0x8249 |  |
| NASA 0x824B | `sensor.wp_nasa_824b` | Sensor | NASA 0x824B |  |
| NASA 0x824C | `sensor.wp_nasa_824c` | Sensor | NASA 0x824C |  |
| NASA 0x82A2 | `sensor.wp_nasa_82a2` | Sensor | NASA 0x82A2 |  |
| NASA 0x82B2 | `sensor.wp_nasa_82b2` | Sensor | NASA 0x82B2 |  |
| NASA 0x82B5 | `sensor.wp_nasa_82b5` | Sensor | NASA 0x82B5 |  |
| NASA 0x82ED | `sensor.wp_nasa_82ed` | Sensor | NASA 0x82ED |  |
| NASA 0x82F6 | `sensor.wp_nasa_82f6` | Sensor | NASA 0x82F6 |  |
| NASA 0x8404 Bit 01 | `binary_sensor.wp_nasa_8404_bit_01` | Binärsensor | berechnet (Template) |  |
| NASA 0x8404 Bit 06 | `binary_sensor.wp_nasa_8404_bit_06` | Binärsensor | berechnet (Template) |  |
| NASA 0x8404 Bit 09 | `binary_sensor.wp_nasa_8404_bit_09` | Binärsensor | berechnet (Template) |  |
| NASA 0x8404 Bit 13 | `binary_sensor.wp_nasa_8404_bit_13` | Binärsensor | berechnet (Template) |  |
| NASA 0x8404 Bit 15 | `binary_sensor.wp_nasa_8404_bit_15` | Binärsensor | berechnet (Template) |  |
| NASA 0x8404 Bit 16 | `binary_sensor.wp_nasa_8404_bit_16` | Binärsensor | berechnet (Template) |  |
| NASA 0x8404 Bit 18 | `binary_sensor.wp_nasa_8404_bit_18` | Binärsensor | berechnet (Template) |  |
| NASA 0x8404 Bit 23 | `binary_sensor.wp_nasa_8404_bit_23` | Binärsensor | berechnet (Template) |  |
| NASA 0x8404 Bit 26 | `binary_sensor.wp_nasa_8404_bit_26` | Binärsensor | berechnet (Template) |  |
| NASA 0x8404 hex | `sensor.wp_nasa_8404_hex` | Text | berechnet (Template) |  |
| NASA 0x8404 letzter Empfang | `sensor.wp_nasa_8404_letzter_empfang` | Text | berechnet (Template) |  |
| NASA 0x8404 Rohwert exakt | `sensor.wp_nasa_8404_rohwert_exakt` | Text | NASA 0x8404 |  |
| NASA 0x8408 | `sensor.wp_nasa_8408` | Sensor | NASA 0x8408 |  |
| NASA 0x8608 | `sensor.wp_nasa_8608` | Text | NASA 0x8608 |  |
| NASA Rohbytes protokollieren | `switch.wp_nasa_rohbytes_protokollieren` | Schalter | berechnet (Template) |  |
| Nennleistung Außengerät | `sensor.wp_nasa_82e3` | Sensor | NASA 0x82E3 | kW |
| OCT1 Temperatur | `sensor.wp_oct1_temperatur` | Sensor | berechnet (Template) | °C |
| OCT1 Temperatur Rohwert | `sensor.wp_nasa_8278` | Sensor | NASA 0x8278 |  |
| Produktoption Innengerät | `sensor.wp_nasa_0600` | Text | NASA 0x0600 |  |
| Regelzustand Code | `sensor.wp_regelzustand_code` | Sensor | NASA 0x8233 |  |
| Samsung Fehlerbeschreibung | `sensor.wp_samsung_fehlerbeschreibung` | Text | NASA 0x8235 |  |
| Sicherheitsstart Schritt | `sensor.wp_nasa_8248` | Sensor | NASA 0x8248 |  |
| Syslog verworfene Zeilen | `sensor.wp_syslog_verworfene_zeilen` | Sensor | berechnet (Template) |  |
| Ventilstellung Code (3 = Warmwasser) | `sensor.wp_nasa_408a` | Sensor | NASA 0x408A |  |
| Verdichter Betriebsstunden | `sensor.wp_nasa_8405` | Sensor | NASA 0x8405 |  |
| Vorlauf Tw2 minus 2 K | `sensor.wp_nasa_4204` | Sensor | NASA 0x4204 | °C |
| WLAN-Modul MAC-Adresse | `sensor.wp_wlan_modul_mac_adresse` | Text | NASA 0x061C |  |
| Zustandsbits Außengerät | `sensor.wp_nasa_8404` | Sensor | NASA 0x8404 |  |
| Zyklusdaten vor Fehler 0x860B abrufen | `button.wp_zyklusdaten_vor_fehler_0x860b_abrufen` | Taste | berechnet (Template) |  |
| Ölausgleich Schritt | `sensor.wp_nasa_8245` | Sensor | NASA 0x8245 |  |

## FSV-Einstellungen (Lesekopien) (112)

| Name | entity_id | Art | Quelle | Einheit |
|---|---|---|---|---|
| FSV 1011 - Kühlbetrieb maximale Vorlauftemperatur | `sensor.wp_fsv_1011` | Sensor | berechnet (Template) | °C |
| FSV 1012 - Kühlbetrieb minimale Vorlauftemperatur | `sensor.wp_fsv_1012` | Sensor | berechnet (Template) | °C |
| FSV 1021 - Kühlbetrieb maximale Raumtemperatur | `sensor.wp_fsv_1021` | Sensor | berechnet (Template) | °C |
| FSV 1022 - Kühlbetrieb minimale Raumtemperatur | `sensor.wp_fsv_1022` | Sensor | berechnet (Template) | °C |
| FSV 1031 - Heizbetrieb maximale Vorlauftemperatur | `sensor.wp_fsv_1031` | Sensor | berechnet (Template) | °C |
| FSV 1032 - Heizbetrieb minimale Vorlauftemperatur | `sensor.wp_fsv_1032` | Sensor | berechnet (Template) | °C |
| FSV 1041 - Heizbetrieb maximale Raumtemperatur | `sensor.wp_fsv_1041` | Sensor | berechnet (Template) | °C |
| FSV 1042 - Heizbetrieb minimale Raumtemperatur | `sensor.wp_fsv_1042` | Sensor | berechnet (Template) | °C |
| FSV 1051 - Warmwasserspeicher maximale Temperatur | `sensor.wp_fsv_1051` | Sensor | berechnet (Template) | °C |
| FSV 1052 - Warmwasserspeicher minimale Temperatur | `sensor.wp_fsv_1052` | Sensor | berechnet (Template) | °C |
| FSV 1061 - Vorlauf-Hysterese Heizen | `sensor.wp_fsv_1061` | Sensor | berechnet (Template) | K |
| FSV 1062 - Vorlauf-Hysterese Kühlen | `sensor.wp_fsv_1062` | Sensor | berechnet (Template) | K |
| FSV 1063 - Raum-Hysterese Heizen | `sensor.wp_fsv_1063` | Sensor | berechnet (Template) | K |
| FSV 1064 - Raum-Hysterese Kühlen | `sensor.wp_fsv_1064` | Sensor | berechnet (Template) | K |
| FSV 2011 - Heizkurve Außentemperatur bei Kälte | `sensor.wp_fsv_2011` | Sensor | berechnet (Template) | °C |
| FSV 2012 - Heizkurve Außentemperatur bei Wärme | `sensor.wp_fsv_2012` | Sensor | berechnet (Template) | °C |
| FSV 2021 - Heizkurve WL1 Vorlauf bei Kälte | `sensor.wp_fsv_2021` | Sensor | berechnet (Template) | °C |
| FSV 2022 - Heizkurve WL1 Vorlauf bei Wärme | `sensor.wp_fsv_2022` | Sensor | berechnet (Template) | °C |
| FSV 2031 - Heizkurve WL2 Vorlauf bei Kälte | `sensor.wp_fsv_2031` | Sensor | berechnet (Template) | °C |
| FSV 2032 - Heizkurve WL2 Vorlauf bei Wärme | `sensor.wp_fsv_2032` | Sensor | berechnet (Template) | °C |
| FSV 2041 - Heizkurve WL1 oder WL2 Auswahl | `sensor.wp_fsv_2041` | Text | berechnet (Template) |  |
| FSV 2051 - Kühlkurve Außentemperatur untere Grenze | `sensor.wp_fsv_2051` | Sensor | berechnet (Template) | °C |
| FSV 2052 - Kühlkurve Außentemperatur obere Grenze | `sensor.wp_fsv_2052` | Sensor | berechnet (Template) | °C |
| FSV 2061 - Kühlkurve WL1 maximale Vorlauftemperatur | `sensor.wp_fsv_2061` | Sensor | berechnet (Template) | °C |
| FSV 2062 - Kühlkurve WL1 minimale Vorlauftemperatur | `sensor.wp_fsv_2062` | Sensor | berechnet (Template) | °C |
| FSV 2071 - Kühlkurve WL2 maximale Vorlauftemperatur | `sensor.wp_fsv_2071` | Sensor | berechnet (Template) | °C |
| FSV 2072 - Kühlkurve WL2 minimale Vorlauftemperatur | `sensor.wp_fsv_2072` | Sensor | berechnet (Template) | °C |
| FSV 2081 - Kühlkurve WL1 oder WL2 Auswahl | `sensor.wp_fsv_2081` | Text | berechnet (Template) |  |
| FSV 2091 - Externer Raumthermostat Zone 1 | `sensor.wp_fsv_2091` | Text | berechnet (Template) |  |
| FSV 2092 - Externer Raumthermostat Zone 2 | `sensor.wp_fsv_2092` | Text | berechnet (Template) |  |
| FSV 2093 - Raumtemperaturregelung Betriebsart | `sensor.wp_fsv_2093` | Text | berechnet (Template) |  |
| FSV 3011 - Warmwasserbereitung aktivierte Betriebsart | `sensor.wp_fsv_3011` | Text | berechnet (Template) |  |
| FSV 3021 - Warmwasser maximale Wärmepumpentemperatur | `sensor.wp_fsv_3021` | Sensor | berechnet (Template) | °C |
| FSV 3022 - Warmwasser Ausschalthysterese | `sensor.wp_fsv_3022` | Sensor | berechnet (Template) | °C |
| FSV 3023 - Warmwasser Einschalthysterese | `sensor.wp_fsv_3023` | Sensor | berechnet (Template) | °C |
| FSV 3024 - Raumheizung Mindestlaufzeit | `sensor.wp_fsv_3024` | Sensor | berechnet (Template) | min |
| FSV 3025 - Warmwasser Wärmepumpe maximale Laufzeit | `sensor.wp_fsv_3025` | Sensor | berechnet (Template) | min |
| FSV 3026 - Raumheizung maximale Laufzeit zwischen Warmwasser | `sensor.wp_fsv_3026` | Sensor | berechnet (Template) | h |
| FSV 3031 - Warmwasser Heizstab Freigabe | `binary_sensor.wp_fsv_3031` | Binärsensor | berechnet (Template) |  |
| FSV 3032 - Warmwasser Heizstab Einschaltverzögerung | `sensor.wp_fsv_3032` | Sensor | berechnet (Template) | min |
| FSV 3033 - Warmwasser Heizstab Temperaturüberschwingung | `sensor.wp_fsv_3033` | Sensor | berechnet (Template) | °C |
| FSV 3034 Rohwert (0x4268) | `sensor.wp_fsv_3034_rohwert` | Sensor | NASA 0x4268 |  |
| FSV 3041 - Warmwasser thermische Desinfektion aktiv | `binary_sensor.wp_fsv_3041` | Binärsensor | berechnet (Template) |  |
| FSV 3042 - Warmwasser thermische Desinfektion Wochentag | `sensor.wp_fsv_3042` | Text | berechnet (Template) |  |
| FSV 3043 - Warmwasser thermische Desinfektion Startstunde | `sensor.wp_fsv_3043` | Sensor | berechnet (Template) | h |
| FSV 3044 - Warmwasser thermische Desinfektion Zieltemperatur | `sensor.wp_fsv_3044` | Sensor | berechnet (Template) | °C |
| FSV 3045 - Warmwasser thermische Desinfektion Dauer | `sensor.wp_fsv_3045` | Sensor | berechnet (Template) | min |
| FSV 3046 - Warmwasser thermische Desinfektion Zeitlimit | `sensor.wp_fsv_3046` | Sensor | berechnet (Template) | h |
| FSV 3051 - Warmwasser Timer-Aus aktiviert | `binary_sensor.wp_fsv_3051` | Binärsensor | berechnet (Template) |  |
| FSV 3052 - Warmwasser Timer-Aus Zeitdauer | `sensor.wp_fsv_3052` | Sensor | berechnet (Template) | min |
| FSV 3061 - Solarthermie oder Warmwasserthermostat aktiviert | `sensor.wp_fsv_3061` | Text | berechnet (Template) |  |
| FSV 3071 - Dreiwegeventil Ausrichtung | `sensor.wp_fsv_3071` | Text | berechnet (Template) |  |
| FSV 3081 - Zusatzheizung Stufe 1 Nennleistung | `sensor.wp_fsv_3081` | Sensor | berechnet (Template) | kW |
| FSV 3082 - Zusatzheizung Stufe 2 Nennleistung | `sensor.wp_fsv_3082` | Sensor | berechnet (Template) | kW |
| FSV 3083 - Warmwasser Heizstab Nennleistung | `sensor.wp_fsv_3083` | Sensor | berechnet (Template) | kW |
| FSV 4011 - Vorrang Raumheizung oder Warmwasser | `sensor.wp_fsv_4011` | Text | berechnet (Template) |  |
| FSV 4012 - Außentemperatur für Vorrangregelung | `sensor.wp_fsv_4012` | Sensor | berechnet (Template) | °C |
| FSV 4013 - Heizung Abschalttemperatur außen | `sensor.wp_fsv_4013` | Sensor | berechnet (Template) | °C |
| FSV 4014 Rohwert (0x426F) | `sensor.wp_fsv_4014_rohwert` | Sensor | NASA 0x426F |  |
| FSV 4021 - Elektrische Zusatzheizung Betriebsart | `sensor.wp_fsv_4021` | Text | berechnet (Template) |  |
| FSV 4022 - Zusatzheizung und Warmwasser Heizstab Priorität | `sensor.wp_fsv_4022` | Text | berechnet (Template) |  |
| FSV 4023 - Zusatzheizung Kältekompensation | `binary_sensor.wp_fsv_4023` | Binärsensor | berechnet (Template) |  |
| FSV 4024 - Zusatzheizung Außentemperaturschwelle | `sensor.wp_fsv_4024` | Sensor | berechnet (Template) | °C |
| FSV 4025 - Zusatzheizung Abtauunterstützung Temperaturschwelle | `sensor.wp_fsv_4025` | Sensor | berechnet (Template) | °C |
| FSV 4031 - Externe Wärmequelle Freigabe | `binary_sensor.wp_fsv_4031` | Binärsensor | berechnet (Template) |  |
| FSV 4032 - Externe Wärmequelle Priorität | `binary_sensor.wp_fsv_4032` | Binärsensor | berechnet (Template) |  |
| FSV 4033 - Externe Wärmequelle Außentemperaturschwelle | `sensor.wp_fsv_4033` | Sensor | berechnet (Template) | °C |
| FSV 4041 - Mischventil Installation und Betriebsart | `sensor.wp_fsv_4041` | Text | berechnet (Template) |  |
| FSV 4042 - Mischventil Heizen Sollspreizung | `sensor.wp_fsv_4042` | Sensor | berechnet (Template) | °C |
| FSV 4043 - Mischventil Kühlen Sollspreizung | `sensor.wp_fsv_4043` | Sensor | berechnet (Template) | °C |
| FSV 4044 - Mischventil Regelfaktor | `sensor.wp_fsv_4044` | Sensor | berechnet (Template) |  |
| FSV 4045 - Mischventil Regelintervall | `sensor.wp_fsv_4045` | Sensor | berechnet (Template) | min |
| FSV 4046 - Mischventil Stellzeit | `sensor.wp_fsv_4046` | Sensor | berechnet (Template) | s |
| FSV 4051 - Inverterpumpe PWM Regelmodus | `sensor.wp_fsv_4051` | Text | berechnet (Template) |  |
| FSV 4052 - Inverterpumpe Sollspreizung | `sensor.wp_fsv_4052` | Sensor | berechnet (Template) | °C |
| FSV 4053 - Inverterpumpe Regelfaktor | `sensor.wp_fsv_4053` | Sensor | berechnet (Template) |  |
| FSV 4054 - Inverterpumpe Mindestansteuerung (Code) | `sensor.wp_fsv_4054` | Sensor | berechnet (Template) |  |
| FSV 4061 - Zonenregelung aktiviert | `binary_sensor.wp_fsv_4061` | Binärsensor | berechnet (Template) |  |
| FSV 4062 - Zonenpumpe 1 bei Thermo-off (Code) | `sensor.wp_fsv_4062` | Sensor | berechnet (Template) |  |
| FSV 4063 - Zonenpumpe 2 bei Thermo-off (Code) | `sensor.wp_fsv_4063` | Sensor | berechnet (Template) |  |
| FSV 5011 - Smart Grid Kühlung Vorlauftemperatur | `sensor.wp_fsv_5011` | Sensor | berechnet (Template) | °C |
| FSV 5012 - Smart Grid Kuehlung Raumtemperatur | `sensor.wp_fsv_5012` | Sensor | berechnet (Template) | °C |
| FSV 5013 - Smart Grid Heizung Vorlauftemperatur | `sensor.wp_fsv_5013` | Sensor | berechnet (Template) | °C |
| FSV 5014 - Smart Grid Heizung Raumtemperatur | `sensor.wp_fsv_5014` | Sensor | berechnet (Template) | °C |
| FSV 5015 - Smart Grid Kühlkurve WL1 Temperatur | `sensor.wp_fsv_5015` | Sensor | berechnet (Template) | °C |
| FSV 5016 - Smart Grid Kühlkurve WL2 Temperatur | `sensor.wp_fsv_5016` | Sensor | berechnet (Template) | °C |
| FSV 5017 - Smart Grid Heizkurve WL1 Temperatur | `sensor.wp_fsv_5017` | Sensor | berechnet (Template) | °C |
| FSV 5018 - Smart Grid Heizkurve WL2 Temperatur | `sensor.wp_fsv_5018` | Sensor | berechnet (Template) | °C |
| FSV 5019 - Smart Grid Warmwasser Speichertemperatur | `sensor.wp_fsv_5019` | Sensor | berechnet (Template) | °C |
| FSV 5021 - Warmwasser Sparbetrieb Temperaturabsenkung | `sensor.wp_fsv_5021` | Sensor | berechnet (Template) | °C |
| FSV 5022 - Warmwasser Sparbetrieb aktiviert | `binary_sensor.wp_fsv_5022` | Binärsensor | berechnet (Template) |  |
| FSV 5023 - Warmwasser Sparbetrieb Thermo-Ein Temperatur | `sensor.wp_fsv_5023` | Sensor | berechnet (Template) | °C |
| FSV 5031 Rohwert (0x427D) | `sensor.wp_fsv_5031_rohwert` | Sensor | NASA 0x427D |  |
| FSV 5032 Rohwert (0x427E) | `sensor.wp_fsv_5032_rohwert` | Sensor | NASA 0x427E |  |
| FSV 5033 - TDM Vorrang Klimagerät oder Warmwasser (nur TDM) | `sensor.wp_fsv_5033` | Sensor | berechnet (Template) |  |
| FSV 5041 - Netzbetreiber Fernsteuerung aktiviert | `binary_sensor.wp_fsv_5041` | Binärsensor | berechnet (Template) |  |
| FSV 5042 - Waermequelle bei Betriebsbegrenzung | `sensor.wp_fsv_5042` | Text | berechnet (Template) |  |
| FSV 5043 - Kontaktlogik Benefit kWh | `sensor.wp_fsv_5043` | Text | berechnet (Template) |  |
| FSV 5051 - Verdichter Frequenzbegrenzungsfunktion aktiviert | `binary_sensor.wp_fsv_5051` | Binärsensor | berechnet (Template) |  |
| FSV 5061 Rohwert (0x40B4) | `sensor.wp_fsv_5061_rohwert` | Sensor | NASA 0x40B4 |  |
| FSV 5071 Rohwert (0x4280) | `sensor.wp_fsv_5071_rohwert` | Sensor | NASA 0x4280 |  |
| FSV 5081 - Photovoltaiksteuerung aktiviert | `binary_sensor.wp_fsv_5081` | Binärsensor | berechnet (Template) |  |
| FSV 5082 - Photovoltaik Kühlung Temperaturversatz | `sensor.wp_fsv_5082` | Sensor | berechnet (Template) | °C |
| FSV 5083 - Photovoltaik Heizung Temperaturversatz | `sensor.wp_fsv_5083` | Sensor | berechnet (Template) | °C |
| FSV 5091 - Smart Grid Regelung aktiviert | `binary_sensor.wp_fsv_5091` | Binärsensor | berechnet (Template) |  |
| FSV 5092 - Smart Grid Heizung Temperaturänderung | `sensor.wp_fsv_5092` | Sensor | berechnet (Template) | °C |
| FSV 5093 - Smart Grid Warmwasser Temperaturänderung | `sensor.wp_fsv_5093` | Sensor | berechnet (Template) | °C |
| FSV 5094 - Smart Grid Warmwasser Betriebsart | `binary_sensor.wp_fsv_5094` | Binärsensor | berechnet (Template) |  |
| FSV 6022 - Mindestlaufzeit nach Thermo-on | `sensor.wp_fsv_6022` | Sensor | berechnet (Template) | min |
| FSV 6031 - Heizen optionales Thermo-Ein-Aus | `sensor.wp_fsv_6031` | Sensor | berechnet (Template) |  |
| FSV Laden und Speichern Status | `sensor.wp_nasa_4125` | Sensor | NASA 0x4125 |  |
| FSV über FSV-Info lesen (0x4612) | `button.wp_fsv_info_lesen` | Taste | berechnet (Template) |  |

## Kältekreis & Verdichter (32)

| Name | entity_id | Art | Quelle | Einheit |
|---|---|---|---|---|
| Ansaug Überhitzung berechnet | `sensor.wp_ansaug_ueberhitzung_berechnet` | Sensor | berechnet (Template) | K |
| Außeneinheit Lüfterstufe | `sensor.wp_ausseneinheit_luefterstufe` | Sensor | NASA 0x8226 |  |
| Doppelrohr Wärmetauscher Temperatur | `sensor.wp_doppelrohr_waermetauscher_temperatur` | Sensor | NASA 0x821C | °C |
| EVI Bypassventil Status | `binary_sensor.wp_evi_bypassventil_status` | Binärsensor | NASA 0x8021 |  |
| EVI EEV Ansteuerung Rohwert | `sensor.wp_evi_eev_ansteuerung_rohwert` | Sensor | NASA 0x822E |  |
| EVI Einspritzkreislauf Austrittstemperatur | `sensor.wp_evi_einspritzkreislauf_austrittstemperatur` | Sensor | NASA 0x8220 | °C |
| EVI Einspritzkreislauf Eintrittstemperatur | `sensor.wp_evi_einspritzkreislauf_eintrittstemperatur` | Sensor | NASA 0x821E | °C |
| EVI SOL EEV Ansteuerung Rohwert | `sensor.wp_evi_sol_eev_ansteuerung_rohwert` | Sensor | NASA 0x82FC |  |
| EVI Temperaturdifferenz Austritt minus Eintritt | `sensor.wp_evi_temperaturdifferenz_austritt_minus_eintritt` | Sensor | berechnet (Template) | K |
| Haupt-EEV Schritt | `sensor.wp_haupt_eev_schritt` | Sensor | NASA 0x823F | Schritte |
| Haupt-EEV1 | `sensor.wp_haupt_eev1` | Sensor | NASA 0x8229 | Schritte |
| Heißgas Überhitzung berechnet | `sensor.wp_heissgas_ueberhitzung_berechnet` | Sensor | berechnet (Template) | K |
| Heißgasventil Status | `binary_sensor.wp_heissgasventil_status` | Binärsensor | NASA 0x8017 |  |
| Hochdruck | `sensor.wp_hochdruck` | Sensor | NASA 0x8206 | bar |
| Kältekreis Hochdruck Sättigungstemperatur | `sensor.wp_kaeltekreis_hochdruck_saettigungstemperatur` | Sensor | NASA 0x829F | °C |
| Kältekreis Niederdruck Sättigungstemperatur | `sensor.wp_kaeltekreis_niederdruck_saettigungstemperatur` | Sensor | NASA 0x82A0 | °C |
| Kältemittel Flüssigkeitsventil Status | `binary_sensor.wp_kaeltemittel_fluessigkeitsventil_status` | Binärsensor | NASA 0x8019 |  |
| Kältemittel Vierwegeventil Status | `binary_sensor.wp_kaeltemittel_vierwegeventil_status` | Binärsensor | NASA 0x801A |  |
| Lüfter Drehzahl | `sensor.wp_luefter_drehzahl` | Sensor | NASA 0x823D | RPM |
| Niederdruck | `sensor.wp_niederdruck` | Sensor | NASA 0x8208 | bar |
| Verdampfer Temperatur | `sensor.wp_verdampfer_temperatur` | Sensor | NASA 0x8234 | °C |
| Verdichter angeforderte Frequenz | `sensor.wp_verdichter_angeforderte_frequenz` | Sensor | NASA 0x8236 | Hz |
| Verdichter Ansaugtemperatur | `sensor.wp_verdichter_ansaugtemperatur` | Sensor | NASA 0x821A | °C |
| Verdichter Frequenz | `sensor.wp_verdichter_frequenz` | Sensor | NASA 0x8238 | Hz |
| Verdichter Gehäusetemperatur TOP1 | `sensor.wp_verdichter_gehaeusetemperatur_top1` | Sensor | NASA 0x8280 | °C |
| Verdichter Heißgastemperatur | `sensor.wp_verdichter_heissgastemperatur` | Sensor | NASA 0x820A | °C |
| Verdichter in Betrieb | `binary_sensor.wp_verdichter_in_betrieb` | Binärsensor | NASA 0x8010 |  |
| Verdichter Last | `sensor.wp_verdichter_last` | Sensor | NASA 0x8239 |  |
| Verdichter Zielfrequenz | `sensor.wp_verdichter_zielfrequenz` | Sensor | NASA 0x8237 | Hz |
| Verdichter Überhitzungsfühler DSH1 Temperatur | `sensor.wp_verdichter_ueberhitzungsfuehler_dsh1_temperatur` | Sensor | NASA 0x827A | °C |
| Wechselrichter Gleichspannungszwischenkreis | `sensor.wp_wechselrichter_gleichspannungszwischenkreis` | Sensor | NASA 0x823B | V |
| Wechselrichter Leistungsmodul IPM1 Temperatur | `sensor.wp_wechselrichter_leistungsmodul_ipm1_temperatur` | Sensor | NASA 0x8254 | °C |

## Heizwasser & Heizkurve (19)

| Name | entity_id | Art | Quelle | Einheit |
|---|---|---|---|---|
| Heizkurve Vorlauf Soll | `sensor.wp_heizkurve_vorlauf_soll` | Sensor | NASA 0x427F | °C |
| Heizkurvenversatz | `number.wp_heizkurvenversatz` | Zahl | NASA 0x4248 | °C |
| Heizwasser berechnete thermische Leistung | `sensor.wp_heizwasser_berechnete_thermische_leistung` | Sensor | berechnet (Template) | W |
| Heizwasser Rücklauf Tw1 | `sensor.wp_heizwasser_ruecklauf_tw1` | Sensor | NASA 0x4236 | °C |
| Heizwasser Rücklauf Tw1 Außeneinheit Spiegelwert | `sensor.wp_heizwasser_ruecklauf_tw1_ausseneinheit_spiegelwert` | Sensor | NASA 0x82DF | °C |
| Heizwasser Spreizung Vorlauf minus Rücklauf | `sensor.wp_heizwasser_spreizung_vorlauf_minus_ruecklauf` | Sensor | berechnet (Template) | K |
| Heizwasser Temperatur nach Zusatzheizer Tw3 | `sensor.wp_heizwasser_temperatur_nach_zusatzheizer_tw3` | Sensor | NASA 0x4239 | °C |
| Heizwasser Volumenstrom | `sensor.wp_heizwasser_volumenstrom` | Sensor | NASA 0x42E9 | L/min |
| Heizwasser Vorlauf Tw2 | `sensor.wp_heizwasser_vorlauf_tw2` | Sensor | NASA 0x4238 | °C |
| Heizwasser Vorlaufabweichung Ist minus Soll | `sensor.wp_heizwasser_vorlaufabweichung_ist_minus_soll` | Sensor | berechnet (Template) | K |
| Heizwasserpumpe aktiv | `binary_sensor.wp_heizwasserpumpe_aktiv` | Binärsensor | NASA 0x4089 |  |
| Heizwasserpumpe PWM Ansteuerung | `sensor.wp_heizwasserpumpe_pwm_ansteuerung` | Sensor | NASA 0x40C4 | % |
| Raum Solltemperatur | `number.wp_raum_solltemperatur` | Zahl | NASA 0x4201 | °C |
| Raumtemperatur | `sensor.wp_raumtemperatur` | Sensor | berechnet (Template) | °C |
| Vorlauf Solltemperatur | `number.wp_vorlauf_solltemperatur` | Zahl | NASA 0x4247 | °C |
| Vorlauf Solltemperatur (Anzeige) | `sensor.wp_vorlauf_solltemperatur_anzeige` | Sensor | berechnet (Template) | °C |
| Vorlauftemperatur als Regelreferenz aktiv | `binary_sensor.wp_vorlauftemperatur_als_regelreferenz_aktiv` | Binärsensor | NASA 0x406F |  |
| Vorlauftemperatur Samsung | `sensor.wp_vorlauftemperatur_samsung` | Sensor | NASA 0x82E0 | °C |
| Zone 2 Raumtemperatur | `sensor.wp_zone_2_raumtemperatur` | Sensor | NASA 0x42D4 | °C |

## Warmwasser (7)

| Name | entity_id | Art | Quelle | Einheit |
|---|---|---|---|---|
| Dreiwegeventil Warmwasserstellung | `binary_sensor.wp_dreiwegeventil_warmwasserstellung` | Binärsensor | NASA 0x4067 |  |
| Warmwasser Betriebsart | `select.wp_warmwasser_betriebsart` | Auswahl | NASA 0x4066 |  |
| Warmwasser Ein | `switch.wp_warmwasser_ein` | Schalter | NASA 0x4065 |  |
| Warmwasser Heizstab Status | `binary_sensor.wp_warmwasser_heizstab_status` | Binärsensor | NASA 0x4087 |  |
| Warmwasser Solltemperatur | `number.wp_warmwasser_solltemperatur` | Zahl | NASA 0x4235 | °C |
| Warmwasser Solltemperatur (Anzeige) | `sensor.wp_warmwasser_solltemperatur_anzeige` | Sensor | berechnet (Template) | °C |
| Warmwasser Temperatur | `sensor.wp_warmwasser_temperatur` | Sensor | NASA 0x4237 | °C |

## Energie & Leistung (30)

| Name | entity_id | Art | Quelle | Einheit |
|---|---|---|---|---|
| Außeneinheit Energie gesamt | `sensor.wp_ausseneinheit_energie_gesamt` | Sensor | NASA 0x8414 | kWh |
| Außeneinheit gemeldete Leistung | `sensor.wp_ausseneinheit_gemeldete_leistung` | Sensor | NASA 0x8240 | kW |
| Außeneinheit Leistung | `sensor.wp_ausseneinheit_leistung` | Sensor | NASA 0x8411 | W |
| Außeneinheit Spannung | `sensor.wp_ausseneinheit_spannung` | Sensor | NASA 0x24FC | V |
| Außeneinheit Strom | `sensor.wp_ausseneinheit_strom` | Sensor | NASA 0x8217 | A |
| Außenwärmetauscher Austrittstemperatur | `sensor.wp_aussenwaermetauscher_austrittstemperatur` | Sensor | NASA 0x8218 | °C |
| COP gesamt | `sensor.wp_cop_gesamt` | Sensor | berechnet (Template) | COP |
| COP momentan | `sensor.wp_cop_momentan` | Sensor | berechnet (Template) |  |
| Inneneinheit Wärmetauscher Austrittstemperatur | `sensor.wp_inneneinheit_waermetauscher_austrittstemperatur` | Sensor | NASA 0x4206 | °C |
| Inneneinheit Wärmetauscher Eintrittstemperatur | `sensor.wp_inneneinheit_waermetauscher_eintrittstemperatur` | Sensor | NASA 0x4205 | °C |
| Leistungsaufnahme | `sensor.wp_leistungsaufnahme` | Sensor | NASA 0x8413 | W |
| Plattenwärmetauscher Zusatzheizung Status | `binary_sensor.wp_plattenwaermetauscher_zusatzheizung_status` | Binärsensor | NASA 0x80D7 |  |
| Strom davon Abtauen | `sensor.wp_strom_davon_abtauen` | Sensor | berechnet (Template) | kWh |
| Strom Heizen | `sensor.wp_strom_heizen` | Sensor | berechnet (Template) | kWh |
| Strom Pause | `sensor.wp_strom_pause` | Sensor | berechnet (Template) | kWh |
| Strom unbekannt | `sensor.wp_strom_unbekannt` | Sensor | berechnet (Template) | kWh |
| Strom verbraucht gesamt | `sensor.wp_strom_verbraucht_gesamt` | Sensor | NASA 0x8414 | kWh |
| Strom Warmwasser | `sensor.wp_strom_warmwasser` | Sensor | berechnet (Template) | kWh |
| Verdichter Laufzeit davon Abtauen | `sensor.wp_verdichter_laufzeit_davon_abtauen` | Sensor | berechnet (Template) | h |
| Verdichter Laufzeit Heizen | `sensor.wp_verdichter_laufzeit_heizen` | Sensor | berechnet (Template) | h |
| Verdichter Laufzeit Warmwasser | `sensor.wp_verdichter_laufzeit_warmwasser` | Sensor | berechnet (Template) | h |
| Verdichter Pausenzeit | `sensor.wp_verdichter_pausenzeit` | Sensor | berechnet (Template) | h |
| Verdichter Starts Heizen | `sensor.wp_verdichter_starts_heizen` | Sensor | berechnet (Template) |  |
| Verdichter Starts Warmwasser | `sensor.wp_verdichter_starts_warmwasser` | Sensor | berechnet (Template) |  |
| Wärme davon Abtauen | `sensor.wp_waerme_davon_abtauen` | Sensor | berechnet (Template) | kWh |
| Wärme erzeugt gesamt | `sensor.wp_waerme_erzeugt_gesamt` | Sensor | NASA 0x4427 | kWh |
| Wärme Heizen | `sensor.wp_waerme_heizen` | Sensor | berechnet (Template) | kWh |
| Wärme Pause und unbekannt | `sensor.wp_waerme_pause_und_unbekannt` | Sensor | berechnet (Template) | kWh |
| Wärme Warmwasser | `sensor.wp_waerme_warmwasser` | Sensor | berechnet (Template) | kWh |
| Wärmeleistung | `sensor.wp_waermeleistung` | Sensor | NASA 0x4426 | W |

## Betrieb & Status (22)

| Name | entity_id | Art | Quelle | Einheit |
|---|---|---|---|---|
| Abtauung Ablaufcode | `sensor.wp_abtauung_ablaufcode` | Sensor | NASA 0x8061 |  |
| Abtauung Ablaufstatus | `sensor.wp_abtauung_ablaufstatus` | Text | NASA 0x8061 |  |
| Abtauung aktiv | `binary_sensor.wp_abtauung_aktiv` | Binärsensor | NASA 0x402E |  |
| Aktive Betriebsstunden seit Inbetriebnahme | `sensor.wp_aktive_betriebsstunden_seit_inbetriebnahme` | Sensor | NASA 0x4424 | h |
| Automatische Reinigung | `switch.wp_automatische_reinigung` | Schalter | NASA 0x4111 |  |
| Außeneinheit Betriebszustand | `sensor.wp_ausseneinheit_betriebszustand` | Text | NASA 0x8001 |  |
| Außeneinheit Bodenheizung Status | `binary_sensor.wp_ausseneinheit_bodenheizung_status` | Binärsensor | NASA 0x80AF |  |
| Außeneinheit Servicebetriebsart | `sensor.wp_ausseneinheit_servicebetriebsart` | Text | NASA 0x8000 |  |
| Außeneinheit Servicebetriebsart Code | `sensor.wp_ausseneinheit_servicebetriebsart_code` | Sensor | NASA 0x8000 |  |
| Außentemperatur | `sensor.wp_aussentemperatur` | Sensor | NASA 0x8204 | °C |
| Betriebsmodus | `select.wp_betriebsmodus` | Auswahl | NASA 0x4001 |  |
| Betriebsmodus Code | `sensor.wp_betriebsmodus_code` | Sensor | NASA 0x8001 |  |
| Dreiwegeventil Stellung | `sensor.wp_dreiwegeventil_stellung` | Text | NASA 0x4067 |  |
| Elektrische Zusatzheizung Status | `binary_sensor.wp_elektrische_zusatzheizung_status` | Binärsensor | NASA 0x406C |  |
| Heizung Ein | `switch.wp_heizung_ein` | Schalter | NASA 0x4000 |  |
| Inneneinheit Betriebsart | `sensor.wp_inneneinheit_betriebsart` | Text | NASA 0x4002 |  |
| Inneneinheit Betriebsart Code | `sensor.wp_inneneinheit_betriebsart_code` | Sensor | NASA 0x4002 |  |
| Leisebetrieb aktiv (abgeleitet) | `binary_sensor.wp_leisebetrieb_aktiv_abgeleitet` | Binärsensor | berechnet (Template) |  |
| Nachtfenster aktiv (20–06) | `binary_sensor.wp_nachtfenster_aktiv_20_06` | Binärsensor | berechnet (Template) |  |
| Tage seit Inbetriebnahme | `sensor.wp_tage_seit_inbetriebnahme` | Sensor | NASA 0x4423 | d |
| Temperaturreferenz | `select.wp_temperaturreferenz` | Auswahl | NASA 0x406F |  |
| Thermoanforderung aktiv | `binary_sensor.wp_thermoanforderung_aktiv` | Binärsensor | NASA 0x4028 |  |

## Climate

| Name | entity_id | Typ | Quelle | Einheit |
|---|---|---|---|---|
| Warmwasser | `climate.wp_warmwasser` | Climate | 0x4065 Ein/Aus, 0x4237 Ist, 0x4235 Soll, 0x4066 Preset, 0x4067 Aktion | °C |
| Heizung | `climate.wp_heizung` | Climate | 0x4000 Ein/Aus, 0x4238 Vorlauf, 0x4028 Aktion | °C |

