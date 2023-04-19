#ifndef VCOLAPEDIDOS_H
#define VCOLAPEDIDOS_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {class vColaPedidos;}
QT_END_NAMESPACE
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
