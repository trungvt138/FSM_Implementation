//
// Created by trung on 07/06/2024.
//

#include "wsident.h"

#include <iostream>

#include "wssort.h"

void WSIdent::entry() {
    action->enteredWSIdent();
}

TriggerProcessingState WSIdent::interruptAtHeightSensor() {
    std::cout << "WSIdent::interruptAtHeightSensor called" << std::endl;
    leavingState();
    new(this) WSSort;
    enterByDefaultEntryPoint();
    return TriggerProcessingState::consumed;
}

void WSIdent::showState() {
    std::cout << "  Operation State: WSIdent" << std::endl;
}

