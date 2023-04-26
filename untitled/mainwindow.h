
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "QThreads.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow

{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    MainWindow(RevisorArchivos *threadRevisor, Balanceador *threadBalanceador, Fabrica *threadA, Fabrica *threadB, Fabrica *threadC, Fabrica *threadComodin, Fabricacion1 *threadFabricacion);
    ~MainWindow();

private slots:
    void on_btnColaPedidos_clicked();

    void on_btnColaFabricaciones3_clicked();

    void on_btnColaFabricaciones4Com_clicked();

    void on_btnColaFabricaciones2_clicked();

    void on_btnColaFabricaciones1_clicked();

<<<<<<< Updated upstream
=======
    void on_btnColaDeAlisto_clicked();

    void on_btnColaAlistados_clicked();

    void on_btnColaPorFacturar_clicked();

>>>>>>> Stashed changes
private:
    Ui::MainWindow *ui;

    RevisorArchivos* revisor;
    Balanceador* balanceador;
    Fabrica* fabA;
    Fabrica* fabB;
    Fabrica* fabC;
    Fabrica* fabComodin;
    Fabricacion1* fabricacion;

};

#endif // MAINWINDOW_H
