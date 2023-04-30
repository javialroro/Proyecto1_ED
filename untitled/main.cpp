

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
    listaClientes *lista = new listaClientes();
    listaArticulos *listaArt = new listaArticulos();

    MainWindow* w = new MainWindow(colaPedidos,colaAlisto,colaAlistados,colaA,colaB,colaC,colaComodin,listaArt,lista);
    w->show();
    //qDebug() << "pasa mainwindow";


    //qDebug() << "pasa alistador";

    //ThreadContainer* contenedor = new ThreadContainer(balanceador,A,B,C,Comodin,alist1,alist2,alist3,alist4,alist5,alist6);
    //qDebug() << "pasa contenedor";



    return a.exec();

}
