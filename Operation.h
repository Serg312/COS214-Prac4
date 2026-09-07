#ifndef OPERATION_H
#define OPERATION_H

#include "WorkComponent.h"

//Concrete Leaf: single manufacturing step. No children, getChild returns nullptr via base default

class OperationState;

class Operation : public WorkComponent 
{
    public:
        Operation(const std::string& name, int duration);
        virtual ~Operation();
        std::string getStatus() const override;
        int estimateDuration() const override;

        void startProgress();
        void finishTask();
        void setState(OperationState* newState);
    private:
        int duration;
        OperationState* state;
};

#endif