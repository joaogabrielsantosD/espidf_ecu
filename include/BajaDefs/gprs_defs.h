#ifndef GPRS_DEFS_H
#define GPRS_DEFS_H

#include <WiFi.h>
#include <ESPmDNS.h>
#include <ArduinoJson.h>

#define SerialAT Serial2 // Set serial for AT commands (to the module)
#define PORT     1883

/* Configure TinyGSM library */
#define TINY_GSM_MODEM_SIM800    // Modem is SIM800
#define TINY_GSM_RX_BUFFER  1024 // Set RX buffer to 1Kb
#define MSG_BUFFER_SIZE     1280
#define MAX_GPRS_BUFFER     1450

#include <TinyGSM.h>
#include <TinyGsmClient.h>
#include <PubSubClient.h>

TinyGsm modem(SerialAT);
TinyGsmClient client(modem);
PubSubClient mqttClient(client);

#endif