# Entitäten der Wärmepumpe

Stand: Firmware vom 22.10.2026 (207 Entitäten in Home Assistant). Alle entity_ids beginnen mit `wp_`; der Anzeigename in HA ist
„Wärmepumpe <Name>“. Schreibbare Entitäten (Zahl, Auswahl, Schalter, Taste) wirken direkt auf die Anlage.

Erzeugt aus `esphome/esphome-samsung-hvac-bus.yaml` und der HA-Registry. Quelle „NASA 0x…“ = Kennung auf dem Samsung-Bus, „FSV“ = Feldeinstellung.

## Diagnose & Bus (15)

| Name | entity_id | Art | Quelle | Einheit |
|---|---|---|---|---|
| Debug & Syslog | `–` | Schalter | berechnet (Template) |  |
| Durchflusssensor Messsignal (NASA) | `–` | Sensor | NASA 0x42E8 |  |
| E438 Reset-Test 0x8065 | `–` | Taste | berechnet (Template) |  |
| Fehlercode | `–` | Sensor | NASA 0x8235 |  |
| Freier Speicher | `–` | Sensor | berechnet (Template) | B |
| FSV 1051 - Warmwasserspeicher maximale Temperatur | `–` | Sensor | berechnet (Template) | °C |
| FSV 1052 - Warmwasserspeicher minimale Temperatur | `–` | Sensor | berechnet (Template) | °C |
| FSV 1061-1064 - Hysterese-Testwerte erneut lesen | `–` | Taste | berechnet (Template) |  |
| FSV 5019 - Smart Grid Warmwasser Speichertemperatur | `–` | Sensor | berechnet (Template) | °C |
| Inneneinheit Leistungsaufnahme (NASA) | `–` | Sensor | NASA 0x4284 |  |
| NASA 0x8065 nur lesen | `–` | Taste | berechnet (Template) |  |
| NASA Rohbytes protokollieren | `–` | Schalter | berechnet (Template) |  |
| Regelzustand Code | `–` | Sensor | NASA 0x8233 |  |
| Samsung Fehlerbeschreibung | `–` | Text | NASA 0x8235 |  |
| Syslog verworfene Zeilen | `–` | Sensor | berechnet (Template) |  |

## FSV-Einstellungen (Lesekopien) (92)

