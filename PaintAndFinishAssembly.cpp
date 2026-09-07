#include "PaintAndFinishAssembly.h"

PaintAndFinishAssembly::PaintAndFinishAssembly(const std::string& name, int dryTime) : SubAssembly(name), dryTime(dryTime) {}

PaintAndFinishAssembly::~PaintAndFinishAssembly() {}        //Base class destructor is called, nothing needed here

std::string PaintAndFinishAssembly::getStatus() const 
{
    return SubAssembly::getStatus();
}

int PaintAndFinishAssembly::estimateDuration() const 
{
    return SubAssembly::estimateDuration() + dryTime;
}