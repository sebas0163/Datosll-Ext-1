#ifndef MAINWINDOW_HPP
#define MAINWINDOW_HPP
#include "socket.hpp"

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    Socket s = Socket();

private slots:
    void on_boton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_HPP
