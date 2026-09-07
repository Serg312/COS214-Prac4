#ifndef ELECTRICALASSEMBLY_H
#define ELECTRICALASSEMBLY_H

#include "SubAssembly.h"

//Concrete Composite: groups operations/sub-groups related to wiring and circuitry
//LEVEL 1 OF TREE (Composite)

class ElectricalAssembly : public SubAssembly 
{
    public:
        ElectricalAssembly(const std::string& name);
        virtual ~ElectricalAssembly();
        std::string getStatus() const override;
        int estimateDuration() const override;
};

#endif