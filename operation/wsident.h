//
// Created by trung on 07/06/2024.
//

#ifndef WSIDENT_H
#define WSIDENT_H

#include "operationbasestate.h"

class WSIdent : public OperationBaseState {
public:
    void entry() override;

    TriggerProcessingState interruptAtHeightSensor() override;

    void showState() override;
};

#endif //WSIDENT_H
