
#ifndef QTHREADS_H
#define QTHREADS_H
#include <QtCore>
#include <QThread>
#include <QDir>
#include <QTableWidget>
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

private:
    Queue<Pedido *>& a_queue;

    listaArticulos * lista;
    string _categoria;
    string _categoria2;
    string name;
    QSemaphore& semaphore;
    QLabel * label;
    Queue<Pedido *> & cola;


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
};


class Alistador : public QThread
{
public:
    explicit Alistador(Queue<Pedido *>& _colaAlisto, Queue<Pedido *>& _colaAlistados, QTableWidget *tableWidget, listaArticulos *lista, QObject *parent = nullptr) :
        colaAlisto(_colaAlisto), colaAlistados(_colaAlistados), m_tableWidget(tableWidget), listaArtGeneral(lista), QThread(parent)
    {
    }

    void run() override
    {
        QString ubicacionInicial = "A01";

        while (true) {
             if (!colaAlisto.isEmpty()) {
                QString ubicacionActual = ubicacionInicial;

                Pedido *pedidoAProcesar = colaAlisto.deQueue();
                ListaArticulosP* listArt = pedidoAProcesar->listaPedido;
                NodoArticuloP* temp = listArt->pn;

                while (temp != NULL) {
                    string strUbication = getUbication(temp->articulo->codProd);
                    QString ubication = QString::fromStdString(strUbication);
                    QString letra = ubication.left(1);
                    int numero = ubication.mid(1).toInt();

                    int espaciosDiferencia = calcularEspaciosDiferencia(ubicacionActual, ubication);

                    moverAlistador(letra, numero, temp->articulo);
                    QThread::msleep(espaciosDiferencia * 1000);

                    ubicacionActual = ubication;

                    // Calcular espacios de diferencia para volver al inicio
                    int espaciosDiferenciaVuelta = calcularEspaciosDiferencia(ubicacionActual, ubicacionInicial);

                    moverAlistador("A", 1, temp->articulo); // Mover al inicio (A01)
                    QThread::msleep(espaciosDiferenciaVuelta * 1000);
                    temp = temp->siguiente;
                }
                colaAlistados.enQueue(pedidoAProcesar);
             }
        }
    }

private:
    Queue<Pedido *>& colaAlisto;
    Queue<Pedido *>& colaAlistados;

    QTableWidget* m_tableWidget;

    listaArticulos *listaArtGeneral;

    string getUbication(string cod){
        NodoArticulo *temp = listaArtGeneral->pn;
        while(temp != NULL){
             if (temp->articulo->codigo == cod)
                return temp->articulo->ubicacionBodega;
             temp = temp->siguiente;
        }
        return "";
    }

    void moverAlistador(const QString& letra, int numero, ArticuloPedido* art)
    {
        // Obtener la columna correspondiente al encabezado de letra
        int column = -1;

        QStringList headerLabels;
        QAbstractItemModel* model = m_tableWidget->model();
        if (model) {
             int columnCount = model->columnCount();
             for (int i = 0; i < columnCount; ++i) {
                QString label = model->headerData(i, Qt::Horizontal).toString();
                headerLabels.append(label);
             }
        }

        for (int i = 0; i < headerLabels.size(); ++i) {
             if (headerLabels.at(i) == letra) {
                column = i;
                break;
             }
        }

        if (column != -1) {
             // Obtener la fila correspondiente al encabezado de número
             int row = numero - 1; // Restamos 1 para ajustar al índice de fila (empezando desde 0)

             // Obtener el elemento de la celda en la posición especificada
             QTableWidgetItem* item = m_tableWidget->item(row, column);
             if (item) {
                // Mover el alistador a la celda correspondiente
                m_tableWidget->setCurrentCell(row, column);
                m_tableWidget->scrollToItem(item, QAbstractItemView::PositionAtCenter);

                // Obtener la cantidad actual de la celda
                QVariant data = item->data(Qt::UserRole);
                CeldaArticulo celda = data.value<CeldaArticulo>();
                int cantidadActual = celda.cantidad;

                // Sumar la cantidad del artículo al total actual
                int nuevaCantidad = cantidadActual + art->cantidad;

                // Actualizar la celda con el código del artículo y la nueva cantidad
                celda.codigo =  QString::fromStdString(art->codProd);
                celda.cantidad = nuevaCantidad;
                item->setData(Qt::UserRole, QVariant::fromValue(celda));

                // Asignar la cadena de texto al elemento de la celda
                item->setText(celda.toString());
             }
        }
    }


    int calcularEspaciosDiferencia(const QString& ubicacionInicial, const QString& ubicacionActual)
    {
        QString letras = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

        QChar letraInicial = ubicacionInicial.at(0);
        int numeroInicial = ubicacionInicial.mid(1).toInt();

        QChar letraActual = ubicacionActual.at(0);
        int numeroActual = ubicacionActual.mid(1).toInt();

        int espaciosDiferencia = 0;

        if (letraInicial == letraActual) {
             espaciosDiferencia = qAbs(numeroActual - numeroInicial);
        } else {
             int indiceInicial = letras.indexOf(letraInicial);
             int indiceActual = letras.indexOf(letraActual);

             espaciosDiferencia = (26 - indiceInicial) + indiceActual + 1;
             espaciosDiferencia += qAbs(numeroActual - numeroInicial);
        }

        return espaciosDiferencia;
    }
};

#endif // THREADS_H



