#include <QTextEdit>
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

void vColaPedidos::showEvent(QShowEvent *event)
{
    // Llamar al método base
    vColaPedidos::showEvent(event);

    // Establecer el texto en el QTextEdit
    ui->txEditColaPedidos->setPlainText("¡Hola, mundo!");
    ui->txEditColaPedidos->repaint();
}

void vColaPedidos::on_txEditColaPedidos_textChanged()
{

}


void vColaPedidos::on_lblCantEnColaNum_linkActivated(const QString &link)
{

}

