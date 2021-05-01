#ifndef HASP_LANG_HU_HU_H
#define HASP_LANG_HU_HU_H

#define D_USERNAME "Felhasználónév:"
#define D_PASSWORD "Jelszó:"
#define D_SSID "SSID:"
#define D_YES "Yes" // New
#define D_NO "No"   // New

#define D_ERROR_OUT_OF_MEMORY "Elfogyott a memória"
#define D_ERROR_UNKNOWN "Ismeretlen hiba"

#define D_CONFIG_NOT_CHANGED "A beállítások nem változtak"
#define D_CONFIG_CHANGED "A beállítások megváltoztak"
#define D_CONFIG_LOADED "Beállítások betöltve"

#define D_FILE_LOADING "%s betöltése"
#define D_FILE_LOADED "%s betöltve"
#define D_FILE_LOAD_FAILED "%s betöltése nem sikerült"

#define D_FILE_SAVING "%s mentése"
#define D_FILE_SAVED "%s mentve"
#define D_FILE_SAVE_FAILED "%s mentése meghiúsult"

#define D_SERVICE_STARTING "Indítás..."
#define D_SERVICE_STARTED "Elindítva"
#define D_SERVICE_START_FAILED "Az indítás meghiúsult"
#define D_SERVICE_STOPPED "Megállva"
#define D_SERVICE_DISABLED "Tiltva"
#define D_SERVICE_CONNECTED "Csatlakoztatva"
#define D_SERVICE_DISCONNECTED "Szétkapcsolva"

#define D_SETTING_ENABLED "Enabled"   // New
#define D_SETTING_DISABLED "Disabled" // New

#define D_NETWORK_IP_ADDRESS_RECEIVED "Beállított IP-cím: %s"
#define D_NETWORK_ONLINE "online"
#define D_NETWORK_OFFLINE "offline"
#define D_NETWORK_CONNECTION_FAILED "A kapcsolódás meghiúsult"

#define D_MQTT_DEFAULT_NAME "plate_%s"
#define D_MQTT_CONNECTING "Csatlakozás..."
#define D_MQTT_CONNECTED "Csatlakozva a %s szerverhez mint %s"
#define D_MQTT_NOT_CONNECTED "Nincs kapcsolat ???"
#define D_MQTT_DISCONNECTING "Szétkapcsolás..."
#define D_MQTT_DISCONNECTED "Szétkapcsolva"
#define D_MQTT_RECONNECTING "Lekapcsolva a szerverről, újracsatlakozás..."
#define D_MQTT_NOT_CONFIGURED "Nincs konfigurálva MQTT szerver"
#define D_MQTT_STARTED "Elindítva: %d bájt"
#define D_MQTT_FAILED "Nem sikerült:"
#define D_MQTT_INVALID_TOPIC "Az üzenet érvénytelen topik-ot tartalmaz"
#define D_MQTT_SUBSCRIBED "Feliratkozva: %s"
#define D_MQTT_NOT_SUBSCRIBED "Nem sikerült feliratkozni: %s"
#define D_MQTT_HA_AUTO_DISCOVERY "Regisztrálás HA automatikus felfedezésre"
#define D_MQTT_PAYLOAD_TOO_LONG "Payload too long (%u bytes)" // New

#define D_TELNET_CLOSING_CONNECTION "Munkamenet befejezése %s-el"
#define D_TELNET_CLIENT_LOGIN_FROM "Kliens bejelentkezés innen: %s"
#define D_TELNET_CLIENT_CONNECT_FROM "Kliens csatlakozva innen: %s"
#define D_TELNET_CLIENT_NOT_CONNECTED "Kliens NEM csatlakozik"
#define D_TELNET_AUTHENTICATION_FAILED "A hitelesítés sikertelen!"
#define D_TELNET_INCORRECT_LOGIN_ATTEMPT "Helytelen bejelentkezési kísérlet %s-ről"
#define D_TELNET_STARTED "Telnet konzol elindítva"
#define D_TELNET_FAILED "Telnet konzol elindítása meghiúsult"
#define D_TELNET_CLIENT_CONNECTED "Kliens csatlakozva"
#define D_TELNET_CLIENT_NOT_CONNECTED "Kliens NEM csatlakozik"
#define D_TELNET_CLIENT_REJECTED "Kliens elutasítva"

