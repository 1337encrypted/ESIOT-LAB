#include "buzzer.h"
#include  "Arduino.h"

buzzer::buzzer(uint8_t buzzPin)
{
  this->buzzPin=buzzPin;
  this->buzzState=false;
  begin();
}

void buzzer::begin()
{
  pinMode(buzzPin, OUTPUT); // Set buzzer - pin 9 as an output
}

 
void buzzer::on()
{
  tone(buzzPin, 2000, 100);
  delay(this->delayTime);
  tone(buzzPin, 2000, 100);
  delay(this->delayTime);
  this->buzzState=true;
}

void buzzer::off()
{
   noTone(buzzPin); 
   this->buzzState=false;   
}

void buzzer::display()
{
  if(buzzState)
  {
    Serial.println("Buzzer: ON; ");
  }
  else
  {
    Serial.println("Buzzer: OFF; ");
  }
    
}
