namespace seg7 {
  const int SEG7_OFFSET = 0;
  const byte patterns[16] = {
    B00111111,
    B00000110,
    B01011011,
    B01001111,
    B01100110,
    B01101101,
    B01111101,
    B00000111,
    B01111111,
    B01101111,
    B01110111,
    B01111100,
    B00111001,
    B01011110,
    B01111001,
    B01110001,
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
    lightByteCode(patterns[num % 16]);
  }

}