#define D_HASP_INVALID_PAGE "Érvénytelen oldal: %u"
#define D_HASP_INVALID_LAYER "Nem törölhető a rendszerréteg"
#define D_HASP_CHANGE_PAGE "Oldalváltás: %u"
#define D_HASP_CLEAR_PAGE "Oldal törlése: %u"

#define D_OBJECT_DELETED "Objektum törölve"
#define D_OBJECT_UNKNOWN "Ismeretlen objektum"
#define D_OBJECT_MISMATCH "Az objektumok NEM passzolnak!"
#define D_OBJECT_LOST "Elveszett objektum!"
#define D_OBJECT_CREATE_FAILED "%u objektum sikertelen"
#define D_OBJECT_PAGE_UNKNOWN "%u oldalazonosító nincs meghatározva"
#define D_OBJECT_EVENT_UNKNOWN "Ismeretlen esemény %d"

#define D_ATTRIBUTE_UNKNOWN "Ismeretlen tulajdonság: %s"
#define D_ATTRIBUTE_READ_ONLY "%s csak olvasható"
#define D_ATTRIBUTE_PAGE_METHOD_INVALID "Nem lehet meghívni %s-t egy oldalon"

#define D_OOBE_SSID_VALIDATED "%s SSID érvényes"
#define D_OOBE_AUTO_CALIBRATE "Automatikus kalibrálás engedélyezve"
#define D_OOBE_CALIBRATED "Korábban kalibrálva"

#define D_DISPATCH_COMMAND_NOT_FOUND "%s parancs nem található"
#define D_DISPATCH_INVALID_PAGE "Érvénytelen oldal: %s"
#define D_DISPATCH_REBOOT "Az MCU most újraindul!"

#define D_JSON_FAILED "JSON elemzése nem sikerült:"
#define D_JSONL_FAILED "JSONL elemzése meghiúsult a %u vonalnál"
#define D_JSONL_SUCCEEDED "JSONL teljes körűen elemezve"

#define D_OTA_CHECK_UPDATE "A frissítések ellenőrzése az URL-en: %s"
#define D_OTA_CHECK_COMPLETE "A frissítések ellenőrzése befejeződött"
#define D_OTA_CHECK_FAILED "A frissítések ellenőrzése meghiúsult: %s"
#define D_OTA_UPDATE_FIRMWARE "Firmware frissítése OTA-val"
#define D_OTA_UPDATE_COMPLETE "Az OTA frissítés elkészült"
#define D_OTA_UPDATE_APPLY "Firmware alkalmazása és újraindítás"
#define D_OTA_UPDATE_FAILED "Az OTA frissítés meghiúsult"
#define D_OTA_UPDATING_FIRMWARE "Updating firmware..."     // New
#define D_OTA_UPDATING_FILESYSTEM "Updating filesystem..." // New