| Name | entity_id | Art | Quelle | Einheit |
|---|---|---|---|---|
| FSV 1011 - Kühlbetrieb maximale Vorlauftemperatur | `–` | Sensor | berechnet (Template) | °C |
| FSV 1012 - Kühlbetrieb minimale Vorlauftemperatur | `–` | Sensor | berechnet (Template) | °C |
| FSV 1021 - Kühlbetrieb maximale Raumtemperatur | `–` | Sensor | berechnet (Template) | °C |
| FSV 1022 - Kühlbetrieb minimale Raumtemperatur | `–` | Sensor | berechnet (Template) | °C |
| FSV 1031 - Heizbetrieb maximale Vorlauftemperatur | `–` | Sensor | berechnet (Template) | °C |
| FSV 1032 - Heizbetrieb minimale Vorlauftemperatur | `–` | Sensor | berechnet (Template) | °C |
| FSV 1041 - Heizbetrieb maximale Raumtemperatur | `–` | Sensor | berechnet (Template) | °C |
| FSV 1042 - Heizbetrieb minimale Raumtemperatur | `–` | Sensor | berechnet (Template) | °C |
| FSV 1061 - Vorlauftemperatur Hysterese Heizen (Test) | `–` | Sensor | NASA 0x431E | °C |
| FSV 1062 - Vorlauftemperatur Hysterese Kühlen (Test) | `–` | Sensor | NASA 0x431F | °C |
| FSV 1063 - Raumtemperatur Hysterese Heizen (Test) | `–` | Sensor | NASA 0x4320 | °C |
| FSV 1064 - Raumtemperatur Hysterese Kühlen (Test) | `–` | Sensor | NASA 0x4321 | °C |
| FSV 2011 - Heizkurve Außentemperatur bei Kälte | `–` | Sensor | berechnet (Template) | °C |
| FSV 2012 - Heizkurve Außentemperatur bei Wärme | `–` | Sensor | berechnet (Template) | °C |
| FSV 2021 - Heizkurve WL1 Vorlauf bei Kälte | `–` | Sensor | berechnet (Template) | °C |
| FSV 2022 - Heizkurve WL1 Vorlauf bei Wärme | `–` | Sensor | berechnet (Template) | °C |
| FSV 2031 - Heizkurve WL2 Vorlauf bei Kälte | `–` | Sensor | berechnet (Template) | °C |
| FSV 2032 - Heizkurve WL2 Vorlauf bei Wärme | `–` | Sensor | berechnet (Template) | °C |
| FSV 2041 - Heizkurve WL1 oder WL2 Auswahl | `–` | Text | berechnet (Template) |  |
| FSV 2051 - Kühlkurve Außentemperatur untere Grenze | `–` | Sensor | berechnet (Template) | °C |
| FSV 2052 - Kühlkurve Außentemperatur obere Grenze | `–` | Sensor | berechnet (Template) | °C |
| FSV 2061 - Kühlkurve WL1 maximale Vorlauftemperatur | `–` | Sensor | berechnet (Template) | °C |
| FSV 2062 - Kühlkurve WL1 minimale Vorlauftemperatur | `–` | Sensor | berechnet (Template) | °C |
| FSV 2071 - Kühlkurve WL2 maximale Vorlauftemperatur | `–` | Sensor | berechnet (Template) | °C |
| FSV 2072 - Kühlkurve WL2 minimale Vorlauftemperatur | `–` | Sensor | berechnet (Template) | °C |
| FSV 2081 - Kühlkurve WL1 oder WL2 Auswahl | `–` | Text | berechnet (Template) |  |
| FSV 2091 - Externer Raumthermostat Zone 1 | `–` | Text | berechnet (Template) |  |
| FSV 2092 - Externer Raumthermostat Zone 2 | `–` | Text | berechnet (Template) |  |
| FSV 2093 - Raumtemperaturregelung Betriebsart | `–` | Text | berechnet (Template) |  |
| FSV 3011 - Warmwasserbereitung aktivierte Betriebsart | `–` | Text | berechnet (Template) |  |
| FSV 3021 - Warmwasser maximale Wärmepumpentemperatur | `–` | Sensor | berechnet (Template) | °C |
| FSV 3022 - Warmwasser Ausschalthysterese | `–` | Sensor | berechnet (Template) | °C |
| FSV 3023 - Warmwasser Einschalthysterese | `–` | Sensor | berechnet (Template) | °C |
| FSV 3024 - Raumheizung Mindestlaufzeit | `–` | Sensor | berechnet (Template) | min |
| FSV 3025 - Warmwasser Wärmepumpe maximale Laufzeit | `–` | Sensor | berechnet (Template) | min |
| FSV 3026 - Raumheizung maximale Laufzeit zwischen Warmwasser | `–` | Sensor | berechnet (Template) | h |
| FSV 3031 - Warmwasser Heizstab Freigabe | `–` | Binärsensor | berechnet (Template) |  |
| FSV 3032 - Warmwasser Heizstab Einschaltverzögerung | `–` | Sensor | berechnet (Template) | min |
| FSV 3033 - Warmwasser Heizstab Temperaturüberschwingung | `–` | Sensor | berechnet (Template) | °C |
| FSV 3041 - Warmwasser thermische Desinfektion aktiv | `–` | Binärsensor | berechnet (Template) |  |
| FSV 3042 - Warmwasser thermische Desinfektion Wochentag | `–` | Text | berechnet (Template) |  |
| FSV 3043 - Warmwasser thermische Desinfektion Startstunde | `–` | Sensor | berechnet (Template) | h |
| FSV 3044 - Warmwasser thermische Desinfektion Zieltemperatur | `–` | Sensor | berechnet (Template) | °C |
| FSV 3045 - Warmwasser thermische Desinfektion Dauer | `–` | Sensor | berechnet (Template) | min |
| FSV 3046 - Warmwasser thermische Desinfektion Zeitlimit | `–` | Sensor | berechnet (Template) | h |
| FSV 3051 - Warmwasser Timer-Aus aktiviert | `–` | Binärsensor | berechnet (Template) |  |
| FSV 3052 - Warmwasser Timer-Aus Zeitdauer | `–` | Sensor | berechnet (Template) | min |
| FSV 3061 - Solarthermie oder Warmwasserthermostat aktiviert | `–` | Text | berechnet (Template) |  |
| FSV 3071 - Dreiwegeventil Ausrichtung | `–` | Text | berechnet (Template) |  |
| FSV 3081 - Zusatzheizung Stufe 1 Nennleistung | `–` | Sensor | berechnet (Template) | kW |
| FSV 3082 - Zusatzheizung Stufe 2 Nennleistung | `–` | Sensor | berechnet (Template) | kW |
| FSV 3083 - Warmwasser Heizstab Nennleistung | `–` | Sensor | berechnet (Template) | kW |
| FSV 4011 - Vorrang Raumheizung oder Warmwasser | `–` | Text | berechnet (Template) |  |
| FSV 4012 - Außentemperatur für Vorrangregelung | `–` | Sensor | berechnet (Template) | °C |
| FSV 4013 - Heizung Abschalttemperatur außen | `–` | Sensor | berechnet (Template) | °C |
| FSV 4021 - Elektrische Zusatzheizung Betriebsart | `–` | Text | berechnet (Template) |  |
| FSV 4022 - Zusatzheizung und Warmwasser Heizstab Priorität | `–` | Text | berechnet (Template) |  |
| FSV 4023 - Zusatzheizung Kältekompensation | `–` | Binärsensor | berechnet (Template) |  |
| FSV 4024 - Zusatzheizung Außentemperaturschwelle | `–` | Sensor | berechnet (Template) | °C |
| FSV 4025 - Zusatzheizung Abtauunterstützung Temperaturschwelle | `–` | Sensor | berechnet (Template) | °C |
| FSV 4031 - Externe Wärmequelle Freigabe | `–` | Binärsensor | berechnet (Template) |  |
| FSV 4032 - Externe Wärmequelle Priorität | `–` | Binärsensor | berechnet (Template) |  |
| FSV 4033 - Externe Wärmequelle Außentemperaturschwelle | `–` | Sensor | berechnet (Template) | °C |
| FSV 4041 - Mischventil Installation und Betriebsart | `–` | Text | berechnet (Template) |  |
| FSV 4042 - Mischventil Heizen Sollspreizung | `–` | Sensor | berechnet (Template) | °C |
| FSV 4043 - Mischventil Kühlen Sollspreizung | `–` | Sensor | berechnet (Template) | °C |
| FSV 4044 - Mischventil Regelfaktor | `–` | Sensor | berechnet (Template) |  |
| FSV 4045 - Mischventil Regelintervall | `–` | Sensor | berechnet (Template) | min |
| FSV 4046 - Mischventil Stellzeit | `–` | Sensor | berechnet (Template) | s |
| FSV 4051 - Inverterpumpe PWM Regelmodus | `–` | Text | berechnet (Template) |  |
| FSV 4052 - Inverterpumpe Sollspreizung | `–` | Sensor | berechnet (Template) | °C |
| FSV 4053 - Inverterpumpe Regelfaktor | `–` | Sensor | berechnet (Template) |  |
| FSV 4061 - Zonenregelung aktiviert | `–` | Binärsensor | berechnet (Template) |  |
| FSV 5011 - Smart Grid Kühlung Vorlauftemperatur | `–` | Sensor | berechnet (Template) | °C |
| FSV 5013 - Smart Grid Heizung Vorlauftemperatur | `–` | Sensor | berechnet (Template) | °C |
| FSV 5014 - Smart Grid Heizung Raumtemperatur | `–` | Sensor | berechnet (Template) | °C |
| FSV 5015 - Smart Grid Kühlkurve WL1 Temperatur | `–` | Sensor | berechnet (Template) | °C |
| FSV 5016 - Smart Grid Kühlkurve WL2 Temperatur | `–` | Sensor | berechnet (Template) | °C |
| FSV 5017 - Smart Grid Heizkurve WL1 Temperatur | `–` | Sensor | berechnet (Template) | °C |
| FSV 5018 - Smart Grid Heizkurve WL2 Temperatur | `–` | Sensor | berechnet (Template) | °C |
| FSV 5021 - Warmwasser Sparbetrieb Temperaturabsenkung | `–` | Sensor | berechnet (Template) | °C |
| FSV 5022 - Warmwasser Sparbetrieb aktiviert | `–` | Binärsensor | berechnet (Template) |  |
| FSV 5023 - Warmwasser Sparbetrieb Thermo-Ein Temperatur | `–` | Sensor | berechnet (Template) | °C |
| FSV 5041 - Netzbetreiber Fernsteuerung aktiviert | `–` | Binärsensor | berechnet (Template) |  |
| FSV 5051 - Verdichter Frequenzbegrenzungsfunktion aktiviert | `–` | Binärsensor | berechnet (Template) |  |
| FSV 5081 - Photovoltaiksteuerung aktiviert | `–` | Binärsensor | berechnet (Template) |  |
| FSV 5082 - Photovoltaik Kühlung Temperaturversatz | `–` | Sensor | berechnet (Template) | °C |
| FSV 5083 - Photovoltaik Heizung Temperaturversatz | `–` | Sensor | berechnet (Template) | °C |
| FSV 5091 - Smart Grid Regelung aktiviert | `–` | Binärsensor | berechnet (Template) |  |
| FSV 5092 - Smart Grid Heizung Temperaturänderung | `–` | Sensor | berechnet (Template) | °C |
| FSV 5093 - Smart Grid Warmwasser Temperaturänderung | `–` | Sensor | berechnet (Template) | °C |
| FSV 5094 - Smart Grid Warmwasser Betriebsart | `–` | Binärsensor | berechnet (Template) |  |

