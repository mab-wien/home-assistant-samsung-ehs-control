# Home Assistant Samsung EHS Control

Home Assistant integration and ESPHome configuration for monitoring and controlling **Samsung EHS heat pumps** via the HVAC communication bus.

This project provides an ESPHome configuration and Home Assistant setup that allows direct access to internal Samsung EHS heat pump data using the HVAC bus interface (RS485).  
It enables detailed monitoring, automation, and energy optimization of the heat pump system.

## Features

- 📡 Direct communication with the Samsung HVAC bus via ESPHome
- 🌡 Access to internal sensors (temperatures, compressor frequency, fan speed, etc.)
- ⚡ Real-time power consumption and produced energy monitoring
- 📊 COP (Coefficient of Performance) calculation
- 🏠 Full integration into Home Assistant dashboards
- ☀️ Ready for PV surplus and smart energy automations

## Hardware

Typical setup:

- ESP32 (e.g. M5Stack Atom)
- RS485 interface module
- Connection to Samsung EHS HVAC communication bus

## Software

- ESPHome
- Home Assistant
- Custom Samsung HVAC Bus component

## Disclaimer

This project communicates directly with the internal HVAC bus of the heat pump.  
Use at your own risk. Always verify wiring and configuration before connecting to your system.

## Project Status

Work in progress – improvements, testing and additional sensors are ongoing.
