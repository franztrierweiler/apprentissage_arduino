// Pilotage du servo moteur SG90s
// 1. Par libairie servo.
// 2. A la main

#include "Servo.h";

Servo sg90s;

#define PIN_CMD_SERVO 53

void setup() {
  // put your setup code here, to run once:
  sg90s.attach(PIN_CMD_SERVO);
}

void loop() {
  int angle = 0;
  for (;;)
  {
    sg90s.write(angle); 
    delay(1000);
    angle += 10;
    if (angle > 180)
      angle = 0;
  }
}
