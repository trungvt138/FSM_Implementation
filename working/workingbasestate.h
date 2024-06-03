//
// Created by trung on 31/05/2024.
//

#ifndef SUBBASESTATE_H
#define SUBBASESTATE_H

#include "../contextdata.h"
#include "../actions.h"

class WorkingBaseState {
protected:
    ContextData *data{};
    Actions *action{};
public:
    virtual ~WorkingBaseState() = default;

    virtual void initWorkingStateMachines(){};
    void setData(ContextData *data){this->data = data;};
    void setAction(Actions *action){this->action = action;};

    virtual bool isPseudoStartState(){return false;};
    virtual bool isPseudoEndState(){return false;};

    virtual void enterByDefaultEntryPoint(){entry();};

    virtual void leavingState(){exit();};

    virtual void enterViaPseudoStart();

    virtual void entry(){};
    virtual void exit(){};

    virtual void showState() {};
};



#endif //SUBBASESTATE_H