## Kältekreis & Verdichter (35)

| Name | entity_id | Art | Quelle | Einheit |
|---|---|---|---|---|
| Ansaug Überhitzung berechnet | `–` | Sensor | berechnet (Template) | K |
| Außeneinheit Lüfterstufe | `–` | Sensor | NASA 0x8226 |  |
| Doppelrohr Wärmetauscher Temperatur | `–` | Sensor | NASA 0x821C |  |
| EVI Bypassventil Status | `–` | Binärsensor | NASA 0x8021 |  |
| EVI EEV Ansteuerung Rohwert | `–` | Sensor | NASA 0x822E |  |
| EVI Einspritzkreislauf Austrittstemperatur | `–` | Sensor | NASA 0x8220 |  |
| EVI Einspritzkreislauf Eintrittstemperatur | `–` | Sensor | NASA 0x821E |  |
| EVI SOL EEV Ansteuerung Rohwert | `–` | Sensor | NASA 0x82FC |  |
| EVI SOL1 Status Rohwert | `–` | Sensor | NASA 0x8022 |  |
| EVI SOL2 Status Rohwert | `–` | Sensor | NASA 0x8023 |  |
| EVI Temperaturdifferenz Austritt minus Eintritt | `–` | Sensor | berechnet (Template) | K |
| Haupt-EEV Schritt | `–` | Sensor | NASA 0x823F |  |
| Haupt-EEV1 | `–` | Sensor | NASA 0x8229 |  |
| Heißgas Solltemperatur Rohwert | `–` | Sensor | NASA 0x8223 |  |
| Heißgas Überhitzung berechnet | `–` | Sensor | berechnet (Template) | K |
| Heißgasventil Status | `–` | Binärsensor | NASA 0x8017 |  |
| Hochdruck | `–` | Sensor | NASA 0x8206 |  |
| Kältekreis Hochdruck Sättigungstemperatur | `–` | Sensor | NASA 0x829F |  |
| Kältekreis Niederdruck Sättigungstemperatur | `–` | Sensor | NASA 0x82A0 |  |
| Kältemittel Flüssigkeitsventil Status | `–` | Binärsensor | NASA 0x8019 |  |
| Kältemittel Vierwegeventil Status | `–` | Binärsensor | NASA 0x801A |  |
| Lüfter Drehzahl | `–` | Sensor | NASA 0x823D |  |
| Niederdruck | `–` | Sensor | NASA 0x8208 |  |
| Verdampfer Temperatur | `–` | Sensor | NASA 0x8234 | °C |
| Verdichter angeforderte Frequenz | `–` | Sensor | NASA 0x8236 |  |
| Verdichter Ansaugtemperatur | `–` | Sensor | NASA 0x821A |  |
| Verdichter Frequenz | `–` | Sensor | NASA 0x8238 |  |
| Verdichter Gehäusetemperatur TOP1 | `–` | Sensor | NASA 0x8280 |  |
| Verdichter Heißgastemperatur | `–` | Sensor | NASA 0x820A |  |
| Verdichter in Betrieb | `–` | Binärsensor | NASA 0x8010 |  |
| Verdichter Last | `–` | Sensor | NASA 0x8239 |  |
| Verdichter Zielfrequenz | `–` | Sensor | NASA 0x8237 |  |
| Verdichter Überhitzungsfühler DSH1 Temperatur | `–` | Sensor | NASA 0x827A |  |
| Wechselrichter Gleichspannungszwischenkreis | `–` | Sensor | NASA 0x823B |  |
| Wechselrichter Leistungsmodul IPM1 Temperatur | `–` | Sensor | NASA 0x8254 |  |

