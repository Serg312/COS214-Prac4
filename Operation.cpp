#include "Operation.h"
#include "OperationState.h"
#include "QueuedState.h"

Operation::Operation(const std::string& name, int duration) : WorkComponent(name), duration(duration) 
{
    state = new QueuedState();
}

Operation::~Operation() 
{
    if (state != nullptr)
    {
        delete state;
        state = nullptr;
    }
}

std::string Operation::getStatus() const 
{
    return state->getStatus();
}

int Operation::estimateDuration() const 
{
    return state->estimateDuration(duration);
}

void Operation::startProgress() 
{
    state->startProgress(this);
}

void Operation::finishTask() 
{
    state->finishTask(this);
}

void Operation::setState(OperationState* newState) 
{
    if (state != nullptr)
    {
        delete state;
    }
    state = newState;
}