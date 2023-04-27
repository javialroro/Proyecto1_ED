
#ifndef PROCEDIMIENTOS_H
#define PROCEDIMIENTOS_H

#include "priorityqueue.h"
#include <cstdio>
#include <filesystem>
using namespace std;


void cargarClientes(listaClientes *lista) {
    //archivo Javier "C:\\Users\\javia\\OneDrive - Estudiantes ITCR\\TEC\\TEC 3 Semestre\\Estructuras de Datos\\Proyectos\\Proyecto1_ED\\untitled\\Clientes\\clientes.txt"

    fstream archivo("C:\\Users\\javia\\OneDrive - Estudiantes ITCR\\TEC\\TEC 3 Semestre\\Estructuras de Datos\\Proyectos\\Proyecto1_ED\\untitled\\Clientes\\clientes.txt", std::ios::in | std::ios::app);
    //fstream archivo("C:\\Users\\QUIROS CALVO\\Trabajos_TEC_2023\\ED_\\I Proyecto\\untitled\\Clientes\\clientes.txt", std::ios::in | std::ios::app); // crea objeto ifstream y lo abre
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
                string ruta_archivo = "C:\\Users\\javia\\OneDrive - Estudiantes ITCR\\TEC\\TEC 3 Semestre\\Estructuras de Datos\\Proyectos\\Proyecto1_ED\\untitled\\Clientes\\clientes.txt";
                string ruta_errores = "C:\\Users\\javia\\OneDrive - Estudiantes ITCR\\TEC\\TEC 3 Semestre\\Estructuras de Datos\\Proyectos\\Proyecto1_ED\\untitled\\Errores\\clientes.txt";
                //string ruta_archivo = "C:\\Users\\QUIROS CALVO\\Trabajos_TEC_2023\\ED_\\I Proyecto\\untitled\\Clientes\\clientes.txt";
                //string ruta_errores = "C:\\Users\\QUIROS CALVO\\Trabajos_TEC_2023\\ED_\\I Proyecto\\untitled\\Errores\\clientes.txt";
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
    //fstream archivo("C:\\Users\\QUIROS CALVO\\Trabajos_TEC_2023\\ED_\\I Proyecto\\untitled\\Articulos\\articulos.txt", std::ios::in | std::ios::app); // crea objeto ifstream y lo abre
    fstream archivo("C:\\Users\\javia\\OneDrive - Estudiantes ITCR\\TEC\\TEC 3 Semestre\\Estructuras de Datos\\Proyectos\\Proyecto1_ED\\untitled\\Articulos\\articulos.txt", std::ios::in | std::ios::app);
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
                articulo->cantidadC = stoi(cant);
                getline(ss, seg, '\t');
                articulo->segundosF =  stoi(seg);
                getline(ss, articulo->ubicacionBodega, '\t');
                lista->insertarAlInicio(articulo); // annade el cliente a la lista

            }
            else{

                //cout<< "Archivo erroneo, formato incorrecto" << endl;
                archivo << "Archivo erroneo, formato incorrecto" << endl;
                archivo.close();
                cout<< "Archivo de articulos erroneo , formato incorrecto" << endl;
                //archivo Javier "C:\\Users\\javia\\OneDrive - Estudiantes ITCR\\TEC\\TEC 3 Semestre\\Estructuras de Datos\\Proyectos\\Proyecto1_ED\\untitled\\Articulos\\articulos.txt"

                string ruta_archivo = "C:\\Users\\javia\\OneDrive - Estudiantes ITCR\\TEC\\TEC 3 Semestre\\Estructuras de Datos\\Proyectos\\Proyecto1_ED\\untitled\\Articulos\\articulos.txt";
                string ruta_errores = "C:\\Users\\javia\\OneDrive - Estudiantes ITCR\\TEC\\TEC 3 Semestre\\Estructuras de Datos\\Proyectos\\Proyecto1_ED\\untitled\\Errores\\articulos.txt";
                //string ruta_archivo = "C:\\Users\\QUIROS CALVO\\Trabajos_TEC_2023\\ED_\\I Proyecto\\untitled\\Articulos\\articulos.txt";
                //string ruta_errores = "C:\\Users\\QUIROS CALVO\\Trabajos_TEC_2023\\ED_\\I Proyecto\\untitled\\Errores\\articulos.txt";

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


void cargarPedido(Archivo *archivo, PriorityQueue * qPedidos, listaClientes * lista, listaArticulos * listaArt){

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


                }
            }
            else if (contador == 2) {

                if (getline(ss, pedido->codCliente, '\n')){
                    if(lista->search(pedido->codCliente)){
                        getline(ss, pedido->codCliente, '\n');


                    }

                    else{
                        archivo->arch << "Archivo erroneo, cliente no existente" << endl;
                        archivo->arch.close();
                        qDebug()<< "Archivo erroneo, cliente no existente";
                        rename(archivo->path.c_str(),archivo->errores.c_str());
                        error=true;
                        break;
                    }

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

                    if (listaArt->search(articulo->codProd)){
                        getline(ss, articulo->codProd, '\t');// lee el primer campo como una cadena de caracteres
                        getline(ss, campo, '\t'); // lee el segundo campo como una cadena de caracteres
                        articulo->cantidad= stoi(campo); // convierte la cadena de caracteres a un entero
                        pedido->listaPedido->insertarAlInicio(articulo);
                    }
                    else{
                        articulo->imprimir();
                        archivo->arch << "Archivo erroneo, articulo no existente" << endl;
                        archivo->arch.close();
                        cout<< "Archivo erroneo, articulo no existente" << endl;
                        rename(archivo->path.c_str(),archivo->errores.c_str());
                        error=true;
                        break;
                    }



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
            pedido->imprimir();
            qPedidos->enQueuePriority(lista->bPrioridad(pedido->codCliente),pedido);
            //count<<listaClientes->buscarCliente(pedido->codCliente)->prioridad<<end;
            archivo->arch.close();


        }

         // cierra el archivo
    }
    else {
        delete pedido;
        archivo->arch.close();
        qDebug() << "No se pudo abrir el archivo";
    }
}