## Heizwasser & Heizkurve (21)

| Name | entity_id | Art | Quelle | Einheit |
|---|---|---|---|---|
| Heizkurve Vorlauf Soll | `–` | Sensor | NASA 0x427F |  |
| Heizkurvenversatz | `–` | Zahl (schreibbar) | NASA 0x4248 |  |
| Heizwasser berechnete thermische Leistung | `–` | Sensor | berechnet (Template) | W |
| Heizwasser Rücklauf Tw1 | `–` | Sensor | NASA 0x4236 |  |
| Heizwasser Rücklauf Tw1 Außeneinheit Spiegelwert | `–` | Sensor | NASA 0x82DF |  |
| Heizwasser Spreizung Vorlauf minus Rücklauf | `–` | Sensor | berechnet (Template) | K |
| Heizwasser Temperatur nach Zusatzheizer Tw3 | `–` | Sensor | NASA 0x4239 | °C |
| Heizwasser Volumenstrom | `–` | Sensor | NASA 0x42E9 |  |
| Heizwasser Vorlauf Tw2 | `–` | Sensor | NASA 0x4238 |  |
| Heizwasser Vorlaufabweichung Ist minus Soll | `–` | Sensor | berechnet (Template) | K |
| Heizwasserpumpe aktiv | `–` | Binärsensor | NASA 0x4089 |  |
| Heizwasserpumpe PWM Ansteuerung | `–` | Sensor | NASA 0x40C4 |  |
| Raum Solltemperatur | `–` | Zahl (schreibbar) | NASA 0x4201 |  |
| Raumtemperatur | `–` | Sensor | berechnet (Template) | °C |
| Vorlauf Solltemperatur | `–` | Zahl (schreibbar) | NASA 0x4247 |  |
| Vorlauf Solltemperatur (Anzeige) | `–` | Sensor | berechnet (Template) | °C |
| Vorlauftemperatur als Regelreferenz aktiv | `–` | Binärsensor | NASA 0x406F |  |
| Vorlauftemperatur Samsung | `–` | Sensor | NASA 0x82E0 |  |
| Zone 1 Vorlauf Soll | `–` | Sensor | NASA 0x42D8 |  |
| Zone 2 Raumtemperatur | `–` | Sensor | NASA 0x42D4 |  |
| Zone 2 Vorlauf Soll | `–` | Sensor | NASA 0x42D9 |  |

