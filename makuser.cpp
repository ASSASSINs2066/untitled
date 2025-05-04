#include "makuser.h"
#include "ui_makuser.h"
#include "mainwindow.h"
#include <QMessageBox>

makuser::makuser(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::makuser)
{
    ui->setupUi(this);
    ui->pushButton->setText("确定");
}

makuser::~makuser()
{
    delete ui;
}




void makuser::on_pushButton_clicked()
{
    extern std::vector<std::pair<std::pair<std::string,std::string>,bool>> users;;
    bool pd=0;
    for(auto i=users.begin();i!=users.end();i++)
    {
        if(ui->lineEdit->text().toStdString()==(*i).first.first)
        {
            pd=1;
        }
    }
    if(ui->lineEdit_3->text()!=ui->lineEdit_2->text())
    {
        QMessageBox::warning(this, tr("Waring"),
                             tr("密码不同!"),
                             QMessageBox::Yes);
        ui->lineEdit_3->clear();
        ui->lineEdit_2->clear();
        return ;
    }
    if(!pd)
    {
        users.push_back(std::make_pair(std::make_pair(ui->lineEdit->text().toStdString(),ui->lineEdit_2->text().toStdString()),1));
        ui->lineEdit_3->clear();
        ui->lineEdit_2->clear();
        ui->lineEdit->clear();
    }
    else {
        QMessageBox::warning(this, tr("Waring"),
                             tr("user name exist!"),
                             QMessageBox::Yes);
        ui->lineEdit_3->clear();
        ui->lineEdit_2->clear();
        ui->lineEdit->clear();
    }
}

