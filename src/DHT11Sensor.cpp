#include "DHT11Sensor.h"

DHT11Sensor::DHT11Sensor(uint8_t dhtPin) 
{
  this->dhtPin = dhtPin;
  this->dht = new DHT(this->dhtPin, DHT11);
  dht->begin();
}

float DHT11Sensor::readTemperature() 
{
  return dht->readTemperature();
}

float DHT11Sensor::readHumidity() 
{
  return dht->readHumidity();
}

bool DHT11Sensor::alarmTemperature() 
{
  this->temperature = readTemperature(); 
  this->humidity = readHumidity();
  if (this->temperature >= this->CRITICALTEMPRATURE) 
    return true; 
  else 
    return false;
}

void DHT11Sensor::display() 
{
  if (!isnan(temperature) && !isnan(humidity)) 
  {
    Serial.print("Humidity: ");
    Serial.print(this->humidity);
    Serial.print(" %;  Temperature: ");
    Serial.print(this->temperature);
    Serial.println(" °C; ");
  }
  else 
  {
    Serial.println("Failed to read from DHT sensor!");
  }
}
