#include "startpage.h"
#include "ui_startpage.h"
#include "mainwindow.h"
#include "accountmanager.h"
#include "userpage.h"

StartPage::StartPage(QWidget *parent, MainWindow *main_window) :
    QWidget(parent),
    ui(new Ui::StartPage),
    main_window(main_window)
{
    ui->setupUi(this);
    QObject::connect(ui->button_accept, &QPushButton::clicked, this, &StartPage::slotOnAcceptClicked);
    QObject::connect(ui->button_back, &QPushButton::clicked, this, &StartPage::slotOnBackClicked);
    account_man = new AccountManager(this);
    ui->button_back->setEnabled(false);
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
            ui->button_back->setEnabled(true);
            ui->textbox_enter->setEchoMode(QLineEdit::Password);
        } else {
            account_man->addUserAcc(account_name, text, 1);
            hide();
            main_window->user_page->show();
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
        ui->button_back->setEnabled(false);
        ui->textbox_enter->setEchoMode(QLineEdit::Normal);
    }
}
