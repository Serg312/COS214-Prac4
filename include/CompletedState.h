#ifndef COMPLETEDSTATE_H
#define COMPLETEDSTATE_H

#include "OperationState.h"

class CompletedState : public OperationState 
{
    public:
        void startProgress(Operation* op) override;
        void finishTask(Operation* op) override;
        std::string getStatus() const override;
        int estimateDuration(int baseDuration) const override;
};

#endif
