void setup() {
    // set the LED pins as outputs
    pinMode(3, OUTPUT);
    pinMode(4, OUTPUT);
    pinMode(5, OUTPUT);
}

void loop() {
    // put your main code here, to run repeatedly:
    digitalWrite(3, HIGH); // Turn the green LED on pin 3 ON
    digitalWrite(4, HIGH); // Turn the yellow LED on pin 4 ON
    digitalWrite(5, HIGH); // Turn the red LED on pin 5 ON
}