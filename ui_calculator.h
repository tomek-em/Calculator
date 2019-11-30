/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculator
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QPushButton *Button5;
    QPushButton *Button6;
    QPushButton *ButtonMulti;
    QPushButton *ButtonMinus;
    QPushButton *Button3;
    QPushButton *Button9;
    QPushButton *Button8;
    QPushButton *Button4;
    QLineEdit *Display;
    QPushButton *Button7;
    QPushButton *ButtonDiv;
    QPushButton *Button2;
    QPushButton *Button1;
    QPushButton *ButtonNOK;
    QTextEdit *SDisplay;
    QPushButton *ButtonPlus;
    QPushButton *Button0;
    QPushButton *ButtonEUR;
    QPushButton *ButtonUSD;
    QPushButton *ButtonPLN;
    QPushButton *ButtonDot;
    QPushButton *ButtonC;
    QPushButton *ButtonM;
    QPushButton *ButtonEq;
    QPushButton *ButtonAM;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName(QString::fromUtf8("Calculator"));
        Calculator->resize(420, 360);
        Calculator->setStyleSheet(QString::fromUtf8("centralWidget \n"
"{\n"
"	background-color: #777788;\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"	background-color : #ccccff;\n"
"	border : 1px solid grey;\n"
"	padding : 4px;\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"	background-color :#b3ffff;\n"
"	border : 1px solid grey;\n"
"	padding : 4px;\n"
"}"));
        centralWidget = new QWidget(Calculator);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setStyleSheet(QString::fromUtf8(""));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        Button5 = new QPushButton(centralWidget);
        Button5->setObjectName(QString::fromUtf8("Button5"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Button5->sizePolicy().hasHeightForWidth());
        Button5->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("Play"));
        font.setBold(true);
        font.setWeight(75);
        Button5->setFont(font);
        Button5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background: #525261;\n"
"}"));

        gridLayout_2->addWidget(Button5, 4, 1, 1, 1);

        Button6 = new QPushButton(centralWidget);
        Button6->setObjectName(QString::fromUtf8("Button6"));
        sizePolicy.setHeightForWidth(Button6->sizePolicy().hasHeightForWidth());
        Button6->setSizePolicy(sizePolicy);
        Button6->setFont(font);
        Button6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background: #525261;\n"
"}"));

        gridLayout_2->addWidget(Button6, 4, 2, 1, 1);

        ButtonMulti = new QPushButton(centralWidget);
        ButtonMulti->setObjectName(QString::fromUtf8("ButtonMulti"));
        sizePolicy.setHeightForWidth(ButtonMulti->sizePolicy().hasHeightForWidth());
        ButtonMulti->setSizePolicy(sizePolicy);
        ButtonMulti->setFont(font);
        ButtonMulti->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background: #525261;\n"
"}"));

        gridLayout_2->addWidget(ButtonMulti, 4, 3, 1, 1);

        ButtonMinus = new QPushButton(centralWidget);
        ButtonMinus->setObjectName(QString::fromUtf8("ButtonMinus"));
        sizePolicy.setHeightForWidth(ButtonMinus->sizePolicy().hasHeightForWidth());
        ButtonMinus->setSizePolicy(sizePolicy);
        ButtonMinus->setFont(font);
        ButtonMinus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background: #525261;\n"
"}"));

        gridLayout_2->addWidget(ButtonMinus, 5, 3, 1, 1);

        Button3 = new QPushButton(centralWidget);
        Button3->setObjectName(QString::fromUtf8("Button3"));
        sizePolicy.setHeightForWidth(Button3->sizePolicy().hasHeightForWidth());
        Button3->setSizePolicy(sizePolicy);
        Button3->setFont(font);
        Button3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background: #525261;\n"
"}"));

        gridLayout_2->addWidget(Button3, 5, 2, 1, 1);

        Button9 = new QPushButton(centralWidget);
        Button9->setObjectName(QString::fromUtf8("Button9"));
        sizePolicy.setHeightForWidth(Button9->sizePolicy().hasHeightForWidth());
        Button9->setSizePolicy(sizePolicy);
        Button9->setFont(font);
        Button9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background: #525261;\n"
