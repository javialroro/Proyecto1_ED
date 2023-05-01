
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

            QString path = "C:\\Users\\javia\\OneDrive - Estudiantes ITCR\\TEC\\TEC 3 Semestre\\Estructuras de Datos\\Proyectos\\Proyecto1_ED\\untitled\\Pedidos";
            //QString path = "C:\\Users\\QUIROS CALVO\\Trabajos_TEC_2023\\ED_\\I Proyecto\\untitled\\Pedidos";
            QDir directorio(path);
            QStringList archivos = directorio.entryList(QStringList() << "*.txt", QDir::Files);
            if (archivos.size() > 0) {
                qDebug() << "Archivos encontrados:";
                for (const auto& archivo : archivos) {
                    qDebug()<<archivo;

                    string cPath= path.toStdString()+"\\";
                    string cArchivo = archivo.toStdString();
                    string todo= cPath+cArchivo;
                    string errores = "C:\\Users\\javia\\OneDrive - Estudiantes ITCR\\TEC\\TEC 3 Semestre\\Estructuras de Datos\\Proyectos\\Proyecto1_ED\\untitled\\Errores\\"+cArchivo;
                    //string errores = "C:\\Users\\QUIROS CALVO\\Trabajos_TEC_2023\\ED_\\I Proyecto\\untitled\\Errores\\"+cArchivo;

                    fstream arch(todo, std::ios::in | std::ios::app);
                    Archivo *a =  new Archivo(arch,todo,errores);

                    cargarPedido(a, colaPedidos, listaClientes, listaArticulos);

                    string ruta_archivo = todo;
                    string ruta_pedidosP = "C:\\Users\\javia\\OneDrive - Estudiantes ITCR\\TEC\\TEC 3 Semestre\\Estructuras de Datos\\Proyectos\\Proyecto1_ED\\untitled\\PedidosProcesados\\"+cArchivo;
                    //string ruta_pedidosP = "C:\\Users\\QUIROS CALVO\\Trabajos_TEC_2023\\ED_\\I Proyecto\\untitled\\PedidosProcesados\\"+cArchivo;

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
        if(!paused){
            while (true) {
                    bool flag= true;
                    while(!p_queue->isEmptyPriority()){
                        sleep(3);


                        Pedido * pedido = p_queue->deQueuePriority();
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
                                    sleep(1);



                                } else if (categoria == "B") {
                                    encolarMenor(f2,f4,pedido);
                                    sleep(1);


                                } else if (categoria == "C") {

                                    f3.enQueue(pedido);
                                    sleep(1);


                                }
                            }


                            tmp = tmp->siguiente;
                            //cout<<flag<<endl;

                        }
                        //cout<<flag<<" debe entrar"<<endl;
                        if (flag){
                            cout<<"A alisto"<<endl;
                            //pedido->factura->insertarAlFinal("Este articulo no necesito ir a fabrica\n");
                            a_queue.enQueue(pedido);
                            //cout<<"hizo enqueue";
                        }

                    }
                }
                // Esperar un tiempo antes de continuar
                sleep(1);
            }
        }


    bool Balanceador::getPaused (){
        return paused;
    }

    void Balanceador::setPaused (bool _paused){
        paused = _paused;
    }


    Fabrica::Fabrica(listaArticulos  * l, Queue<Pedido *>& colaAlistos,Queue<Pedido *> & A, string cat,QSemaphore& sem, string _name, QLabel * lbl,QObject* parent )
            : QThread(parent), a_queue(colaAlistos), cola(A), lista(l), _categoria(cat),semaphore(sem),name(_name),label(lbl)

        {
        }
    Fabrica::Fabrica(listaArticulos  * l, Queue<Pedido *>& colaAlistos,Queue<Pedido *> & A, string cat, string cat2, QSemaphore& sem,
            string _name,QLabel * lbl,QObject* parent)
        : QThread(parent), a_queue(colaAlistos), cola(A), lista(l), _categoria(cat), _categoria2(cat2),semaphore(sem), name(_name),label(lbl)
    {
    }

        //string ruta_archivo = "C:\\Users\\javia\\OneDrive - Estudiantes ITCR\\TEC\\TEC 3 Semestre\\Estructuras de Datos\\Proyectos\\Proyecto1_ED\\untitled\\Articulos\\articulos.txt";


    void Fabrica::run() {

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

                if(!paused){
                    while (true) {


                        while(!cola.isEmpty()){

                            Pedido * pedido = cola.deQueue();
                            string name= to_string(pedido->numPedido)+"_"+pedido->codCliente+"_"+retornarHora()+".txt";
                            pedido->factura->insertarAlFinal("Finalizado: "+retornarHora());

                            fstream factura("C:\\Users\\javia\\OneDrive - Estudiantes ITCR\\TEC\\TEC 3 Semestre\\Estructuras de Datos\\Proyectos\\Proyecto1_ED\\untitled\\Facturas\\"+name);
                            //fstream factura("C:\\Users\\QUIROS CALVO\\Trabajos_TEC_2023\\ED_\\I Proyecto\\untitled\\Facturas\\"+name);

                            factura<<"Pedido: "+to_string(pedido->numPedido)+"\n"+"Cliente: "+pedido->codCliente+"\n";

                            NodoFactura *tmp = pedido->factura->pn;

                            while(tmp!=NULL){
                                factura<<tmp->txt;
                                tmp=tmp->siguiente;
                            }


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

Alistador::Alistador(QTableWidget* _tableWidget, QObject* parent)
        : QThread(parent), table(_tableWidget)
        {
            // Conectar la señal finalizado de Alistador a la ranura alistadorLiberado de Bodega
            connect(this, SIGNAL(finalizado(Alistador*)), this, SLOT(alistadorLiberado(Alistador*)));
        }


    void Alistador::run()
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

    void Alistador::procesarArticuloAlist(Queue<Alistador*> _colaAlistadores, const QString& _ubicacion, ArticuloPedido* _articulo)
    {
        // Asignar el artículo y la ubicación al alistador
        colaAlistadores = _colaAlistadores;
        ubicacion = _ubicacion;
        articulo = _articulo;
    }

    void Alistador::alistadorLiberado(Alistador* alistador) {
        mutex.lock();
        colaAlistadores.enQueue(alistador);
        mutex.unlock();
    }


    int Alistador::obtenerIndiceLetra(const QString& letra)
    {
        QString letrasAlfabeto = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        return letrasAlfabeto.indexOf(letra);
    }

    void Alistador::moverAlistador(const QString& ubicacion, ArticuloPedido* articulo)
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



        //-------------------------------------------------------------------------

    Bodega::Bodega(QTableWidget* _tableWidget, Queue<Pedido*>& _colaAlisto, Queue<Pedido*>& _colaAlistados, QObject* parent)
        : tableWidget(_tableWidget), colaAlisto(_colaAlisto), colaAlistados(_colaAlistados), QThread(parent)
    {
        // Crear los 6 alistadores y agregarlos a la cola
        for (int i = 0; i < 6; ++i) {
            Alistador* alistador = new Alistador(tableWidget);
            colaAlistadores.enQueue(alistador);

            // Conectar la señal procesarArticuloBodega de Bodega a la ranura procesarArticuloAlist de Alistador
            connect(this, SIGNAL(procesarArticuloBodega(Queue<Alistador*>, const QString&, ArticuloPedido*)),
                    alistador, SLOT(procesarArticuloAlist(Queue<Alistador*>, const QString&, ArticuloPedido*)));

            alistador->start();
        }
        qDebug() << "pasa constructo bodega";
    }


    void Bodega::agregarPedidoAlistado(Pedido* pedido)
    {
        mutex.lock();
        colaAlistados.enQueue(pedido);
        mutex.unlock();
    }

    Pedido* Bodega::obtenerPedidoAlistado()
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

    void Bodega::liberarAlistador(Alistador* alistador)
    {
        mutex.lock();
        colaAlistadores.enQueue(alistador);
        mutex.unlock();
    }

    void Bodega::run()
    {
        //qDebug() << "inicia run bodega";
        while (true) {
            // Esperar a que haya un pedido alistado en la bodega
            Pedido* pedido = obtenerPedidoAlistado();
            //qDebug() << "test 1";

            // Procesar el pedido alistado
            if (pedido!=nullptr)
                procesarPedido(pedido);
           // qDebug() << "test 2";


        }
    }

    void Bodega::actualizarInterfaz()
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


    void Bodega::alistadorLiberado(Alistador* alistador)
    {
        liberarAlistador(alistador);
    }


    void Bodega::procesarPedido(Pedido* pedido)
    {
        //qDebug() << "Entra procesarPedido";
        ListaArticulosP* listaArticulos = pedido->listaPedido;
        NodoArticuloP* temp = listaArticulos->pn;
        //qDebug() << "Pasa inicializaciones";
        while (temp != nullptr) {
            QString ubicacion = QString::fromStdString(temp->articulo->codProd);
            //qDebug() << "while test 1";
            ArticuloPedido* articulo = temp->articulo;
            //qDebug() << "while test 2";

            // Emitir la señal para procesar el artículo en un alistador
            emit procesarArticuloBodega(colaAlistadores, ubicacion, articulo);
            //qDebug() << "while test 3";

            temp = temp->siguiente;
            //qDebug() << "while test 1";
        }

        // Esperar a que todos los alistadores finalicen
        while (!colaAlistadores.isEmpty()) {
            QThread::msleep(500);
            //qDebug() << "whileCola test 1";
        }

        // Enviar el pedido a la cola de alistados
        agregarPedidoAlistado(pedido);
        //qDebug() << "Entra agregarPedidoAlistado";
    }




Alistados::Alistados(Queue<Pedido *>& colaFacturacion,Queue<Pedido *> & A, string _name,QObject* parent)
    : QThread(parent), f_queue(colaFacturacion), cola(A), name(_name)
{
}

    //string ruta_archivo = "C:\\Users\\javia\\OneDrive - Estudiantes ITCR\\TEC\\TEC 3 Semestre\\Estructuras de Datos\\Proyectos\\Proyecto1_ED\\untitled\\Articulos\\articulos.txt";


    void Alistados::run()  {


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

    bool Alistados::getPaused (){
        return paused;
    }

    void Alistados::setPaused (bool _paused){
        paused = _paused;
    }


MainWindow::MainWindow(PriorityQueue* _colaPedidos,Queue<Pedido *> & _colaAlisto, Queue<Pedido *> &_colaAlistados,  Queue<Pedido *> &_colaA,  Queue<Pedido *> &_colaB,  Queue<Pedido *> &_colaC,  Queue<Pedido *>& _colaComodin,
                       listaArticulos * la, listaClientes * lc, Alistados * a, RevisorArchivos * &r, Balanceador * bl, Fabrica * f1,
                           Fabrica * f2,Fabrica * f3,Fabrica * f4, Facturadora * fc, QLabel * lf, Bodega * b)
    : QMainWindow(),
    colaPedidos(_colaPedidos),colaAlisto(_colaAlisto),colaAlistados(_colaAlistados),colaA (_colaA),colaB (_colaB),colaC (_colaC),colaComodin (_colaComodin),
        listaArt(la),lista(lc),alistad(a),revisor(r),balanceador(bl),A(f1),B(f2),C(f3),Comodin(f4),facturadora(fc),labelF(lf),bodega(b),

    ui(new Ui::MainWindow)

{
    ui->setupUi(this);

    setLabelFabricacion(labelF);
    CargarArticulos(listaArt);
    cargarClientes(lista);

    revisor->start();
    balanceador->start();
    bodega->start();

    A->start();
    B->start();
    C->start();
    Comodin->start();

    qDebug()<<"Hola";


}

MainWindow::~MainWindow()
{
    ui->setupUi(this);
}

QTableWidget* MainWindow::getQTable(){
    return ui->tblBodega;
}

QLabel* MainWindow::getLabelFabricacion(){
    return ui->lblMostrarFabricando;
}

void MainWindow::setLabelFabricacion(QLabel* label){
     ui->lblMostrarFabricando=label;
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

void MainWindow::on_btnColaPorFacturar_clicked()
{
    //Queue<Pedido*> colaPedidos = revisor->getColaPedidos()->to_Queue();
    //vColaPedidos* vColaPedidosDialog = new vColaPedidos(colaPedidos);
    //vColaPedidosDialog->show();
}


void MainWindow::on_btnDetenerBalanceador_clicked()
{
    qDebug()<<balanceador->getPaused();
    if (!balanceador->getPaused()){
            balanceador->setPaused(true);
            qDebug()<<balanceador->getPaused();
            qDebug()<<"Balanceador detenido";
    }
    else{
            balanceador->setPaused(false);
            qDebug()<<balanceador->getPaused();
    }
    //balanceador->setPaused(!balanceador->getPaused());
}



void MainWindow::on_btnDetenerFab04Com_clicked()
{
    if (!Comodin->getPaused()){
            Comodin->setPaused(true);
        }
    else{
            Comodin->setPaused(false);
    }
}


void MainWindow::on_btnDetenerFab03_clicked()
{
    if (!C->getPaused()){
            C->setPaused(true);
    }
    else{
            C->setPaused(false);
    }
}


void MainWindow::on_btnDetenerFab02_clicked()
{
    if (!A->getPaused()){
            A->setPaused(true);

    }
    else{
            A->setPaused(false);
    }
}


void MainWindow::on_btnDetenerFab01_clicked()
{
    if (!B->getPaused()){
            B->setPaused(true);
    }
    else{
            B->setPaused(false);
    }
}



