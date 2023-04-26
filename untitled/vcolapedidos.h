#ifndef VCOLAPEDIDOS_H
#define VCOLAPEDIDOS_H

#include <QTextEdit>
#include <QMainWindow>
#include "priorityqueue.h"
#include "structs.h"

QT_BEGIN_NAMESPACE
namespace Ui {class vColaPedidos;}
QT_END_NAMESPACE
class vColaPedidos : public QMainWindow
{
    Q_OBJECT

public:
    explicit vColaPedidos(QWidget *parent = nullptr);

    vColaPedidos(const Queue<Pedido*>& queueMostrar); //Constructor que recibe los parámetros necesarios para poder mostrar las colas.

    ~vColaPedidos();

<<<<<<< Updated upstream
=======
    static vColaPedidos& obtenerInstancia();

    void actualizarCola(const QString& nombreCola);

    QTextEdit* getTxEditColaPedidos(QWidget* parent);

private slots:


>>>>>>> Stashed changes
private:
    Ui::vColaPedidos *ui;
    QTextEdit* m_txEditColaPedidos;
    Queue<Pedido*> queue; // Objeto Queue<Pedido*> agregado
    Queue<Pedido*>& queueM; // Referencia a Queue<Pedido*>
};

#endif // VCOLAPEDIDOS_H
