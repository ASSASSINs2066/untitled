#include "mainwindow.h"
#include "dengluui.h"
#include <QApplication>
#include <QLocale>
#include <QTranslator>
#include "dialog.h"
#include"exuser.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    user_cnt=0;
    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "untitled_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            a.installTranslator(&translator);
            break;
        }
    }
    MainWindow w;
    w.show();


    return a.exec();
}
