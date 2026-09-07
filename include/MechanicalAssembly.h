#ifndef MECHANICALASSEMBLY_H
#define MECHANICALASSEMBLY_H

#include "SubAssembly.h"

//Concrete Composite: groups operations/sub-groups related to mechanical build (e.g. chassis, frame, suspension)
//LEVEL 1 OF TREE (Composite)

class MechanicalAssembly : public SubAssembly 
{
    public:
        MechanicalAssembly(const std::string& name);
        virtual ~MechanicalAssembly();
        std::string getStatus() const override;
        int estimateDuration() const override;
};

#endif