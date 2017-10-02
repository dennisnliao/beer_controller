#include "subroutines.h"
#include "beer_controller.h"

/*
 * get_temp
 * Gets temperature from specified pin number and calculates the temperature in F.
 * Dependent on the TI tmp86 sensor.
 * The equation for the range between 4C to 27C:
 * F = -5.9839*mv + 2292.1
 */
int get_temp(int sensor){
  int raw_val = analogRead(sensor);
  
  // Do 10000 * numbers (fixed point) to get better precision because speed is less important
  long f_temp = 22921000 - (59839 * (long)raw_val);
  
  // Now remove the 10000
  f_temp = f_temp / 10000;
  return (int)f_temp;
}

