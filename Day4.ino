
//global variables
//int - integers
//float - number including decimals
int LEDpin = 13;
int waitTimeOn = 70000;
int waitTimeOff = 2000;

void setup() {
  // put your setup code here, to run once:
  pinMode(LEDpin,OUTPUT); 
  // pinMode() configures specified pin as OUTPUT or INPUT or
  // INPUT_PULLUP

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LEDpin,HIGH);
  //digitialWrite() write HIGH or LOW value to a digital pin
  delay(waitTimeOn);
  digitalWrite(LEDpin,LOW);
  delay(waitTimeOff);

}
