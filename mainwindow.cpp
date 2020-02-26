#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "startpage.h"
#include <QPushButton>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    start = new StartPage(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