"}"));

        gridLayout_2->addWidget(Button9, 3, 2, 1, 1);

        Button8 = new QPushButton(centralWidget);
        Button8->setObjectName(QString::fromUtf8("Button8"));
        sizePolicy.setHeightForWidth(Button8->sizePolicy().hasHeightForWidth());
        Button8->setSizePolicy(sizePolicy);
        Button8->setFont(font);
        Button8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background: #525261;\n"
"}"));

        gridLayout_2->addWidget(Button8, 3, 1, 1, 1);

        Button4 = new QPushButton(centralWidget);
        Button4->setObjectName(QString::fromUtf8("Button4"));
        sizePolicy.setHeightForWidth(Button4->sizePolicy().hasHeightForWidth());
        Button4->setSizePolicy(sizePolicy);
        Button4->setFont(font);
        Button4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background: #525261;\n"
"}"));

        gridLayout_2->addWidget(Button4, 4, 0, 1, 1);

        Display = new QLineEdit(centralWidget);
        Display->setObjectName(QString::fromUtf8("Display"));
        Display->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Display->sizePolicy().hasHeightForWidth());
        Display->setSizePolicy(sizePolicy1);
        Display->setMinimumSize(QSize(248, 0));
        QFont font1;
        font1.setFamily(QString::fromUtf8("STIXIntegralsD"));
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        Display->setFont(font1);
        Display->setContextMenuPolicy(Qt::NoContextMenu);
        Display->setAcceptDrops(true);
        Display->setLayoutDirection(Qt::LeftToRight);
        Display->setAutoFillBackground(false);
        Display->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"	background-color : #676778;\n"
"	border : 1px solid grey;\n"
"	text-align : right;\n"
"	padding : 4px;\n"
"	color: #eee;\n"
"}\n"
"\n"
""));
        Display->setMaxLength(32764);
        Display->setFrame(true);
        Display->setReadOnly(false);

        gridLayout_2->addWidget(Display, 1, 0, 1, 6);

        Button7 = new QPushButton(centralWidget);
        Button7->setObjectName(QString::fromUtf8("Button7"));
        sizePolicy.setHeightForWidth(Button7->sizePolicy().hasHeightForWidth());
        Button7->setSizePolicy(sizePolicy);
        Button7->setFont(font);
        Button7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background: #525261;\n"
"}"));

        gridLayout_2->addWidget(Button7, 3, 0, 1, 1);

        ButtonDiv = new QPushButton(centralWidget);
        ButtonDiv->setObjectName(QString::fromUtf8("ButtonDiv"));
        sizePolicy.setHeightForWidth(ButtonDiv->sizePolicy().hasHeightForWidth());
        ButtonDiv->setSizePolicy(sizePolicy);
        ButtonDiv->setFont(font);
        ButtonDiv->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background: #525261;\n"
"}"));

        gridLayout_2->addWidget(ButtonDiv, 3, 3, 1, 1);

        Button2 = new QPushButton(centralWidget);
        Button2->setObjectName(QString::fromUtf8("Button2"));
        sizePolicy.setHeightForWidth(Button2->sizePolicy().hasHeightForWidth());
        Button2->setSizePolicy(sizePolicy);
        Button2->setFont(font);
        Button2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background: #525261;\n"
"}"));

        gridLayout_2->addWidget(Button2, 5, 1, 1, 1);

        Button1 = new QPushButton(centralWidget);
        Button1->setObjectName(QString::fromUtf8("Button1"));
        sizePolicy.setHeightForWidth(Button1->sizePolicy().hasHeightForWidth());
        Button1->setSizePolicy(sizePolicy);
        Button1->setFont(font);
        Button1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background: #525261;\n"
"}"));

        gridLayout_2->addWidget(Button1, 5, 0, 1, 1);

        ButtonNOK = new QPushButton(centralWidget);
        ButtonNOK->setObjectName(QString::fromUtf8("ButtonNOK"));
        sizePolicy.setHeightForWidth(ButtonNOK->sizePolicy().hasHeightForWidth());
        ButtonNOK->setSizePolicy(sizePolicy);
        ButtonNOK->setFont(font);
        ButtonNOK->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color: #2D2926;\n"
