//
// Created by trung on 31/05/2024.
//

#include "initial.h"

#include <iostream>

#include "operation.h"

void Initial::entry() {
    action->enteredInitial();
}

void Initial::start() {
    std::cout << "Initial::start called" << std::endl;
    leavingState();
    // Transition action
    new(this) Operation;
    enterByDefaultEntryPoint();
}

void Initial::showState() {
    std::cout << "State: Initial" << std::endl;
}