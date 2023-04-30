
#ifndef QTHREADS_H
#define QTHREADS_H
#include <QtCore>
#include <QThread>
#include <QDir>
#include <QTableWidget>
#include <QObject>

#include "procedimientos.h"
#include "qlabel.h"




// Variables globales
//PriorityQueue * qPedidos = new PriorityQueue();
//extern QMutex g_mutex;

class RevisorArchivos : public QThread {
public:
    RevisorArchivos(listaArticulos  * la, listaClientes *lc, PriorityQueue * pq, QObject* parent = nullptr)
        : QThread(parent), listaArticulos(la) , listaClientes(lc) , colaPedidos(pq)
    {
    }
    void run() override {
        while (true) {
            //QString path = "C:\\Users\\javia\\OneDrive - Estudiantes ITCR\\TEC\\TEC 3 Semestre\\Estructuras de Datos\\Proyectos\\Proyecto1_ED\\untitled\\Pedidos";
            QString path = "C:\\Users\\QUIROS CALVO\\Trabajos_TEC_2023\\ED_\\I Proyecto\\untitled\\Pedidos";
            QDir directorio(path);
            QStringList archivos = directorio.entryList(QStringList() << "*.txt", QDir::Files);
            if (archivos.size() > 0) {
                qDebug() << "Archivos encontrados:";
                for (const auto& archivo : archivos) {
                    qDebug()<<archivo;

                    string cPath= path.toStdString()+"\\";
                    string cArchivo = archivo.toStdString();
                    string todo= cPath+cArchivo;
                    //string errores = "C:\\Users\\javia\\OneDrive - Estudiantes ITCR\\TEC\\TEC 3 Semestre\\Estructuras de Datos\\Proyectos\\Proyecto1_ED\\untitled\\Errores\\"+cArchivo;
                    string errores = "C:\\Users\\QUIROS CALVO\\Trabajos_TEC_2023\\ED_\\I Proyecto\\untitled\\Errores\\"+cArchivo;

                    fstream arch(todo, std::ios::in | std::ios::app);
                    Archivo *a =  new Archivo(arch,todo,errores);

                    cargarPedido(a, colaPedidos, listaClientes, listaArticulos);

                    string ruta_archivo = todo;
                    //string ruta_pedidosP = "C:\\Users\\javia\\OneDrive - Estudiantes ITCR\\TEC\\TEC 3 Semestre\\Estructuras de Datos\\Proyectos\\Proyecto1_ED\\untitled\\PedidosProcesados\\"+cArchivo;
                    string ruta_pedidosP = "C:\\Users\\QUIROS CALVO\\Trabajos_TEC_2023\\ED_\\I Proyecto\\untitled\\PedidosProcesados\\"+cArchivo;

                    rename(ruta_archivo.c_str(),ruta_pedidosP.c_str());
                }
            }

            QThread::msleep(5000); // espera 1 segundo antes de revisar de nuevo
        }
    }

    PriorityQueue* getColaPedidos(){
        return colaPedidos;
    }

private:
    listaClientes * listaClientes;
    listaArticulos * listaArticulos;
    PriorityQueue * colaPedidos;
    bool paused = false;

};

bool verficarCantidad(ListaArticulosP * lista, listaArticulos * listaG){
    NodoArticuloP *tmp = lista->pn;

    while (tmp != NULL){
        bool verif =tmp->haySuficiente(listaG); // metodo de imprimir un cliente
        if (!verif){
            return false;
        }
        tmp = tmp->siguiente;
    }
    return true;
}

void encolarMenor(Queue<Pedido *>& q1, Queue<Pedido *>& q2, Pedido * pedido) {
    if (q1.getCantidadEnCola() <= q2.getCantidadEnCola()) {
        q1.enQueue(pedido);
        cout<<q1.getCantidadEnCola()<<endl;cout<<q2.getCantidadEnCola()<<endl;
        cout<<"Encolado en queue principal"<<endl;

    }
    else {
        q2.enQueue(pedido);
        cout<<q1.getCantidadEnCola()<<endl;cout<<q2.getCantidadEnCola()<<endl;
        cout<<"Encolado en queue comodin"<<endl;

    }
}


