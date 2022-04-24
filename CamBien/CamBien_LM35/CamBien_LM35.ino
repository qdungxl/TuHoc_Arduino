int SenSorPin = A0;
void setup()
{
  Serial.begin(9600);
}
void loop()
{
  int Value = analogRead(SenSorPin);
  float vol = Value*5.0/1024.0;
  float temp = vol*100.0;
  Serial.println(temp);
  delay(1000);
}
