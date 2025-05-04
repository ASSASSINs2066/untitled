#include "exuser.h"
#include "ui_exuser.h"
#include <QTableView>
#include <QStandardItemModel>
#include<vector>
#include<string>
#include <QMessageBox>
#include "mainwindow.h"

using namespace std;
exuser::exuser(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::exuser)
{
    ui->setupUi(this);
    ui->pushButton->setText("搜索");
    ui->pushButton_2->setText("添加");
    ui->pushButton_3->setText("加入、移除黑名单");
}
//tree users[9999999];

int user_cnt=0;

exuser::~exuser()
{
    delete ui;

}
extern vector<std::pair<std::pair<std::string,std::string>,bool>> users;

void exuser::on_pushButton_clicked()
{

    QStandardItemModel* mod = new QStandardItemModel(this);
    QStringList table_h_headers;
    int cnt=0;
    table_h_headers <<  "名称" << "密码" <<"黑名单";
    mod->setHorizontalHeaderLabels(table_h_headers);
    for(auto i:users)
    {
        if(ui->lineEdit->text().toStdString()==(i).first.first)
        {
            mod->setItem(cnt, 0, new QStandardItem(QString::fromStdString(i.first.first)));
            mod->setItem(cnt, 1, new QStandardItem(QString::fromStdString(i.first.second)));
            if(i.second)
            {
                mod->setItem(cnt, 2, new QStandardItem("NO"));
            }
            else
            {
                mod->setItem(cnt, 2, new QStandardItem("YES"));
            }
            cnt++;
        }
    }
    if(!cnt)
    {
        for(auto i:users)
        {

            mod->setItem(cnt, 0, new QStandardItem(QString::fromStdString(i.first.first)));
            mod->setItem(cnt, 1, new QStandardItem(QString::fromStdString(i.first.second)));
            if(i.second)
            {
                mod->setItem(cnt, 2, new QStandardItem("NO"));
            }
            else
            {
                mod->setItem(cnt, 2, new QStandardItem("YES"));
            }
            cnt++;
        }
    }
    ui->tableView->setModel(mod);
    ui->tableView->show();
}

void exuser::on_pushButton_3_clicked()
{

    QStandardItemModel* mode = new QStandardItemModel(this);
    QStringList table_h_headers;
    int cnt=0;
    table_h_headers <<  "名称" << "密码" <<"黑名单";
    mode->setHorizontalHeaderLabels(table_h_headers);
    for(auto i=users.begin();i!=users.end();i++)
    {
        if(ui->lineEdit->text().toStdString()==(*i).first.first)
        {
            mode->setItem(cnt, 0, new QStandardItem(QString::fromStdString((*i).first.first)));
            mode->setItem(cnt, 1, new QStandardItem(QString::fromStdString((*i).first.second)));
            if((*i).second)
            {
                (*i).second=0;
                mode->setItem(cnt, 2, new QStandardItem("YES"));
            }
            else
            {
                (*i).second=1;
                mode->setItem(cnt, 2, new QStandardItem("NO"));
            }
            cnt++;
        }
    }
    ui->tableView->setModel(mode);
    ui->tableView->show();
}

void exuser::on_pushButton_2_clicked()
{

    bool pd=0;
    for(auto i:users)
    {
        if(ui->lineEdit_2->text().toStdString()==i.first.first)
        {
            pd=1;
        }
    }
    if(!pd)
    {
        users.push_back(std::make_pair(std::make_pair(ui->lineEdit_2->text().toStdString(),ui->lineEdit_3->text().toStdString()),1));
        ui->lineEdit_3->clear();
        ui->lineEdit_2->clear();
    }
    else {
        QMessageBox::warning(this, tr("Waring"),
                             tr("user name exist!"),
                             QMessageBox::Yes);
        ui->lineEdit_3->clear();
        ui->lineEdit_2->clear();
    }
}

