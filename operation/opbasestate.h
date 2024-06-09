//
// Created by trung on 31/05/2024.
//

#ifndef OPBASESTATE_H
#define OPBASESTATE_H

#include "../contextdata.h"
#include "../actions.h"
#include "../subcommon/triggerprocessingstate.h"

class OPBaseState {
protected:
    ContextData *data;
    Actions *action;
public:
    virtual ~OPBaseState() = default;

    virtual void initOPStateMachines(){};
    void setData(ContextData *data){this->data = data;};
    void setAction(Actions *action){this->action = action;};

    virtual bool isPseudoStartState(){return false;};
    virtual bool isPseudoEndState(){return false;};

    virtual void enterByDefaultEntryPoint(){entry();};

    virtual void leavingState(){exit();};

    virtual void enterViaPseudoStart();

    virtual void entry(){};
    virtual void exit(){};

    virtual TriggerProcessingState interruptAtStart() {return TriggerProcessingState::pending;};
    virtual TriggerProcessingState interruptAtHeightSensor() {return TriggerProcessingState::pending;};
    virtual TriggerProcessingState interruptAtSort() {return TriggerProcessingState::pending;};
    virtual TriggerProcessingState interruptAtSlide() {return TriggerProcessingState::pending;};
    virtual TriggerProcessingState interruptAtEnd() {return TriggerProcessingState::pending;};

    virtual void showState() {};
};



#endif //OPBASESTATE_H
