
#ifndef STRUCTS_H
#define STRUCTS_H
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <chrono>
#include <ctime>


using namespace std;

struct Cliente;
struct NodoCliente;
struct listaClientes;
struct Pedido;
struct NodoPedido;
struct listaPedidos;
struct Articulo;
struct NodoArticulo;
struct listaArticulos;


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
    bool search(string a){
        NodoCliente *tmp = pn;

        while (tmp != NULL){
            if(tmp->cliente->codigo == a){
                //cout<<"existe"<<endl;
                return true;
            }
            //cout<<tmp->cliente->codigo; // metodo de imprimir un cliente
            tmp = tmp->siguiente;
        }
        return false;
    }

    int bPrioridad(string a){
        NodoCliente *tmp = pn;

        while (tmp != NULL){
            if(tmp->cliente->codigo == a){
                //cout<<"existe"<<endl;
                return tmp->cliente->prioridad;
            }
            //cout<<tmp->cliente->codigo; // metodo de imprimir un cliente
            tmp = tmp->siguiente;
        }
        return NULL;
    }



};

struct Articulo{
    string codigo;
    int cantidadAlmacen;
    int segundosF;
    string categoria;
    string ubicacionBodega;

    Articulo(string _codigo, int _cantidad,int _segundos, string _ubicacion){
        codigo = _codigo;
        cantidadAlmacen = _cantidad;
        segundosF = _segundos;
        ubicacionBodega = _ubicacion;
    }

    Articulo(){
        codigo = "";
        cantidadAlmacen = 0;
        segundosF = 0;
        categoria = "";
        ubicacionBodega = "";
    }

    void imprimir (){

        cout << "Codigo #" << codigo << "\t";
        cout << "Cantidad en Almacen: " << cantidadAlmacen << "\t";
        cout << "Segundos en Produccion: " << segundosF << "\t";
        cout << "Categoria: " << categoria << "\t";
        cout << "Ubicacion: " << ubicacionBodega << "\t" << endl;
        cout <<"-----------------------------"<<endl<<endl;
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

struct listaArticulos{
    NodoArticulo * pn, *un;
    listaArticulos(){
        pn = un = NULL;
    }
    void insertarAlInicio (Articulo * articulo)
    {
        // si no hay elementos
        if (pn == NULL)
        {
            // ambos apuntan al nuevo en memoria
            pn = new NodoArticulo(articulo);
            un = pn;
            // ambos apuntan al nuevo
        }
        else{
            NodoArticulo *nuevo = new NodoArticulo(articulo);
            nuevo->siguiente = pn;
            pn ->anterior = nuevo;
            pn = nuevo;
        }
    }

    void imprimir(){
        NodoArticulo *tmp = pn;

        while (tmp != NULL){
            tmp->articulo->imprimir(); // metodo de imprimir un cliente
            tmp = tmp->siguiente;
        }
        cout << endl;
    }



    NodoArticulo * buscar(string art){
        NodoArticulo * tmp = pn;

        while (tmp != NULL){
            if (art==tmp->articulo->codigo){
                tmp->articulo->imprimir();
                return tmp;

            }

            tmp = tmp->siguiente;
        }
        cout<<"NO"<<endl;
        // hacer que vaya a errores
        return NULL;
    }

    bool search(string a){
        NodoArticulo *tmp = pn;

        while (tmp != NULL){
            if(tmp->articulo->codigo == a){
                tmp->articulo->imprimir();
                return true;
            }
             // metodo de imprimir un cliente
            tmp = tmp->siguiente;
        }
        cout<<"NO EXISTE";
        return false;
    }

};

struct ArticuloPedido{
    string codProd;
    int cantidad;

    ArticuloPedido(string cod, int cant){
        codProd = cod;
        cantidad = cant;
    }

    ArticuloPedido(){
        codProd = "";
        cantidad = 0;
    }

    void imprimir(){
        cout<<"Codigo Articulo: "<<codProd;
        cout<<" Cantidad: "<<cantidad<<endl;
    }
};

struct NodoArticuloP{
    ArticuloPedido * articulo;
    NodoArticuloP * siguiente;

    NodoArticuloP(ArticuloPedido * _articulo){
        articulo = _articulo;
        siguiente=NULL;
    }
    bool haySuficiente(listaArticulos * lista){
        NodoArticulo * b = lista->buscar(articulo->codProd);

        if(articulo->cantidad <= b->articulo-> cantidadAlmacen){
            return true;
        }

        return false;
    }
};

struct ListaArticulosP{
    NodoArticuloP * pn, *un;
    ListaArticulosP(){
        pn = un = NULL;
    }
    void imprimir(){
        NodoArticuloP *tmp = pn;

        while (tmp != NULL){
            tmp->articulo->imprimir(); // metodo de imprimir un cliente
            tmp = tmp->siguiente;
        }
        cout << endl;
    }

    void insertarAlInicio (ArticuloPedido * articulo)
    {
        // si no hay elementos
        if (pn == NULL)
        {
            // ambos apuntan al nuevo en memoria
            pn = new NodoArticuloP(articulo);
            un = pn;
            // ambos apuntan al nuevo
        }
        else{
            NodoArticuloP *nuevo = new NodoArticuloP(articulo);
            nuevo->siguiente = pn;
            pn = nuevo;
        }
    }



};



struct Pedido{
    int numPedido;
    string codCliente;
    ListaArticulosP *listaPedido;
    string infoFactura[10];

    Pedido(){
        numPedido = 0;
        codCliente = "";
        listaPedido = new ListaArticulosP();

    }

    Pedido(int num, int cod, int cant){
        numPedido = num;
        codCliente = cod;
        listaPedido = new ListaArticulosP();
    }
    void imprimir(){
        cout<<"Numero de pedido: "<<numPedido<<endl;
        cout<<" Codigo de cliente: "<<codCliente<<endl;
        cout<<"---------------------------";
        cout<<endl;
        listaPedido->imprimir();
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

struct listaPedidos{
    NodoPedido *pn,*un;
    listaPedidos(){
        pn = un = NULL;
    }
    void imprimir(){
        NodoPedido *tmp = pn;

        while (tmp != NULL){
            tmp->pedido->imprimir(); // metodo de imprimir un cliente
            tmp = tmp->siguiente;
        }
        cout << endl;
    }
};

struct Archivo{
    fstream arch;
    string path;
    string errores;
    Archivo(fstream & a, string p, string e){
        arch = std::move(a);
        path = p;
        errores = e;
    }
};


struct Fabrica{

    string tipo;
    string tipoC;
    listaArticulos *lista;


    Fabrica(string t, listaArticulos *l){
        tipo = t;
        lista = l;
    }

    Fabrica(string t1, string t2, listaArticulos *l){
        tipo = t1;
        tipoC = t2;
        lista = l;
    }

    void fabricar(Pedido * f){

    }
};







#endif // STRUCTS_H
