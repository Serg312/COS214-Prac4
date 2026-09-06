#ifndef SUSPENSIONSUBGROUP_H
#define SUSPENSIONSUBGROUP_H

#include "SubAssembly.h"

//Concrete Composite: grouping of leaf operations involved in the suspension
//LEVEL 2 OF TREE (Composite)
//Falls under MechanicalAssembly

class SuspensionSubGroup : public SubAssembly 
{
    public:
        SuspensionSubGroup(const std::string& name);
        virtual ~SuspensionSubGroup();
        std::string getStatus() const override;
        int estimateDuration() const override;
};

#endif