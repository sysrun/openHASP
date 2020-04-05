#ifndef HASP_CONF_H
#define HASP_CONF_H

#define HASP_VERSION_MAJOR 0
#define HASP_VERSION_MINOR 1
#define HASP_VERSION_REVISION 0

#define HASP_USE_APP 1

#define HASP_USE_OTA 1
#define HASP_USE_WIFI 1
#define HASP_USE_MQTT 1
#define HASP_USE_HTTP 1
#define HASP_USE_MDNS 1
#define HASP_USE_SYSLOG 1
#define HASP_USE_TELNET 1

#define HASP_USE_SPIFFS 1
#define HASP_USE_EEPROM 0
#define HASP_USE_SDCARD 0

#define HASP_USE_BUTTON 1

#define HASP_USE_QRCODE 1
#define HASP_USE_PNGDECODE 0

#define HASP_NUM_INPUTS 3 // Buttons
#define HASP_NUM_OUTPUTS 3

#if defined(ARDUINO_ARCH_ESP32)
#define HASP_NUM_PAGES 12
#else
#define HASP_NUM_PAGES 4
#endif

#endif