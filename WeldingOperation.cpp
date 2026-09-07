#include "WeldingOperation.h"

WeldingOperation::WeldingOperation(const std::string& name, int duration, int minDuration) : Operation(name, duration), minDuration(minDuration) {}

WeldingOperation::~WeldingOperation() {}        //Leaves have no children, nothing needed here

std::string WeldingOperation::getStatus() const 
{
    return Operation::getStatus();
}

int WeldingOperation::estimateDuration() const 
{
    int base = Operation::estimateDuration();
    return (base > minDuration) ? base : minDuration;
}