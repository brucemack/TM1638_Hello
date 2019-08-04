#include <TM1638plus.h>

#define TM1638_STROBE_TM 7
#define TM1638_CLOCK_TM 9
#define TM1638_DIO_TM 8

TM1638plus tm(TM1638_STROBE_TM,TM1638_CLOCK_TM,TM1638_DIO_TM);

void setup() {
  // 8 characters
  tm.displayText("01234567");
  // Turn on position 0
  tm.setLED(0,1);
  // 0 to 7
  tm.brightness(2);
}

void loop() {
  uint8_t b = tm.readButtons();
}
