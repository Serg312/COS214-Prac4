#include "ElectricalAssembly.h"

ElectricalAssembly::ElectricalAssembly(const std::string& name) : SubAssembly(name) {}

ElectricalAssembly::~ElectricalAssembly() {}        //Base class destructor is called, nothing needed here

std::string ElectricalAssembly::getStatus() const 
{
    return SubAssembly::getStatus();
}

int ElectricalAssembly::estimateDuration() const 
{
    return SubAssembly::estimateDuration();
}