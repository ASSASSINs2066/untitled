#ifndef USER_H
#define USER_H

#include <QDialog>

namespace Ui {
class user;
}

class user : public QDialog
{
    Q_OBJECT

public:
    explicit user(QWidget *parent = nullptr);
    ~user();

private slots:
    void on_lineEdit_textEdited(const QString &arg1);

    void on_buttonBox_accepted();

private:
    Ui::user *ui;
};

#endif // USER_H
