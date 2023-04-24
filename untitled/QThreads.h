
#ifndef QTHREADS_H
#define QTHREADS_H
#include <QtCore>
#include <QThread>
#include <QDir>
#include <QDebug>
#include "procedimientos.h"




// Variables globales
//PriorityQueue * qPedidos = new PriorityQueue();
//extern QMutex g_mutex;

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

                    string ruta_archivo = todo;
                    string ruta_pedidosP = "C:\\Users\\javia\\OneDrive - Estudiantes ITCR\\TEC\\TEC 3 Semestre\\Estructuras de Datos\\Proyectos\\Proyecto1_ED\\untitled\\PedidosProcesados\\"+cArchivo;
                    //string ruta_pedidosP = "C:\\Users\\QUIROS CALVO\\Trabajos_TEC_2023\\ED_\\I Proyecto\\untitled\\PedidosProcesados\\"+cArchivo;

                    rename(ruta_archivo.c_str(),ruta_pedidosP.c_str());
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
                    tmp->articulo->imprimir();

                    if (!verif){
                        cout<<"---------A COLA DE FABRICACION---------"<<endl;
                        tmp->articulo->imprimir();
                        cout<<"---------------------------------------"<<endl;
                        tmp->articulo->aFabrica=true;
                        NodoArticulo *cat= lista->buscar(tmp->articulo->codProd);
                        string categoria =cat->articulo->categoria;


                        if (categoria == "A") {
                            //cout<<"A"<<endl;
                            encolarMenor(f1,f4,pedido);
                            cout<<"Encolado en A"<<endl;
                            flag= false;

                        } else if (categoria == "B") {
                            encolarMenor(f2,f4,pedido);
                            cout<<"Encolado en B"<<endl ;
                            flag= false;

                        } else if (categoria == "C") {

                            f3.enQueue(pedido);
                            cout<<"Encolado en C"<<endl;
                            flag= false;

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
    Fabrica(listaArticulos  * l, Queue<Pedido *>& colaAlistos,Queue<Pedido *> & A, string cat,QSemaphore& sem,QObject* parent = nullptr)
        : QThread(parent), a_queue(colaAlistos), cola(A), lista(l), _categoria(cat),semaphore(sem)

    {
    }
    Fabrica(listaArticulos  * l, Queue<Pedido *>& colaAlistos,Queue<Pedido *> & A,Queue<Pedido *> & B, string cat, string cat2,QSemaphore& sem,QObject* parent = nullptr)
        : QThread(parent), a_queue(colaAlistos), cola(A), lista(l), _categoria(cat), _categoria2(cat2), cola2(B),semaphore(sem)
    {
    }
    Queue<Pedido *> & cola;
    //string ruta_archivo = "C:\\Users\\javia\\OneDrive - Estudiantes ITCR\\TEC\\TEC 3 Semestre\\Estructuras de Datos\\Proyectos\\Proyecto1_ED\\untitled\\Articulos\\articulos.txt";

    bool fabricando;

    void run() override {


        while (true) {

            semaphore.acquire();

            while(!cola.isEmpty()){
                Pedido * pedido = cola.deQueue();

                NodoArticuloP *tmp = pedido->listaPedido->pn;

                bool flag= true;

                while (tmp != NULL){
                    NodoArticulo * n =lista->buscar(tmp->articulo->codProd);
                    string categoria =n->articulo->categoria;
                    if (categoria  ==_categoria | categoria  ==_categoria2){
                        if (tmp->articulo->aFabrica && !tmp->articulo->fabricado){
                            cout<<tmp->articulo->codProd<<endl;

                            fabricando=true;
                            int cantidadN= n->articulo->cantidadAlmacen+=(tmp->articulo->cantidad);
                            n->articulo->cantidadAlmacen= cantidadN;
                            tmp->articulo->fabricado=true;
                            cambiar(n->articulo->codigo,1,cantidadN);


                            sleep(n->articulo->segundosF);

                            a_queue.enQueue(pedido);
                            cout<<"Encolado en queue de pedidos"<<endl;




                        }
                    }
                    fabricando=false;
                    tmp = tmp->siguiente;

                }


            }
            semaphore.release();

            // Esperar un tiempo antes de continuar

        }
    }

private:
    Queue<Pedido *>& a_queue;

    listaArticulos * lista;
    string _categoria;
    string _categoria2;
    Queue<Pedido *> cola2;
    QSemaphore& semaphore;


};


class Fabricacion : public QThread {

public:
    Fabricacion(Fabrica *a,Fabrica *b,Fabrica *c,Fabrica *d,QObject* parent = nullptr)
        : QThread(parent), A(a),B(b),C(c),Comodin(d)
    {

    }

    void run() override {


        while (true) {
            A->start();
            B->start();
            C->start();
            Comodin->start();

            if(A->fabricando){
                B->wait();
                C->wait();
                Comodin->wait();
            }

            if(B->fabricando){
                A->wait();
                C->wait();
                Comodin->wait();
            }

            if(C->fabricando){
                A->wait();
                B->wait();
                Comodin->wait();
            }

            if(Comodin->fabricando){
                A->wait();
                C->wait();
                B->wait();
            }




        }
    }

private:
    Fabrica *A;
    Fabrica *B;
    Fabrica *C;
    Fabrica *Comodin;

};

class Fabricacion1 : public QThread {


public:
    Fabricacion1(Fabrica *a, Fabrica *b, Fabrica *c, Fabrica *d, QObject *parent = nullptr)
        : QThread(parent), A(a), B(b), C(c), D(d), fabrica_actual(nullptr)
    {

    }

    void run() override {
        while (true) {

            // Esperar a que la fábrica actual termine
            if (fabrica_actual != nullptr) {
                cout<<"para";
                fabrica_actual->wait();
                cout<<"paro";
                fabrica_actual = nullptr;
            }

            // Escoger la siguiente fábrica que debe trabajar
            if (!A->isRunning() && !A->cola.isEmpty()) {
                fabrica_actual = A;
                cout<<"f a"<<endl;
            } else if (!B->isRunning() && !B->cola.isEmpty()) {
                fabrica_actual = B;
                cout<<"f b"<<endl;
            } else if (!C->isRunning() && !C->cola.isEmpty()) {
                fabrica_actual = C;
                cout<<"f c"<<endl;
            } else if (!D->isRunning() && !D->cola.isEmpty()) {
                fabrica_actual = D;
                cout<<"f d"<<endl;
            } else {
                // Esperar un tiempo antes de revisar las fábricas de nuevo
                sleep(1);
                continue;
            }
            //cout<<fabrica_actual;

            // Iniciar la fábrica actual
            fabrica_actual->start();
        }
    }

private:
    Fabrica *A;
    Fabrica *B;
    Fabrica *C;
    Fabrica *D;
    Fabrica *fabrica_actual;

};




#endif // QTHREADS_H
