#ifndef QUEUE_H
#define QUEUE_H

#include <QList>
#include <QDebug>
#include <QObject>
#include "structs.h"

template <typename T>
struct Queue {
public:
    // Metodo que agrega un elemento al final de la cola
    void enQueue(const T& value) {
        m_items.append(value); // append agrega al final
    }

    // Metodo que remueve el primer elemento de la cola, y lo retorna
    T deQueue() {
        Q_ASSERT(!m_items.isEmpty()); // Expresión de aserción que valida que la cola no esté vacía, este genera un error especial en caso de que dé false
        return m_items.takeFirst();
    }

    // Metodo que valida si la cola está vacía
    bool isEmpty() const {
        return m_items.isEmpty();
    }

    // Metodo que devuelve el tamaño de la cola
    int size() const {
        return m_items.size();
    }

    // Metodo que despliega en consola la información de la cola
    void print() const {
        qDebug() << "Queue size:" << size();
        qDebug() << "Queue contents:";
        for (const T& value : m_items) {
            qDebug() << value;
        }
    }

    // Metodo que copia la cola en cuestion.
    Queue<T> copyQueue() {
        Queue<T> copy;
        Queue<T> temp;
        // Copia los elementos de la queue original a una temporal
        while (!m_items.isEmpty()) {
            T item = m_items.takeFirst();
            temp.enQueue(item);
        }
        // Copia los elementos de la queue temporal a la copia
        while (!temp.isEmpty()) {
            T item = temp.deQueue();
            copy.enQueue(item);
            m_items.append(item); // Reestablece la queue original
        }
        return copy;
    }

    void enQueueQ(Queue<T> &queue) {
        Queue<T> queueCopy = queue.copyQueue();
        while (!queueCopy.isEmpty()) {
            m_items.append(queueCopy.deQueue());
        }
    }

    // Metodo de converción a string de la cola
    QString _toString() {
        QString result;
        for (int i = m_items.size() - 1; i >= 0; --i) {
            if (i < m_items.size() - 1) {
                result.append('\n');
            }
            result.append(QString::fromStdString(m_items.at(i).to_String()));
        }
        return result;
    }

private:
    QList<T> m_items; // Creación de cola de elementos
};

#endif // QUEUE_H
