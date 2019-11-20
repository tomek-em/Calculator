#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>
#include <Qt>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QMessageBox>
#include <QFontDatabase>

#include <QDebug>

namespace Ui {
class Calculator;
}

class Calculator : public QMainWindow
{
    Q_OBJECT

public:
    explicit Calculator(QWidget *parent = 0);

    ~Calculator();

private:
    Ui::Calculator *ui;

    double calcVal;
    double anDisplayVal;
    double tempNum;
    double result;
    double curRes;         // result of multipl. current result and currency rate
    double fNum;
    double sNum;
    double curRate;
    double m;              // Memory number
    double curM;           //current memory numb.

    QString displayVal;
    QString acCur;      // actual currency
    QString calCur;     // calculated currency
    QString curName;
    QString webAdr;

    bool divTrigger;
    bool multiTrigger;
    bool plusTrigger;
    bool minusTrigger;
    bool an;
    bool mbut;        // true zeruje wyświetlacz gdy wpisujemy kolejna licz.
    bool first;        // sprawdza czy to pierwsze działanie
    bool dbMath;      // true - znak math dostal wcisniety 2 razy
    bool mrate;       // true - kurs wpisany ręcznie

private slots:
    void NumPressed();
    void DotPressed();
    void MathPressed();
    void EqPressed();
    void CleanPressed();
    void getRate();
    void ExitPressed();
    void MPressed();
    void AMPressed();

    void PLNPressed();
    void USDPressed();
    void EURPressed();
    void NOKPressed();
    void curr();


};

#endif // CALCULATOR_H
