#include "SubAssembly.h"

SubAssembly::SubAssembly(const std::string& name) : WorkComponent(name) {}

SubAssembly::~SubAssembly() 
{
    for (WorkComponent* child : children) 
    {
        delete child;
    }
    children.clear();
}

void SubAssembly::add(WorkComponent* child) 
{
    if (child != nullptr) 
    {
        children.push_back(child);
    }
}

void SubAssembly::remove(WorkComponent* child) 
{
    //Note: detach only, does not delete. If the item is being moved elsewhere, ownership transfers to whichever composite it's added to 
    //If wanting to remove and delete, destructor needs to be called after remove()

    for (std::vector<WorkComponent*>::iterator it = children.begin(); it != children.end(); ++it) 
    {
        if (*it == child) 
        {
            children.erase(it);
            break; 
        }
    }
}

WorkComponent* SubAssembly::getChild(int index) const 
{
    if (index < 0 || index >= static_cast<int>(children.size())) 
    {
        return nullptr;
    }
    return children[index];
}

int SubAssembly::getChildCount() const 
{
    return static_cast<int>(children.size());
}

std::string SubAssembly::getStatus() const 
{
    if (children.empty()) 
    {
        return "Empty";
    }
    for (WorkComponent* child : children) 
    {
        if (child->getStatus() != "Complete") 
        {
            return "In Progress";
        }
    }
    return "Complete";
}

int SubAssembly::estimateDuration() const 
{
    int total = 0;
    for (WorkComponent* child : children) 
    {
        total += child->estimateDuration();
    }
    return total;
}