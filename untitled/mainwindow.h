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
    Q_OBJECT
public:
    Balanceador(listaArticulos  * l, PriorityQueue * colaPedidos, Queue<Pedido *>& colaAlistos,Queue<Pedido *> & A,
                Queue<Pedido *> & B,Queue<Pedido *> & C, Queue<Pedido *> & D, QObject* parent = nullptr);
    void run() override;

    bool getPaused ();

    void setPaused (bool _paused);

    int cantProcesados = 0;

signals:
    void actualizarLabelBalanceador(const QString& texto);
    void actualizarLabelCantBalanceador(const QString& texto);

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



    int cantAtendidos = 0;
    void run() override;
    bool getPaused ();
    void setPaused (bool _paused);

signals:
    void actualizarLabel(const QString& texto);
    void actualizarLabelCant(const QString& texto);

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
    bool AlistP;
    Pedido * pedido;
        int id;
        ArticuloPedido* articulo = nullptr;
        QString ubicacion;
        explicit Alistador(int _id, QTableWidget* _tableWidget,Queue<Pedido*> &colaAlistados, QObject* parent = nullptr);
        void run() override;
        void moverAlistador(QString& ubicacion, ArticuloPedido* articulo, Pedido * pedido);
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

        Queue<Pedido*> &colaAlistados;

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

        void setPaused(bool _paused);
        bool getPaused();

        void encolarAlistador(Alistador * alistador);


    signals:
        void procesarArticuloBodega(Queue<Alistador*> colaAlistadores, const QString& ubicacion, ArticuloPedido* articulo);
        void actualizarLabelCantBalanceador(const QString& texto);
        void actualizarLabelBalanceador(const QString& texto);

    public slots:


    private:
        bool paused = false;
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
               Fabrica * f2,Fabrica * f3,Fabrica * f4, Facturadora * fc,  Bodega * b,Queue<Pedido *> & cf);
    ~MainWindow();
    QTableWidget* getQTable();
    QLabel* getLabelFabricacionA();
    QLabel* getLabelFabricacionB();
    QLabel* getLabelFabricacionC();
    QLabel* getLabelFabricacionComodin();
    QLabel* getLabelBalanceador();

    QLabel* getLabelCantBalanceador();
    QLabel* getLabelCantA();
    QLabel* getLabelCantB();
    QLabel* getLabelCantC();
    QLabel* getLabelCantComodin();
    QLabel* getLabelBodega();
    QLabel* getLabelCantBodega();
    QLabel* getLabelAlist1();
    QLabel* getLabelAlist2();
    QLabel* getLabelAlist3();
    QLabel* getLabelAlist4();
    QLabel* getLabelAlist5();
    QLabel* getLabelAlist6();



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

    /*void setLabelFabricacionA(QLabel* label);

    void setLabelFabricacionB(QLabel* label);

    void setLabelFabricacionC(QLabel* label);

    void setLabelFabricacionComodin(QLabel* label);

    void setLabelBalanceador(QLabel* label);

    void setLabelCantBalanceador(QLabel* label);*/

    //Balanceador * getBalanceador();

    void on_btnDetenerFab04Com_clicked();

    void on_btnDetenerFab03_clicked();

    void on_btnDetenerFab02_clicked();

    void on_btnDetenerFab01_clicked();

    void actualizarTextoLabelA(const QString& texto);

    void actualizarTextoLabelB(const QString& texto);

    void actualizarTextoLabelC(const QString& texto);

    void actualizarTextoLabelComodin(const QString& texto);

    void actualizarTextoLabelBalanceador(const QString& texto);

    void actualizarTextoLabelCantBalanceador(const QString& texto);

    void actualizarTextoLabelCantA(const QString& texto);

    void actualizarTextoLabelCantB(const QString& texto);

    void actualizarTextoLabelCantC(const QString& texto);

    void actualizarTextoLabelCantComodin(const QString& texto);

    void actualizarTextoLabelAlist1(const QString& texto);

    void actualizarTextoLabelAlist2(const QString& texto);

    void actualizarTextoLabelAlist3(const QString& texto);

    void actualizarTextoLabelAlist4(const QString& texto);

    void actualizarTextoLabelAlist5(const QString& texto);

    void actualizarTextoLabelAlist6(const QString& texto);

    void on_btnColaDeAlistadores_clicked();

    void on_btnDetenerAlistados_clicked();

    void actualizarTextoLabelBodega(const QString& texto);

    void actualizarTextoLabelCantBodega(const QString& texto);

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
    Queue<Pedido *> & colaFacturacion;


    //ThreadContainer* contenedor;

};

#endif // MAINWINDOW_H
