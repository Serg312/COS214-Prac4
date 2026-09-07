#include "Operation.h"

Operation::Operation(const std::string& name, int duration) : WorkComponent(name), duration(duration) {}

Operation::~Operation() {}      //Leaves have no children, nothing needed here

std::string Operation::getStatus() const 
{
    //Placeholder until State pattern is implemented
    return "Pending";
}

int Operation::estimateDuration() const 
{
    return duration;
}