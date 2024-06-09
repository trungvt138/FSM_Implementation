//
// Created by trung on 07/06/2024.
//

#ifndef OPIDENT_H
#define OPIDENT_H

#include "opbasestate.h"

class OPIdent : public OPBaseState {
public:
    void entry() override;

    TriggerProcessingState interruptAtSort() override;

    void showState() override;
};

#endif //OPIDENT_H
