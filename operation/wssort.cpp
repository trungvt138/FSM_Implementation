//
// Created by trung on 07/06/2024.
//

#include "wssort.h"

#include <iostream>
#include <ostream>

void WSSort::entry() {
    action->enteredWSSort();
}

TriggerProcessingState WSSort::interruptAtSort() {
    std::cout << "WSSort::interruptAtSort called" << std::endl;
    leavingState();
    new
}
