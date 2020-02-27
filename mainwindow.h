#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}
class StartPage;
class UserPage;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    // Access pages from here
    StartPage *start;
    UserPage *user_page;

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
