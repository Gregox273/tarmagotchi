#include "sensors.h"

using namespace std;

sensors GetSensors() {
    
    sensors Sensors; 
    //Updating sensor values
    Sensors.temperature = temp_sensor.readTemperature();
    Sensors.humidity = temp_sensor.readHumidity();
    Sensors.accel_x = accel.x();
    Sensors.accel_y = accel.y();
    Sensors.accel_z = accel.z();
    uint16_t eco2, tvoc;
    air_sensor.readData(&eco2, &tvoc);
    Sensors.air_quality_co2=eco2;
    Sensors.air_quality_tvoc=tvoc;
    Sensors.visible = light_sensor.getLuminosity(TSL2561_VISIBLE);
    Sensors.infrared = light_sensor.getLuminosity(TSL2561_INFRARED);
        
    return Sensors;
        
}