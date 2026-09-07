#include "DepthFirstIterator.h"
#include "WorkComponent.h"

DepthFirstIterator::DepthFirstIterator(WorkComponent* root) : root(root) {}

DepthFirstIterator::~DepthFirstIterator() {}

void DepthFirstIterator::first() 
{
    while (!traversalStack.empty()) 
    {
        traversalStack.pop();
    }
    if (root != nullptr) 
    {
        traversalStack.push(root);
    }
}

void DepthFirstIterator::next() 
{
    if (isDone()) return;
    
    WorkComponent* current = traversalStack.top();
    traversalStack.pop();
    
    for (int i = current->getChildCount() - 1; i >= 0; --i) 
    {
        traversalStack.push(current->getChild(i));
    }
}

bool DepthFirstIterator::isDone() const 
{
    return traversalStack.empty();
}

WorkComponent* DepthFirstIterator::currentItem() const 
{
    if (isDone()) return nullptr;
    return traversalStack.top();
}
