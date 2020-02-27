#ifndef USERPAGE_H
#define USERPAGE_H

#include <QWidget>

namespace Ui {
class UserPage;
}
class MainWindow;

class UserPage : public QWidget
{
    Q_OBJECT
public:
    explicit UserPage(QWidget *parent = nullptr, MainWindow *main_window = nullptr);

private:
    Ui::UserPage *ui;
    MainWindow *main_window;
};

#endif // USERPAGE_H
