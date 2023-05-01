/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *lblcliente1;
    QFrame *lineV01;
    QFrame *lineH04;
    QFrame *lineH01;
    QFrame *lineH02;
    QFrame *lineH03;
    QFrame *lineH05;
    QFrame *lineH06;
    QLabel *lblBalanceador;
    QFrame *lineV02;
    QFrame *lineH07;
    QFrame *lineH08;
    QFrame *lineH10;
    QFrame *lineH11;
    QPushButton *btnColaPedidos;
    QPushButton *btnColaFabricaciones2;
    QPushButton *btnColaFabricaciones1;
    QPushButton *btnColaFabricaciones3;
    QLabel *lblFabrica3;
    QPushButton *btnColaFabricaciones4Com;
    QLabel *lblcliente2;
    QLabel *lblcliente3;
    QLabel *lblcliente4;
    QLabel *lblFabrica1;
    QLabel *lblFabrica2;
    QLabel *lblFabrica4Com;
    QFrame *lineH12;
    QFrame *lineV03;
    QFrame *lineH13;
    QLabel *lblImgListos;
    QPushButton *btnDetenerFab01;
    QPushButton *btnVerFab01;
    QPushButton *btnVerFab02;
    QPushButton *btnDetenerFab02;
    QPushButton *btnVerFab04Com;
    QPushButton *btnDetenerFab04Com;
    QPushButton *btnVerFab03;
    QPushButton *btnDetenerFab03;
    QPushButton *btnDetenerBalanceador;
    QFrame *lineH09;
    QFrame *lineV04;
    QFrame *lineH15;
    QFrame *lineV05;
    QPushButton *btnColaDeAlisto;
    QFrame *lineH14;
    QPushButton *btnVerBalanceador;
    QLabel *lblAlistadores;
    QFrame *lineH16;
    QTableWidget *tblBodega;
    QLabel *lblAlistador2;
    QPushButton *btnDetenerAlist2;
    QLabel *lblAlistador3;
    QPushButton *btnDetenerAlist3;
    QPushButton *btnDetenerAlist1;
    QLabel *lblAlistador1;
    QLabel *lblAlmacen;
    QFrame *lineV06;
    QLabel *lblNum1Alistador;
    QLabel *lblNum2Alistador;
    QLabel *lblNum3Alistador;
    QFrame *lineH17;
    QPushButton *btnColaAlistados;
    QLabel *lblCaja;
    QPushButton *btnDetenerAlistados;
    QPushButton *btnVerAlistados;
    QFrame *lineV07;
    QPushButton *btnColaPorFacturar;
    QLabel *lblCajaRegistradora;
    QPushButton *btnVerFacturacion;
    QPushButton *btnDetenerFacturacion;
    QFrame *lineV08;
    QLabel *lblPedidoFinal;
    QPushButton *btnVerLaFactura;
    QPushButton *btnDetenerAlist4;
    QLabel *lblNum6Alistador;
    QPushButton *btnDetenerAlist5;
    QLabel *lblAlistador4;
    QLabel *lblAlistador6;
    QLabel *lblNum4Alistador;
    QPushButton *btnDetenerAlist6;
    QLabel *lblNum5Alistador;
    QLabel *lblAlistador5;
    QPushButton *btnVerAlist1;
    QPushButton *btnVerAlist2;
    QPushButton *btnVerAlist3;
    QPushButton *btnVerAlist6;
    QPushButton *btnVerAlist5;
    QPushButton *btnVerAlist4;
    QLabel *lblMostrarFabricando;
    QPushButton *btnColaDeAlistadores;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1522, 769);
        MainWindow->setCursor(QCursor(Qt::ArrowCursor));
        MainWindow->setMouseTracking(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        lblcliente1 = new QLabel(centralwidget);
        lblcliente1->setObjectName("lblcliente1");
        lblcliente1->setGeometry(QRect(10, 20, 71, 71));
        lblcliente1->setPixmap(QPixmap(QString::fromUtf8("../Imagenes/edificio-torre-de-forma-cilindrica.png")));
        lblcliente1->setScaledContents(true);
        lineV01 = new QFrame(centralwidget);
        lineV01->setObjectName("lineV01");
        lineV01->setGeometry(QRect(160, 60, 20, 641));
        lineV01->setLineWidth(2);
        lineV01->setMidLineWidth(1);
        lineV01->setFrameShape(QFrame::VLine);
        lineV01->setFrameShadow(QFrame::Sunken);
        lineH04 = new QFrame(centralwidget);
        lineH04->setObjectName("lineH04");
        lineH04->setGeometry(QRect(70, 690, 101, 21));
        lineH04->setLineWidth(2);
        lineH04->setMidLineWidth(1);
        lineH04->setFrameShape(QFrame::HLine);
        lineH04->setFrameShadow(QFrame::Sunken);
        lineH01 = new QFrame(centralwidget);
        lineH01->setObjectName("lineH01");
        lineH01->setGeometry(QRect(70, 50, 101, 21));
        lineH01->setLineWidth(2);
        lineH01->setMidLineWidth(1);
        lineH01->setFrameShape(QFrame::HLine);
        lineH01->setFrameShadow(QFrame::Sunken);
        lineH02 = new QFrame(centralwidget);
        lineH02->setObjectName("lineH02");
        lineH02->setGeometry(QRect(70, 240, 101, 21));
        lineH02->setLineWidth(2);
        lineH02->setMidLineWidth(1);
        lineH02->setFrameShape(QFrame::HLine);
        lineH02->setFrameShadow(QFrame::Sunken);
        lineH03 = new QFrame(centralwidget);
        lineH03->setObjectName("lineH03");
        lineH03->setGeometry(QRect(70, 490, 101, 21));
        lineH03->setLineWidth(2);
        lineH03->setMidLineWidth(1);
        lineH03->setFrameShape(QFrame::HLine);
        lineH03->setFrameShadow(QFrame::Sunken);
        lineH05 = new QFrame(centralwidget);
        lineH05->setObjectName("lineH05");
        lineH05->setGeometry(QRect(170, 370, 51, 21));
        lineH05->setLineWidth(2);
        lineH05->setMidLineWidth(1);
        lineH05->setFrameShape(QFrame::HLine);
        lineH05->setFrameShadow(QFrame::Sunken);
        lineH06 = new QFrame(centralwidget);
        lineH06->setObjectName("lineH06");
        lineH06->setGeometry(QRect(280, 370, 41, 21));
        lineH06->setLineWidth(2);
        lineH06->setMidLineWidth(1);
        lineH06->setFrameShape(QFrame::HLine);
        lineH06->setFrameShadow(QFrame::Sunken);
        lblBalanceador = new QLabel(centralwidget);
        lblBalanceador->setObjectName("lblBalanceador");
        lblBalanceador->setGeometry(QRect(320, 330, 101, 101));
        lblBalanceador->setPixmap(QPixmap(QString::fromUtf8("../Imagenes/Hubpng-PNG-Cutout.png")));
        lblBalanceador->setScaledContents(true);
        lineV02 = new QFrame(centralwidget);
        lineV02->setObjectName("lineV02");
        lineV02->setGeometry(QRect(400, 70, 20, 281));
        lineV02->setLineWidth(2);
        lineV02->setMidLineWidth(1);
        lineV02->setFrameShape(QFrame::VLine);
        lineV02->setFrameShadow(QFrame::Sunken);
        lineH07 = new QFrame(centralwidget);
        lineH07->setObjectName("lineH07");
        lineH07->setGeometry(QRect(640, 50, 31, 21));
        lineH07->setLineWidth(2);
        lineH07->setMidLineWidth(1);
        lineH07->setFrameShape(QFrame::HLine);
        lineH07->setFrameShadow(QFrame::Sunken);
        lineH08 = new QFrame(centralwidget);
        lineH08->setObjectName("lineH08");
        lineH08->setGeometry(QRect(410, 140, 31, 21));
        lineH08->setLineWidth(2);
        lineH08->setMidLineWidth(1);
        lineH08->setFrameShape(QFrame::HLine);
        lineH08->setFrameShadow(QFrame::Sunken);
        lineH10 = new QFrame(centralwidget);
        lineH10->setObjectName("lineH10");
        lineH10->setGeometry(QRect(380, 60, 31, 21));
        lineH10->setLineWidth(2);
        lineH10->setMidLineWidth(1);
        lineH10->setFrameShape(QFrame::HLine);
        lineH10->setFrameShadow(QFrame::Sunken);
        lineH11 = new QFrame(centralwidget);
        lineH11->setObjectName("lineH11");
        lineH11->setGeometry(QRect(380, 140, 31, 21));
        lineH11->setLineWidth(2);
        lineH11->setMidLineWidth(1);
        lineH11->setFrameShape(QFrame::HLine);
        lineH11->setFrameShadow(QFrame::Sunken);
        btnColaPedidos = new QPushButton(centralwidget);
        btnColaPedidos->setObjectName("btnColaPedidos");
        btnColaPedidos->setGeometry(QRect(220, 360, 61, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setPointSize(9);
        font.setBold(true);
        font.setItalic(false);
        font.setKerning(true);
        btnColaPedidos->setFont(font);
        btnColaPedidos->setCursor(QCursor(Qt::PointingHandCursor));
        btnColaPedidos->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 74, 108);\n"
"font: 700 9pt \"Segoe UI\";\n"
"color: white"));
        btnColaFabricaciones2 = new QPushButton(centralwidget);
        btnColaFabricaciones2->setObjectName("btnColaFabricaciones2");
        btnColaFabricaciones2->setGeometry(QRect(430, 50, 111, 41));
        btnColaFabricaciones2->setFont(font);
        btnColaFabricaciones2->setCursor(QCursor(Qt::PointingHandCursor));
        btnColaFabricaciones2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 74, 108);\n"
