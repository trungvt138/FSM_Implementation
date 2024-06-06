//
// Created by trung on 31/05/2024.
//

#include "context.h"

#include "rootfsm/pseudostartstate.h"

Context::Context(Actions *shared_action) : action(shared_action) {
    state = new PseudoStartState();
    state->initOperationStateMachines();

    // all state pointer should be initialised now
    state->setData(&data);
    state->setAction(shared_action);

    // ready to go ...
    state->enterViaPseudoStart();  // Start state machine with initial transition
}

Context::~Context() {
    delete state;
}

// forward all events
void Context::start() {
    state->start();
}
void Context::reset() {
    state->reset();
}
void Context::interruptAtStart() {
    state->interruptAtStart();
}
void Context::interruptAtHeightSensor() {
    state->interruptAtHeightSensor();
}
void Context::interruptAtSort() {
    state->interruptAtSort();
}
void Context::interruptAtSlide() {
    state->interruptAtSlide();
}
void Context::interruptAtEnd() {
    state->interruptAtEnd();
}
void Context::showState() {
    state->showState();
}


