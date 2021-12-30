#include <Arduino.h>

#define RED 13  // The pin the LED is connected to
#define GREEN 14
#define BLUE 12
#define BUZZER 32
//TEst

void setup() {
  pinMode(RED, OUTPUT); // Declare the LED as an output
  pinMode(GREEN, OUTPUT); // Declare the LED as an output
  pinMode(BLUE, OUTPUT); // Declare the LED as an output
  pinMode(BUZZER, OUTPUT); // Declare the LED as an output
}

void loop() {
  digitalWrite(RED, HIGH); // Turn the LED on
  delay(10000);
  digitalWrite(RED, LOW); // Turn the LED on
  digitalWrite(GREEN, HIGH); // Turn the LED on
  delay(10000);
  digitalWrite(GREEN, LOW); // Turn the LED on
  digitalWrite(BLUE, HIGH); // Turn the LED on
  delay(10000);
  digitalWrite(BLUE, LOW); // Turn the LED on
  delay(10000);
  digitalWrite(BUZZER, HIGH); // Turn the LED on
  delay(10000);
  digitalWrite(BUZZER, LOW); // Turn the LED on
}