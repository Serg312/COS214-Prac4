#ifndef WORKCOMPONENT_H
#define WORKCOMPONENT_H

#include <string>

//Abstract base of Composite pattern, also wrapped by Decorators

class WorkComponent 
{
    public:
        WorkComponent(const std::string& name);
        virtual ~WorkComponent();
        virtual void add(WorkComponent* child);
        virtual void remove(WorkComponent* child);
        virtual WorkComponent* getChild(int index) const;
        virtual int getChildCount() const;
        virtual std::string getName() const;
        virtual std::string getStatus() const = 0;
        virtual int estimateDuration() const = 0;
        virtual class WorkIterator* createIterator();
        virtual class WorkIterator* createLeafIterator();
    protected:
        std::string name;
}; 

#endif