## Warmwasser (7)

| Name | entity_id | Art | Quelle | Einheit |
|---|---|---|---|---|
| Dreiwegeventil Warmwasserstellung | `–` | Binärsensor | NASA 0x4067 |  |
| Warmwasser Betriebsart | `–` | Auswahl (schreibbar) | NASA 0x4066 |  |
| Warmwasser Ein | `–` | Schalter | NASA 0x4065 |  |
| Warmwasser Heizstab Status | `–` | Binärsensor | NASA 0x4087 |  |
| Warmwasser Solltemperatur | `–` | Zahl (schreibbar) | NASA 0x4235 |  |
| Warmwasser Solltemperatur (Anzeige) | `–` | Sensor | berechnet (Template) | °C |
| Warmwasser Temperatur | `–` | Sensor | NASA 0x4237 |  |

## Energie & Leistung (15)

| Name | entity_id | Art | Quelle | Einheit |
|---|---|---|---|---|
| Außeneinheit Energie gesamt | `–` | Sensor | NASA 0x8414 |  |
| Außeneinheit gemeldete Leistung | `–` | Sensor | NASA 0x8240 |  |
| Außeneinheit Leistung | `–` | Sensor | NASA 0x8411 |  |
| Außeneinheit Spannung | `–` | Sensor | NASA 0x24FC |  |
| Außeneinheit Strom | `–` | Sensor | NASA 0x8217 |  |
| Außenwärmetauscher Austrittstemperatur | `–` | Sensor | NASA 0x8218 |  |
| COP gesamt | `–` | Sensor | berechnet (Template) | COP |
| COP momentan | `–` | Sensor | berechnet (Template) |  |
| Inneneinheit Wärmetauscher Austrittstemperatur | `–` | Sensor | NASA 0x4206 |  |
| Inneneinheit Wärmetauscher Eintrittstemperatur | `–` | Sensor | NASA 0x4205 |  |
| Leistungsaufnahme | `–` | Sensor | NASA 0x8413 |  |
| Plattenwärmetauscher Zusatzheizung Status | `–` | Binärsensor | NASA 0x80D7 |  |
| Strom verbraucht gesamt | `–` | Sensor | NASA 0x8414 |  |
| Wärme erzeugt gesamt | `–` | Sensor | NASA 0x4427 |  |
| Wärmeleistung | `–` | Sensor | NASA 0x4426 |  |

