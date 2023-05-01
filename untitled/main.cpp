

#include <QApplication>

#include "mainwindow.h"
#include "QLabel"


int main(int argc, char *argv[]){
    QApplication a(argc, argv);
    //qDebug() << "pasa QApplication";


    PriorityQueue * colaPedidos = new PriorityQueue();
    Queue<Pedido *> colaAlisto;
    Queue<Pedido *> colaAlistados;
    Queue<Pedido *> colaA;
    Queue<Pedido *> colaB;
    Queue<Pedido *> colaC;
    Queue<Pedido *> colaComodin;
    Queue<Alistador *> colaAlistadores;
    Queue<Pedido *> colaF;

    listaClientes *lista = new listaClientes();
    listaArticulos *listaArt = new listaArticulos();

    Alistados * al = new Alistados(colaF,colaAlistados,"");
    RevisorArchivos * revisor= new RevisorArchivos(listaArt,lista,colaPedidos);
    Balanceador * balanceador= new Balanceador(listaArt, colaPedidos, colaAlisto, colaA, colaB, colaC, colaComodin);
    QSemaphore s(1);

    //qDebug() << "pasa lbl";

    Fabrica *A = new Fabrica(listaArt, colaAlisto, colaA,"A",s,"Fabrica A");
    Fabrica *B= new Fabrica(listaArt, colaAlisto, colaB,"B",s,"Fabrica B");
    Fabrica *C= new Fabrica(listaArt, colaAlisto, colaC,"C",s,"Fabrica C");
    Fabrica *Comodin= new Fabrica(listaArt, colaAlisto, colaComodin,"A","B",s,"Fabrica Comodin");
    Facturadora * facturadora = new Facturadora(colaF);
    //qDebug() << "pasa fabricas";

    Bodega* bodega = new Bodega(colaAlisto, colaAlistados, colaAlistadores,listaArt);


    MainWindow* w = new MainWindow(colaPedidos,colaAlisto,colaAlistados,colaA,colaB,colaC,colaComodin,colaAlistadores,listaArt,lista,al,revisor, balanceador,A,B,C,Comodin,
                                   facturadora,bodega,colaF);
    w->show();
    //qDebug() << "muestra interfaz";


    //qDebug() << "pasa bodega";

    return a.exec();

}
