#ifndef CLEDCONTROL_H
#define CLEDCONTROL_H

class CledDriverAbstract;

class CledControl
{
public:
    CledControl();
    CledControl(CledDriverAbstract *ledDriverAbstract);
    void run();
private:
    CledDriverAbstract *m_ledDriverAbstract;
};

#endif // LEDCONTROL_H
