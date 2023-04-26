
#include <QTextEdit>
#include "priorityqueue.h"
#include "vcolapedidos.h"
#include "ui_vcolapedidos.h"



vColaPedidos::vColaPedidos(QWidget *parent) :
    QMainWindow(parent),
    queueM(*(new Queue<Pedido*>())),
    ui(new Ui::vColaPedidos)
{
    ui->setupUi(this);
}

vColaPedidos::~vColaPedidos()
{
    delete ui;
}

vColaPedidos::vColaPedidos(const Queue<Pedido*>& queueMostrar) :
    queue(queueMostrar),
    queueM(queue),
    ui(new Ui::vColaPedidos)
{
    ui->setupUi(this);
    m_txEditColaPedidos = ui->txEditColaPedidos;
}

void vColaPedidos::showEvent(QShowEvent *event)
{
    // Aquí va la lógica para manejar el evento de muestra
    // ...
    // Llamada a la implementación de la clase base
    QWidget::showEvent(event);
}

QTextEdit* getTxEditColaPedidos(QWidget* parent) {
    return parent->findChild<QTextEdit*>("txEditColaPedidos");
}

// Método para actualizar la cola a mostrar
//void actualizarCola(const QString& nombreCola) {
    // Obtener los datos de la cola desde la instancia de QThreads
    //Queue<Pedido*>& cola = queueM;

    // Actualizar la información en la ventana
    // ...
//}

