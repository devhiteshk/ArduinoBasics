byte  myByte = 0;
int dt=500;

void setup(){
  Serial.begin(9600);
}
void loop(){

  Serial.print(myByte,DEC);
  Serial.print("    ");
  Serial.print(myByte,BIN);
  Serial.print("    ");
  Serial.println(myByte,HEX);
  myByte = myByte+1;
  delay(dt);
}
