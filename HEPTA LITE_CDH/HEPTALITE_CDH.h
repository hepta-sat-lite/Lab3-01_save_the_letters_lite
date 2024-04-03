#ifndef MBED_HEPTACDH_H
#define MBED_HEPTACDH_H
#include "SDFileSystem.h"
#include "mbed.h"

class HEPTALITE_CDH : public SDFileSystem{
public:
    
    HEPTALITE_CDH(PinName mosi, PinName miso, PinName sclk, PinName cs, const char* name);
  
private:  
};

#endif