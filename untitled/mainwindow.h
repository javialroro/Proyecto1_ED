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
    Queue<Pedido *> & a_queue;
    Queue<Pedido *> & f1;
    Queue<Pedido *> & f2;
    Queue<Pedido *> & f3;
    Queue<Pedido *> & f4;
    listaArticulos * lista;
    bool paused = false;



};

class Fabrica : public QThread {
    Q_OBJECT

public:
    Fabrica(listaArticulos  * l, Queue<Pedido *>& colaAlistos,Queue<Pedido *> & A, string cat,QSemaphore& sem, string _name, QObject* parent = nullptr);

    Fabrica(listaArticulos  * l, Queue<Pedido *>& colaAlistos,Queue<Pedido *> & A, string cat, string cat2, QSemaphore& sem,
            string _name,QObject* parent = nullptr);




    void run() override;
    bool getPaused ();
    void setPaused (bool _paused);

signals:
    void actualizarLabel(const QString& texto);

private:
    Queue<Pedido *>& a_queue;

    listaArticulos * lista;
    string _categoria;
    string _categoria2;
    string name;
    QSemaphore& semaphore;
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
        int id;
        ArticuloPedido* articulo = nullptr;
        QString ubicacion;
        explicit Alistador(int _id, QTableWidget* _tableWidget, QObject* parent = nullptr);
        void run() override;
        void moverAlistador(QString& ubicacion, ArticuloPedido* articulo);
        QString to_String();

    public slots:
        void procesarArticuloAlist(Queue<Alistador*> _colaAlistadores, const QString& _ubicacion, ArticuloPedido* _articulo);
        //void alistadorLiberado(Alistador* alistador);

    signals:
        void finalizado(Alistador* alistador);

    private:        
        QString matriz[10][26];

        Queue<Alistador*> colaAlistadores;

        QMutex mutex;

        int obtenerIndiceLetra(QString& letra);

};


class Bodega : public QThread
{
    Q_OBJECT
    public:


        explicit Bodega(Queue<Pedido*>& _colaAlisto, Queue<Pedido*>& _colaAlistados, Queue<Alistador *>& colaAlistadores, listaArticulos * l,QObject* parent = nullptr);
        void agregarPedidoAlistado(Pedido* pedido);
        Pedido* obtenerPedidoAlistado();
        void liberarAlistador(Alistador* alistador);
        void run() override;
        void actualizarInterfaz();

    signals:
        void procesarArticuloBodega(Queue<Alistador*> colaAlistadores, const QString& ubicacion, ArticuloPedido* articulo);

    public slots:
        //void alistadorLiberado(Alistador* alistador);
        //void receiveTableWidget(QTableWidget* tableWidget);

    private:
        listaArticulos * listaArt;
        QTableWidget* table;
        Queue<Pedido*>& colaAlisto;
        Queue<Pedido*>& colaAlistados;
        Queue<Alistador*> &colaAlistadores;
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
    MainWindow(PriorityQueue* _colaPedidos, Queue<Pedido *> & _colaAlisto, Queue<Pedido *> & _colaAlistados,  Queue<Pedido *> & _colaA,  Queue<Pedido *> & _colaB,  Queue<Pedido *> & _colaC,  Queue<Pedido *> & _colaComodin,Queue<Alistador *> & _colaAlistadores,
               listaArticulos * la, listaClientes *lc, Alistados * a, RevisorArchivos *& r, Balanceador * bl, Fabrica * f1,
               Fabrica * f2,Fabrica * f3,Fabrica * f4, Facturadora * fc,  Bodega * b);
    ~MainWindow();
    QTableWidget* getQTable();
    QLabel* getLabelFabricacion();


signals:
    void tableWidgetSignal(QTableWidget* tableWidget);


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

    void on_btnDetenerFab04Com_clicked();

    void on_btnDetenerFab03_clicked();

    void on_btnDetenerFab02_clicked();

    void on_btnDetenerFab01_clicked();

    void actualizarTextoLabel(const QString& texto);

    void on_btnColaDeAlistadores_clicked();

private:
    Ui::MainWindow *ui;

    PriorityQueue* colaPedidos;
    Queue<Pedido *> &colaAlisto;
    Queue<Pedido *> &colaAlistados;
    Queue<Pedido *> & colaA;
    Queue<Pedido *> & colaB;
    Queue<Pedido *> & colaC;
    Queue<Pedido *> & colaComodin;
    Queue<Alistador *> & colaAlistadores;
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
    Bodega * bodega;


    //ThreadContainer* contenedor;

};

#endif // MAINWINDOW_H
