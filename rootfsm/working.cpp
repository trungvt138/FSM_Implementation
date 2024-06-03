//
// Created by trung on 01/06/2024.
//

#include "working.h"

void Working::enterByDefaultEntryPoint() {
    entry();
    workingstatemachine->enterViaPseudoStart();
}

void Working::leavingState() {
    workingstatemachine->leavingState();
    exit();
}

void Working::entry() {
    action->enteredWorking();
}