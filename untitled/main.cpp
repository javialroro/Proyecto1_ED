
#include "mainwindow.h"
#include "procedimientos.h"
#include "structs.h"
#include <QApplication>
<<<<<<< Updated upstream
#include "QThreads.h"
#include "mainwindow.h"
=======
//#include "QThreads.h"

>>>>>>> Stashed changes



int main(int argc, char *argv[]){

    QApplication a(argc, argv);

    listaClientes *lista = new listaClientes();
    listaArticulos *listaArt = new listaArticulos();
    CargarArticulos(listaArt);
    cargarClientes(lista);

    RevisorArchivos revisor;
    revisor.start();

<<<<<<< Updated upstream
=======
    Balanceador balanceador(listaArt, colaPedidos, colaAlistados, colaA, colaB, colaC, colaComodin);
    balanceador.start();
    QSemaphore s(1);

    //modificarArchivo("C:\\Users\\javia\\OneDrive - Estudiantes ITCR\\TEC\\TEC 3 Semestre\\Estructuras de Datos\\Proyectos\\Proyecto1_ED\\untitled\\Articulos\\",40,"A01");
    //modificarArchivo("C:\\Users\\QUIROS CALVO\\Trabajos_TEC_2023\\ED_\\I Proyecto\\untitled\\Articulos\\",40,"A01");

    Fabrica *A = new Fabrica(listaArt,colaAlistados,colaA,"A",s);
    Fabrica *B= new Fabrica(listaArt,colaAlistados,colaB,"B",s);
    Fabrica *C= new Fabrica(listaArt,colaAlistados,colaC,"C",s);
    Fabrica *Comodin= new Fabrica(listaArt,colaAlistados,colaA,colaComodin,"A","B",s);

    A->start();
    B->start();
    C->start();
    Comodin->start();

    Fabricacion1 fabricacion(A,B,C,Comodin);
    //fabricacion.start();

    MainWindow *w = new MainWindow(&revisor, &balanceador, A, B, C, Comodin, &fabricacion);
    w->show();

>>>>>>> Stashed changes
    return a.exec();
    return 0;
}
