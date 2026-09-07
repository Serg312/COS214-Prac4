#ifndef OPERATIONSTATE_H
#define OPERATIONSTATE_H

#include <string>

class Operation;

class OperationState 
{
    public:
        virtual ~OperationState() {}
        virtual void startProgress(Operation* op) = 0;
        virtual void finishTask(Operation* op) = 0;
        virtual std::string getStatus() const = 0;
        virtual int estimateDuration(int baseDuration) const = 0;
};

#endif
