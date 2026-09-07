#include "PriorityDecorator.h";

std::string PriorityDecorator::getStatus() const {
    return "[URGENT] " + component->getStatus();
}

int PriorityDecorator::estimateDuration() const {
    // priority order so will be done faster
    return component->estimateDuration() * 0.9;
}