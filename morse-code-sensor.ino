#include<SoftwareSerial.h>

const int RX_PIN = 12;
const int TX_PIN = 2;
const int INPUT_BUTTON_PIN = 3;

const int BAUD_RATE = 9600;

const SoftwareSerial bluetooth = SoftwareSerial(RX_PIN, TX_PIN);

void setup() {
  // Activate the internal pull-up resistor
  pinMode(INPUT_BUTTON_PIN, INPUT_PULLUP);
   
  bluetooth.begin(9600);
}

void loop() {
  // If button pushed
  if (digitalRead(INPUT_BUTTON_PIN) == LOW) {
    bluetooth.print("x\n");
  } else {
  }
}
