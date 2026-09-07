#include "WorkComponent.h"
#include "DepthFirstIterator.h"
#include "LeafOnlyIterator.h"

//Default: leaves have no children (add + remove have no implementation)

WorkComponent::WorkComponent(const std::string& name) : name(name) {}

WorkComponent::~WorkComponent() {}

void WorkComponent::add(WorkComponent*) {}

void WorkComponent::remove(WorkComponent*) {}

WorkComponent* WorkComponent::getChild(int) const 
{
    return nullptr;
}

int WorkComponent::getChildCount() const 
{
    return 0; 
}

std::string WorkComponent::getName() const 
{
    return name;
}

WorkIterator* WorkComponent::createIterator() 
{
    return new DepthFirstIterator(this);
}

WorkIterator* WorkComponent::createLeafIterator() 
{
    return new LeafOnlyIterator(this);
}