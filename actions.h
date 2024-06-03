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
    virtual void enteredWorking();
    virtual void enteredIdle();
    virtual void enteredWSStart();
    virtual void enteredWSIdent();
    virtual void enteredWSSort();
};



#endif //ACTIONS_H
