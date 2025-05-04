/********************************************************************************
** Form generated from reading UI file 'exuser.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXUSER_H
#define UI_EXUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_exuser
{
public:
    QTableView *tableView;
    QLabel *label;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QDialog *exuser)
    {
        if (exuser->objectName().isEmpty())
            exuser->setObjectName("exuser");
        exuser->resize(533, 390);
        tableView = new QTableView(exuser);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(40, 90, 421, 192));
        label = new QLabel(exuser);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 61, 21));
        lineEdit = new QLineEdit(exuser);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(90, 50, 151, 20));
        lineEdit_2 = new QLineEdit(exuser);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(70, 300, 113, 20));
        lineEdit_3 = new QLineEdit(exuser);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(70, 330, 113, 20));
        label_2 = new QLabel(exuser);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(50, 60, 40, 12));
        label_3 = new QLabel(exuser);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 310, 40, 12));
        label_4 = new QLabel(exuser);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(30, 340, 40, 12));
        pushButton = new QPushButton(exuser);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(290, 50, 56, 18));
        pushButton_2 = new QPushButton(exuser);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(230, 330, 56, 18));
        pushButton_3 = new QPushButton(exuser);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(380, 50, 121, 21));

        retranslateUi(exuser);

        QMetaObject::connectSlotsByName(exuser);
    } // setupUi

    void retranslateUi(QDialog *exuser)
    {
        exuser->setWindowTitle(QCoreApplication::translate("exuser", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("exuser", "<html><head/><body><p><span style=\" font-size:12pt;\">\346\210\220\345\221\230\347\256\241\347\220\206</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("exuser", "\345\247\223\345\220\215", nullptr));
        label_3->setText(QCoreApplication::translate("exuser", "\345\220\215\347\247\260", nullptr));
        label_4->setText(QCoreApplication::translate("exuser", "\345\257\206\347\240\201", nullptr));
        pushButton->setText(QCoreApplication::translate("exuser", "PushButton", nullptr));
        pushButton_2->setText(QCoreApplication::translate("exuser", "PushButton", nullptr));
        pushButton_3->setText(QCoreApplication::translate("exuser", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class exuser: public Ui_exuser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXUSER_H
