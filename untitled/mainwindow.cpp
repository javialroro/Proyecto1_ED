
//#include "QThreads.h"
#include "mainwindow.h"
#include "procedimientos.h"
#include "./ui_mainwindow.h"
#include "vcolapedidos.h"
#include <QApplication>
#include <QString>

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

            if(!paused){
                while (true) {

                    semaphore.acquire();


                    while(!cola.isEmpty()){
                        sleep(4);
                        cout<<name<<endl;

                        Pedido * pedido = cola.deQueue();
                        //cout<<"hice dequeue"<<endl;

                        NodoArticuloP *tmp = pedido->listaPedido->pn;



                        bool flag= true;

                        while (tmp != NULL){
                            NodoArticulo * n =lista->buscar(tmp->articulo->codProd);
                            string categoria =n->articulo->categoria;

                            if (categoria  ==_categoria || categoria  ==_categoria2){
                                //cout<<"entre"<<endl;
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

Alistador::Alistador(listaArticulos *_listaArt, int _id, QTableWidget* _tableWidget, QObject* parent)
            : QThread(parent), table(_tableWidget), id(_id), listaArt(_listaArt)
        {
            // Conectar la señal finalizado de Alistador a la ranura alistadorLiberado de Bodega
            connect(this, SIGNAL(finalizado(Alistador*)), this, SLOT(alistadorLiberado(Alistador*)));
        }


        void Alistador::run()
        {
                while (true) {
                    //qDebug() << "entra a while run Alistador";
                    // Esperar a recibir la señal para procesar un pedido
                    mutex.lock();
                    if (!paused) {
                        NodoArticuloP* tmp = listaArtProcesados->pn;
                        while (tmp != NULL){
                            qDebug() << "entra a while lista de articulos";


                            qDebug() << "alistador test 1";
                            ArticuloPedido* articuloCopy = tmp->articulo;

                            qDebug() << "alistador test 2";
                            mutex.unlock();

                            qDebug() << "alistador test 3";

                            // Procesar el artículo
                            moverAlistador(articuloCopy);

                            qDebug() << "alistador test 4";
                        }

                        // Emitir señal para notificar que el alistador ha finalizado
                        emit finalizado(this);
                        qDebug() << "alistador test 5";

                    } else {
                        mutex.unlock();
                    }
                    QThread::msleep(5);
                }
        }

        void Alistador::procesarArticuloAlist(Queue<Alistador*> _colaAlistadores, ListaArticulosP *_lista)
        {
                // Asignar el artículo y la ubicación al alistador
                colaAlistadores = _colaAlistadores;
                listaArtProcesados = _lista;
                qDebug() << "alistdor : #" << id;
        }

        void Alistador::alistadorLiberado(Alistador* alistador) {
                mutex.lock();
                colaAlistadores.enQueue(alistador);
                condicion.wait(&mutex);
                qDebug() << "Alistador descansando";
                mutex.unlock();
        }


        QString Alistador::to_String(){
                QString texto = "";
                texto.append("Alistador: #");
                texto.append(QString::number(id));
                return texto;
        }


        int Alistador::obtenerIndiceLetra(QString& letra)
        {
                qDebug()<<"Entra a obtenerIndice por letra";
                QString letrasAlfabeto = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
                qDebug()<<"Obtiene indice por letra: " << letrasAlfabeto.indexOf(letra);
                return letrasAlfabeto.indexOf(letra);
        }

        QString Alistador::obtenerUbicacion(ArticuloPedido* art)
        {
                NodoArticulo* tmp = listaArt->pn;
                while (tmp != nullptr){
                    if(tmp->articulo->codigo == art->codProd){
                        return QString::fromStdString(tmp->articulo->ubicacionBodega);
                    }
                }
                qDebug() << "obtenerUbicacion no hizo nada";
                return "";
        }


        void Alistador::moverAlistador(ArticuloPedido* articulo)
        {
                QString ubicacion = obtenerUbicacion(articulo);
                qDebug()<<"entra a moverAlistador";
                QString letra = QString(ubicacion.at(0));
                qDebug()<<"Obtiene letra: " << letra;
                QString strNumero = ubicacion.mid(1);
                qDebug()<<"Obtiene numero: " << strNumero;
                int numero = strNumero.toInt();

                // Obtener índices
                int fila = numero - 1;
                int columna = obtenerIndiceLetra(letra);
                qDebug()<<"Pasa obtenerIndiceLetra";
                int distanciaFilas = fila;
                int distanciaColumnas = columna;
                qDebug()<<"Pasa aignaciones de distancia";
                // Calcular el tiempo necesario para moverse hasta la ubicación del artículo
                int tiempoIda = distanciaFilas + distanciaColumnas;
                qDebug()<<"El alistador durará en segundos: " << tiempoIda;

                // Simular el tiempo de movimiento
                QThread::sleep(tiempoIda);
                qDebug()<<"Acaba tiempo de espera";

                QTableWidgetItem* item = table->item(fila, columna);
                qDebug()<<"Obtiene el item de " << fila << "," << columna;

                if (item && !item->text().isEmpty()) {
                    QString texto = item->text();
                    QStringList parts = texto.split("\n");
                    if (parts.size() == 2) {
                        qDebug() << "celda NO vacía";
                        CeldaArticulo celda;
                        celda.codigo = parts[0];
                        celda.cantidad = parts[1].toInt();
                        // Incrementar la cantidad del artículo
                        celda.cantidad += articulo->cantidad;

                        // Actualizar el texto del item con la cantidad actualizada
                        item->setText(celda.toString());
                        qDebug() << "----------------";
                        qDebug() << celda.toString();
                        qDebug() << "----------------";
                    } else {
                        qDebug() << "celda vacía";
                        // La celda está vacía, ingresar un nuevo artículo con cantidad 1
                        CeldaArticulo celda;
                        celda.codigo = QString::fromStdString(articulo->codProd);
                        celda.cantidad = articulo->cantidad;

                        // Actualizar el texto del item con el nuevo artículo
                        item->setText(celda.toString());
                        qDebug() << "----------------";
                        qDebug() << celda.toString();
                        qDebug() << "----------------";
                    }
                }

                // Simular el tiempo de regreso a la posición inicial
                QThread::sleep(tiempoIda);
        }





        //-------------------------------------------------------------------------

Bodega::Bodega(listaArticulos *_listaArt, Queue<Pedido*>& _colaAlisto, Queue<Pedido*>& _colaAlistados, Queue<Alistador *>& _colaAlistadores, QObject* parent)
    : listaArt(_listaArt),colaAlisto(_colaAlisto), colaAlistados(_colaAlistados), colaAlistadores(_colaAlistadores), QThread(parent)
        {
            // Registrar el tipo QString
            qRegisterMetaType<QString*>("QString*");

            table = new QTableWidget();
            table->setRowCount(10);
            table->setColumnCount(26);

            // Configurar encabezados de filas (del 1 al 10)
            for (int row = 0; row < table->rowCount(); row++)
            {
                QTableWidgetItem* headerItem = new QTableWidgetItem(QString::number(row + 1));
                table->setVerticalHeaderItem(row, headerItem);
            }

            // Configurar encabezados de columnas (de la A a la Z)
            for (int col = 0; col < table->columnCount(); col++)
            {
                QTableWidgetItem* headerItem = new QTableWidgetItem(QChar('A' + col));
                table->setHorizontalHeaderItem(col, headerItem);
            }

            // Crear los 6 alistadores y agregarlos a la cola
            //------------
            Alistador* alistador1 = new Alistador(listaArt, 1, table);
            colaAlistadores.enQueue(alistador1);

            // Conectar la señal procesarArticuloBodega de Bodega a la ranura procesarArticuloAlist de Alistador
            connect(this, SIGNAL(procesarPedidoBodega1(Queue<Alistador*> ,ListaArticulosP *)),
                    alistador1, SLOT(procesarArticuloAlist(Queue<Alistador*> ,ListaArticulosP *)));

            alistador1->start();

            //------------
            Alistador* alistador2 = new Alistador(listaArt, 2, table);
            colaAlistadores.enQueue(alistador2);

            // Conectar la señal procesarArticuloBodega de Bodega a la ranura procesarArticuloAlist de Alistador
            connect(this, SIGNAL(procesarPedidoBodega2(Queue<Alistador*> ,ListaArticulosP *)),
                    alistador2, SLOT(procesarArticuloAlist(Queue<Alistador*> ,ListaArticulosP *)));

            alistador2->start();

            //------------
            Alistador* alistador3 = new Alistador(listaArt, 3, table);
            colaAlistadores.enQueue(alistador3);

            // Conectar la señal procesarArticuloBodega de Bodega a la ranura procesarArticuloAlist de Alistador
            connect(this, SIGNAL(procesarPedidoBodega3(Queue<Alistador*> ,ListaArticulosP *)),
                    alistador3, SLOT(procesarArticuloAlist(Queue<Alistador*> ,ListaArticulosP *)));

            alistador3->start();

            //------------
            Alistador* alistador4 = new Alistador(listaArt, 4, table);
            colaAlistadores.enQueue(alistador4);

            // Conectar la señal procesarArticuloBodega de Bodega a la ranura procesarArticuloAlist de Alistador
            connect(this, SIGNAL(procesarPedidoBodega4(Queue<Alistador*> ,ListaArticulosP *)),
                    alistador4, SLOT(procesarArticuloAlist(Queue<Alistador*> ,ListaArticulosP *)));

            alistador4->start();

            //------------
            Alistador* alistador5 = new Alistador(listaArt, 5, table);
            colaAlistadores.enQueue(alistador5);

            // Conectar la señal procesarArticuloBodega de Bodega a la ranura procesarArticuloAlist de Alistador
            connect(this, SIGNAL(procesarPedidoBodega5(Queue<Alistador*> ,ListaArticulosP *)),
                    alistador5, SLOT(procesarArticuloAlist(Queue<Alistador*> ,ListaArticulosP *)));

            alistador5->start();

            //------------
            Alistador* alistador6 = new Alistador(listaArt, 6, table);
            colaAlistadores.enQueue(alistador6);

            // Conectar la señal procesarArticuloBodega de Bodega a la ranura procesarArticuloAlist de Alistador
            connect(this, SIGNAL(procesarPedidoBodega6(Queue<Alistador*> ,ListaArticulosP *)),
                    alistador6, SLOT(procesarArticuloAlist(Queue<Alistador*> ,ListaArticulosP *)));

            alistador6->start();

        }


    /*void Bodega::agregarPedidoAlistado(Pedido* pedido)
    {
        mutex.lock();
        colaAlistados.enQueue(pedido);
        qDebug() << "se encola en colaAlistados";
        mutex.unlock();
    }*/

    QTableWidget* Bodega::getBodegaTable()
    {
        return table;
    }



    void Bodega::liberarAlistador(Alistador* alistador)
    {
        mutex.lock();
        qDebug() << "Se ha desocupado un alistador";
        colaAlistadores.enQueue(alistador);
        mutex.unlock();
    }

    //------------------------------------------------
    void Bodega::run()
    {
        qDebug() << "inicia run bodega";
        while (true) {
            if (!colaAlisto.isEmpty()){
                if(!colaAlistadores.isEmpty()){
                    qDebug() << "alisto no está vacía";
                    // Esperar a que haya un pedido alistado en la bodega
                    Pedido* pedido = colaAlisto.deQueue();
                    qDebug() << "bodega test 1";

                    //Procesar el pedido alistado
                    procesarPedido(pedido);
                    qDebug() << "bodega test 2";

                    //encola en la siguiente cola

                    colaAlistados.enQueue(pedido);
                    qDebug() << "Se ha encolado en cola Alistados";
                }
            }
            qDebug() << "alisto está vacía";
            QThread::sleep(1);
        }
    }
    //------------------------------------------------


    /*void Bodega::actualizarInterfaz()
    {
        //int rowCount;
        //int columnCount;
        qDebug() << "entra actualizarInterfaz";
        mutex.lock();
        int rowCount = table->rowCount();
        int columnCount = table->columnCount();
        qDebug() << "saca cantidad de columnas y filas";

        for (int row = 0; row < rowCount; ++row) {
            for (int col = 0; col < columnCount; ++col) {
                qDebug() << "entra en ambos for";
                QTableWidgetItem* item = table->item(row, col);
                if (!item->text().isEmpty()) {
                        qDebug() << "entra al if";
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
    }*/

    //SLOT para FINALIZADO en alistador
    void Bodega::alistadorLiberado(Alistador* alistador)
    {
        liberarAlistador(alistador);
        qDebug() << "alistador liberado y encolado en colaAlistadores";
    }

    //SLOT para recibir la tabla desde Mainwindow
    /*void Bodega::receiveTableWidget(QTableWidget* tableWidget)
    {
        qDebug() << "se le asigna QTable a bodega";
        table = tableWidget;
    }*/


    QString Bodega::obtenerUbicacion(ArticuloPedido* art)
    {
        NodoArticulo* tmp = listaArt->pn;
        while (tmp != nullptr){
            if(tmp->articulo->codigo == art->codProd){
                return QString::fromStdString(tmp->articulo->ubicacionBodega);
            }
        }
        qDebug() << "obtenerUbicacion no hizo nada";
        return "";
    }


    void Bodega::procesarPedido(Pedido* pedido)
    {
        qDebug() << "Entra procesarPedido";
        ListaArticulosP* listaArticulos = pedido->listaPedido;
        qDebug()<< "cantidad en alistadores" << colaAlistadores.getCantidadEnCola();
        Alistador* alistador = colaAlistadores.deQueue();
        alistador->mutex.lock();
        alistador->condicion.wakeAll(); // Despertar el hilo
        alistador->mutex.unlock();
        // Emitir la señal para procesar el artículo en un alistador
        int iD = alistador->id;
        qDebug() << "Aistador " << iD;
        if (iD == 1){
            emit procesarPedidoBodega1(colaAlistadores ,listaArticulos);
        } else if (iD == 2){
            emit procesarPedidoBodega2(colaAlistadores ,listaArticulos);
        } else if (iD == 3){
            emit procesarPedidoBodega3(colaAlistadores ,listaArticulos);
        } else if (iD == 4){
            emit procesarPedidoBodega4(colaAlistadores ,listaArticulos);
        } else if (iD == 5){
            emit procesarPedidoBodega5(colaAlistadores ,listaArticulos);
        } else if (iD == 6){
            emit procesarPedidoBodega6(colaAlistadores ,listaArticulos);
        }

        qDebug() << "Se proceso el peidido";

        // Enviar el pedido a la cola de alistados
        //agregarPedidoAlistado(pedido);
        //qDebug() << "Entra agregarPedidoAlistado";

        // Esperar a que todos los alistadores finalicen
        //colaAlistados.enQueue(pedido);
        //qDebug()<< "Se ha encolado en Alistados";

        //while (!colaAlistadores.isEmpty()) {
            //QThread::msleep(500);
            //qDebug() << "whileCola test 1";
        //}
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


MainWindow::MainWindow(PriorityQueue* _colaPedidos, Queue<Pedido *> & _colaAlisto, Queue<Pedido *> & _colaAlistados,  Queue<Pedido *> & _colaA,  Queue<Pedido *> & _colaB,  Queue<Pedido *> & _colaC,  Queue<Pedido *> & _colaComodin, Queue<Alistador *> & _colaAlistadores,
                           listaArticulos * la, listaClientes *lc, Alistados * a, RevisorArchivos *& r, Balanceador * bl, Fabrica * f1,
                           Fabrica * f2,Fabrica * f3,Fabrica * f4, Facturadora * fc,  Bodega * b)
    : QMainWindow(),
        colaPedidos(_colaPedidos),colaAlisto(_colaAlisto),colaAlistados(_colaAlistados),colaA (_colaA),colaB (_colaB),colaC (_colaC),colaComodin (_colaComodin), colaAlistadores(_colaAlistadores),
        listaArt(la),lista(lc),alistad(a),revisor(r),balanceador(bl),A(f1),B(f2),C(f3),Comodin(f4),facturadora(fc),bodega(b),

    ui(new Ui::MainWindow)

{
    connect(A, &Fabrica::actualizarLabel, this, &MainWindow::actualizarTextoLabel);
    connect(B, &Fabrica::actualizarLabel, this, &MainWindow::actualizarTextoLabel);
    connect(C, &Fabrica::actualizarLabel, this, &MainWindow::actualizarTextoLabel);
    connect(Comodin, &Fabrica::actualizarLabel, this, &MainWindow::actualizarTextoLabel);
    ui->setupUi(this);

    CargarArticulos(listaArt);
    cargarClientes(lista);

    revisor->start();
    balanceador->start();

    bodega->start();
    // Conectar la señal con la ranura de Bodega
    //connect(this, SIGNAL(tableWidgetSignal(QTableWidget*)), bodega, SLOT(receiveTableWidget(QTableWidget*)), Qt::QueuedConnection);

    //emit tableWidgetSignal(ui->tblBodega);


    A->start();
    B->start();
    C->start();
    Comodin->start();

    qDebug()<<"Hola";


    timer = new QTimer(this);
    timer->setInterval(5000);
    // Conectar la señal timeout del temporizador a la ranura actualizarATable()
    connect(timer, SIGNAL(timeout()), this, SLOT(actualizarATable()));
    // Iniciar el temporizador
    timer->start();
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

void MainWindow::actualizarATable()
{
     QTableWidget* tableWidget = bodega->getBodegaTable();
     if (tableWidget != nullptr)
     {
        // Actualizar la tabla en MainWindow con los datos de la tabla en Bodega
        ui->tblBodega->setRowCount(tableWidget->rowCount());
        ui->tblBodega->setColumnCount(tableWidget->columnCount());
        // Copiar los datos de la tabla en Bodega a la tabla en MainWindow
        for (int row = 0; row < tableWidget->rowCount(); row++)
        {
            for (int col = 0; col < tableWidget->columnCount(); col++)
            {
                QTableWidgetItem* item = tableWidget->item(row, col);
                if (item != nullptr)
                {
                    QTableWidgetItem* newItem = new QTableWidgetItem(*item);
                    ui->tblBodega->setItem(row, col, newItem);
                }
            }
        }
        qDebug()<<"tabla actualizada";

     }
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
void MainWindow::actualizarTextoLabel(const QString& texto) {
    QLabel * lbl=getLabelFabricacion();
    lbl->setText(texto);
}



