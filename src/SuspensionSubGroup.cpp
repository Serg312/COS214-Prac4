#include "SuspensionSubGroup.h"

SuspensionSubGroup::SuspensionSubGroup(const std::string& name) : SubAssembly(name) {}

SuspensionSubGroup::~SuspensionSubGroup() {}        //Base class destructor is called, nothing needed here

std::string SuspensionSubGroup::getStatus() const 
{
    return SubAssembly::getStatus();
}

int SuspensionSubGroup::estimateDuration() const 
{
    return SubAssembly::estimateDuration();
}