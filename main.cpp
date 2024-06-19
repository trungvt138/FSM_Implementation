//
// Created by trung on 31/05/2024.
//

#include <iostream>

#include "actions.h"
#include "context.h"
#include <cstdlib>

int main(int argc, char** argv) {
    Actions *action = new Actions();
    Context fsmA(action);
    fsmA.start();
    fsmA.showState();
    fsmA.interruptAtStart();
    fsmA.showState();
    fsmA.interruptAtHeightSensor();
    fsmA.interruptAtSort();
    fsmA.interruptAtSlide();
    fsmA.showState();
    fsmA.reset();
    fsmA.showState();
}