string retornarHora(){
    auto now = chrono::system_clock::now();
    time_t now_c = chrono::system_clock::to_time_t(now);
    string hora= ctime(&now_c);
    return hora;
}

void modifyField(std::string& line, std::string code, int fieldIndex, int newValue) {
    // Busca el código en la línea
    size_t pos = line.find(code);
    if (pos != std::string::npos) {
        // Si se encontró el código, busca el índice del campo a modificar
        for (int i = 0; i < fieldIndex; i++) {
            pos = line.find("\t", pos + 1);
            if (pos == std::string::npos) {
                // No se encontró el campo
                //return "No se encontró el campo";
            }
        }
        // Modifica el campo
        int endPos = line.find("\t", pos + 1);
        if (endPos == std::string::npos) {
            endPos = line.size();
        }
        std::string field = line.substr(pos + 1, endPos - pos - 1);
        std::stringstream ss(field);
        int oldValue;
        ss >> oldValue;
        line.replace(pos + 1, endPos - pos - 1, std::to_string(newValue));
        std::cout << "Modified field " << fieldIndex << " from " << oldValue << " to " << newValue << std::endl;
        cout<<line<<endl;
        //return line;
    }
    //cout<<line<<endl;
    //return line;

}

void cambiar(string code, int fieldIndex, int newValue) {
    // Abrir el archivo en modo lectura y escritura
    fstream file("C:\\Users\\javia\\OneDrive - Estudiantes ITCR\\TEC\\TEC 3 Semestre\\Estructuras de Datos\\Proyectos\\Proyecto1_ED\\untitled\\Articulos\\articulos.txt", std::ios::in | std::ios::out);
    //fstream file("C:\\Users\\QUIROS CALVO\\Trabajos_TEC_2023\\ED_\\I Proyecto\\untitled\\Articulos\\articulos.txt", std::ios::in | std::ios::out);



    if (!file.is_open()) {
    cout << "Error al abrir el archivo" << std::endl;
    return;
    }

    string line;
    stringstream ss;
    bool lineFound = false;

    // Crear un archivo temporal para escribir las líneas modificadas
    fstream tempFile("temp.txt", std::ios::out);
    if (!tempFile.is_open()) {
    cout << "Error al crear el archivo temporal" << std::endl;
    return;
    }

    // Leer el archivo línea por línea
    while (getline(file, line)) {
    // Reemplazar la línea si se encuentra el código
        if (line.find(code) != string::npos) {
                modifyField(line, code, fieldIndex, newValue);
                lineFound = true;
        }
        tempFile << line << endl;

    }


    if (!lineFound) {
        cout << "No se encontro la línea con el codigo " << code << endl;
        file.close();
        tempFile.close();
        remove("temp.txt");
        return;
    }



    // Cerrar ambos archivos
    file.close();
    tempFile.close();

    // Reemplazar el archivo original con el archivo temporal
    remove("C:\\Users\\javia\\OneDrive - Estudiantes ITCR\\TEC\\TEC 3 Semestre\\Estructuras de Datos\\Proyectos\\Proyecto1_ED\\untitled\\Articulos\\articulos.txt");
    rename("temp.txt", "C:\\Users\\javia\\OneDrive - Estudiantes ITCR\\TEC\\TEC 3 Semestre\\Estructuras de Datos\\Proyectos\\Proyecto1_ED\\untitled\\Articulos\\articulos.txt");

    //remove("C:\\Users\\QUIROS CALVO\\Trabajos_TEC_2023\\ED_\\I Proyecto\\untitled\\Articulos\\articulos.txt");
    //rename("temp.txt", "C:\\Users\\QUIROS CALVO\\Trabajos_TEC_2023\\ED_\\I Proyecto\\untitled\\Articulos\\articulos.txt");

    if (tempFile.fail()) {
        cout << "Error al leer/escribir el archivo d" << endl;
        //return;
    }
    cout << "Archivo actualizado correctamente" << endl;
}



#endif // PROCEDIMIENTOS_H
