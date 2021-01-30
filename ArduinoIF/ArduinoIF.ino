int myPin = A2;
int readVal;
float V2;
int delayT = 250;
int WarnLED = 9;


void setup() {
  // put your setup code here, to run once:

Serial.begin(9600);
pinMode(myPin,INPUT);
pinMode(WarnLED,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  
readVal = analogRead(myPin);
V2 = (5./1023.)*readVal;
Serial.print("Potentiometer Voltage is ");
Serial.println(V2);

if (V2>2 && V2<3){
  digitalWrite(WarnLED,HIGH); 
}
if (V2<=2 || V2>=3){
  digitalWrite(WarnLED,LOW);
  
}
delay(delayT);
}
