#ifndef SUBASSEMBLY_H
#define SUBASSEMBLY_H

#include <vector>
#include "WorkComponent.h"

//Composite: may contain further SubAssemblies (nested groups) or Operations (leaves). Used at multiple levels of the tree

class SubAssembly : public WorkComponent 
{
    public:
        SubAssembly(const std::string& name);
        virtual ~SubAssembly();
        void add(WorkComponent* child) override;
        void remove(WorkComponent* child) override;
        WorkComponent* getChild(int index) const override;
        int getChildCount() const override;
        std::string getStatus() const override;
        int estimateDuration() const override;
    private:
        std::vector<WorkComponent*> children; 
};

#endif