#include <Arduino.h>
#include <SPI.h>
#define push 2
#define LED 4
int x;
int value;
void setup()
{
  Serial.begin(115200);
  pinMode(LED,OUTPUT);
  pinMode(push,INPUT);
  SPI.begin();
  SPI.setClockDivider(8);
  digitalWrite(SS,HIGH);
}
void loop()
{
  byte gui, nhan;
  value = digitalRead(push);
  delay(100);
  if(value == HIGH)
  {
    x =1;
  }
  else
  {
    x =0;
  }
  digitalWrite(SS,LOW);
  gui =x;
  nhan =SPI.transfer(gui);
  if(nhan == 1)
  {
    digitalWrite(LED,LOW);
  }
  
}