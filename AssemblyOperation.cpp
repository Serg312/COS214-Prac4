#include "AssemblyOperation.h"

AssemblyOperation::AssemblyOperation(const std::string& name, int duration) : Operation(name, duration) {}

AssemblyOperation::~AssemblyOperation() {}      //Leaves have no children, nothing needed here

std::string AssemblyOperation::getStatus() const 
{
    return Operation::getStatus();
}

int AssemblyOperation::estimateDuration() const 
{
    return Operation::estimateDuration();
}