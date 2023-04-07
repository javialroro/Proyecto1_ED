
#ifndef PROCEDIMIENTOS_H
#define PROCEDIMIENTOS_H
#include "structs.h"
#include <iostream>
#include <sstream>
#include <fstream>
#include <cstdio>
#include <filesystem>
using namespace std;

void cargarClientes(listaClientes *lista) {
    ifstream archivo("C:\\Users\\QUIROS CALVO\\Trabajos_TEC_2023\\ED_\\I Proyecto\\untitled\\Clientes\\clientes.txt"); // crea objeto ifstream y lo abre
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
                archivo.close();
                cout<< "Archivo erroneo" << endl;
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
    ifstream archivo("C:\\Users\\QUIROS CALVO\\Trabajos_TEC_2023\\ED_\\I Proyecto\\untitled\\Articulos\\articulos.txt"); // crea objeto ifstream y lo abre
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
                archivo.close();
                cout<< "Archivo erroneo" << endl;
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





#endif // PROCEDIMIENTOS_H
