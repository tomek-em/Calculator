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
    result= 0;
    curRes = 0;
    fNum = 0;       // pierwsza liczba
    sNum = 0;       // druga liczba

    curRate = 0;
    m = 0;
    curM = 0;

    calcVal = 0;       //actual number on the display
    divTrigger = false;
    multiTrigger = false;
    plusTrigger = false;
    minusTrigger = false;

    mbut = false;          // true zeruje wyświetlacz gdy wpisujemy kolejna licz.
    first = true;          // sprawdza czy to pierwsze działanie
    dbMath = false;        // true - znak math dostal wcisniety 2 razy
    mrate = false;         // true - kurs wpisany ręcznie

    this -> setStyleSheet("background-color: #777788; color: #eeeeee;");

    ui -> Display -> setMaximumHeight(120);
    ui -> SDisplay -> setMaximumHeight(30);
    ui -> Display -> setAlignment(Qt::AlignRight);
    ui -> Display -> setText(QString::number(calcVal));
    ui -> SDisplay -> setFontPointSize(10);

<<<<<<< f3bda6d5d6b25090e0f8ed3138548e8c16c290e3
    ui -> Display -> setStyleSheet("color: #eeeeee;");


=======
>>>>>>> display issue fixed

    //ui->ButtonEq->setStyleSheet("color: #eeeeee");

    QPushButton *numButtons[10];
    for (int i = 0; i < 10; i++)
    {
        QString butName = "Button" + QString::number(i);
        numButtons[i] = Calculator::findChild<QPushButton *>(butName); //numButtons przypisuje obj o nazwie (butName)
                                                                        //zamiast np. ui-> Button6 dla kazdego numeru
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

    if (dbMath == false)
    {
        if (first == false)
        {
            EqPressed();
        }
        else
        {
            result= ui -> Display -> text().toDouble();
        }
        first = false;
        mbut = true;
        an = false;
        dbMath = true;

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
    fNum = result;
    displayVal = ui -> Display -> text();
    if (an == false)
    {
        sNum = displayVal.toDouble();

    }
    if (plusTrigger || minusTrigger || multiTrigger || divTrigger)
    {
        if(plusTrigger)
        {
            result = fNum + sNum;
        }

        else if(minusTrigger)
        {
            result =  fNum - sNum;
        }

        else if(multiTrigger)
        {
            result =  fNum * sNum;
        }

        else if(divTrigger)
        {
            result =  fNum / sNum;
        }
    }

    ui -> Display -> setText(QString::number(result));
    an = true;
    first = true;
    mbut = false;

    qDebug () << result;

}

void Calculator::CleanPressed()
{
    //if (result == 0)
    acCur ="";
    calCur = "";
    curRate = 0;
    ui -> SDisplay -> setText("");
     //
    first = true;
    mbut = false;
    fNum = 0;
    sNum = 0;
    calcVal = 0;
    anDisplayVal = 0;
    result= 0;
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
    QStringRef subString(&htm, 16, 5);
    QString curRateStr = subString.toString();

    qDebug () << webAdr << "from getrate " << curRateStr;

    curRate = curRateStr.toDouble();
    //curRate = curRateStr.toDouble();
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
    curName = "PLN";
    curr();
}

void Calculator::USDPressed()
{
    curName = "USD";
    curr();
}

void Calculator::EURPressed()
{
    curName = "EUR";
    curr();
}

void Calculator::NOKPressed()
{
    curName = "NOK";
    curr();
}

void Calculator::curr()
{
    if ((acCur != "PLN") && (acCur != "USD") && (acCur != "EUR") && (acCur != "NOK"))
    {
        acCur = curName;
        ui -> SDisplay -> setText(acCur + QString(" -> (choose second currency) "));
        qDebug () << "if" << acCur << calCur ;
    }
    else
    {
        calCur = curName;
        webAdr = "https://api.exchangeratesapi.io/latest?base=" + QString(acCur) + QString ("&symbols=")
                                            + QString(calCur);
        getRate();
        qDebug() << curRate;

        if ((curRate == 0) && (mrate == false) && (calCur != acCur))         // cannot fetch rate from net
        {
            QMessageBox messagebox;
            messagebox.about(0,"Error", "Can't get actual currency rates from internet right now' "
                                        "Check your internet connection, "
                                        "or write in rate manualy and confirm wtih " + (calCur) + "button");
            curM = ui -> Display -> text().toDouble();
            mrate = true;
            ui -> Display -> setText("");
<<<<<<< f3bda6d5d6b25090e0f8ed3138548e8c16c290e3
<<<<<<< 4d5b68c7d0f1a3a542a37ce92fa8b3983787170c
            ui -> SDisplay -> setText("Wrate in rate");
=======
            ui -> SDisplay -> setText("Write in rate");
>>>>>>> pl ver
=======
            ui -> SDisplay -> setText("Write in rate");
>>>>>>> display issue fixed
        }

        else if ((curRate == 0) && (mrate == true))     // manual definition of currency rate
        {
            mrate = false;
            curRate = ui -> Display -> text().toDouble();
            curRes = curM * curRate;
            ui -> Display -> setText(QString::number(curRes));
            qDebug () << "elseif" << acCur << calCur ;
            ui -> SDisplay -> setText("Currency: " + calCur + QString(" (rate: ") + acCur + calCur + QString(": ") +
                                      QString::number(curRate) + QString (")"));
            acCur = calCur;
            result= curRes;
        }

        else                                    // if rate is fetched from net
        {
            ui -> SDisplay -> setText("Currency: " + calCur + QString(" (rate: ") + acCur + calCur + QString(": ") +
                                      QString::number(curRate) + QString (")"));
            curRes = (ui -> Display -> text().toDouble()) * curRate;
            ui -> Display -> setText(QString::number(curRes));
            qDebug () << "else" << acCur << calCur ;
            acCur = calCur;
            result= curRes;
        }
    }
}


