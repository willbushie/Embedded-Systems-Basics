// active GPIO pin variables
const int red_led = D7;
const int green_led = D6;
// global variables
// morse code units
const int morse_dot = 1;
const int morse_dash = 3;
const int morse_symbol_gap = 1;
const int morse_letter_gap = 3;
const int morse_word_gap = 7;
// morse code smallest unit
const int morse_unit = 130;

void morseS(int led) {
  // . . . (3 dots)
  int dot = morse_dot * morse_unit;
  // first symbol (dot)
  digitalWrite(led, HIGH);
  delay(dot);
  digitalWrite(led, LOW);
  // symbol delay
  delay(morse_symbol_gap * morse_unit);
  // second symbol (dot)
  digitalWrite(led, HIGH);
  delay(dot);
  digitalWrite(led, LOW);
  // symbol delay
  delay(morse_symbol_gap * morse_unit);
  // third symbol (dot)
  digitalWrite(led, HIGH);
  delay(dot);
  digitalWrite(led, LOW);
}

void morseO(int led) {
  // - - - (3 dashes)
  int dash = morse_dash * morse_unit;
  // first symbol (dash)
  digitalWrite(led, HIGH);
  delay(dash);
  digitalWrite(led, LOW);
  // symbol delay
  delay(morse_symbol_gap * morse_unit);
  // second symbol (dash)
  digitalWrite(led, HIGH);
  delay(dash);
  digitalWrite(led, LOW);
  // symbol delay
  delay(morse_symbol_gap * morse_unit);
  // third symbol (dash)
  digitalWrite(led, HIGH);
  delay(dash);
  digitalWrite(led, LOW);
}

void setup() {
  pinMode(red_led, OUTPUT);
  pinMode(green_led, OUTPUT);
}

void loop() {
  // turn off all LEDs
  digitalWrite(red_led, LOW);
  digitalWrite(green_led, LOW);

  // S
  morseS(red_led);
  // delay
  delay(morse_letter_gap * morse_unit);
  // O
  morseO(red_led);
  // delay
  delay(morse_letter_gap * morse_unit);
  // S
  morseS(red_led);
  // delay word
  delay(morse_word_gap * morse_unit);
}