int readValue = 0;
int writeValue = 0;

void setup() {
  pinMode(9, OUTPUT);   //declare the first LED pin as output
  pinMode(10, OUTPUT);  //declare the second LED pin as output
  pinMode(11, OUTPUT);  //declare the third LED pin as output

}

void loop() {
  readValue = analogRead(A0); //store the value from the potemtiometer
  writeValue = readValue / 4; //divede the readValue by 4 and store as the writeValue
  analogWrite(9, writeValue); //set first LED brightness to writeValue
  analogWrite(10, writeValue); //set second LED brightness to writeValue 
  analogWrite(11, writeValue);  //set third LED brightness to writeValue  
}
