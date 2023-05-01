

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

    Alistados * al = new Alistados(colaF,colaAlisto,"");
    RevisorArchivos * revisor= new RevisorArchivos(listaArt,lista,colaPedidos);
    Balanceador * balanceador= new Balanceador(listaArt, colaPedidos, colaAlisto, colaA, colaB, colaC, colaComodin);
    QSemaphore s(1);

    //qDebug() << "pasa lbl";
    QLabel * lbl= new QLabel();
    lbl->setText("Fabricacion");

    Fabrica *A = new Fabrica(listaArt, colaAlisto, colaA,"A",s,"Fabrica A",lbl);
    Fabrica *B= new Fabrica(listaArt, colaAlisto, colaB,"B",s,"Fabrica B",lbl);
    Fabrica *C= new Fabrica(listaArt, colaAlisto, colaC,"C",s,"Fabrica C",lbl);
    Fabrica *Comodin= new Fabrica(listaArt, colaAlisto, colaComodin,"A","B",s,"Fabrica Comodin",lbl);
    Facturadora * facturadora = new Facturadora(colaAlistados);
    //qDebug() << "pasa fabricas";



    MainWindow* w = new MainWindow(colaPedidos,colaAlisto,colaAlistados,colaA,colaB,colaC,colaComodin,colaAlistadores,listaArt,lista,al,revisor, balanceador,A,B,C,Comodin,
                                   facturadora,lbl);
    w->show();
    qDebug() << "muestra interfaz";

    Bodega* bodega = new Bodega(colaAlisto, colaAlistados, colaAlistadores);
    bodega->start();
    qDebug() << "pasa bodega";

    return a.exec();

}
