int ledPin = 13;
int redPin = 9;
int bluePin = 10;
int greenPin = 11;

void pulsePin(int pin, int sleep=500) {
  digitalWrite(pin, HIGH);
  delay(sleep);
  digitalWrite(pin, LOW);
}

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(redPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(greenPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i = 0; i < 10; i++) {
    pulsePin(ledPin,150);
    delay(50);
  }

  pulsePin(redPin);
  pulsePin(bluePin);
  pulsePin(greenPin);

}
