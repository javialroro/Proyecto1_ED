#ifndef VCOLAPEDIDOS_H
#define VCOLAPEDIDOS_H

#include <QTimer>
#include <QTextEdit>
#include <QMainWindow>
#include "priorityqueue.h"

QT_BEGIN_NAMESPACE
namespace Ui {class vColaPedidos;}
QT_END_NAMESPACE
class vColaPedidos : public QMainWindow
{
    Q_OBJECT

public:
    explicit vColaPedidos(QWidget *parent = nullptr);

    vColaPedidos(const Queue<Pedido*>& queueMostrar); //Constructor que recibe los parámetros necesarios para poder mostrar las colas.

    vColaPedidos(PriorityQueue* queueMostrar); //Constructor que recibe los parámetros necesarios para poder mostrar las colas.

    ~vColaPedidos();

    static vColaPedidos& obtenerInstancia();

    void actualizarCola(const QString& nombreCola);

    void showEvent(QShowEvent *event);

    void setCantidadEnCola(int cantidad);

    void setCantidadDesencolados(int cantidad);

public slots:
    void setQueueContentPQ();
    void setQueueContent();
    void volverAMenu();

private:
    Ui::vColaPedidos *ui;
    QTextEdit* m_txEditColaPedidos;

    Queue<Pedido*> queue;
    Queue<Pedido*>& queueM;

    PriorityQueue* p_queue;
    PriorityQueue*& p_queueM;

    QTimer* timer;
};
#endif // VCOLAPEDIDOS_H
