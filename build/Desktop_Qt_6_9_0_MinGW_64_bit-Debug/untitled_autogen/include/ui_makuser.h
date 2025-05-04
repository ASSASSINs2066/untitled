/********************************************************************************
** Form generated from reading UI file 'makuser.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAKUSER_H
#define UI_MAKUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_makuser
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton;

    void setupUi(QDialog *makuser)
    {
        if (makuser->objectName().isEmpty())
            makuser->setObjectName("makuser");
        makuser->resize(400, 300);
        label = new QLabel(makuser);
        label->setObjectName("label");
        label->setGeometry(QRect(70, 50, 81, 41));
        label_2 = new QLabel(makuser);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(60, 120, 40, 12));
        label_3 = new QLabel(makuser);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(60, 150, 40, 12));
        label_4 = new QLabel(makuser);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(60, 180, 40, 12));
        lineEdit = new QLineEdit(makuser);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(100, 120, 161, 20));
        lineEdit_2 = new QLineEdit(makuser);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(100, 150, 161, 20));
        lineEdit_3 = new QLineEdit(makuser);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(100, 180, 161, 20));
        pushButton = new QPushButton(makuser);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(250, 240, 56, 18));

        retranslateUi(makuser);

        QMetaObject::connectSlotsByName(makuser);
    } // setupUi

    void retranslateUi(QDialog *makuser)
    {
        makuser->setWindowTitle(QCoreApplication::translate("makuser", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("makuser", "<html><head/><body><p><span style=\" font-size:16pt;\">\346\263\250\345\206\214</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("makuser", "\345\220\215\347\247\260", nullptr));
        label_3->setText(QCoreApplication::translate("makuser", "\345\257\206\347\240\201", nullptr));
        label_4->setText(QCoreApplication::translate("makuser", "\347\241\256\350\256\244\345\257\206\347\240\201", nullptr));
        pushButton->setText(QCoreApplication::translate("makuser", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class makuser: public Ui_makuser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAKUSER_H
