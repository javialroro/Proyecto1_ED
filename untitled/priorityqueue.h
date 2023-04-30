
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
        if (prioridad == 10){
            listQueue[0].enQueue(newPedido);
            counter++;
        }else if (prioridad == 9){
            listQueue[1].enQueue(newPedido);
            counter++;
        }else if (prioridad == 8){
            listQueue[2].enQueue(newPedido);
            counter++;
        }else if (prioridad == 7){
            listQueue[3].enQueue(newPedido);
            counter++;
        }else if (prioridad == 6){
            listQueue[4].enQueue(newPedido);
            counter++;
        }else if (prioridad == 5){
            listQueue[5].enQueue(newPedido);
            counter++;
        }else if (prioridad == 4){
            listQueue[6].enQueue(newPedido);
            counter++;
        }else if (prioridad == 3){
            listQueue[7].enQueue(newPedido);
            counter++;
        }else if (prioridad == 2){
            listQueue[8].enQueue(newPedido);
            counter++;
        }else if (prioridad == 1){
            listQueue[9].enQueue(newPedido);
            counter++;
        }
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
