#include "DHTSensor.h"

DHT11Sensor::DHT11Sensor(int pin) : pin(pin), dht(pin, DHT11) {}

void DHT11Sensor::begin() {
  dht.begin();
}

float DHT11Sensor::readTemperature() {
  return dht.readTemperature();
}

float DHT11Sensor::readHumidity() {
  return dht.readHumidity();
}

void DHT11Sensor::display() {
  float temperature = readTemperature();
  float humidity = readHumidity();

  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.print("°C, Humidity: ");
  Serial.print(humidity);
  Serial.println("%");
}

bool DHT11Sensor::alarmTemperature() {
  float temperature = readTemperature();
  if (temperature > 25.0) {
    return true;
  }
  return false;
