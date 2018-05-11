int ledPin = 13;

void setup() {
  pinMode(ledPin, OUTPUT);
  for(int i = 0; i < 20; i++) {
    pinMode(i, OUTPUT);
    turnOff(i);
  }
}

void loop() {
  for(int pin = 0; pin < 20; pin++) {
    turnOn(pin);
    delay(200);
    turnOff(pin);
    delay(200);
  }
}

void turnOn(int pin) {
  digitalWrite(pin, HIGH);
}

void turnOff(int pin) {
  digitalWrite(pin, LOW);
}