"font: 700 9pt \"Segoe UI\";\n"
"color: white"));
        btnColaFabricaciones1 = new QPushButton(centralwidget);
        btnColaFabricaciones1->setObjectName("btnColaFabricaciones1");
        btnColaFabricaciones1->setGeometry(QRect(430, 130, 111, 41));
        btnColaFabricaciones1->setFont(font);
        btnColaFabricaciones1->setCursor(QCursor(Qt::PointingHandCursor));
        btnColaFabricaciones1->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 74, 108);\n"
"font: 700 9pt \"Segoe UI\";\n"
"color: white"));
        btnColaFabricaciones3 = new QPushButton(centralwidget);
        btnColaFabricaciones3->setObjectName("btnColaFabricaciones3");
        btnColaFabricaciones3->setGeometry(QRect(290, 130, 111, 41));
        btnColaFabricaciones3->setFont(font);
        btnColaFabricaciones3->setCursor(QCursor(Qt::PointingHandCursor));
        btnColaFabricaciones3->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 74, 108);\n"
"font: 700 9pt \"Segoe UI\";\n"
"color: white"));
        lblFabrica3 = new QLabel(centralwidget);
        lblFabrica3->setObjectName("lblFabrica3");
        lblFabrica3->setGeometry(QRect(230, 130, 51, 41));
        lblFabrica3->setPixmap(QPixmap(QString::fromUtf8("../Imagenes/industria.png")));
        lblFabrica3->setScaledContents(true);
        btnColaFabricaciones4Com = new QPushButton(centralwidget);
        btnColaFabricaciones4Com->setObjectName("btnColaFabricaciones4Com");
        btnColaFabricaciones4Com->setGeometry(QRect(290, 50, 111, 41));
        btnColaFabricaciones4Com->setFont(font);
        btnColaFabricaciones4Com->setCursor(QCursor(Qt::PointingHandCursor));
        btnColaFabricaciones4Com->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 74, 108);\n"
"font: 700 9pt \"Segoe UI\";\n"
"color: white"));
        lblcliente2 = new QLabel(centralwidget);
        lblcliente2->setObjectName("lblcliente2");
        lblcliente2->setGeometry(QRect(10, 210, 71, 71));
        lblcliente2->setPixmap(QPixmap(QString::fromUtf8("../Imagenes/edificio-torre-de-forma-cilindrica.png")));
        lblcliente2->setScaledContents(true);
        lblcliente3 = new QLabel(centralwidget);
        lblcliente3->setObjectName("lblcliente3");
        lblcliente3->setGeometry(QRect(10, 460, 71, 71));
        lblcliente3->setPixmap(QPixmap(QString::fromUtf8("../Imagenes/edificio-torre-de-forma-cilindrica.png")));
        lblcliente3->setScaledContents(true);
        lblcliente4 = new QLabel(centralwidget);
        lblcliente4->setObjectName("lblcliente4");
        lblcliente4->setGeometry(QRect(10, 660, 71, 71));
        lblcliente4->setPixmap(QPixmap(QString::fromUtf8("../Imagenes/edificio-torre-de-forma-cilindrica.png")));
        lblcliente4->setScaledContents(true);
        lblFabrica1 = new QLabel(centralwidget);
        lblFabrica1->setObjectName("lblFabrica1");
        lblFabrica1->setGeometry(QRect(550, 50, 51, 41));
        lblFabrica1->setPixmap(QPixmap(QString::fromUtf8("../Imagenes/industria.png")));
        lblFabrica1->setScaledContents(true);
        lblFabrica2 = new QLabel(centralwidget);
        lblFabrica2->setObjectName("lblFabrica2");
        lblFabrica2->setGeometry(QRect(550, 130, 51, 41));
        lblFabrica2->setPixmap(QPixmap(QString::fromUtf8("../Imagenes/industria.png")));
        lblFabrica2->setScaledContents(true);
        lblFabrica4Com = new QLabel(centralwidget);
        lblFabrica4Com->setObjectName("lblFabrica4Com");
        lblFabrica4Com->setGeometry(QRect(230, 50, 51, 41));
        lblFabrica4Com->setPixmap(QPixmap(QString::fromUtf8("../Imagenes/factory_icon_136644.png")));
        lblFabrica4Com->setScaledContents(true);
        lineH12 = new QFrame(centralwidget);
        lineH12->setObjectName("lineH12");
        lineH12->setGeometry(QRect(640, 150, 31, 21));
        lineH12->setLineWidth(2);
        lineH12->setMidLineWidth(1);
        lineH12->setFrameShape(QFrame::HLine);
        lineH12->setFrameShadow(QFrame::Sunken);
        lineV03 = new QFrame(centralwidget);
        lineV03->setObjectName("lineV03");
        lineV03->setGeometry(QRect(660, 60, 20, 101));
        lineV03->setLineWidth(2);
        lineV03->setMidLineWidth(1);
        lineV03->setFrameShape(QFrame::VLine);
        lineV03->setFrameShadow(QFrame::Sunken);
        lineH13 = new QFrame(centralwidget);
        lineH13->setObjectName("lineH13");
        lineH13->setGeometry(QRect(670, 100, 31, 21));
        lineH13->setLineWidth(2);
        lineH13->setMidLineWidth(1);
        lineH13->setFrameShape(QFrame::HLine);
        lineH13->setFrameShadow(QFrame::Sunken);
        lblImgListos = new QLabel(centralwidget);
        lblImgListos->setObjectName("lblImgListos");
        lblImgListos->setGeometry(QRect(700, 79, 63, 51));
        lblImgListos->setPixmap(QPixmap(QString::fromUtf8("../Imagenes/4634990-gold_122537.png")));
        lblImgListos->setScaledContents(true);
        btnDetenerFab01 = new QPushButton(centralwidget);
        btnDetenerFab01->setObjectName("btnDetenerFab01");
        btnDetenerFab01->setGeometry(QRect(610, 50, 31, 21));
        btnDetenerFab01->setCursor(QCursor(Qt::PointingHandCursor));
        btnDetenerFab01->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"font: 700 9pt \"Segoe UI\";\n"
