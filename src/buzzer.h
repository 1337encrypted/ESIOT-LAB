#ifndef BUZZER_H
#define BUZZER_H

class buzzer
{
  private: 
    uint8_t buzzpin;
    int delayTime;

  public:
    buzzer(const uint8_t);
    void begin();
    void on();
    void off();
    void display();
};
#endif  //END BUZZER_H
