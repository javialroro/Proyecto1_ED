#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "priorityqueue.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow

{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    MainWindow(PriorityQueue* _colaPedidos, Queue<Pedido *> _colaAlistados,  Queue<Pedido *> _colaA,  Queue<Pedido *> _colaB,  Queue<Pedido *> _colaC,  Queue<Pedido *> _colaComodin);
    ~MainWindow();

private slots:
    void on_btnColaPedidos_clicked();

    void on_btnColaFabricaciones1_clicked();

    void on_btnColaFabricaciones2_clicked();

    void on_btnColaFabricaciones3_clicked();

    void on_btnColaFabricaciones4Com_clicked();

    void on_btnColaDeAlisto_clicked();

    void on_btnColaAlistados_clicked();

    void on_btnColaPorFacturar_clicked();

    void on_btnVer03_clicked();

private:
    Ui::MainWindow *ui;

    PriorityQueue* colaPedidos;
    Queue<Pedido *> colaAlistados;
    Queue<Pedido *> colaA;
    Queue<Pedido *> colaB;
    Queue<Pedido *> colaC;
    Queue<Pedido *> colaComodin;
};

#endif // MAINWINDOW_H
