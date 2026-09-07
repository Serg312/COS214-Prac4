#include "MechanicalAssembly.h"

MechanicalAssembly::MechanicalAssembly(const std::string& name) : SubAssembly(name) {}

MechanicalAssembly::~MechanicalAssembly() {}        //Base class destructor is called, nothing needed here

std::string MechanicalAssembly::getStatus() const 
{
    return SubAssembly::getStatus();
}

int MechanicalAssembly::estimateDuration() const 
{
    return SubAssembly::estimateDuration();
}