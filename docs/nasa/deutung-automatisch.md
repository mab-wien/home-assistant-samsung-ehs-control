# NASA-Rohwerte: automatische Deutungshilfe

Letzter Lauf: 29.10.2026 02:00 UTC, Zeitraum 7 Tage aus dem HA-Verlauf. Erzeugt nächtlich vom Dienst `nasa-katalog`
(docker-ki-environment). **Alles hier sind Hinweise, keine Bestätigung.**

- *Korrelation*: Minutenraster, Pearson r ≥ 0,9; Abbildung „benannter Sensor ≈ a · Rohwert + b“.
- *Ereignis*: Schaltvorgang eines benannten Binärsensors; Quote = Anteil der Vorgänge, bei denen sich der Rohwert
  innerhalb ±30 s ändert, Lift = Quote / Zufallsrate. Neustarts/Flashes sind ausgenommen.
- *Zähler*: monoton steigend, Anstieg je Stunde.
- Katalog: Name/Status im NASA-Katalog; „vermutet“ mit Beleg „automatisch …“ stammt aus diesem Lauf.

| Kennung | Fremdname (Beormund) | Katalog | Methode | Partner | Kennwert | Details |
|---|---|---|---|---|---|---|
| 0x22F7 | VAR_NM___ (Platzhalter, ohne Bedeutung) | unbekannt | korrelation | Außeneinheit Spannung | r = 0.93 | a = 31.9, b = -120 |
| 0x408A | ENUM_IN_2WAY_VALVE | vermutet: ändert sich mit Dreiwegeventil Warmwasserstellung → on | ereignis | Dreiwegeventil Warmwasserstellung → on | 33/33 | Lift 132.6 |
|  |  |  | ereignis | Dreiwegeventil Warmwasserstellung → off | 33/33 | Lift 132.6 |
| 0x4204 | VAR_IN___ (Platzhalter, ohne Bedeutung) | vermutet: Vorlaufbezogene Temperatur: HA Tw2 minus 2 K (Funktion offen) | korrelation | Heizwasser Vorlauf Tw2 | r = 1.00 | a = 1, b = 2 |
|  |  |  | korrelation | Heizwasser Vorlaufabweichung Ist minus Soll | r = 1.00 | a = 0.993, b = -31.8 |
|  |  |  | korrelation | Vorlauftemperatur Samsung | r = 0.99 | a = 0.991, b = 2.32 |
|  |  |  | korrelation | Heizwasser Temperatur nach Zusatzheizer Tw3 | r = 0.98 | a = 0.931, b = 4.13 |
|  |  |  | korrelation | Heizwasser Rücklauf Tw1 | r = 0.97 | a = 0.866, b = 3.87 |
|  |  |  | korrelation | Heizwasser Rücklauf Tw1 Außeneinheit Spiegelwert | r = 0.97 | a = 0.858, b = 4.13 |
|  |  |  | korrelation | Außeneinheit Leistung | r = 0.91 | a = 110, b = -2.78e+03 |
|  |  |  | korrelation | Inneneinheit Wärmetauscher Eintrittstemperatur | r = 0.90 | a = 0.954, b = -0.34 |
|  |  |  | korrelation | Doppelrohr Wärmetauscher Temperatur | r = 0.90 | a = 0.955, b = -0.358 |
| 0x4211 | VAR_IN_CAPACITY_REQUEST | vermutet: ändert sich mit Thermoanforderung aktiv → off | ereignis | Thermoanforderung aktiv → off | 42/42 | Lift 104.2 |
|  |  |  | ereignis | Thermoanforderung aktiv → on | 43/43 | Lift 104.2 |
|  |  |  | ereignis | Dreiwegeventil Warmwasserstellung → off | 25/33 | Lift 78.9 |
| 0x4301 | VAR_IN___ (Platzhalter, ohne Bedeutung) | vermutet: ändert sich mit Dreiwegeventil Warmwasserstellung → on | ereignis | Dreiwegeventil Warmwasserstellung → on | 31/33 | Lift 80.8 |
|  |  |  | ereignis | Dreiwegeventil Warmwasserstellung → off | 24/33 | Lift 62.6 |
| 0x440E | LVAR_IN___ (Platzhalter, ohne Bedeutung) | vermutet: ändert sich mit Thermoanforderung aktiv → off | ereignis | Thermoanforderung aktiv → off | 42/42 | Lift 68.1 |
|  |  |  | ereignis | Thermoanforderung aktiv → on | 43/43 | Lift 68.1 |
|  |  |  | ereignis | Dreiwegeventil Warmwasserstellung → off | 28/33 | Lift 57.8 |
| 0x800D | ENUM_OUT___ (Platzhalter, ohne Bedeutung) | vermutet: ändert sich mit Verdichter in Betrieb → off | ereignis | Verdichter in Betrieb → off | 39/41 | Lift 99.1 |
|  |  |  | ereignis | Verdichter in Betrieb → on | 38/43 | Lift 92.1 |
| 0x8032 | ENUM_OUT___ (Platzhalter, ohne Bedeutung) | vermutet: ändert sich mit Thermoanforderung aktiv → off | ereignis | Thermoanforderung aktiv → off | 40/42 | Lift 17.3 |
|  |  |  | ereignis | Außeneinheit Bodenheizung Status → on | 9/10 | Lift 16.3 |
|  |  |  | ereignis | Abtauung aktiv → on | 9/10 | Lift 16.3 |
|  |  |  | ereignis | Dreiwegeventil Warmwasserstellung → off | 26/33 | Lift 14.3 |
| 0x8033 | ENUM_OUT___ (Platzhalter, ohne Bedeutung) | vermutet: ändert sich mit Thermoanforderung aktiv → off | ereignis | Thermoanforderung aktiv → off | 40/42 | Lift 17.3 |
|  |  |  | ereignis | Außeneinheit Bodenheizung Status → on | 9/10 | Lift 16.3 |
|  |  |  | ereignis | Abtauung aktiv → on | 9/10 | Lift 16.3 |
|  |  |  | ereignis | Dreiwegeventil Warmwasserstellung → off | 26/33 | Lift 14.3 |
| 0x805E | ENUM_OUT___ (Platzhalter, ohne Bedeutung) | vermutet: ändert sich mit Thermoanforderung aktiv → off | ereignis | Thermoanforderung aktiv → off | 42/42 | Lift 104.2 |
|  |  |  | ereignis | Thermoanforderung aktiv → on | 43/43 | Lift 104.2 |
|  |  |  | ereignis | Dreiwegeventil Warmwasserstellung → off | 25/33 | Lift 78.9 |
| 0x8062 | NASA_OUTDOOR_LOGICAL_DEFROST_STEP | vermutet: ändert sich mit Außeneinheit Bodenheizung Status → on | ereignis | Außeneinheit Bodenheizung Status → on | 10/10 | Lift 115.3 |
|  |  |  | ereignis | Abtauung aktiv → on | 10/10 | Lift 115.3 |
|  |  |  | ereignis | Kältemittel Vierwegeventil Status → on | 10/10 | Lift 115.3 |
|  |  |  | ereignis | Abtauung aktiv → off | 10/10 | Lift 115.3 |
|  |  |  | ereignis | Kältemittel Vierwegeventil Status → off | 10/10 | Lift 115.3 |
|  |  |  | korrelation | Abtauung Ablaufcode | r = -0.93 | a = -74.1, b = 255 |
| 0x807F | ENUM_OUT___ (Platzhalter, ohne Bedeutung) | vermutet: ändert sich mit Thermoanforderung aktiv → off | ereignis | Thermoanforderung aktiv → off | 36/42 | Lift 21.0 |
|  |  |  | ereignis | Abtauung aktiv → on | 8/10 | Lift 19.6 |
|  |  |  | ereignis | Außeneinheit Bodenheizung Status → on | 8/10 | Lift 19.6 |
|  |  |  | ereignis | Dreiwegeventil Warmwasserstellung → off | 25/33 | Lift 18.5 |
| 0x8225 | VAR_OUT___ (Platzhalter, ohne Bedeutung) | unbekannt | korrelation | Heizwasser Rücklauf Tw1 Außeneinheit Spiegelwert | r = 0.95 | a = 0.0856, b = 1.6 |
|  |  |  | korrelation | Vorlauftemperatur Samsung | r = 0.94 | a = 0.0963, b = 0.413 |
|  |  |  | korrelation | Heizwasser Rücklauf Tw1 | r = 0.94 | a = 0.0855, b = 1.67 |
|  |  |  | korrelation | Heizwasser Vorlauf Tw2 | r = 0.94 | a = 0.0957, b = 0.622 |
|  |  |  | korrelation | Heizwasser Vorlaufabweichung Ist minus Soll | r = 0.94 | a = 0.0952, b = -33.2 |
|  |  |  | korrelation | Heizwasser Temperatur nach Zusatzheizer Tw3 | r = 0.93 | a = 0.0898, b = 2.59 |
| 0x8231 | NASA_OUTDOOR_HEATING_PERCENT | vermutet: ändert sich mit Thermoanforderung aktiv → off | ereignis | Thermoanforderung aktiv → off | 42/42 | Lift 104.2 |
|  |  |  | ereignis | Thermoanforderung aktiv → on | 43/43 | Lift 104.2 |
|  |  |  | ereignis | Dreiwegeventil Warmwasserstellung → off | 25/33 | Lift 78.9 |
| 0x823C | VAR_OUT___ (Platzhalter, ohne Bedeutung) | vermutet: ändert sich mit Verdichter in Betrieb → off | ereignis | Verdichter in Betrieb → off | 36/41 | Lift 66.6 |
|  |  |  | ereignis | Verdichter in Betrieb → on | 34/43 | Lift 59.9 |
| 0x8247 | NASA_OUTDOOR_DEFROST_STEP | vermutet: Abtau-Ablaufcode (diskreter Status; keine Offsetkorrektur) | ereignis | Kältemittel Vierwegeventil Status → on | 10/10 | Lift 84.0 |
|  |  |  | ereignis | Abtauung aktiv → off | 10/10 | Lift 84.0 |
|  |  |  | ereignis | Außeneinheit Bodenheizung Status → on | 10/10 | Lift 84.0 |
|  |  |  | ereignis | Abtauung aktiv → on | 10/10 | Lift 84.0 |
|  |  |  | ereignis | Kältemittel Vierwegeventil Status → off | 10/10 | Lift 84.0 |
|  |  |  | korrelation | Abtauung Ablaufcode | r = 1.00 | a = 1.01, b = -1.44 |
| 0x8248 | NASA_OUTDOOR_SAFETY_START | vermutet: ändert sich mit Thermoanforderung aktiv → on | ereignis | Thermoanforderung aktiv → on | 43/43 | Lift 32.7 |
|  |  |  | ereignis | Verdichter in Betrieb → on | 37/43 | Lift 28.1 |
| 0x8249 | VAR_OUT___ (Platzhalter, ohne Bedeutung) | vermutet: ändert sich mit Thermoanforderung aktiv → off | ereignis | Thermoanforderung aktiv → off | 41/41 | Lift 46.5 |
|  |  |  | ereignis | Thermoanforderung aktiv → on | 43/43 | Lift 46.5 |
|  |  |  | ereignis | Dreiwegeventil Warmwasserstellung → off | 25/33 | Lift 35.2 |
| 0x8278 | VAR_OUT_SENSOR_OCT1 | bestaetigt: OCT1 Temperatur (S-NET) | korrelation | OCT1 Temperatur | r = 0.99 | a = 0.0991, b = 0.106 |
|  |  |  | korrelation | Hochdruck | r = 0.96 | a = 11.4, b = 913 |
|  |  |  | korrelation | Kältekreis Hochdruck Sättigungstemperatur | r = 0.96 | a = 0.192, b = 14.1 |
|  |  |  | korrelation | Doppelrohr Wärmetauscher Temperatur | r = 0.90 | a = 0.142, b = 17.8 |
| 0x82A8 | VAR_OUT_CONTROL_IDU_TOTAL_ABSCAPA | vermutet: ändert sich mit Thermoanforderung aktiv → off | ereignis | Thermoanforderung aktiv → off | 42/42 | Lift 104.2 |
|  |  |  | ereignis | Thermoanforderung aktiv → on | 43/43 | Lift 104.2 |
|  |  |  | ereignis | Dreiwegeventil Warmwasserstellung → off | 25/33 | Lift 78.9 |
| 0x82A9 | VAR_OUT_CONTROL_IDU_TOTAL_ABSCAPA2 | vermutet: ändert sich mit Thermoanforderung aktiv → off | ereignis | Thermoanforderung aktiv → on | 43/43 | Lift 104.2 |
|  |  |  | ereignis | Thermoanforderung aktiv → off | 42/42 | Lift 104.2 |
|  |  |  | ereignis | Dreiwegeventil Warmwasserstellung → off | 25/33 | Lift 78.9 |
| 0x82DE | NASA_OUTDOOR_EVA_IN | vermutet: Temperaturspiegel nahe 0x821C / Doppelrohr-Wärmetauscher (Position offen) | korrelation | Doppelrohr Wärmetauscher Temperatur | r = 1.00 | a = 1, b = -0.0062 |
|  |  |  | korrelation | Inneneinheit Wärmetauscher Eintrittstemperatur | r = 0.99 | a = 0.991, b = 0.279 |
|  |  |  | korrelation | Hochdruck | r = 0.91 | a = 68.3, b = -118 |
|  |  |  | korrelation | OCT1 Temperatur | r = 0.91 | a = 0.577, b = -8.28 |
|  |  |  | korrelation | Vorlauftemperatur Samsung | r = 0.90 | a = 0.853, b = 8.9 |
|  |  |  | korrelation | Heizwasser Vorlauf Tw2 | r = 0.90 | a = 0.852, b = 8.94 |
| 0x82E8 | VAR_OUT_LOAD_MCU_HR_BYPASS_EEV | vermutet: ändert sich mit Abtauung aktiv → off | ereignis | Thermoanforderung aktiv → off | 41/41 | Lift 84.4 |
|  |  |  | ereignis | Abtauung aktiv → off | 10/10 | Lift 84.4 |
|  |  |  | ereignis | Kältemittel Vierwegeventil Status → off | 10/10 | Lift 84.4 |
|  |  |  | ereignis | Thermoanforderung aktiv → on | 43/43 | Lift 84.4 |
|  |  |  | ereignis | Dreiwegeventil Warmwasserstellung → off | 25/33 | Lift 63.9 |
| 0x82F6 | VAR_OUT___ (Platzhalter, ohne Bedeutung) | vermutet: ändert sich mit Außeneinheit Bodenheizung Status → on | ereignis | Außeneinheit Bodenheizung Status → on | 10/10 | Lift 44.1 |
|  |  |  | ereignis | Abtauung aktiv → on | 10/10 | Lift 44.1 |
|  |  |  | ereignis | Dreiwegeventil Warmwasserstellung → off | 32/33 | Lift 42.7 |
|  |  |  | ereignis | Thermoanforderung aktiv → off | 36/42 | Lift 37.8 |
| 0x8404 | LVAR_OUT___ (Platzhalter, ohne Bedeutung) | vermutet: ändert sich mit Außeneinheit Bodenheizung Status → on | ereignis | Thermoanforderung aktiv → on | 43/43 | Lift 42.1 |
|  |  |  | ereignis | Außeneinheit Bodenheizung Status → on | 10/10 | Lift 42.1 |
|  |  |  | ereignis | Abtauung aktiv → on | 10/10 | Lift 42.1 |
|  |  |  | ereignis | Thermoanforderung aktiv → off | 42/42 | Lift 42.1 |
|  |  |  | ereignis | Dreiwegeventil Warmwasserstellung → off | 25/33 | Lift 31.9 |
| 0x8405 | NASA_OUTDOOR_COMP1_RUNNING_TIME | vermutet: ≈ Aktive Betriebsstunden seit Inbetriebnahme -804.9 | korrelation | Aktive Betriebsstunden seit Inbetriebnahme | r = 1.00 | a = 0.997, b = 803 |
|  |  |  | korrelation | Tage seit Inbetriebnahme | r = 1.00 | a = 0.045, b = 430 |
|  |  |  | korrelation | Wärme erzeugt gesamt | r = 1.00 | a = 4.69, b = 2.38e+04 |
|  |  |  | korrelation | Strom verbraucht gesamt | r = 1.00 | a = 1.32, b = 1.05e+04 |
|  |  |  | korrelation | Außeneinheit Energie gesamt | r = 1.00 | a = 1.32, b = 1.05e+04 |
|  |  |  | korrelation | COP gesamt | r = 0.99 | a = 2.15e-05, b = 2.78 |
|  |  |  | korrelation | WP Diagnose Störungen | r = -0.95 | a = -0.0409, b = 562 |
