//
// Created by trung on 31/05/2024.
//

#include "basestate.h"

#include "initial.h"
#include "../working/workingpseudostartstate.h"

void BaseState::initWorkingStateMachines() {
    workingstatemachine = new WorkingPseudoStartState();
    workingstatemachine->initWorkingStateMachines();
}

void BaseState::setData(ContextData *data){
    this->data = data;
    workingstatemachine->setData(data);
}

void BaseState::setAction(Actions *action){
    this->action = action;
    workingstatemachine->setAction(action);
}

void BaseState::enterViaPseudoStart(){
    // go from pseudo-start state to first state
    std::cout << "Initial transition taken" << std::endl;
    data->clearErrorCounter();    // init-transition action
    new(this) Initial;
    enterByDefaultEntryPoint();   // Entry of initial state
}