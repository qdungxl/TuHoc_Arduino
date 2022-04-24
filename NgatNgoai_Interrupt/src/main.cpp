#include <Arduino.h>
int ledPin = 13;
bool ledState = false;
void BatTat()
{
  ledState = !ledState;
  digitalWrite(ledPin,ledState);
}
void setup()
{
  pinMode(ledPin,OUTPUT);
  pinMode(2,INPUT_PULLUP);
  attachInterrupt(0,BatTat,LOW);
}

void loop() 
{
  digitalWrite(ledPin,ledState);
  delay(2000);
  ledState = !ledState;
  digitalWrite(ledPin,ledState);
  delay(2000);
  ledState = !ledState;
}