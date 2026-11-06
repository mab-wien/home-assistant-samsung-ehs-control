# Diagnose: Busmitschnitt, Rohbytes, NASA-Katalog

## Schalter in Home Assistant

| Entität | Wirkung |
|---|---|
| `switch.wp_debug_syslog` („Debug & Syslog“) | sendet die NASA-Logzeilen per Syslog (UDP) an den Analyse-Server. Startet nach jedem Neustart **AUS** und schaltet sich nach **20 min** oder bei **< 30 kB freiem Speicher** selbst ab (Grund im Log). |
| `switch.wp_nasa_rohbytes_protokollieren` | Rohbyte-Modus: statt dekodierter Einzelzeilen nur noch die unveränderten Telegramme (eine Zeile je Telegramm, ~90 % weniger Verkehr); der Server dekodiert selbst. Wirkt nur bei eingeschaltetem Debug |
| `sensor.wp_freier_speicher` | freier Heap des ESP (Byte) |
| `sensor.wp_syslog_verworfene_zeilen` | am ESP verworfene Logzeilen (Sender war belegt) |

Außerhalb der Debug-Fenster werden nur die eingebundenen Sensoren erfasst, unbekannte Buswerte nicht.

## Logformat

Jede Syslog-Zeile beginnt nach dem Tag mit `q=<Laufnummer>`. Seit 23.10.2026 zählt `q` jede erzeugte Zeile, auch
solche, die der ESP verwerfen musste: jede Lücke in `q` ist ein Verlust, am ESP oder im WLAN (bis 22.10.2026 zusätzlich
`d=`/`k=`). Zeilenarten:

| Zeile | Bedeutung |
|---|---|
| `Src:10.00.00 Dst:b0.00.ff 0x8204 = 64 n=1234` | bekannter Wert, `n` = Empfangsnummer des Telegramms |
| `Undefined s:… d:… Enum 80CE = 0 n=…` | Wert ohne eingebundenen Sensor |
| `Response #Packet Src:… Dst:… {PacketType…; DataType…; PacketNumber…} n=…` + ` > Variable 4xxx = …` | Paketkopf und Inhalt (Read/Response/Write/Ack) |
| `RAW s=<Sitzung> n=<Nr> ok len=<Bytes> p=1/2 <Hex>` | Rohbytes, in Teile zu max. 160 Byte zerlegt |
| `invalid end byte (n=…, Länge …)` / `invalid crc …` | verworfenes Telegramm (Rohbytes als `RAW … end`/`crc`) |
| `STATS s=… n=… ok=… size=… end=… crc=… uart=…` | minütliche Zähler seit Start |

## NASA-Katalog (Analyse-Server)

Der Dienst `nasa-katalog` (docker-ki-environment, `docker/syslog-analyse`) liest die Syslog-Dateien mit und speichert in
TimescaleDB (Schema `nasa`): ersten Wert und jede Änderung je Kennung und Quellgerät, Paketköpfe und Leseanfragen,
Rohtelegramme, Störungen, Erfassungsfenster und manuelle Zeitmarken. Fremdnamen (Beormund, EHS-Sentinel) sind nur
Hinweise; eigene Zuordnungen tragen den Status `vermutet` oder `bestaetigt` mit Beleg.

MCP-Werkzeuge: `nasa_kennungen`, `nasa_verlauf`, `nasa_umfeld`, `nasa_beobachtung_setzen`, `nasa_beobachtungen`,
`nasa_zuordnung_setzen`, `nasa_qualitaet`, `nasa_status`.

## Normalisierte Ablage (seit 23.10.2026)

Aus den Rohtelegrammen schreibt `nasa-katalog` (Schema `nasa`):

| Tabelle | Inhalt |
|---|---|
| `geraet` | Busadressen (Absender und Ziel, auch Broadcasts) |
| `kennung` | Katalog der NASA-Kennungen je Quelle (Fremdnamen, eigene Zuordnung) |
| `struktur` | Strukturinhalte, jeder nur einmal |
| `telegramm` | ein Datensatz je Telegramm: Zeit, Sitzung, Nr., Quelle, Ziel, Paket-/Datentyp |
| `telegramm_wert` | Werte eines Telegramms (1:N), Strukturen als Verweis |
| `wert_minute` | Minutenwerte je Kennung (automatisch gepflegt) |
| `ereignis` | Zustandswechsel (Enum-Kennungen) mit vorherigem Wert |

Kompression nach 2 Tagen, Rohtelegramme (`roh`) nur noch für fehlerhafte/unbekannte Telegramme, 30 Tage.
MCP-Werkzeuge zusätzlich: `nasa_minutenwerte`, `nasa_ereignisse`, `nasa_deutungen`.

## Vorgehen bei einem gezielten Mitschnitt

1. Debug (und bei Bedarf Rohbytes) einschalten.
2. Zeitmarke setzen, z. B. „FSV 6031 am Bedienteil geöffnet, angezeigt 0“.
3. Aktion am Bedienteil ausführen.
4. Mit `nasa_umfeld` alle Wertänderungen und Leseanfragen um die Zeitmarke prüfen. Zeitliche Nähe ist ein Hinweis, kein Beweis.

## Fehlerdaten des Außengeräts (0x860B, 0x461E)

Tasten in Home Assistant (nur lesend, je Taste mindestens 5 min Abstand). Die Antworten erscheinen nur im
Rohbyte-Mitschnitt: vorher „Debug & Syslog“ und „NASA Rohbytes“ einschalten.

| Taste | Anfrage | Antwort |
|---|---|---|
| `button.wp_zyklusdaten_vor_fehler_0x860b_abrufen` | 0x860B Betriebsart 1 an 10.00.00 | 30 Datensätze (1/min) vor dem letzten Fehler, je 13 Pakete |
| `button.warmepumpe_warmepumpe_fehlercodes_aussengeraet_0x860b_abrufen` | 0x860B Betriebsart 3 | Fehlercode-Historie, 200 Einträge ohne Zeiten |
| `button.wp_fehlerhistorie_0x461e_lesen` | 0x461E an 20.00.00 | Fehlerhistorie Innengerät (bisher immer leer) |

Verwendet werden nur die Betriebsarten 1 und 3 (die Speicher 2, 4 und 6 waren bei uns leer, Tasten dafür entfernt); es werden nur lesende Abfragen gesendet.
Aufbau der Antworten: README der Komponente, Abschnitte „0x860B layout“ und „0x860B request modes“.


## Fehler zurücksetzen

`button.warmepumpe_warmepumpe_e438_reset_0x8065_wert_2_write` („Fehler zurücksetzen (E438)“, unter Steuerung): NASA Write 0x8065 = 2 an 10.00.00, nur bei E438 und stehendem Verdichter, 60 s Abstand, nur manuell. Die ältere Taste „E438 Reset-Test 0x8065“ (Wert 1) setzte beim Reset auch Einstellungen zurück und bleibt als Reserve unter Diagnose.
