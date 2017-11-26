#ifndef VARIABLES_H
#define VARIABLES_H
#include"Sht31.h"
#include"C12832.h"
#include "TSL2561.h"
#include "MMA7660.h"
#include "CCS811.h"
#include "mbed.h"



extern C12832  lcd;
extern Sht31 temp_sensor;
extern CCS811 air_sensor;
extern TSL2561 light_sensor;
extern MMA7660 accel;
//extern DigitalOut  led;

void Hardware_init();

#endif