"}"));

        gridLayout_2->addWidget(ButtonNOK, 6, 5, 1, 1);

        SDisplay = new QTextEdit(centralWidget);
        SDisplay->setObjectName(QString::fromUtf8("SDisplay"));
        SDisplay->setMaximumSize(QSize(16777215, 49));

        gridLayout_2->addWidget(SDisplay, 2, 0, 1, 6);

        ButtonPlus = new QPushButton(centralWidget);
        ButtonPlus->setObjectName(QString::fromUtf8("ButtonPlus"));
        sizePolicy.setHeightForWidth(ButtonPlus->sizePolicy().hasHeightForWidth());
        ButtonPlus->setSizePolicy(sizePolicy);
        ButtonPlus->setFont(font);
        ButtonPlus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background: #525261;\n"
"}"));

        gridLayout_2->addWidget(ButtonPlus, 6, 3, 1, 1);

        Button0 = new QPushButton(centralWidget);
        Button0->setObjectName(QString::fromUtf8("Button0"));
        sizePolicy.setHeightForWidth(Button0->sizePolicy().hasHeightForWidth());
        Button0->setSizePolicy(sizePolicy);
        Button0->setFont(font);
        Button0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background: #525261;\n"
"}"));

        gridLayout_2->addWidget(Button0, 6, 1, 1, 1);

        ButtonEUR = new QPushButton(centralWidget);
        ButtonEUR->setObjectName(QString::fromUtf8("ButtonEUR"));
        sizePolicy.setHeightForWidth(ButtonEUR->sizePolicy().hasHeightForWidth());
        ButtonEUR->setSizePolicy(sizePolicy);
        ButtonEUR->setFont(font);
        ButtonEUR->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color: #2D2926;\n"
"}"));

        gridLayout_2->addWidget(ButtonEUR, 5, 5, 1, 1);

        ButtonUSD = new QPushButton(centralWidget);
        ButtonUSD->setObjectName(QString::fromUtf8("ButtonUSD"));
        sizePolicy.setHeightForWidth(ButtonUSD->sizePolicy().hasHeightForWidth());
        ButtonUSD->setSizePolicy(sizePolicy);
        ButtonUSD->setFont(font);
        ButtonUSD->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color: #2D2926;\n"
"}"));

        gridLayout_2->addWidget(ButtonUSD, 4, 5, 1, 1);

        ButtonPLN = new QPushButton(centralWidget);
        ButtonPLN->setObjectName(QString::fromUtf8("ButtonPLN"));
        sizePolicy.setHeightForWidth(ButtonPLN->sizePolicy().hasHeightForWidth());
        ButtonPLN->setSizePolicy(sizePolicy);
        ButtonPLN->setFont(font);
        ButtonPLN->setAutoFillBackground(false);
        ButtonPLN->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color: #2D2926;\n"
"}"));

        gridLayout_2->addWidget(ButtonPLN, 3, 5, 1, 1);

        ButtonDot = new QPushButton(centralWidget);
        ButtonDot->setObjectName(QString::fromUtf8("ButtonDot"));
        sizePolicy.setHeightForWidth(ButtonDot->sizePolicy().hasHeightForWidth());
        ButtonDot->setSizePolicy(sizePolicy);
        ButtonDot->setFont(font);
        ButtonDot->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background: #525261;\n"
"}"));

        gridLayout_2->addWidget(ButtonDot, 6, 2, 1, 1);

        ButtonC = new QPushButton(centralWidget);
        ButtonC->setObjectName(QString::fromUtf8("ButtonC"));
        sizePolicy.setHeightForWidth(ButtonC->sizePolicy().hasHeightForWidth());
        ButtonC->setSizePolicy(sizePolicy);
        ButtonC->setFont(font);
        ButtonC->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color: #F2AA4C;\n"
"}"));

        gridLayout_2->addWidget(ButtonC, 6, 0, 1, 1);

        ButtonM = new QPushButton(centralWidget);
        ButtonM->setObjectName(QString::fromUtf8("ButtonM"));
        sizePolicy.setHeightForWidth(ButtonM->sizePolicy().hasHeightForWidth());
        ButtonM->setSizePolicy(sizePolicy);
        ButtonM->setFont(font);
        ButtonM->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background: #525261;\n"