## Betrieb & Status (22)

| Name | entity_id | Art | Quelle | Einheit |
|---|---|---|---|---|
| Abtauung Ablaufcode | `–` | Sensor | NASA 0x8061 |  |
| Abtauung Ablaufstatus | `–` | Text | NASA 0x8061 |  |
| Abtauung aktiv | `–` | Binärsensor | NASA 0x402E |  |
| Aktive Betriebsstunden seit Inbetriebnahme | `–` | Sensor | NASA 0x4424 |  |
| Automatische Reinigung | `–` | Schalter | NASA 0x4111 |  |
| Außeneinheit Betriebszustand | `–` | Text | NASA 0x8001 |  |
| Außeneinheit Bodenheizung Status | `–` | Binärsensor | NASA 0x80AF |  |
| Außeneinheit Servicebetriebsart | `–` | Text | NASA 0x8000 |  |
| Außeneinheit Servicebetriebsart Code | `–` | Sensor | NASA 0x8000 |  |
| Außentemperatur | `–` | Sensor | NASA 0x8204 |  |
| Betriebsmodus | `–` | Auswahl (schreibbar) | NASA 0x4001 |  |
| Betriebsmodus Code | `–` | Sensor | NASA 0x8001 |  |
| Dreiwegeventil Stellung | `–` | Text | NASA 0x4067 |  |
| Elektrische Zusatzheizung Status | `–` | Binärsensor | NASA 0x406C |  |
| Heizung Ein | `–` | Schalter | NASA 0x4000 |  |
| Inneneinheit Betriebsart | `–` | Text | NASA 0x4002 |  |
| Inneneinheit Betriebsart Code | `–` | Sensor | NASA 0x4002 |  |
| Leisebetrieb aktiv (abgeleitet) | `–` | Binärsensor | berechnet (Template) |  |
| Nachtfenster aktiv (20–06) | `–` | Binärsensor | berechnet (Template) |  |
| Tage seit Inbetriebnahme | `–` | Sensor | NASA 0x4423 |  |
| Temperaturreferenz | `–` | Auswahl (schreibbar) | NASA 0x406F |  |
| Thermoanforderung aktiv | `–` | Binärsensor | NASA 0x4028 |  |
