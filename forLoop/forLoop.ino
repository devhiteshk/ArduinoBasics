
int greenPin = 6;
int redPin = 9;
int greenTime = 500;
int redTime = 500;
int greenBlink = 3;
int redBlink = 5;
int j;

void setup() {
  // put your setup code here, to run once:
pinMode(greenPin,OUTPUT);
pinMode(redPin,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
for(j=1;j<=greenBlink;j=j+1)
{
digitalWrite(greenPin,HIGH);
delay(greenTime);

digitalWrite(greenPin,LOW);
delay(greenTime);
}

for(j=1;j<=redBlink;j=j+1)
{
digitalWrite(redPin,HIGH);
delay(redTime);

digitalWrite(redPin,LOW);
delay(redTime);
}
}
