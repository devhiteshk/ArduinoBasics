#include <LiquidCrystal.h>
int trigPin=2;
int echoPin=3;
float pingTravelTime;
float waveTravelDistance;
float Distance;
int buttonPin = A3;
int buttonVal;

int rs=7;
int en=8;
int d4=9;
int d5=10;
int d6=11;
int d7=12;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);

int dt=25;
int setTime = 1000;
 
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(trigPin,OUTPUT);
pinMode(echoPin,INPUT);
pinMode(buttonPin,INPUT);
digitalWrite(buttonPin,HIGH);
delay(setTime);
lcd.begin(16,2);
 
}
 
void loop() {
  lcd.setCursor(0,0);
  lcd.print("Place the target");
  lcd.setCursor(0,1);
  lcd.print("press to measure");
  buttonVal=digitalRead(buttonPin);
  
  while (buttonVal==1){ buttonVal=digitalRead(buttonPin);   }
lcd.clear();
digitalWrite(trigPin,LOW);
delayMicroseconds(10);
digitalWrite(trigPin,HIGH);
delayMicroseconds(10);
digitalWrite(trigPin,LOW);
pingTravelTime=pulseIn(echoPin,HIGH);
delay(dt);
waveTravelDistance = pingTravelTime*0.03419856;
Distance = waveTravelDistance/2;

 
lcd.setCursor(0,0);
lcd.print("Distance is: ");
lcd.setCursor(0,1);
lcd.print(Distance);
lcd.print(" cm");
delay(5000);
lcd.clear();

Serial.print("Distance is: ");
Serial.print(Distance);
Serial.println("cm"); 

}
