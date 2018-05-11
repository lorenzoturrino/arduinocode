int ledPin = 13;
int redPin = 9;
int bluePin = 10;
int greenPin = 11;

void pulsePin(int pin, int sleep=500) {
  digitalWrite(pin, HIGH);
  delay(sleep);
  digitalWrite(pin, LOW);
  delay(sleep);
}

void gradientPin(int pin, int step=5) {
  for(int i = 0; i < 256; i++) {
    analogWrite(pin, i);
    delay(step);
  }
  for(int i = 0; i < 256; i++) {
    analogWrite(pin, 255-i);
    delay(step);
  }
}

int twoTo(int exponent) {
  return (int) pow(2.0, (float) exponent);
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
  // for(int i = 0; i < 5; i++) {
  //   pulsePin(ledPin,50);
  //   delay(10);
  // }
  //
  // gradientPin(redPin);
  // gradientPin(bluePin);
  // gradientPin(greenPin);
  delay(1000);
  for(int i = 0; i < twoTo(3); i++){
    pulsePin(ledPin, 200);
  }
  delay(1000);

}
