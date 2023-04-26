
<<<<<<< Updated upstream
#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "Queue.h"
//#include "vcolapedidos.cpp"
//#include "procedimientos.h"
=======
//#include <QDialog>
#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "vcolapedidos.h"
#include "QThreads.h"


>>>>>>> Stashed changes


//listaClientes *lista = new listaClientes();
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::MainWindow(RevisorArchivos *threadRevisor, Balanceador *threadBalanceador, Fabrica *threadA, Fabrica *threadB, Fabrica *threadC, Fabrica *threadComodin, Fabricacion1 *threadFabricacion)
    : QMainWindow(),
    revisor (threadRevisor),
    balanceador (threadBalanceador),
    fabA (threadA),
    fabB (threadB),
    fabC (threadC),
    fabComodin (threadComodin),
    fabricacion (threadFabricacion),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    ui->setupUi(this);
}
<<<<<<< Updated upstream
*/
void MainWindow::on_btnColaPedidos_clicked()
=======

void MainWindow::on_btnColaPedidos_clicked() {
    Queue<Pedido*> colaPedidos = revisor->getColaPedidos()->to_Queue();
    vColaPedidos* vColaPedidosDialog = new vColaPedidos(colaPedidos);

    QString texto;
    while(!colaPedidos.isEmpty()){
        Pedido* pedido = colaPedidos.deQueue();
        texto.append(pedido->to_String());
        texto.append("\n");
        // Agregar más información del pedido aquí si se desea
    }

    QTextEdit* txEdit = vColaPedidosDialog->findChild<QTextEdit*>("txEditColaPedidos");
    if (txEdit) {
        txEdit->append(texto);
    }  // Agregar texto al QTextEdit en vColaPedidos
    vColaPedidosDialog->show();
}

void MainWindow::on_btnColaFabricaciones1_clicked()
{
    //Queue<Pedido*> colaPedidos = revisor->getColaPedidos()->to_Queue();
    //vColaPedidos* vColaPedidosDialog = new vColaPedidos(colaPedidos);
    //vColaPedidosDialog->show();
}


void MainWindow::on_btnColaFabricaciones2_clicked()
{
    //Queue<Pedido*>& colaFab2 = Balanceador.getF2();
    //vColaPedidos* vColaPedidosDialog = new vColaPedidos(colaFab2);
    //vColaPedidosDialog->show();
}


void MainWindow::on_btnColaFabricaciones3_clicked()
{
    //Queue<Pedido*> colaPedidos = revisor->getColaPedidos()->to_Queue();
    //vColaPedidos* vColaPedidosDialog = new vColaPedidos(colaPedidos);
    //vColaPedidosDialog->show();
}


void MainWindow::on_btnColaFabricaciones4Com_clicked()
{
    //Queue<Pedido*> colaPedidos = revisor->getColaPedidos()->to_Queue();
    //vColaPedidos* vColaPedidosDialog = new vColaPedidos(colaPedidos);
    //vColaPedidosDialog->show();
}


void MainWindow::on_btnColaDeAlisto_clicked()
>>>>>>> Stashed changes
{
    //Queue<Pedido*> colaPedidos = revisor->getColaPedidos()->to_Queue();
    //vColaPedidos* vColaPedidosDialog = new vColaPedidos(colaPedidos);
    //vColaPedidosDialog->show();
}


void MainWindow::on_btnColaAlistados_clicked()
{
    //Queue<Pedido*> colaPedidos = revisor->getColaPedidos()->to_Queue();
    //vColaPedidos* vColaPedidosDialog = new vColaPedidos(colaPedidos);
    //vColaPedidosDialog->show();
}

<<<<<<< Updated upstream
=======

void MainWindow::on_btnColaPorFacturar_clicked()
{
    //Queue<Pedido*> colaPedidos = revisor->getColaPedidos()->to_Queue();
    //vColaPedidos* vColaPedidosDialog = new vColaPedidos(colaPedidos);
    //vColaPedidosDialog->show();
}

>>>>>>> Stashed changes
