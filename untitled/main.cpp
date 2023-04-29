

#include <QApplication>

#include "mainwindow.h"
#include "QLabel"
#include "QThreads.h"

int main(int argc, char *argv[]){
    QApplication a(argc, argv);
    //qDebug() << "pasa QApplication";

    listaClientes *lista = new listaClientes();
    listaArticulos *listaArt = new listaArticulos();
    CargarArticulos(listaArt);
    cargarClientes(lista);
    //qDebug() << "pasa inicializacion listas";

    PriorityQueue * colaPedidos = new PriorityQueue();
    Queue<Pedido *> colaAlisto;
    Queue<Pedido *> colaAlistados;
    Queue<Pedido *> colaA;
    Queue<Pedido *> colaB;
    Queue<Pedido *> colaC;
    Queue<Pedido *> colaComodin;
    //qDebug() << "pasa inicializacion queue";

    MainWindow* w = new MainWindow(colaPedidos, colaAlisto, colaAlistados, colaA, colaB, colaC, colaComodin);
    w->show();
    //qDebug() << "pasa mainwindow";

    RevisorArchivos revisor(listaArt,lista,colaPedidos);
    revisor.start();
    //qDebug() << "pasa revisor";

    Balanceador balanceador(listaArt, colaPedidos, colaAlistados, colaA, colaB, colaC, colaComodin);
    balanceador.start();
    //qDebug() << "pasa balanceador";

    QSemaphore s(1);
    QLabel * lbl = w->getLabelFabricacion();
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

    QTableWidget* tbl = w->getQTable();

    Alistador* alist1 = new Alistador(colaAlisto, colaAlistados, tbl, listaArt);
    Alistador* alist2 = new Alistador(colaAlisto, colaAlistados, tbl, listaArt);
    Alistador* alist3 = new Alistador(colaAlisto, colaAlistados, tbl, listaArt);
    Alistador* alist4 = new Alistador(colaAlisto, colaAlistados, tbl, listaArt);
    Alistador* alist5 = new Alistador(colaAlisto, colaAlistados, tbl, listaArt);
    Alistador* alist6 = new Alistador(colaAlisto, colaAlistados, tbl, listaArt);

    alist1->start();
    alist2->start();
    alist3->start();
    alist4->start();
    alist5->start();
    alist6->start();
    //qDebug() << "pasa alistador";

    return a.exec();

}
