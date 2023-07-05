#ifndef connect_h
#define connect_h
#include "esp_err.h"

void wifi_init(void);
esp_err_t wifi_connect_sta(const char* ssid ,  const char* psas , int timeout);
void wifi_connect_ap(const char* ssid ,  const char* psas);
void wifi_disconnect(void);



#endif