#include "LeafOnlyIterator.h"
#include "WorkComponent.h"

LeafOnlyIterator::LeafOnlyIterator(WorkComponent* root) : root(root) {}

LeafOnlyIterator::~LeafOnlyIterator() {}

void LeafOnlyIterator::first() 
{
    while(!traversalStack.empty()){
        traversalStack.pop();
    }
    if(root != nullptr){
        traversalStack.push(root);
        findNextLeaf();
    }
}

void LeafOnlyIterator::next() 
{
    if (isDone()) return;
    
    traversalStack.pop();
    findNextLeaf();
}

bool LeafOnlyIterator::isDone() const 
{
    return traversalStack.empty();
}

WorkComponent* LeafOnlyIterator::currentItem() const 
{
    if (isDone()) return nullptr;
    return traversalStack.top();
}

void LeafOnlyIterator::findNextLeaf() 
{
    while (!traversalStack.empty()) 
    {
        WorkComponent* current = traversalStack.top();
        if (current->getChildCount() == 0) 
        {
            break; 
        }
        
        traversalStack.pop();
        for (int i = current->getChildCount() - 1; i >= 0; --i) 
        {
            traversalStack.push(current->getChild(i));
        }
    }
}
