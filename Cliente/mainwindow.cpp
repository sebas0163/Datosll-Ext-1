#include "mainwindow.hpp"
#include "./ui_mainwindow.h"
#include <iostream>
using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}


MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_boton_clicked()
{
    string llegada;
    string salida;
    QString temp1=ui->salida->text();
    QString temp2 = ui->llegada->text();
    salida = temp1.toStdString();
    llegada = temp2.toStdString();
    string enviar = salida+llegada;
    string result = s.transmitir(enviar);
    ui->resultado->setText(result.c_str());

}
