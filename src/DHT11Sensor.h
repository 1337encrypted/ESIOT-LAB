#ifndef DHT11Sensor_H
#define DHT11Sensor_H

#include <DHT.h>

class DHT11Sensor {
  private:
    uint8_t pin;
    DHT dht;

  public:
    DHT11Sensor(uint8_t pin);
    void begin();
    float readTemperature();
    float readHumidity();
    bool alarmTemperature()
    void display();
};
#endif // DHT11Sensor_H
