
#include "mainwindow.h"
#include "./ui_mainwindow.h"
//#include "procedimientos.h"


//listaClientes *lista = new listaClientes();
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_btnColaPedidos_clicked()
{
    //cargarClientes(lista);
}

