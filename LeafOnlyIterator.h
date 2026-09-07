#ifndef LEAFONLYITERATOR_H
#define LEAFONLYITERATOR_H

#include "WorkIterator.h"
#include <stack>

class WorkComponent;

class LeafOnlyIterator : public WorkIterator 
{
    public:
        LeafOnlyIterator(WorkComponent* root);
        virtual ~LeafOnlyIterator();
        void first() override;
        void next() override;
        bool isDone() const override;
        WorkComponent* currentItem() const override;
    private:
        WorkComponent* root;
        std::stack<WorkComponent*> traversalStack;
        void findNextLeaf();
};

#endif
