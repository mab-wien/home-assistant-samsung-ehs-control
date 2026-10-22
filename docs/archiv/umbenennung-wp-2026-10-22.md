# Bereinigung der Wärmepumpen-Entitäten – umgesetzt am 22.10.2026

## Ausgangslage
- 204 Entitäten eines ESPHome-Geräts (`gg11esphomewp`, in HA „Wärmepumpe“, ESPHome 2026.9.1, Build 20.10.2026 07:19 UTC).
- Zwei Namensschemata aus der Migration: 162 × `*.warmepumpe_warmepumpe_*` (deutsche Namen mit doppeltem Präfix) und
  42 × `*.gg11esphomewp_*` (englische Namen der Ursprungsintegration).
- ESPHome bildet die `unique_id` aus dem **Entitätsnamen** (`<MAC>/0/<domain>/<Name>`). Jede Namensänderung in der YAML
  erzeugt in HA eine **neue** Entität; die alte wird verwaist. Deshalb wird nach dem Flashen gezielt umgezogen (s. u.).

## Betroffene Stellen
| Bereich | Umfang |
|---|---|
| HA-Automationen | 13 (12 × Heizkurvenversatz, 1 × Warmwasser-Modus, „Wärmepumpe – Fehler melden“ mit 3 Sensoren) |
| HA-Dashboards | wp-diagnose (35 Verweise), dashboard-wetter (1) |
| Blueprint Frühwarnung | Vorgaben für Fehlercode und Frequenz |
| Analyse-Stack (docker-ki-environment) | 82 Dateien, 144 verschiedene IDs (V6-Analyse, Reporter/Soll-Stand, Dashboard-Generator, Collector-Filter) |
| Wissensdatenbank (HIP) | 2 Dateien |
| Zeitreihen-DB | Verlauf je entity_id (states/statistics) |
| HA-Recorder/Statistik/Energie | wandert bei Umbenennung über die Registry mit |

## Namensschema (Vorschlag)
- Anzeigename deutsch, ohne Geräte-Präfix: „Vorlauf Tw2“, „Verdichter Frequenz“, FSV als „FSV 4052 - …“.
- entity_id `<domain>.wp_<name>` (ä→ae, ö→oe, ü→ue, ß→ss), FSV als `wp_fsv_NNNN`.
- Vollständige Zuordnung: `umbenennung-wp-2026-10-22.csv` (204 Zeilen, Entwurf zur Durchsicht).
- Gerät: `friendly_name` „Wärmepumpe“; `name`/Hostname bleibt `gg11esphomewp` (sonst ändern sich mDNS/OTA-Adresse).

## Ablauf
1. **Freigabe** des Namensschemas und der Zuordnungstabelle.
2. **Sicherung**: Entity-Registry, alle Automationen, Skripte, Dashboards und Energie-Einstellungen als JSON (Git, lokal).
3. **YAML** im Repo: Namen laut Tabelle, Komponente auf den Fork `mab-wien/esphome-samsung-nasa` mit festem Commit.
   Prüfen und kompilieren; Firmware-Protokoll und Git-Tag des bisherigen Stands (Rückweg).
4. **Flashen** (ausdrücklich ausgelöst), außerhalb der Automationszeiten (nicht 22:00 und 04:00–06:00).
5. **Umzug in HA** je Zeile: alte Entität auf die neue entity_id umbenennen (Verlauf/Statistik wandern mit) → alte
   (verwaiste) Entität löschen → neue Entität auf dieselbe entity_id setzen. Ergebnis: neue Namen, durchgehender Verlauf.
6. **Verweise anpassen**: Automationen, Dashboards, Blueprint-Vorgaben; Analyse-Stack und Wissensdatenbank per
   Zuordnungstabelle; Zeitreihen-DB: entity_id in states/statistics umschreiben (Verlauf bleibt durchgehend).
7. **Prüfen**: keine `unavailable`-Verweise in Automationen/Dashboards, Analyse-Endpunkte und Reporter laufen,
   Soll-Stand ohne Fehlmeldungen. Ergebnis im Firmware-Protokoll.

## Rückweg
Git-Tag des alten YAML-Stands flashen; Registry-/Automations-/Dashboard-Sicherung wiederherstellen; DB-Umschreibung
über die Zuordnungstabelle rückwärts.

## Umsetzung 22.10.2026
- 21:49 Flash per OTA vom Server; 156 Entitäten nur umbenannt (Name unverändert), 48 mit neuem Namen: ESPHome hatte die alten Einträge bereits entfernt – neue Entität erst auf die alte ID, dann auf die Ziel-ID umbenannt, damit der HA-Recorder den Verlauf mitnimmt.
- Automationen (16), Dashboards (wp-diagnose, Wetter) und Energie-Einstellung angepasst; Geräteaktionen mit Registry-IDs umgeschrieben.
- Zeitreihen-DB: Historie bleibt unter den alten IDs; die Analyse bezieht sie über `entity_alias.json` transparent ein (keine Umschreibung komprimierter Daten).
