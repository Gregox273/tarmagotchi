#ifndef STATUS_H
#define STATUS_H

#include <stdint.h>
#include "rtos.h"

class Property
{
     private :
          // Variables
          uint8_t value;  // Value from PROP_MIN to PROP_MAX
          float learned; // Memory of past values
          float learn_rate;
          Mutex mtx;
          
          // Functions
          void update_learned(uint8_t v);
          
     public :
          // Functions
          Property(uint8_t Value, float Learned);  // Constructor
          void set_add(int8_t arg);  // Add arg to current value
          
          uint8_t get_value();  // Getter function
          void set_value(uint8_t v);  // Setter function
          float get_learned();
};

class Status
{
     private:
          Mutex mtx;     
     
     public :
          Property happiness;  // Overall happiness
          // Start of properties
          Property discomfort;
          Property hunger;
          Property tiredness;
          Property unfitness;
          Property boredom;
          // End of properties
          
          Status(): happiness(50,50), discomfort(0,0), hunger(0,0), tiredness(50,50), unfitness(50,50), boredom(20,0) {}
          
          
       //   Property discomfort(0,0);
//          Property hunger(0,0);
//          Property tiredness(0,0);
//          Property unfitness(50,50);
//          Property boredom(0,0);
          
          void update();  // Update member objects for each timestep
};

#endif