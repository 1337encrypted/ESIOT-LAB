#include "GLOBALS.h"

void setup()
{
  Serial.begin(9600);
  dhtSensor.begin();
}

void loop()
{
  if(digitalRead(button) == LOW)
  {
    buzz.on();
  }
    
  else
  {
    buzz.off();
  }
    

//  dth.display();
  buzz.display();
}
