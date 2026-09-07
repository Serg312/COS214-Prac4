#ifndef WORKITERATOR_H
#define WORKITERATOR_H

class WorkComponent;

class WorkIterator 
{
    public:
        virtual ~WorkIterator() {}
        virtual void first() = 0;
        virtual void next() = 0;
        virtual bool isDone() const = 0;
        virtual WorkComponent* currentItem() const = 0;
};

#endif
