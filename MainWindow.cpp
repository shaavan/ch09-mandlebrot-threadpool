#include "MainWindow.h"
#include "ui_MainWindow.h"

#include "MandelbrotWidget.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , mMandlebrotWidget(new MandelbrotWidget(this))
{
    ui->setupUi(this);
    setCentralWidget(mMandlebrotWidget);
}

MainWindow::~MainWindow()
{
    delete ui;
}

