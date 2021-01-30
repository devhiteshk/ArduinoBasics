int myNumb;
int buttonPin = 3;
int ButtonVal;
int buzzPin = 2;
String msg = "Should we begin";
int dt = 100;
int j;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(buzzPin,OUTPUT);
pinMode(buttonPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(msg);

while(Serial.available()==0){}
myNumb = Serial.parseInt();
for(j=1;j<=9;j=j+1){
  if(j<=3){
  digitalWrite(buzzPin,HIGH);
  delay(50);
  digitalWrite(buzzPin,LOW);
  delay(dt);
}

if(j>3 && j<=6){
  digitalWrite(buzzPin,HIGH);
  delay(200);
  digitalWrite(buzzPin,LOW);
  delay(dt);
}

if(j>6 && j<=9){
  digitalWrite(buzzPin,HIGH);
  delay(50);
  digitalWrite(buzzPin,LOW);
  delay(dt);
}
}
}
