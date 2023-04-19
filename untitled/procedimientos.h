
#ifndef PROCEDIMIENTOS_H
#define PROCEDIMIENTOS_H
#include "structs.h"
#include "Queue.h"
#include <cstdio>
#include <filesystem>
using namespace std;

void cargarClientes(listaClientes *lista) {
    //archivo Javier "C:\\Users\\javia\\OneDrive - Estudiantes ITCR\\TEC\\TEC 3 Semestre\\Estructuras de Datos\\Proyectos\\Proyecto1_ED\\untitled\\Clientes\\clientes.txt"

    //fstream archivo("C:\\Users\\javia\\OneDrive - Estudiantes ITCR\\TEC\\TEC 3 Semestre\\Estructuras de Datos\\Proyectos\\Proyecto1_ED\\untitled\\Clientes\\clientes.txt", std::ios::in | std::ios::app);
    fstream archivo("C:\\Users\\QUIROS CALVO\\Trabajos_TEC_2023\\ED_\\I Proyecto\\untitled\\Clientes\\clientes.txt", std::ios::in | std::ios::app); // crea objeto ifstream y lo abre
    string linea;
    if (archivo.is_open()) { // verifica si el archivo está abierto
        while (getline(archivo, linea)) { // lee cada línea del archivo
            Cliente *cliente = new Cliente;
            stringstream ss(linea);
            string campo;
            if (getline(ss, cliente->codigo, '\t') && getline(ss, cliente->nombre, '\t') && getline(ss, campo, '\t') && ss.eof()) { // valida la estructura del archivo
                getline(ss, cliente->codigo,'\t'); // asigna el primer campo al atributo "codigo"
                getline(ss, cliente->nombre, '\t'); // asigna el segundo campo al atributo "nombre"
                getline(ss, campo, '\t'); // lee el tercer campo como una cadena de caracteres
                cliente->prioridad = stoi(campo); // convierte la cadena de caracteres a un entero y lo asigna al atributo "prioridad"

                lista->insertarAlInicio(cliente); // annade el cliente a la lista

            }
            else{

                archivo << "Archivo erroneo, formato incorrecto"<<endl;
                archivo.close();
                cout<< "Archivo erroneo, formato incorrecto" << endl;
                //string ruta_archivo = "C:\\Users\\javia\\OneDrive - Estudiantes ITCR\\TEC\\TEC 3 Semestre\\Estructuras de Datos\\Proyectos\\Proyecto1_ED\\untitled\\Clientes\\clientes.txt";
                //string ruta_errores = "C:\\Users\\javia\\OneDrive - Estudiantes ITCR\\TEC\\TEC 3 Semestre\\Estructuras de Datos\\Proyectos\\Proyecto1_ED\\untitled\\Errores\\clientes.txt";
                string ruta_archivo = "C:\\Users\\QUIROS CALVO\\Trabajos_TEC_2023\\ED_\\I Proyecto\\untitled\\Clientes\\clientes.txt";
                string ruta_errores = "C:\\Users\\QUIROS CALVO\\Trabajos_TEC_2023\\ED_\\I Proyecto\\untitled\\Errores\\clientes.txt";
                rename(ruta_archivo.c_str(),ruta_errores.c_str());
                break;
            }
        }

        archivo.close(); // cierra el archivo
        lista->imprimir();

    } else {
        cout << "No se pudo abrir el archivo" << endl;
    }

}

