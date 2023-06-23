#ifndef BUZZER_H
#define BUZZER_H

#include "Arduino.h"

class buzzer
{
  private: 
    uint8_t buzzPin;
    bool buzzState;

  public:
    buzzer(uint8_t);
    void begin();
    void on();
    void off();
    void display();
    void nonBlockOn();
    void initBuzzer();
};
#endif  //END BUZZER_H
