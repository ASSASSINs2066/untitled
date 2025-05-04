#ifndef GOODS_H
#define GOODS_H

#include <QDialog>

namespace Ui {
class goods;
}

class goods : public QDialog
{
    Q_OBJECT

public:
    explicit goods(QWidget *parent = nullptr);
    ~goods();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();





private:
    Ui::goods *ui;
};

#endif // GOODS_H
