#include "appmainwindow.h"
#include "ui_appmainwindow.h"

AppMainWindow::AppMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AppMainWindow)
{
    ui->setupUi(this);
    app = new AppView();
}

AppMainWindow::~AppMainWindow()
{
    delete ui;
}
