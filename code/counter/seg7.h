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

  byte ZERO = B00111111;
  byte ONE = B00000110;
  byte TWO = B01011011;
  byte THREE = B01001111;
  byte FOUR  = B01100110;
  byte FIVE = B01101101;
  byte SIX = B11111101;
  byte SEVEN = B00000111;
  byte EIGHT = B11111111;
  byte NINE = B11101111;

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

  void lightNumberPattern(int num) {
    lightByteCode(patterns[num]);
  }


  void lightNumber(int num) {
    byte convertedNum;
    switch(num % 10) {
      case 0:
        convertedNum = ZERO;
        break;
      case 1:
        convertedNum = ONE;
        break;
      case 2:
        convertedNum = TWO;
        break;
      case 3:
        convertedNum = THREE;
        break;
      case 4:
        convertedNum = FOUR;
        break;
      case 5:
        convertedNum = FIVE;
        break;
      case 6:
        convertedNum = SIX;
        break;
      case 7:
        convertedNum = SEVEN;
        break;
      case 8:
        convertedNum = EIGHT;
        break;
      case 9:
        convertedNum = NINE;
        break;
    }
    lightByteCode(convertedNum);
  }

}
