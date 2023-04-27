#include <QTextEdit>
#include <iterator>
#include "priorityqueue.h"
#include "vcolapedidos.h"
#include "ui_vcolapedidos.h"



vColaPedidos::vColaPedidos(QWidget *parent) :
    QMainWindow(parent),
    queueM(*(new Queue<Pedido*>())),
    ui(new Ui::vColaPedidos)
{
    ui->setupUi(this);

    // Deshabilitar los botones de cierre, minimizar y maximizar/restaurar de la ventana
    setWindowFlags(windowFlags() & ~(Qt::WindowCloseButtonHint | Qt::WindowMinimizeButtonHint | Qt::WindowMaximizeButtonHint));

    // Conecta el botón btnVolverAMenu con la función volverAMenu()
    connect(ui->btnVolverAMenu, &QPushButton::clicked, this, &vColaPedidos::volverAMenu);
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

    // Deshabilitar los botones de cierre, minimizar y maximizar/restaurar de la ventana
    setWindowFlags(windowFlags() & ~(Qt::WindowCloseButtonHint | Qt::WindowMinimizeButtonHint | Qt::WindowMaximizeButtonHint));

    // Conecta el botón btnVolverAMenu con la función volverAMenu()
    connect(ui->btnVolverAMenu, &QPushButton::clicked, this, &vColaPedidos::volverAMenu);
}

vColaPedidos::vColaPedidos(const PriorityQueue queueMostrar):
    queueM(queue),
    p_queue(queueMostrar),
    p_queueM(p_queue),
    ui(new Ui::vColaPedidos)
{
    ui->setupUi(this);

    // Deshabilitar los botones de cierre, minimizar y maximizar/restaurar de la ventana
    setWindowFlags(windowFlags() & ~(Qt::WindowCloseButtonHint | Qt::WindowMinimizeButtonHint | Qt::WindowMaximizeButtonHint));

    // Conecta el botón btnVolverAMenu con la función volverAMenu()
    connect(ui->btnVolverAMenu, &QPushButton::clicked, this, &vColaPedidos::volverAMenu);
}

void vColaPedidos::showEvent(QShowEvent *event)
{
    QWidget::showEvent(event);
}

void vColaPedidos::setCantidadEnCola(int cantidad) {
    QLabel* lblCantidadEnColaNum = findChild<QLabel*>("lblCantidadEnColaNum");
    if (lblCantidadEnColaNum) {
        lblCantidadEnColaNum->setText(QString::number(cantidad)); // Actualizar la cantidad de elementos en la cola
    }
}

void vColaPedidos::setCantidadDesencolados(int cantidad) {
    QLabel* lblCantidadDesencoladosNum = findChild<QLabel*>("lblCantidadDesencoladosNum");
    if (lblCantidadDesencoladosNum) {
        lblCantidadDesencoladosNum->setText(QString::number(cantidad)); // Actualizar la cantidad de pedidos desencolados
    }
}

void vColaPedidos::setQueueContentPQ() {
    QString texto;
    PriorityQueue queueCopy = p_queue; // Copiar la cola prioritaria original

    while (!queueCopy.isEmptyPriority()) {
        Pedido* pedido = queueCopy.deQueuePriority();
        texto.append(pedido->to_String());
        texto.append("\n");
    }

    QTextEdit* txEdit = findChild<QTextEdit*>("txEditMostrarCola");
    if (txEdit) {
        txEdit->clear(); // Limpiar el contenido anterior del QTextEdit
        txEdit->append(texto);
    }

    setCantidadEnCola(p_queue.getCantidadEnCola()); // Actualizar la cantidad de elementos en la cola
    setCantidadDesencolados(p_queue.getCantDesencolados());// Actualizar la cantidad de pedidos desencolados
}

void vColaPedidos::setQueueContent() {
    QString texto;
    Queue<Pedido*> queueCopy = queue; // Copiar la cola original

    while (!queueCopy.isEmpty()) {
        Pedido* pedido = queueCopy.deQueue();
        texto.append(pedido->to_String());
        texto.append("\n");
    }

    QTextEdit* txEdit = findChild<QTextEdit*>("txEditMostrarCola");
    if (txEdit) {
        txEdit->clear(); // Limpiar el contenido anterior del QTextEdit
        txEdit->append(texto);
    }

    setCantidadEnCola(queue.getCantidadEnCola()); // Actualizar la cantidad de elementos en la cola
    setCantidadDesencolados(queue.getCantDesencolados()); // Actualizar la cantidad de pedidos desencolados
}



void vColaPedidos::volverAMenu()
{
    hide();
}

