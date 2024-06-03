//
// Created by trung on 31/05/2024.
//

#ifndef INITIAL_H
#define INITIAL_H
#include "basestate.h"


class Initial : public BaseState {
public:
    void entry() override;

    void start() override;

    void showState() override;
};



#endif //INITIAL_H
