#include <Arduino.h>
#define LEDR1 23 
#define LEDY1 19
#define LEDG1 18
#define LEDR2 5
#define LEDY2 17
#define LEDG2 16
#define SW1 15

void setup() {
 pinMode(LEDR1, OUTPUT);
 pinMode(LEDY1, OUTPUT);
 pinMode(LEDG1, OUTPUT);
 pinMode(LEDR2, OUTPUT);
 pinMode(LEDY2, OUTPUT);
 pinMode(LEDG2, OUTPUT);
 pinMode(SW1, INPUT_PULLUP);
}

void loop() {
if (digitalRead(SW1) == LOW)
{
  digitalWrite (LEDR1, HIGH);
  digitalWrite (LEDY1, LOW);
  digitalWrite (LEDG1, LOW);
  digitalWrite (LEDR2, LOW);
  digitalWrite (LEDY2, LOW);
  digitalWrite (LEDG2, HIGH);
  delay (5000);
  digitalWrite (LEDR1, HIGH);
  digitalWrite (LEDY1, LOW);
  digitalWrite (LEDG1, LOW);
  digitalWrite (LEDR2, LOW);
  digitalWrite (LEDY2, HIGH);
  digitalWrite (LEDG2, LOW);
  delay (1000);
  digitalWrite (LEDR1, LOW);
  digitalWrite (LEDY1, LOW);
  digitalWrite (LEDG1, HIGH);
  digitalWrite (LEDR2, HIGH);
  digitalWrite (LEDY2, LOW);
  digitalWrite (LEDG2, LOW);
  delay (5000);
  digitalWrite (LEDR1, LOW);
  digitalWrite (LEDY1, HIGH);
  digitalWrite (LEDG1, LOW);
  digitalWrite (LEDR2, HIGH);
  digitalWrite (LEDY2, LOW);
  digitalWrite (LEDG2, LOW);
  delay (1000);
  if (digitalRead(SW1) == HIGH) {
      while (digitalRead(SW1) == HIGH) {
        digitalWrite(LEDR1, HIGH);
        digitalWrite(LEDY1, HIGH);
        digitalWrite(LEDG1, HIGH);
        digitalWrite(LEDR2, HIGH);
        digitalWrite(LEDY2, HIGH);
        digitalWrite(LEDG2, HIGH);
        delay(500);
        digitalWrite(LEDR1, LOW);
        digitalWrite(LEDY1, LOW);
        digitalWrite(LEDG1, LOW);
        digitalWrite(LEDR2, LOW);
        digitalWrite(LEDY2, LOW);
        digitalWrite(LEDG2, LOW);
        delay(500);
      }
      digitalWrite(LEDR1, LOW);
      digitalWrite(LEDY1, LOW);
      digitalWrite(LEDG1, LOW);
      digitalWrite(LEDR2, LOW);
      digitalWrite(LEDY2, LOW);
      digitalWrite(LEDG2, LOW);
    }
  }
}