//
// Created by trung on 01/06/2024.
//

#ifndef OPERATIONPSEUDOSTARTSTATE_H
#define OPERATIONPSEUDOSTARTSTATE_H
#include <iostream>
#include "operationbasestate.h"

class OperationPseudoStartState : public OperationBaseState {
public:
    bool isPseudoStartState() override {return true;};

    void showState() override {
        std::cout << "State: Operation Pseudo Start State" << std::endl;
    }
};

#endif //OPERATIONPSEUDOSTARTSTATE_H
