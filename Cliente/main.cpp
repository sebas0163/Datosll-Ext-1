/**
  @file main.cpp
  @author Sebastian Moya
  @date 27/02/20
  */
#include "mainwindow.hpp"
#include <QApplication>



using namespace std;

/**
 * @brief main metodo de ejecucion de la aplicacion.
 * @param argc argumento base
 * @param argv argumento base
 * @return codigo de salida
 */
int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
