#include "PaintingOperation.h"

PaintingOperation::PaintingOperation(const std::string& name, int duration) : Operation(name, duration) {}

PaintingOperation::~PaintingOperation() {}      //Leaves have no children, nothing needed here

std::string PaintingOperation::getStatus() const 
{
    return Operation::getStatus();
}

int PaintingOperation::estimateDuration() const 
{
    return Operation::estimateDuration();
}