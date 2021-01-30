int redPin = 4;
int greenPin = 3;
int bluePin = 2;
String msg = "What led you want to turn on";
String msgR = "Red LED is ON";
String msgG = "Green LED is ON";
String msgB = "Blue LED is ON";
String myColour;

void setup() {
  // put your setup code here, to run once:
pinMode(redPin,OUTPUT);
pinMode(greenPin,OUTPUT);
pinMode(bluePin,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(msg);
while (Serial.available()==0){
  
}
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
}
