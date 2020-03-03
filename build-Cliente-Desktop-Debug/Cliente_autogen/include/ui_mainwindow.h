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
    QLabel *label_5;
    QLineEdit *salida;
    QLineEdit *llegada;
    QLabel *resultado;
    QPushButton *boton;
    QLabel *label_6;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(854, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 10, 301, 71));
        QFont font;
        font.setFamily(QString::fromUtf8("Mukti Narrow [fbf ]"));
        font.setPointSize(22);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 90, 601, 241));
        label_2->setPixmap(QPixmap(QString::fromUtf8("../../../../Descargas/ruta-mas-corta.jpg")));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 360, 581, 61));
        label_3->setFont(font);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(50, 440, 81, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Mukti Narrow [fbf ]"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        label_4->setFont(font1);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(280, 440, 81, 31));
        label_5->setFont(font1);
        salida = new QLineEdit(centralwidget);
        salida->setObjectName(QString::fromUtf8("salida"));
        salida->setGeometry(QRect(130, 440, 113, 32));
        llegada = new QLineEdit(centralwidget);
        llegada->setObjectName(QString::fromUtf8("llegada"));
        llegada->setGeometry(QRect(370, 440, 113, 32));
        resultado = new QLabel(centralwidget);
        resultado->setObjectName(QString::fromUtf8("resultado"));
        resultado->setGeometry(QRect(10, 510, 731, 71));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Mukti Narrow [fbf ]"));
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setWeight(75);
        resultado->setFont(font2);
        boton = new QPushButton(centralwidget);
        boton->setObjectName(QString::fromUtf8("boton"));
        boton->setGeometry(QRect(530, 440, 121, 34));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(0, 490, 271, 18));
        label_6->setFont(font1);
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
        label->setText(QCoreApplication::translate("MainWindow", "Grafo Predeterminado ", nullptr));
        label_2->setText(QString());
        label_3->setText(QCoreApplication::translate("MainWindow", "Calcular la ruta mas corta entre dos vertices", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Salida", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Llegada", nullptr));
        resultado->setText(QString());
        boton->setText(QCoreApplication::translate("MainWindow", "Calcular", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "El camino menos costoso es:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