"color: white;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../Imagenes/semaforos.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnDetenerFab01->setIcon(icon);
        btnDetenerFab01->setIconSize(QSize(20, 20));
        btnDetenerFab01->setFlat(true);
        btnVerFab01 = new QPushButton(centralwidget);
        btnVerFab01->setObjectName("btnVerFab01");
        btnVerFab01->setGeometry(QRect(610, 70, 31, 21));
        btnVerFab01->setCursor(QCursor(Qt::PointingHandCursor));
        btnVerFab01->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"font: 700 9pt \"Segoe UI\";\n"
"color: white;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../Imagenes/vision.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnVerFab01->setIcon(icon1);
        btnVerFab01->setIconSize(QSize(25, 25));
        btnVerFab01->setFlat(true);
        btnVerFab02 = new QPushButton(centralwidget);
        btnVerFab02->setObjectName("btnVerFab02");
        btnVerFab02->setGeometry(QRect(610, 150, 31, 21));
        btnVerFab02->setCursor(QCursor(Qt::PointingHandCursor));
        btnVerFab02->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"font: 700 9pt \"Segoe UI\";\n"
"color: white;"));
        btnVerFab02->setIcon(icon1);
        btnVerFab02->setIconSize(QSize(25, 25));
        btnVerFab02->setFlat(true);
        btnDetenerFab02 = new QPushButton(centralwidget);
        btnDetenerFab02->setObjectName("btnDetenerFab02");
        btnDetenerFab02->setGeometry(QRect(610, 130, 31, 21));
        btnDetenerFab02->setCursor(QCursor(Qt::PointingHandCursor));
        btnDetenerFab02->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"font: 700 9pt \"Segoe UI\";\n"
"color: white;"));
        btnDetenerFab02->setIcon(icon);
        btnDetenerFab02->setIconSize(QSize(20, 20));
        btnDetenerFab02->setFlat(true);
        btnVerFab04Com = new QPushButton(centralwidget);
        btnVerFab04Com->setObjectName("btnVerFab04Com");
        btnVerFab04Com->setGeometry(QRect(190, 70, 31, 21));
        btnVerFab04Com->setCursor(QCursor(Qt::PointingHandCursor));
        btnVerFab04Com->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"font: 700 9pt \"Segoe UI\";\n"
"color: white;"));
        btnVerFab04Com->setIcon(icon1);
        btnVerFab04Com->setIconSize(QSize(25, 25));
        btnVerFab04Com->setFlat(true);
        btnDetenerFab04Com = new QPushButton(centralwidget);
        btnDetenerFab04Com->setObjectName("btnDetenerFab04Com");
        btnDetenerFab04Com->setGeometry(QRect(190, 50, 31, 21));
        btnDetenerFab04Com->setCursor(QCursor(Qt::PointingHandCursor));
        btnDetenerFab04Com->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"font: 700 9pt \"Segoe UI\";\n"
"color: white;"));
        btnDetenerFab04Com->setIcon(icon);
        btnDetenerFab04Com->setIconSize(QSize(20, 20));
        btnDetenerFab04Com->setFlat(true);
        btnVerFab03 = new QPushButton(centralwidget);
        btnVerFab03->setObjectName("btnVerFab03");
        btnVerFab03->setGeometry(QRect(190, 150, 31, 21));
        btnVerFab03->setCursor(QCursor(Qt::PointingHandCursor));
        btnVerFab03->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"font: 700 9pt \"Segoe UI\";\n"
"color: white;"));
        btnVerFab03->setIcon(icon1);
        btnVerFab03->setIconSize(QSize(25, 25));
        btnVerFab03->setFlat(true);
        btnDetenerFab03 = new QPushButton(centralwidget);
        btnDetenerFab03->setObjectName("btnDetenerFab03");
        btnDetenerFab03->setGeometry(QRect(190, 130, 31, 21));
        btnDetenerFab03->setCursor(QCursor(Qt::PointingHandCursor));
        btnDetenerFab03->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"font: 700 9pt \"Segoe UI\";\n"
"color: white;"));
        btnDetenerFab03->setIcon(icon);
        btnDetenerFab03->setIconSize(QSize(20, 20));
        btnDetenerFab03->setFlat(true);
        btnDetenerBalanceador = new QPushButton(centralwidget);
        btnDetenerBalanceador->setObjectName("btnDetenerBalanceador");
        btnDetenerBalanceador->setGeometry(QRect(340, 310, 31, 20));
        btnDetenerBalanceador->setCursor(QCursor(Qt::PointingHandCursor));
        btnDetenerBalanceador->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"font: 700 9pt \"Segoe UI\";\n"
