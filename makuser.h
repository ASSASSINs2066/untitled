#ifndef MAKUSER_H
#define MAKUSER_H

#include <QDialog>

namespace Ui {
class makuser;
}

class makuser : public QDialog
{
    Q_OBJECT

public:
    explicit makuser(QWidget *parent = nullptr);
    ~makuser();

private slots:

    void on_pushButton_clicked();

private:
    Ui::makuser *ui;
};
#endif // MAKUSER_H
