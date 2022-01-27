int led1 = 9;
int led2 = 7;
int led3 = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);

}

void loop() {
  myCustomLed(led1);
  myCustomLed(led2);
  myCustomLed(led3);
}

void myCustomLed(int pin){
  digitalWrite(pin, HIGH);
  delay(1000);
  digitalWrite(pin, LOW);
  delay(1000);
}
