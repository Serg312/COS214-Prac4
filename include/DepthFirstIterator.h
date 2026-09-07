#ifndef DEPTHFIRSTITERATOR_H
#define DEPTHFIRSTITERATOR_H

#include "WorkIterator.h"
#include <stack>

class WorkComponent;

class DepthFirstIterator : public WorkIterator 
{
    public:
        DepthFirstIterator(WorkComponent* root);
        virtual ~DepthFirstIterator();
        void first() override;
        void next() override;
        bool isDone() const override;
        WorkComponent* currentItem() const override;
    private:
        WorkComponent* root;
        std::stack<WorkComponent*> traversalStack;
};

#endif
