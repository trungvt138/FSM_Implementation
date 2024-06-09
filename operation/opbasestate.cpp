//
// Created by trung on 31/05/2024.
//

#include "opbasestate.h"

#include <iostream>

#include "opidle.h"

void OPBaseState::enterViaPseudoStart() {
    // entry to state machine
    std::cout << "OP Initial Trasition taken" << std::endl;
    new(this) OPIdle;
    enterByDefaultEntryPoint();
}


