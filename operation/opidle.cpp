//
// Created by trung on 31/05/2024.
//

#include "opidle.h"

#include <iostream>

#include "opstart.h"

void OPIdle::entry() {
    action->enteredOPIdle();
}

TriggerProcessingState OPIdle::interruptAtStart() {
    std::cout << "OPIdle: interruptAtStart called" << std::endl;
    leavingState();

    new(this) OPStart;
    enterByDefaultEntryPoint();
    return TriggerProcessingState::consumed;
}

void OPIdle::showState() {
    std::cout << "  OP-State: Idle" << std::endl;
}


