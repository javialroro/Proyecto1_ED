
#ifndef QTHREADS_H
#define QTHREADS_H
#include <QtCore>
#include <QThread>
#include <QDir>
#include <QTableWidget>
#include <QObject>


#include "qlabel.h"




// Variables globales
//PriorityQueue * qPedidos = new PriorityQueue();
//extern QMutex g_mutex;



/*

class Alistador : public QThread
{
    //Q_OBJECT
public:
    explicit Alistador(QTableWidget* _tableWidget, QObject* parent = nullptr)
        : QThread(parent), table(_tableWidget)
    {
    }

    void finalizado(Alistador* alistador){
        mutex.lock();
        mutex.unlock();
    }

    void run() override
    {
        while (true) {
            // Esperar a recibir la señal para procesar un artículo
            mutex.lock();
            if (!ubicacion.isEmpty()) {
                 QString ubicacionCopy = ubicacion;
                 ArticuloPedido* articuloCopy = articulo;
                 mutex.unlock();

                 // Procesar el artículo
                 moverAlistador(ubicacionCopy, articuloCopy);

                 // Emitir señal para notificar que el alistador ha finalizado
                 emit finalizado(this);
            } else {
                 mutex.unlock();
                 QThread::msleep(500);
            }
        }
    }

public slots:
    void procesarArticulo(const QString& _ubicacion, ArticuloPedido* _articulo)
    {
        // Asignar el artículo y la ubicación al alistador
        ubicacion = _ubicacion;
        articulo = _articulo;
    }

signals:
    //void finalizado(Alistador* alistador);

private:
    QTableWidget* table;
    ArticuloPedido* articulo = nullptr;
    QString ubicacion;
    QMutex mutex;

    int obtenerIndiceLetra(const QString& letra)
    {
        QString letrasAlfabeto = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        return letrasAlfabeto.indexOf(letra);
    }

    void moverAlistador(const QString& ubicacion, ArticuloPedido* articulo)
    {
        QChar letra = ubicacion.at(0);
        QString strNumero = ubicacion.mid(1);
        int numero = strNumero.toInt();

        // Obtener índices
        int fila = numero - 1;
        int columna = obtenerIndiceLetra(letra);

        int distanciaFilas = fila;
        int distanciaColumnas = columna;

        // Calcular el tiempo necesario para moverse hasta la ubicación del artículo
        int tiempoIda = distanciaFilas + distanciaColumnas;

        // Simular el tiempo de movimiento
        QThread::sleep(tiempoIda);

        QTableWidgetItem* item = table->item(fila, columna);

        if (item && !item->text().isEmpty()) {
            QString texto = item->text();
            QStringList parts = texto.split("\n");
            if (parts.size() == 2) {
                 CeldaArticulo celda;
                 celda.codigo = parts[0];
                 celda.cantidad = parts[1].toInt();
                 // Incrementar la cantidad del artículo
                 celda.cantidad += articulo->cantidad;

                 // Actualizar el texto del item con la cantidad actualizada
                 item->setText(celda.toString());
            } else {
                 // La celda está vacía, ingresar un nuevo artículo con cantidad 1
                 CeldaArticulo celda;
                 celda.codigo = QString::fromStdString(articulo->codProd);
                 celda.cantidad = articulo->cantidad;

                 // Actualizar el texto del item con el nuevo artículo
                 item->setText(celda.toString());
            }
        }

        // Simular el tiempo de regreso a la posición inicial
        QThread::sleep(tiempoIda);
    }
};


//-------------------------------------------------------------------------

class Bodega : public QThread
{
public:
    explicit Bodega(QTableWidget* _tableWidget, Queue<Pedido*>& _colaAlisto, Queue<Pedido*>& _colaAlistados, QObject* parent = nullptr)
        : tableWidget(_tableWidget), colaAlisto(_colaAlisto), colaAlistados(_colaAlistados), QThread(parent)
    {
        // Crear los 6 alistadores y agregarlos a la cola
        for (int i = 0; i < 6; ++i) {
            Alistador* alistador = new Alistador(tableWidget);
            colaAlistadores.enQueue(alistador);
            connect(alistador, SIGNAL(finalizado(Alistador*)), this, SLOT(alistadorLiberado(Alistador*)));
            alistador->start();
        }
    }


    void agregarPedidoAlistado(Pedido* pedido)
    {
        mutex.lock();
        colaAlistados.enQueue(pedido);
        mutex.unlock();
    }

    Pedido* obtenerPedidoAlistado()
    {
        mutex.lock();
        if (!colaAlistados.isEmpty()) {
            Pedido* pedido = colaAlistados.deQueue();
            mutex.unlock();
            return pedido;
        }
        mutex.unlock();
        return nullptr;
    }

    void liberarAlistador(Alistador* alistador)
    {
        mutex.lock();
        colaAlistadores.enQueue(alistador);
        mutex.unlock();
    }

    void run() override
    {
        while (true) {
            // Esperar a que haya un pedido alistado en la bodega
            Pedido* pedido = obtenerPedidoAlistado();

            // Procesar el pedido alistado
            procesarPedido(pedido);

            // Liberar la memoria del pedido
            delete pedido;
        }
    }

    void actualizarInterfaz()
    {
        mutex.lock();
        int rowCount = tableWidget->rowCount();
        int columnCount = tableWidget->columnCount();

        for (int row = 0; row < rowCount; ++row) {
            for (int col = 0; col < columnCount; ++col) {
                 QTableWidgetItem* item = tableWidget->item(row, col);
                 if (item) {
                    QVariant data = item->data(Qt::UserRole);
                    CeldaArticulo celda = data.value<CeldaArticulo>();
                    QString codigo = celda.codigo;
                    int cantidad = celda.cantidad;

                    // Actualizar la celda en la tabla con el código y la cantidad del artículo
                    item->setText(celda.toString());
                 }
            }
        }

        mutex.unlock();
    }

signals:
    void procesarArticulo(const QString& ubicacion, ArticuloPedido* articulo);

public slots:
    void alistadorLiberado(Alistador* alistador)
    {
        liberarAlistador(alistador);
    }

private:
    QTableWidget* tableWidget;
    Queue<Pedido*>& colaAlisto;
    Queue<Pedido*>& colaAlistados;
    Queue<Alistador*> colaAlistadores;
    QMutex mutex;

    void procesarPedido(Pedido* pedido)
    {
        ListaArticulosP* listaArticulos = pedido->listaPedido;
        NodoArticuloP* temp = listaArticulos->pn;

        while (temp != nullptr) {
            QString ubicacion = QString::fromStdString(temp->articulo->codProd);
            ArticuloPedido* articulo = temp->articulo;

            // Emitir la señal para procesar el artículo en un alistador
            emit procesarArticulo(ubicacion, articulo);

            temp = temp->siguiente;
        }

        // Esperar a que todos los alistadores finalicen
        while (!colaAlistadores.isEmpty()) {
            QThread::msleep(500);
        }

        // Enviar el pedido a la cola de alistados
        agregarPedidoAlistado(pedido);
    }
};


*/





#endif // THREADS_H



