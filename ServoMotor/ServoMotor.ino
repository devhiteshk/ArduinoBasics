#include <Servo.h>

int servoPin = 9;
int servoPos = 0;
Servo myServo;             // make myServo as an Servo object

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
myServo.attach(servoPin);
}

void loop() {
  // put your main code here, to run repeatedly:
  
 myServo.write(servoPos);
 
  Serial.println("What Angle for the Servo? ");
  while(Serial.available()==0){
  }
servoPos=Serial.parseInt();

}
