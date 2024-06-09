//
// Created by trung on 07/06/2024.
//

#include "opident.h"

#include <iostream>

#include "opsort.h"

void OPIdent::entry() {
    action->enteredOPIdent();
}

TriggerProcessingState OPIdent::interruptAtSort() {
    std::cout << "OPIdent: interruptAtHeightSensor called" << std::endl;
    leavingState();
    new(this) OPSort;
    enterByDefaultEntryPoint();
    return TriggerProcessingState::consumed;
}

void OPIdent::showState() {
    std::cout << "  OP State: Ident" << std::endl;
}

