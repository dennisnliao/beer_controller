#include "beer_controller.h"
#include <avr/power.h>

void setup() {
  // Set the CPU frequency to 16MHz when selecting 16MHz device from tools menu
  if (F_CPU == 16000000) clock_prescale_set(clock_div_1);

}

void loop() {
  // put your main code here, to run repeatedly:

}
