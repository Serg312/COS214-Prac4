#ifndef WELDINGOPERATION_H
#define WELDINGOPERATION_H

#include "Operation.h"

//Concrete Leaf: a welding step. Has a minimum duration
//LEVEL 3 OF TREE (Leaf)
//Falls under FrameSubGroup

class WeldingOperation : public Operation 
{
    public:
        WeldingOperation(const std::string& name, int duration);
        virtual ~WeldingOperation();
        std::string getStatus() const override;
        int estimateDuration() const override;
    private:
        int minDuration;
};

#endif