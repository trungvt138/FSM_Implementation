//
// Created by trung on 31/05/2024.
//

#ifndef ACTIONS_H
#define ACTIONS_H



class Actions {
public:
    virtual ~Actions();
    virtual void greenOn();
    virtual void greenOff();
    virtual void motorOn();
    virtual void motorSlowOn();
    virtual void motorSlowOff();

    virtual void enteredInitial();
    virtual void enteredOperation();
    virtual void enteredOPIdle();
    virtual void enteredOPStart();
    virtual void enteredOPIdent();
    virtual void enteredOPSort();
};



#endif //ACTIONS_H
