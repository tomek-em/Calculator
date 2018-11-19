#include "calculator.h"
#include "ui_calculator.h"



Calculator::Calculator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Calculator)
{
    ui->setupUi(this);
    setFixedSize(width(), height());        // ta linie potrzebna by zablokowac maksymalizacje

    //zerowanie zmiennych
    tempNum = 0;
    sol = 0;         // wynik
    curSol = 0;      // wynik po przemnożeniu kurs * wynik
    fNum = 0;
    sNum = 0;

    curRate = 0;
    m = 0;
    curM = 0;

    calcVal = 0;
    divTrigger = false;
    multiTrigger = false;
    plusTrigger = false;
    minusTrigger = false;
    ui -> SDisplay -> setMaximumHeight(30);
    ui -> Display -> setAlignment(Qt::AlignRight);

    ui -> Display -> setText(QString::number(calcVal));
    ui -> SDisplay -> setFontPointSize(10);

    QPushButton *numButtons[10];
    for (int i = 0; i < 10; i++)
    {
        QString butName = "Button" + QString::number(i);
        numButtons[i] = Calculator::findChild<QPushButton *>(butName); //nmButtons przypisuje obj o nazwie (butName)
        connect(numButtons[i], SIGNAL(released()), this, SLOT(NumPressed()));
    }
    // powyżsa pętla jest sprawdzana i-razy. Za każdą iteracją numButtons zawiera nazwę innego przycisku numueru,
    // ta nazwa została nadana numButtons za pomocą find Child - czyli znajdz objkt o takiej nazwie(butName).


    connect(ui->ButtonDot, SIGNAL(released()), this, SLOT(DotPressed()));

    connect (ui->ButtonPlus, SIGNAL(released()), this, SLOT (MathPressed()));
    connect (ui->ButtonMinus, SIGNAL(released()), this, SLOT (MathPressed()));
    connect (ui->ButtonMulti, SIGNAL(released()), this, SLOT (MathPressed()));
    connect (ui->ButtonDiv, SIGNAL(released()), this, SLOT (MathPressed()));

    connect (ui->ButtonEq, SIGNAL(released()), this, SLOT (EqPressed()));

    connect (ui->ButtonC, SIGNAL(released()), this, SLOT (CleanPressed()));

    connect (ui->ButtonAM, SIGNAL(released()), this, SLOT (AMPressed()));
    connect (ui->ButtonM, SIGNAL(released()), this, SLOT (MPressed()));

    connect (ui->ButtonPLN, SIGNAL(released()), this, SLOT (PLNPressed()));
    connect (ui->ButtonUSD, SIGNAL(released()), this, SLOT (USDPressed()));
    connect (ui->ButtonEUR, SIGNAL(released()), this, SLOT (EURPressed()));
    connect (ui->ButtonNOK, SIGNAL(released()), this, SLOT (NOKPressed()));
}

Calculator::~Calculator()
{
    delete ui;
}

void Calculator::NumPressed()
{
    QPushButton *button = (QPushButton *)sender();
    QString butVal = button->text();
    displayVal = ui -> Display -> text();
    if ((displayVal == "0") || (mbut == true))
    {
        ui -> Display -> setText(butVal);                  // gdy na wyświetlaczu jest 0, jest ono zamienione na klikniety nr
        mbut = false;
    }
    else
    {
        QString newVal = displayVal + butVal;
        double dblNewVal = newVal.toDouble();                       // dodawanie kolejne liczby do wyświetlacza
        ui -> Display -> setText(newVal);
        //ui -> Display -> setText(QString::number(dblNewVal, 'g', 16);
        mbut = false;
    }
    dbMath = false;
}

void Calculator::DotPressed()
{
    double dblNewVal = ui -> Display ->text().toDouble();
    ui -> Display -> setText(QString::number(dblNewVal) + QString("."));
}


void Calculator::MathPressed()
{
 /*
 */
    if (dbMath == false)
    {
        if (first == false)
        {
            EqPressed();
        }
        else
        {
            sol = ui -> Display -> text().toDouble();
        }
        first = false;
        mbut = true;
        an = false;
        if (first == false) dbMath = true;

        }

        QPushButton *button = (QPushButton *)sender();
        QString butVal = button->text();
        divTrigger = false;
        multiTrigger = false;
        minusTrigger = false;
        plusTrigger = false;

        if (QString::compare(butVal, "/", Qt::CaseInsensitive) == 0)
        {
           divTrigger = true;
        }
        else if (QString::compare(butVal, "*", Qt::CaseInsensitive) == 0)
        {
           multiTrigger = true;
        }
        else if (QString::compare(butVal, "-", Qt::CaseInsensitive) == 0)
        {
           minusTrigger = true;
        }
        else if (QString::compare(butVal, "+", Qt::CaseInsensitive) == 0)
        {
          plusTrigger = true;
        }


}


