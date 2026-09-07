#ifndef QUEUEDSTATE_H
#define QUEUEDSTATE_H

#include "OperationState.h"

class QueuedState : public OperationState 
{
    public:
        void startProgress(Operation* op) override;
        void finishTask(Operation* op) override;
        std::string getStatus() const override;
        int estimateDuration(int baseDuration) const override;
};

#endif
