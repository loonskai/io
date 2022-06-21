#include <Arduino.h>
#include <Stepper.h>

int stepsPerRevolution = 2048;
int motSpeed = 10;
int dt = 500;
Stepper myStepper(stepsPerRevolution, 8, 10, 9, 11);
int dir = 1;
int btnPin = 7;
int btnPrev = 1;
int btnNew;

void setup()
{
  Serial.begin(9600);
  pinMode(btnPin, INPUT);
  myStepper.setSpeed(motSpeed);
}

void loop()
{
  btnNew = digitalRead(btnPin);
  if (btnNew == 1 && btnPrev == 0)
  {
    dir = -dir;
  }
  btnPrev = btnNew;
  myStepper.step(dir);
}
