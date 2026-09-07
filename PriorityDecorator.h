#ifndef PRIORITYDECORATOR_H
#define PRIORITYDECORATOR_H

#include "Decorator.h"
#include "WorkComponent.h"

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