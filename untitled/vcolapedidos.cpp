#include "vcolapedidos.h"
#include "ui_vcolapedidos.h"

vColaPedidos::vColaPedidos(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::vColaPedidos)
{
    ui->setupUi(this);
}

vColaPedidos::~vColaPedidos()
{
    delete ui;
}
