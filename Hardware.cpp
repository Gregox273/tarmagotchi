#include "Hardware.h"


//Global Variables
C12832  lcd(PE_14, PE_12, PD_12, PD_11, PE_9);
Sht31   temp_sensor(PF_0, PF_1);
TSL2561 light_sensor(PF_0, PF_1, TSL2561_ADDR_HIGH);
CCS811  air_sensor(PF_0, PF_1);
MMA7660 accel(PF_0, PF_1);


void Hardware_init() {
    accel.init();
    light_sensor.begin();
    light_sensor.setGain(TSL2561_GAIN_0X);
    light_sensor.setTiming(TSL2561_INTEGRATIONTIME_402MS);
    air_sensor.init();
}