#ifndef FRAMESUBGROUP_H
#define FRAMESUBGROUP_H

#include "SubAssembly.h"

//Concrete Composite: grouping of leaf operations involved in a frame
//LEVEL 2 OF TREE (Composite)
//Falls under MechanicalAssembly

class FrameSubGroup : public SubAssembly 
{
    public:
        FrameSubGroup(const std::string& name);
        virtual ~FrameSubGroup();
        std::string getStatus() const override;
        int estimateDuration() const override;
};

#endif