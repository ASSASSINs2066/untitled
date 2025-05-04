/********************************************************************************
** Form generated from reading UI file 'user.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_H
#define UI_USER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_user
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *user)
    {
        if (user->objectName().isEmpty())
            user->setObjectName("user");
        user->resize(400, 300);
        buttonBox = new QDialogButtonBox(user);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        lineEdit = new QLineEdit(user);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(120, 110, 141, 20));
        lineEdit_2 = new QLineEdit(user);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(120, 160, 141, 20));
        label = new QLabel(user);
        label->setObjectName("label");
        label->setGeometry(QRect(80, 120, 40, 12));
        label_2 = new QLabel(user);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(80, 170, 40, 12));
        label_3 = new QLabel(user);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(100, 60, 81, 21));

        retranslateUi(user);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, user, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, user, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(user);
    } // setupUi

    void retranslateUi(QDialog *user)
    {
        user->setWindowTitle(QCoreApplication::translate("user", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("user", "\345\220\215\347\247\260", nullptr));
        label_2->setText(QCoreApplication::translate("user", "\345\257\206\347\240\201", nullptr));
        label_3->setText(QCoreApplication::translate("user", "<html><head/><body><p><span style=\" font-size:16pt;\">\347\224\250\346\210\267\347\231\273\345\275\225</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class user: public Ui_user {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_H
