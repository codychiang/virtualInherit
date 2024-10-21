#include "CledDriverI2C.h"
#include <QDebug>

CledDriverI2C::CledDriverI2C()
{

}

//override
void CledDriverI2C::write()
{
    qDebug("%s", __func__);
}
