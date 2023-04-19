
#ifndef QTHREADS_H
#define QTHREADS_H
#include <QtCore>
#include <QThread>
#include <QDir>
#include <QDebug>
#include "procedimientos.h"
#include "priorityqueue.h"
#include "structs.h"


// Variables globales
extern Queue<Pedido>*qPedidos;
extern QMutex g_mutex;

class RevisorArchivos : public QThread {
public:
    void run() override {
        while (true) {
            //QString path = "C:\\Users\\javia\\OneDrive - Estudiantes ITCR\\TEC\\TEC 3 Semestre\\Estructuras de Datos\\Proyectos\\Proyecto1_ED\\untitled\\Pedidos";
            QString path = "C:\\Users\\QUIROS CALVO\\Trabajos_TEC_2023\\ED_\\I Proyecto\\untitled\\Pedidos";
            QDir directorio(path);
            QStringList archivos = directorio.entryList(QStringList() << "*.txt", QDir::Files);
            if (archivos.size() > 0) {
                qDebug() << "Archivos encontrados:";
                for (const auto& archivo : archivos) {
                    string cPath= path.toStdString()+"\\";
                    string cArchivo = archivo.toStdString();
                    string todo= cPath+cArchivo;
                    //QString todoS = QString::fromStdString(todo);
                    //string errores = "C:\\Users\\javia\\OneDrive - Estudiantes ITCR\\TEC\\TEC 3 Semestre\\Estructuras de Datos\\Proyectos\\Proyecto1_ED\\untitled\\Errores\\"+cArchivo;
                    string errores = "C:\\Users\\QUIROS CALVO\\Trabajos_TEC_2023\\ED_\\I Proyecto\\untitled\\Errores\\"+cArchivo;
                    fstream arch(todo, std::ios::in | std::ios::app);
                    Archivo *a =  new Archivo(arch,todo,errores);
                    cargarPedido(a, qPedidos);
                    string ruta_archivo = todo;
                    //string ruta_pedidosP = "C:\\Users\\javia\\OneDrive - Estudiantes ITCR\\TEC\\TEC 3 Semestre\\Estructuras de Datos\\Proyectos\\Proyecto1_ED\\untitled\\PedidosProcesados\\"+cArchivo;
                    string ruta_pedidosP = "C:\\Users\\QUIROS CALVO\\Trabajos_TEC_2023\\ED_\\I Proyecto\\untitled\\PedidosProcesados\\"+cArchivo;
                    rename(ruta_archivo.c_str(),ruta_pedidosP.c_str());
                }
            }
            else {
                qDebug() << "No se encontraron archivos";
            }

            QThread::msleep(1000); // espera 1 segundo antes de revisar de nuevo
        }
    }
};

class Balanceador : public QThread {
public:
    Balanceador(Queue<Pedido>& colaPedidos, Queue<Pedido>& colaAlistos,Queue<Fabricacion> & A,
                Queue<Fabricacion> & B,Queue<Fabricacion> & C, Queue<Fabricacion> & D, QObject* parent = nullptr)
        : QThread(parent), m_queue(colaPedidos) , a_queue(colaAlistos), f1(A), f2(B),f3(C),f4(D)
    {
    }
    
    void run() override {
        while (true) {
            // Realizar operaciones sobre m_queue
            
            
            // Esperar un tiempo antes de continuar
            sleep(1);
        }
    }
    
private:
    Queue<Pedido>& m_queue;
    Queue<Pedido>& a_queue;
    Queue<Fabricacion> & f1;
    Queue<Fabricacion> & f2;
    Queue<Fabricacion> & f3;
    Queue<Fabricacion> & f4;


};
    



#endif // QTHREADS_H
