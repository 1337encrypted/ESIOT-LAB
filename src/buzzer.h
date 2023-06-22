#ifndef BUZZER_H
#define BUZZER_H

#include "Arduino.h"

class buzzer
{
  private: 
    uint8_t buzzPin;
    bool buzzState;
    int delayTime = 100;

  public:
    buzzer(uint8_t);
    void begin();
    void on();
    void off();
    void display();
};
#endif  //END BUZZER_H
