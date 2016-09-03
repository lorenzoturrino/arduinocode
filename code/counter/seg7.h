namespace seg7 {
  int SEG7_OFFSET = 0;
  byte patterns[10] = {
    B00111111,
    B00000110,
    B01011011,
    B01001111,
    B01100110,
    B01101101,
    B11111101,
    B00000111,
    B11111111,
    B11101111
  };

  void seg7Setup() {
    for(int i = 0; i < 8; i++) {
      int pin = i + SEG7_OFFSET;
      pinMode(pin, OUTPUT);
      digitalWrite(pin, LOW);
    }
  }

  void lightByteCode(byte pattern) {
    for(int i = 0; i < 8; i++) {
      int pin = i + SEG7_OFFSET;
      if(pattern & (1 << i)){
        digitalWrite(pin, HIGH);
      } else {
        digitalWrite(pin, LOW);
      }
    }
  }

  void lightNumber(int num) {
    lightByteCode(patterns[num]);
  }
