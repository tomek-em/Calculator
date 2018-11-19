#include "calculator.h"
#include "qnetworkaccessmanager.h"
#include <QApplication>

//master

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Calculator w;
    w.show();

    return a.exec();
}
