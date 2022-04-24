#include <Arduino.h>
int ledPin = 6;
int DoSang = 0;
int BuocSang = 5;
void setup()
{
  pinMode(ledPin,OUTPUT);
}
void loop()
{
  analogWrite(ledPin,DoSang);
  DoSang = DoSang + BuocSang;
  if(DoSang==0||DoSang==255)
  {
    BuocSang = -BuocSang;
  }
  delay(300);
}
