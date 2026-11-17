/*
  Project: ESP32 Onboard LED Blink
  Board: ESP32 DevKit V1
  IDE: Arduino IDE

  Description:
  This program controls the onboard LED using GPIO 2.
  The LED turns ON for 1 second and OFF for 1 second
  continuously.
*/

// Define the GPIO pin connected to the onboard LED
const int LED_PIN = 2;
void setup() {
  // put your setup code here, to run once:
pinMode(2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(2,HIGH);
delay(1000);
digitalWrite(2,LOW);
delay(1000);

}