class Balanceador : public QThread {
public:
    Balanceador(listaArticulos  * l, PriorityQueue * colaPedidos, Queue<Pedido *>& colaAlistos,Queue<Pedido *> & A,
                Queue<Pedido *> & B,Queue<Pedido *> & C, Queue<Pedido *> & D, QObject* parent = nullptr)
        : QThread(parent), p_queue(colaPedidos) , a_queue(colaAlistos), f1(A), f2(B),f3(C),f4(D),lista(l)
    {
    }

    
    void run() override {
        if(!paused){
            while (true) {
                if (!paused){
                    while(!p_queue->isEmptyPriority()){
                        sleep(3);


                        Pedido * pedido = p_queue->deQueuePriority();
                        pedido->factura->insertarAlFinal("Balanceador: "+retornarHora()+"\n");



                        NodoArticuloP *tmp = pedido->listaPedido->pn;

                        bool flag= true;

                        while (tmp != NULL){

                            bool verif =tmp->haySuficiente(lista);

                            if (!verif){
                                cout<<"---------A COLA DE FABRICACION---------"<<endl;
                                tmp->articulo->imprimir();
                                cout<<"---------------------------------------"<<endl;
                                tmp->articulo->aFabrica=true;
                                NodoArticulo *cat= lista->buscar(tmp->articulo->codProd);
                                string categoria =cat->articulo->categoria;



                                if (categoria == "A") {
                                    //cout<<"A"<<endl;
                                    encolarMenor(f1,f4,pedido);
                                    sleep(1);

                                    flag= false;

                                } else if (categoria == "B") {
                                    encolarMenor(f2,f4,pedido);
                                    sleep(1);
                                    flag= false;

                                } else if (categoria == "C") {

                                    f3.enQueue(pedido);
                                    sleep(1);
                                    flag= false;

                                }
                            }

                            tmp = tmp->siguiente;

                        }
                        if (flag){
                            pedido->factura->insertarAlFinal("Este articulo no necesito ir a fabrica\n");
                            a_queue.enQueue(pedido);
                        }
                    }
                }
                // Esperar un tiempo antes de continuar
                sleep(1);
            }
        }
    }

    bool getPaused (){
        return paused;
    }

    void setPaused (bool _paused){
        paused = _paused;
    }
    
private:
    PriorityQueue * p_queue;
    Queue<Pedido *>& a_queue;
    Queue<Pedido *> & f1;
    Queue<Pedido *> & f2;
    Queue<Pedido *> & f3;
    Queue<Pedido *> & f4;
    listaArticulos * lista;
    bool paused = false;



};

class Fabrica : public QThread {

public:
    Fabrica(listaArticulos  * l, Queue<Pedido *>& colaAlistos,Queue<Pedido *> & A, string cat,QSemaphore& sem, string _name, QLabel * lbl,QObject* parent = nullptr)
        : QThread(parent), a_queue(colaAlistos), cola(A), lista(l), _categoria(cat),semaphore(sem),name(_name),label(lbl)

    {
    }
    Fabrica(listaArticulos  * l, Queue<Pedido *>& colaAlistos,Queue<Pedido *> & A, string cat, string cat2, QSemaphore& sem,
            string _name,QLabel * lbl,QObject* parent = nullptr)
        : QThread(parent), a_queue(colaAlistos), cola(A), lista(l), _categoria(cat), _categoria2(cat2),semaphore(sem), name(_name),label(lbl)
    {
    }

    //string ruta_archivo = "C:\\Users\\javia\\OneDrive - Estudiantes ITCR\\TEC\\TEC 3 Semestre\\Estructuras de Datos\\Proyectos\\Proyecto1_ED\\untitled\\Articulos\\articulos.txt";


