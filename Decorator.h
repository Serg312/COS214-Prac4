#ifndef DECORATOR_H
#define DECORATOR_H

#include <vector>

#include "WorkComponent.h"

using namespace std;

class Decorator : public WorkComponent {
    protected:
    WorkComponent* component;

    public:
    Decorator(WorkComponent* component) 
        : WorkComponent(component->getName()), component(component) {
    }

    virtual ~Decorator() = default;

};

#endif