#ifndef PAINTANDFINISHASSEMBLY_H
#define PAINTANDFINISHASSEMBLY_H

#include "SubAssembly.h"

//Concrete Composite: groups finishing-stage operations/sub-groups, and has a drying time
//LEVEL 1 OF TREE (Composite)

class PaintAndFinishAssembly : public SubAssembly 
{
    public:
        PaintAndFinishAssembly(const std::string& name, int dryTime);
        virtual ~PaintAndFinishAssembly();
        std::string getStatus() const override;
        int estimateDuration() const override;
    private:
        int dryTime;
};

#endif