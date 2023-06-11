#ifndef BUZZER_H
#define BUZZER_H

class buzzer
{
  private: 
    int buzzpin;

  public:
    buzzer(const int);
    void begin();
    ~buzzer();
    void on();
    void off();
};
#endif  //END BUZZER_H
