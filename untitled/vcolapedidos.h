#ifndef VCOLAPEDIDOS_H
#define VCOLAPEDIDOS_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {class vColaPedidos;}
QT_END_NAMESPACE
class vColaPedidos : public QMainWindow
{
    Q_OBJECT
protected:
    void showEvent(QShowEvent *event) override;

public:
    explicit vColaPedidos(QWidget *parent = nullptr);
    ~vColaPedidos();

private slots:
    void on_txEditColaPedidos_textChanged();

    void on_lblCantEnColaNum_linkActivated(const QString &link);

private:
    Ui::vColaPedidos *ui;
};

#endif // VCOLAPEDIDOS_H
