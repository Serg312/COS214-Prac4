#include "FragileDecorator.h"

std::string FragileDecorator::getStatus() const {
    return "[FRAGILE] " + component->getStatus();
}

int FragileDecorator::estimateDuration() const {
    // priority order so will be done faster
    return component->estimateDuration() * 1.1;
}