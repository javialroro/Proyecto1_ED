
//#include "mainwindow.h"
//#include "procedimientos.h"
//#include "structs.h"
#include <QApplication>
#include "QThreads.h"
#include "mainwindow.h"



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    listaClientes *lista = new listaClientes();
    listaArticulos *listaArt = new listaArticulos();
    CargarArticulos(listaArt);
    cargarClientes(lista);

    RevisorArchivos revisor;
    revisor.start();

    return a.exec();
    return 0;
}
