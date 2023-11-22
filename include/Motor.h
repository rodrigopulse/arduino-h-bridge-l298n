#include <Arduino.h>

class Motor {
  int atualSpeed = 255, pin1, pin2;

  public:
    void PinOut(int in1, int in2) {
      pin1 = in1;
      pin2 = in2;
      pinMode(pin1, OUTPUT);
      pinMode(pin2, OUTPUT);
    }
    void Speed(int speed) {
      atualSpeed = speed;
    }
    void Forward() {
      analogWrite(pin1, atualSpeed);
      digitalWrite(pin2, LOW);
    }
};