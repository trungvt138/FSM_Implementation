//
// Created by Trung Dam on 09.06.24.
//

#ifndef OPSLIDE_H
#define OPSLIDE_H
#include "opbasestate.h"


class OPSlide : public OPBaseState{
public:
    void entry() override;
    void showState() override;
};



#endif //OPSLIDE_H
