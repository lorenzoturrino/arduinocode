int ledPin = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  for(int i = 0; i < 20; i++) {
    pinMode(i, OUTPUT);
    turnOff(i);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  turnOn(ledPin);
  delay(50);
  turnOff(ledPin);
  delay(5000);
}

void turnOn(int pin) {
  digitalWrite(pin, HIGH);
}

void turnOff(int pin) {
  digitalWrite(pin, LOW);
}
