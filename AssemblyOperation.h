#ifndef ASSEMBLYOPERATION_H
#define ASSEMBLYOPERATION_H

#include "Operation.h"

//Concrete Leaf: step to connect parts together
//LEVEL 3 (Leaf)
//Falls under SuspensionSubGroup

class AssemblyOperation : public Operation 
{
    public:
        AssemblyOperation(const std::string& name, int duration);
        virtual ~AssemblyOperation();
        std::string getStatus() const override;
        int estimateDuration() const override;
};

#endif