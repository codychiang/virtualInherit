#ifndef CLEDDRIVERGPIO_H
#define CLEDDRIVERGPIO_H

#include "CledDriverAbstract.h"

class CledDriverGpio: public CledDriverAbstract
{
public:
    CledDriverGpio();
    void write() override;
};

#endif // LEDDRIVERGPIO_H
