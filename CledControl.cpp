#include "CledControl.h"
#include "CledDriverI2C.h"
#include "CledDriverGpio.h"

CledControl::CledControl()
{
    m_ledDriverI2C = nullptr;
    m_ledDriverGpio = nullptr;
}

CledControl::CledControl(CledDriverI2C *ledDriverI2C, CledDriverGpio *ledDriverGpio)
    : CledControl()
{
    m_ledDriverI2C = ledDriverI2C;
    m_ledDriverGpio = ledDriverGpio;
}

void CledControl::run()
{
    if(m_ledDriverI2C){
        m_ledDriverI2C->writeI2C();
    }

    if(m_ledDriverGpio){
        m_ledDriverGpio->writeGpio();
    }

}


