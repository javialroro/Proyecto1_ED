

#include <QApplication>
#include "QThreads.h"
#include "mainwindow.h"

int main(int argc, char *argv[]){
    QApplication a(argc, argv);
    listaClientes *lista = new listaClientes();
    listaArticulos *listaArt = new listaArticulos();
    CargarArticulos(listaArt);
    cargarClientes(lista);

    PriorityQueue * colaPedidos = new PriorityQueue();
    Queue<Pedido *> colaAlistos;
    Queue<Pedido *> colaA;
    Queue<Pedido *> colaB;
    Queue<Pedido *> colaC;
    Queue<Pedido *> colaComodin;

    MainWindow w = new MainWindow(colaPedidos, colaAlistos, colaA, colaB, colaC, colaComodin);
    w.show();

    RevisorArchivos revisor(listaArt,lista,colaPedidos);
    revisor.start();
    qDebug()<<colaPedidos->getCantidadEnCola();

    Balanceador balanceador(listaArt, colaPedidos, colaAlistos, colaA, colaB, colaC, colaComodin);
    balanceador.start();

    QSemaphore s(1);

    Fabrica *A = new Fabrica(listaArt,colaAlistos,colaA,"A",s,"Fabrica A");
    Fabrica *B= new Fabrica(listaArt,colaAlistos,colaB,"B",s,"Fabrica B");
    Fabrica *C= new Fabrica(listaArt,colaAlistos,colaC,"C",s,"Fabrica C");
    Fabrica *Comodin= new Fabrica(listaArt,colaAlistos,colaA,colaComodin,"A","B",s,"Fabrica Comodin");


    A->start();
    B->start();
    C->start();
    Comodin->start();


    QTableWidget* tbl = w.getQTable();

    //Alistador* alist1 = new Alistador(colaAlistos, tbl, listaArt);
    //alist1->start();



return a.exec();
    return 0;
}
