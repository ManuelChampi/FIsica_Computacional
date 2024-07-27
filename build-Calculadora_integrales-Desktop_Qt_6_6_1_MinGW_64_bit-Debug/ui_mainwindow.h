/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *functionLineEdit;
    QLineEdit *lowerLimitLineEdit;
    QLineEdit *upperLimitLineEdit;
    QPushButton *calculateButton;
    QLabel *resultLabel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 609);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(170, 110, 111, 51));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(170, 260, 111, 31));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(170, 190, 111, 31));
        functionLineEdit = new QLineEdit(centralwidget);
        functionLineEdit->setObjectName("functionLineEdit");
        functionLineEdit->setGeometry(QRect(360, 120, 113, 28));
        lowerLimitLineEdit = new QLineEdit(centralwidget);
        lowerLimitLineEdit->setObjectName("lowerLimitLineEdit");
        lowerLimitLineEdit->setGeometry(QRect(360, 260, 113, 28));
        upperLimitLineEdit = new QLineEdit(centralwidget);
        upperLimitLineEdit->setObjectName("upperLimitLineEdit");
        upperLimitLineEdit->setGeometry(QRect(360, 190, 113, 28));
        calculateButton = new QPushButton(centralwidget);
        calculateButton->setObjectName("calculateButton");
        calculateButton->setGeometry(QRect(170, 360, 83, 29));
        resultLabel = new QLabel(centralwidget);
        resultLabel->setObjectName("resultLabel");
        resultLabel->setGeometry(QRect(170, 420, 141, 71));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Funcion", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "limite inferior", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "limite superior", nullptr));
        calculateButton->setText(QCoreApplication::translate("MainWindow", "Calcular", nullptr));
        resultLabel->setText(QCoreApplication::translate("MainWindow", "Resultado", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
