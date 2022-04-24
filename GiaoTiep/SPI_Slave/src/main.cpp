#include <Arduino.h>
#include <SPI.h>
#define outputLED 4
#define inputbutton 2
volatile boolean received;
volatile byte Slavereceived, Slavesend;
int buttonvalue;
int x;
void setup() 
{
  Serial.begin(115200);
  pinMode(inputbutton,INPUT);
  pinMode(outputLED,OUTPUT);
  pinMode(MISO,OUTPUT);
  SPCR|=_BV(SPE);
  received = false;
  SPI.attachInterrupt();
}
ISR (SPI_STC_vect)
{
  Slavereceived = SPDR;
  received = true;
}
void loop()
{
  if(received)
  {
    if(Slavereceived==1)
    {
      digitalWrite(outputLED,HIGH);
    }
    else
    {
      digitalWrite(outputLED,LOW);
    }
    buttonvalue = digitalRead(inputbutton);
    delay(100);
    if(buttonvalue==HIGH)
    {
      x=1;
    }
    else
    {
      x=0;
    }
    Slavesend = x;
    SPDR = Slavesend;
    
  }
}