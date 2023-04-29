

#include <QApplication>
#include "QThreads.h"
#include "mainwindow.h"
#include "QLabel"

int main(int argc, char *argv[]){
    QApplication a(argc, argv);

    listaClientes *lista = new listaClientes();
    listaArticulos *listaArt = new listaArticulos();
    CargarArticulos(listaArt);
    cargarClientes(lista);

    PriorityQueue * colaPedidos = new PriorityQueue();
    Queue<Pedido *> colaAlistados;
    Queue<Pedido *> colaA;
    Queue<Pedido *> colaB;
    Queue<Pedido *> colaC;
    Queue<Pedido *> colaComodin;

    MainWindow* w = new MainWindow(colaPedidos, colaAlistados, colaA, colaB, colaC, colaComodin);
    w->show();

    RevisorArchivos revisor(listaArt,lista,colaPedidos);
    revisor.start();

    Balanceador balanceador(listaArt, colaPedidos, colaAlistados, colaA, colaB, colaC, colaComodin);
    balanceador.start();

    QSemaphore s(1);
    QLabel * lbl=w->findChild<QLabel*>("label");
    lbl->setText("Fabricacion");



    Fabrica *A = new Fabrica(listaArt,colaAlistados,colaA,"A",s,"Fabrica A",lbl);
    Fabrica *B= new Fabrica(listaArt,colaAlistados,colaB,"B",s,"Fabrica B",lbl);
    Fabrica *C= new Fabrica(listaArt,colaAlistados,colaC,"C",s,"Fabrica C",lbl);
    Fabrica *Comodin= new Fabrica(listaArt,colaAlistados,colaA,colaComodin,"A","B",s,"Fabrica Comodin",lbl);

    A->start();
    B->start();
    C->start();
    Comodin->start();

    QTableWidget* tbl = w->getQTable();

    Alistador* alist1 = new Alistador(colaAlistados, tbl, listaArt);
    alist1->start();



    return a.exec();

}
