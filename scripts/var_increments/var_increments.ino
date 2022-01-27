int myVariable = 5;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); // Enables the serial communication between arduino and the computer
  myVariable++; // add one
  Serial.println(myVariable++);
  Serial.println(++myVariable); // firstincremented then print

}

void loop() {
  // put your main code here, to run repeatedly:

}
