
#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "vcolapedidos.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::MainWindow(PriorityQueue* _colaPedidos, Queue<Pedido *> _colaAlistados,  Queue<Pedido *> _colaA,  Queue<Pedido *> _colaB,  Queue<Pedido *> _colaC,  Queue<Pedido *> _colaComodin)
    : QMainWindow(),
    colaPedidos(_colaPedidos),
    colaAlistados(_colaAlistados),
    colaA (_colaA),
    colaB (_colaB),
    colaC (_colaC),
    colaComodin (_colaComodin),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    ui->setupUi(this);
}


void MainWindow::on_btnColaPedidos_clicked() {
    vColaPedidos* vColaPedidosDialog = new vColaPedidos(*colaPedidos); // Crear instancia de vColaPedidos

    vColaPedidosDialog->setQueueContentPQ(); // Establecer el contenido de la cola en el QTextEdit

    vColaPedidosDialog->show();
}

void MainWindow::on_btnColaFabricaciones1_clicked()
{
    vColaPedidos* vColaPedidosDialog = new vColaPedidos(colaA); // Crear instancia de vColaPedidos

    vColaPedidosDialog->setQueueContent(); // Establecer el contenido de la cola en el QTextEdit

    vColaPedidosDialog->show();
}


void MainWindow::on_btnColaFabricaciones2_clicked()
{
    //Queue<Pedido*>& colaFab2 = Balanceador.getF2();
    //vColaPedidos* vColaPedidosDialog = new vColaPedidos(colaFab2);
    //vColaPedidosDialog->show();
}


void MainWindow::on_btnColaFabricaciones3_clicked()
{
    //Queue<Pedido*> colaPedidos = revisor->getColaPedidos()->to_Queue();
    //vColaPedidos* vColaPedidosDialog = new vColaPedidos(colaPedidos);
    //vColaPedidosDialog->show();
}


void MainWindow::on_btnColaFabricaciones4Com_clicked()
{
    //Queue<Pedido*> colaPedidos = revisor->getColaPedidos()->to_Queue();
    //vColaPedidos* vColaPedidosDialog = new vColaPedidos(colaPedidos);
    //vColaPedidosDialog->show();
}


void MainWindow::on_btnColaDeAlisto_clicked()
{
    //Queue<Pedido*> colaPedidos = revisor->getColaPedidos()->to_Queue();
    //vColaPedidos* vColaPedidosDialog = new vColaPedidos(colaPedidos);
    //vColaPedidosDialog->show();
}


void MainWindow::on_btnColaAlistados_clicked()
{
    //Queue<Pedido*> colaPedidos = revisor->getColaPedidos()->to_Queue();
    //vColaPedidos* vColaPedidosDialog = new vColaPedidos(colaPedidos);
    //vColaPedidosDialog->show();
}

void MainWindow::on_btnColaPorFacturar_clicked()
{
    //Queue<Pedido*> colaPedidos = revisor->getColaPedidos()->to_Queue();
    //vColaPedidos* vColaPedidosDialog = new vColaPedidos(colaPedidos);
    //vColaPedidosDialog->show();
}



