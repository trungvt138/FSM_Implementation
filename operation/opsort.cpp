//
// Created by trung on 07/06/2024.
//

#include "opsort.h"

#include <iostream>
#include <ostream>

#include "oppseudoendstate.h"
#include "opslide.h"

void OPSort::entry() {
    action->enteredOPSort();
}

TriggerProcessingState OPSort::interruptAtSlide() {
    std::cout << "OPSort: interruptAtSlide called" << std::endl;
    leavingState();
    new(this) OPSlide;
    enterByDefaultEntryPoint();
    return TriggerProcessingState::consumed;
}


TriggerProcessingState OPSort::interruptAtEnd() {
    std::cout << "OPSort: interruptAtEnd called" << std::endl;
    leavingState();
    new(this) OPPseudoEndState;
    enterByDefaultEntryPoint();

    return TriggerProcessingState::endstatereached;
}


void OPSort::showState() {
    std::cout << "  OP State: Sort" << std::endl;
}


