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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_vColaPedidos
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *vColaPedidos)
    {
        if (vColaPedidos->objectName().isEmpty())
            vColaPedidos->setObjectName("vColaPedidos");
        vColaPedidos->resize(800, 600);
        menubar = new QMenuBar(vColaPedidos);
        menubar->setObjectName("menubar");
        vColaPedidos->setMenuBar(menubar);
        centralwidget = new QWidget(vColaPedidos);
        centralwidget->setObjectName("centralwidget");
        vColaPedidos->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(vColaPedidos);
        statusbar->setObjectName("statusbar");
        vColaPedidos->setStatusBar(statusbar);

        retranslateUi(vColaPedidos);

        QMetaObject::connectSlotsByName(vColaPedidos);
    } // setupUi

    void retranslateUi(QMainWindow *vColaPedidos)
    {
        vColaPedidos->setWindowTitle(QCoreApplication::translate("vColaPedidos", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class vColaPedidos: public Ui_vColaPedidos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VCOLAPEDIDOS_H