"color: white;"));
        btnDetenerBalanceador->setIcon(icon);
        btnDetenerBalanceador->setIconSize(QSize(20, 20));
        btnDetenerBalanceador->setFlat(true);
        lineH09 = new QFrame(centralwidget);
        lineH09->setObjectName("lineH09");
        lineH09->setGeometry(QRect(410, 60, 31, 21));
        lineH09->setLineWidth(2);
        lineH09->setMidLineWidth(1);
        lineH09->setFrameShape(QFrame::HLine);
        lineH09->setFrameShadow(QFrame::Sunken);
        lineV04 = new QFrame(centralwidget);
        lineV04->setObjectName("lineV04");
        lineV04->setGeometry(QRect(720, 130, 20, 101));
        lineV04->setLineWidth(2);
        lineV04->setMidLineWidth(1);
        lineV04->setFrameShape(QFrame::VLine);
        lineV04->setFrameShadow(QFrame::Sunken);
        lineH15 = new QFrame(centralwidget);
        lineH15->setObjectName("lineH15");
        lineH15->setGeometry(QRect(490, 220, 241, 21));
        lineH15->setLineWidth(2);
        lineH15->setMidLineWidth(1);
        lineH15->setFrameShape(QFrame::HLine);
        lineH15->setFrameShadow(QFrame::Sunken);
        lineV05 = new QFrame(centralwidget);
        lineV05->setObjectName("lineV05");
        lineV05->setGeometry(QRect(480, 230, 20, 291));
        lineV05->setLineWidth(2);
        lineV05->setMidLineWidth(1);
        lineV05->setFrameShape(QFrame::VLine);
        lineV05->setFrameShadow(QFrame::Sunken);
        btnColaDeAlisto = new QPushButton(centralwidget);
        btnColaDeAlisto->setObjectName("btnColaDeAlisto");
        btnColaDeAlisto->setGeometry(QRect(450, 510, 71, 41));
        btnColaDeAlisto->setFont(font);
        btnColaDeAlisto->setCursor(QCursor(Qt::PointingHandCursor));
        btnColaDeAlisto->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 74, 108);\n"
"font: 700 9pt \"Segoe UI\";\n"
"color: white"));
        lineH14 = new QFrame(centralwidget);
        lineH14->setObjectName("lineH14");
        lineH14->setGeometry(QRect(380, 520, 71, 21));
        lineH14->setLineWidth(2);
        lineH14->setMidLineWidth(1);
        lineH14->setFrameShape(QFrame::HLine);
        lineH14->setFrameShadow(QFrame::Sunken);
        btnVerBalanceador = new QPushButton(centralwidget);
        btnVerBalanceador->setObjectName("btnVerBalanceador");
        btnVerBalanceador->setGeometry(QRect(370, 310, 31, 21));
        btnVerBalanceador->setCursor(QCursor(Qt::PointingHandCursor));
        btnVerBalanceador->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"font: 700 9pt \"Segoe UI\";\n"
