#ifndef INSPECTIONOPERATION_H
#define INSPECTIONOPERATION_H

#include "Operation.h"

//Concrete Leaf: QA/inspection checkpoint
//LEVEL 3 (Leaf)
//Falls under all Sub-groups (Frame, Suspension and PaintAndFinish)

class InspectionOperation : public Operation 
{
    public:
        InspectionOperation(const std::string& name, int duration);
        virtual ~InspectionOperation();
        std::string getStatus() const override;
        int estimateDuration() const override;
};

#endif