
#include "QThreads.h"
#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "vcolapedidos.h"
#include <QApplication>

MainWindow::MainWindow(/*ThreadContainer* _contenedor,*/ PriorityQueue* _colaPedidos,Queue<Pedido *> & _colaAlisto, Queue<Pedido *> &_colaAlistados,  Queue<Pedido *> &_colaA,  Queue<Pedido *> &_colaB,  Queue<Pedido *> &_colaC,  Queue<Pedido *>& _colaComodin,
                       listaArticulos * la, listaClientes * lc)
    : QMainWindow(),
    //contenedor(_contenedor),
    colaPedidos(_colaPedidos),
    colaAlisto(_colaAlisto),
    colaAlistados(_colaAlistados),
    colaA (_colaA),
    colaB (_colaB),
    colaC (_colaC),
    colaComodin (_colaComodin),
    listaArt(la),
    lista(lc),
    ui(new Ui::MainWindow)

{
    ui->setupUi(this);



    CargarArticulos(listaArt);
    cargarClientes(lista);

    Balanceador * balanceador= new Balanceador(listaArt, colaPedidos, colaAlisto, colaA, colaB, colaC, colaComodin);

    //qDebug() << "pasa inicializacion queue";

    RevisorArchivos * revisor= new RevisorArchivos(listaArt,lista,colaPedidos);
    revisor->start();



    balanceador->start();
    //qDebug() << "pasa balanceador";
    QSemaphore s(1);
    QLabel * lbl = getLabelFabricacion();
    lbl->setText("Fabricacion");
    //qDebug() << "pasa lbl";


    Fabrica *A = new Fabrica(listaArt, colaAlisto, colaA,"A",s,"Fabrica A",lbl);
    Fabrica *B= new Fabrica(listaArt, colaAlisto, colaB,"B",s,"Fabrica B",lbl);
    Fabrica *C= new Fabrica(listaArt, colaAlisto, colaC,"C",s,"Fabrica C",lbl);
    Fabrica *Comodin= new Fabrica(listaArt, colaAlisto, colaComodin,"A","B",s,"Fabrica Comodin",lbl);
    //qDebug() << "pasa fabricas";

    A->start();
    B->start();
    C->start();
    Comodin->start();
    //qDebug() << "pasa starts de fabricas";

    QTableWidget* tbl = getQTable();

    //Alistador* alist1 = new Alistador(colaAlisto, colaAlistados, tbl, listaArt);
    //Alistador* alist2 = new Alistador(colaAlisto, colaAlistados, tbl, listaArt);
    //Alistador* alist3 = new Alistador(colaAlisto, colaAlistados, tbl, listaArt);
    //Alistador* alist4 = new Alistador(colaAlisto, colaAlistados, tbl, listaArt);
    //Alistador* alist5 = new Alistador(colaAlisto, colaAlistados, tbl, listaArt);
    //Alistador* alist6 = new Alistador(colaAlisto, colaAlistados, tbl, listaArt);

    //alist1->start();
    //alist2->start();
    //alist3->start();
    //alist4->start();
    //alist5->start();
    //alist6->start();

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
/*
Balanceador * MainWindow::getBalanceador(){
    Balanceador *b= new Balanceador(listaArt, colaPedidos, colaAlisto, colaA, colaB, colaC, colaComodin);
}
*/

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

