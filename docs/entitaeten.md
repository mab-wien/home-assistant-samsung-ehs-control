# Entitäten der Wärmepumpe

Stand: Firmware vom 22.10.2026 (411 Entitäten in Home Assistant). Alle entity_ids beginnen mit `wp_`; der Anzeigename in HA ist
„Wärmepumpe <Name>“. Schreibbare Entitäten (Zahl, Auswahl, Schalter, Taste) wirken direkt auf die Anlage.

Erzeugt aus `esphome/esphome-samsung-hvac-bus.yaml` und der HA-Registry. Quelle „NASA 0x…“ = Kennung auf dem Samsung-Bus, „FSV“ = Feldeinstellung.

## Diagnose & Bus (219)

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
| NASA 0x0202 AD_ERROR_CODE1 | `–` | Sensor | NASA 0x0202 |  |
| NASA 0x0207 AD_INSTALL_NUMBER_INDOOR | `–` | Sensor | NASA 0x0207 |  |
| NASA 0x0210 NET_ADDRESS | `–` | Sensor | NASA 0x0210 |  |
| NASA 0x0217 PNP_NET_ADDRESS | `–` | Sensor | NASA 0x0217 |  |
| NASA 0x0401 AD_ADDRESS_MAIN | `–` | Sensor | NASA 0x0401 |  |
| NASA 0x0402 AD_ADDRESS_RMC | `–` | Sensor | NASA 0x0402 |  |
| NASA 0x0408 AD_ADDRESS_SETUP | `–` | Sensor | NASA 0x0408 |  |
| NASA 0x0409 AD_INSTALL_LEVEL_ALL | `–` | Sensor | NASA 0x0409 |  |
| NASA 0x040A AD_INSTALL_LEVEL_OPERATION_POWER | `–` | Sensor | NASA 0x040A |  |
| NASA 0x040B AD_INSTALL_LEVEL_OPERATION_MODE | `–` | Sensor | NASA 0x040B |  |
| NASA 0x040C AD_INSTALL_LEVEL_FAN_MODE | `–` | Sensor | NASA 0x040C |  |
| NASA 0x040D AD_INSTALL_LEVEL_FAN_DIRECTION | `–` | Sensor | NASA 0x040D |  |
| NASA 0x040E AD_INSTALL_LEVEL_TEMP_TARGET | `–` | Sensor | NASA 0x040E |  |
| NASA 0x0410 AD_INSTALL_LEVEL_OPERATION_MODE_ONLY | `–` | Sensor | NASA 0x0410 |  |
| NASA 0x0411 AD_INSTALL_LEVEL_COOL_MODE_UPPER | `–` | Sensor | NASA 0x0411 |  |
| NASA 0x0412 AD_INSTALL_LEVEL_COOL_MODE_LOWER | `–` | Sensor | NASA 0x0412 |  |
| NASA 0x0413 AD_INSTALL_LEVEL_HEAT_MODE_UPPER | `–` | Sensor | NASA 0x0413 |  |
| NASA 0x0414 AD_INSTALL_LEVEL_HEAT_MODE_LOWER | `–` | Sensor | NASA 0x0414 |  |
| NASA 0x0415 AD_INSTALL_LEVEL_CONTACT_CONTROL | `–` | Sensor | NASA 0x0415 |  |
| NASA 0x0416 AD_INSTALL_LEVEL_KEY_OPERATION_INPUT | `–` | Sensor | NASA 0x0416 |  |
| NASA 0x0417 | `–` | Sensor | NASA 0x0417 |  |
| NASA 0x0418 | `–` | Sensor | NASA 0x0418 |  |
| NASA 0x0419 | `–` | Sensor | NASA 0x0419 |  |
| NASA 0x041B | `–` | Sensor | NASA 0x041B |  |
| NASA 0x2000 IM_MASTER | `–` | Sensor | NASA 0x2000 |  |
| NASA 0x2003 ADDRESSING | `–` | Sensor | NASA 0x2003 |  |
| NASA 0x2004 PNP | `–` | Sensor | NASA 0x2004 |  |
| NASA 0x200F NM_NETWORK_POSITINON_LAYER | `–` | Sensor | NASA 0x200F |  |
| NASA 0x2012 | `–` | Sensor | NASA 0x2012 |  |
| NASA 0x2015 | `–` | Sensor | NASA 0x2015 |  |
| NASA 0x20FF | `–` | Sensor | NASA 0x20FF |  |
| NASA 0x22F7 | `–` | Sensor | NASA 0x22F7 |  |
| NASA 0x22F8 | `–` | Sensor | NASA 0x22F8 |  |
| NASA 0x22F9 | `–` | Sensor | NASA 0x22F9 |  |
| NASA 0x22FA | `–` | Sensor | NASA 0x22FA |  |
| NASA 0x22FB | `–` | Sensor | NASA 0x22FB |  |
| NASA 0x22FC | `–` | Sensor | NASA 0x22FC |  |
| NASA 0x22FD | `–` | Sensor | NASA 0x22FD |  |
| NASA 0x22FE | `–` | Sensor | NASA 0x22FE |  |
| NASA 0x22FF | `–` | Sensor | NASA 0x22FF |  |
| NASA 0x2400 ALL_LAYER_DEVICE_COUNT | `–` | Sensor | NASA 0x2400 |  |
| NASA 0x2401 | `–` | Sensor | NASA 0x2401 |  |
| NASA 0x24FB | `–` | Sensor | NASA 0x24FB |  |
| NASA 0x4006 FANSPEED | `–` | Sensor | NASA 0x4006 |  |
| NASA 0x400F | `–` | Sensor | NASA 0x400F |  |
| NASA 0x4010 | `–` | Sensor | NASA 0x4010 |  |
| NASA 0x4015 | `–` | Sensor | NASA 0x4015 |  |
| NASA 0x4019 | `–` | Sensor | NASA 0x4019 |  |
| NASA 0x401B | `–` | Sensor | NASA 0x401B |  |
| NASA 0x4023 USE_SPI | `–` | Sensor | NASA 0x4023 |  |
| NASA 0x4024 USE_FILTER_WARNING_TIME | `–` | Sensor | NASA 0x4024 |  |
| NASA 0x4027 FILTER_WARNING | `–` | Sensor | NASA 0x4027 |  |
| NASA 0x4029 | `–` | Sensor | NASA 0x4029 |  |
| NASA 0x402A | `–` | Sensor | NASA 0x402A |  |
| NASA 0x402B | `–` | Sensor | NASA 0x402B |  |
| NASA 0x402D | `–` | Sensor | NASA 0x402D |  |
| NASA 0x4031 | `–` | Sensor | NASA 0x4031 |  |
| NASA 0x4035 | `–` | Sensor | NASA 0x4035 |  |
| NASA 0x4038 IN_STATE_HUMIDITY_PERCENT | `–` | Sensor | NASA 0x4038 |  |
| NASA 0x4043 CONTROL_SPI | `–` | Sensor | NASA 0x4043 |  |
| NASA 0x4046 CONTROL_SILENCE | `–` | Sensor | NASA 0x4046 |  |
| NASA 0x4047 | `–` | Sensor | NASA 0x4047 |  |
| NASA 0x4048 | `–` | Sensor | NASA 0x4048 |  |
| NASA 0x404F | `–` | Sensor | NASA 0x404F |  |
| NASA 0x4051 | `–` | Sensor | NASA 0x4051 |  |
| NASA 0x4059 | `–` | Sensor | NASA 0x4059 |  |
| NASA 0x405F | `–` | Sensor | NASA 0x405F |  |
| NASA 0x4060 IN_ALTERNATIVE_MODE | `–` | Sensor | NASA 0x4060 |  |
| NASA 0x4068 IN_SOLAR_PUMP | `–` | Sensor | NASA 0x4068 |  |
| NASA 0x4069 IN_THERMOSTAT1 | `–` | Sensor | NASA 0x4069 |  |
| NASA 0x406A IN_THERMOSTAT2 | `–` | Sensor | NASA 0x406A |  |
| NASA 0x406B SMART_GRID | `–` | Sensor | NASA 0x406B |  |
| NASA 0x406D IN_OUTING_MODE | `–` | Sensor | NASA 0x406D |  |
| NASA 0x4070 IN_DISCHAGE_TEMP_CONTROL | `–` | Sensor | NASA 0x4070 |  |
| NASA 0x4073 | `–` | Sensor | NASA 0x4073 |  |
| NASA 0x4074 | `–` | Sensor | NASA 0x4074 |  |
| NASA 0x4077 | `–` | Sensor | NASA 0x4077 |  |
| NASA 0x407B | `–` | Sensor | NASA 0x407B |  |
| NASA 0x407D | `–` | Sensor | NASA 0x407D |  |
| NASA 0x407E IN_LOUVER_LR_SWING | `–` | Sensor | NASA 0x407E |  |
| NASA 0x4085 | `–` | Sensor | NASA 0x4085 |  |
| NASA 0x4086 TEST_MODE_ENABLED | `–` | Sensor | NASA 0x4086 |  |
| NASA 0x408A IN_2WAY_VALVE | `–` | Sensor | NASA 0x408A |  |
| NASA 0x40B5 | `–` | Sensor | NASA 0x40B5 |  |
| NASA 0x40C5 IN_THERMOSTAT_WATER_HEATER | `–` | Sensor | NASA 0x40C5 |  |
| NASA 0x40C6 | `–` | Sensor | NASA 0x40C6 |  |
| NASA 0x40E3 | `–` | Sensor | NASA 0x40E3 |  |
| NASA 0x4117 | `–` | Sensor | NASA 0x4117 |  |
| NASA 0x411E IN_OPERATION_POWER_ZONE2 | `–` | Sensor | NASA 0x411E |  |
| NASA 0x4124 IN_SG_READY_MODE_STATE | `–` | Sensor | NASA 0x4124 |  |
| NASA 0x4125 IN_FSV_LOAD_SAVE | `–` | Sensor | NASA 0x4125 |  |
| NASA 0x4202 IN_TEMP_DISCHARGE_REQUEST | `–` | Sensor | NASA 0x4202 |  |
| NASA 0x4204 | `–` | Sensor | NASA 0x4204 |  |
| NASA 0x420C INDOOR_OUTER_TEMP | `–` | Sensor | NASA 0x420C |  |
| NASA 0x4211 IN_CAPACITY_REQUEST | `–` | Sensor | NASA 0x4211 |  |
| NASA 0x4212 IN_CAPACITY_ABSOLUTE | `–` | Sensor | NASA 0x4212 |  |
| NASA 0x4213 | `–` | Sensor | NASA 0x4213 |  |
| NASA 0x4217 IN_EEV_VALUE_REAL_1 | `–` | Sensor | NASA 0x4217 |  |
| NASA 0x4229 IN_MODEL_INFORMATION | `–` | Sensor | NASA 0x4229 |  |
| NASA 0x423E | `–` | Sensor | NASA 0x423E |  |
| NASA 0x428C IN_TEMP_MIXING_VALVE_F | `–` | Sensor | NASA 0x428C |  |
| NASA 0x428D | `–` | Sensor | NASA 0x428D |  |
| NASA 0x42D6 IN_TEMP_TARGET_ZONE2_F | `–` | Sensor | NASA 0x42D6 |  |
| NASA 0x42D7 IN_TEMP_WATER_OUTLET_TARGET_ZONE2_F | `–` | Sensor | NASA 0x42D7 |  |
| NASA 0x42F1 OUT_COMP_FREQ_RATE_CONTROL | `–` | Sensor | NASA 0x42F1 |  |
| NASA 0x4301 | `–` | Sensor | NASA 0x4301 |  |
| NASA 0x4401 | `–` | Sensor | NASA 0x4401 |  |
| NASA 0x440A IN_DEVICE_STAUS_HEATPUMP_BOILER | `–` | Sensor | NASA 0x440A |  |
| NASA 0x440E | `–` | Sensor | NASA 0x440E |  |
| NASA 0x440F ERROR_INOUT | `–` | Sensor | NASA 0x440F |  |
| NASA 0x8003 OUT_OPERATION_HEATCOOL | `–` | Text | NASA 0x8003 |  |
| NASA 0x8005 | `–` | Sensor | NASA 0x8005 |  |
| NASA 0x800D | `–` | Text | NASA 0x800D |  |
| NASA 0x8031 | `–` | Sensor | NASA 0x8031 |  |
| NASA 0x8032 | `–` | Sensor | NASA 0x8032 |  |
| NASA 0x8033 | `–` | Sensor | NASA 0x8033 |  |
| NASA 0x803C OUT_OPERATION_AUTO_INSPECT_STEP | `–` | Sensor | NASA 0x803C |  |
| NASA 0x803F | `–` | Sensor | NASA 0x803F |  |
| NASA 0x8045 | `–` | Sensor | NASA 0x8045 |  |
| NASA 0x8046 OUT_OP_TEST_OP_COMPLETE | `–` | Sensor | NASA 0x8046 |  |
| NASA 0x8048 | `–` | Sensor | NASA 0x8048 |  |
| NASA 0x805E | `–` | Sensor | NASA 0x805E |  |
| NASA 0x8062 OUTDOOR_LOGICAL_DEFROST_STEP | `–` | Sensor | NASA 0x8062 |  |
| NASA 0x8063 | `–` | Sensor | NASA 0x8063 |  |
| NASA 0x8065 nur lesen | `–` | Taste | berechnet (Template) |  |
| NASA 0x8065 OUTDOOR_SYSTEM_RESET | `–` | Sensor | NASA 0x8065 |  |
| NASA 0x8066 OUTDOOR_OPMODELIMIT | `–` | Sensor | NASA 0x8066 |  |
| NASA 0x8075 | `–` | Sensor | NASA 0x8075 |  |
| NASA 0x8077 | `–` | Sensor | NASA 0x8077 |  |
| NASA 0x8078 | `–` | Sensor | NASA 0x8078 |  |
| NASA 0x8079 | `–` | Sensor | NASA 0x8079 |  |
| NASA 0x807A | `–` | Sensor | NASA 0x807A |  |
| NASA 0x807B | `–` | Sensor | NASA 0x807B |  |
| NASA 0x807C | `–` | Sensor | NASA 0x807C |  |
| NASA 0x807D | `–` | Sensor | NASA 0x807D |  |
| NASA 0x807E | `–` | Sensor | NASA 0x807E |  |
| NASA 0x807F | `–` | Sensor | NASA 0x807F |  |
| NASA 0x8081 OUTDOOR_EXT_CMD_OPERATION | `–` | Sensor | NASA 0x8081 |  |
| NASA 0x8083 | `–` | Sensor | NASA 0x8083 |  |
| NASA 0x808D | `–` | Sensor | NASA 0x808D |  |
| NASA 0x808E OUT_OP_CHECK_REF_STEP | `–` | Sensor | NASA 0x808E |  |
| NASA 0x809C OUT_CHECK_REF_RESULT | `–` | Sensor | NASA 0x809C |  |
| NASA 0x809D OUTDOOR_COOLONLY_MODEL | `–` | Sensor | NASA 0x809D |  |
| NASA 0x80A7 OUTDOOR_DRED_LEVEL | `–` | Sensor | NASA 0x80A7 |  |
| NASA 0x80A9 | `–` | Sensor | NASA 0x80A9 |  |
| NASA 0x80AA | `–` | Sensor | NASA 0x80AA |  |
| NASA 0x80B1 | `–` | Sensor | NASA 0x80B1 |  |
| NASA 0x80B2 OUTDOOR_CH_SWITCH_VALUE | `–` | Sensor | NASA 0x80B2 |  |
| NASA 0x80B6 | `–` | Sensor | NASA 0x80B6 |  |
| NASA 0x80BC | `–` | Sensor | NASA 0x80BC |  |
| NASA 0x80BF | `–` | Sensor | NASA 0x80BF |  |
| NASA 0x80CE | `–` | Sensor | NASA 0x80CE |  |
| NASA 0x80D8 OUT_EHS_WATEROUT_TYPE | `–` | Sensor | NASA 0x80D8 |  |
| NASA 0x8200 OUTDOOR_OPMODE_OPTION | `–` | Sensor | NASA 0x8200 |  |
| NASA 0x8202 OUT_INSTALL_COMP_NUM | `–` | Sensor | NASA 0x8202 |  |
| NASA 0x8224 | `–` | Sensor | NASA 0x8224 |  |
| NASA 0x8225 | `–` | Sensor | NASA 0x8225 |  |
| NASA 0x8227 OUTDOOR_FAN_STEP2 | `–` | Sensor | NASA 0x8227 |  |
| NASA 0x8231 OUTDOOR_HEATING_PERCENT | `–` | Sensor | NASA 0x8231 |  |
| NASA 0x823C | `–` | Sensor | NASA 0x823C |  |
| NASA 0x8243 | `–` | Sensor | NASA 0x8243 |  |
| NASA 0x8244 OUTDOOR_OIL_RECOVERY_STEP | `–` | Sensor | NASA 0x8244 |  |
| NASA 0x8245 OUTDOOR_OIL_BALANCE_STEP | `–` | Sensor | NASA 0x8245 |  |
| NASA 0x8247 OUTDOOR_DEFROST_STEP | `–` | Sensor | NASA 0x8247 |  |
| NASA 0x8248 OUTDOOR_SAFETY_START | `–` | Sensor | NASA 0x8248 |  |
| NASA 0x8249 | `–` | Sensor | NASA 0x8249 |  |
| NASA 0x824B | `–` | Sensor | NASA 0x824B |  |
| NASA 0x824C | `–` | Sensor | NASA 0x824C |  |
| NASA 0x825A | `–` | Sensor | NASA 0x825A |  |
| NASA 0x825B | `–` | Sensor | NASA 0x825B |  |
| NASA 0x825C | `–` | Sensor | NASA 0x825C |  |
| NASA 0x825D | `–` | Sensor | NASA 0x825D |  |
| NASA 0x8278 OUT_SENSOR_OCT1 | `–` | Sensor | NASA 0x8278 |  |
| NASA 0x8287 OUT_INSTALL_CAPA | `–` | Sensor | NASA 0x8287 |  |
| NASA 0x8298 OUTDOOR_COOL_SUM_CAPA | `–` | Sensor | NASA 0x8298 |  |
| NASA 0x829A OUT_SENSOR_SUCTION2_1SEC | `–` | Sensor | NASA 0x829A |  |
| NASA 0x829B OUTDOOR_CT_RESTRICT_OPTION | `–` | Sensor | NASA 0x829B |  |
| NASA 0x82A2 | `–` | Sensor | NASA 0x82A2 |  |
| NASA 0x82A8 OUT_CONTROL_IDU_TOTAL_ABSCAPA | `–` | Sensor | NASA 0x82A8 |  |
| NASA 0x82A9 OUT_CONTROL_IDU_TOTAL_ABSCAPA2 | `–` | Sensor | NASA 0x82A9 |  |
| NASA 0x82AA | `–` | Sensor | NASA 0x82AA |  |
| NASA 0x82B2 | `–` | Sensor | NASA 0x82B2 |  |
| NASA 0x82B5 | `–` | Sensor | NASA 0x82B5 |  |
| NASA 0x82B8 OUT_SENSOR_MIDPRESS | `–` | Sensor | NASA 0x82B8 |  |
| NASA 0x82BC OUT_PROJECT_CODE | `–` | Sensor | NASA 0x82BC |  |
| NASA 0x82D1 | `–` | Sensor | NASA 0x82D1 |  |
| NASA 0x82D5 OUTDOOR_UPL_TP_COOL | `–` | Sensor | NASA 0x82D5 |  |
| NASA 0x82D6 OUTDOOR_UPL_TP_HEAT | `–` | Sensor | NASA 0x82D6 |  |
| NASA 0x82D7 | `–` | Sensor | NASA 0x82D7 |  |
| NASA 0x82D8 | `–` | Sensor | NASA 0x82D8 |  |
| NASA 0x82DE OUTDOOR_EVA_IN | `–` | Sensor | NASA 0x82DE |  |
| NASA 0x82E3 OUT_PRODUCT_OPTION_CAPA | `–` | Sensor | NASA 0x82E3 |  |
| NASA 0x82E8 OUT_LOAD_MCU_HR_BYPASS_EEV | `–` | Sensor | NASA 0x82E8 |  |
| NASA 0x82ED | `–` | Sensor | NASA 0x82ED |  |
| NASA 0x82F6 | `–` | Sensor | NASA 0x82F6 |  |
| NASA 0x8401 | `–` | Sensor | NASA 0x8401 |  |
| NASA 0x8404 | `–` | Sensor | NASA 0x8404 |  |
| NASA 0x8405 OUTDOOR_COMP1_RUNNING_TIME | `–` | Sensor | NASA 0x8405 |  |
| NASA 0x8408 | `–` | Sensor | NASA 0x8408 |  |
| NASA 0x8409 | `–` | Sensor | NASA 0x8409 |  |
| NASA 0x840B OUT_AUTO_INSPECT_RESULT0 | `–` | Sensor | NASA 0x840B |  |
| NASA 0x840C OUT_AUTO_INSPECT_RESULT1 | `–` | Sensor | NASA 0x840C |  |
| NASA 0x8417 OUTDOOR_VARIABLE_SETUP_INFO | `–` | Sensor | NASA 0x8417 |  |
| NASA 0x841A | `–` | Sensor | NASA 0x841A |  |
| NASA 0x841F | `–` | Sensor | NASA 0x841F |  |
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
