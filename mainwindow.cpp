#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "startpage.h"
#include "userpage.h"
#include <QPushButton>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    start = new StartPage(this, this);
    user_page = new UserPage(this, this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
