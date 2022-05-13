#include <Arduino.h>

int pinOne = 13;
int pinTwo = 12;
int pinThree = 11;
int pinFour = 10;
int pinFive = 9;

void setup() {
  pinMode(pinOne, OUTPUT);
  pinMode(pinTwo, OUTPUT);
  pinMode(pinThree, OUTPUT);
  pinMode(pinFour, OUTPUT);
  pinMode(pinFive, OUTPUT);
}

void loop() {
  int gap = 500;
  digitalWrite(pinOne, LOW);
  digitalWrite(pinTwo, LOW);
  digitalWrite(pinThree, LOW);
  digitalWrite(pinFour, LOW);
  digitalWrite(pinFive, LOW);
  delay(gap);

  // 1
  digitalWrite(pinOne, HIGH);
  delay(gap);

  // 2
  digitalWrite(pinOne, LOW);
  digitalWrite(pinTwo, HIGH);
  delay(gap);

  digitalWrite(pinOne, HIGH);
  delay(gap);

  // 3
  digitalWrite(pinOne, LOW);
  digitalWrite(pinTwo, LOW);
  digitalWrite(pinThree, HIGH);
  delay(gap);

  digitalWrite(pinOne, HIGH);
  delay(gap);

  digitalWrite(pinOne, LOW);
  digitalWrite(pinTwo, HIGH);
  delay(gap);

  digitalWrite(pinOne, HIGH);
  delay(gap);

  // 4
  digitalWrite(pinOne, LOW);
  digitalWrite(pinTwo, LOW);
  digitalWrite(pinThree, LOW);
  digitalWrite(pinFour, HIGH);
  delay(gap);

  digitalWrite(pinOne, HIGH);
  delay(gap);

  digitalWrite(pinOne, LOW);
  digitalWrite(pinTwo, HIGH);
  delay(gap);

  digitalWrite(pinOne, HIGH);
  delay(gap);

  digitalWrite(pinOne, LOW);
  digitalWrite(pinTwo, LOW);
  digitalWrite(pinThree, HIGH);
  delay(gap);

  digitalWrite(pinOne, HIGH);
  delay(gap);

  digitalWrite(pinOne, LOW);
  digitalWrite(pinTwo, HIGH);
  delay(gap);

  digitalWrite(pinOne, HIGH);
  delay(gap);

  // 5
  digitalWrite(pinOne, LOW);
  digitalWrite(pinTwo, LOW);
  digitalWrite(pinThree, LOW);
  digitalWrite(pinFour, LOW);
  digitalWrite(pinFive, HIGH);
  delay(gap);

  digitalWrite(pinOne, HIGH);
  delay(gap);

  digitalWrite(pinOne, LOW);
  digitalWrite(pinTwo, HIGH);
  delay(gap);

  digitalWrite(pinOne, HIGH);
  delay(gap);

  digitalWrite(pinOne, LOW);
  digitalWrite(pinTwo, LOW);
  digitalWrite(pinThree, HIGH);
  delay(gap);

  digitalWrite(pinOne, HIGH);
  digitalWrite(pinTwo, LOW);
  delay(gap);

  digitalWrite(pinOne, LOW);
  digitalWrite(pinTwo, HIGH);
  delay(gap);

  digitalWrite(pinOne, HIGH);
  digitalWrite(pinTwo, HIGH);
  delay(gap);

  digitalWrite(pinOne, LOW);
  digitalWrite(pinTwo, LOW);
  digitalWrite(pinThree, LOW);
  digitalWrite(pinFour, HIGH);
  delay(gap);

  digitalWrite(pinOne, HIGH);
  delay(gap);

  digitalWrite(pinOne, LOW);
  digitalWrite(pinTwo, HIGH);
  delay(gap);

  digitalWrite(pinOne, HIGH);
  delay(gap);

  digitalWrite(pinOne, LOW);
  digitalWrite(pinTwo, LOW);
  digitalWrite(pinThree, HIGH);
  delay(gap);

  digitalWrite(pinOne, HIGH);
  digitalWrite(pinTwo, LOW);
  delay(gap);

  digitalWrite(pinOne, LOW);
  digitalWrite(pinTwo, HIGH);
  delay(gap);

  digitalWrite(pinOne, HIGH);
  delay(gap);
}
