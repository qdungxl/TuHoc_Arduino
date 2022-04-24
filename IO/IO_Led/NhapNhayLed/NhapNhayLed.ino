int ledPin = 7;
unsigned long ThoiGian = 0;
bool ledState = false;

void setup() 
{
  pinMode(ledPin,OUTPUT);
}

void NhapNhayLed1();
void NhapNhayLed2();
void NhapNhayled3();

void loop()
{
  //NhapNhayLed1();
  //NhapNhayLed2();
   NhapNhayled3();
}


void NhapNhayLed1()
{
  //Nhap nhay led don gian dung ham deley.
  digitalWrite(ledPin,1);
  delay(500);
  digitalWrite(ledPin,0);
  delay(500);
}
void NhapNhayLed2()
{
  digitalWrite(ledPin,ledState);
  delay(500);
  ledState = !ledState;
}
void NhapNhayled3()
{
  //Nhay led dung ham millis.
 if(millis()-ThoiGian>=500)
  {
    digitalWrite(ledPin,ledState);
    ThoiGian = millis();
    ledState = !ledState;
  }
}