void Calculator::EqPressed()
{
    fNum = sol;
    displayVal = ui -> Display -> text();
    if (an == false)
    {
        sNum = displayVal.toDouble();

    }
    if (plusTrigger || minusTrigger || multiTrigger || divTrigger)
    {
        if(plusTrigger)
        {
            sol = fNum + sNum;
        }

        else if(minusTrigger)
        {
            sol =  fNum - sNum;
        }

        else if(multiTrigger)
        {
            sol =  fNum * sNum;
        }

        else if(divTrigger)
        {
            sol =  fNum / sNum;
        }
    }

    ui -> Display -> setText(QString::number(sol));
    an = true;
    first = true;
    mbut = false;

    qDebug () << sol;

}

void Calculator::CleanPressed()
{
    if (sol == 0)
    {
        acCur ="";
        cCur = "";
        ui -> SDisplay -> setText("");
    }
    first = true;
    mbut = false;
    fNum = 0;
    sNum = 0;
    calcVal = 0;
    anDisplayVal = 0;
    sol = 0;
    ui -> Display -> setText("0");

}

void Calculator::getRate()
{
    QNetworkAccessManager manager;
    QNetworkReply *response = manager.get(QNetworkRequest(
                                          QUrl(webAdr)));
    QEventLoop event;
    QObject::connect(response,SIGNAL(finished()),&event,SLOT(quit()));
    event.exec();
    QString htm = response->readAll();

    qDebug () << webAdr<< " " << htm;

    QStringRef subString(&htm, 18, 6);
    QString curRates = subString.toString();
    curRate = curRates.toDouble();
    //...added

}


void Calculator::ExitPressed()
{
    this->close();
}

void Calculator::MPressed()
{
    ui -> Display -> setText(QString::number(m));

}

void Calculator::AMPressed()
{
    m = ui -> Display -> text().toDouble();
}

// CURRENCY --------------------------------------------------------------------------------------

void Calculator::PLNPressed()
{
    curBt = "PLN";
    curr();
}

void Calculator::USDPressed()
{
    curBt = "USD";
    curr();
}

void Calculator::EURPressed()
{
    curBt = "EUR";
    curr();
}

void Calculator::NOKPressed()
{
    curBt = "NOK";
    curr();
}

void Calculator::curr()
{
    if ((acCur != "PLN") && (acCur != "USD") && (acCur != "EUR") && (acCur != "NOK"))
    {
        acCur = curBt;
        ui -> SDisplay -> setText(acCur + QString(" -> "));
        qDebug () << "if" << acCur << cCur ;
    }
    else
    {
        cCur = curBt;
        webAdr = "http://free.currencyconverterapi.com/api/v5/convert?q=" + QString(acCur) + QString ("_")
                                            + QString (cCur) + QString("&compact=y");
        getRate();
        if ((curRate == 0) && (mrate == false) && (cCur != acCur))         // nie da sie pobrac kursu z neta
        {
            QMessageBox messagebox;
            messagebox.about(0,"Błąd", "Nie można pobrać aktulnych kursów walut ze strony www. "
                                        "Sprawdź połączenie z internetem, "
                                        "lub wpisz kurs ręcznie i zatwierdź przyciskim " + (cCur));
            curM = ui -> Display -> text().toDouble();
            mrate = true;
            ui -> Display -> setText("");
            ui -> SDisplay -> setText("Wpisz kurs");
        }
        else if ((curRate == 0) && (mrate == true))     // po wpsianiu kursu ręcznie
        {
            mrate = false;
            curRate = ui -> Display -> text().toDouble();
            curSol = curM * curRate;
            ui -> Display -> setText(QString::number(curSol));
            qDebug () << "elseif" << acCur << cCur ;
            ui -> SDisplay -> setText("Waluta: " + cCur + QString(" (kurs ") + acCur + cCur + QString(": ") +
                                      QString::number(curRate) + QString (")"));
            acCur = cCur;
            sol = curSol;
        }

        else
        {
            ui -> SDisplay -> setText("Waluta: " + cCur + QString(" (kurs ") + acCur + cCur + QString(": ") +
                                      QString::number(curRate) + QString (")"));
            curSol = (ui -> Display -> text().toDouble()) * curRate;
            ui -> Display -> setText(QString::number(curSol));
            qDebug () << "else" << acCur << cCur ;
            acCur = cCur;
            sol = curSol;
        }
    }
}


