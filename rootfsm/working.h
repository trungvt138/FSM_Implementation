//
// Created by trung on 01/06/2024.
//

#ifndef WORKING_H
#define WORKING_H
#include "basestate.h"


class Working : public BaseState {
public:
    void enterByDefaultEntryPoint() override;

    void leavingState() override;

    void entry() override;

    void reset() override;
    void interruptAtStart() override;
    void interruptAtHeightSensor() override;
    void interruptAtSort() override;
    void interruptAtSlide() override;
    void interruptAtEnd() override;

    void showState() override;
};

#endif //WORKING_H
