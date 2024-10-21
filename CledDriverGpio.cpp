#include "CledDriverGpio.h"
#include <QDebug>


CledDriverGpio::CledDriverGpio()
{

}

//override
void CledDriverGpio::write()
{
    qDebug("%s", __func__);
}
