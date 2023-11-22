#include <Arduino.h>
#include <Motor.h>

Motor Motor1, Motor2;

void setup() {
  Motor1.PinOut(5,6);
  Motor2.PinOut(9,10);
}

void loop() {
  Motor1.Speed(255);
  Motor2.Speed(255);
  Motor1.Forward();
  Motor2.Forward();
  delay(1000);
  Motor1.Speed(100);
  Motor2.Speed(100);
  Motor1.Forward();
  Motor2.Forward();
  delay(1000);
}