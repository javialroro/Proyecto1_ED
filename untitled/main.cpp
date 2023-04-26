
#include "mainwindow.h"
#include <QApplication>
#include "QThreads.h"

int main(int argc, char *argv[]){
QApplication a(argc, argv);
///*


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


    RevisorArchivos revisor(listaArt,lista,colaPedidos);
    revisor.start();

    Balanceador balanceador(listaArt, colaPedidos, colaAlistados, colaA, colaB, colaC, colaComodin);
    balanceador.start();
    QSemaphore s(1);

    Fabrica *A = new Fabrica(listaArt,colaAlistados,colaA,"A",s);
    Fabrica *B= new Fabrica(listaArt,colaAlistados,colaB,"B",s);
    Fabrica *C= new Fabrica(listaArt,colaAlistados,colaC,"C",s);
    Fabrica *Comodin= new Fabrica(listaArt,colaAlistados,colaA,colaComodin,"A","B",s);

    A->start();
    B->start();
    C->start();
    Comodin->start();

    //Fabricacion1 fabricacion(A,B,C,Comodin);
    //fabricacion.start();

    MainWindow w = new MainWindow(colaPedidos, colaAlistados, colaA, colaB, colaC, colaComodin);
    w.show();

return a.exec();
    return 0;
}
