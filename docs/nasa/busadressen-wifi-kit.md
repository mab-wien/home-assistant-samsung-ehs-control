# NASA-Busadressen, WiFi-Kit und Strukturen (Stand 23.10.2026)

Es gibt keine offizielle Samsung-Dokumentation. Quellen: Protokollbeschreibung im Beormund-Projekt
(`samsung_nasa_protocol.md`, aus S-NET `NASA.prc` und `NasaConst.java` des WiFi-Kit-Quellcodes), das Projekt
[pysamsungnasa](https://github.com/pantherale0/pysamsungnasa) (PnP-Ablauf, bis Januar 2026 in `pysamsungnasa/pnp/`)
und eigene Mitschnitte vom 23.10.2026 (Neustart nach Stromlos-Schalten, S-NET Pro 2 „Setting Wi-Fi Kit“).
Der Samsung-Open-Source-Server führt das `WiFiKit_Source.zip` derzeit nicht mehr (Suche ohne Treffer).

## Adressen

Eine Adresse hat drei Byte: Klasse.Kanal.Adresse. S-NET zeigt das letzte Byte dezimal (62.00.91 = 62.00.145).

| Klasse | Gerät | an dieser Anlage |
|---|---|---|
| 0x10 | Außeneinheit | 10.00.00 |
| 0x20 | Inneneinheit | 20.00.00 |
| 0x50 | Kabelfernbedienung | – |
| 0x62 | WiFi-Kit | 62.00.91 (MIM-H04EN) |
| 0x80 | „JIG Tester“ = Servicesoftware S-NET | 80.ff.00 / 80.ff.01 |
| 0xB0–0xBF | Broadcast-Ebenen | z. B. b0.00.ff, b2.00.20 |

## Anmeldung des WiFi-Kits (PnP), Mitschnitt 23.10.2026

| Kennung | Bedeutung (vermutet) | beobachtet |
|---|---|---|
| 0x2004 | PnP-Phase: 1 Anfrage, 3 Zuteilung, 4 Bestätigung, 0 Ende | 1 → 4 |
| 0x0217 | Netzadresse der Anmeldung | zufällig |
| 0x0417 | zugeteilte Adresse | 00 62 00 91 |
| 0x0418 | temporäre Antwortadresse | 00 62 90 01 |
| 0x0419 | Basisadresse der Klasse | 00 62 FF FF |

Danach liest das WiFi-Kit per **0x4612** einzelne FSV samt Grenzen:
`[FSV-Nummer 2 B] 01 [Typ: 0A = Zahl ×0,1, 01 = Auswahl] 01 [Min 2 B] [Max 2 B] [Wert 2 B] 01 00 00 00`,
z. B. FSV 1031 → Min 37,0, Max 70,0, Wert 70,0 °C. Alle 20 abgefragten Werte stimmten mit S-NET überein.

## Bestätigte Strukturen (Abgleich mit S-NET Pro 2)

| Kennung | Gerät | Inhalt | Format im Fork |
|---|---|---|---|
| 0x0600 | innen | Product Option | `product_option` |
| 0x0605 | außen | Standort (Text) | Text |
| 0x0607 | innen/außen | Seriennummer (Text) | Text |
| 0x0608 | innen/außen | Main-Micom | `dbcode` |
| 0x060C | außen | EEPROM-Version | `dbcode` |
| 0x061A | außen | Modellname, Längenbyte + Text | Text |
| 0x061C | WiFi-Kit | MAC-Adresse (6 Byte) | Hex |
| 0x0025 | WiFi-Kit | Tenant-Adresse, 255 = nicht unterstützt | Zahl |
| 0x8601 | außen | Inverter-Micom (Bytes 0–3 und 8–10) | `dbcode_inverter` |

Strukturen kommen nur auf Anfrage über den Bus (S-NET, WiFi-Kit beim Start); der ESP fragt sie bisher nicht selbst an.
