//#include "DTH22Sensor.h"
#include "buzzer.h"
#include  "Arduino.h"

//Pins declaration
constexpr uint8_t DHTPIN = 2;
constexpr uint8_t buzzPin = 3;

//Object declaration
dhtSensor dht(DHTPIN);
buzzer buzz(buzzPin);
