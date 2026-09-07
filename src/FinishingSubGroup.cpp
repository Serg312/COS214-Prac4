#include "FinishingSubGroup.h"

FinishingSubGroup::FinishingSubGroup(const std::string& name) : SubAssembly(name) {}

FinishingSubGroup::~FinishingSubGroup() {}      //Base class destructor is called, nothing needed here

std::string FinishingSubGroup::getStatus() const 
{
    return SubAssembly::getStatus();
}

int FinishingSubGroup::estimateDuration() const 
{
    return SubAssembly::estimateDuration();
}