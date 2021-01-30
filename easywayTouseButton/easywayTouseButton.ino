int buttonPin = 2;
int buttonValue;
int dt=100;
void setup(){
  pinMode(buttonPin,INPUT);
  digitalWrite(buttonPin,HIGH);
  Serial.begin(9600);
}

void loop(){
  buttonValue=digitalRead(buttonPin);
  Serial.println("Your button is: ");
  Serial.println(buttonValue);
  delay(dt);
}
