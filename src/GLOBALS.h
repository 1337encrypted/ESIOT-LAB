#include "DTHSensor.h"
#include "buzzer.h"

//Pins declaration

constexpr uint8_t DTHPin = 4;
constexpr uint8_t buzzPin = 3;

//Objects instance

DTHSensor dth(DTHPin);
buzzer buzz(buzzPin);