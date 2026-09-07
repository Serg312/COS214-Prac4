#ifndef FRAGILEDECORATOR_H
#define FRAGILEDECORATOR_H

#include "Decorator.h"
#include "WorkComponent.h"

// Adds a fragile state to the component
// So every component gets the fragile tag added to its status 
// Its time is also increased by 10%

class FragileDecorator : public Decorator {
public:
    FragileDecorator(WorkComponent* wrappedComponent) 
        : Decorator(wrappedComponent) {
    }
    
    // add fragile to its status so that we know and can see it
    std::string getStatus() const override;

    // duration gets increased by 10%
    int estimateDuration() const override;
    
};

#endif