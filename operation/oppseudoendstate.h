//
// Created by trung on 07/06/2024.
//

#ifndef OPPSEUDOENDSTATE_H
#define OPPSEUDOENDSTATE_H

#include "opbasestate.h"
#include <iostream>

#include "opbasestate.h"

class OPPseudoEndState : public OPBaseState {
public:
    bool isPseudoEndState() override {return true;};
    void showState() override {std::cout << "State: OP End State" << std::endl;};
};
#endif //OPPSEUDOENDSTATE_H
