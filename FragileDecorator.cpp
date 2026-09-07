#include "FragileDecorator.h";

std::string FragileDecorator::getStatus() const {
    return "[URGENT] " + component->getStatus();
}

int FragileDecorator::estimateDuration() const {
    // priority order so will be done faster
    return component->estimateDuration() * 0.9;
}