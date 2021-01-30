int tiltPin = 2;
int tiltVal;
int RedLED =5;
int greenLED=4;

void setup() {
  // put your setup code here, to run once:
pinMode(tiltPin,INPUT);
pinMode(RedLED,OUTPUT);
pinMode(greenLED,OUTPUT);
digitalWrite(tiltPin,HIGH);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
tiltVal = digitalRead(tiltPin);
Serial.println(tiltVal);
if(tiltVal == 1){
  digitalWrite(greenLED,HIGH);
  digitalWrite(RedLED,LOW);
  }
else{
  digitalWrite(greenLED,LOW);
  digitalWrite(RedLED,HIGH);
}
}
