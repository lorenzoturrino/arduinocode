int LED_OFFSET = 14;
int SEG7_OFFSET = 0;
int currentTime = 0;


bool byteOn(int currentTime, int pinPosition) {
  int pinValue = (int) pow(2.0, (float) pinPosition);
  return (currentTime & pinValue);
}

bool simpleByteOn(int currentTime, int pinValue) {
  return (currentTime & pinValue);
}

int twoTo(int exponent) {
  return 1 << exponent;
}

void setTime(int currentTime){
  for(int i = 0; i < 6; i++) {
    digitalWrite(LED_OFFSET + i, LOW);
  }
  delay(100);
  if(simpleByteOn(currentTime, twoTo(0))) {
    digitalWrite(LED_OFFSET + 0, HIGH);
  }
  if(simpleByteOn(currentTime, twoTo(1))) {
    digitalWrite(LED_OFFSET + 1, HIGH);
  }
  if(simpleByteOn(currentTime, twoTo(2))) {
    digitalWrite(LED_OFFSET + 2, HIGH);
  }
  if(simpleByteOn(currentTime, twoTo(3))) {
    digitalWrite(LED_OFFSET + 3, HIGH);
  }
  if(simpleByteOn(currentTime, 16)) {
    digitalWrite(LED_OFFSET + 4, HIGH);
  }
  if(simpleByteOn(currentTime, 32)) {
    digitalWrite(LED_OFFSET + 5, HIGH);
  }
}

void setup() {
  for(int pin = 0; pin < 6; pin++) {
    pinMode(pin + LED_OFFSET, OUTPUT);
  }
  for(int pin = 0; pin < 7; pin++) {
    pinMode(pin + SEG7_OFFSET, OUTPUT);
  }
  int currentTime = 0;
  delay(1000);
}

void loop() {
  setTime(currentTime);
  currentTime++;
  delay(300);
}
