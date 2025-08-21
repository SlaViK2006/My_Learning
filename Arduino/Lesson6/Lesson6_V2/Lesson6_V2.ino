#include <Servo.h>    //Include the Servo library
Servo myServo;        //create a servo object called myServo
const int potPin = A0; //set the name of pin A0 to potPin
int potValue = 0;      //variable to read the value from the potentiometer
int servoAngle = 0;    //variable to set the angle for the servou motor

void setup() {
  myServo.attach(9);   //attaches the servo on pin 9 to the myServo object
}

void loop() {
  potValue = analogRead(potPin);    //store the potentiometer value in a variable 
  servoAngle = map(potValue, 0, 1023, 0, 179);  //scale potentiometer value to the servo
  myServo.write(servoAngle);    //turn the servo to the angle variable
  delay(100);     //wait for the servo to get there
}
