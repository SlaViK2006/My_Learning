int readValue = 0;
int writeValue = 0;

void setup() {
  pinMode(9, OUTPUT);   //declare the first LED pin as output
  pinMode(10, OUTPUT);  //declare the second LED pin as output
  pinMode(11, OUTPUT);  //declare the third LED pin as output
  Serial.begin(9600);   //declate the staring of the serial monitor with baud rates 9600
}

void loop() {
  readValue = analogRead(A0);   //store the value from the potemtiometer
  writeValue = readValue / 4;   //divede the readValue by 4 and store as the writeValue

  analogWrite(9, 0);   //turn off the first LED 
  analogWrite(10, 0);  //turn off the second LED
  analogWrite(11, 0);  //turrn off the third LED
    
  if (readValue <= 300){        
    analogWrite(9, writeValue); //turn on the first LED
  } 
  else if(readValue <= 600) {
    analogWrite(9, writeValue);  //turn on the first LED
    analogWrite(10, writeValue); //turn on the second LED
  }
  else if (readValue <= 900){
    analogWrite(9, writeValue); //turn on the first LED
    analogWrite(10, writeValue); //turn on the second LED
    analogWrite(11, writeValue); //turn on the third LED
  }
  else {
    digitalWrite(9, LOW);       //turn off the first LED
    digitalWrite(10, LOW);      //turn off the second LED
    digitalWrite(11, LOW);      //turn off the third LED 
    delay(250);                 //wait 1/4 of a second
    digitalWrite(9, HIGH);      //turn on the first LED
    digitalWrite(10, HIGH);     //turn on the second LED
    digitalWrite(11, HIGH);     //turn on the third LED
    delay(250);                 //wait 1/4 of a second
  }
  Serial.print(readValue);  //set to display the value coming into the Arduino board
  Serial.print(" : ");  //set a separator that separates the both variables
  Serial.println(writeValue); 
  delay(100);
}
