/********************************************************************************
** Form generated from reading UI file 'vcolapedidos.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VCOLAPEDIDOS_H
#define UI_VCOLAPEDIDOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_vColaPedidos
{
public:
    QWidget *centralwidget;
    QTextEdit *txEditMostrarCola;
    QFrame *frame;
    QLabel *lblCantidadEnCola;
    QLabel *lblCantidadDesencolados;
    QLabel *lblCantidadDesencoladosNum;
    QLabel *lblCantidadEnColaNum;
    QLabel *label_5;
    QPushButton *btnVolverAMenu;

    void setupUi(QMainWindow *vColaPedidos)
    {
        if (vColaPedidos->objectName().isEmpty())
            vColaPedidos->setObjectName("vColaPedidos");
        vColaPedidos->resize(800, 600);
        centralwidget = new QWidget(vColaPedidos);
        centralwidget->setObjectName("centralwidget");
        txEditMostrarCola = new QTextEdit(centralwidget);
        txEditMostrarCola->setObjectName("txEditMostrarCola");
        txEditMostrarCola->setEnabled(false);
        txEditMostrarCola->setGeometry(QRect(10, 10, 341, 581));
        txEditMostrarCola->setStyleSheet(QString::fromUtf8("border: 3px solid black;\n"
"border-color: rgb(0, 85, 127);"));
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(359, 9, 431, 171));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        lblCantidadEnCola = new QLabel(frame);
        lblCantidadEnCola->setObjectName("lblCantidadEnCola");
        lblCantidadEnCola->setGeometry(QRect(20, 30, 231, 16));
        lblCantidadEnCola->setStyleSheet(QString::fromUtf8("font: 700 16pt \"Times New Roman\";\n"
"color: Black;"));
        lblCantidadDesencolados = new QLabel(frame);
        lblCantidadDesencolados->setObjectName("lblCantidadDesencolados");
        lblCantidadDesencolados->setGeometry(QRect(20, 110, 231, 16));
        lblCantidadDesencolados->setStyleSheet(QString::fromUtf8("font: 700 16pt \"Times New Roman\";\n"
"color: Black;"));
        lblCantidadDesencoladosNum = new QLabel(frame);
        lblCantidadDesencoladosNum->setObjectName("lblCantidadDesencoladosNum");
        lblCantidadDesencoladosNum->setGeometry(QRect(280, 110, 91, 20));
        lblCantidadDesencoladosNum->setStyleSheet(QString::fromUtf8("font: 700 16pt \"Times New Roman\";\n"
"color: Black;\n"
"border: 1px solid black;"));
        lblCantidadEnColaNum = new QLabel(frame);
        lblCantidadEnColaNum->setObjectName("lblCantidadEnColaNum");
        lblCantidadEnColaNum->setGeometry(QRect(280, 30, 91, 20));
        lblCantidadEnColaNum->setStyleSheet(QString::fromUtf8("font: 700 16pt \"Times New Roman\";\n"
"color: Black;\n"
"border: 1px solid black;"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(500, 340, 111, 16));
        label_5->setStyleSheet(QString::fromUtf8("font: 9pt \"Segoe UI\";\n"
"color: Black;"));
        btnVolverAMenu = new QPushButton(centralwidget);
        btnVolverAMenu->setObjectName("btnVolverAMenu");
        btnVolverAMenu->setEnabled(true);
        btnVolverAMenu->setGeometry(QRect(510, 500, 80, 24));
        btnVolverAMenu->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 74, 108);\n"
"font: 700 9pt \"Arial\";\n"
"color: White;"));
        vColaPedidos->setCentralWidget(centralwidget);

        retranslateUi(vColaPedidos);

        QMetaObject::connectSlotsByName(vColaPedidos);
    } // setupUi

    void retranslateUi(QMainWindow *vColaPedidos)
    {
        vColaPedidos->setWindowTitle(QCoreApplication::translate("vColaPedidos", "MainWindow", nullptr));
        lblCantidadEnCola->setText(QCoreApplication::translate("vColaPedidos", "Cantidad en Cola:", nullptr));
        lblCantidadDesencolados->setText(QCoreApplication::translate("vColaPedidos", "Cantidad Desencolados:", nullptr));
        lblCantidadDesencoladosNum->setText(QString());
        lblCantidadEnColaNum->setText(QString());
        label_5->setText(QCoreApplication::translate("vColaPedidos", "Posible imagen***", nullptr));
        btnVolverAMenu->setText(QCoreApplication::translate("vColaPedidos", "Volver", nullptr));
    } // retranslateUi

};

namespace Ui {
    class vColaPedidos: public Ui_vColaPedidos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VCOLAPEDIDOS_H
