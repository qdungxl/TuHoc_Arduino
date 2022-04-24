#define LedPin 7
#include <Wire.h>
void setup()
{
  Wire.begin(6);
  Wire.onReceive(receiveEvent);
  pinMode(LedPin,OUTPUT);
  digitalWrite(LedPin,0);
}
void loop()
{
 
}
void receiveEvent()
{
  while(Wire.available())
  {
   char c = Wire.read();
   if(c=='H')
   {
    digitalWrite(LedPin,1); 
   }
   else if (c=='L')
   {
    digitalWrite(LedPin,0);
   }
  }
}
