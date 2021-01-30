int trigPin=2;
int echoPin=3;
float pingTravelTime;
float waveTravelDistance;
float Distance;
void setup() {
  // put your setup code here, to run once:
pinMode(trigPin,OUTPUT);
pinMode(echoPin,INPUT);
Serial.begin(9600);
}
 
void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(trigPin,LOW);
delayMicroseconds(10);
digitalWrite(trigPin,HIGH);
delayMicroseconds(10);
digitalWrite(trigPin,LOW);
pingTravelTime=pulseIn(echoPin,HIGH);
delay(25);
waveTravelDistance = pingTravelTime*0.03419856;
Distance = waveTravelDistance/2;
Serial.print("Distance is: ");
Serial.print(Distance);
Serial.println("cm");
}
