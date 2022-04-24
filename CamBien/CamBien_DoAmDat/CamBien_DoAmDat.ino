int SensorPin = A0;
void setup()
{
  Serial.begin(9600);
  pinMode(SensorPin,INPUT);
}

void loop()
{
  int Value = analogRead(SensorPin);
  Serial.println(Value);
  delay(1000);
}
