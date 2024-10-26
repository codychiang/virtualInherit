#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "CledDriverGpio.h"
#include "CledDriverI2C.h"
#include "CledControl.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    CledDriverGpio ledDriverGpio;
    CledDriverGpio ledDriverI2C;
    CledControl ledControl_1(&ledDriverGpio);
    CledControl ledControl_2(&ledDriverI2C);
    ledControl_1.run();
    ledControl_2.run();


}

MainWindow::~MainWindow()
{
    delete ui;
}

