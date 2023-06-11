//DTHSensor.h

#ifndef DTH_H
#define DTH_H

#include <DHT.h>

class DHT11Sensor 
{
  private:
    uint8_t pin;
    DHT dht;

  public:
    DHT11Sensor(uint8_t pin);    //Parameterized constructor to initialise the pin, should also contain the dth.begin() function
    float readTemperature();     //should read temperature and return the value
    float readHumidity();        //should read the humidity and return the value
    bool alarmTemprature();      //return true if the temprature is above 25 degree else false
    void display();              //Method to display both temperature and humidity
};

#endif  // DTH_H
