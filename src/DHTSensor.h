#include <DHT.h>

class DHT11Sensor {
  private:
    int pin;
    DHT dht;

  public:
    DHT11Sensor(int pin);

    void begin();
    float readTemperature();
    float readHumidity();
    bool alarmTemperature()
    void display();
};
