#ifndef STARTPAGE_H
#define STARTPAGE_H

#include <QWidget>

namespace Ui {
class StartPage;
}
class AccountManager;

class StartPage : public QWidget
{
    Q_OBJECT
public:
    explicit StartPage(QWidget *parent = nullptr);

private:
    Ui::StartPage *ui;
    AccountManager *account_man;
    QString account_name;
    bool is_password = false;

private slots:
    void slotOnAcceptClicked();
    void slotOnBackClicked();
};

#endif // STARTPAGE_H
