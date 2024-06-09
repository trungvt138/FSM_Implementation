//
// Created by trung on 01/06/2024.
//

#ifndef OPPSEUDOSTARTSTATE_H
#define OPPSEUDOSTARTSTATE_H
#include <iostream>
#include "opbasestate.h"

class OPPseudoStartState : public OPBaseState {
public:
    bool isPseudoStartState() override {return true;};

    void showState() override {
        std::cout << "State : OP Pseudo Start State" << std::endl;
    }
};

#endif //OPPSEUDOSTARTSTATE_H
