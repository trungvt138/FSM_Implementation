//
// Created by trung on 05/06/2024.
//

#include "opstart.h"

#include <iostream>

#include "opident.h"

void OPStart::entry() {
    action->enteredOPStart();
}

TriggerProcessingState OPStart::interruptAtHeightSensor() {
    std::cout << "OPIdle::interruptAtHeightSensor called" << std::endl;
    leavingState();
    new(this) OPIdent;
    enterByDefaultEntryPoint();
    return TriggerProcessingState::consumed;
}

void OPStart::showState() {
    std::cout << "  OP-State: Start" << std::endl;
}