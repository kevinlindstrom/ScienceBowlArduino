int ledPin = 13;       // the number for the internal LED

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);      //  Declares that the LED is an ouput
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledPin, HIGH);   // Turns the interal LED on
  delay(200);                   // Pauses .2 seconds
  digitalWrite(ledPin, LOW);    // Turns the LED off
  delay(200);                   // Pauses .2 seconds
}
