// active GPIO pin variables
const int red_led = D7;
const int green_led = D6;

void setup() {
  pinMode(red_led, OUTPUT);
  pinMode(green_led, OUTPUT);
}

void loop() {
  // turn LED on
  digitalWrite(red_led, HIGH);
  digitalWrite(green_led, HIGH);
  // wait one second
  delay(1000);
  // turn LED off
  digitalWrite(red_led, LOW);
  digitalWrite(green_led, LOW);
  // wait one second
  delay(1000);
}
