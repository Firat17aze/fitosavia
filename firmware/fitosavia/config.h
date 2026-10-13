#pragma once

#include <Arduino.h>

#include "DHT.h"

// --- CONFIGURACIÓN DEL FIRMWARE ---

#define DHTPIN 4         // DHT22 conectado al pin D4
#define DHTTYPE DHT22    // Modelo exacto de tu sensor

constexpr uint8_t pinAlimentacion = 5; // GPIO5 alimenta los electrodos
constexpr uint32_t baudiosSerial = 115200;
constexpr uint32_t delayEstabilizacionMs = 100;
constexpr uint32_t intervaloMuestrasMs = 5000;
