int ledpin=12;

void setup() {
  // configure pin 13 as an output
  pinMode(ledpin, OUTPUT);
}

void loop() {
  // Switch LED ON
  digitalWrite(ledpin, HIGH);
  delay(1000);

  //Switch LED OFF
  digitalWrite(ledpin, LOW);
  delay(1000);
}
