#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTableWidget>
#include <QLabel>
#include <QtCore>
#include <QThread>
#include <QDir>
#include <QObject>
//#include "ThreadContainer.h"
#include "structs.h"
#include "Queue.h"
#include "priorityqueue.h"
#include "qsemaphore.h"
#include "qthread.h"

class RevisorArchivos : public QThread {
public:
    RevisorArchivos(listaArticulos  * la, listaClientes *lc, PriorityQueue * pq, QObject* parent = nullptr);
    void run() override;

    PriorityQueue* getColaPedidos();

private:
    listaClientes * listaClientes;
    listaArticulos * listaArticulos;
    PriorityQueue * colaPedidos;
    bool paused = false;

};



class Balanceador : public QThread {
public:
    Balanceador(listaArticulos  * l, PriorityQueue * colaPedidos, Queue<Pedido *>& colaAlistos,Queue<Pedido *> & A,
                Queue<Pedido *> & B,Queue<Pedido *> & C, Queue<Pedido *> & D, QObject* parent = nullptr);
    void run() override;

    bool getPaused ();

    void setPaused (bool _paused);

private:
    PriorityQueue * p_queue;
    Queue<Pedido *> a_queue;
    Queue<Pedido *> & f1;
    Queue<Pedido *> & f2;
    Queue<Pedido *> & f3;
    Queue<Pedido *> & f4;
    listaArticulos * lista;
    bool paused = false;



};

class Fabrica : public QThread {

public:
    Fabrica(listaArticulos  * l, Queue<Pedido *>& colaAlistos,Queue<Pedido *> & A, string cat,QSemaphore& sem, string _name, QLabel * lbl,QObject* parent = nullptr);

    Fabrica(listaArticulos  * l, Queue<Pedido *>& colaAlistos,Queue<Pedido *> & A, string cat, string cat2, QSemaphore& sem,
            string _name,QLabel * lbl,QObject* parent = nullptr);




    void run() override;
    bool getPaused ();
    void setPaused (bool _paused);

private:
    Queue<Pedido *>& a_queue;

    listaArticulos * lista;
    string _categoria;
    string _categoria2;
    string name;
    QSemaphore& semaphore;
    QLabel * label;
    Queue<Pedido *> & cola;
    bool paused = false;


};

class Facturadora : public QThread {

public:
    Facturadora(Queue<Pedido *> & A, QObject* parent = nullptr);

    Queue<Pedido *> & cola;
    //string ruta_archivo = "C:\\Users\\javia\\OneDrive - Estudiantes ITCR\\TEC\\TEC 3 Semestre\\Estructuras de Datos\\Proyectos\\Proyecto1_ED\\untitled\\Articulos\\articulos.txt";


    void run() override;
    bool getPaused ();
    void setPaused (bool _paused);
private:
    bool paused = false;
};

class Alistador : public QThread{
    Q_OBJECT
    public:
        explicit Alistador(QTableWidget* _tableWidget, QObject* parent = nullptr);
        void run() override;

    public slots:
        void procesarArticuloAlist(Queue<Alistador*> _colaAlistadores, const QString& _ubicacion, ArticuloPedido* _articulo);

    signals:
        void finalizado(Alistador* alistador);

    private:
        QTableWidget* table;
        Queue<Alistador*> colaAlistadores;
        ArticuloPedido* articulo = nullptr;
        QString ubicacion;
        QMutex mutex;

        int obtenerIndiceLetra(const QString& letra);
        void moverAlistador(const QString& ubicacion, ArticuloPedido* articulo);
};


class Bodega : public QThread
{
    Q_OBJECT
    public:
        explicit Bodega(QTableWidget* _tableWidget, Queue<Pedido*>& _colaAlisto, Queue<Pedido*>& _colaAlistados, QObject* parent = nullptr);
        void agregarPedidoAlistado(Pedido* pedido);
        Pedido* obtenerPedidoAlistado();
        void liberarAlistador(Alistador* alistador);
        void run() override;
        void actualizarInterfaz();

    signals:
        void procesarArticuloBodega(Queue<Alistador*> colaAlistadores, Alistador* alistDisp, const QString& ubicacion, ArticuloPedido* articulo);

    public slots:
        void alistadorLiberado(Alistador* alistador);

    private:
        QTableWidget* tableWidget;
        Queue<Pedido*>& colaAlisto;
        Queue<Pedido*>& colaAlistados;
        Queue<Alistador*> colaAlistadores;
        QMutex mutex;

        void procesarPedido(Pedido* pedido);
};

class Alistados : public QThread {
public:
    Alistados(Queue<Pedido *>& colaFacturacion,Queue<Pedido *> & A, string _name,QObject* parent = nullptr);
    void run() override;
    bool getPaused ();
    void setPaused (bool _paused);

private:
    Queue<Pedido *>& f_queue;
    string name;
    Queue<Pedido *> & cola;
    bool paused = false;
};

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE



class MainWindow : public QMainWindow

{
    Q_OBJECT

public:
    MainWindow(/*ThreadContainer* _contenedor,*/ PriorityQueue* _colaPedidos, Queue<Pedido *> & _colaAlisto, Queue<Pedido *> & _colaAlistados,  Queue<Pedido *> & _colaA,  Queue<Pedido *> & _colaB,  Queue<Pedido *> & _colaC,  Queue<Pedido *> & _colaComodin,
               listaArticulos * la, listaClientes *lc, Alistados * a, RevisorArchivos *& r, Balanceador * bl, Fabrica * f1,
               Fabrica * f2,Fabrica * f3,Fabrica * f4, Facturadora * fc, QLabel * lf);
    ~MainWindow();
    QTableWidget* getQTable();
    QLabel* getLabelFabricacion();



private slots:

    void on_btnColaPedidos_clicked();

    void on_btnColaFabricaciones1_clicked();

    void on_btnColaFabricaciones2_clicked();

    void on_btnColaFabricaciones3_clicked();

    void on_btnColaFabricaciones4Com_clicked();

    void on_btnColaDeAlisto_clicked();

    void on_btnColaAlistados_clicked();

    void on_btnColaPorFacturar_clicked();


    void on_btnDetenerBalanceador_clicked();

    void setLabelFabricacion(QLabel* label);

    //Balanceador * getBalanceador();

private:
    Ui::MainWindow *ui;

    PriorityQueue* colaPedidos;
    Queue<Pedido *> &colaAlisto;
    Queue<Pedido *> &colaAlistados;
    Queue<Pedido *> & colaA;
    Queue<Pedido *> & colaB;
    Queue<Pedido *> & colaC;
    Queue<Pedido *> & colaComodin;
    listaClientes *lista;
    listaArticulos *listaArt;
    Alistados* alistad;
    RevisorArchivos *& revisor;
    Balanceador * balanceador;
    Fabrica * A;
    Fabrica * B;
    Fabrica * C;
    Fabrica * Comodin;
    Facturadora * facturadora;
    QLabel * labelF;


    //ThreadContainer* contenedor;

};

#endif // MAINWINDOW_H
