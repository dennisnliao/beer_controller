/*
 * Define constants and include additional files in this header.
 */


/* ADC Defs
 *  Since ADC is 1024 bits resolution with min 0 max 2.56v, we get 2.5mv/count
 *  We're using TI's tmp86 as analog temp sensor. It starts at 2057mv for 4C (39.2F). 
 *  And goes to 1810 for 27C (80.6F).
 *  This section defines how we're going to calculate temperature.
 *  All temperatures defined in F
 */
#define DEGREE_F_392  823
#define DEGREE_F_806  724
#define LOWEST_TMP DEGREE_F_392
#define HIGHEST_TMP DEGREE_F_806


/*
 * Pin Defs
 * Define static pin number mappings here. Built for the Adafruit Trinket (attiny85)
 */
int bucket_sensor = 3;
int fridge_sensor = 4;
int heater_relay = 1;
int fridge_relay = 0
