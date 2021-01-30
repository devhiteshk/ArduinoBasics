int j;
int delayT =500;
int potVal;
int potPin = A0;
int redPin = 7;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(potPin,INPUT);
pinMode(redPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
potVal = analogRead(potPin);
  Serial.println(potVal);
  delay(delayT);

  while (potVal>1000){
    
    digitalWrite(redPin,HIGH);
    potVal = analogRead(potPin);
    Serial.println(potVal);
    delay(delayT);
    
}
digitalWrite(redPin,LOW);
}
