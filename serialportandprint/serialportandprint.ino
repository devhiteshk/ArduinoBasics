int j = 1;
int waitT = 750;
int x = 12;
int y = 11;
int z;
String myString = " + ";
float area;
float r =2;
float pi = 3.14;
String mess1 = " A circle with radius ";
String mess2 =  " Has an Area of ";
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  area = pi*r*r;
  z = x+y;
//Serial.print("x");
//Serial.print(myString);
//Serial.print("y");
//Serial.print(" = ");
//Serial.println(z);
Serial.print(mess1);
Serial.print(r);
Serial.print(mess2);
Serial.println(area);
delay(waitT);
r = r+1;
}
