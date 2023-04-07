
//#include "mainwindow.h"
#include "procedimientos.h"
#include "structs.h"
#include <QApplication>



int main(int argc, char *argv[])
{
    //QApplication a(argc, argv);
    listaClientes *lista = new listaClientes();
    listaArticulos *listaArt = new listaArticulos();
    CargarArticulos(listaArt);
    //cargarClientes(lista);
    //MainWindow w;
    //w.show();
    //return a.exec();
    return 0;
}
