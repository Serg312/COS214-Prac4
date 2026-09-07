#include "ProductionOrder.h"

//Since ProductionOrder is level 0 (root), calling functions like estimateDuration() will apply to the whole tree, working recursively

ProductionOrder::ProductionOrder(const std::string& name, const std::string& orderNumber) : SubAssembly(name), orderNumber(orderNumber) {}

ProductionOrder::~ProductionOrder() {}      //Base class destructor is called, nothing needed here

std::string ProductionOrder::getStatus() const 
{
    return SubAssembly::getStatus();
}

int ProductionOrder::estimateDuration() const 
{
    return SubAssembly::estimateDuration();
}

std::string ProductionOrder::getOrderNumber() const 
{
    return orderNumber;
}