#include "FrameSubGroup.h"

FrameSubGroup::FrameSubGroup(const std::string& name) : SubAssembly(name) {}

FrameSubGroup::~FrameSubGroup() {}      //Base class destructor is called, nothing needed here     

std::string FrameSubGroup::getStatus() const 
{
    return SubAssembly::getStatus();
}

int FrameSubGroup::estimateDuration() const
{
    return SubAssembly::estimateDuration();
}