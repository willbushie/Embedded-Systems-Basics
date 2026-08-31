// active GPIO pin variables
const int red_led = D7;
const int green_led = D6;
// global variables
int pwm_sig = 0;
bool direction = true; // getting dimmer (false) or getting brighter (true)

void setup() {
  pinMode(red_led, OUTPUT);
  pinMode(green_led, OUTPUT);
}

void loop() {
  // turn off green LED
  digitalWrite(green_led, LOW);

  // update pwm signal
  analogWrite(red_led, pwm_sig);

  // update pwm count
  if (direction) {
    pwm_sig += 1;
    if (pwm_sig > 255) {
      direction = false;
    }
  } else if (!direction) {
    pwm_sig -= 1;
    if (pwm_sig <= 0) {
      direction = true;
    }
  }

  // wait n ms
  delay(8);
}