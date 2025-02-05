/* MIT License - Copyright (c) 2019-2021 Francis Van Roie
   For full license information read the LICENSE file in the project folder */

#ifndef HASP_WIFI_H
#define HASP_WIFI_H

#include "ArduinoJson.h"

void wifiSetup();
bool wifiShowAP();
bool wifiShowAP(char* ssid, char* pass);
bool wifiEvery5Seconds(void);
void wifiStop(void);

bool wifiValidateSsid(const char* ssid, const char* pass);
void wifi_get_statusupdate(char* buffer, size_t len);

void wifi_get_info(JsonDocument& doc);
const char* wifi_get_ssid();
const char* wifi_get_ip_address();

#if HASP_USE_CONFIG > 0
bool wifiGetConfig(const JsonObject& settings);
bool wifiSetConfig(const JsonObject& settings);
#endif

#endif