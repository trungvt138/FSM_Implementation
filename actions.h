//
// Created by trung on 31/05/2024.
//

#ifndef ACTIONS_H
#define ACTIONS_H



class Actions {
public:
    virtual ~Actions();
    virtual void on();
    virtual void off();
    virtual void shutdown();
    virtual void unlock();

    virtual void enteredInitial();
    virtual void enteredOperation();
    virtual void enteredOPIdle();
    virtual void enteredOPStart();
    virtual void enteredOPIdent();
    virtual void enteredOPSort();
};



#endif //ACTIONS_H
