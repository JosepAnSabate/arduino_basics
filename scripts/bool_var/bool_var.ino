bool myVarTrue = 78;
bool myVarFalse = false;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); // Enables the serial communication between arduino and the computer
  Serial.println(myVarTrue); //1
  Serial.println(myVarFalse);//0

}

void loop() {
  // put your main code here, to run repeatedly:

}
