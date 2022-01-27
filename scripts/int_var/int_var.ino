int myVariable = 5;
int mySecVar;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600); // Enables the serial communication between arduino and the computer
Serial.println(myVariable +2);
Serial.println(myVariable);
myVariable = myVariable +5;
Serial.println(myVariable);
Serial.println(myVariable/3); // resultat int


mySecVar = myVariable +2;
Serial.println( myVariable);
Serial.println(mySecVar);

}

void loop() {
  // put your main code here, to run repeatedly:

}
