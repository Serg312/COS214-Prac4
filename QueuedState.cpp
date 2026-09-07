#include "QueuedState.h"
#include "ProcessingState.h"
#include "Operation.h"
#include <iostream>

void QueuedState::startProgress(Operation* op) 
{
    std::cout << "Starting operation: " << op->getName() << "\n";
    op->setState(new ProcessingState());
}

void QueuedState::finishTask(Operation* op) 
{
    std::cout << "Cannot finish. Operation '" << op->getName() << "' has not started yet.\n";
}

std::string QueuedState::getStatus() const 
{
    return "Queued";
}

int QueuedState::estimateDuration(int baseDuration) const 
{
    return baseDuration;
}
