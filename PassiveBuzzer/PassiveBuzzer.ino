int buzzPin = 4;
int buzzTime1=100;
int buzzTime2=100;

void setup()
{
  pinMode(buzzPin,OUTPUT);
}
void loop()
{

  digitalWrite(buzzPin,HIGH);
  delay(buzzTime1);
  digitalWrite(buzzPin,LOW);
  delay(buzzTime2);
  
}
