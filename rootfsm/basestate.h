//
// Created by trung on 31/05/2024.
//

#ifndef BASESTATE_H
#define BASESTATE_H
#include "../actions.h"
#include "../contextdata.h"
#include "../operation/opbasestate.h"


class BaseState {
protected:
    ContextData *data;
    Actions *action;
    OPBaseState *operationstatemachine;
public:
    virtual ~BaseState() {
        delete operationstatemachine;
    };

    virtual void initOperationStateMachines();
    void setData(ContextData *data);
    void setAction(Actions *action);

    virtual bool isPseudoStartState() {return false;};
    virtual bool isPseudoEndState() {return false;};

    virtual void enterByDefaultEntryPoint(){entry();};

    virtual void leavingState(){exit();};

    virtual void enterViaPseudoStart();

    virtual void handleDefaultExit(const TriggerProcessingState &handled) {};

    // entry/exit-actions
    virtual void entry(){};
    virtual void exit(){};

    // Trigger
    virtual void start() {};
    virtual void reset() {};
    virtual void interruptAtStart() {};
    virtual void interruptAtHeightSensor() {};
    virtual void interruptAtSort() {};
    virtual void interruptAtSlide() {};
    virtual void interruptAtEnd() {};

    virtual void showState() {};
};



#endif //BASESTATE_H
