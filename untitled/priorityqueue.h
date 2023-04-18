
#ifndef PRIORITYQUEUE_H
#define PRIORITYQUEUE_H
#include <vector>
#include "Queue.h"
#include "structs.h"

struct PriorityQueue;

using namespace std;

struct Nodo {
    Queue<Pedido> queue;
    Nodo* anterior;
    Nodo* siguiente;
};

struct PriorityQueue{ // Sera en realidad una lista doble enlasada
    int counter;
    Nodo* pn, *un;
    vector<Queue>* PriorityVector;

    PriorityQueue(){
        vector<Queue>* PriorityVector = new vector<Queue>;

        Queue<Pedido> qPrioridad10;
        Queue<Pedido> qPrioridad09;
        Queue<Pedido> qPrioridad08;
        Queue<Pedido> qPrioridad07;
        Queue<Pedido> qPrioridad06;
        Queue<Pedido> qPrioridad05;
        Queue<Pedido> qPrioridad04;
        Queue<Pedido> qPrioridad03;
        Queue<Pedido> qPrioridad02;
        Queue<Pedido> qPrioridad01;

        PriorityVector->push_back(qPrioridad10);
        PriorityVector->push_back(qPrioridad09);
        PriorityVector->push_back(qPrioridad08);
        PriorityVector->push_back(qPrioridad07);
        PriorityVector->push_back(qPrioridad06);
        PriorityVector->push_back(qPrioridad05);
        PriorityVector->push_back(qPrioridad04);
        PriorityVector->push_back(qPrioridad03);
        PriorityVector->push_back(qPrioridad02);
        PriorityVector->push_back(qPrioridad01);

        for (Queue<Pedido> queue : PriorityVector) {
            if (queue==qPrioridad10)
                cout << "P 10" << endl;
            else if (queue==qPrioridad09)
                cout << "P 09" << endl;
            else if (queue==qPrioridad08)
                cout << "P 08" << endl;
            else if (queue==qPrioridad07)
                cout << "P 07" << endl;
            else if (queue==qPrioridad06)
                cout << "P 06" << endl;
            else if (queue==qPrioridad05)
                cout << "P 05" << endl;
            else if (queue==qPrioridad04)
                cout << "P 04" << endl;
            else if (queue==qPrioridad03)
                cout << "P 03" << endl;
            else if (queue==qPrioridad02)
                cout << "P 02" << endl;
            else if (queue==qPrioridad01)
                cout << "P 01" << endl;
        }
    }
};


#endif // PRIORITYQUEUE_H
