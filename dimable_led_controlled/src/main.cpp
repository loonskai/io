#include <Arduino.h>

int ledPin = 6;

int buzzPin = 5;
int buzzDelay = 200;

int decButtonPin = 11;
int decButtonOld;
int decButtonNew;
int incButtonPin = 12;
int incButtonOld;
int incButtonNew;

int currStep;

int MIN_STEP = 0;
int MAX_STEP = 10;
int COEF = 255 / MAX_STEP;

void setup()
{
  pinMode(decButtonPin, INPUT);
  pinMode(incButtonPin, INPUT);
  pinMode(buzzPin, OUTPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void readInc()
{
  incButtonNew = digitalRead(incButtonPin);
  if (incButtonOld == 0 && incButtonNew == 1)
  {
    if (currStep < MAX_STEP)
    {
      currStep += 1;
    }
  }
  incButtonOld = incButtonNew;
}

void readDec()
{
  decButtonNew = digitalRead(decButtonPin);
  if (decButtonOld == 0 && decButtonNew == 1)
  {
    if (currStep > MIN_STEP)
    {
      currStep -= 1;
    }
  }
  decButtonOld = decButtonNew;
}

void buzz()
{
  digitalWrite(buzzPin, HIGH);
  delayMicroseconds(buzzDelay * currStep);
  digitalWrite(buzzPin, LOW);
  delayMicroseconds(buzzDelay * currStep);
}

void loop()
{
  readInc();
  readDec();
  buzz();
  analogWrite(ledPin, currStep * COEF);
}
