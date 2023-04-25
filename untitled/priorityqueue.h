
#ifndef PRIORITYQUEUE_H
#define PRIORITYQUEUE_H
#include <QList>
#include "Queue.h"
#include "structs.h"

struct PriorityQueue;

using namespace std;


struct PriorityQueue{
    int CantEnCola; // Variable que lleva la cantidad de pedidos encolados en general.
    int CantDesencolados; //Variable que lelva la cantidad de pedidos que han sido desencolados en general.
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
        CantEnCola++;
        cout<<"Encolado correctamente en la Queue de prioridad"<<endl;
    }

    // deQueue adaptado
    Pedido* deQueuePriority() {
        for (Queue<Pedido*>& queue : listQueue) {
            if (!queue.isEmpty()) {
                CantEnCola--;
                CantDesencolados++;
                return queue.deQueue();
                cout<<"Desencolado correctamente de la Queue de prioridad: "<< CantDesencolados <<endl;
            }
        }
        return nullptr;
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
    int getCantidadEnCola(){
        return CantEnCola;
    }

    // Método para obtener la cantidad de Pedidos desencolados independientemente de las prioridades
    int getCantidadDesencolados(){
        return CantDesencolados;
    }

    // Convertir a string toda la cola
    //QString toString() const {
    //    QString result;
    //    if (queue.isEmpty()) {
    //        result = "La cola esta vacia.";
    //    } else {
    //        Queue<Pedido*> temp(queue);
    //        while (!temp.isEmpty()) {
    //            result.append(temp.front()->to_String());
    //            temp.dequeue();
    //            if (!temp.isEmpty()) {
    //                result.append("\n");
    //            }
    //        }
    //    }
    //    return result;
    //}


};



#endif // PRIORITYQUEUE_H
