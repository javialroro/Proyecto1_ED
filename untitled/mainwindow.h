#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTableWidget>
#include <QLabel>
#include <QtCore>
#include <QThread>
#include <QDir>
#include <QObject>
#include <QVector>
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
    explicit Alistador(listaArticulos *_listaArt, int _id, QVector<QVector<QString>> matriz, QObject* parent = nullptr);
    void run() override;
    QString to_String();
    int id;
    QMutex mutex;
    QWaitCondition condicion;
    QVector<QVector<QString>> matrizAlistador;
    QVector<QVector<QString>> getMatrizAlistador();
    void agregarDato(int fila, int columna, const QString& dato);

public slots:
    void procesarArticuloAlist(Queue<Alistador*> _colaAlistadores, ListaArticulosP *_lista);
    void alistadorLiberado(Alistador* alistador);

signals:
    void finalizado(Alistador* alistador);

private:

    bool paused = true;
    QTableWidget* table;
    listaArticulos *listaArt;
    Queue<Alistador*> colaAlistadores;
    ArticuloPedido* articulo = nullptr;
    QString ubicacion;

    ListaArticulosP *listaArtProcesados;

    int obtenerIndiceLetra(QString& letra);
    void moverAlistador(ArticuloPedido* articulo);
    QString obtenerUbicacion(ArticuloPedido* art);
};


class Bodega : public QThread
{
    Q_OBJECT
public:

    explicit Bodega(listaArticulos *_listaArt, Queue<Pedido*>& _colaAlisto, Queue<Pedido*>& _colaAlistados, Queue<Alistador *>& _colaAlistadores, QObject* parent = nullptr);
    void agregarPedidoAlistado(Pedido* pedido);
    Pedido* obtenerPedidoAlistado();
    void liberarAlistador(Alistador* alistador);
    void run() override;
    void actualizarInterfaz();
    QString obtenerUbicacion(ArticuloPedido* art);
    QVector<QVector<QString>> getBodegaMatriz();
    QVector<QVector<QString>> sumarMatrices(const QVector<QVector<QString>>& matriz2);

signals:
    void procesarPedidoBodega1(Queue<Alistador*> _colaAlistadores, ListaArticulosP *_lista);
    void procesarPedidoBodega2(Queue<Alistador*> _colaAlistadores, ListaArticulosP *_lista);
    void procesarPedidoBodega3(Queue<Alistador*> _colaAlistadores, ListaArticulosP *_lista);
    void procesarPedidoBodega4(Queue<Alistador*> _colaAlistadores, ListaArticulosP *_lista);
    void procesarPedidoBodega5(Queue<Alistador*> _colaAlistadores, ListaArticulosP *_lista);
    void procesarPedidoBodega6(Queue<Alistador*> _colaAlistadores, ListaArticulosP *_lista);

public slots:
    void alistadorLiberado(Alistador* alistador);
    //void receiveTableWidget(QTableWidget* tableWidget);

private:
    //QTableWidget* table;
    Alistador* alistador1;
    Alistador* alistador2;
    Alistador* alistador3;
    Alistador* alistador4;
    Alistador* alistador5;
    Alistador* alistador6;
    QVector<QVector<QString>> matriz;
    listaArticulos *listaArt;
    Queue<Pedido*>& colaAlisto;
    Queue<Pedido*>& colaAlistados;
    Queue<Alistador*> colaAlistadores;
    QMutex mutex;

    void procesarPedido(Pedido* pedido);
    QVector<QVector<QString>> sumarMatrices(const QVector<QVector<QString>>& matriz1, const QVector<QVector<QString>>& matriz2);
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
    MainWindow( PriorityQueue* _colaPedidos, Queue<Pedido *> & _colaAlisto, Queue<Pedido *> & _colaAlistados,  Queue<Pedido *> & _colaA,  Queue<Pedido *> & _colaB,  Queue<Pedido *> & _colaC,  Queue<Pedido *> & _colaComodin, Queue<Alistador *> & _colaAlistadores,
               listaArticulos * la, listaClientes *lc, Alistados * a, RevisorArchivos *& r, Balanceador * bl, Fabrica * f1,
               Fabrica * f2,Fabrica * f3,Fabrica * f4, Facturadora * fc,  Bodega * b,Queue<Pedido *> & _colaFacturacion);
    ~MainWindow();
    QTableWidget* getQTable();
    QLabel* getLabelFabricacion();


    /*signals:
    void tableWidgetSignal(QTableWidget *tableWidget);*/

private slots:
    void actualizarATable();

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

private:
    Ui::MainWindow *ui;
    QTimer* timer;
    PriorityQueue* colaPedidos;
    Queue<Pedido *> &colaAlisto;
    Queue<Pedido *> &colaAlistados;
    Queue<Pedido *> & colaA;
    Queue<Pedido *> & colaB;
    Queue<Pedido *> & colaC;
    Queue<Pedido *> & colaComodin;
    Queue<Pedido *> & colaFacturacion;
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
