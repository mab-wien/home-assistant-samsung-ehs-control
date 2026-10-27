# NASA-Rohwerte: automatische Deutungshilfe

Letzter Lauf: 27.10.2026 03:00 UTC, Zeitraum 7 Tage aus dem HA-Verlauf. Erzeugt nächtlich vom Dienst `nasa-katalog`
(docker-ki-environment). **Alles hier sind Hinweise, keine Bestätigung.**

- *Korrelation*: Minutenraster, Pearson r ≥ 0,9; Abbildung „benannter Sensor ≈ a · Rohwert + b“.
- *Ereignis*: Schaltvorgang eines benannten Binärsensors; Quote = Anteil der Vorgänge, bei denen sich der Rohwert
  innerhalb ±30 s ändert, Lift = Quote / Zufallsrate. Neustarts/Flashes sind ausgenommen.
- *Zähler*: monoton steigend, Anstieg je Stunde.
- Katalog: Name/Status im NASA-Katalog; „vermutet“ mit Beleg „automatisch …“ stammt aus diesem Lauf.

| Kennung | Fremdname (Beormund) | Katalog | Methode | Partner | Kennwert | Details |
|---|---|---|---|---|---|---|
| 0x22F7 | VAR_NM___ (Platzhalter, ohne Bedeutung) | unbekannt | korrelation | Außeneinheit Spannung | r = 0.93 | a = 30.7, b = -102 |
| 0x408A | ENUM_IN_2WAY_VALVE | vermutet: ändert sich mit Dreiwegeventil Warmwasserstellung → on | ereignis | Dreiwegeventil Warmwasserstellung → on | 22/22 | Lift 125.8 |
|  |  |  | ereignis | Dreiwegeventil Warmwasserstellung → off | 22/22 | Lift 125.8 |
|  |  |  | ereignis | Thermoanforderung aktiv → off | 18/24 | Lift 94.3 |
| 0x4202 | VAR_IN_TEMP_DISCHARGE_REQUEST | unbekannt | ereignis | Thermoanforderung aktiv → off | 24/24 | Lift 3.0 |
|  |  |  | ereignis | Dreiwegeventil Warmwasserstellung → off | 22/22 | Lift 3.0 |
| 0x4204 | VAR_IN___ (Platzhalter, ohne Bedeutung) | vermutet: Vorlaufbezogene Temperatur: HA Tw2 minus 2 K (Funktion offen) | korrelation | Heizwasser Vorlauf Tw2 | r = 1.00 | a = 1, b = 2 |
|  |  |  | korrelation | Heizwasser Vorlaufabweichung Ist minus Soll | r = 1.00 | a = 0.992, b = -31.7 |
|  |  |  | korrelation | Vorlauftemperatur Samsung | r = 0.99 | a = 0.987, b = 2.47 |
|  |  |  | korrelation | Heizwasser Temperatur nach Zusatzheizer Tw3 | r = 0.98 | a = 0.93, b = 4.07 |
|  |  |  | korrelation | Heizwasser Rücklauf Tw1 | r = 0.97 | a = 0.862, b = 4.04 |
|  |  |  | korrelation | Heizwasser Rücklauf Tw1 Außeneinheit Spiegelwert | r = 0.97 | a = 0.849, b = 4.43 |
|  |  |  | korrelation | Außeneinheit Leistung | r = 0.92 | a = 117, b = -3.06e+03 |
| 0x420C | NASA_INDOOR_OUTER_TEMP | vermutet: Außentemperatur im Innengerät (Bus-Rohwert /10 °C) | korrelation | Temperatur Außenbereich (Wärmepumpe) | r = 1.00 | a = 0.1, b = -0.000542 |
| 0x4211 | VAR_IN_CAPACITY_REQUEST | vermutet: ändert sich mit Thermoanforderung aktiv → off | ereignis | Thermoanforderung aktiv → on | 26/26 | Lift 110.9 |
|  |  |  | ereignis | Thermoanforderung aktiv → off | 24/24 | Lift 110.9 |
|  |  |  | ereignis | Dreiwegeventil Warmwasserstellung → off | 18/22 | Lift 90.8 |
| 0x4301 | VAR_IN___ (Platzhalter, ohne Bedeutung) | vermutet: ändert sich mit Dreiwegeventil Warmwasserstellung → on | ereignis | Dreiwegeventil Warmwasserstellung → on | 20/22 | Lift 81.1 |
|  |  |  | ereignis | Dreiwegeventil Warmwasserstellung → off | 17/22 | Lift 69.0 |
|  |  |  | ereignis | Thermoanforderung aktiv → off | 17/24 | Lift 63.2 |
| 0x440E | LVAR_IN___ (Platzhalter, ohne Bedeutung) | vermutet: ändert sich mit Thermoanforderung aktiv → off | ereignis | Thermoanforderung aktiv → off | 24/24 | Lift 68.5 |
|  |  |  | ereignis | Thermoanforderung aktiv → on | 26/26 | Lift 68.5 |
|  |  |  | ereignis | Dreiwegeventil Warmwasserstellung → off | 19/22 | Lift 59.1 |
| 0x800D | ENUM_OUT___ (Platzhalter, ohne Bedeutung) | vermutet: ändert sich mit Verdichter in Betrieb → off | ereignis | Verdichter in Betrieb → off | 24/24 | Lift 111.0 |
|  |  |  | ereignis | Verdichter in Betrieb → on | 23/25 | Lift 102.1 |
| 0x8032 | ENUM_OUT___ (Platzhalter, ohne Bedeutung) | vermutet: ändert sich mit Thermoanforderung aktiv → off | ereignis | Thermoanforderung aktiv → off | 22/24 | Lift 17.0 |
|  |  |  | ereignis | Dreiwegeventil Warmwasserstellung → off | 18/22 | Lift 15.2 |
| 0x8033 | ENUM_OUT___ (Platzhalter, ohne Bedeutung) | vermutet: ändert sich mit Thermoanforderung aktiv → off | ereignis | Thermoanforderung aktiv → off | 22/24 | Lift 17.0 |
|  |  |  | ereignis | Dreiwegeventil Warmwasserstellung → off | 18/22 | Lift 15.2 |
| 0x805E | ENUM_OUT___ (Platzhalter, ohne Bedeutung) | vermutet: ändert sich mit Thermoanforderung aktiv → off | ereignis | Thermoanforderung aktiv → off | 24/24 | Lift 111.0 |
|  |  |  | ereignis | Thermoanforderung aktiv → on | 26/26 | Lift 111.0 |
|  |  |  | ereignis | Dreiwegeventil Warmwasserstellung → off | 18/22 | Lift 90.8 |
| 0x8062 | NASA_OUTDOOR_LOGICAL_DEFROST_STEP | unbekannt | ereignis | Kältemittel Vierwegeventil Status → on | 3/3 | Lift 263.5 |
|  |  |  | ereignis | Abtauung aktiv → off | 3/3 | Lift 263.5 |
|  |  |  | ereignis | Kältemittel Vierwegeventil Status → off | 3/3 | Lift 263.5 |
|  |  |  | ereignis | Abtauung aktiv → on | 3/3 | Lift 263.5 |
|  |  |  | ereignis | Außeneinheit Bodenheizung Status → on | 3/3 | Lift 263.5 |
|  |  |  | korrelation | Abtauung Ablaufcode | r = -0.92 | a = -74.1, b = 255 |
| 0x807F | ENUM_OUT___ (Platzhalter, ohne Bedeutung) | vermutet: ändert sich mit Thermoanforderung aktiv → off | ereignis | Thermoanforderung aktiv → off | 21/24 | Lift 19.9 |
|  |  |  | ereignis | Dreiwegeventil Warmwasserstellung → off | 17/22 | Lift 17.5 |
| 0x8225 | VAR_OUT___ (Platzhalter, ohne Bedeutung) | unbekannt | korrelation | Vorlauftemperatur Samsung | r = 0.96 | a = 0.0949, b = 1.21 |
|  |  |  | korrelation | Heizwasser Rücklauf Tw1 Außeneinheit Spiegelwert | r = 0.96 | a = 0.083, b = 2.83 |
|  |  |  | korrelation | Heizwasser Vorlauf Tw2 | r = 0.95 | a = 0.0944, b = 1.41 |
|  |  |  | korrelation | Heizwasser Rücklauf Tw1 | r = 0.95 | a = 0.0833, b = 2.77 |
|  |  |  | korrelation | Heizwasser Vorlaufabweichung Ist minus Soll | r = 0.95 | a = 0.0939, b = -32.4 |
|  |  |  | korrelation | Heizwasser Temperatur nach Zusatzheizer Tw3 | r = 0.93 | a = 0.0879, b = 3.48 |
| 0x8231 | NASA_OUTDOOR_HEATING_PERCENT | vermutet: ändert sich mit Thermoanforderung aktiv → off | ereignis | Thermoanforderung aktiv → on | 26/26 | Lift 111.0 |
|  |  |  | ereignis | Thermoanforderung aktiv → off | 24/24 | Lift 111.0 |
|  |  |  | ereignis | Dreiwegeventil Warmwasserstellung → off | 18/22 | Lift 90.8 |
| 0x823C | VAR_OUT___ (Platzhalter, ohne Bedeutung) | vermutet: ändert sich mit Verdichter in Betrieb → off | ereignis | Verdichter in Betrieb → off | 22/24 | Lift 73.7 |
|  |  |  | ereignis | Verdichter in Betrieb → on | 23/26 | Lift 71.1 |
| 0x8247 | NASA_OUTDOOR_DEFROST_STEP | vermutet: Abtau-Ablaufcode (diskreter Status; keine Offsetkorrektur) | ereignis | Kältemittel Vierwegeventil Status → on | 3/3 | Lift 190.8 |
|  |  |  | ereignis | Abtauung aktiv → off | 3/3 | Lift 190.8 |
|  |  |  | ereignis | Kältemittel Vierwegeventil Status → off | 3/3 | Lift 190.8 |
|  |  |  | ereignis | Außeneinheit Bodenheizung Status → on | 3/3 | Lift 190.8 |
|  |  |  | ereignis | Abtauung aktiv → on | 3/3 | Lift 190.8 |
|  |  |  | korrelation | Abtauung Ablaufcode | r = 1.00 | a = 1.01, b = -1.3 |
| 0x8248 | NASA_OUTDOOR_SAFETY_START | vermutet: ändert sich mit Thermoanforderung aktiv → on | ereignis | Thermoanforderung aktiv → on | 26/26 | Lift 34.3 |
|  |  |  | ereignis | Verdichter in Betrieb → on | 24/26 | Lift 31.6 |
| 0x8249 | VAR_OUT___ (Platzhalter, ohne Bedeutung) | vermutet: ändert sich mit Thermoanforderung aktiv → off | ereignis | Thermoanforderung aktiv → on | 26/26 | Lift 49.5 |
|  |  |  | ereignis | Thermoanforderung aktiv → off | 24/24 | Lift 49.5 |
|  |  |  | ereignis | Dreiwegeventil Warmwasserstellung → off | 18/22 | Lift 40.5 |
| 0x8278 | VAR_OUT_SENSOR_OCT1 | bestaetigt: OCT1 Temperatur (S-NET) | korrelation | OCT1 Temperatur | r = 0.98 | a = 0.0983, b = 0.184 |
|  |  |  | korrelation | Hochdruck | r = 0.97 | a = 11.7, b = 882 |
|  |  |  | korrelation | Kältekreis Hochdruck Sättigungstemperatur | r = 0.97 | a = 0.196, b = 13.9 |
| 0x82A8 | VAR_OUT_CONTROL_IDU_TOTAL_ABSCAPA | vermutet: ändert sich mit Thermoanforderung aktiv → off | ereignis | Thermoanforderung aktiv → on | 26/26 | Lift 111.0 |
|  |  |  | ereignis | Thermoanforderung aktiv → off | 24/24 | Lift 111.0 |
|  |  |  | ereignis | Dreiwegeventil Warmwasserstellung → off | 18/22 | Lift 90.8 |
| 0x82A9 | VAR_OUT_CONTROL_IDU_TOTAL_ABSCAPA2 | vermutet: ändert sich mit Thermoanforderung aktiv → off | ereignis | Thermoanforderung aktiv → on | 26/26 | Lift 111.0 |
|  |  |  | ereignis | Thermoanforderung aktiv → off | 24/24 | Lift 111.0 |
|  |  |  | ereignis | Dreiwegeventil Warmwasserstellung → off | 18/22 | Lift 90.8 |
| 0x82DE | NASA_OUTDOOR_EVA_IN | vermutet: Temperaturspiegel nahe 0x821C / Doppelrohr-Wärmetauscher (Position offen) | korrelation | Doppelrohr Wärmetauscher Temperatur | r = 1.00 | a = 1, b = -0.0052 |
|  |  |  | korrelation | Inneneinheit Wärmetauscher Eintrittstemperatur | r = 1.00 | a = 0.991, b = 0.267 |
|  |  |  | korrelation | Hochdruck | r = 0.90 | a = 69.2, b = -144 |
| 0x82E8 | VAR_OUT_LOAD_MCU_HR_BYPASS_EEV | vermutet: ändert sich mit Thermoanforderung aktiv → off | ereignis | Abtauung aktiv → off | 3/3 | Lift 99.1 |
|  |  |  | ereignis | Kältemittel Vierwegeventil Status → off | 3/3 | Lift 99.1 |
|  |  |  | ereignis | Thermoanforderung aktiv → off | 24/24 | Lift 99.1 |
|  |  |  | ereignis | Thermoanforderung aktiv → on | 26/26 | Lift 99.1 |
|  |  |  | ereignis | Dreiwegeventil Warmwasserstellung → off | 18/22 | Lift 81.1 |
| 0x82F6 | VAR_OUT___ (Platzhalter, ohne Bedeutung) | vermutet: ändert sich mit Dreiwegeventil Warmwasserstellung → off | ereignis | Außeneinheit Bodenheizung Status → on | 3/3 | Lift 50.7 |
|  |  |  | ereignis | Abtauung aktiv → on | 3/3 | Lift 50.7 |
|  |  |  | ereignis | Dreiwegeventil Warmwasserstellung → off | 21/22 | Lift 48.4 |
|  |  |  | ereignis | Thermoanforderung aktiv → off | 21/24 | Lift 44.4 |
| 0x8404 | LVAR_OUT___ (Platzhalter, ohne Bedeutung) | vermutet: ändert sich mit Thermoanforderung aktiv → off | ereignis | Abtauung aktiv → on | 3/3 | Lift 46.7 |
|  |  |  | ereignis | Thermoanforderung aktiv → off | 24/24 | Lift 46.7 |
|  |  |  | ereignis | Thermoanforderung aktiv → on | 26/26 | Lift 46.7 |
|  |  |  | ereignis | Außeneinheit Bodenheizung Status → on | 3/3 | Lift 46.7 |
|  |  |  | ereignis | Dreiwegeventil Warmwasserstellung → off | 18/22 | Lift 38.2 |
| 0x8405 | NASA_OUTDOOR_COMP1_RUNNING_TIME | vermutet: ≈ Aktive Betriebsstunden seit Inbetriebnahme -790.5 | korrelation | Aktive Betriebsstunden seit Inbetriebnahme | r = 1.00 | a = 0.998, b = 789 |
|  |  |  | korrelation | Tage seit Inbetriebnahme | r = 1.00 | a = 0.0453, b = 426 |
|  |  |  | korrelation | Wärme erzeugt gesamt | r = 1.00 | a = 4.51, b = 2.63e+04 |
|  |  |  | korrelation | Strom verbraucht gesamt | r = 1.00 | a = 1.25, b = 1.15e+04 |
|  |  |  | korrelation | Außeneinheit Energie gesamt | r = 1.00 | a = 1.25, b = 1.15e+04 |
|  |  |  | korrelation | COP gesamt | r = 0.99 | a = 2.32e-05, b = 2.76 |
