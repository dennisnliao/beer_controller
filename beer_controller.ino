#include <TrinketFakeUsbSerial.h>
#include <usbconfig.h>

#include "beer_controller.h"
#include "subroutines.h"
#include <avr/power.h>

void setup() {
  // Set the CPU frequency to 16MHz when selecting 16MHz device from tools menu
  if (F_CPU == 16000000) clock_prescale_set(clock_div_1);
  TFUSerial.begin();
  

}

void loop() {
  // put your main code here, to run repeatedly:
  TFUSerial.task();
  int temp;
  temp = get_temp(bucket_sensor);
  TFUSerial.println(temp, DEC);
  delay(1000);
}
