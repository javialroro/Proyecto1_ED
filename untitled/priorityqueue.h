
#ifndef PRIORITYQUEUE_H
#define PRIORITYQUEUE_H

#include "Queue.h"


struct PriorityQueue;

//using namespace std;


struct PriorityQueue{
    QList<Queue<Pedido *>> listQueue;

    // Constructor que genera la lista de queues que manejará la prioridad
    PriorityQueue(){
        Queue<Pedido *> queue01; //= new Queue<Pedido>();
        listQueue.append(queue01);
        Queue<Pedido *> queue02; // = new Queue<Pedido>();
        listQueue.append(queue02);
        Queue<Pedido *> queue03; // = new Queue<Pedido>();
        listQueue.append(queue03);
        Queue<Pedido *> queue04; // = new Queue<Pedido>();
        listQueue.append(queue04);
        Queue<Pedido *> queue05; // = new Queue<Pedido>();
        listQueue.append(queue05);
        Queue<Pedido *> queue06; // = new Queue<Pedido>();
        listQueue.append(queue06);
        Queue<Pedido *> queue07; // = new Queue<Pedido>();
        listQueue.append(queue07);
        Queue<Pedido *> queue08; // = new Queue<Pedido>();
        listQueue.append(queue08);
        Queue<Pedido *> queue09; // = new Queue<Pedido>();
        listQueue.append(queue09);
        Queue<Pedido *> queue10; // = new Queue<Pedido>();
        listQueue.append(queue10);
    } // Dejo los new comentados en caso de futuros inconvenientes

    // enQueue adaptado
    void enQueuePriority (int prioridad, Pedido * newPedido){
        listQueue[prioridad-1].enQueue(newPedido);
        counter++;
        cout<<"Encolado correctamente en la Queue de prioridad"<<endl;
    }

    // deQueue adaptado
    Pedido* deQueuePriority() {
        for (Queue<Pedido*>& queue : listQueue) {
            if (!queue.isEmpty()) {
                counter--;
                countDesencolados++;
                return queue.deQueue();
            }
        }
        return nullptr;
    }

    // Validador de que los queue de la lista estén todos vacíos
    bool isEmptyPriority() {
        //qDebug() << "Entra al Empty";
        for (int i = 0; i < listQueue.size(); ++i) {
            //qDebug() << "Entra al for";
            if (!listQueue[i].isEmpty())
                return false;
        }
        return true;
    }

    // Método para obtener la cantidad de Pedidos encolados independientemente de las prioridades
    int getCantidadEnCola(){
        return counter;
    }

    int getCantDesencolados(){
        return countDesencolados;
    }

    // Convertir a string toda la cola
    QString _toString() const {
        QString result = "";
        int i = 0;
        while (i < 10) {
            if (!listQueue[i].isEmpty()){
                result.append(listQueue[i]._toString());
            }
            i++;
        }
        return result;
    }
private:
    int counter = 0; // Variable que lleva la cantidad de pedidos encolados en general.
    int countDesencolados = 0;
};



#endif // PRIORITYQUEUE_H
