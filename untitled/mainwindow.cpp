
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
    Queue<Pedido*> colaPedidosAux = colaPedidos->to_Queue(); //to_Queue crea una copia tipo Queue para evitar errores
    vColaPedidos* vColaPedidosDialog = new vColaPedidos(colaPedidosAux);

    //QString texto;
    //while(!colaPedidosAux.isEmpty()){
    //    Pedido* pedido = colaPedidosAux.deQueue();
    //    texto.append(pedido->to_String());
    //    texto.append("\n");
        // Agregar más información del pedido aquí si se desea
    //}

    //QTextEdit* txEdit = vColaPedidosDialog->findChild<QTextEdit*>("txEditColaPedidos");
    //if (txEdit) {
    //    txEdit->append(texto);
    //}  // Agregar texto al QTextEdit en vColaPedidos
    vColaPedidosDialog->show();
}

void MainWindow::on_btnColaFabricaciones1_clicked()
{
    //Queue<Pedido*> colaPedidos = revisor->getColaPedidos()->to_Queue();
    //vColaPedidos* vColaPedidosDialog = new vColaPedidos(colaPedidos);
    //vColaPedidosDialog->show();
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
