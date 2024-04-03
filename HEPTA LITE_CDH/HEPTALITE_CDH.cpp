#include "HEPTALITE_CDH.h"
HEPTALITE_CDH::HEPTA_CDH(PinName mosi, PinName miso, PinName sclk, PinName cs, const char* name) : SDFileSystem( mosi, miso, sclk, cs, name){
}