    void run() override {

        if(!paused){
            while (true) {

                semaphore.acquire();


                while(!cola.isEmpty()){
                    sleep(4);
                    cout<<name<<endl;

                    Pedido * pedido = cola.deQueue();
                    cout<<"hice dequeue"<<endl;

                    NodoArticuloP *tmp = pedido->listaPedido->pn;



                    bool flag= true;

                    while (tmp != NULL){
                        NodoArticulo * n =lista->buscar(tmp->articulo->codProd);
                        string categoria =n->articulo->categoria;

                        if (categoria  ==_categoria || categoria  ==_categoria2){
                            cout<<"entre"<<endl;
                            if (tmp->articulo->aFabrica && !tmp->articulo->fabricado){
                                cout<<tmp->articulo->cantidad<<endl;
                                int falta= tmp->articulo->cantidad - n->articulo->cantidadAlmacen;

                                pedido->factura->insertarAlFinal("A fabrica: "+retornarHora()+" Faltaba "+to_string(falta)+" de"+tmp->articulo->codProd+"\n");

                                int cantidadN= n->articulo->cantidadAlmacen+=(tmp->articulo->cantidad);

                                pedido->factura->insertarAlFinal("ARTICULO "+tmp->articulo->codProd+" Fabrica: "+name+"\n"+to_string(falta)+" unidades\n");
                                pedido->factura->insertarAlFinal("inicio: "+retornarHora());

                                n->articulo->cantidadAlmacen= cantidadN;
                                tmp->articulo->fabricado=true;

                                QString s = QString::fromStdString(name+" ARTICULO: "+tmp->articulo->codProd);

                                label->setText(s);
                                sleep(n->articulo->segundosF);
                                cambiar(n->articulo->codigo,1,cantidadN);
                                label->setText("Fabricacion");
                                pedido->factura->insertarAlFinal("final: "+retornarHora());

                                a_queue.enQueue(pedido);
                                pedido->factura->insertarAlFinal("A alisto: "+retornarHora());
                                cout<<"Encolado en queue de alisto"<<endl;




                            }
                        }
                        tmp = tmp->siguiente;

                    }


                }
                //sleep(3);

                semaphore.release();

                // Esperar un tiempo antes de continuar

            }
        }
    }
    bool getPaused (){
        return paused;
    }

    void setPaused (bool _paused){
        paused = _paused;
    }

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
    Facturadora(Queue<Pedido *> & A, QObject* parent = nullptr)
        : QThread(parent),  cola(A)

    {
    }

    Queue<Pedido *> & cola;
    //string ruta_archivo = "C:\\Users\\javia\\OneDrive - Estudiantes ITCR\\TEC\\TEC 3 Semestre\\Estructuras de Datos\\Proyectos\\Proyecto1_ED\\untitled\\Articulos\\articulos.txt";


    void run() override {

        if(!paused){
            while (true) {


                while(!cola.isEmpty()){

                    Pedido * pedido = cola.deQueue();
                    string name= to_string(pedido->numPedido)+"_"+pedido->codCliente+"_"+retornarHora()+".txt";
                    pedido->factura->insertarAlFinal("Finalizado: "+retornarHora());

                    //fstream factura("C:\\Users\\javia\\OneDrive - Estudiantes ITCR\\TEC\\TEC 3 Semestre\\Estructuras de Datos\\Proyectos\\Proyecto1_ED\\untitled\\Facturas\\"+name);
                    fstream factura("C:\\Users\\QUIROS CALVO\\Trabajos_TEC_2023\\ED_\\I Proyecto\\untitled\\Facturas\\"+name);

                    factura<<"Pedido: "+to_string(pedido->numPedido)+"\n"+"Cliente: "+pedido->codCliente+"\n";

                    NodoFactura *tmp = pedido->factura->pn;

                    while(tmp!=NULL){
                        factura<<tmp->txt;
                        tmp=tmp->siguiente;
                    }


                }
                 sleep(5000);
            }
        }



    }
    bool getPaused (){
        return paused;
    }

    void setPaused (bool _paused){
        paused = _paused;
    }
private:
    bool paused = false;
};







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
    void finalizado(Alistador* alistador);

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





class Alistados : public QThread {

public:
    Alistados(Queue<Pedido *>& colaFacturacion,Queue<Pedido *> & A, string _name,QObject* parent = nullptr)
        : QThread(parent), f_queue(colaFacturacion), cola(A), name(_name)

    {
    }

    //string ruta_archivo = "C:\\Users\\javia\\OneDrive - Estudiantes ITCR\\TEC\\TEC 3 Semestre\\Estructuras de Datos\\Proyectos\\Proyecto1_ED\\untitled\\Articulos\\articulos.txt";


    void run() override {


        while (true) {


             while(!cola.isEmpty()){
                cout<<name<<endl;

                Pedido * pedido = cola.deQueue();

                NodoArticuloP *tmp = pedido->listaPedido->pn;




                while (tmp != NULL){
                    sleep(1);
                    tmp = tmp->siguiente;

                }

                f_queue.enQueue(pedido);


             }


        }
    }

    bool getPaused (){
        return paused;
    }

    void setPaused (bool _paused){
        paused = _paused;
    }
private:
    bool paused = false;
    Queue<Pedido *>& f_queue;
    string name;
    Queue<Pedido *> & cola;


};

void detenerThreads(Balanceador * balanceador) {
    balanceador->quit();
    balanceador->wait();

}

#endif // THREADS_H



