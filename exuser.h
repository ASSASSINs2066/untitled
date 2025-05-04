#ifndef EXUSER_H
#define EXUSER_H

#include <QDialog>
#include<string>


namespace Ui {
class exuser;
}

class exuser : public QDialog
{
    Q_OBJECT

public:
    explicit exuser(QWidget *parent = nullptr);
    ~exuser();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::exuser *ui;
};

#endif // EXUSER_H
