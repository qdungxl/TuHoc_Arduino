#include <Arduino.h>
bool buttonState = false;
void setup() 
{
  pinMode(2,INPUT_PULLUP);
  Serial.begin(9600);
}
void loop() 
{
  if(digitalRead(2) == LOW) buttonState = !buttonState;
  delay(200);
  if(buttonState == true)
  {
    Serial.write('1');
  }
  else 
  {
    Serial.write('0');
  }
}