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
#include <QtWidgets/QColumnView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_vColaPedidos
{
public:
    QWidget *centralwidget;
    QColumnView *columnView;
    QColumnView *columnView_2;
    QColumnView *columnView_3;

    void setupUi(QMainWindow *vColaPedidos)
    {
        if (vColaPedidos->objectName().isEmpty())
            vColaPedidos->setObjectName("vColaPedidos");
        vColaPedidos->resize(800, 600);
        centralwidget = new QWidget(vColaPedidos);
        centralwidget->setObjectName("centralwidget");
        columnView = new QColumnView(centralwidget);
        columnView->setObjectName("columnView");
        columnView->setGeometry(QRect(10, 20, 256, 571));
        columnView_2 = new QColumnView(centralwidget);
        columnView_2->setObjectName("columnView_2");
        columnView_2->setGeometry(QRect(270, 20, 256, 571));
        columnView_3 = new QColumnView(centralwidget);
        columnView_3->setObjectName("columnView_3");
        columnView_3->setGeometry(QRect(530, 20, 256, 571));
        vColaPedidos->setCentralWidget(centralwidget);

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
