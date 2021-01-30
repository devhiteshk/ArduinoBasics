#include <IRremote.h>
int IRpin=9;
IRrecv IR(IRpin);
decode_results cmd;
String myCom;
void setup()
{
Serial.begin(9600);
IR.enableIRIn();
}
 
void loop() {
  while (IR.decode(&cmd)==0){ 
}
delay(1500);
IR.resume();
 
if (cmd.value==0xFF9867){
  myCom="zero";
  Serial.println(myCom); 
}
if (cmd.value==0xFFA25D){
  myCom="one";
  Serial.println(myCom); 
}
if (cmd.value==0xFF629D){
  myCom="two";
  Serial.println(myCom); 
}
if (cmd.value==0xFFE21D){
  myCom="three";
  Serial.println(myCom); 
}
if (cmd.value==0xFF22DD){
  myCom="four";
  Serial.println(myCom); 
}
if (cmd.value==0xD7E84B1B){
  myCom="five";
  Serial.println(myCom); 
}
if (cmd.value==0xFFC23D){
  myCom="six";
  Serial.println(myCom); 
}
if (cmd.value==0x3967A663){
  myCom="seven";
  Serial.println(myCom); 
}
if (cmd.value==0xFFA857){
  myCom="eight";
  Serial.println(myCom); 
}
if (cmd.value==0x2EC0A2A7){
  myCom="nine";
  Serial.println(myCom); 
}
 
if (cmd.value==0xFF689){
  myCom="*";
  Serial.println(myCom); 
}
if (cmd.value==0xFFB04F){
  myCom="#";
  Serial.println(myCom);
}
if (cmd.value==0xFF18E7){
  myCom="UP";
  Serial.println(myCom);
}
if (cmd.value==0xFF4AB5){
  myCom="DOWN";
  Serial.println(myCom);
}
if (cmd.value==0xFF10EF){
  myCom="LEFT";
  Serial.println(myCom);
}
if (cmd.value==0xFF5AA5){
  myCom="RIGHT";
  Serial.println(myCom);
}
if (cmd.value==0xFF38C7){
  myCom="OK";
  Serial.println(myCom);
}
}
