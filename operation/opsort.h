//
// Created by trung on 07/06/2024.
//

#ifndef OPSORT_H
#define OPSORT_H
#include "opbasestate.h"


class OPSort : public OPBaseState {
public:
    void entry() override;
    TriggerProcessingState interruptAtEnd() override;
    TriggerProcessingState interruptAtSlide() override;
    void showState() override;
};

#endif //OPSORT_H
