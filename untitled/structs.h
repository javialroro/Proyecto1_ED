
#ifndef STRUCTS_H
#define STRUCTS_H
#include <iostream>
#include <string>
using namespace std;

struct Cliente;
struct NodoCliente;
struct ListaClientes;
struct Pedido;
struct NodoPedido;
struct ListaPedidos;
struct Articulo;
struct NodoArticulo;
struct ListaArticulos;

struct Cliente{
    string codigo;
    string nombre;
    int prioridad;

    Cliente(int _codigo, string _nombre, int _prioridad){
        codigo = _codigo;
        nombre = _nombre;
        prioridad = _prioridad;
    }

    Cliente(){
        codigo = "";
        nombre = "";
        prioridad = 0;

    }
    void imprimir (){

        cout << "Cliente #" << codigo << "\t";
        cout << "Nombre: " << nombre << "\t";
        cout << "Prioridad: " << prioridad << "\t" << endl;
        cout <<"-----------------------------"<<endl<<endl;
    }
};

struct NodoCliente{
    Cliente * cliente;
    NodoCliente * siguiente;

    NodoCliente(Cliente * _cliente){
        cliente = _cliente;
        siguiente = NULL;
    }

};

struct listaClientes{
    NodoCliente * pn , *un;

    listaClientes(){
        pn = un = NULL;
    }

    void insertarAlInicio (Cliente * cliente)
    {
        // si no hay elementos
        if (pn == NULL)
        {
            // ambos apuntan al nuevo en memoria
            pn = new NodoCliente(cliente);
            un = pn;
            // ambos apuntan al nuevo
        }
        else{
            NodoCliente *nuevo = new NodoCliente(cliente);
            nuevo->siguiente = pn;
            pn = nuevo;
        }
    }

    void imprimir(){
        NodoCliente *tmp = pn;

        while (tmp != NULL){
            tmp->cliente->imprimir(); // metodo de imprimir un cliente
            tmp = tmp->siguiente;
        }
        cout << endl;
    }

};

struct Articulo{
    string codigo;
    int cantidadAlmacen;
    int segundosF;
    string ubicacionBodega;

    Articulo(string _codigo, int _cantidad,int _segundos, string _ubicacion){
        codigo = _codigo;
        cantidadAlmacen = _cantidad;
        segundosF = _segundos;
        ubicacionBodega = _ubicacion;
    }
};

struct NodoArticulo{
    Articulo * articulo;
    NodoArticulo * siguiente;
    NodoArticulo * anterior;

    NodoArticulo(Articulo * _articulo){
        articulo = _articulo;
        siguiente=anterior=NULL;
    }
};

struct ListaArticulos{
    NodoArticulo * pn, *un;
    ListaArticulos(){
        pn = un = NULL;
    }
};

struct ArticuloPedido{
    string codProd;
    int cantidad;

    ArticuloPedido(string cod, int cant){
        codProd = cod;
        cantidad = cant;
    }
};

struct NodoArticuloP{
    ArticuloPedido * articulo;
    NodoArticuloP * siguiente;

    NodoArticuloP(ArticuloPedido * _articulo){
        articulo = _articulo;
        siguiente=NULL;
    }
};

struct ListaArticulosP{
    NodoArticuloP * pn, *un;
    ListaArticulosP(){
        pn = un = NULL;
    }
};



struct Pedido{
    int numPedido;
    int codCliente;
    int cantidadArt;
    ListaArticulosP *listaPedido;

    Pedido(int num, int cod, int cant){
        numPedido = num;
        codCliente = cod;
        cantidadArt = cant;
        listaPedido = new ListaArticulosP;
    }
};

struct NodoPedido{
    Pedido *pedido;
    NodoPedido * siguiente;


    NodoPedido(Pedido * _pedido){
        pedido = _pedido;
        siguiente= NULL;
    }
};

struct ListaPedidos{
    NodoPedido *pn,*un;
    ListaPedidos(){
        pn = un = NULL;
    }
};










#endif // STRUCTS_H
