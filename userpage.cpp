#include "userpage.h"
#include "ui_userpage.h"

UserPage::UserPage(QWidget *parent, MainWindow *main_window) :
    QWidget(parent),
    ui(new Ui::UserPage),
    main_window(main_window)
{
    ui->setupUi(this);
    hide();
}
