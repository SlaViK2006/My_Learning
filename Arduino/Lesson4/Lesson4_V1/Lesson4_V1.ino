int readValue = 0;
int writeValue = 0;

void setup() {
  pinMode(9, OUTPUT);   //declare the first LED pin as output
  pinMode(10, OUTPUT);  //declare the second LED pin as output
  pinMode(11, OUTPUT);  //declare the third LED pin as output

}

void loop() {
  readValue = analogRead(A0); //store the value from the potemtiometer
  

}