#include "DHT11Sensor.h"
#include "buzzer.h"
#include  "Arduino.h"

//Pins declaration
constexpr uint8_t DHTPin = 5;
constexpr uint8_t buzzPin = 2;

//Object declaration
DHT11Sensor dht(DHTPin);
buzzer buzz(buzzPin);
