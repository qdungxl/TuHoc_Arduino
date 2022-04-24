#include "DHT.h"
#define DHTPin 2
#define DHTType DHT11
DHT dht(DHTPin,DHTType);
void setup() 
{
  Serial.begin(9600);
  dht.begin();
}

void loop() 
{
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  if (isnan(t) || isnan(h)) {
    Serial.println("Failed to read from DHT");
  } else {
    Serial.print("Humidity: "); 
    Serial.print(h);
    Serial.print(" %\t");
    Serial.print("Temperature: "); 
    Serial.print(t);
    Serial.println(" *C");
    delay(1000);
  }
}
