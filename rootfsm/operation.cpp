//
// Created by trung on 01/06/2024.
//

#include "operation.h"

void Operation::enterByDefaultEntryPoint() {
    entry();
    operationstatemachine->enterViaPseudoStart();
}

void Operation::leavingState() {
    operationstatemachine->leavingState();
    exit();
}

void Operation::entry() {
    action->enteredOperation();
}