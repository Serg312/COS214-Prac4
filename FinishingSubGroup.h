#ifndef FINISHINGSUBGROUP_H
#define FINISHINGSUBGROUP_H

#include "SubAssembly.h"

//Concrete Composite: grouping of leaf operations involved in the suspension
//LEVEL 2 OF TREE (Composite)
//Falls under PaintAndFinishAssembly

class FinishingSubGroup : public SubAssembly 
{
    public:
        FinishingSubGroup(const std::string& name);
        virtual ~FinishingSubGroup();
        std::string getStatus() const override;
        int estimateDuration() const override;
};

#endif