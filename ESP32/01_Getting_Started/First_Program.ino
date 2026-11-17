/*
  Project: First ESP32 Program
  Board: ESP32 DevKit V1
  IDE: Arduino IDE

  Description:
  This is my first ESP32 program.
  It establishes serial communication and
  prints a message on the Serial Monitor.
*/

void setup() {

  // Initialize serial communication at 115200 baud
  Serial.begin(115200);

}

void loop() {

  // Print message on Serial Monitor
  Serial.println("ESP32 IS WORKING!");

  // Wait for 1 second
  delay(1000);

}
