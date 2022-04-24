int ledPin1[5] = {2,3,4,5,6};
int ledPin2[5] ={7,8,9,10,11};
int vtr1 =0,vtr2 =0;
long unsigned t1=0, t2=0;
void setup()
{
  for(int i=0;i<5;i++)
  {
    pinMode(ledPin1[i],OUTPUT);
  }
  for(int i=0;i<5;i++)
  {
    pinMode(ledPin2[i],OUTPUT);
  }
}

void loop()
{
  if(millis()-t1>=100)
  {
    t1 = millis();
    for(int i=0;i<5;i++)
    {
      digitalWrite(ledPin1[i],0);
    }
    digitalWrite(ledPin1[vtr1],1);
    vtr1++;
    if(vtr1>5) vtr1 =0; 
  }
  if(millis()-t2>=200)
  {
    t2 = millis();
    for(int i=0;i<5;i++)
    {
      digitalWrite(ledPin2[i],0);
    }
    digitalWrite(ledPin2[vtr2],1);
    vtr2++;
    if(vtr2>5) vtr2 =0; 
  }
}
