# NASA-Rohwerte: automatische Deutungshilfe

Letzter Lauf: 24.10.2026 02:00 UTC, Zeitraum 7 Tage aus dem HA-Verlauf. Erzeugt nächtlich vom Dienst `nasa-katalog`
(docker-ki-environment). **Alles hier sind Hinweise, keine Bestätigung.**

- *Korrelation*: Minutenraster, Pearson r ≥ 0,9; Abbildung „benannter Sensor ≈ a · Rohwert + b“.
- *Ereignis*: Schaltvorgang eines benannten Binärsensors; Quote = Anteil der Vorgänge, bei denen sich der Rohwert
  innerhalb ±30 s ändert, Lift = Quote / Zufallsrate. Neustarts/Flashes sind ausgenommen.
- *Zähler*: monoton steigend, Anstieg je Stunde.
- Katalog: Name/Status im NASA-Katalog; „vermutet“ mit Beleg „automatisch …“ stammt aus diesem Lauf.

| Kennung | Fremdname (Beormund) | Katalog | Methode | Partner | Kennwert | Details |
|---|---|---|---|---|---|---|
| 0x22F7 | VAR_NM___ (Platzhalter, ohne Bedeutung) | unbekannt | korrelation | Außeneinheit Spannung | r = 0.94 | a = 28.4, b = -68.9 |
| 0x408A | ENUM_IN_2WAY_VALVE | vermutet: ändert sich mit Dreiwegeventil Warmwasserstellung → on | ereignis | Dreiwegeventil Warmwasserstellung → on | 8/8 | Lift 80.0 |
|  |  |  | ereignis | Dreiwegeventil Warmwasserstellung → off | 8/8 | Lift 80.0 |
|  |  |  | ereignis | Thermoanforderung aktiv → off | 6/7 | Lift 68.6 |
| 0x4204 | VAR_IN___ (Platzhalter, ohne Bedeutung) | vermutet: Vorlaufbezogene Temperatur: HA Tw2 minus 2 K (Funktion offen) | korrelation | Heizwasser Vorlauf Tw2 | r = 1.00 | a = 1, b = 2 |
|  |  |  | korrelation | Heizwasser Vorlaufabweichung Ist minus Soll | r = 0.99 | a = 0.99, b = -31.7 |
|  |  |  | korrelation | Vorlauftemperatur Samsung | r = 0.99 | a = 0.99, b = 2.36 |
|  |  |  | korrelation | Heizwasser Temperatur nach Zusatzheizer Tw3 | r = 0.98 | a = 0.936, b = 3.98 |
|  |  |  | korrelation | Heizwasser Rücklauf Tw1 | r = 0.97 | a = 0.838, b = 4.86 |
|  |  |  | korrelation | Heizwasser Rücklauf Tw1 Außeneinheit Spiegelwert | r = 0.97 | a = 0.832, b = 5.05 |
|  |  |  | korrelation | Außeneinheit Leistung | r = 0.92 | a = 123, b = -3.28e+03 |
| 0x420C | NASA_INDOOR_OUTER_TEMP | vermutet: Außentemperatur im Innengerät (Bus-Rohwert /10 °C) | korrelation | Temperatur Außenbereich (Wärmepumpe) | r = 1.00 | a = 0.0999, b = 0.00572 |
| 0x4211 | VAR_IN_CAPACITY_REQUEST | vermutet: ändert sich mit Thermoanforderung aktiv → off | ereignis | Thermoanforderung aktiv → on | 10/10 | Lift 81.3 |
|  |  |  | ereignis | Thermoanforderung aktiv → off | 8/8 | Lift 81.3 |
|  |  |  | ereignis | Dreiwegeventil Warmwasserstellung → off | 6/8 | Lift 61.0 |
| 0x4301 | VAR_IN___ (Platzhalter, ohne Bedeutung) | unbekannt | ereignis | Dreiwegeventil Warmwasserstellung → on | 7/8 | Lift 59.0 |
|  |  |  | ereignis | Thermoanforderung aktiv → off | 5/7 | Lift 48.2 |
| 0x440E | LVAR_IN___ (Platzhalter, ohne Bedeutung) | vermutet: ändert sich mit Thermoanforderung aktiv → off | ereignis | Thermoanforderung aktiv → off | 8/8 | Lift 50.5 |
|  |  |  | ereignis | Thermoanforderung aktiv → on | 10/10 | Lift 50.5 |
|  |  |  | ereignis | Dreiwegeventil Warmwasserstellung → off | 7/8 | Lift 44.1 |
| 0x800D | ENUM_OUT___ (Platzhalter, ohne Bedeutung) | vermutet: ändert sich mit Verdichter in Betrieb → off | ereignis | Verdichter in Betrieb → off | 8/8 | Lift 81.3 |
|  |  |  | ereignis | Verdichter in Betrieb → on | 7/9 | Lift 63.3 |
| 0x8032 | ENUM_OUT___ (Platzhalter, ohne Bedeutung) | vermutet: ändert sich mit Thermoanforderung aktiv → off | ereignis | Thermoanforderung aktiv → off | 8/8 | Lift 17.5 |
|  |  |  | ereignis | Dreiwegeventil Warmwasserstellung → off | 6/8 | Lift 13.1 |
| 0x8033 | ENUM_OUT___ (Platzhalter, ohne Bedeutung) | vermutet: ändert sich mit Thermoanforderung aktiv → off | ereignis | Thermoanforderung aktiv → off | 8/8 | Lift 17.5 |
|  |  |  | ereignis | Dreiwegeventil Warmwasserstellung → off | 6/8 | Lift 13.1 |
| 0x805E | ENUM_OUT___ (Platzhalter, ohne Bedeutung) | vermutet: ändert sich mit Thermoanforderung aktiv → off | ereignis | Thermoanforderung aktiv → on | 10/10 | Lift 81.3 |
|  |  |  | ereignis | Thermoanforderung aktiv → off | 8/8 | Lift 81.3 |
|  |  |  | ereignis | Dreiwegeventil Warmwasserstellung → off | 6/8 | Lift 61.0 |
| 0x8062 | NASA_OUTDOOR_LOGICAL_DEFROST_STEP | unbekannt | korrelation | Abtauung Ablaufcode | r = -0.93 | a = -73.2, b = 255 |
| 0x807F | ENUM_OUT___ (Platzhalter, ohne Bedeutung) | vermutet: ändert sich mit Thermoanforderung aktiv → off | ereignis | Thermoanforderung aktiv → off | 8/8 | Lift 23.0 |
|  |  |  | ereignis | Dreiwegeventil Warmwasserstellung → off | 6/8 | Lift 17.3 |
| 0x8225 | VAR_OUT___ (Platzhalter, ohne Bedeutung) | unbekannt | korrelation | Heizwasser Rücklauf Tw1 Außeneinheit Spiegelwert | r = 0.97 | a = 0.0814, b = 3.59 |
|  |  |  | korrelation | Vorlauftemperatur Samsung | r = 0.97 | a = 0.0942, b = 1.66 |
|  |  |  | korrelation | Heizwasser Rücklauf Tw1 | r = 0.96 | a = 0.0808, b = 3.85 |
|  |  |  | korrelation | Heizwasser Vorlauf Tw2 | r = 0.96 | a = 0.0935, b = 1.91 |
|  |  |  | korrelation | Heizwasser Temperatur nach Zusatzheizer Tw3 | r = 0.95 | a = 0.0883, b = 3.59 |
|  |  |  | korrelation | Heizwasser Vorlaufabweichung Ist minus Soll | r = 0.95 | a = 0.0926, b = -31.7 |
| 0x8231 | NASA_OUTDOOR_HEATING_PERCENT | vermutet: ändert sich mit Thermoanforderung aktiv → off | ereignis | Thermoanforderung aktiv → off | 8/8 | Lift 81.3 |
|  |  |  | ereignis | Thermoanforderung aktiv → on | 10/10 | Lift 81.3 |
|  |  |  | ereignis | Dreiwegeventil Warmwasserstellung → off | 6/8 | Lift 61.0 |
| 0x823C | VAR_OUT___ (Platzhalter, ohne Bedeutung) | unbekannt | ereignis | Verdichter in Betrieb → off | 7/8 | Lift 55.7 |
|  |  |  | ereignis | Verdichter in Betrieb → on | 8/10 | Lift 50.9 |
| 0x8247 | NASA_OUTDOOR_DEFROST_STEP | vermutet: Abtau-Ablaufcode (diskreter Status; keine Offsetkorrektur) | korrelation | Abtauung Ablaufcode | r = 1.00 | a = 1.01, b = -1.29 |
| 0x8248 | NASA_OUTDOOR_SAFETY_START | vermutet: ändert sich mit Thermoanforderung aktiv → on | ereignis | Thermoanforderung aktiv → on | 10/10 | Lift 24.1 |
|  |  |  | ereignis | Verdichter in Betrieb → on | 8/10 | Lift 19.3 |
| 0x8249 | VAR_OUT___ (Platzhalter, ohne Bedeutung) | vermutet: ändert sich mit Thermoanforderung aktiv → off | ereignis | Thermoanforderung aktiv → off | 8/8 | Lift 38.5 |
|  |  |  | ereignis | Thermoanforderung aktiv → on | 10/10 | Lift 38.5 |
|  |  |  | ereignis | Dreiwegeventil Warmwasserstellung → off | 6/8 | Lift 28.9 |
| 0x8278 | VAR_OUT_SENSOR_OCT1 | bestaetigt: OCT1 Temperatur (S-NET) | korrelation | OCT1 Temperatur | r = 0.98 | a = 0.0978, b = 0.244 |
|  |  |  | korrelation | Hochdruck | r = 0.97 | a = 11.8, b = 862 |
|  |  |  | korrelation | Kältekreis Hochdruck Sättigungstemperatur | r = 0.96 | a = 0.202, b = 13.1 |
| 0x82A8 | VAR_OUT_CONTROL_IDU_TOTAL_ABSCAPA | vermutet: ändert sich mit Thermoanforderung aktiv → off | ereignis | Thermoanforderung aktiv → on | 10/10 | Lift 81.3 |
|  |  |  | ereignis | Thermoanforderung aktiv → off | 8/8 | Lift 81.3 |
|  |  |  | ereignis | Dreiwegeventil Warmwasserstellung → off | 6/8 | Lift 61.0 |
| 0x82A9 | VAR_OUT_CONTROL_IDU_TOTAL_ABSCAPA2 | vermutet: ändert sich mit Thermoanforderung aktiv → off | ereignis | Thermoanforderung aktiv → off | 8/8 | Lift 81.3 |
|  |  |  | ereignis | Thermoanforderung aktiv → on | 10/10 | Lift 81.3 |
|  |  |  | ereignis | Dreiwegeventil Warmwasserstellung → off | 6/8 | Lift 61.0 |
| 0x82DE | NASA_OUTDOOR_EVA_IN | vermutet: Temperaturspiegel nahe 0x821C / Doppelrohr-Wärmetauscher (Position offen) | korrelation | Doppelrohr Wärmetauscher Temperatur | r = 1.00 | a = 1, b = 0.0141 |
|  |  |  | korrelation | Inneneinheit Wärmetauscher Eintrittstemperatur | r = 1.00 | a = 0.996, b = 0.115 |
|  |  |  | korrelation | Hochdruck | r = 0.90 | a = 70, b = -170 |
| 0x82E8 | VAR_OUT_LOAD_MCU_HR_BYPASS_EEV | vermutet: ändert sich mit Thermoanforderung aktiv → off | ereignis | Thermoanforderung aktiv → off | 8/8 | Lift 66.5 |
|  |  |  | ereignis | Thermoanforderung aktiv → on | 10/10 | Lift 66.5 |
|  |  |  | ereignis | Dreiwegeventil Warmwasserstellung → off | 6/8 | Lift 49.9 |
| 0x82F6 | VAR_OUT___ (Platzhalter, ohne Bedeutung) | vermutet: ändert sich mit Thermoanforderung aktiv → off | ereignis | Dreiwegeventil Warmwasserstellung → off | 8/8 | Lift 32.2 |
|  |  |  | ereignis | Thermoanforderung aktiv → off | 8/8 | Lift 32.2 |
| 0x8404 | LVAR_OUT___ (Platzhalter, ohne Bedeutung) | vermutet: ändert sich mit Thermoanforderung aktiv → off | ereignis | Thermoanforderung aktiv → on | 10/10 | Lift 31.9 |
|  |  |  | ereignis | Thermoanforderung aktiv → off | 8/8 | Lift 31.9 |
|  |  |  | ereignis | Dreiwegeventil Warmwasserstellung → off | 6/8 | Lift 24.0 |
| 0x8405 | NASA_OUTDOOR_COMP1_RUNNING_TIME | vermutet: ≈ Aktive Betriebsstunden seit Inbetriebnahme -899.5 | korrelation | Aktive Betriebsstunden seit Inbetriebnahme | r = 1.00 | a = 0.991, b = 891 |
|  |  |  | korrelation | Tage seit Inbetriebnahme | r = 1.00 | a = 0.0456, b = 422 |
|  |  |  | korrelation | Wärme erzeugt gesamt | r = 1.00 | a = 5.04, b = 1.9e+04 |
|  |  |  | korrelation | Strom verbraucht gesamt | r = 0.99 | a = 1.48, b = 8.38e+03 |
|  |  |  | korrelation | Außeneinheit Energie gesamt | r = 0.99 | a = 1.48, b = 8.38e+03 |
|  |  |  | korrelation | COP gesamt | r = 0.97 | a = 1.74e-05, b = 2.84 |
