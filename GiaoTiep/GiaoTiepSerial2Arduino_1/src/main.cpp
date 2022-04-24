#include <Arduino.h>

void setup() 
{
  pinMode(13,OUTPUT);
  digitalWrite(13,LOW);

  Serial.begin(9600);
}

void loop()
{
  if(Serial.available())
  {
    char datareceiv = Serial.read();
    if(datareceiv == '1') digitalWrite(13,HIGH);
    if(datareceiv == '0') digitalWrite(13,LOW);
  }
}