#include "ProcessingState.h"
#include "CompletedState.h"
#include "Operation.h"
#include <iostream>

void ProcessingState::startProgress(Operation* op) 
{
    std::cout << "Operation '" << op->getName() << "' is already in progress.\n";
}

void ProcessingState::finishTask(Operation* op) 
{
    std::cout << "Finishing operation: " << op->getName() << "\n";
    op->setState(new CompletedState());
}

std::string ProcessingState::getStatus() const 
{
    return "Processing";
}

int ProcessingState::estimateDuration(int baseDuration) const 
{
    return baseDuration / 2;
}
