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
    CledControl ledControl(&ledDriverGpio);
    ledControl.run();


}

MainWindow::~MainWindow()
{
    delete ui;
}

