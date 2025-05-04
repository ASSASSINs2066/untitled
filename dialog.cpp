#include "dialog.h"
#include "ui_dialog.h"
#include <QMessageBox>
#include "dengluui.h"
#include"goods.h"
#include"exuser.h"
Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_buttonBox_accepted()
{
    //确定按钮
    if(ui->usrLineEdit->text().trimmed()==tr("massage")&&
        ui->pwdLineEdit->text()==tr("password"))
    {
        exuser *nww=new exuser(this);
        nww->show();

    }
    else
    {
        QMessageBox::warning(this, tr("Waring"),
                             tr("user name or password error!"),
                             QMessageBox::Yes);
        ui->usrLineEdit->clear();
        ui->pwdLineEdit->clear();
        ui->usrLineEdit->setFocus();
    }
}

