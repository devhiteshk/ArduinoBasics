#include <LiquidCrystal.h>
int rs=7;
int en=8;
int d4=9;
int d5=10;
int d6=11;
int d7=12;
int buttonPin=A3;
int buttonVal;
 
int numMeas=100;
float avMeas;
int j;
float bucket=0;
 
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);
 
int trigPin=2;
int echoPin=3;
int pingTravelTime;
float pingTravelDistance;
float distanceToTarget;
int dt=5000;


void setup() {
  // put your setup code here, to run once:
lcd.begin(16,2);
pinMode(trigPin,OUTPUT);
pinMode(echoPin,INPUT);
pinMode(buttonPin,INPUT);
digitalWrite(buttonPin,HIGH);
Serial.begin(9600);
 
}
 
void loop() {
  // put your main code here, to run repeatedly:
lcd.setCursor(0,0);
lcd.print("Place the Target");
lcd.setCursor(0,1);
lcd.print("Press to Measure");
buttonVal=digitalRead(buttonPin);
while (buttonVal==1){
  buttonVal=digitalRead(buttonPin);
}
lcd.setCursor(0,0);
lcd.clear();
lcd.print("Measuring . . .");
for (j=1;j<=numMeas;j=j+1){
  digitalWrite(trigPin,LOW);
delayMicroseconds(10);
digitalWrite(trigPin,HIGH);
delayMicroseconds(10);
digitalWrite(trigPin,LOW);
pingTravelTime=pulseIn(echoPin,HIGH);
delay(25);
pingTravelDistance=2.54*((pingTravelTime*765.*5280.*12)/(3600.*1000000));
distanceToTarget=pingTravelDistance/2;
bucket=bucket+distanceToTarget;
}
avMeas=bucket/numMeas;
Serial.print("Av. Dist. to Target is: ");
Serial.print(avMeas);
Serial.println(" in.");
lcd.clear();
lcd.setCursor(0,0);
lcd.print("Target Distance");
lcd.setCursor(0,1);
lcd.print(distanceToTarget);
lcd.print("cm");
delay(dt);
 
 
}
