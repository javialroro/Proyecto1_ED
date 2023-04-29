
#ifndef STRUCTS_H
#define STRUCTS_H
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <chrono>
#include <ctime>
#include <QString>


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
    int cantidadC;
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
        cantidadC = 0;
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
                //tmp->articulo->imprimir();
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
                //tmp->articulo->imprimir();
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
    bool aFabrica;
    bool fabricado;
    string fabrica;

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

    QString toString(){
        QString text = "";
        text.append("Cod: ");
        text.append(codProd);
        text.append("\n");
        text.append(QString::number(cantidad));
        return text;
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

        if(articulo->cantidad <= b->articulo-> cantidadC){
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

    int size(){
        int count = 0;
        NodoArticuloP *tmp = pn;

        while (tmp != NULL){
            count++;
            tmp = tmp->siguiente;
        }

        return count;
    }

};

struct NodoFactura{
    string txt;
    NodoFactura * siguiente;

    NodoFactura (string t){
        txt = t;
        siguiente=NULL;
    }

};


struct InfoFacturas{
    NodoFactura * pn, *un;

    void insertarAlFinal(string s) {
        // Create a new node with the given ArticuloPedido object
        NodoFactura *nuevo = new NodoFactura(s);
        nuevo->siguiente = NULL;

        // If the list is empty, set the new node as the first and last node
        if (pn == NULL) {
            pn = nuevo;
            un = nuevo;
        }
        else {
            // Traverse the list until we reach the last node
            NodoFactura *tmp = pn;
            while (tmp->siguiente != NULL) {
                tmp = tmp->siguiente;
            }

            // Set the next pointer of the current last node to the new node
            tmp->siguiente = nuevo;
            // Update the "un" pointer to point to the new last node
            un = nuevo;
        }
    }
};

struct Pedido{
    int numPedido;
    string codCliente;
    ListaArticulosP *listaPedido;
    InfoFacturas * factura;

    Pedido(){
        numPedido = 0;
        codCliente = "";
        listaPedido = new ListaArticulosP();
        factura = new InfoFacturas();

    }

    Pedido(int num, string cod, int cant){
        numPedido = num;
        codCliente = cod;
        listaPedido = new ListaArticulosP();
        factura = new InfoFacturas();
    }
    void imprimir(){
        cout<<"----------PEDIDO:----------"<<numPedido<<endl;
        cout<<"Numero de pedido: "<<numPedido<<endl;
        cout<<" Codigo de cliente: "<<codCliente<<endl;
        cout<<"---------------------------";
        cout<<endl;
        listaPedido->imprimir();
        cout<<"---------------------------";
        cout<<endl;
    }
    QString to_String(){
        string resultado =  "";
        resultado.append("Pedido: #");
        resultado.append(to_string(numPedido));
        resultado.append("  Código Cliente: ");
        resultado.append(codCliente);
        resultado.append("\n");
        QString r= QString::fromStdString(resultado);
        return r;
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

struct CeldaArticulo {
    QString codigo = "";
    int cantidad = 0;

    bool isEmpty(){
        if (codigo == "")
            return true;
        return false;
    }

    QString toString(){
        QString text = "";
        text.append(codigo);
        text.append("\n");
        text.append(QString::number(cantidad));
        return text;
    }
};

/*
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
};*/







#endif // STRUCTS_H
