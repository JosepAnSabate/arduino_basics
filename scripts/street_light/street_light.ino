void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
   pinMode(8, OUTPUT);
   pinMode(3, OUTPUT);
   pinMode(2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(8, HIGH);
  delay(3000);
  digitalWrite(8, LOW);
  digitalWrite(3, HIGH);
  delay(3000);
  digitalWrite(3, LOW);
  digitalWrite(2, HIGH);
  delay(3000);
  digitalWrite(2, LOW);
}
