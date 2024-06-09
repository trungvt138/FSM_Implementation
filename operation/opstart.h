//
// Created by trung on 05/06/2024.
//

#ifndef OPATSTARTSTATE_H
#define OPATSTARTSTATE_H
#include "opbasestate.h"


class OPStart : public OPBaseState {
public:
    void entry() override;
    TriggerProcessingState interruptAtHeightSensor() override;
    void showState() override;
};



#endif //OPATSTARTSTATE_H