"}"));

        gridLayout_2->addWidget(ButtonM, 4, 4, 1, 1);

        ButtonEq = new QPushButton(centralWidget);
        ButtonEq->setObjectName(QString::fromUtf8("ButtonEq"));
        sizePolicy.setHeightForWidth(ButtonEq->sizePolicy().hasHeightForWidth());
        ButtonEq->setSizePolicy(sizePolicy);
        ButtonEq->setFont(font);
        ButtonEq->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background: #525261;\n"
"}"));

        gridLayout_2->addWidget(ButtonEq, 5, 4, 2, 1);

        ButtonAM = new QPushButton(centralWidget);
        ButtonAM->setObjectName(QString::fromUtf8("ButtonAM"));
        sizePolicy.setHeightForWidth(ButtonAM->sizePolicy().hasHeightForWidth());
        ButtonAM->setSizePolicy(sizePolicy);
        ButtonAM->setFont(font);
        ButtonAM->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background: #525261;\n"
"}"));

        gridLayout_2->addWidget(ButtonAM, 3, 4, 1, 1);

        Calculator->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Calculator);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 420, 25));
        Calculator->setMenuBar(menuBar);
        statusBar = new QStatusBar(Calculator);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Calculator->setStatusBar(statusBar);

        retranslateUi(Calculator);

        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QMainWindow *Calculator)
    {
        Calculator->setWindowTitle(QApplication::translate("Calculator", "Calculator", 0, QApplication::UnicodeUTF8));
        Button5->setText(QApplication::translate("Calculator", "5", 0, QApplication::UnicodeUTF8));
        Button6->setText(QApplication::translate("Calculator", "6", 0, QApplication::UnicodeUTF8));
        ButtonMulti->setText(QApplication::translate("Calculator", "*", 0, QApplication::UnicodeUTF8));
        ButtonMinus->setText(QApplication::translate("Calculator", "-", 0, QApplication::UnicodeUTF8));
        Button3->setText(QApplication::translate("Calculator", "3", 0, QApplication::UnicodeUTF8));
        Button9->setText(QApplication::translate("Calculator", "9", 0, QApplication::UnicodeUTF8));
        Button8->setText(QApplication::translate("Calculator", "8", 0, QApplication::UnicodeUTF8));
        Button4->setText(QApplication::translate("Calculator", "4", 0, QApplication::UnicodeUTF8));
        Display->setText(QApplication::translate("Calculator", "0.0", 0, QApplication::UnicodeUTF8));
        Button7->setText(QApplication::translate("Calculator", "7", 0, QApplication::UnicodeUTF8));
        ButtonDiv->setText(QApplication::translate("Calculator", "/", 0, QApplication::UnicodeUTF8));
        Button2->setText(QApplication::translate("Calculator", "2", 0, QApplication::UnicodeUTF8));
        Button1->setText(QApplication::translate("Calculator", "1", 0, QApplication::UnicodeUTF8));
        ButtonNOK->setText(QApplication::translate("Calculator", "NOK", 0, QApplication::UnicodeUTF8));
        ButtonPlus->setText(QApplication::translate("Calculator", "+", 0, QApplication::UnicodeUTF8));
        Button0->setText(QApplication::translate("Calculator", "0", 0, QApplication::UnicodeUTF8));
        ButtonEUR->setText(QApplication::translate("Calculator", "EUR", 0, QApplication::UnicodeUTF8));
        ButtonUSD->setText(QApplication::translate("Calculator", "USD", 0, QApplication::UnicodeUTF8));
        ButtonPLN->setText(QApplication::translate("Calculator", "PLN", 0, QApplication::UnicodeUTF8));
        ButtonDot->setText(QApplication::translate("Calculator", ".", 0, QApplication::UnicodeUTF8));
        ButtonC->setText(QApplication::translate("Calculator", "C", 0, QApplication::UnicodeUTF8));
        ButtonM->setText(QApplication::translate("Calculator", "M", 0, QApplication::UnicodeUTF8));
        ButtonEq->setText(QApplication::translate("Calculator", "=", 0, QApplication::UnicodeUTF8));
        ButtonAM->setText(QApplication::translate("Calculator", "AM", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
