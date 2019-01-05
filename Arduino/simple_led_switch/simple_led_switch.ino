const int LED_pin = 8;
const int LED_pin_2 = 10;
const int BUTTON_pin = 7;


void setup() {
  // put your setup code here, to run once:
  pinMode(BUTTON_pin, INPUT);
  pinMode(LED_pin, OUTPUT);
  Serial.begin(300);

}

void loop() {
  // put your main code here, to run repeatedly:
  // When button is pressed: 
  if (digitalRead(BUTTON_pin) == LOW) {
    Serial.print("button is pressed!");
    // Turn on the LED
    digitalWrite(LED_pin, HIGH);

        // Blink the LED so we can pinpoint the issue: 

   digitalWrite(LED_pin_2, HIGH); 
  //Wait 1 second
  delay(100);
  //Turn the LED Off
  digitalWrite(LED_pin_2, LOW);
  //Wait 1 second
  delay(100);
    
  }


  // if the Button is not pressed:
  else {
    Serial.print("No Button Pressed!");
    //digitalWrite(LED_pin, LOW);
  

    // Blink the LED so we can pinpoint the issue: 

   digitalWrite(LED_pin, HIGH); 
  //Wait 1 second
  delay(100);
  //Turn the LED Off
  digitalWrite(LED_pin, LOW);
  //Wait 1 second
  delay(100);
  }
}
