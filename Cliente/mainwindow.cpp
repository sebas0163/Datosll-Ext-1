/**
  @file mainwindow.cpp
  @author Sebastian Moya
  @version 1.0
  @date 27/02/20
  @brief definicion de las funciones que controlan la interfaz
  */
#include "mainwindow.hpp"
#include "./ui_mainwindow.h"
#include <iostream>
using namespace std;
/**
 * @brief MainWindow::MainWindow constructor de la interfaz
 * @param parent padre
 */
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

/**
 * @brief MainWindow::~MainWindow destructor de la interfaz
 */
MainWindow::~MainWindow()
{
    delete ui;
}

/**
 * @brief MainWindow::on_boton_clicked funcion que envia al socket los datos escritos en la interfaz
 */
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
