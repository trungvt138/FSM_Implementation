//
// Created by Trung Dam on 09.06.24.
//

#include "opslide.h"
#include "opidle.h"

#include <iostream>

void OPSlide::entry() {
    action->enteredOPSort();
}

TriggerProcessingState OPSlide::reset() {
    std::cout << "  OP Slide: reset called" << std::endl;
    leavingState();
    new(this) OPIdle;
    enterByDefaultEntryPoint();
    return TriggerProcessingState::consumed;
}

void OPSlide::showState() {
    std::cout << "  OP State: Slide" << std::endl;
}