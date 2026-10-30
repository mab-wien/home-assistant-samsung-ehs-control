# NASA-Rohwerte: automatische Deutungshilfe

Letzter Lauf: 30.10.2026 02:00 UTC, Zeitraum 7 Tage aus dem HA-Verlauf. Erzeugt nächtlich vom Dienst `nasa-katalog`
(docker-ki-environment). **Alles hier sind Hinweise, keine Bestätigung.**

- *Korrelation*: Minutenraster, Pearson r ≥ 0,9; Abbildung „benannter Sensor ≈ a · Rohwert + b“.
- *Ereignis*: Schaltvorgang eines benannten Binärsensors; Quote = Anteil der Vorgänge, bei denen sich der Rohwert
  innerhalb ±30 s ändert, Lift = Quote / Zufallsrate. Neustarts/Flashes sind ausgenommen.
- *Zähler*: monoton steigend, Anstieg je Stunde.
- Katalog: Name/Status im NASA-Katalog; „vermutet“ mit Beleg „automatisch …“ stammt aus diesem Lauf.

| Kennung | Fremdname (Beormund) | Katalog | Methode | Partner | Kennwert | Details |
|---|---|---|---|---|---|---|
| 0x0418 | LVAR_AD___ (Platzhalter, ohne Bedeutung) | unbekannt | korrelation | WP Diagnose Störungen | r = -0.93 | a = -0.000136, b = 295 |
| 0x22FC | VAR_NM___ (Platzhalter, ohne Bedeutung) | vermutet: Unbekannte Größe; monotone Zählerhypothese nicht bestätigt | korrelation | WP Diagnose COP | r = 0.91 | a = 0.000234, b = 3.93 |
| 0x408A | ENUM_IN_2WAY_VALVE | vermutet: ändert sich mit Dreiwegeventil Warmwasserstellung → off | ereignis | Dreiwegeventil Warmwasserstellung → off | 34/34 | Lift 145.2 |
|  |  |  | ereignis | Dreiwegeventil Warmwasserstellung → on | 33/33 | Lift 145.2 |
| 0x4204 | VAR_IN___ (Platzhalter, ohne Bedeutung) | vermutet: Vorlaufbezogene Temperatur: HA Tw2 minus 2 K (Funktion offen) | korrelation | Heizwasser Vorlauf Tw2 | r = 1.00 | a = 1, b = 2 |
|  |  |  | korrelation | Vorlauftemperatur Samsung | r = 0.98 | a = 0.97, b = 3.08 |
|  |  |  | korrelation | Heizwasser Vorlaufabweichung Ist minus Soll | r = 0.98 | a = 0.967, b = -30.3 |
|  |  |  | korrelation | Heizwasser Rücklauf Tw1 | r = 0.97 | a = 0.874, b = 3.48 |
|  |  |  | korrelation | Heizwasser Temperatur nach Zusatzheizer Tw3 | r = 0.97 | a = 0.905, b = 5.08 |
|  |  |  | korrelation | Heizwasser Rücklauf Tw1 Außeneinheit Spiegelwert | r = 0.96 | a = 0.845, b = 4.5 |
|  |  |  | korrelation | Inneneinheit Wärmetauscher Eintrittstemperatur | r = 0.90 | a = 0.965, b = -0.829 |
| 0x4211 | VAR_IN_CAPACITY_REQUEST | vermutet: ändert sich mit Thermoanforderung aktiv → off | ereignis | Thermoanforderung aktiv → off | 46/46 | Lift 106.1 |
|  |  |  | ereignis | Thermoanforderung aktiv → on | 48/48 | Lift 106.1 |
|  |  |  | ereignis | Dreiwegeventil Warmwasserstellung → off | 26/34 | Lift 81.1 |
| 0x4301 | VAR_IN___ (Platzhalter, ohne Bedeutung) | vermutet: ändert sich mit Dreiwegeventil Warmwasserstellung → on | ereignis | Dreiwegeventil Warmwasserstellung → on | 31/33 | Lift 82.6 |
|  |  |  | ereignis | Dreiwegeventil Warmwasserstellung → off | 25/34 | Lift 64.7 |
| 0x440E | LVAR_IN___ (Platzhalter, ohne Bedeutung) | vermutet: ändert sich mit Thermoanforderung aktiv → off | ereignis | Thermoanforderung aktiv → off | 46/46 | Lift 67.8 |
|  |  |  | ereignis | Thermoanforderung aktiv → on | 48/48 | Lift 67.8 |
|  |  |  | ereignis | Dreiwegeventil Warmwasserstellung → off | 29/34 | Lift 57.9 |
| 0x800D | ENUM_OUT___ (Platzhalter, ohne Bedeutung) | vermutet: ändert sich mit Verdichter in Betrieb → off | ereignis | Verdichter in Betrieb → off | 44/46 | Lift 101.5 |
|  |  |  | ereignis | Verdichter in Betrieb → on | 41/47 | Lift 92.6 |
| 0x8032 | ENUM_OUT___ (Platzhalter, ohne Bedeutung) | vermutet: ändert sich mit Außeneinheit Bodenheizung Status → on | ereignis | Außeneinheit Bodenheizung Status → on | 8/8 | Lift 19.3 |
|  |  |  | ereignis | Abtauung aktiv → on | 8/8 | Lift 19.3 |
|  |  |  | ereignis | Thermoanforderung aktiv → off | 44/46 | Lift 18.5 |
|  |  |  | ereignis | Dreiwegeventil Warmwasserstellung → off | 27/34 | Lift 15.4 |
| 0x8033 | ENUM_OUT___ (Platzhalter, ohne Bedeutung) | vermutet: ändert sich mit Außeneinheit Bodenheizung Status → on | ereignis | Abtauung aktiv → on | 8/8 | Lift 19.4 |
|  |  |  | ereignis | Außeneinheit Bodenheizung Status → on | 8/8 | Lift 19.4 |
|  |  |  | ereignis | Thermoanforderung aktiv → off | 44/46 | Lift 18.5 |
|  |  |  | ereignis | Dreiwegeventil Warmwasserstellung → off | 27/34 | Lift 15.4 |
| 0x805E | ENUM_OUT___ (Platzhalter, ohne Bedeutung) | vermutet: ändert sich mit Thermoanforderung aktiv → off | ereignis | Thermoanforderung aktiv → off | 46/46 | Lift 106.1 |
|  |  |  | ereignis | Thermoanforderung aktiv → on | 48/48 | Lift 106.1 |
|  |  |  | ereignis | Dreiwegeventil Warmwasserstellung → off | 26/34 | Lift 81.1 |
| 0x8062 | NASA_OUTDOOR_LOGICAL_DEFROST_STEP | vermutet: ändert sich mit Abtauung aktiv → off | ereignis | Abtauung aktiv → off | 9/9 | Lift 164.7 |
|  |  |  | ereignis | Kältemittel Vierwegeventil Status → off | 9/9 | Lift 164.7 |
|  |  |  | ereignis | Außeneinheit Bodenheizung Status → on | 8/8 | Lift 164.7 |
|  |  |  | ereignis | Abtauung aktiv → on | 8/8 | Lift 164.7 |
|  |  |  | ereignis | Kältemittel Vierwegeventil Status → on | 8/8 | Lift 164.7 |
|  |  |  | korrelation | Abtauung Ablaufcode | r = -0.93 | a = -74.3, b = 255 |
| 0x807F | ENUM_OUT___ (Platzhalter, ohne Bedeutung) | vermutet: ändert sich mit Außeneinheit Bodenheizung Status → on | ereignis | Außeneinheit Bodenheizung Status → on | 8/8 | Lift 26.1 |
|  |  |  | ereignis | Abtauung aktiv → on | 8/8 | Lift 26.1 |
|  |  |  | ereignis | Thermoanforderung aktiv → off | 40/46 | Lift 22.7 |
|  |  |  | ereignis | Dreiwegeventil Warmwasserstellung → off | 26/34 | Lift 19.9 |
| 0x8225 | VAR_OUT___ (Platzhalter, ohne Bedeutung) | unbekannt | korrelation | Vorlauftemperatur Samsung | r = 0.93 | a = 0.0962, b = 0.346 |
|  |  |  | korrelation | Heizwasser Rücklauf Tw1 Außeneinheit Spiegelwert | r = 0.93 | a = 0.0856, b = 1.4 |
|  |  |  | korrelation | Heizwasser Temperatur nach Zusatzheizer Tw3 | r = 0.92 | a = 0.0896, b = 2.56 |
|  |  |  | korrelation | Heizwasser Vorlauf Tw2 | r = 0.92 | a = 0.0957, b = 0.477 |
|  |  |  | korrelation | Heizwasser Rücklauf Tw1 | r = 0.91 | a = 0.0857, b = 1.4 |
| 0x8231 | NASA_OUTDOOR_HEATING_PERCENT | vermutet: ändert sich mit Thermoanforderung aktiv → off | ereignis | Thermoanforderung aktiv → on | 48/48 | Lift 106.1 |
|  |  |  | ereignis | Thermoanforderung aktiv → off | 46/46 | Lift 106.1 |
|  |  |  | ereignis | Dreiwegeventil Warmwasserstellung → off | 26/34 | Lift 81.1 |
| 0x823C | VAR_OUT___ (Platzhalter, ohne Bedeutung) | vermutet: ändert sich mit Verdichter in Betrieb → off | ereignis | Verdichter in Betrieb → off | 39/46 | Lift 64.5 |
|  |  |  | ereignis | Verdichter in Betrieb → on | 38/48 | Lift 60.3 |
| 0x8247 | NASA_OUTDOOR_DEFROST_STEP | vermutet: Abtau-Ablaufcode (diskreter Status; keine Offsetkorrektur) | ereignis | Außeneinheit Bodenheizung Status → on | 8/8 | Lift 114.7 |
|  |  |  | ereignis | Abtauung aktiv → on | 8/8 | Lift 114.7 |
|  |  |  | ereignis | Kältemittel Vierwegeventil Status → on | 8/8 | Lift 114.7 |
|  |  |  | ereignis | Abtauung aktiv → off | 9/9 | Lift 114.7 |
|  |  |  | ereignis | Kältemittel Vierwegeventil Status → off | 9/9 | Lift 114.7 |
|  |  |  | korrelation | Abtauung Ablaufcode | r = 0.95 | a = 0.913, b = 22.3 |
| 0x8248 | NASA_OUTDOOR_SAFETY_START | vermutet: ändert sich mit Thermoanforderung aktiv → on | ereignis | Thermoanforderung aktiv → on | 48/48 | Lift 32.4 |
|  |  |  | ereignis | Verdichter in Betrieb → on | 40/48 | Lift 27.0 |
| 0x8249 | VAR_OUT___ (Platzhalter, ohne Bedeutung) | vermutet: ändert sich mit Thermoanforderung aktiv → on | ereignis | Thermoanforderung aktiv → on | 48/48 | Lift 47.3 |
|  |  |  | ereignis | Thermoanforderung aktiv → off | 44/46 | Lift 45.2 |
|  |  |  | ereignis | Dreiwegeventil Warmwasserstellung → off | 26/34 | Lift 36.1 |
| 0x8278 | VAR_OUT_SENSOR_OCT1 | bestaetigt: OCT1 Temperatur (S-NET) | korrelation | OCT1 Temperatur | r = 0.99 | a = 0.0993, b = 0.0769 |
|  |  |  | korrelation | Hochdruck | r = 0.96 | a = 11.2, b = 926 |
|  |  |  | korrelation | Kältekreis Hochdruck Sättigungstemperatur | r = 0.96 | a = 0.194, b = 13.8 |
|  |  |  | korrelation | Doppelrohr Wärmetauscher Temperatur | r = 0.91 | a = 0.142, b = 17.7 |
| 0x82A8 | VAR_OUT_CONTROL_IDU_TOTAL_ABSCAPA | vermutet: ändert sich mit Thermoanforderung aktiv → off | ereignis | Thermoanforderung aktiv → on | 48/48 | Lift 106.1 |
|  |  |  | ereignis | Thermoanforderung aktiv → off | 46/46 | Lift 106.1 |
|  |  |  | ereignis | Dreiwegeventil Warmwasserstellung → off | 26/34 | Lift 81.1 |
| 0x82A9 | VAR_OUT_CONTROL_IDU_TOTAL_ABSCAPA2 | vermutet: ändert sich mit Thermoanforderung aktiv → off | ereignis | Thermoanforderung aktiv → on | 48/48 | Lift 106.1 |
|  |  |  | ereignis | Thermoanforderung aktiv → off | 46/46 | Lift 106.1 |
|  |  |  | ereignis | Dreiwegeventil Warmwasserstellung → off | 26/34 | Lift 81.1 |
| 0x82DE | NASA_OUTDOOR_EVA_IN | vermutet: Temperaturspiegel nahe 0x821C / Doppelrohr-Wärmetauscher (Position offen) | korrelation | Doppelrohr Wärmetauscher Temperatur | r = 1.00 | a = 1, b = -0.00853 |
|  |  |  | korrelation | Inneneinheit Wärmetauscher Eintrittstemperatur | r = 0.99 | a = 0.995, b = 0.14 |
|  |  |  | korrelation | Hochdruck | r = 0.91 | a = 68.5, b = -126 |
|  |  |  | korrelation | OCT1 Temperatur | r = 0.91 | a = 0.587, b = -8.61 |
|  |  |  | korrelation | Vorlauftemperatur Samsung | r = 0.90 | a = 0.835, b = 9.48 |
| 0x82E8 | VAR_OUT_LOAD_MCU_HR_BYPASS_EEV | vermutet: ändert sich mit Abtauung aktiv → off | ereignis | Abtauung aktiv → off | 9/9 | Lift 89.0 |
|  |  |  | ereignis | Kältemittel Vierwegeventil Status → off | 9/9 | Lift 89.0 |
|  |  |  | ereignis | Thermoanforderung aktiv → off | 46/46 | Lift 89.0 |
|  |  |  | ereignis | Thermoanforderung aktiv → on | 48/48 | Lift 89.0 |
|  |  |  | ereignis | Dreiwegeventil Warmwasserstellung → off | 26/34 | Lift 68.1 |
| 0x82F6 | VAR_OUT___ (Platzhalter, ohne Bedeutung) | vermutet: ändert sich mit Außeneinheit Bodenheizung Status → on | ereignis | Außeneinheit Bodenheizung Status → on | 8/8 | Lift 45.0 |
|  |  |  | ereignis | Abtauung aktiv → on | 8/8 | Lift 45.0 |
|  |  |  | ereignis | Dreiwegeventil Warmwasserstellung → off | 33/34 | Lift 43.7 |
|  |  |  | ereignis | Thermoanforderung aktiv → off | 40/46 | Lift 39.1 |
| 0x8404 | LVAR_OUT___ (Platzhalter, ohne Bedeutung) | unbekannt | ereignis | Thermoanforderung aktiv → off | 46/46 | Lift 41.2 |
|  |  |  | ereignis | Thermoanforderung aktiv → on | 48/48 | Lift 41.2 |
|  |  |  | ereignis | Außeneinheit Bodenheizung Status → on | 8/8 | Lift 41.2 |
|  |  |  | ereignis | Abtauung aktiv → on | 8/8 | Lift 41.2 |
|  |  |  | ereignis | Dreiwegeventil Warmwasserstellung → off | 26/34 | Lift 31.5 |
| 0x8405 | NASA_OUTDOOR_COMP1_RUNNING_TIME | vermutet: ≈ Aktive Betriebsstunden seit Inbetriebnahme -824.9 | korrelation | Aktive Betriebsstunden seit Inbetriebnahme | r = 1.00 | a = 0.996, b = 821 |
|  |  |  | korrelation | Tage seit Inbetriebnahme | r = 1.00 | a = 0.0451, b = 429 |
|  |  |  | korrelation | Wärme erzeugt gesamt | r = 1.00 | a = 4.71, b = 2.35e+04 |
|  |  |  | korrelation | Strom verbraucht gesamt | r = 1.00 | a = 1.34, b = 1.03e+04 |
|  |  |  | korrelation | Außeneinheit Energie gesamt | r = 1.00 | a = 1.34, b = 1.03e+04 |
|  |  |  | korrelation | COP gesamt | r = 0.99 | a = 2.11e-05, b = 2.79 |
|  |  |  | korrelation | WP Diagnose Störungen | r = -0.93 | a = -0.0366, b = 503 |
