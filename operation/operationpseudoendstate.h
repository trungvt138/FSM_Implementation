//
// Created by trung on 07/06/2024.
//

#ifndef OPERATIONPSEUDOENDSTATE_H
#define OPERATIONPSEUDOENDSTATE_H

#include "operationbasestate.h"
#include <iostream>

#include "operationbasestate.h"

class OperationPseudoEndState : public OperationBaseState {
public:
    bool isPseudoEndState() override {return true;};
    void showState() override {std::cout << "State: Operation End State" << std::endl;};
};
#endif //OPERATIONPSEUDOENDSTATE_H