"color: white;"));
        btnVerBalanceador->setIcon(icon1);
        btnVerBalanceador->setIconSize(QSize(25, 25));
        btnVerBalanceador->setFlat(true);
        lblAlistadores = new QLabel(centralwidget);
        lblAlistadores->setObjectName("lblAlistadores");
        lblAlistadores->setGeometry(QRect(582, 500, 61, 61));
        lblAlistadores->setPixmap(QPixmap(QString::fromUtf8("../Imagenes/carretilla.png")));
        lblAlistadores->setScaledContents(true);
        lineH16 = new QFrame(centralwidget);
        lineH16->setObjectName("lineH16");
        lineH16->setGeometry(QRect(520, 520, 71, 21));
        lineH16->setLineWidth(2);
        lineH16->setMidLineWidth(1);
        lineH16->setFrameShape(QFrame::HLine);
        lineH16->setFrameShadow(QFrame::Sunken);
        tblBodega = new QTableWidget(centralwidget);
        if (tblBodega->columnCount() < 27)
            tblBodega->setColumnCount(27);
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setBackground(QColor(0, 74, 108));
        __qtablewidgetitem->setForeground(brush);
        tblBodega->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tblBodega->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tblBodega->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tblBodega->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tblBodega->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tblBodega->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tblBodega->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tblBodega->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tblBodega->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tblBodega->setHorizontalHeaderItem(9, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tblBodega->setHorizontalHeaderItem(10, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tblBodega->setHorizontalHeaderItem(11, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tblBodega->setHorizontalHeaderItem(12, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tblBodega->setHorizontalHeaderItem(13, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tblBodega->setHorizontalHeaderItem(14, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tblBodega->setHorizontalHeaderItem(15, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tblBodega->setHorizontalHeaderItem(16, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tblBodega->setHorizontalHeaderItem(17, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tblBodega->setHorizontalHeaderItem(18, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tblBodega->setHorizontalHeaderItem(19, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tblBodega->setHorizontalHeaderItem(20, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tblBodega->setHorizontalHeaderItem(21, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tblBodega->setHorizontalHeaderItem(22, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tblBodega->setHorizontalHeaderItem(23, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tblBodega->setHorizontalHeaderItem(24, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        tblBodega->setHorizontalHeaderItem(25, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        tblBodega->setHorizontalHeaderItem(26, __qtablewidgetitem26);
        if (tblBodega->rowCount() < 10)
            tblBodega->setRowCount(10);
        tblBodega->setObjectName("tblBodega");
        tblBodega->setGeometry(QRect(660, 340, 461, 301));
        tblBodega->setStyleSheet(QString::fromUtf8("QTableView::item {\n"
"    height: 100px;\n"
"}"));
        tblBodega->setRowCount(10);
        tblBodega->setColumnCount(27);
        tblBodega->horizontalHeader()->setCascadingSectionResizes(false);
        tblBodega->horizontalHeader()->setDefaultSectionSize(43);
        tblBodega->horizontalHeader()->setStretchLastSection(true);
        tblBodega->verticalHeader()->setMinimumSectionSize(20);
        tblBodega->verticalHeader()->setDefaultSectionSize(25);
        tblBodega->verticalHeader()->setHighlightSections(true);
        lblAlistador2 = new QLabel(centralwidget);
        lblAlistador2->setObjectName("lblAlistador2");
        lblAlistador2->setGeometry(QRect(550, 310, 21, 21));
        lblAlistador2->setPixmap(QPixmap(QString::fromUtf8("../Imagenes/carretilla.png")));
        lblAlistador2->setScaledContents(true);
        btnDetenerAlist2 = new QPushButton(centralwidget);
        btnDetenerAlist2->setObjectName("btnDetenerAlist2");
        btnDetenerAlist2->setGeometry(QRect(580, 310, 21, 21));
        btnDetenerAlist2->setCursor(QCursor(Qt::PointingHandCursor));
        btnDetenerAlist2->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"font: 700 9pt \"Segoe UI\";\n"
"color: white;"));
        btnDetenerAlist2->setIcon(icon);
        btnDetenerAlist2->setIconSize(QSize(20, 20));
        btnDetenerAlist2->setFlat(true);
        lblAlistador3 = new QLabel(centralwidget);
        lblAlistador3->setObjectName("lblAlistador3");
        lblAlistador3->setGeometry(QRect(550, 340, 21, 21));
        lblAlistador3->setPixmap(QPixmap(QString::fromUtf8("../Imagenes/carretilla.png")));
        lblAlistador3->setScaledContents(true);
        btnDetenerAlist3 = new QPushButton(centralwidget);
        btnDetenerAlist3->setObjectName("btnDetenerAlist3");
        btnDetenerAlist3->setGeometry(QRect(580, 340, 21, 21));
        btnDetenerAlist3->setCursor(QCursor(Qt::PointingHandCursor));
        btnDetenerAlist3->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"font: 700 9pt \"Segoe UI\";\n"
"color: white;"));
        btnDetenerAlist3->setIcon(icon);
        btnDetenerAlist3->setIconSize(QSize(20, 20));
        btnDetenerAlist3->setFlat(true);
        btnDetenerAlist1 = new QPushButton(centralwidget);
        btnDetenerAlist1->setObjectName("btnDetenerAlist1");
        btnDetenerAlist1->setGeometry(QRect(580, 280, 21, 21));
        btnDetenerAlist1->setCursor(QCursor(Qt::PointingHandCursor));
        btnDetenerAlist1->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"font: 700 9pt \"Segoe UI\";\n"
"color: white;"));
        btnDetenerAlist1->setIcon(icon);
        btnDetenerAlist1->setIconSize(QSize(20, 20));
        btnDetenerAlist1->setFlat(true);
        lblAlistador1 = new QLabel(centralwidget);
        lblAlistador1->setObjectName("lblAlistador1");
        lblAlistador1->setGeometry(QRect(550, 280, 21, 21));
        lblAlistador1->setPixmap(QPixmap(QString::fromUtf8("../Imagenes/carretilla.png")));
        lblAlistador1->setScaledContents(true);
        lblAlmacen = new QLabel(centralwidget);
        lblAlmacen->setObjectName("lblAlmacen");
        lblAlmacen->setGeometry(QRect(850, 260, 91, 81));
        lblAlmacen->setPixmap(QPixmap(QString::fromUtf8("../Imagenes/edificio-escolar.png")));
        lblAlmacen->setScaledContents(true);
        lineV06 = new QFrame(centralwidget);
        lineV06->setObjectName("lineV06");
        lineV06->setGeometry(QRect(370, 420, 20, 111));
        lineV06->setLineWidth(2);
        lineV06->setMidLineWidth(1);
        lineV06->setFrameShape(QFrame::VLine);
        lineV06->setFrameShadow(QFrame::Sunken);
        lblNum1Alistador = new QLabel(centralwidget);
        lblNum1Alistador->setObjectName("lblNum1Alistador");
        lblNum1Alistador->setGeometry(QRect(530, 280, 21, 21));
        lblNum1Alistador->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Arial\";\n"
"color: black;"));
        lblNum2Alistador = new QLabel(centralwidget);
        lblNum2Alistador->setObjectName("lblNum2Alistador");
        lblNum2Alistador->setGeometry(QRect(530, 310, 21, 21));
        lblNum2Alistador->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Arial\";\n"
"color: black;"));
        lblNum3Alistador = new QLabel(centralwidget);
        lblNum3Alistador->setObjectName("lblNum3Alistador");
        lblNum3Alistador->setGeometry(QRect(530, 340, 21, 21));
        lblNum3Alistador->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Arial\";\n"
"color: black;"));
        lineH17 = new QFrame(centralwidget);
        lineH17->setObjectName("lineH17");
        lineH17->setGeometry(QRect(1120, 510, 101, 21));
        lineH17->setLineWidth(2);
        lineH17->setMidLineWidth(1);
        lineH17->setFrameShape(QFrame::HLine);
        lineH17->setFrameShadow(QFrame::Sunken);
        btnColaAlistados = new QPushButton(centralwidget);
        btnColaAlistados->setObjectName("btnColaAlistados");
        btnColaAlistados->setGeometry(QRect(1220, 500, 71, 41));
        btnColaAlistados->setFont(font);
        btnColaAlistados->setCursor(QCursor(Qt::PointingHandCursor));
        btnColaAlistados->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 74, 108);\n"
"font: 700 9pt \"Segoe UI\";\n"
"color: white"));
        lblCaja = new QLabel(centralwidget);
        lblCaja->setObjectName("lblCaja");
        lblCaja->setGeometry(QRect(1300, 480, 81, 71));
        lblCaja->setPixmap(QPixmap(QString::fromUtf8("../Imagenes/caja.png")));
        lblCaja->setScaledContents(true);
        btnDetenerAlistados = new QPushButton(centralwidget);
        btnDetenerAlistados->setObjectName("btnDetenerAlistados");
        btnDetenerAlistados->setGeometry(QRect(1380, 520, 31, 21));
        btnDetenerAlistados->setCursor(QCursor(Qt::PointingHandCursor));
        btnDetenerAlistados->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"font: 700 9pt \"Segoe UI\";\n"
"color: white;"));
        btnDetenerAlistados->setIcon(icon);
        btnDetenerAlistados->setIconSize(QSize(20, 20));
        btnDetenerAlistados->setFlat(true);
        btnVerAlistados = new QPushButton(centralwidget);
        btnVerAlistados->setObjectName("btnVerAlistados");
        btnVerAlistados->setGeometry(QRect(1380, 500, 31, 21));
        btnVerAlistados->setCursor(QCursor(Qt::PointingHandCursor));
        btnVerAlistados->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"font: 700 9pt \"Segoe UI\";\n"
"color: white;"));
        btnVerAlistados->setIcon(icon1);
        btnVerAlistados->setIconSize(QSize(25, 25));
        btnVerAlistados->setFlat(true);
        lineV07 = new QFrame(centralwidget);
        lineV07->setObjectName("lineV07");
        lineV07->setGeometry(QRect(1330, 380, 20, 111));
        lineV07->setLineWidth(2);
        lineV07->setMidLineWidth(1);
        lineV07->setFrameShape(QFrame::VLine);
        lineV07->setFrameShadow(QFrame::Sunken);
        btnColaPorFacturar = new QPushButton(centralwidget);
        btnColaPorFacturar->setObjectName("btnColaPorFacturar");
        btnColaPorFacturar->setGeometry(QRect(1310, 360, 71, 41));
        btnColaPorFacturar->setFont(font);
        btnColaPorFacturar->setCursor(QCursor(Qt::PointingHandCursor));
        btnColaPorFacturar->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 74, 108);\n"
"font: 700 9pt \"Segoe UI\";\n"
"color: white"));
        lblCajaRegistradora = new QLabel(centralwidget);
        lblCajaRegistradora->setObjectName("lblCajaRegistradora");
        lblCajaRegistradora->setGeometry(QRect(1310, 290, 71, 61));
        lblCajaRegistradora->setPixmap(QPixmap(QString::fromUtf8("../Imagenes/caja-registradora.png")));
        lblCajaRegistradora->setScaledContents(true);
        btnVerFacturacion = new QPushButton(centralwidget);
        btnVerFacturacion->setObjectName("btnVerFacturacion");
        btnVerFacturacion->setGeometry(QRect(1380, 290, 31, 21));
        btnVerFacturacion->setCursor(QCursor(Qt::PointingHandCursor));
        btnVerFacturacion->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"font: 700 9pt \"Segoe UI\";\n"
