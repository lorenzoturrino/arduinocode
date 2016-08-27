int ledPin = 13;
int redPin = 9;
int bluePin = 10;
int greenPin = 11;

void pulsePin(int pin, int sleep=500) {
  digitalWrite(pin, HIGH);
  delay(sleep);
  digitalWrite(pin, LOW);
}

void gradientPin(int pin, int step=5a) {
  for(int i = 0; i < 256; i++) {
    analogWrite(pin, i);
    delay(step);
  }
  for(int i = 0; i < 256; i++) {
    analogWrite(pin, 255-i);
    delay(step);
  }
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
  for(int i = 0; i < 5; i++) {
    pulsePin(ledPin,50);
    delay(10);
  }

  gradientPin(redPin);
  gradientPin(bluePin);
  gradientPin(greenPin);

}
