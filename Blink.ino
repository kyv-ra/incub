const int ledPin = 2;

void setup() {
analogWriteRange(1023);
analogWriteFreq(333);
}

void loop() {
  // увеличение яркости светодиода
  for (int dutyCycle = 0; dutyCycle < 1023; dutyCycle++) {
    // изменение яркости светодиода с помощью ШИМ
    analogWrite(ledPin, dutyCycle);
    //delay(1);
  }

  // уменьшиние яркости светодиода
  for (int dutyCycle = 1023; dutyCycle > 0; dutyCycle--) {
    // изменение яркости светодиода с помощью ШИМ
    analogWrite(ledPin, dutyCycle);
    //delay(1);
  }
}