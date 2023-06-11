#include "GLOBLAS.h"

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  if(dth.alarmTemprature())
    buzz.on();
  else
    buzz.off();

  dth.display();
}