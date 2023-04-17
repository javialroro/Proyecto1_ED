#ifndef VCOLAPEDIDOS_H
#define VCOLAPEDIDOS_H

#include <QMainWindow>

namespace Ui {
class vColaPedidos;
}

class vColaPedidos : public QMainWindow
{
    Q_OBJECT

public:
    explicit vColaPedidos(QWidget *parent = nullptr);
    ~vColaPedidos();

private:
    Ui::vColaPedidos *ui;
};

#endif // VCOLAPEDIDOS_H
