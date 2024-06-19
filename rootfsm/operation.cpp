//
// Created by trung on 01/06/2024.
//

#include "operation.h"
#include "initial.h"

#include <iostream>

void Operation::enterByDefaultEntryPoint() {
    entry();
    operationstatemachine->enterViaPseudoStart();
}

void Operation::leavingState() {
    operationstatemachine->leavingState();
    exit();
}

void Operation::entry() {
    action->greenOn();
    action->enteredOperation();
}

void Operation::exit() {
    action->greenOff();
}

void Operation::interruptAtStart() {
    std::cout << "Operation: interruptAtStart called" << std::endl;
    operationstatemachine->interruptAtStart();
}

void Operation::interruptAtHeightSensor() {
    std::cout << "Operation: interruptAtHeightSensor called" << std::endl;
    operationstatemachine->interruptAtHeightSensor();
}

void Operation::interruptAtSlide() {
    std::cout << "Operation: interruptAtSlide called" << std::endl;
    operationstatemachine->interruptAtSlide();
}

void Operation::interruptAtSort() {
    std::cout << "Operation: interruptAtSort called" << std::endl;
    operationstatemachine->interruptAtSort();
}

void Operation::reset() {
    std::cout << "Operation: reset called" << std::endl;
    operationstatemachine->reset();
}

void Operation::interruptAtEnd() {
    std::cout << "Operation: interruptAtEnd called" << std::endl;

    TriggerProcessingState processingState = operationstatemachine->interruptAtEnd();
    handleDefaultExit(processingState);
}

void Operation::handleDefaultExit(const TriggerProcessingState &processingState) {
    if (processingState == TriggerProcessingState::endstatereached) {
        operationstatemachine->exit();
        new(this) Initial;
        enterByDefaultEntryPoint();
    }
}

void Operation::showState() {
    std::cout << "State: Operation" << std::endl;
    operationstatemachine->showState();
}


