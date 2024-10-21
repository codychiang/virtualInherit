#ifndef CLEDCONTROL_H
#define CLEDCONTROL_H

class CledDriverI2C;
class CledDriverGpio;

class CledControl
{
public:
    CledControl();
    CledControl(CledDriverI2C *ledDriverI2C, CledDriverGpio *ledDriverGpio);
    void run();
private:
    CledDriverI2C *m_ledDriverI2C;
    CledDriverGpio *m_ledDriverGpio;
};

#endif // LEDCONTROL_H
