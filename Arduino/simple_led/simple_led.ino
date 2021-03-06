/*
Arduino Bootcamp
- Simple LED Circuit
This project demonstrates an LED controlled by the Arduino
created 10/29/2016
modified 10/29/2016
by: Lee Assam
*/

//Set the LED Pin constant globally
//The LED is connected to Pin 8 of the Arduino
#define LEDPin 8


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize LED Pin as an output.
  pinMode(LEDPin, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  //Turn the LED On
  digitalWrite(LEDPin, HIGH);
  //Wait 1 second
  delay(500);
  //Turn the LED Off
  digitalWrite(LEDPin, LOW);
  //Wait 1 second
  delay(500);
}
