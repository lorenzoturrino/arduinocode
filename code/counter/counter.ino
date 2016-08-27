void pulsePin(int pin, int sleep=500) {
  digitalWrite(pin, HIGH);
  delay(sleep);
  digitalWrite(pin, LOW);
}

void setup() {
  for(int pin = 0; pin < 20; pin++) {
    pinMode(pin, OUTPUT);
  }

}

void loop() {
  for(int i = 0; i < 20; i++) {
    pulsePin(i, 500);
    delay(100);
  }
}
