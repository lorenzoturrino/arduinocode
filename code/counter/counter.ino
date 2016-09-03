#include "seg7.h"

int LED_OFFSET = 14;
int currentTime = 0;


int twoTo(int exponent) {
  return 1 << exponent;
}

bool byteOn(int value, int pinPosition) {
  int pinValue = twoTo(pinPosition);
  return (value & pinValue);
}

void setLed(int currentTime, int pinPosition) {
  if(byteOn(currentTime, pinPosition)) {
    digitalWrite(LED_OFFSET + pinPosition, HIGH);
  } else {
    digitalWrite(LED_OFFSET + pinPosition, LOW);
  }
}

void setTime(int currentTime){
  for(int i = 0; i < 6; i++) {
    setLed(currentTime, i);
  }
}

void setup() {
  for(int pin = 0; pin < 6; pin++) {
    pinMode(pin + LED_OFFSET, OUTPUT);
  }
  seg7::seg7Setup();
  int currentTime = 0;
}

void loop() {
  setTime(currentTime % 60);
  seg7::lightNumberPattern(currentTime / 60);
  currentTime++;
  delay(1000);
}
