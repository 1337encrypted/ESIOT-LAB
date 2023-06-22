#include "GLOBALS.h"

void setup() 
{
  Serial.begin(9600);
}

void loop() 
{
  
  if (dht.alarmTemperature()) 
    buzz.on();
  else 
    buzz.off();

  dht.display();

  delay(500);
}
