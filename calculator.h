#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>
#include <Qt>

#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QMessageBox>

#include <QDebug>

namespace Ui {
class Calculator;
}

class Calculator : public QMainWindow
{
    Q_OBJECT

public:
    explicit Calculator(QWidget *parent = 0);       //explicit by uniknąć domyślnej konwersji typu QWidget na typ Calculator
                                                //..gdyby nie było explicit, nawet gdybym utworzył Calculator calc(QString s)
                                                // kompilator przekonwettował by (cast) QString s na typ QWidget
    ~Calculator();

private:
    Ui::Calculator *ui;

    double calcVal;
    double anDisplayVal;
    double tempNum;
    double sol;         // wynik
    double curSol;      // wynik po przemnożeniu kurs * wynik
    double fNum;
    double sNum;

    QString displayVal;
    QString acCur;      // aktualna waluta
    QString cCur;    // obliczana waluta
    QString curBt;

    QString webAdr;
    double curRate;
    double m;
    double curM;

    bool divTrigger;
    bool multiTrigger;
    bool plusTrigger;
    bool minusTrigger;
    bool an;
    bool mbut = false;          // true zeruje wyświetlacz gdy wpisujemy kolejna licz.
    bool first = true;          // sprawdza czy to pierwsze działanie
    bool dbMath = false;        // true - znak math dostal wcisniety 2 razy
    bool mrate = false;         // true - kurs wpisany ręcznie

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
