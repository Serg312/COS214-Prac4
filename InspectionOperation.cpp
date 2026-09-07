#include "InspectionOperation.h"

InspectionOperation::InspectionOperation(const std::string& name, int duration) : Operation(name, duration) {}

InspectionOperation::~InspectionOperation() {}      //Leaves have no children, nothing needed here

std::string InspectionOperation::getStatus() const 
{
    return Operation::getStatus();
}

int InspectionOperation::estimateDuration() const 
{
    return Operation::estimateDuration();
}