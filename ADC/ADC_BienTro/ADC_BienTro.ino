int PotPin = A0;
int Value =0;
void setup() 
{
  Serial.begin(9600);
}

void loop()
{
  Value = analogRead(PotPin);
  Serial.print("Gia tri bien tro la: ");
  Serial.println(Value);
  delay(200);
}
