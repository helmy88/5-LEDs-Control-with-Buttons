// Define the digital pins for the LEDs
const int ledPins[] = {2, 3, 4, 5, 6};
const int numLeds = sizeof(ledPins) / sizeof(ledPins[0]);

// Define the digital pins for the buttons
const int buttonPins[] = {7, 8, 9, 10, 11};
const int numButtons = sizeof(buttonPins) / sizeof(buttonPins[0]);

// Variable to store the state of each LED
bool ledStates[numLeds] = {false};

void setup() {
  // Set all LED pins as OUTPUT
  for (int i = 0; i < numLeds; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
  
  // Set all button pins as INPUT_PULLUP
  for (int i = 0; i < numButtons; i++) {
    pinMode(buttonPins[i], INPUT_PULLUP);
  }
}

void loop() {
  // Check each button
  for (int i = 0; i < numButtons; i++) {
    if (digitalRead(buttonPins[i]) == LOW) {
      // Button is pressed, turn on the corresponding LED
      ledStates[i] = !ledStates[i]; // Toggle LED state
      digitalWrite(ledPins[i], ledStates[i] ? HIGH : LOW);
      delay(200); // Debounce delay to avoid rapid toggling
    }
  }
}
