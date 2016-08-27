int LED_OFFSET = 14;
int currentTime = 0;


bool byteOn(int currentTime, int pin) {
  int pinValue = (int) pow(2.0, (double) pin);
  return currentTime & pinValue;
}

void setTime(int currentTime){
  for(int i = 0; i < 6; i++) {
    int pin = i + LED_OFFSET;
    if(byteOn(currentTime, i)) {
      digitalWrite(pin, HIGH);
    } else {
      digitalWrite(pin, LOW);
    }
  }
}

void setup() {
  for(int pin = 0; pin < 20; pin++) {
    pinMode(pin, OUTPUT);
  }
  int currentTime = 0;
}

void loop() {
  setTime(currentTime);
  currentTime++;
  delay(1000);
}
