//
// Created by trung on 31/05/2024.
//

#ifndef CONTEXT_H
#define CONTEXT_H
#include "actions.h"
#include "contextdata.h"
#include "rootfsm/basestate.h"


class Context {
private:
    BaseState *state; // current state of state machine
    Actions *action;
    ContextData data;
public:
    Context(Actions *shared_action);
    virtual ~Context();

    void start();
    void reset();
    void interruptAtStart();
    void interruptAtHeightSensor();
    void interruptAtSort();
    void interruptAtSlide();
    void interruptAtEnd();

    void showState();
};



#endif //CONTEXT_H
