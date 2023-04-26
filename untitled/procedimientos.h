
#ifndef PROCEDIMIENTOS_H
#define PROCEDIMIENTOS_H

#include <cstdio>
#include <filesystem>
#include "priorityqueue.h"
#include "structs.h"
#include "Queue.h"

// Lo cambié por que el programa petó y no me quedó de otra
// Todo está en "procedimientos.cpp"

void cargarClientes(listaClientes *lista);

void CargarArticulos(listaArticulos *lista );

void cargarPedido(Archivo *archivo, PriorityQueue * qPedidos, listaClientes * lista, listaArticulos * listaArt);

string retornarHora();

void modifyField(std::string& line, std::string code, int fieldIndex, int newValue);

void cambiar(string code, int fieldIndex, int newValue);


#endif // PROCEDIMIENTOS_H
