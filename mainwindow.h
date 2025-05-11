#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include<string>
#include<vector>

typedef struct{
    std::string nam,pass;
    bool bl;
}tree;
//extern tree users[9999999];
extern int user_cnt;
//extern std::vector<tree> users;
extern std::vector<std::pair<std::pair<std::string,std::string>,bool>> users;
#include <QMainWindow>

QT_BEGIN_NAMESPACE


namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE
void on_userchange(std::string x);
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();



private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
