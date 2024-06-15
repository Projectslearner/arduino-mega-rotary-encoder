/*
    Project name : Rotary Encoder
    Modified Date: 15-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-mega-rotary-encoder
*/

// Define the pins for the rotary encoder
#define CLK_PIN 2
#define DT_PIN 3
#define SW_PIN 4

// Variables to hold the encoder state
volatile int encoderPos = 0;  // Current position of the encoder
volatile int lastPos = 0;     // Last position of the encoder
volatile bool rotationDirection = 0;  // 0 = clockwise, 1 = counterclockwise

void setup() {
  Serial.begin(9600); // Initialize serial communication
  pinMode(CLK_PIN, INPUT_PULLUP); // Enable pull-up resistor for CLK pin
  pinMode(DT_PIN, INPUT_PULLUP);  // Enable pull-up resistor for DT pin
  pinMode(SW_PIN, INPUT_PULLUP);  // Enable pull-up resistor for SW pin

  // Attach interrupt to CLK pin to detect changes
  attachInterrupt(digitalPinToInterrupt(CLK_PIN), encoderISR, CHANGE);
}

void loop() {
  // Check if the encoder switch is pressed
  if (digitalRead(SW_PIN) == LOW) {
    Serial.println("Switch pressed!");
    delay(500); // Debounce delay
  }

  // Check if the encoder position has changed
  if (encoderPos != lastPos) {
    Serial.print("Encoder Position: ");
    Serial.println(encoderPos);
    lastPos = encoderPos;
  }
}

// Interrupt Service Routine (ISR) for the encoder's CLK pin
void encoderISR() {
  // Read DT pin to determine direction of rotation
  if (digitalRead(DT_PIN) != digitalRead(CLK_PIN)) {
    encoderPos++;
    rotationDirection = 0;  // Clockwise
  } else {
    encoderPos--;
    rotationDirection = 1;  // Counterclockwise
  }
}
