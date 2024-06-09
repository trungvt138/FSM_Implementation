//
// Created by trung on 31/05/2024.
//

#ifndef OPIDLE_H
#define OPIDLE_H
#include "opbasestate.h"


class OPIdle : public OPBaseState {
public:
    void entry() override;

    TriggerProcessingState interruptAtStart() override;

    void showState() override;
};

#endif //OPIDLE_H
