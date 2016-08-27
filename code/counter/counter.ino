int LED_OFFSET = 14;

bool byteOn(int time, int pos) {
  int byteValue = (int) pow((double) 2,(double) base);
  if(byteValue > time){
    return false;
  } else {
    int divisor = byteValue * pos;
    return (time % divisor);
  }
}

void setTime(int time){
  for(int i = 0; i < 6; i++) {
    int pin = i + LED_OFFSET;
    if(byteOn(time, pin)) {
      digitalWrite(pin, HIGH);
    } else {
      digitalWrite(pin, Low);
    }
  }
}

void setup() {
  for(int pin = 0; pin < 20; pin++) {
    pinMode(pin, OUTPUT);
  }

}

void loop() {

}
