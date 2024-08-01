// LED:
// A = Positive
// C = Negative

const int OUTPUT_LED_PIN = 12;
const int INPUT_BUTTON_PIN = 2;

void setup() {
  pinMode(INPUT_BUTTON_PIN, INPUT_PULLUP);
  pinMode(OUTPUT_LED_PIN, OUTPUT);
}

void loop() {
  // If button pushed
  if (digitalRead(INPUT_BUTTON_PIN) == LOW) {
    digitalWrite(OUTPUT_LED_PIN, HIGH);
  } else {
    digitalWrite(OUTPUT_LED_PIN, LOW);
  }
}
