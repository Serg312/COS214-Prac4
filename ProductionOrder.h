#ifndef PRODUCTIONORDER_H
#define PRODUCTIONORDER_H

#include "SubAssembly.h"

//Concrete Composite: sits at the root of the hierarchy
//LEVEL 0 OF TREE (Root)

class ProductionOrder : public SubAssembly 
{
    public:
        ProductionOrder(const std::string& name, const std::string& orderNumber);
        virtual ~ProductionOrder();
        std::string getStatus() const override;
        int estimateDuration() const override;
        std::string getOrderNumber() const;
    private:
        std::string orderNumber;
};

#endif