"color: white;"));
        btnVerFacturacion->setIcon(icon1);
        btnVerFacturacion->setIconSize(QSize(25, 25));
        btnVerFacturacion->setFlat(true);
        btnDetenerFacturacion = new QPushButton(centralwidget);
        btnDetenerFacturacion->setObjectName("btnDetenerFacturacion");
        btnDetenerFacturacion->setGeometry(QRect(1380, 310, 31, 21));
        btnDetenerFacturacion->setCursor(QCursor(Qt::PointingHandCursor));
        btnDetenerFacturacion->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"font: 700 9pt \"Segoe UI\";\n"
"color: white;"));
        btnDetenerFacturacion->setIcon(icon);
        btnDetenerFacturacion->setIconSize(QSize(20, 20));
        btnDetenerFacturacion->setFlat(true);
        lineV08 = new QFrame(centralwidget);
        lineV08->setObjectName("lineV08");
        lineV08->setGeometry(QRect(1330, 190, 20, 111));
        lineV08->setLineWidth(2);
        lineV08->setMidLineWidth(1);
        lineV08->setFrameShape(QFrame::VLine);
        lineV08->setFrameShadow(QFrame::Sunken);
        lblPedidoFinal = new QLabel(centralwidget);
        lblPedidoFinal->setObjectName("lblPedidoFinal");
        lblPedidoFinal->setGeometry(QRect(1310, 120, 71, 71));
        lblPedidoFinal->setPixmap(QPixmap(QString::fromUtf8("../Imagenes/simbolo-de-interfaz-de-archivo-del-contorno-de-la-hoja-de-papel-con-la-esquina-superior-derecha-doblada.png")));
        lblPedidoFinal->setScaledContents(true);
        btnVerLaFactura = new QPushButton(centralwidget);
        btnVerLaFactura->setObjectName("btnVerLaFactura");
        btnVerLaFactura->setGeometry(QRect(1330, 150, 31, 21));
        btnVerLaFactura->setCursor(QCursor(Qt::PointingHandCursor));
        btnVerLaFactura->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"font: 700 9pt \"Segoe UI\";\n"
"color: white;"));
        btnVerLaFactura->setIcon(icon1);
        btnVerLaFactura->setIconSize(QSize(25, 25));
        btnVerLaFactura->setFlat(true);
        btnDetenerAlist4 = new QPushButton(centralwidget);
        btnDetenerAlist4->setObjectName("btnDetenerAlist4");
        btnDetenerAlist4->setGeometry(QRect(580, 370, 21, 21));
        btnDetenerAlist4->setCursor(QCursor(Qt::PointingHandCursor));
        btnDetenerAlist4->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"font: 700 9pt \"Segoe UI\";\n"
"color: white;"));
        btnDetenerAlist4->setIcon(icon);
        btnDetenerAlist4->setIconSize(QSize(20, 20));
        btnDetenerAlist4->setFlat(true);
        lblNum6Alistador = new QLabel(centralwidget);
        lblNum6Alistador->setObjectName("lblNum6Alistador");
        lblNum6Alistador->setGeometry(QRect(530, 430, 21, 21));
        lblNum6Alistador->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Arial\";\n"
"color: black;"));
        btnDetenerAlist5 = new QPushButton(centralwidget);
        btnDetenerAlist5->setObjectName("btnDetenerAlist5");
        btnDetenerAlist5->setGeometry(QRect(580, 400, 21, 21));
        btnDetenerAlist5->setCursor(QCursor(Qt::PointingHandCursor));
        btnDetenerAlist5->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"font: 700 9pt \"Segoe UI\";\n"
"color: white;"));
        btnDetenerAlist5->setIcon(icon);
        btnDetenerAlist5->setIconSize(QSize(20, 20));
        btnDetenerAlist5->setFlat(true);
        lblAlistador4 = new QLabel(centralwidget);
        lblAlistador4->setObjectName("lblAlistador4");
        lblAlistador4->setGeometry(QRect(550, 370, 21, 21));
        lblAlistador4->setPixmap(QPixmap(QString::fromUtf8("../Imagenes/carretilla.png")));
        lblAlistador4->setScaledContents(true);
        lblAlistador6 = new QLabel(centralwidget);
        lblAlistador6->setObjectName("lblAlistador6");
        lblAlistador6->setGeometry(QRect(550, 430, 21, 21));
        lblAlistador6->setPixmap(QPixmap(QString::fromUtf8("../Imagenes/carretilla.png")));
        lblAlistador6->setScaledContents(true);
        lblNum4Alistador = new QLabel(centralwidget);
        lblNum4Alistador->setObjectName("lblNum4Alistador");
        lblNum4Alistador->setGeometry(QRect(530, 370, 21, 21));
        lblNum4Alistador->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Arial\";\n"
"color: black;"));
        btnDetenerAlist6 = new QPushButton(centralwidget);
        btnDetenerAlist6->setObjectName("btnDetenerAlist6");
        btnDetenerAlist6->setGeometry(QRect(580, 430, 21, 21));
        btnDetenerAlist6->setCursor(QCursor(Qt::PointingHandCursor));
        btnDetenerAlist6->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"font: 700 9pt \"Segoe UI\";\n"
"color: white;"));
        btnDetenerAlist6->setIcon(icon);
        btnDetenerAlist6->setIconSize(QSize(20, 20));
        btnDetenerAlist6->setFlat(true);
        lblNum5Alistador = new QLabel(centralwidget);
        lblNum5Alistador->setObjectName("lblNum5Alistador");
        lblNum5Alistador->setGeometry(QRect(530, 400, 21, 21));
        lblNum5Alistador->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Arial\";\n"
"color: black;"));
        lblAlistador5 = new QLabel(centralwidget);
        lblAlistador5->setObjectName("lblAlistador5");
        lblAlistador5->setGeometry(QRect(550, 400, 21, 21));
        lblAlistador5->setPixmap(QPixmap(QString::fromUtf8("../Imagenes/carretilla.png")));
        lblAlistador5->setScaledContents(true);
        btnVerAlist1 = new QPushButton(centralwidget);
        btnVerAlist1->setObjectName("btnVerAlist1");
        btnVerAlist1->setGeometry(QRect(610, 280, 31, 21));
        btnVerAlist1->setCursor(QCursor(Qt::PointingHandCursor));
        btnVerAlist1->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"font: 700 9pt \"Segoe UI\";\n"
"color: white;"));
        btnVerAlist1->setIcon(icon1);
        btnVerAlist1->setIconSize(QSize(25, 25));
        btnVerAlist1->setFlat(true);
        btnVerAlist2 = new QPushButton(centralwidget);
        btnVerAlist2->setObjectName("btnVerAlist2");
        btnVerAlist2->setGeometry(QRect(610, 310, 31, 21));
        btnVerAlist2->setCursor(QCursor(Qt::PointingHandCursor));
        btnVerAlist2->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"font: 700 9pt \"Segoe UI\";\n"
