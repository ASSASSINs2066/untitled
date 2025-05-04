#include "user.h"
#include "ui_user.h"
#include "goods.h"
#include <QMessageBox>
#include "mainwindow.h"

user::user(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::user)
{
    ui->setupUi(this);
}

user::~user()
{
    delete ui;
}

void user::on_lineEdit_textEdited(const QString &arg1)
{

}


void user::on_buttonBox_accepted()
{
    extern std::vector<std::pair<std::pair<std::string,std::string>,bool>> users;
    bool pw=0;
    for(auto i:users)
    {
        if(ui->lineEdit->text().toStdString()==i.first.first&&
            ui->lineEdit_2->text().toStdString()==i.first.second&&
            i.second)
        {
            pw=1;
        }
    }
    if(pw)
    {
        goods *gods =new goods(this);
        gods->show();
    }
    else
    {
        QMessageBox::warning(this, tr("Waring"),
                             tr("user name or password error!"),
                             QMessageBox::Yes);
        ui->lineEdit->clear();
        ui->lineEdit_2->clear();
        ui->lineEdit->setFocus();
    }
}

