//DTHSensor.h

#ifndef DTH_H
#define DTH_H

#include <DHT.h>

class DHT11Sensor 
{
  private:
    int pin;
    DHT dht;

  public:
    DHT11Sensor(int pin);        //Parameterized constructor to initialise the pin, should also contain the dth.begin() function
    float readTemperature();     //should read temperature and return the value
    float readHumidity();        //should read the humidity and return the value
    void display();              //Method to display both temperature and humidity
};

#endif  // DTH_H
