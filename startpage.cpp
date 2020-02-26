#include "startpage.h"
#include "ui_startpage.h"
#include "accountmanager.h"

StartPage::StartPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::StartPage)
{
    ui->setupUi(this);
    QObject::connect(ui->button_accept, &QPushButton::clicked, this, &StartPage::slotOnAcceptClicked);
    QObject::connect(ui->button_back, &QPushButton::clicked, this, &StartPage::slotOnBackClicked);
    account_man = new AccountManager(this);
}

void StartPage::slotOnAcceptClicked()
{
    QString text = ui->textbox_enter->text();
    if (text.length() > 0) {
        if (!is_password) {
            account_name = text;
            ui->text_account->setText("Enter a password for the account:");
            ui->textbox_enter->setText("");
            is_password = true;
        } else {
            account_man->addUserAcc(account_name, text, 1);
        }
    }
}

void StartPage::slotOnBackClicked()
{
    if (is_password) {
        ui->textbox_enter->setText("");
        is_password = false;
        account_name = "";
        ui->text_account->setText("Enter an account name:");
    }
}
