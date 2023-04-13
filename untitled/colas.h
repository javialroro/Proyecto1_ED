#ifndef COLAS_H
#define COLAS_H

#include <QList>
#include <QDebug>
#include<QObject>

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

    // Metodo de converción a string de la cola
    QString _toString() {
        QString result;
        for (int i = m_items.size() - 1; i >= 0; --i) {
            if (i < m_items.size() - 1) {
                result.append('-');
            }
            result.append(QString::number(m_items.at(i)));
        }
        return result;
    }

private:
    QList<T> m_items; // Creación de cola de elementos
};

#endif // COLAS_H
