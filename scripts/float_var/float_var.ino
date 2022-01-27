float myFloatVar = 7.1;
float myFloatVar2 = 3;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); // Enables the serial communication between arduino and the computer
  Serial.println(myFloatVar +2);
  
   Serial.println(myFloatVar2/2);
}

void loop() {
  // put your main code here, to run repeatedly:

}
