# NASA-Rohwerte: automatische Deutungshilfe

Letzter Lauf: 25.10.2026 02:00 UTC, Zeitraum 7 Tage aus dem HA-Verlauf. Erzeugt nächtlich vom Dienst `nasa-katalog`
(docker-ki-environment). **Alles hier sind Hinweise, keine Bestätigung.**

- *Korrelation*: Minutenraster, Pearson r ≥ 0,9; Abbildung „benannter Sensor ≈ a · Rohwert + b“.
- *Ereignis*: Schaltvorgang eines benannten Binärsensors; Quote = Anteil der Vorgänge, bei denen sich der Rohwert
  innerhalb ±30 s ändert, Lift = Quote / Zufallsrate. Neustarts/Flashes sind ausgenommen.
- *Zähler*: monoton steigend, Anstieg je Stunde.
- Katalog: Name/Status im NASA-Katalog; „vermutet“ mit Beleg „automatisch …“ stammt aus diesem Lauf.

| Kennung | Fremdname (Beormund) | Katalog | Methode | Partner | Kennwert | Details |
|---|---|---|---|---|---|---|
| 0x22F7 | VAR_NM___ (Platzhalter, ohne Bedeutung) | unbekannt | korrelation | Außeneinheit Spannung | r = 0.93 | a = 30.1, b = -94.5 |
| 0x408A | ENUM_IN_2WAY_VALVE | vermutet: ändert sich mit Dreiwegeventil Warmwasserstellung → on | ereignis | Dreiwegeventil Warmwasserstellung → off | 15/15 | Lift 99.2 |
|  |  |  | ereignis | Dreiwegeventil Warmwasserstellung → on | 14/14 | Lift 99.2 |
|  |  |  | ereignis | Thermoanforderung aktiv → off | 11/13 | Lift 83.9 |
| 0x4204 | VAR_IN___ (Platzhalter, ohne Bedeutung) | vermutet: Vorlaufbezogene Temperatur: HA Tw2 minus 2 K (Funktion offen) | korrelation | Heizwasser Vorlauf Tw2 | r = 1.00 | a = 1, b = 2 |
|  |  |  | korrelation | Heizwasser Vorlaufabweichung Ist minus Soll | r = 1.00 | a = 0.993, b = -31.8 |
|  |  |  | korrelation | Vorlauftemperatur Samsung | r = 0.99 | a = 0.987, b = 2.45 |
|  |  |  | korrelation | Heizwasser Temperatur nach Zusatzheizer Tw3 | r = 0.99 | a = 0.941, b = 3.81 |
|  |  |  | korrelation | Heizwasser Rücklauf Tw1 | r = 0.98 | a = 0.846, b = 4.46 |
|  |  |  | korrelation | Heizwasser Rücklauf Tw1 Außeneinheit Spiegelwert | r = 0.97 | a = 0.839, b = 4.72 |
|  |  |  | korrelation | Außeneinheit Leistung | r = 0.93 | a = 120, b = -3.2e+03 |
| 0x420C | NASA_INDOOR_OUTER_TEMP | vermutet: Außentemperatur im Innengerät (Bus-Rohwert /10 °C) | korrelation | Temperatur Außenbereich (Wärmepumpe) | r = 1.00 | a = 0.1, b = 0.00208 |
| 0x4211 | VAR_IN_CAPACITY_REQUEST | vermutet: ändert sich mit Thermoanforderung aktiv → off | ereignis | Thermoanforderung aktiv → on | 16/16 | Lift 102.9 |
|  |  |  | ereignis | Thermoanforderung aktiv → off | 14/14 | Lift 102.9 |
|  |  |  | ereignis | Dreiwegeventil Warmwasserstellung → off | 11/15 | Lift 75.4 |
| 0x4301 | VAR_IN___ (Platzhalter, ohne Bedeutung) | unbekannt | ereignis | Dreiwegeventil Warmwasserstellung → on | 12/14 | Lift 66.6 |
|  |  |  | ereignis | Thermoanforderung aktiv → off | 10/13 | Lift 59.8 |
| 0x440E | LVAR_IN___ (Platzhalter, ohne Bedeutung) | vermutet: ändert sich mit Thermoanforderung aktiv → off | ereignis | Thermoanforderung aktiv → on | 16/16 | Lift 63.0 |
|  |  |  | ereignis | Thermoanforderung aktiv → off | 14/14 | Lift 63.0 |
|  |  |  | ereignis | Dreiwegeventil Warmwasserstellung → off | 12/15 | Lift 50.4 |
| 0x800D | ENUM_OUT___ (Platzhalter, ohne Bedeutung) | vermutet: ändert sich mit Verdichter in Betrieb → off | ereignis | Verdichter in Betrieb → off | 14/14 | Lift 102.9 |
|  |  |  | ereignis | Verdichter in Betrieb → on | 13/15 | Lift 89.2 |
| 0x8032 | ENUM_OUT___ (Platzhalter, ohne Bedeutung) | vermutet: ändert sich mit Thermoanforderung aktiv → off | ereignis | Thermoanforderung aktiv → off | 14/14 | Lift 18.7 |
|  |  |  | ereignis | Dreiwegeventil Warmwasserstellung → off | 12/15 | Lift 14.9 |
| 0x8033 | ENUM_OUT___ (Platzhalter, ohne Bedeutung) | vermutet: ändert sich mit Thermoanforderung aktiv → off | ereignis | Thermoanforderung aktiv → off | 14/14 | Lift 18.7 |
|  |  |  | ereignis | Dreiwegeventil Warmwasserstellung → off | 12/15 | Lift 14.9 |
| 0x805E | ENUM_OUT___ (Platzhalter, ohne Bedeutung) | vermutet: ändert sich mit Thermoanforderung aktiv → off | ereignis | Thermoanforderung aktiv → off | 14/14 | Lift 102.9 |
|  |  |  | ereignis | Thermoanforderung aktiv → on | 16/16 | Lift 102.9 |
|  |  |  | ereignis | Dreiwegeventil Warmwasserstellung → off | 11/15 | Lift 75.5 |
| 0x8062 | NASA_OUTDOOR_LOGICAL_DEFROST_STEP | unbekannt | korrelation | Abtauung Ablaufcode | r = -0.93 | a = -73.3, b = 255 |
| 0x807F | ENUM_OUT___ (Platzhalter, ohne Bedeutung) | vermutet: ändert sich mit Thermoanforderung aktiv → off | ereignis | Thermoanforderung aktiv → off | 13/14 | Lift 21.8 |
|  |  |  | ereignis | Dreiwegeventil Warmwasserstellung → off | 11/15 | Lift 17.2 |
| 0x8225 | VAR_OUT___ (Platzhalter, ohne Bedeutung) | unbekannt | korrelation | Heizwasser Rücklauf Tw1 Außeneinheit Spiegelwert | r = 0.97 | a = 0.0831, b = 2.79 |
|  |  |  | korrelation | Vorlauftemperatur Samsung | r = 0.97 | a = 0.0959, b = 0.921 |
|  |  |  | korrelation | Heizwasser Rücklauf Tw1 | r = 0.96 | a = 0.0825, b = 3.06 |
|  |  |  | korrelation | Heizwasser Vorlauf Tw2 | r = 0.96 | a = 0.0954, b = 1.14 |
|  |  |  | korrelation | Heizwasser Vorlaufabweichung Ist minus Soll | r = 0.95 | a = 0.0947, b = -32.6 |
|  |  |  | korrelation | Heizwasser Temperatur nach Zusatzheizer Tw3 | r = 0.95 | a = 0.0902, b = 2.84 |
| 0x8231 | NASA_OUTDOOR_HEATING_PERCENT | vermutet: ändert sich mit Thermoanforderung aktiv → off | ereignis | Thermoanforderung aktiv → on | 16/16 | Lift 102.9 |
|  |  |  | ereignis | Thermoanforderung aktiv → off | 14/14 | Lift 102.9 |
|  |  |  | ereignis | Dreiwegeventil Warmwasserstellung → off | 11/15 | Lift 75.4 |
| 0x823C | VAR_OUT___ (Platzhalter, ohne Bedeutung) | vermutet: ändert sich mit Verdichter in Betrieb → off | ereignis | Verdichter in Betrieb → off | 13/14 | Lift 69.9 |
|  |  |  | ereignis | Verdichter in Betrieb → on | 14/16 | Lift 65.9 |
| 0x8247 | NASA_OUTDOOR_DEFROST_STEP | vermutet: Abtau-Ablaufcode (diskreter Status; keine Offsetkorrektur) | korrelation | Abtauung Ablaufcode | r = 1.00 | a = 1.01, b = -1.29 |
| 0x8248 | NASA_OUTDOOR_SAFETY_START | vermutet: ändert sich mit Thermoanforderung aktiv → on | ereignis | Thermoanforderung aktiv → on | 16/16 | Lift 32.5 |
|  |  |  | ereignis | Verdichter in Betrieb → on | 14/16 | Lift 28.5 |
| 0x8249 | VAR_OUT___ (Platzhalter, ohne Bedeutung) | vermutet: ändert sich mit Thermoanforderung aktiv → off | ereignis | Thermoanforderung aktiv → off | 14/14 | Lift 46.8 |
|  |  |  | ereignis | Thermoanforderung aktiv → on | 16/16 | Lift 46.8 |
|  |  |  | ereignis | Dreiwegeventil Warmwasserstellung → off | 11/15 | Lift 34.3 |
|  |  |  | korrelation | Betriebsmodus Code | r = 0.92 | a = 0.00787, b = -0.0197 |
| 0x8278 | VAR_OUT_SENSOR_OCT1 | bestaetigt: OCT1 Temperatur (S-NET) | korrelation | OCT1 Temperatur | r = 0.99 | a = 0.099, b = 0.116 |
|  |  |  | korrelation | Hochdruck | r = 0.97 | a = 11.8, b = 875 |
|  |  |  | korrelation | Kältekreis Hochdruck Sättigungstemperatur | r = 0.97 | a = 0.196, b = 13.8 |
| 0x82A8 | VAR_OUT_CONTROL_IDU_TOTAL_ABSCAPA | vermutet: ändert sich mit Thermoanforderung aktiv → off | ereignis | Thermoanforderung aktiv → on | 16/16 | Lift 102.9 |
|  |  |  | ereignis | Thermoanforderung aktiv → off | 14/14 | Lift 102.9 |
|  |  |  | ereignis | Dreiwegeventil Warmwasserstellung → off | 11/15 | Lift 75.4 |
| 0x82A9 | VAR_OUT_CONTROL_IDU_TOTAL_ABSCAPA2 | vermutet: ändert sich mit Thermoanforderung aktiv → off | ereignis | Thermoanforderung aktiv → off | 14/14 | Lift 102.9 |
|  |  |  | ereignis | Thermoanforderung aktiv → on | 16/16 | Lift 102.9 |
|  |  |  | ereignis | Dreiwegeventil Warmwasserstellung → off | 11/15 | Lift 75.4 |
| 0x82B2 | VAR_OUT___ (Platzhalter, ohne Bedeutung) | vermutet: DSH1-nahe interne Größe (Bus-Rohwert /10 K; 32767 beachten) | korrelation | Betriebsmodus Code | r = -0.91 | a = -6.01e-05, b = 2 |
| 0x82DE | NASA_OUTDOOR_EVA_IN | vermutet: Temperaturspiegel nahe 0x821C / Doppelrohr-Wärmetauscher (Position offen) | korrelation | Doppelrohr Wärmetauscher Temperatur | r = 1.00 | a = 1, b = 0.00673 |
|  |  |  | korrelation | Inneneinheit Wärmetauscher Eintrittstemperatur | r = 1.00 | a = 0.996, b = 0.12 |
|  |  |  | korrelation | Hochdruck | r = 0.90 | a = 70.2, b = -179 |
| 0x82E8 | VAR_OUT_LOAD_MCU_HR_BYPASS_EEV | vermutet: ändert sich mit Thermoanforderung aktiv → off | ereignis | Thermoanforderung aktiv → on | 16/16 | Lift 90.8 |
|  |  |  | ereignis | Thermoanforderung aktiv → off | 14/14 | Lift 90.8 |
|  |  |  | ereignis | Dreiwegeventil Warmwasserstellung → off | 11/15 | Lift 66.6 |
| 0x82ED | VAR_OUT___ (Platzhalter, ohne Bedeutung) | unbekannt | ereignis | Thermoanforderung aktiv → on | 16/16 | Lift 3.0 |
|  |  |  | ereignis | Heizwasserpumpe aktiv → off | 30/30 | Lift 3.0 |
|  |  |  | ereignis | Heizwasserpumpe aktiv → on | 32/32 | Lift 3.0 |
| 0x82F6 | VAR_OUT___ (Platzhalter, ohne Bedeutung) | vermutet: ändert sich mit Dreiwegeventil Warmwasserstellung → off | ereignis | Dreiwegeventil Warmwasserstellung → off | 14/15 | Lift 39.0 |
|  |  |  | ereignis | Thermoanforderung aktiv → off | 12/14 | Lift 35.8 |
| 0x8404 | LVAR_OUT___ (Platzhalter, ohne Bedeutung) | vermutet: ändert sich mit Thermoanforderung aktiv → off | ereignis | Thermoanforderung aktiv → off | 14/14 | Lift 42.3 |
|  |  |  | ereignis | Thermoanforderung aktiv → on | 16/16 | Lift 42.3 |
|  |  |  | ereignis | Dreiwegeventil Warmwasserstellung → off | 11/15 | Lift 31.1 |
| 0x8405 | NASA_OUTDOOR_COMP1_RUNNING_TIME | vermutet: ≈ Aktive Betriebsstunden seit Inbetriebnahme -818.8 | korrelation | Aktive Betriebsstunden seit Inbetriebnahme | r = 1.00 | a = 0.996, b = 816 |
|  |  |  | korrelation | Tage seit Inbetriebnahme | r = 1.00 | a = 0.0452, b = 428 |
|  |  |  | korrelation | Wärme erzeugt gesamt | r = 1.00 | a = 4.7, b = 2.37e+04 |
|  |  |  | korrelation | Strom verbraucht gesamt | r = 0.99 | a = 1.35, b = 1.02e+04 |
|  |  |  | korrelation | Außeneinheit Energie gesamt | r = 0.99 | a = 1.35, b = 1.02e+04 |
|  |  |  | korrelation | COP gesamt | r = 0.97 | a = 1.97e-05, b = 2.81 |
