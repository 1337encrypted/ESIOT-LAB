#include "DHT11Sensor.h"

DHT11Sensor::DHT11Sensor(uint8_t pin) {
  this->dhtPin = pin;
  dht=new DHT(this->dhtPin, DHT11);
}

void DHT11Sensor::begin() {
  dht->begin();
}

float DHT11Sensor::readTemperature() {
  return dht->readTemperature();
}

float DHT11Sensor::readHumidity() {
  return dht->readHumidity();
}

void DHT11Sensor::display() {
  float temperature = readTemperature();
  float humidity = readHumidity();

  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.print(" %;");
  Serial.print(" Temperature : ");
  Serial.print(temperature);
  Serial.println(" °C;");
}

bool DHT11Sensor::alarmTemperature() {
  float temperature = readTemperature();
  if (temperature > 25.0)
    return true;
  else
    return false;
}
