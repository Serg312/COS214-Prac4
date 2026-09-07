#ifndef PRIORITYDECORATOR_H
#define PRIORITYDECORATOR_H

#include "Decorator.h"
#include "WorkComponent.h"


// Adds an urgent state to the component
// So every component gets the urgent tag added to it and its 
// time reduced by 10%

class PriorityDecorator : public Decorator {
public:
    PriorityDecorator(WorkComponent* wrappedComponent) 
        : Decorator(wrappedComponent) {
    }
    
    // add urgent to its status so that we know and can see it
    std::string getStatus() const override;

    int estimateDuration() const override;
    
};

#endif