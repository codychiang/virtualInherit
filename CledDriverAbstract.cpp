#include "CledDriverAbstract.h"
#include <QDebug>

CledDriverAbstract::CledDriverAbstract()
{

}

void CledDriverAbstract::write()
{
    qDebug("%s", __func__);
}
