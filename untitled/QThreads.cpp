#include "QThreads.h"

<<<<<<< Updated upstream
#include <QtCore>
#include <QThread>
#include <QDir>
#include <QDebug>
#include "priorityqueue.h"


//Se inicializa la cola que se usará
PriorityQueue* qPedidos = new PriorityQueue();
=======
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
>>>>>>> Stashed changes
