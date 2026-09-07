#include "CompletedState.h"
#include "Operation.h"
#include <iostream>

void CompletedState::startProgress(Operation* op) 
{
    std::cout << "Operation '" << op->getName() << "' is already completed.\n";
}

void CompletedState::finishTask(Operation* op) 
{
    std::cout << "Operation '" << op->getName() << "' is already completed.\n";
}

std::string CompletedState::getStatus() const 
{
    return "Completed";
}

int CompletedState::estimateDuration(int baseDuration) const 
{
    return 0;
}
