#include "calculator.h"
#include "qnetworkaccessmanager.h"
#include <QApplication>

//edit1 branch

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Calculator w;
    w.show();

    return a.exec();
}
