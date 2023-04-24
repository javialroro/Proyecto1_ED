
#include "mainwindow.h"
#include "procedimientos.h"
#include "structs.h"
#include <QApplication>
#include "QThreads.h"




int main(int argc, char *argv[]){

    /*
    QApplication a(argc, argv);
    //MainWindow w;
    //w.show();
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

    return a.exec();
*/
    modificarArchivo("C:\\Users\\javia\\OneDrive - Estudiantes ITCR\\TEC\\TEC 3 Semestre\\Estructuras de Datos\\Proyectos\\Proyecto1_ED\\untitled\\Articulos\\"
                     ,40,"A01");
    return 0;
}
