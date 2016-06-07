int LEDPin = 13;
int waitTimeOn = 90;
int WaitTimeOff = 100;

void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT); 

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED,HIGH);
  delay(waitTime);
  digitalWrite(LED,LOW);
  delay(waitTime);

}
