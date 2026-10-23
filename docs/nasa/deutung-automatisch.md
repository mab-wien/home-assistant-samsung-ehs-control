# NASA-Rohwerte: automatische Deutungshilfe

Letzter Lauf: 23.10.2026 07:14 UTC, Zeitraum 7 Tage aus dem HA-Verlauf. Erzeugt nächtlich vom Dienst `nasa-katalog`
(docker-ki-environment). **Alles hier sind Hinweise, keine Bestätigung.**

- *Korrelation*: Minutenraster, Pearson r ≥ 0,9; Abbildung „benannter Sensor ≈ a · Rohwert + b“.
- *Ereignis*: Schaltvorgang eines benannten Binärsensors; Quote = Anteil der Vorgänge, bei denen sich der Rohwert
  innerhalb ±30 s ändert, Lift = Quote / Zufallsrate. Neustarts/Flashes sind ausgenommen.
- *Zähler*: monoton steigend, Anstieg je Stunde.
- Katalog: Name/Status im NASA-Katalog; „vermutet“ mit Beleg „automatisch …“ stammt aus diesem Lauf.

| Kennung | Fremdname (Beormund) | Katalog | Methode | Partner | Kennwert | Details |
|---|---|---|---|---|---|---|
| 0x22F7 | VAR_NM___ (Platzhalter, ohne Bedeutung) | unbekannt | korrelation | Außeneinheit Spannung | r = 0.95 | a = 33.5, b = -142 |
| 0x22FC | VAR_NM___ (Platzhalter, ohne Bedeutung) | unbekannt | zaehler | – | 135 / h |  |
| 0x4204 | VAR_IN___ (Platzhalter, ohne Bedeutung) | vermutet: ≈ Heizwasser Vorlauf Tw2 -2.0 | korrelation | Heizwasser Vorlauf Tw2 | r = 1.00 | a = 1, b = 2 |
|  |  |  | korrelation | Vorlauftemperatur Samsung | r = 0.99 | a = 0.984, b = 2.57 |
|  |  |  | korrelation | Heizwasser Vorlaufabweichung Ist minus Soll | r = 0.99 | a = 0.991, b = -31.7 |
|  |  |  | korrelation | Heizwasser Temperatur nach Zusatzheizer Tw3 | r = 0.97 | a = 0.91, b = 4.87 |
|  |  |  | korrelation | Heizwasser Rücklauf Tw1 | r = 0.94 | a = 0.788, b = 6.73 |
|  |  |  | korrelation | Heizwasser Rücklauf Tw1 Außeneinheit Spiegelwert | r = 0.94 | a = 0.79, b = 6.68 |
|  |  |  | korrelation | Außeneinheit Leistung | r = 0.91 | a = 129, b = -3.38e+03 |
| 0x420C | NASA_INDOOR_OUTER_TEMP | vermutet: ≈ Temperatur Außenbereich (Wärmepumpe) ×10 | korrelation | Temperatur Außenbereich (Wärmepumpe) | r = 1.00 | a = 0.0999, b = 0.00415 |
| 0x8062 | NASA_OUTDOOR_LOGICAL_DEFROST_STEP | unbekannt | ereignis | Heißgasventil Status → off | 5/7 | Lift 29.8 |
|  |  |  | ereignis | Heißgasventil Status → on | 5/7 | Lift 29.8 |
|  |  |  | korrelation | Abtauung Ablaufcode | r = -0.93 | a = -73.1, b = 254 |
| 0x8225 | VAR_OUT___ (Platzhalter, ohne Bedeutung) | unbekannt | korrelation | Heizwasser Rücklauf Tw1 Außeneinheit Spiegelwert | r = 0.96 | a = 0.0764, b = 5.28 |
|  |  |  | korrelation | Heizwasser Rücklauf Tw1 | r = 0.95 | a = 0.0753, b = 5.69 |
|  |  |  | korrelation | Vorlauftemperatur Samsung | r = 0.94 | a = 0.0881, b = 3.49 |
|  |  |  | korrelation | Heizwasser Temperatur nach Zusatzheizer Tw3 | r = 0.93 | a = 0.0818, b = 5.62 |
|  |  |  | korrelation | Heizwasser Vorlauf Tw2 | r = 0.92 | a = 0.0868, b = 3.96 |
|  |  |  | korrelation | Heizwasser Vorlaufabweichung Ist minus Soll | r = 0.91 | a = 0.0867, b = -30 |
| 0x8247 | NASA_OUTDOOR_DEFROST_STEP | vermutet: ≈ Abtauung Ablaufcode +1.3 | ereignis | Heißgasventil Status → off | 5/7 | Lift 23.2 |
|  |  |  | ereignis | Heißgasventil Status → on | 5/7 | Lift 23.2 |
|  |  |  | korrelation | Abtauung Ablaufcode | r = 1.00 | a = 1.01, b = -1.29 |
| 0x8278 | VAR_OUT_SENSOR_OCT1 | bestaetigt: OCT1 Temperatur (S-NET) | korrelation | Hochdruck | r = 0.95 | a = 12.7, b = 732 |
|  |  |  | korrelation | Kältekreis Hochdruck Sättigungstemperatur | r = 0.94 | a = 0.227, b = 10.1 |
|  |  |  | korrelation | Doppelrohr Wärmetauscher Temperatur | r = 0.90 | a = 0.16, b = 14.4 |
| 0x82DE | NASA_OUTDOOR_EVA_IN | vermutet: ≈ Doppelrohr Wärmetauscher Temperatur | korrelation | Doppelrohr Wärmetauscher Temperatur | r = 1.00 | a = 0.999, b = 0.045 |
|  |  |  | korrelation | Inneneinheit Wärmetauscher Eintrittstemperatur | r = 0.99 | a = 0.993, b = 0.2 |
|  |  |  | korrelation | OCT1 Temperatur | r = 0.91 | a = 0.511, b = -5.16 |
| 0x82ED | VAR_OUT___ (Platzhalter, ohne Bedeutung) | unbekannt | ereignis | Heizwasserpumpe aktiv → off | 3/3 | Lift 10.8 |
| 0x8405 | NASA_OUTDOOR_COMP1_RUNNING_TIME | unbekannt | zaehler | – | 0.997 / h |  |
