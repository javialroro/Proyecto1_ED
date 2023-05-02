
//#include "QThreads.h"
#include "mainwindow.h"
#include "procedimientos.h"
#include "./ui_mainwindow.h"
#include "vcolapedidos.h"
#include <QApplication>
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
RevisorArchivos::RevisorArchivos(struct listaArticulos  * la, struct listaClientes *lc, PriorityQueue * pq, QObject* parent )
    : QThread(parent), listaArticulos(la) , listaClientes(lc) , colaPedidos(pq)
{
}
    void RevisorArchivos::run() {
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

    PriorityQueue* RevisorArchivos::getColaPedidos(){
        return colaPedidos;
    }

Balanceador::Balanceador(listaArticulos  * l, PriorityQueue * colaPedidos, Queue<Pedido *>& colaAlistos,Queue<Pedido *> & A,
                Queue<Pedido *> & B,Queue<Pedido *> & C, Queue<Pedido *> & D, QObject* parent)
        : QThread(parent), p_queue(colaPedidos) , a_queue(colaAlistos), f1(A), f2(B),f3(C),f4(D),lista(l)
    {
    }


    void Balanceador::run() {

        while (true) {
            if(!paused){
                    bool flag= true;
                    while(!p_queue->isEmptyPriority()){
                        sleep(3);


                        Pedido * pedido = p_queue->deQueuePriority();

                        QString textolbl = "Procesando pedido: #" + QString::fromStdString(to_string(pedido->numPedido));
                        QString textolblVacio = "";
                        emit actualizarLabelBalanceador(textolbl);

                        cout<<"hice Dequeue"<<endl;
                        pedido->factura->insertarAlFinal("Balanceador: "+retornarHora()+"\n");



                        NodoArticuloP *tmp = pedido->listaPedido->pn;



                        while (tmp != NULL){

                            bool verif =tmp->haySuficiente(lista);
                            //cout<<flag<<endl;

                            if (!verif){
                                flag= false;
                                cout<<"---------A COLA DE FABRICACION---------"<<endl;
                                tmp->articulo->imprimir();
                                cout<<"---------------------------------------"<<endl;
                                tmp->articulo->aFabrica=true;
                                NodoArticulo *cat= lista->buscar(tmp->articulo->codProd);
                                string categoria =cat->articulo->categoria;



                                if (categoria == "A") {
                                    //cout<<"A"<<endl;
                                    encolarMenor(f1,f4,pedido);
                                    cantProcesados++;
                                    emit actualizarLabelBalanceador(textolblVacio);
                                    emit actualizarLabelCantBalanceador(QString::number(cantProcesados));
                                    sleep(1);



                                } else if (categoria == "B") {
                                    encolarMenor(f2,f4,pedido);
                                    cantProcesados++;
                                    emit actualizarLabelBalanceador(textolblVacio);
                                    emit actualizarLabelCantBalanceador(QString::number(cantProcesados));
                                    sleep(1);


                                } else if (categoria == "C") {

                                    f3.enQueue(pedido);
                                    cantProcesados++;
                                    emit actualizarLabelBalanceador(textolblVacio);
                                    emit actualizarLabelCantBalanceador(QString::number(cantProcesados));
                                    sleep(1);


                                }
                            }


                            tmp = tmp->siguiente;
                            //cout<<flag<<endl;

                        }
                        //cout<<flag<<" debe entrar"<<endl;
                        if (flag){
                            sleep(5);
                            cout<<"A alisto"<<endl;
                            //pedido->factura->insertarAlFinal("Este articulo no necesito ir a fabrica\n");
                            //emit actualizarLabelBalanceador(textolblVacio);
                            a_queue.enQueue(pedido);
                            cantProcesados++;
                            emit actualizarLabelBalanceador(textolblVacio);
                            emit actualizarLabelCantBalanceador(QString::number(cantProcesados));

                            //cout<<"hizo enqueue";
                        }

                    }
                }
                // Esperar un tiempo antes de continuar
                sleep(8);
            }
        }


    bool Balanceador::getPaused (){
        return paused;
    }

    void Balanceador::setPaused (bool _paused){
        paused = _paused;
    }


    Fabrica::Fabrica(listaArticulos  * l, Queue<Pedido *>& colaAlistos,Queue<Pedido *> & A, string cat,QSemaphore& sem, string _name, QObject* parent )
            : QThread(parent), a_queue(colaAlistos), cola(A), lista(l), _categoria(cat),semaphore(sem),name(_name)

        {
        }
    Fabrica::Fabrica(listaArticulos  * l, Queue<Pedido *>& colaAlistos,Queue<Pedido *> & A, string cat, string cat2, QSemaphore& sem,
            string _name,QObject* parent)
        : QThread(parent), a_queue(colaAlistos), cola(A), lista(l), _categoria(cat), _categoria2(cat2),semaphore(sem), name(_name)
    {
    }

        //string ruta_archivo = "C:\\Users\\javia\\OneDrive - Estudiantes ITCR\\TEC\\TEC 3 Semestre\\Estructuras de Datos\\Proyectos\\Proyecto1_ED\\untitled\\Articulos\\articulos.txt";


    void Fabrica::run() {

            while (true) {

                if(!paused){

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



                                    emit actualizarLabel(s);
                                    sleep(n->articulo->segundosF);
                                    cambiar(n->articulo->codigo,1,cantidadN);
                                    emit actualizarLabel("Fabricacion");
                                    pedido->factura->insertarAlFinal("final: "+retornarHora());

                                    a_queue.enQueue(pedido);
                                    cantAtendidos++;
                                    emit actualizarLabelCant(QString::number(cantAtendidos));
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
    bool Fabrica::getPaused (){
            return paused;
        }

    void Fabrica::setPaused (bool _paused){
        paused = _paused;
    }


    Facturadora::Facturadora(Queue<Pedido *> & A, QObject* parent)
        : QThread(parent),  cola(A)

    {
    }

    //string ruta_archivo = "C:\\Users\\javia\\OneDrive - Estudiantes ITCR\\TEC\\TEC 3 Semestre\\Estructuras de Datos\\Proyectos\\Proyecto1_ED\\untitled\\Articulos\\articulos.txt";


    void Facturadora::run(){
                while (true) {
                    if(!paused){


                    while(!cola.isEmpty()){

                        Pedido * pedido = cola.deQueue();

                        string name= "Pedido: "+to_string(pedido->numPedido)+""+pedido->codCliente;
                        //fstream factura("C:\\Users\\javia\\OneDrive - Estudiantes ITCR\\TEC\\TEC 3 Semestre\\Estructuras de Datos\\Proyectos\\Proyecto1_ED\\untitled\\Facturas\\"+name);


                        stringstream ss;
                        //ss << "C:\\Users\\javia\\OneDrive - Estudiantes ITCR\\TEC\\TEC 3 Semestre\\Estructuras de Datos\\Proyectos\\Proyecto1_ED\\untitled\\Facturas\\" << name;
                        ss << "C:\\Users\\QUIROS CALVO\\Trabajos_TEC_2023\\ED_\\I Proyecto\\untitled\\Facturas\\" << name;
                        std::string ruta_archivo = ss.str();


                        pedido->factura->insertarAlFinal("Finalizado: "+retornarHora());
                        ofstream factura(ruta_archivo);

                        //fstream factura("C:\\Users\\QUIROS CALVO\\Trabajos_TEC_2023\\ED_\\I Proyecto\\untitled\\Facturas\\"+name);
                        if (!factura){
                            cout<<"error al crear archivo"<<endl;
                        }

                        factura<<"Pedido: "+to_string(pedido->numPedido)+"\n"+"Cliente: "+pedido->codCliente+"\n";

                        NodoFactura *tmp = pedido->factura->pn;

                        while(tmp!=NULL){
                            factura<<tmp->txt;
                            tmp=tmp->siguiente;
                        }

                        factura.close();


                    }
                    sleep(1);
                }
        }



    }
    bool Facturadora::getPaused (){
        return paused;
    }

    void Facturadora::setPaused (bool _paused){
        paused = _paused;
    }
//------------------------------------------------------------------------

    Alistador::Alistador(int _id, QTableWidget* _tableWidget, Queue<Pedido*>& _colaAlistados, QObject* parent)
        : QThread(parent), id(_id),colaAlistados(_colaAlistados)
        {
            // Conectar la señal finalizado de Alistador a la ranura alistadorLiberado de Bodega

        }


    void Alistador::run()
    {
        while (true) {
            // Esperar a recibir la señal para procesar un artículo
            if (!ubicacion.isEmpty()) {
                        qDebug()<<"entro";
                //qDebug()<<"entra a ciclo alistador";
                QString ubicacionCopy = ubicacion;
                ArticuloPedido* articuloCopy = articulo;
                //qDebug()<<"va a mover";
                // Procesar el artículo
                moverAlistador(ubicacionCopy, articuloCopy,pedido);
                qDebug()<<"movio";

                // Emitir señal para notificar que el alistador ha finalizado

                ubicacion="";
            } else {
                QThread::msleep(2000);
            }
        }
    }

    void Alistador::procesarArticuloAlist(Queue<Alistador*> _colaAlistadores, const QString& _ubicacion, ArticuloPedido* _articulo)
    {
        // Asignar el artículo y la ubicación al alistador
        colaAlistadores = _colaAlistadores;
        ubicacion = _ubicacion;
        articulo = _articulo;
        cout<<"termino";
    }

    //void Alistador::alistadorLiberado(Alistador* alistador) {
    //    mutex.lock();
    //    colaAlistadores.enQueue(alistador);
    //    mutex.unlock();
    //}


    QString Alistador::to_String(){
        QString texto = "";
        texto.append("Alistador: #");
        texto.append(QString::number(id));
        return texto;
    }


    int Alistador::obtenerIndiceLetra(QString& letra)
    {
        QString letrasAlfabeto = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        return letrasAlfabeto.indexOf(letra);
    }

    void Alistador::moverAlistador(QString& ubicacion, ArticuloPedido* articulo, Pedido * pedido)
    {

        qDebug() << ubicacion;
        QString letra = QString(ubicacion.at(0));
        QString strNumero = ubicacion.mid(1);
        int numero = strNumero.toInt();

        // Obtener índices
        int fila = numero - 1;
        int columna = obtenerIndiceLetra(letra);

        int distanciaFilas = fila;
        //qDebug()<<"fila";
        //qDebug()<<fila;
        //qDebug()<<"columna";
        //qDebug()<<columna;
        int distanciaColumnas = columna;

        // Calcular el tiempo necesario para moverse hasta la ubicación del artículo
        int tiempoIda = distanciaFilas + distanciaColumnas;
        qDebug() << tiempoIda;


        // Simular el tiempo de movimiento
        QThread::sleep(tiempoIda);

        qDebug()<<"llego";


        // Simular el tiempo de regreso a la posición inicial
        QThread::sleep(tiempoIda);
        colaAlistados.enQueue(pedido);
        //colaAlistadores.enQueue(this);
        emit(finalizado(this));
    }


        //-------------------------------------------------------------------------

Bodega::Bodega(Queue<Pedido*>& _colaAlisto, Queue<Pedido*>& _colaAlistados, Queue<Alistador *>& _colaAlistadores, listaArticulos * l, QObject* parent)
        : colaAlisto(_colaAlisto), colaAlistados(_colaAlistados), colaAlistadores(_colaAlistadores), listaArt(l),QThread(parent)
{
    //qDebug() << "Entra al constructor de bodega";
    // Crear los 6 alistadores y agregarlos a la cola
    //------------

    Alistador* alistador1 = new Alistador(1, table,colaAlistados);
    colaAlistadores.enQueue(alistador1);
    alistador1->start();
    //qDebug() << "pasa generar alistador1";


    //------------
    Alistador* alistador2 = new Alistador(2, table,colaAlistados);
    colaAlistadores.enQueue(alistador2);
    alistador2->start();
    //qDebug() << "pasa generar alistador2";

    //------------
    Alistador* alistador3 = new Alistador(3, table,colaAlistados);
    colaAlistadores.enQueue(alistador3);
    //qDebug() << "pasa generar alistador3";

    // Conectar la señal procesarArticuloBodega de Bodega a la ranura procesarArticuloAlist de Alistador

    Alistador* alistador4 = new Alistador(4, table,colaAlistados);
    colaAlistadores.enQueue(alistador4);
    //qDebug() << "pasa generar alistador4";


    Alistador* alistador5 = new Alistador(5, table,colaAlistados);
    colaAlistadores.enQueue(alistador5);
    //qDebug() << "pasa generar alistador5";



    //------------
    Alistador* alistador6 = new Alistador(6, table,colaAlistados);
    colaAlistadores.enQueue(alistador6);
    //qDebug() << "pasa generar alistador6";
    connect(alistador1, &Alistador::finalizado, this, &Bodega::encolarAlistador);
    connect(alistador2, &Alistador::finalizado, this, &Bodega::encolarAlistador);
    connect(alistador3, &Alistador::finalizado, this, &Bodega::encolarAlistador);
    connect(alistador4, &Alistador::finalizado, this, &Bodega::encolarAlistador);
    connect(alistador5, &Alistador::finalizado, this, &Bodega::encolarAlistador);
    connect(alistador6, &Alistador::finalizado, this, &Bodega::encolarAlistador);

}

    void Bodega::run()
    {
        //qDebug() << "inicia run bodega";
        while (true) {
            if(!paused){
                if (!colaAlisto.isEmpty()){
                    //qDebug() << "alisto no está vacía";
                    // Esperar a que haya un pedido alistado en la bodega
                    Pedido* pedido = colaAlisto.deQueue();
                    Alistador * alistador = colaAlistadores.deQueue();
                    //colaAlistadores.deQueue();
                    qDebug()<<alistador->id;
                    ListaArticulosP* listaArticulos = pedido->listaPedido;
                    NodoArticuloP* temp = listaArticulos->pn;
                    //qDebug() << "Pasa inicializaciones";
                while (temp != NULL) {
                    ArticuloPedido* articulo = temp->articulo;
                    string s = listaArt->buscarUbi(temp->articulo->codProd);
                    QString ubicacion = QString::fromStdString(s);
                    qDebug()<<ubicacion;
                    alistador->ubicacion= ubicacion;
                    alistador->articulo=articulo;
                    alistador->pedido= pedido;
                    temp = temp->siguiente;


                    }
                    sleep(1);

                    colaAlistadores.enQueue(alistador);

                    colaAlistados.enQueue(pedido);

                     //Procesar el pedido alistado

                    //actualizarInterfaz();
                }

            }

            QThread::sleep(3);
        }
    }


    bool Bodega::getPaused(){
        return paused;
    }

    void Bodega::setPaused(bool _paused){
        paused = _paused;
    }

    void Bodega::actualizarInterfaz()
    {
        qDebug() << "entra actualizarInterfaz";
        mutex.lock();
        int rowCount = table->rowCount();
        int columnCount = table->columnCount();

        for (int row = 0; row < rowCount; ++row) {
            for (int col = 0; col < columnCount; ++col) {
                QTableWidgetItem* item = table->item(row, col);
                if (item) {
                    QVariant data = item->data(Qt::UserRole);
                    CeldaArticulo celda = data.value<CeldaArticulo>();
                    QString codigo = celda.codigo;
                    int cantidad = celda.cantidad;

                    // Actualizar la celda en la tabla con el código y la cantidad del artículo
                    item->setText(celda.toString());
                    qDebug() << "Se actualizó la interfaz";
                }
            }
        }

        mutex.unlock();
    }

    void Bodega::encolarAlistador(Alistador * alistador){
        colaAlistadores.enQueue(alistador);
    }






Alistados::Alistados(Queue<Pedido *>& colaFacturacion,Queue<Pedido *> & A, string _name,QObject* parent)
    : QThread(parent), f_queue(colaFacturacion), cola(A), name(_name)
{
}

    //string ruta_archivo = "C:\\Users\\javia\\OneDrive - Estudiantes ITCR\\TEC\\TEC 3 Semestre\\Estructuras de Datos\\Proyectos\\Proyecto1_ED\\untitled\\Articulos\\articulos.txt";


    void Alistados::run()  {


        while (true) {

            if (!paused){
            while(!cola.isEmpty()){
                cout<<name<<endl;

                Pedido * pedido = cola.deQueue();

                NodoArticuloP *tmp = pedido->listaPedido->pn;




                while (tmp != NULL){
                    sleep(1);
                    cout<<"aliste el pedido "+tmp->articulo->codProd<<endl;;
                    tmp = tmp->siguiente;

                }

                f_queue.enQueue(pedido);


                }

            }
        }
    }

    bool Alistados::getPaused (){
        return paused;
    }

    void Alistados::setPaused (bool _paused){
        paused = _paused;
    }


MainWindow::MainWindow(PriorityQueue* _colaPedidos,Queue<Pedido *> & _colaAlisto, Queue<Pedido *> &_colaAlistados,  Queue<Pedido *> &_colaA,  Queue<Pedido *> &_colaB,  Queue<Pedido *> &_colaC,  Queue<Pedido *>& _colaComodin, Queue<Alistador *> & _colaAlistadores,
                       listaArticulos * la, listaClientes * lc, Alistados * a, RevisorArchivos * &r, Balanceador * bl, Fabrica * f1,
                           Fabrica * f2,Fabrica * f3,Fabrica * f4, Facturadora * fc, Bodega * b, Queue<Pedido *> & cf )
    : QMainWindow(),
        colaPedidos(_colaPedidos),colaAlisto(_colaAlisto),colaAlistados(_colaAlistados),colaA (_colaA),colaB (_colaB),colaC (_colaC),colaComodin (_colaComodin),colaAlistadores(_colaAlistadores),
        listaArt(la),lista(lc),alistad(a),revisor(r),balanceador(bl),A(f1),B(f2),C(f3),Comodin(f4),facturadora(fc),bodega(b),colaFacturacion(cf),

    ui(new Ui::MainWindow)

{
    connect(A, &Fabrica::actualizarLabel, this, &MainWindow::actualizarTextoLabelA);
    connect(B, &Fabrica::actualizarLabel, this, &MainWindow::actualizarTextoLabelB);
    connect(C, &Fabrica::actualizarLabel, this, &MainWindow::actualizarTextoLabelC);
    connect(Comodin, &Fabrica::actualizarLabel, this, &MainWindow::actualizarTextoLabelComodin);

    connect(A, &Fabrica::actualizarLabelCant, this, &MainWindow::actualizarTextoLabelCantA);
    connect(B, &Fabrica::actualizarLabelCant, this, &MainWindow::actualizarTextoLabelCantB);
    connect(C, &Fabrica::actualizarLabelCant, this, &MainWindow::actualizarTextoLabelCantC);
    connect(Comodin, &Fabrica::actualizarLabelCant, this, &MainWindow::actualizarTextoLabelCantComodin);
    ui->setupUi(this);

    CargarArticulos(listaArt);
    cargarClientes(lista);

    revisor->start();
    balanceador->start();

    connect(balanceador, &Balanceador::actualizarLabelBalanceador, this, &MainWindow::actualizarTextoLabelBalanceador);
    connect(balanceador, &Balanceador::actualizarLabelCantBalanceador, this, &MainWindow::actualizarTextoLabelCantBalanceador);

    bodega->start();

    A->start();
    B->start();
    C->start();
    Comodin->start();

    qDebug()<<"Hola";

    //emit tableWidgetSignal(ui->tblBodega);


    // Conectar la señal con la ranura de Bodega
    //connect(this, SIGNAL(tableWidgetSignal(QTableWidget*)), bodega, SLOT(receiveTableWidget(QTableWidget*)));


}

MainWindow::~MainWindow()
{
    ui->setupUi(this);
}

//QTableWidget* MainWindow::getQTable(){
//    return ui->tblBodega;
//-}


// get labels
QLabel* MainWindow::getLabelFabricacionA(){
    return ui->lblMostrarFabricandoA;
}

QLabel* MainWindow::getLabelFabricacionB(){
    return ui->lblMostrarFabricandoB;
}

QLabel* MainWindow::getLabelFabricacionC(){
    return ui->lblMostrarFabricandoC;
}

QLabel* MainWindow::getLabelFabricacionComodin(){
    return ui->lblMostrarFabricandoComodin;
}

QLabel* MainWindow::getLabelBalanceador(){
    return ui->lblMostrarActBalanceador;
}

QLabel* MainWindow::getLabelCantBalanceador(){
    return ui->lblMostrarCantBalanceador;
}

QLabel* MainWindow::getLabelCantA(){
    return ui->lblCantFabA;
}

QLabel* MainWindow::getLabelCantB(){
    return ui->lblCantFabB;
}

QLabel* MainWindow::getLabelCantC(){
    return ui->lblCantFabC;
}

QLabel* MainWindow::getLabelCantComodin(){
    return ui->lblCantFabComodin;
}


// Actualizar texto labels
void MainWindow::actualizarTextoLabelA(const QString& texto) {
     QLabel * lbl=getLabelFabricacionA();
     lbl->setText(texto);
}

void MainWindow::actualizarTextoLabelB(const QString& texto) {
     QLabel * lbl=getLabelFabricacionB();
     lbl->setText(texto);
}

void MainWindow::actualizarTextoLabelC(const QString& texto) {
     QLabel * lbl=getLabelFabricacionC();
     lbl->setText(texto);
}

void MainWindow::actualizarTextoLabelComodin(const QString& texto) {
     QLabel * lbl=getLabelFabricacionComodin();
     lbl->setText(texto);
}

void MainWindow::actualizarTextoLabelBalanceador(const QString& texto) {
     QLabel * lbl=getLabelBalanceador();
     qDebug() << "se actualiza el label: " << texto;
     lbl->setText(texto);
}

void MainWindow::actualizarTextoLabelCantBalanceador(const QString& texto) {
     QLabel * lbl=getLabelCantBalanceador();
     lbl->setText(texto);
}

void MainWindow::actualizarTextoLabelCantA(const QString& texto) {
     QLabel * lbl=getLabelCantA();
     lbl->setText(texto);
}

void MainWindow::actualizarTextoLabelCantB(const QString& texto) {
     QLabel * lbl=getLabelCantB();
     lbl->setText(texto);
}

void MainWindow::actualizarTextoLabelCantC(const QString& texto) {
     QLabel * lbl=getLabelCantC();
     lbl->setText(texto);
}

void MainWindow::actualizarTextoLabelCantComodin(const QString& texto) {
     QLabel * lbl=getLabelCantComodin();
     lbl->setText(texto);
}


void MainWindow::on_btnColaPedidos_clicked() {
    //qDebug() << "Entre al btnColaPedidos";
    vColaPedidos* vColaPedidosDialog = new vColaPedidos(colaPedidos); // Crear instancia de vColaPedidos

    //qDebug() << "Pasó el new";
    vColaPedidosDialog->setQueueContentPQ(); // Establecer el contenido de la cola en el QTextEdit

    vColaPedidosDialog->show();
}

void MainWindow::on_btnColaFabricaciones1_clicked()
{
    qDebug()<<colaA._toString()+" A";
    vColaPedidos* vColaPedidosDialog = new vColaPedidos(colaA); // Crear instancia de vColaPedidos

    vColaPedidosDialog->setQueueContent(); // Establecer el contenido de la cola en el QTextEdit

    vColaPedidosDialog->show();
}


void MainWindow::on_btnColaFabricaciones2_clicked()
{
    qDebug()<<colaB._toString()+" B";
    vColaPedidos* vColaPedidosDialog = new vColaPedidos(colaB); // Crear instancia de vColaPedidos

    vColaPedidosDialog->setQueueContent(); // Establecer el contenido de la cola en el QTextEdit

    vColaPedidosDialog->show();
}


void MainWindow::on_btnColaFabricaciones3_clicked()
{
    qDebug()<<colaC._toString()+" C";
    vColaPedidos* vColaPedidosDialog = new vColaPedidos(colaC); // Crear instancia de vColaPedidos

    vColaPedidosDialog->setQueueContent(); // Establecer el contenido de la cola en el QTextEdit

    vColaPedidosDialog->show();
}


void MainWindow::on_btnColaFabricaciones4Com_clicked()
{
    qDebug()<<colaComodin._toString()+" D";
    vColaPedidos* vColaPedidosDialog = new vColaPedidos(colaComodin); // Crear instancia de vColaPedidos

    vColaPedidosDialog->setQueueContent(); // Establecer el contenido de la cola en el QTextEdit

    vColaPedidosDialog->show();
}


void MainWindow::on_btnColaDeAlisto_clicked()
{
    vColaPedidos* vColaPedidosDialog = new vColaPedidos(colaAlisto); // Crear instancia de vColaPedidos

    vColaPedidosDialog->setQueueContent(); // Establecer el contenido de la cola en el QTextEdit

    vColaPedidosDialog->show();

}


void MainWindow::on_btnColaAlistados_clicked()
{
    vColaPedidos* vColaPedidosDialog = new vColaPedidos(colaAlistados); // Crear instancia de vColaPedidos

    vColaPedidosDialog->setQueueContent(); // Establecer el contenido de la cola en el QTextEdit

    vColaPedidosDialog->show();

}


void MainWindow::on_btnColaDeAlistadores_clicked()
{
    vColaPedidos* vColaPedidosDialog = new vColaPedidos(colaAlistadores); // Crear instancia de vColaPedidos

    vColaPedidosDialog->setQueueContentA(); // Establecer el contenido de la cola en el QTextEdit

    vColaPedidosDialog->show();
    qDebug()<<colaAlistadores._toString();
}


void MainWindow::on_btnColaPorFacturar_clicked()
{
    vColaPedidos* vColaPedidosDialog = new vColaPedidos(colaFacturacion); // Crear instancia de vColaPedidos

    vColaPedidosDialog->setQueueContentA(); // Establecer el contenido de la cola en el QTextEdit

    vColaPedidosDialog->show();
}


void MainWindow::on_btnDetenerBalanceador_clicked()
{
    qDebug()<<balanceador->getPaused();
    balanceador->setPaused(!balanceador->getPaused());
    qDebug()<<balanceador->getPaused();
}



void MainWindow::on_btnDetenerFab04Com_clicked()
{
    qDebug()<<Comodin->getPaused();
    Comodin->setPaused(!Comodin->getPaused());
    qDebug()<<Comodin->getPaused();
}


void MainWindow::on_btnDetenerFab03_clicked()
{
    qDebug()<<C->getPaused();
    C->setPaused(!C->getPaused());
    qDebug()<<C->getPaused();
}


void MainWindow::on_btnDetenerFab02_clicked()
{
    qDebug()<<A->getPaused();
    A->setPaused(!A->getPaused());
    qDebug()<<A->getPaused();
}


void MainWindow::on_btnDetenerFab01_clicked()
{
    qDebug()<<B->getPaused();
    B->setPaused(!B->getPaused());
    qDebug()<<B->getPaused();
}







void MainWindow::on_btnDetenerAlistados_clicked()
{
    //Alistados
}