void CargarArticulos(listaArticulos *lista ){
    fstream archivo("C:\\Users\\QUIROS CALVO\\Trabajos_TEC_2023\\ED_\\I Proyecto\\untitled\\Articulos\\articulos.txt", std::ios::in | std::ios::app); // crea objeto ifstream y lo abre
    //fstream archivo("C:\\Users\\javia\\OneDrive - Estudiantes ITCR\\TEC\\TEC 3 Semestre\\Estructuras de Datos\\Proyectos\\Proyecto1_ED\\untitled\\Articulos\\articulos.txt", std::ios::in | std::ios::app);
    string linea;
    if (archivo.is_open()) { // verifica si el archivo está abierto
        while (getline(archivo, linea)) { // lee cada línea del archivo
            Articulo *articulo = new Articulo;
            stringstream ss(linea);
            string cant;
            string seg;
            string campo;
            if (getline(ss, articulo->codigo, '\t') && getline(ss, cant, '\t') && getline(ss, seg, '\t')&& getline(ss, articulo->categoria, '\t')&& getline(ss, articulo->ubicacionBodega, '\t') && ss.eof()) {
                getline(ss, cant,'\t');
                articulo->cantidadAlmacen = stoi(cant);
                getline(ss, seg, '\t');
                articulo->segundosF =  stoi(seg);
                getline(ss, articulo->ubicacionBodega, '\t');
                lista->insertarAlInicio(articulo); // annade el cliente a la lista

            }
            else{

                //cout<< "Archivo erroneo, formato incorrecto" << endl;
                archivo << "Archivo erroneo, formato incorrecto" << endl;
                archivo.close();
                cout<< "Archivo erroneo, formato incorrecto" << endl;
                //archivo Javier "C:\\Users\\javia\\OneDrive - Estudiantes ITCR\\TEC\\TEC 3 Semestre\\Estructuras de Datos\\Proyectos\\Proyecto1_ED\\untitled\\Articulos\\articulos.txt"

                //string ruta_archivo = "C:\\Users\\javia\\OneDrive - Estudiantes ITCR\\TEC\\TEC 3 Semestre\\Estructuras de Datos\\Proyectos\\Proyecto1_ED\\untitled\\Articulos\\articulos.txt";
                //string ruta_errores = "C:\\Users\\javia\\OneDrive - Estudiantes ITCR\\TEC\\TEC 3 Semestre\\Estructuras de Datos\\Proyectos\\Proyecto1_ED\\untitled\\Errores\\articulos.txt";
                string ruta_archivo = "C:\\Users\\QUIROS CALVO\\Trabajos_TEC_2023\\ED_\\I Proyecto\\untitled\\Articulos\\articulos.txt";
                string ruta_errores = "C:\\Users\\QUIROS CALVO\\Trabajos_TEC_2023\\ED_\\I Proyecto\\untitled\\Errores\\articulos.txt";

                rename(ruta_archivo.c_str(),ruta_errores.c_str());
                break;
            }
        }

        archivo.close(); // cierra el archivo
        lista->imprimir();
    } else {
        cout << "No se pudo abrir el archivo" << endl;
    }
}


void cargarPedido(Archivo *archivo, Queue<Pedido>*qPedidos){
    string linea;
    int contador = 1;
    int cantArt = 0;
    Pedido *pedido= new Pedido();
    bool error= false;
    if (archivo->arch.is_open()) { // verifica si el archivo está abierto
        while (getline(archivo->arch, linea)) { // lee cada línea del archivo
            stringstream ss(linea);
            if (contador == 1) {
                string numP;
                if (getline(ss, numP, '\n')){
                    getline(ss, numP, '\n');
                    pedido->numPedido = stoi(numP);
                }
                else{
                    archivo->arch << "Archivo erroneo, formato incorrecto" << endl;
                    archivo->arch.close();
                    cout<< "Archivo erroneo, formato incorrecto" << endl;
                    rename(archivo->path.c_str(),archivo->errores.c_str());
                    error=true;
                    break;

                    //pasar el archivo a la carpeta de errores.
                }
            }
            else if (contador == 2) {
                string codC;
                if (getline(ss, codC, '\n')){
                    getline(ss, codC, '\n');
                    pedido->codCliente = stoi(codC);
                }
                else{
                    archivo->arch << "Archivo erroneo, formato incorrecto" << endl;
                    archivo->arch.close();
                    cout<< "Archivo erroneo, formato incorrecto" << endl;
                    rename(archivo->path.c_str(),archivo->errores.c_str());
                    error=true;
                    break;
                }

            }
            else {

                ArticuloPedido *articulo = new ArticuloPedido();

                string campo;
                if (getline(ss, articulo->codProd, '\t') && getline(ss, campo, '\t')){
                    getline(ss, articulo->codProd, '\t'); // lee el primer campo como una cadena de caracteres
                    getline(ss, campo, '\t'); // lee el segundo campo como una cadena de caracteres
                    articulo->cantidad= stoi(campo); // convierte la cadena de caracteres a un entero
                    pedido->listaPedido->insertarAlInicio(articulo);



                }
                else{
                    archivo->arch << "Archivo erroneo, formato incorrecto" << endl;
                    archivo->arch.close();
                    cout<< "Archivo erroneo, formato incorrecto" << endl;
                    rename(archivo->path.c_str(),archivo->errores.c_str());
                    error=true;
                    break;
                }
            }

            contador++;

        }
        if (!error){
            qPedidos->enQueue(*pedido);
            //count<<listaClientes->buscarCliente(pedido->codCliente)->prioridad<<end;
            pedido->imprimir();
        }
        archivo->arch.close(); // cierra el archivo
    } else {
        archivo->arch.close();
        cout << "No se pudo abrir el archivo" << endl;
    }
}






#endif // PROCEDIMIENTOS_H
