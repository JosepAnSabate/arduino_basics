 void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  int myArray [5] = {1,2,3,4,5};
  // 0 el to 4 el by index
  Serial.println(myArray[0]);
myArray[1] = 700;
 Serial.println(myArray[1]);
  int myVar = myArray[0] + myArray[1];
   Serial.println(myVar);
 }
void loop() {
  // put your main code here, to run repeatedly:

}
