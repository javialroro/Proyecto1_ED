
#ifndef PRIORITYQUEUE_H
#define PRIORITYQUEUE_H
#include <QList>
#include "Queue.h"
#include "structs.h"

struct PriorityQueue;

using namespace std;


struct PriorityQueue{
    int counter; // Variable que lleva la cantidad de pedidos encolados en general.
    QList<Queue<Pedido>> listQueue;

    // Constructor que genera la lista de queues que manejará la prioridad
    PriorityQueue(){
        Queue<Pedido> queue01; //= new Queue<Pedido>();
        listQueue.append(queue01);
        Queue<Pedido> queue02; // = new Queue<Pedido>();
        listQueue.append(queue02);
        Queue<Pedido> queue03; // = new Queue<Pedido>();
        listQueue.append(queue03);
        Queue<Pedido> queue04; // = new Queue<Pedido>();
        listQueue.append(queue04);
        Queue<Pedido> queue05; // = new Queue<Pedido>();
        listQueue.append(queue05);
        Queue<Pedido> queue06; // = new Queue<Pedido>();
        listQueue.append(queue06);
        Queue<Pedido> queue07; // = new Queue<Pedido>();
        listQueue.append(queue07);
        Queue<Pedido> queue08; // = new Queue<Pedido>();
        listQueue.append(queue08);
        Queue<Pedido> queue09; // = new Queue<Pedido>();
        listQueue.append(queue09);
        Queue<Pedido> queue10; // = new Queue<Pedido>();
        listQueue.append(queue10);
    } // Dejo los new comentados en caso de futuros inconvenientes

    // enQueue adaptado
    void enQueuePriority (int prioridad, Pedido newPedido){
        listQueue[prioridad-1].enQueue(newPedido);
        counter++;
    }

    // deQueue adaptado
    Pedido deQueuePriority(){
        for (Queue<Pedido> queue : listQueue) {
            if (!queue.isEmpty()){
                counter--;
                return queue.deQueue();
            }
        }
    }

    // Validador de que los queue de la lista estén todos vacíos
    bool isEmptyPriority(){
        for (const auto& queue : listQueue) {
            if (!queue.isEmpty())
                return false;
        }
        return true;
    }

    // Método para obtener la cantidad de Pedidos encolados independientemente de las prioridades
    int cantidadEnCola(){
        return counter;
    }

    Queue<Pedido*> to_Queue(){
        Queue<Pedido*> result;
        for (Queue<Pedido*>& queue : listQueue) {
            Queue<Pedido*> queueCopy = queue;
            result.enQueueQ(queueCopy);
        }
        return result;
    }

    // Convertir a string toda la cola
    //QString _toString(){
    //    QString result;
    //    for (const auto& queue : listQueue) {
    //        if (!queue.isEmpty())
    //            result.append(queue._toString());
    //    }
    //    return result;
    //}
};



#endif // PRIORITYQUEUE_H
