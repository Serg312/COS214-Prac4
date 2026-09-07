#ifndef PAINTINGOPERATION_H
#define PAINTINGOPERATION_H

#include "Operation.h"

//Concrete Leaf: paint application step
//LEVEL 3 (Leaf)
//Falls under FinishingSubGroup

class PaintingOperation : public Operation 
{
    public:
        PaintingOperation(const std::string& name, int duration);
        virtual ~PaintingOperation();
        std::string getStatus() const override;
        int estimateDuration() const override;
};

#endif