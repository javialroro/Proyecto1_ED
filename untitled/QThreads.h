
#ifndef QTHREADS_H
#define QTHREADS_H
#include <QtCore>
#include <iostream>
#include <fstream>
#include <QThread>
#include <QDir>
#include <QDebug>
#include "procedimientos.h"

using namespace std;

class RevisorArchivos : public QThread {
public:

    void run() override {
        while (true) {
            QString path = "C:\\Users\\javia\\OneDrive - Estudiantes ITCR\\TEC\\TEC 3 Semestre\\Estructuras de Datos\\Proyectos\\Proyecto1_ED\\untitled\\Pedidos";
            QDir directorio(path);
            QStringList archivos = directorio.entryList(QStringList() << "*.txt", QDir::Files);
            if (archivos.size() > 0) {
                qDebug() << "Archivos encontrados:";
                for (const auto& archivo : archivos) {
                    string cPath= path.toStdString()+"\\";
                    string cArchivo = archivo.toStdString();
                    string todo= cPath+cArchivo;
                    QString todoS = QString::fromStdString(todo);
                    ifstream arch(todo);
                    cargarPedido(arch);
                    string ruta_archivo = todo;
                    string ruta_errores = "C:\\Users\\javia\\OneDrive - Estudiantes ITCR\\TEC\\TEC 3 Semestre\\Estructuras de Datos\\Proyectos\\Proyecto1_ED\\untitled\\PedidosProcesados\\"+cArchivo;
                    rename(ruta_archivo.c_str(),ruta_errores.c_str());



                }
            }
            else {
                qDebug() << "No se encontraron archivos";
            }

            QThread::msleep(1000); // espera 1 segundo antes de revisar de nuevo
        }
    }
};
#endif // QTHREADS_H
