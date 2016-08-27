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
  for(int pin = 0; pin < 7; pin++) {
    pinMode(pin + seg7::SEG7_OFFSET, OUTPUT);
    seg7::lightByteCode(B11111100);
  }
  int currentTime = 0;


}

void loop() {
  setTime(currentTime);
  currentTime++;
  delay(1000);
}