#define D_HTTP_HASP_DESIGN "Képernyő dizájn"
#define D_HTTP_INFORMATION "Információk"
#define D_HTTP_HTTP_SETTINGS "HTTP beállítások"
#define D_HTTP_WIFI_SETTINGS "WiFi beállítások"
#define D_HTTP_MQTT_SETTINGS "MQTT beállítások"
#define D_HTTP_GPIO_SETTINGS "GPIO beállítások"
#define D_HTTP_MDNS_SETTINGS "mDNS beállítások"
#define D_HTTP_TELNET_SETTINGS "Telnet beállítások"
#define D_HTTP_DEBUG_SETTINGS "Hibakeresési beállítások"
#define D_HTTP_GUI_SETTINGS "Képernyő beállítások"
#define D_HTTP_SAVE_SETTINGS "Beállítások mentése"
#define D_HTTP_UPLOAD_FILE "Fájl feltöltése"
#define D_HTTP_ERASE_DEVICE "Minden beállítás visszaállítása"
#define D_HTTP_ADD_GPIO "Új pin hozzáadása"
#define D_HTTP_BACK "Vissza"
#define D_HTTP_REFRESH "Frissítés"
#define D_HTTP_PREV_PAGE "Előző oldal"
#define D_HTTP_NEXT_PAGE "Következő oldal"
#define D_HTTP_CALIBRATE "Kalibrálás"
#define D_HTTP_SCREENSHOT "Képernyőkép"
#define D_HTTP_FILE_BROWSER "Fájl böngésző" // Updated
#define D_HTTP_FIRMWARE_UPGRADE "Firmware frissítés"
#define D_HTTP_UPDATE_FIRMWARE "Firmware frissítése"
#define D_HTTP_FACTORY_RESET "Gyári beállítások visszaállítása"
#define D_HTTP_MAIN_MENU "Főmenü"
#define D_HTTP_REBOOT "Újraindítás"
#define D_HTTP_CONFIGURATION "Beállítások"
#define D_HTTP_SENDING_PAGE "Sent %S page to %s" // New
#define D_HTTP_FOOTER "by Francis Van Roie"      // New

// New list:
#define D_INFO_VERSION "Version"
#define D_INFO_BUILD_DATETIME "Build DateTime"
#define D_INFO_UPTIME "Uptime"
#define D_INFO_FREE_HEAP "Free Heap"
#define D_INFO_FREE_BLOCK "Free Block"
#define D_INFO_DEVICE_MEMORY "Device Memory"
#define D_INFO_LVGL_MEMORY "LVGL Memory"
#define D_INFO_TOTAL_MEMORY "Total"
#define D_INFO_FREE_MEMORY "Free"
#define D_INFO_FRAGMENTATION "Fragmentation"
#define D_INFO_PSRAM_FREE "PSRam Free"
#define D_INFO_PSRAM_SIZE "PSRam Size"
#define D_INFO_FLASH_SIZE "Flash Size"
#define D_INFO_SKETCH_USED "Program Size Used"
#define D_INFO_SKETCH_FREE "Program Size Free"
#define D_INFO_MODULE "Module"
#define D_INFO_MODEL "Model"
#define D_INFO_FREQUENCY "Frequency"
#define D_INFO_CORE_VERSION "Core Version"
#define D_INFO_RESET_REASON "Reset Reason"
#define D_INFO_STATUS "Status"
#define D_INFO_SERVER "Server"
#define D_INFO_USERNAME "Username"
#define D_INFO_CLIENTID "Client ID"
#define D_INFO_CONNECTED "Connected"
#define D_INFO_DISCONNECTED "Disconnected"
#define D_INFO_RECEIVED "Received"
#define D_INFO_PUBLISHED "Published"
#define D_INFO_FAILED "Failed"
#define D_INFO_ETHERNET "Ethernet"
#define D_INFO_WIFI "Wifi"
#define D_INFO_LINK_SPEED "Link Speed"
#define D_INFO_SSID "SSID"
#define D_INFO_RSSI "Signal Strength"
#define D_INFO_IP_ADDRESS "IP Address"
#define D_INFO_MAC_ADDRESS "MAC Address"
#define D_INFO_GATEWAY "Gateway"
#define D_INFO_DNS_SERVER "DNS Server"

#define D_OOBE_MSG "Koppintson a képernyőre a WiFi beállításához, vagy csatlakozzon az alábbi Access Point-hoz:"
#define D_OOBE_SCAN_TO_CONNECT "Szkennelje le a csatlakozáshoz:"

#define D_WIFI_CONNECTING_TO "Connecting to %s"                 // New
#define D_WIFI_CONNECTED_TO "Connected to %s, requesting IP..." // New
#define D_WIFI_RSSI_EXCELLENT "Excellent"                       // New
#define D_WIFI_RSSI_GOOD "Good"                                 // New
#define D_WIFI_RSSI_FAIR "Fair"                                 // New
#define D_WIFI_RSSI_WEAK "Weak"                                 // New
#define D_WIFI_RSSI_BAD "Very bad"                              // New

#endif
