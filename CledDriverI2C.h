#ifndef CLEDDRIVERI2C_H
#define CLEDDRIVERI2C_H

#include "CledDriverAbstract.h"

class CledDriverI2C: public CledDriverAbstract
{
public:
    CledDriverI2C();
    void write() override;
};

#endif // LEDDRIVERI2C_H
