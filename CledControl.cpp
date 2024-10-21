#include "CledControl.h"
#include "CledDriverI2C.h"
#include "CledDriverGpio.h"

CledControl::CledControl()
{
    m_ledDriverAbstract = nullptr;
}

CledControl::CledControl(CledDriverAbstract *ledDriverAbstract)
    : CledControl()
{
    m_ledDriverAbstract = ledDriverAbstract;
}

void CledControl::run()
{
    if(m_ledDriverAbstract){
        m_ledDriverAbstract->write();
    }
}


