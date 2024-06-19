//
// Created by trung on 01/06/2024.
//

#ifndef OPERATION_H
#define OPERATION_H
#include "basestate.h"


class Operation : public BaseState {
public:
    void enterByDefaultEntryPoint() override;

    void leavingState() override;

    void entry() override;
    void exit() override;

    void reset() override;
    void interruptAtStart() override;
    void interruptAtHeightSensor() override;
    void interruptAtSort() override;
    void interruptAtSlide() override;
    void interruptAtEnd() override;

    void handleDefaultExit(const TriggerProcessingState &handled) override;

    void showState() override;
};

#endif //OPERATION_H
