int redPin=2;
int greenPin = 3;
int bluePin = 4;
String myColour;
String msg = "What colour do you want?";

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(redPin,OUTPUT);
pinMode(greenPin,OUTPUT);
pinMode(bluePin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(msg);
while(Serial.available()==0){}
myColour = Serial.readString();

if (myColour=="red"){
  digitalWrite(redPin,HIGH);
  digitalWrite(greenPin,LOW);
  digitalWrite(bluePin,LOW); 
}

if (myColour=="green"){
  digitalWrite(redPin,LOW);
  digitalWrite(greenPin,HIGH);
  digitalWrite(bluePin,LOW); 
}

if (myColour=="blue"){
  digitalWrite(redPin,LOW);
  digitalWrite(greenPin,LOW);
  digitalWrite(bluePin,HIGH); 
}

if (myColour=="off"){
  digitalWrite(redPin,LOW);
  digitalWrite(greenPin,LOW);
  digitalWrite(bluePin,LOW); 

}

if (myColour=="aqua"){
  digitalWrite(redPin,HIGH);
  analogWrite(greenPin,155);
  analogWrite(bluePin,255);
  }
}
  
