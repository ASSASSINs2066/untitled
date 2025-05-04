#include "goods.h"
#include "ui_goods.h"
#include "string"
#include<vector>
#include <QMessageBox>
#include <QTableView>
#include <QStandardItemModel>
#include <QApplication>
#include <QDebug>
using namespace std;

goods::goods(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::goods)
{
    ui->setupUi(this);
    ui->pushButton->setText("搜索");
    ui->pushButton_2->setText("卖出");
    ui->pushButton_3->setText("买入");

}

struct tree
{
    int money,cnt;
    string nam;
};
vector<tree>gb;
int cnt=0;
goods::~goods()
{
    delete ui;
}

void goods::on_pushButton_clicked()
{
    QStandardItemModel* mode = new QStandardItemModel(this);
    cnt=0;
    QStringList table_h_headers;
    table_h_headers <<  "名称" << "数量" <<  "价格" << "总价";
    mode->setHorizontalHeaderLabels(table_h_headers);
    for(auto i=gb.begin();i!=gb.end();i++)
    {
        if(ui->lineEdit->text().toStdString()==(*i).nam)
        {
            mode->setItem(cnt, 0, new QStandardItem(QString::fromStdString((*i).nam)));
            mode->setItem(cnt, 1, new QStandardItem(QString::number((*i).cnt)));
            mode->setItem(cnt, 2, new QStandardItem(QString::number((*i).money)));
            mode->setItem(cnt, 3, new QStandardItem(QString::number((*i).money * (*i).cnt)));
            cnt++;
        }
    }
    ui->tableView->setModel(mode);
    ui->tableView->show();
}

void goods::on_pushButton_2_clicked()
{
    for(auto i=gb.begin();i!=gb.end();)
    {
        if(ui->lineEdit->text()==(*i).nam)
        {
            gb.erase(i);
        }else i++;
    }
}

void goods::on_pushButton_3_clicked()
{
    if(!ui->lineEdit_3->text().isEmpty()||!ui->lineEdit_2->text().isEmpty()||!ui->lineEdit_4->text().isEmpty())
    {
        tree nw;
        nw.nam=ui->lineEdit_2->text().toStdString();
        nw.money=ui->lineEdit_4->text().toInt();
        nw.cnt=ui->lineEdit_3->text().toInt();
        gb.push_back(nw);
        ui->lineEdit_3->clear();
        ui->lineEdit_2->clear();
        ui->lineEdit_4->clear();
    }
    else
    {
         QMessageBox::warning(this, tr("Waring"),
                              tr("缺少信息输入"),
                              QMessageBox::Yes);
        ui->lineEdit_3->clear();
        ui->lineEdit_2->clear();
        ui->lineEdit_4->clear();
    }
}







