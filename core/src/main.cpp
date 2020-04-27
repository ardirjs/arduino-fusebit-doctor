#include <Arduino.h>

#define PIN_TO_CRYSTAL 3
#define OUT_TO_CRYSTAL(PIN) (PIND |= _BV(PIN))

void setup(void) {
  pinMode(PIN_TO_CRYSTAL, true);
}

void loop(void) {
  OUT_TO_CRYSTAL(PIN_TO_CRYSTAL);
}
