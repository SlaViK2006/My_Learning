void setup() {
    // set the LED pins as outputs
    pinMode(2, INPUT);  // Declare pin 2 (button) as input
    pinMode(3, OUTPUT); // Declare pin 3 (gren LED) as output
    pinMode(4, OUTPUT); // Declare pin 4 (yellow LED) as output
    pinMode(5, OUTPUT); // Declare pin 5 (red LED) as output
}

void loop() {
    if (digitalRead(2) == LOW)
    {
      digitalWrite(3, HIGH); // Turn the green LED on pin 3 ON
      digitalWrite(4, LOW);  // Turn the yellow LED on pin 4 OFF
      digitalWrite(5, LOW);  // Turn the red LED on pin 5 OFF
      delay(3000);           // Wait for 3 seconds
      
      digitalWrite(3, LOW);  // Turn the green LED on pin 3 OFF
      digitalWrite(4, HIGH); // Turn the yellow LED on pin 4 ON
      digitalWrite(5, LOW);  // Turn the red LED on pin 5 OFF
      delay(500);            // Wait half a second
      
      digitalWrite(3, LOW);  // Turn the green LED on pin 3 OFF
      digitalWrite(4, LOW);  // Turn the yellow LED on pin 4 OFF
      digitalWrite(5, HIGH); // Turn the red LED on pin 5 ON
      delay(3000);           // Wait for 3 seconds
    }

    if (digitalRead(2) == HIGH) // If the button is pressed
    {
      digitalWrite(3, HIGH);    // Turn the green LED on pin 3 ON
      digitalWrite(4, LOW);     // Turn the yellow LED on pin 4 OFF
      digitalWrite(5, LOW);     // Turn the red LED on pin 5 OFF  
      delay(500);               // Wait half a second
      digitalWrite(3, LOW);     // Turn the green LED on pin 3 OFF
      delay(500);               // Wait half a second
    }
} 
