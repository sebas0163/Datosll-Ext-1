/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
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
    QLabel *label_4;
    QLineEdit *entrad1;
    QLineEdit *entrada2;
    QLabel *label_5;
    QPushButton *boton;
    QLabel *resultado;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 20, 291, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("Mukti Narrow [fbf ]"));
        font.setPointSize(22);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 390, 541, 31));
        label_2->setFont(font);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 440, 61, 18));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Mukti Narrow [fbf ]"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        label_3->setFont(font1);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(190, 440, 81, 21));
        label_4->setFont(font1);
        entrad1 = new QLineEdit(centralwidget);
        entrad1->setObjectName(QString::fromUtf8("entrad1"));
        entrad1->setGeometry(QRect(70, 440, 113, 32));
        entrada2 = new QLineEdit(centralwidget);
        entrada2->setObjectName(QString::fromUtf8("entrada2"));
        entrada2->setGeometry(QRect(270, 440, 113, 32));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 70, 601, 301));
        label_5->setPixmap(QPixmap(QString::fromUtf8("../../../../Descargas/ruta-mas-corta.jpg")));
        boton = new QPushButton(centralwidget);
        boton->setObjectName(QString::fromUtf8("boton"));
        boton->setGeometry(QRect(400, 440, 88, 34));
        resultado = new QLabel(centralwidget);
        resultado->setObjectName(QString::fromUtf8("resultado"));
        resultado->setGeometry(QRect(30, 500, 621, 81));
        resultado->setFont(font1);
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Grafo Predeterminado", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Calcular ruta mas corta entre dos vertices", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Salida", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Llegada", nullptr));
        label_5->setText(QString());
        boton->setText(QCoreApplication::translate("MainWindow", "Calcular", nullptr));
        resultado->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
