char myChar = 'a';
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); // Enables the serial communication between arduino and the computer
Serial.println(myChar);
Serial.println(myChar+1);
}

void loop() {
  // put your main code here, to run repeatedly:

}
