#include "status.h"
using namespace std;

#define PROP_MAX 100
#define PROP_MIN 0

Property::Property(uint8_t Value, float Learned){
    // Constructor
    mtx.lock();
    value = Value;
    learned = Learned;
    learn_rate = 0.05;
    mtx.unlock();
}

void Property::update_learned (uint8_t v){
    // Update learned value based on new value v
    mtx.lock();
    learned += learn_rate * v;
    if(learned > PROP_MAX) learned = PROP_MAX;
    else if(learned < PROP_MIN) learned = PROP_MIN;
    mtx.unlock();
}

void Property::set_add(int8_t arg){
    // Add arg to current value
    uint8_t temp;
    mtx.lock();
    temp = value;
    if(arg<(0-value)) value = PROP_MIN;
    else if (value+arg > PROP_MAX) value = PROP_MAX;
    else value += arg;
    mtx.unlock();
    //if(value > PROP_MAX) value = PROP_MAX;
    // else if(value < PROP_MIN) value = PROP_MIN;
    update_learned(temp);
}

uint8_t Property::get_value(){
    // Getter function
    mtx.lock();
    uint8_t temp = value;
    mtx.unlock();
    return temp;
}

void Property::set_value(uint8_t v){
    // Setter function
    
    if(v <= PROP_MAX && v >= PROP_MIN){
        mtx.lock();
        value = v;
        update_learned(value);
        mtx.unlock();
    }
}

float Property::get_learned(){
    mtx.lock();
    float temp = learned;
    mtx.unlock();
    return temp;
}

void Status::update(){
    // Timestep update
    //happiness.set_add(0);
    //discomfort.set_add(0);
    mtx.lock();
    hunger.set_add(5);
    tiredness.set_add(1);
    unfitness.set_add(2);
    boredom.set_add(4);
    mtx.unlock();
}