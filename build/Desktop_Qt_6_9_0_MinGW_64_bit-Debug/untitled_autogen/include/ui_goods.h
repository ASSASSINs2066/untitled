/********************************************************************************
** Form generated from reading UI file 'goods.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GOODS_H
#define UI_GOODS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_goods
{
public:
    QLineEdit *lineEdit;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton_3;
    QTableView *tableView;

    void setupUi(QDialog *goods)
    {
        if (goods->objectName().isEmpty())
            goods->setObjectName("goods");
        goods->resize(559, 407);
        lineEdit = new QLineEdit(goods);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(130, 50, 121, 20));
        label = new QLabel(goods);
        label->setObjectName("label");
        label->setGeometry(QRect(70, 50, 51, 16));
        pushButton = new QPushButton(goods);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(280, 50, 56, 18));
        pushButton_2 = new QPushButton(goods);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(250, 320, 56, 18));
        lineEdit_2 = new QLineEdit(goods);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(110, 280, 113, 20));
        lineEdit_3 = new QLineEdit(goods);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(110, 320, 113, 20));
        lineEdit_4 = new QLineEdit(goods);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(110, 360, 113, 20));
        label_2 = new QLabel(goods);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(70, 290, 40, 12));
        label_3 = new QLabel(goods);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(70, 330, 40, 12));
        label_4 = new QLabel(goods);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(70, 370, 40, 12));
        pushButton_3 = new QPushButton(goods);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(250, 360, 56, 20));
        tableView = new QTableView(goods);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(40, 80, 471, 192));

        retranslateUi(goods);

        QMetaObject::connectSlotsByName(goods);
    } // setupUi

    void retranslateUi(QDialog *goods)
    {
        goods->setWindowTitle(QCoreApplication::translate("goods", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("goods", "\345\225\206\345\223\201\345\220\215\347\247\260", nullptr));
        pushButton->setText(QCoreApplication::translate("goods", "PushButton", nullptr));
        pushButton_2->setText(QCoreApplication::translate("goods", "PushButton", nullptr));
        label_2->setText(QCoreApplication::translate("goods", "\345\220\215\347\247\260", nullptr));
        label_3->setText(QCoreApplication::translate("goods", "\346\225\260\351\207\217", nullptr));
        label_4->setText(QCoreApplication::translate("goods", "\344\273\267\346\240\274", nullptr));
        pushButton_3->setText(QCoreApplication::translate("goods", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class goods: public Ui_goods {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GOODS_H
