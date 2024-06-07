//
// Created by trung on 07/06/2024.
//

#ifndef WSSORT_H
#define WSSORT_H
#include "operationbasestate.h"


class WSSort : public OperationBaseState {
public:
    void entry() override;

    TriggerProcessingState interruptAtSort() override;
    TriggerProcessingState interruptAtEnd() override;

    void showState() override;
};

#endif //WSSORT_H