"color: white;"));
        btnVerAlist2->setIcon(icon1);
        btnVerAlist2->setIconSize(QSize(25, 25));
        btnVerAlist2->setFlat(true);
        btnVerAlist3 = new QPushButton(centralwidget);
        btnVerAlist3->setObjectName("btnVerAlist3");
        btnVerAlist3->setGeometry(QRect(610, 340, 31, 21));
        btnVerAlist3->setCursor(QCursor(Qt::PointingHandCursor));
        btnVerAlist3->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"font: 700 9pt \"Segoe UI\";\n"
"color: white;"));
        btnVerAlist3->setIcon(icon1);
        btnVerAlist3->setIconSize(QSize(25, 25));
        btnVerAlist3->setFlat(true);
        btnVerAlist6 = new QPushButton(centralwidget);
        btnVerAlist6->setObjectName("btnVerAlist6");
        btnVerAlist6->setGeometry(QRect(610, 430, 31, 21));
        btnVerAlist6->setCursor(QCursor(Qt::PointingHandCursor));
        btnVerAlist6->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"font: 700 9pt \"Segoe UI\";\n"
"color: white;"));
        btnVerAlist6->setIcon(icon1);
        btnVerAlist6->setIconSize(QSize(25, 25));
        btnVerAlist6->setFlat(true);
        btnVerAlist5 = new QPushButton(centralwidget);
        btnVerAlist5->setObjectName("btnVerAlist5");
        btnVerAlist5->setGeometry(QRect(610, 400, 31, 21));
        btnVerAlist5->setCursor(QCursor(Qt::PointingHandCursor));
        btnVerAlist5->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"font: 700 9pt \"Segoe UI\";\n"
"color: white;"));
        btnVerAlist5->setIcon(icon1);
        btnVerAlist5->setIconSize(QSize(25, 25));
        btnVerAlist5->setFlat(true);
        btnVerAlist4 = new QPushButton(centralwidget);
        btnVerAlist4->setObjectName("btnVerAlist4");
        btnVerAlist4->setGeometry(QRect(610, 370, 31, 21));
        btnVerAlist4->setCursor(QCursor(Qt::PointingHandCursor));
        btnVerAlist4->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"font: 700 9pt \"Segoe UI\";\n"
"color: white;"));
        btnVerAlist4->setIcon(icon1);
        btnVerAlist4->setIconSize(QSize(25, 25));
        btnVerAlist4->setFlat(true);
        lblMostrarFabricando = new QLabel(centralwidget);
        lblMostrarFabricando->setObjectName("lblMostrarFabricando");
        lblMostrarFabricando->setGeometry(QRect(190, 190, 191, 20));
        btnColaDeAlistadores = new QPushButton(centralwidget);
        btnColaDeAlistadores->setObjectName("btnColaDeAlistadores");
        btnColaDeAlistadores->setGeometry(QRect(670, 280, 71, 41));
        btnColaDeAlistadores->setFont(font);
        btnColaDeAlistadores->setCursor(QCursor(Qt::PointingHandCursor));
        btnColaDeAlistadores->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 74, 108);\n"
"font: 700 9pt \"Segoe UI\";\n"
"color: white"));
        MainWindow->setCentralWidget(centralwidget);
        lineV08->raise();
        lineV07->raise();
        lblcliente1->raise();
        lineV01->raise();
        lineH04->raise();
        lineH01->raise();
        lineH02->raise();
        lineH03->raise();
        lineH05->raise();
        lineH06->raise();
        lineV02->raise();
        lineH07->raise();
        lineH08->raise();
        lineH10->raise();
        lineH11->raise();
        btnColaPedidos->raise();
        btnColaFabricaciones1->raise();
        btnColaFabricaciones3->raise();
        lblFabrica3->raise();
        btnColaFabricaciones4Com->raise();
        lblcliente2->raise();
        lblcliente3->raise();
        lblcliente4->raise();
        lblFabrica1->raise();
        lblFabrica2->raise();
        lblFabrica4Com->raise();
        lineH12->raise();
        lineV03->raise();
        lineH13->raise();
        lblImgListos->raise();
        btnDetenerFab01->raise();
        btnVerFab01->raise();
        btnVerFab02->raise();
        btnDetenerFab02->raise();
        btnVerFab04Com->raise();
        btnDetenerFab04Com->raise();
        btnVerFab03->raise();
        btnDetenerFab03->raise();
        btnDetenerBalanceador->raise();
        lineH09->raise();
        lineV04->raise();
        lineH15->raise();
        lineV05->raise();
        lineH14->raise();
        btnVerBalanceador->raise();
        lblAlistadores->raise();
        lineH16->raise();
        lblAlistador2->raise();
        btnDetenerAlist2->raise();
        lblAlistador3->raise();
        btnDetenerAlist3->raise();
        btnDetenerAlist1->raise();
        lblAlistador1->raise();
        btnColaDeAlisto->raise();
        lblAlmacen->raise();
        lineV06->raise();
        lblBalanceador->raise();
        lblNum1Alistador->raise();
        lblNum2Alistador->raise();
        lblNum3Alistador->raise();
        lineH17->raise();
        tblBodega->raise();
        btnColaAlistados->raise();
        lblCaja->raise();
        btnDetenerAlistados->raise();
        btnVerAlistados->raise();
        btnColaPorFacturar->raise();
        lblCajaRegistradora->raise();
        btnVerFacturacion->raise();
        btnDetenerFacturacion->raise();
        lblPedidoFinal->raise();
        btnVerLaFactura->raise();
        btnDetenerAlist4->raise();
        lblNum6Alistador->raise();
        btnDetenerAlist5->raise();
        lblAlistador4->raise();
        lblAlistador6->raise();
        lblNum4Alistador->raise();
        btnDetenerAlist6->raise();
        lblNum5Alistador->raise();
        lblAlistador5->raise();
        btnVerAlist1->raise();
        btnVerAlist2->raise();
        btnVerAlist3->raise();
        btnVerAlist6->raise();
        btnVerAlist5->raise();
        btnVerAlist4->raise();
        lblMostrarFabricando->raise();
        btnColaFabricaciones2->raise();
        btnColaDeAlistadores->raise();
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        lblcliente1->setText(QString());
        lblBalanceador->setText(QString());
