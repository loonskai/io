#include <Arduino.h>

int ledPin = 6;

int decButtonPin = 11;
int decButtonOld;
int decButtonNew;
int incButtonPin = 12;
int incButtonOld;
int incButtonNew;

int currStep;

int MIN_STEP = 0;
int MAX_STEP = 5;
int COEF = 255 / MAX_STEP;

void setup()
{
  pinMode(decButtonPin, INPUT);
  pinMode(incButtonPin, INPUT);
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

void loop()
{
  readInc();
  readDec();
  analogWrite(ledPin, currStep * COEF);
  Serial.println(currStep * COEF);
  delay(100);
}
