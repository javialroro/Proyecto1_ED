
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

    PriorityQueue* getColaPedidos(){
        return colaPedidos;
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
    if (q1.getCantidadEnCola() <= q2.getCantidadEnCola()) {
        q1.enQueue(pedido);
        cout<<"Encolado en queue principal"<<endl;

    }
    else {
        q2.enQueue(pedido);
        cout<<"Encolado en queue comodin"<<endl;

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

                    bool verif =tmp->haySuficiente(lista);

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

                            flag= false;

                        } else if (categoria == "B") {
                            encolarMenor(f2,f4,pedido);
                            flag= false;

                        } else if (categoria == "C") {

                            f3.enQueue(pedido);
                            flag= false;

                        }
                    }

                    tmp = tmp->siguiente;
                }
                if (flag){
                    pedido->infoFactura[1]="Este articulo no necesito ir a fabrica\n";
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
                            int falta= tmp->articulo->cantidad - n->articulo->cantidadAlmacen;

                            pedido->infoFactura[1]="A fabrica: "+retornarHora()+" Faltaba "+to_string(falta)+" de"+tmp->articulo->codProd+"\n";

                            int cantidadN= n->articulo->cantidadAlmacen+=(tmp->articulo->cantidad);
                            n->articulo->cantidadAlmacen= cantidadN;
                            tmp->articulo->fabricado=true;
                            cambiar(n->articulo->codigo,1,cantidadN);


                            sleep(n->articulo->segundosF);

                            a_queue.enQueue(pedido);
                            cout<<"Encolado en queue de pedidos"<<endl;




                        }
                    }
                    tmp = tmp->siguiente;

                }


            }
            sleep(1);

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

class Facturadora : public QThread {

public:
    Facturadora(Queue<Pedido *> & A, QObject* parent = nullptr)
        : QThread(parent),  cola(A)

    {
    }

    Queue<Pedido *> & cola;
    //string ruta_archivo = "C:\\Users\\javia\\OneDrive - Estudiantes ITCR\\TEC\\TEC 3 Semestre\\Estructuras de Datos\\Proyectos\\Proyecto1_ED\\untitled\\Articulos\\articulos.txt";


    void run() override {


        while (true) {


            while(!cola.isEmpty()){

                Pedido * pedido = cola.deQueue();
                string name= to_string(pedido->numPedido)+"_"+pedido->codCliente+"_"+retornarHora()+".txt";

                fstream factura("C:\\Users\\javia\\OneDrive - Estudiantes ITCR\\TEC\\TEC 3 Semestre\\Estructuras de Datos\\Proyectos\\Proyecto1_ED\\untitled\\Facturas\\"+name);

                factura<<"Pedido: "+to_string(pedido->numPedido)+"\n"+"Cliente: "+pedido->codCliente+"\n";

                for (int i=0 ; i<10; i++ ){
                    factura << pedido->infoFactura[i];
                }


            }
        }


    }
};





#endif // QTHREADS_H
