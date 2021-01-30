float j;
float sinVal;
float cosVal;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
for(j=0;j<=2*3.14159265;j=j+0.01){
  sinVal=sin(j);
  cosVal=cos(10*j);
  Serial.print(sinVal);
  Serial.print(' ');
  Serial.println(cosVal);
  Serial.print(' ');
}
}
