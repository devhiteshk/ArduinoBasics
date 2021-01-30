int redPin = 9;
int bright = 127;
// we can change the value of brightness in anlog mode.

void setup() {
  // put your setup code here, to run once:
pinMode(redPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(redPin,bright);

}
