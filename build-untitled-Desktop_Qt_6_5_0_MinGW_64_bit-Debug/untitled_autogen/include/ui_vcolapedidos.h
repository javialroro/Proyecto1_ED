/********************************************************************************
** Form generated from reading UI file 'vcolapedidos.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VCOLAPEDIDOS_H
#define UI_VCOLAPEDIDOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_vColaPedidos
{
public:
    QWidget *centralwidget;
    QTextEdit *txEditColaPedidos;
    QLabel *lblCantEnColaText;
    QLabel *lblCantDesencoladosText;
    QLabel *lblCantEnColaNum;
    QLabel *lblCantDesencoladosNum;

    void setupUi(QMainWindow *vColaPedidos)
    {
        if (vColaPedidos->objectName().isEmpty())
            vColaPedidos->setObjectName("vColaPedidos");
        vColaPedidos->setEnabled(false);
        vColaPedidos->resize(757, 600);
        centralwidget = new QWidget(vColaPedidos);
        centralwidget->setObjectName("centralwidget");
        txEditColaPedidos = new QTextEdit(centralwidget);
        txEditColaPedidos->setObjectName("txEditColaPedidos");
        txEditColaPedidos->setEnabled(false);
        txEditColaPedidos->setGeometry(QRect(40, 40, 251, 521));
        txEditColaPedidos->setStyleSheet(QString::fromUtf8("border: 3px solid gray;\n"
"border-color: rgb(0, 74, 108);\n"
"\n"
""));
        lblCantEnColaText = new QLabel(centralwidget);
        lblCantEnColaText->setObjectName("lblCantEnColaText");
        lblCantEnColaText->setGeometry(QRect(368, 50, 161, 20));
        lblCantEnColaText->setStyleSheet(QString::fromUtf8("font: 12pt \"Times New Roman\"; \n"
"Color: Black;"));
        lblCantDesencoladosText = new QLabel(centralwidget);
        lblCantDesencoladosText->setObjectName("lblCantDesencoladosText");
        lblCantDesencoladosText->setGeometry(QRect(370, 120, 161, 20));
        lblCantDesencoladosText->setStyleSheet(QString::fromUtf8("font: 12pt \"Times New Roman\"; \n"
"Color: Black;"));
        lblCantEnColaNum = new QLabel(centralwidget);
        lblCantEnColaNum->setObjectName("lblCantEnColaNum");
        lblCantEnColaNum->setGeometry(QRect(540, 50, 91, 20));
        lblCantEnColaNum->setStyleSheet(QString::fromUtf8("font: 12pt \"Times New Roman\"; \n"
"Color: Black;"));
        lblCantDesencoladosNum = new QLabel(centralwidget);
        lblCantDesencoladosNum->setObjectName("lblCantDesencoladosNum");
        lblCantDesencoladosNum->setGeometry(QRect(540, 120, 91, 20));
        lblCantDesencoladosNum->setStyleSheet(QString::fromUtf8("font: 12pt \"Times New Roman\"; \n"
"Color: Black;"));
        vColaPedidos->setCentralWidget(centralwidget);

        retranslateUi(vColaPedidos);

        QMetaObject::connectSlotsByName(vColaPedidos);
    } // setupUi

    void retranslateUi(QMainWindow *vColaPedidos)
    {
        vColaPedidos->setWindowTitle(QCoreApplication::translate("vColaPedidos", "Informaci\303\263n de Cola", nullptr));
        lblCantEnColaText->setText(QCoreApplication::translate("vColaPedidos", "Cantidad en Cola:", nullptr));
        lblCantDesencoladosText->setText(QCoreApplication::translate("vColaPedidos", "Cantidad en Desencolada:", nullptr));
        lblCantEnColaNum->setText(QString());
        lblCantDesencoladosNum->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class vColaPedidos: public Ui_vColaPedidos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VCOLAPEDIDOS_H
