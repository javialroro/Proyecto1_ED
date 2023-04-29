

#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "vcolapedidos.h"

MainWindow::MainWindow(/*ThreadContainer* _contenedor,*/ PriorityQueue* _colaPedidos,Queue<Pedido *> & _colaAlisto, Queue<Pedido *> &_colaAlistados,  Queue<Pedido *> &_colaA,  Queue<Pedido *> &_colaB,  Queue<Pedido *> &_colaC,  Queue<Pedido *>& _colaComodin)
    : QMainWindow(),
    //contenedor(_contenedor),
    colaPedidos(_colaPedidos),
    colaAlisto(_colaAlisto),
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

QTableWidget* MainWindow::getQTable(){
    return ui->tblBodega;
}

QLabel* MainWindow::getLabelFabricacion(){
    return ui->lblMostrarFabricando;
}

void MainWindow::on_btnColaPedidos_clicked() {
    //qDebug() << "Entre al btnColaPedidos";
    vColaPedidos* vColaPedidosDialog = new vColaPedidos(colaPedidos); // Crear instancia de vColaPedidos

    //qDebug() << "Pasó el new";
    vColaPedidosDialog->setQueueContentPQ(); // Establecer el contenido de la cola en el QTextEdit

    vColaPedidosDialog->show();
}

void MainWindow::on_btnColaFabricaciones1_clicked()
{
    qDebug()<<colaA._toString()+" A";
    vColaPedidos* vColaPedidosDialog = new vColaPedidos(colaA); // Crear instancia de vColaPedidos

    vColaPedidosDialog->setQueueContent(); // Establecer el contenido de la cola en el QTextEdit

    vColaPedidosDialog->show();
}


void MainWindow::on_btnColaFabricaciones2_clicked()
{
    qDebug()<<colaB._toString()+" B";
    vColaPedidos* vColaPedidosDialog = new vColaPedidos(colaB); // Crear instancia de vColaPedidos

    vColaPedidosDialog->setQueueContent(); // Establecer el contenido de la cola en el QTextEdit

    vColaPedidosDialog->show();
}


void MainWindow::on_btnColaFabricaciones3_clicked()
{
    qDebug()<<colaC._toString()+" C";
    vColaPedidos* vColaPedidosDialog = new vColaPedidos(colaC); // Crear instancia de vColaPedidos

    vColaPedidosDialog->setQueueContent(); // Establecer el contenido de la cola en el QTextEdit

    vColaPedidosDialog->show();
}


void MainWindow::on_btnColaFabricaciones4Com_clicked()
{
    qDebug()<<colaComodin._toString()+" D";
    vColaPedidos* vColaPedidosDialog = new vColaPedidos(colaComodin); // Crear instancia de vColaPedidos

    vColaPedidosDialog->setQueueContent(); // Establecer el contenido de la cola en el QTextEdit

    vColaPedidosDialog->show();
}


void MainWindow::on_btnColaDeAlisto_clicked()
{
    vColaPedidos* vColaPedidosDialog = new vColaPedidos(colaAlisto); // Crear instancia de vColaPedidos

    vColaPedidosDialog->setQueueContent(); // Establecer el contenido de la cola en el QTextEdit

    vColaPedidosDialog->show();

}


void MainWindow::on_btnColaAlistados_clicked()
{
    vColaPedidos* vColaPedidosDialog = new vColaPedidos(colaAlistados); // Crear instancia de vColaPedidos

    vColaPedidosDialog->setQueueContent(); // Establecer el contenido de la cola en el QTextEdit

    vColaPedidosDialog->show();

}

void MainWindow::on_btnColaPorFacturar_clicked()
{
    //Queue<Pedido*> colaPedidos = revisor->getColaPedidos()->to_Queue();
    //vColaPedidos* vColaPedidosDialog = new vColaPedidos(colaPedidos);
    //vColaPedidosDialog->show();
}


void MainWindow::on_btnDetenerBalanceador_clicked()
{

}

