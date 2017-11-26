#ifndef PROPERTIES_H
#define PROPERTIES_H
#include "Hardware.h"
#include"Sht31.h"
#include"C12832.h"
#include "TSL2561.h"
#include "MMA7660.h"
#include "CCS811.h"




struct sensors {
    float temperature;
    float humidity;
    float air_quality_co2;
    float air_quality_tvoc;
    float accel_x;
    float accel_y;
    float accel_z;
    uint16_t visible;
    uint16_t infrared;
};

sensors GetSensors();

#endif