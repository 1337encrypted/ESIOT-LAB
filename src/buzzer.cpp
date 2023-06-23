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
  pinMode(this->buzzPin, OUTPUT); // Set buzzer - pin 9 as an output
}

 
void buzzer::on()
{
  tone(this->buzzPin, 2000);
  this->buzzState=true;
}

void buzzer::off()
{
   noTone(this->buzzPin); 
   this->buzzState=false;   
}

void buzzer::display()
{
  if(this->buzzState)
  {
    Serial.println("Buzzer: ON; ");
  }
  else
  {
    Serial.println("Buzzer: OFF; ");
  }
    
}

void buzzer::nonBlockOn()
{
  static unsigned long currentTime = millis();
  static uint8_t currentTone = 1;

  // Check if it's time to play the next tone
  if (millis() - currentTime > 10) {

    // Play the appropriate tone based on the currentTone value
    switch (currentTone) {
      case 1:
        tone(this->buzzPin, 2000, 150);
        break;
      case 2:
        tone(this->buzzPin, 1500, 150);
        break;
      case 3:
        tone(this->buzzPin, 1000, 150);
        break;
    }
    // Update the previous time
    currentTime = millis();
    // Increment the currentTone value
    currentTone++;

    // Reset currentTone if it exceeds the total number of tones
    if (currentTone > 3)
      currentTone = 1;

    this->buzzState=true;
  }
}

void buzzer::initBuzzer()
{
  //InitBuzzer is for active buzzer
  tone(this->buzzPin, 2000, 100);
  delay(150);
  tone(this->buzzPin, 1000, 100);
  delay(150);
  tone(this->buzzPin, 500, 100);
  delay(150);  
  noTone(this->buzzPin);
}