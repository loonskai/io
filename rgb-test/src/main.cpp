#include <Arduino.h>
int redPin = 8;
int greenPin = 9;
int bluePin = 10;
int anodePin = 4;
String color;

void setup()
{
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(anodePin, OUTPUT);
  Serial.begin(9600);
}

void reset()
{
  digitalWrite(anodePin, LOW);
  digitalWrite(redPin, HIGH);
  digitalWrite(greenPin, HIGH);
  digitalWrite(bluePin, HIGH);
}

void loop()
{
  Serial.println("Enter color:");
  while (Serial.available() == 0)
  {
  }
  reset();
  color = Serial.readString();
  if (color == "red")
  {
    digitalWrite(redPin, LOW);
    digitalWrite(anodePin, HIGH);
  }
  else if (color == "green")
  {
    digitalWrite(greenPin, LOW);
    digitalWrite(anodePin, HIGH);
  }
  else if (color == "blue")
  {
    digitalWrite(bluePin, LOW);
    digitalWrite(anodePin, HIGH);
  }
  else if (color == "aqua")
  {
    digitalWrite(anodePin, HIGH);
    analogWrite(bluePin, 100);
    analogWrite(greenPin, 0);
  }
  else
  {
    Serial.println("Unknown color");
  }
}
