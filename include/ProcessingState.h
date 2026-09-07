#ifndef PROCESSINGSTATE_H
#define PROCESSINGSTATE_H

#include "OperationState.h"

class ProcessingState : public OperationState 
{
    public:
        void startProgress(Operation* op) override;
        void finishTask(Operation* op) override;
        std::string getStatus() const override;
        int estimateDuration(int baseDuration) const override;
};

#endif
