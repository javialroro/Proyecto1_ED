
#ifndef QTHREADS_H
#define QTHREADS_H
#include <QtCore>
#include <QThread>
#include <QDir>
#include <QDebug>
#include "procedimientos.h"
#include "priorityqueue.h"
#include "structs.h"


// Variables globales
//PriorityQueue * qPedidos = new PriorityQueue();
extern QMutex g_mutex;

class RevisorArchivos : public QThread {
public:
    RevisorArchivos(listaArticulos  * la, listaClientes *lc, PriorityQueue * pq, QObject* parent = nullptr)
        : QThread(parent), listaArticulos(la) , listaClientes(lc) , colaPedidos(pq)
    {
    }
    void run() override {
        while (true) {
            QString path = "C:\\Users\\javia\\OneDrive - Estudiantes ITCR\\TEC\\TEC 3 Semestre\\Estructuras de Datos\\Proyectos\\Proyecto1_ED\\untitled\\Pedidos";
            //QString path = "C:\\Users\\QUIROS CALVO\\Trabajos_TEC_2023\\ED_\\I Proyecto\\untitled\\Pedidos";
            QDir directorio(path);
            QStringList archivos = directorio.entryList(QStringList() << "*.txt", QDir::Files);
            if (archivos.size() > 0) {
                qDebug() << "Archivos encontrados:";
                for (const auto& archivo : archivos) {
                    qDebug()<<archivo;

                    string cPath= path.toStdString()+"\\";
                    string cArchivo = archivo.toStdString();
                    string todo= cPath+cArchivo;
                    string errores = "C:\\Users\\javia\\OneDrive - Estudiantes ITCR\\TEC\\TEC 3 Semestre\\Estructuras de Datos\\Proyectos\\Proyecto1_ED\\untitled\\Errores\\"+cArchivo;
                    //string errores = "C:\\Users\\QUIROS CALVO\\Trabajos_TEC_2023\\ED_\\I Proyecto\\untitled\\Errores\\"+cArchivo;

                    fstream arch(todo, std::ios::in | std::ios::app);
                    Archivo *a =  new Archivo(arch,todo,errores);

                    cargarPedido(a, colaPedidos, listaClientes, listaArticulos);

                    //string ruta_archivo = todo;
                    //string ruta_pedidosP = "C:\\Users\\javia\\OneDrive - Estudiantes ITCR\\TEC\\TEC 3 Semestre\\Estructuras de Datos\\Proyectos\\Proyecto1_ED\\untitled\\PedidosProcesados\\"+cArchivo;
                    //string ruta_pedidosP = "C:\\Users\\QUIROS CALVO\\Trabajos_TEC_2023\\ED_\\I Proyecto\\untitled\\PedidosProcesados\\"+cArchivo;

                    //rename(ruta_archivo.c_str(),ruta_pedidosP.c_str());
                }
            }

            QThread::msleep(1000); // espera 1 segundo antes de revisar de nuevo
        }
    }
private:
    listaClientes * listaClientes;
    listaArticulos * listaArticulos;
    PriorityQueue * colaPedidos;

};

bool verficarCantidad(ListaArticulosP * lista, listaArticulos * listaG){
    NodoArticuloP *tmp = lista->pn;

    while (tmp != NULL){
        bool verif =tmp->haySuficiente(listaG); // metodo de imprimir un cliente
        if (!verif){
            return false;
        }
        tmp = tmp->siguiente;
    }
    return true;
}

void encolarMenor(Queue<Pedido *>& q1, Queue<Pedido *>& q2, Pedido * pedido) {
    if (q1.size() <= q2.size()) {
        q1.enQueue(pedido);

    }
    else {
        q2.enQueue(pedido);

    }
}


class Balanceador : public QThread {
public:
    Balanceador(listaArticulos  * l, PriorityQueue * colaPedidos, Queue<Pedido *>& colaAlistos,Queue<Pedido *> & A,
                Queue<Pedido *> & B,Queue<Pedido *> & C, Queue<Pedido *> & D, QObject* parent = nullptr)
        : QThread(parent), p_queue(colaPedidos) , a_queue(colaAlistos), f1(A), f2(B),f3(C),f4(D),lista(l)
    {
    }
    
    void run() override {
        while (true) {

            while(!p_queue->isEmptyPriority()){


                Pedido * pedido = p_queue->deQueuePriority();



                NodoArticuloP *tmp = pedido->listaPedido->pn;

                bool flag= true;

                while (tmp != NULL){

                    bool verif =tmp->haySuficiente(lista); // metodo de imprimir un cliente

                    if (!verif){
                        cout<<"---------A COLA DE FABRICACION---------"<<endl;
                        tmp->articulo->imprimir();
                        cout<<"---------------------------------------"<<endl;
                        NodoArticulo *cat= lista->buscar(tmp->articulo->codProd);
                        string categoria =cat->articulo->categoria;


                        if (categoria == "A") {
                            //cout<<"A"<<endl;
                            encolarMenor(f1,f4,pedido);
                            cout<<"Encolado en A"<<endl;
                            flag= false;
                            break;
                        } else if (categoria == "B") {
                            encolarMenor(f2,f4,pedido);
                            cout<<"Encolado en B" + cat->articulo->codigo<<endl;
                            flag= false;
                            break;
                        } else if (categoria == "C") {

                            f3.enQueue(pedido);
                            cout<<"Encolado en C"<<endl;
                            flag= false;
                            break;
                        }
                    }

                    tmp = tmp->siguiente;
                }
                if (flag){
                    a_queue.enQueue(pedido);
                }



            }
            
            // Esperar un tiempo antes de continuar
            sleep(1);
        }
    }
    
private:
    PriorityQueue * p_queue;
    Queue<Pedido *>& a_queue;
    Queue<Pedido *> & f1;
    Queue<Pedido *> & f2;
    Queue<Pedido *> & f3;
    Queue<Pedido *> & f4;
    listaArticulos * lista;



};

class Fabrica : public QThread {
public:
    Fabrica(listaArticulos  * l, Queue<Pedido *>& colaAlistos,Queue<Pedido *> & A, QObject* parent = nullptr)
        : QThread(parent), a_queue(colaAlistos), cola(A), lista(l)
    {
    }
    string ruta_archivo = "C:\\Users\\javia\\OneDrive - Estudiantes ITCR\\TEC\\TEC 3 Semestre\\Estructuras de Datos\\Proyectos\\Proyecto1_ED\\untitled\\Articulos\\articulos.txt";
    void run() override {


        while (true) {
            fstream arch(ruta_archivo, std::ios::in | std::ios::app);

            while(!cola.isEmpty()){
                Pedido * pedido = cola.deQueue();

                NodoArticuloP *tmp = pedido->listaPedido->pn;


                bool flag= true;

                while (tmp != NULL){
                    bool verif =tmp->haySuficiente(lista); // metodo de imprimir un cliente
                    if (!verif){
                        NodoArticulo * n =lista->buscar(tmp->articulo->codProd);
                        n->articulo->cantidadAlmacen+=(tmp->articulo->cantidad);


                    }

                    tmp = tmp->siguiente;
                }




            }

            // Esperar un tiempo antes de continuar
            sleep(1);
        }
    }

private:
    Queue<Pedido *>& a_queue;
    Queue<Pedido *> & cola;
    listaArticulos * lista;



};






#endif // QTHREADS_H
