//
// Created by trung on 01/06/2024.
//

#ifndef WORKINGPSEUDOSTARTSTATE_H
#define WORKINGPSEUDOSTARTSTATE_H
#include <iostream>
#include "workingbasestate.h"

class WorkingPseudoStartState : public WorkingBaseState {
public:
    bool isPseudoStartState() override {return true;};

    void showState() override {
        std::cout << "State: Working Pseudo Start State" << std::endl;
    }
};

#endif //WORKINGPSEUDOSTARTSTATE_H
