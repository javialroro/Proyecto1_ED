
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
    int codigo;
    string nombre;
    int prioridad;

    Cliente(int _codigo, string _nombre, int _prioridad){
        codigo = _codigo;
        nombre = _nombre;
        prioridad = _prioridad;
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
