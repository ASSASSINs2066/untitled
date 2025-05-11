#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QDialog>
#include "dialog.h"
#include "user.h"
#include"makuser.h"


//std::vector<tree> users;
vector<std::pair<std::pair<std::string,std::string>,bool>> users;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->pushButton->setText("用户登录");
    ui->pushButton_2->setText("管理员登录");
    ui->pushButton_3->setText("用户注册");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    user *dlg=new user(this);
    dlg->show();
}


void MainWindow::on_pushButton_2_clicked()
{
    Dialog *dlg=new Dialog(this);
    dlg->show();
}

void MainWindow::on_pushButton_3_clicked()
{
    makuser *dlg=new makuser(this);
    dlg->show();
}
void on_userchange(string x)
{
    for(auto i=users.begin();i!=users.end();i++)
    {
        if(x==(*i).first.first)
        {
            (*i).second=!(*i).second;
        }
    }
}

