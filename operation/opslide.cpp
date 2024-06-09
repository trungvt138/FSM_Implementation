//
// Created by Trung Dam on 09.06.24.
//

#include "opslide.h"

#include <iostream>

void OPSlide::entry() {
    action->enteredOPSort();
}

void OPSlide::showState() {
    std::cout << "  OP State: Sort" << std::endl;
}