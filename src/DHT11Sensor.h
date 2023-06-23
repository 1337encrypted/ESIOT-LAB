#ifndef DHT11Sensor_H
#define DHT11Sensor_H

#include <DHT.h>

class DHT11Sensor 
{
  private:
    DHT* dht;
    uint8_t dhtPin;
    float temperature;
    float humidity;
    const float CRITICALTEMPRATURE = 31;

  public:
    DHT11Sensor(uint8_t);
    void begin();
    float readTemperature();
    float readHumidity();
    bool alarmTemperature();
    void display();
};

#endif // DHT11Sensor_H
