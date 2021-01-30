#include <Servo.h>
int servoPos;
int servoPin = 9;
Servo myServo;             // make myServo as an Servo object

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
myServo.attach(servoPin);
}

void loop() {
  // put your main code here, to run repeatedly:
servoPos=Serial.parseInt();
myServo.write(servoPos);
for (int i=0;i=180;i=1+1){
 servoPos = servoPos +1;
}
}
