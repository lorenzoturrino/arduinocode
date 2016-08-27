namespace seg7 {
  int SEG7_OFFSET = 0;

  void lightByteCode(byte pattern) {
    for(int i = 0; i < 8; i++) {
      if(pattern & (1 << i)){
        digitalWrite(SEG7_OFFSET + i, HIGH);
      } else {
        digitalWrite(SEG7_OFFSET + i, LOW);
      }
    }
  }

}