#if QT_CONFIG(tooltip)
        btnColaPedidos->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Pedidos</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        btnColaPedidos->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Pedidos</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        btnColaPedidos->setText(QCoreApplication::translate("MainWindow", "Cola de \n"
"Pedidos", nullptr));
#if QT_CONFIG(tooltip)
        btnColaFabricaciones2->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Pedidos</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        btnColaFabricaciones2->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Pedidos</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        btnColaFabricaciones2->setText(QCoreApplication::translate("MainWindow", "Cola de \n"
"Fabricaciones B", nullptr));
#if QT_CONFIG(tooltip)
        btnColaFabricaciones1->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Pedidos</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        btnColaFabricaciones1->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Pedidos</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        btnColaFabricaciones1->setText(QCoreApplication::translate("MainWindow", "Cola de \n"
"Fabricaciones A", nullptr));
#if QT_CONFIG(tooltip)
        btnColaFabricaciones3->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Pedidos</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        btnColaFabricaciones3->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Pedidos</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        btnColaFabricaciones3->setText(QCoreApplication::translate("MainWindow", "Cola de \n"
"Fabricaciones C ", nullptr));
        lblFabrica3->setText(QString());
#if QT_CONFIG(tooltip)
        btnColaFabricaciones4Com->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Pedidos</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        btnColaFabricaciones4Com->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Pedidos</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        btnColaFabricaciones4Com->setText(QCoreApplication::translate("MainWindow", "Cola de \n"
"Fabricaciones *", nullptr));
        lblcliente2->setText(QString());
        lblcliente3->setText(QString());
        lblcliente4->setText(QString());
        lblFabrica1->setText(QString());
        lblFabrica2->setText(QString());
        lblFabrica4Com->setText(QString());
        lblImgListos->setText(QString());
        btnDetenerFab01->setText(QString());
        btnVerFab01->setText(QString());
        btnVerFab02->setText(QString());
        btnDetenerFab02->setText(QString());
        btnVerFab04Com->setText(QString());
        btnDetenerFab04Com->setText(QString());
        btnVerFab03->setText(QString());
        btnDetenerFab03->setText(QString());
        btnDetenerBalanceador->setText(QString());
#if QT_CONFIG(tooltip)
        btnColaDeAlisto->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Pedidos</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        btnColaDeAlisto->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Pedidos</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        btnColaDeAlisto->setText(QCoreApplication::translate("MainWindow", "Cola de \n"
"Alisto", nullptr));
        btnVerBalanceador->setText(QString());
        lblAlistadores->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = tblBodega->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "A", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tblBodega->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tblBodega->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tblBodega->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "D", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tblBodega->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "E", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tblBodega->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "F", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tblBodega->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "G", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tblBodega->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "H", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tblBodega->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("MainWindow", "I", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tblBodega->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("MainWindow", "J", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tblBodega->horizontalHeaderItem(10);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("MainWindow", "K", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tblBodega->horizontalHeaderItem(11);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("MainWindow", "L", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tblBodega->horizontalHeaderItem(12);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("MainWindow", "M", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tblBodega->horizontalHeaderItem(13);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("MainWindow", "N", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tblBodega->horizontalHeaderItem(14);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("MainWindow", "\303\221", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = tblBodega->horizontalHeaderItem(15);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("MainWindow", "O", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = tblBodega->horizontalHeaderItem(16);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("MainWindow", "P", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = tblBodega->horizontalHeaderItem(17);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("MainWindow", "Q", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = tblBodega->horizontalHeaderItem(18);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("MainWindow", "R", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = tblBodega->horizontalHeaderItem(19);
        ___qtablewidgetitem19->setText(QCoreApplication::translate("MainWindow", "S", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = tblBodega->horizontalHeaderItem(20);
        ___qtablewidgetitem20->setText(QCoreApplication::translate("MainWindow", "T", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = tblBodega->horizontalHeaderItem(21);
        ___qtablewidgetitem21->setText(QCoreApplication::translate("MainWindow", "U", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = tblBodega->horizontalHeaderItem(22);
        ___qtablewidgetitem22->setText(QCoreApplication::translate("MainWindow", "V", nullptr));
        QTableWidgetItem *___qtablewidgetitem23 = tblBodega->horizontalHeaderItem(23);
        ___qtablewidgetitem23->setText(QCoreApplication::translate("MainWindow", "W", nullptr));
        QTableWidgetItem *___qtablewidgetitem24 = tblBodega->horizontalHeaderItem(24);
        ___qtablewidgetitem24->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        QTableWidgetItem *___qtablewidgetitem25 = tblBodega->horizontalHeaderItem(25);
        ___qtablewidgetitem25->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        QTableWidgetItem *___qtablewidgetitem26 = tblBodega->horizontalHeaderItem(26);
        ___qtablewidgetitem26->setText(QCoreApplication::translate("MainWindow", "Z", nullptr));
        lblAlistador2->setText(QString());
        btnDetenerAlist2->setText(QString());
        lblAlistador3->setText(QString());
        btnDetenerAlist3->setText(QString());
        btnDetenerAlist1->setText(QString());
        lblAlistador1->setText(QString());
        lblAlmacen->setText(QString());
        lblNum1Alistador->setText(QCoreApplication::translate("MainWindow", "1.", nullptr));
        lblNum2Alistador->setText(QCoreApplication::translate("MainWindow", "2.", nullptr));
        lblNum3Alistador->setText(QCoreApplication::translate("MainWindow", "3.", nullptr));
#if QT_CONFIG(tooltip)
        btnColaAlistados->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Pedidos</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        btnColaAlistados->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Pedidos</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        btnColaAlistados->setText(QCoreApplication::translate("MainWindow", "Cola \n"
"Alistados", nullptr));
        lblCaja->setText(QString());
        btnDetenerAlistados->setText(QString());
        btnVerAlistados->setText(QString());
#if QT_CONFIG(tooltip)
        btnColaPorFacturar->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Pedidos</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        btnColaPorFacturar->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Pedidos</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        btnColaPorFacturar->setText(QCoreApplication::translate("MainWindow", "Cola por \n"
"Facturar", nullptr));
        lblCajaRegistradora->setText(QString());
        btnVerFacturacion->setText(QString());
        btnDetenerFacturacion->setText(QString());
        lblPedidoFinal->setText(QString());
        btnVerLaFactura->setText(QString());
        btnDetenerAlist4->setText(QString());
        lblNum6Alistador->setText(QCoreApplication::translate("MainWindow", "6.", nullptr));
        btnDetenerAlist5->setText(QString());
        lblAlistador4->setText(QString());
        lblAlistador6->setText(QString());
        lblNum4Alistador->setText(QCoreApplication::translate("MainWindow", "4.", nullptr));
        btnDetenerAlist6->setText(QString());
        lblNum5Alistador->setText(QCoreApplication::translate("MainWindow", "5.", nullptr));
        lblAlistador5->setText(QString());
        btnVerAlist1->setText(QString());
        btnVerAlist2->setText(QString());
        btnVerAlist3->setText(QString());
        btnVerAlist6->setText(QString());
        btnVerAlist5->setText(QString());
        btnVerAlist4->setText(QString());
        lblMostrarFabricando->setText(QCoreApplication::translate("MainWindow", "Fabricacion", nullptr));
#if QT_CONFIG(tooltip)
        btnColaDeAlistadores->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Pedidos</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        btnColaDeAlistadores->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Pedidos</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        btnColaDeAlistadores->setText(QCoreApplication::translate("MainWindow", "Cola de \n"
"Alistadores", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
