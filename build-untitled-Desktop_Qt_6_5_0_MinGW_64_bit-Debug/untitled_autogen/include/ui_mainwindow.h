/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
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
    QPushButton *btnDetener01;
    QPushButton *btnVer01;
    QPushButton *btnVer02;
    QPushButton *btnDetener02;
    QPushButton *btnVer04Com;
    QPushButton *btnDetener04Com;
    QPushButton *btnVer03;
    QPushButton *btnDetener03;
    QPushButton *btnDetener05;
    QFrame *lineH09;
    QFrame *lineV04;
    QFrame *lineH15;
    QFrame *lineV05;
    QPushButton *btnColaDeAlisto;
    QFrame *lineH14;
    QPushButton *btnVer05;
    QLabel *lblAlistadores;
    QFrame *lineH16;
    QPushButton *btnDetener06;
    QPushButton *btnVer06;
    QTableWidget *tableWidget;
    QLabel *lblAlistador2;
    QPushButton *btnDetener07;
    QLabel *lblAlistador3;
    QPushButton *btnDetener08;
    QPushButton *btnDetener09;
    QLabel *lblAlistador1;
    QLabel *lblAlmacen;
    QFrame *lineV06;
    QLabel *lblNum1Alistador;
    QLabel *lblNum2Alistador;
    QLabel *lblNum3Alistador;
    QFrame *lineH17;
    QPushButton *btnColaAlistados;
    QLabel *lblCaja;
    QPushButton *btnDetener10;
    QPushButton *btnVer07;
    QFrame *lineV07;
    QPushButton *btnColaPorFacturar;
    QLabel *lblCajaRegistradora;
    QPushButton *btnVer08;
    QPushButton *btnDetener11;
    QFrame *lineV08;
    QLabel *lblPedidoFinal;
    QPushButton *btnVer09;
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
        lineH07->setGeometry(QRect(630, 50, 41, 21));
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
        btnColaFabricaciones2->setGeometry(QRect(440, 50, 91, 41));
        btnColaFabricaciones2->setFont(font);
        btnColaFabricaciones2->setCursor(QCursor(Qt::PointingHandCursor));
        btnColaFabricaciones2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 74, 108);\n"
"font: 700 9pt \"Segoe UI\";\n"
"color: white"));
        btnColaFabricaciones1 = new QPushButton(centralwidget);
        btnColaFabricaciones1->setObjectName("btnColaFabricaciones1");
        btnColaFabricaciones1->setGeometry(QRect(440, 130, 91, 41));
        btnColaFabricaciones1->setFont(font);
        btnColaFabricaciones1->setCursor(QCursor(Qt::PointingHandCursor));
        btnColaFabricaciones1->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 74, 108);\n"
"font: 700 9pt \"Segoe UI\";\n"
"color: white"));
        btnColaFabricaciones3 = new QPushButton(centralwidget);
        btnColaFabricaciones3->setObjectName("btnColaFabricaciones3");
        btnColaFabricaciones3->setGeometry(QRect(290, 130, 91, 41));
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
        btnColaFabricaciones4Com->setGeometry(QRect(290, 50, 91, 41));
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
        lblFabrica1->setGeometry(QRect(540, 50, 51, 41));
        lblFabrica1->setPixmap(QPixmap(QString::fromUtf8("../Imagenes/industria.png")));
        lblFabrica1->setScaledContents(true);
        lblFabrica2 = new QLabel(centralwidget);
        lblFabrica2->setObjectName("lblFabrica2");
        lblFabrica2->setGeometry(QRect(540, 130, 51, 41));
        lblFabrica2->setPixmap(QPixmap(QString::fromUtf8("../Imagenes/industria.png")));
        lblFabrica2->setScaledContents(true);
        lblFabrica4Com = new QLabel(centralwidget);
        lblFabrica4Com->setObjectName("lblFabrica4Com");
        lblFabrica4Com->setGeometry(QRect(230, 50, 51, 41));
        lblFabrica4Com->setPixmap(QPixmap(QString::fromUtf8("../Imagenes/factory_icon_136644.png")));
        lblFabrica4Com->setScaledContents(true);
        lineH12 = new QFrame(centralwidget);
        lineH12->setObjectName("lineH12");
        lineH12->setGeometry(QRect(630, 150, 41, 21));
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
        btnDetener01 = new QPushButton(centralwidget);
        btnDetener01->setObjectName("btnDetener01");
        btnDetener01->setGeometry(QRect(600, 50, 31, 21));
        btnDetener01->setCursor(QCursor(Qt::PointingHandCursor));
        btnDetener01->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"font: 700 9pt \"Segoe UI\";\n"
"color: white;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../Imagenes/semaforos.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnDetener01->setIcon(icon);
        btnDetener01->setIconSize(QSize(20, 20));
        btnDetener01->setFlat(true);
        btnVer01 = new QPushButton(centralwidget);
        btnVer01->setObjectName("btnVer01");
        btnVer01->setGeometry(QRect(600, 70, 31, 21));
        btnVer01->setCursor(QCursor(Qt::PointingHandCursor));
        btnVer01->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"font: 700 9pt \"Segoe UI\";\n"
"color: white;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../Imagenes/vision.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnVer01->setIcon(icon1);
        btnVer01->setIconSize(QSize(25, 25));
        btnVer01->setFlat(true);
        btnVer02 = new QPushButton(centralwidget);
        btnVer02->setObjectName("btnVer02");
        btnVer02->setGeometry(QRect(600, 150, 31, 21));
        btnVer02->setCursor(QCursor(Qt::PointingHandCursor));
        btnVer02->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"font: 700 9pt \"Segoe UI\";\n"
"color: white;"));
        btnVer02->setIcon(icon1);
        btnVer02->setIconSize(QSize(25, 25));
        btnVer02->setFlat(true);
        btnDetener02 = new QPushButton(centralwidget);
        btnDetener02->setObjectName("btnDetener02");
        btnDetener02->setGeometry(QRect(600, 130, 31, 21));
        btnDetener02->setCursor(QCursor(Qt::PointingHandCursor));
        btnDetener02->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"font: 700 9pt \"Segoe UI\";\n"
"color: white;"));
        btnDetener02->setIcon(icon);
        btnDetener02->setIconSize(QSize(20, 20));
        btnDetener02->setFlat(true);
        btnVer04Com = new QPushButton(centralwidget);
        btnVer04Com->setObjectName("btnVer04Com");
        btnVer04Com->setGeometry(QRect(190, 70, 31, 21));
        btnVer04Com->setCursor(QCursor(Qt::PointingHandCursor));
        btnVer04Com->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"font: 700 9pt \"Segoe UI\";\n"
"color: white;"));
        btnVer04Com->setIcon(icon1);
        btnVer04Com->setIconSize(QSize(25, 25));
        btnVer04Com->setFlat(true);
        btnDetener04Com = new QPushButton(centralwidget);
        btnDetener04Com->setObjectName("btnDetener04Com");
        btnDetener04Com->setGeometry(QRect(190, 50, 31, 21));
        btnDetener04Com->setCursor(QCursor(Qt::PointingHandCursor));
        btnDetener04Com->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"font: 700 9pt \"Segoe UI\";\n"
"color: white;"));
        btnDetener04Com->setIcon(icon);
        btnDetener04Com->setIconSize(QSize(20, 20));
        btnDetener04Com->setFlat(true);
        btnVer03 = new QPushButton(centralwidget);
        btnVer03->setObjectName("btnVer03");
        btnVer03->setGeometry(QRect(190, 150, 31, 21));
        btnVer03->setCursor(QCursor(Qt::PointingHandCursor));
        btnVer03->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"font: 700 9pt \"Segoe UI\";\n"
"color: white;"));
        btnVer03->setIcon(icon1);
        btnVer03->setIconSize(QSize(25, 25));
        btnVer03->setFlat(true);
        btnDetener03 = new QPushButton(centralwidget);
        btnDetener03->setObjectName("btnDetener03");
        btnDetener03->setGeometry(QRect(190, 130, 31, 21));
        btnDetener03->setCursor(QCursor(Qt::PointingHandCursor));
        btnDetener03->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"font: 700 9pt \"Segoe UI\";\n"
"color: white;"));
        btnDetener03->setIcon(icon);
        btnDetener03->setIconSize(QSize(20, 20));
        btnDetener03->setFlat(true);
        btnDetener05 = new QPushButton(centralwidget);
        btnDetener05->setObjectName("btnDetener05");
        btnDetener05->setGeometry(QRect(370, 320, 31, 20));
        btnDetener05->setCursor(QCursor(Qt::PointingHandCursor));
        btnDetener05->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"font: 700 9pt \"Segoe UI\";\n"
"color: white;"));
        btnDetener05->setIcon(icon);
        btnDetener05->setIconSize(QSize(20, 20));
        btnDetener05->setFlat(true);
        lineH09 = new QFrame(centralwidget);
        lineH09->setObjectName("lineH09");
        lineH09->setGeometry(QRect(410, 60, 31, 21));
        lineH09->setLineWidth(2);
        lineH09->setMidLineWidth(1);
        lineH09->setFrameShape(QFrame::HLine);
        lineH09->setFrameShadow(QFrame::Sunken);
        lineV04 = new QFrame(centralwidget);
        lineV04->setObjectName("lineV04");
        lineV04->setGeometry(QRect(720, 130, 20, 121));
        lineV04->setLineWidth(2);
        lineV04->setMidLineWidth(1);
        lineV04->setFrameShape(QFrame::VLine);
        lineV04->setFrameShadow(QFrame::Sunken);
        lineH15 = new QFrame(centralwidget);
        lineH15->setObjectName("lineH15");
        lineH15->setGeometry(QRect(490, 240, 241, 21));
        lineH15->setLineWidth(2);
        lineH15->setMidLineWidth(1);
        lineH15->setFrameShape(QFrame::HLine);
        lineH15->setFrameShadow(QFrame::Sunken);
        lineV05 = new QFrame(centralwidget);
        lineV05->setObjectName("lineV05");
        lineV05->setGeometry(QRect(480, 250, 20, 271));
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
        btnVer05 = new QPushButton(centralwidget);
        btnVer05->setObjectName("btnVer05");
        btnVer05->setGeometry(QRect(370, 300, 31, 21));
        btnVer05->setCursor(QCursor(Qt::PointingHandCursor));
        btnVer05->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"font: 700 9pt \"Segoe UI\";\n"
"color: white;"));
        btnVer05->setIcon(icon1);
        btnVer05->setIconSize(QSize(25, 25));
        btnVer05->setFlat(true);
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
        btnDetener06 = new QPushButton(centralwidget);
        btnDetener06->setObjectName("btnDetener06");
        btnDetener06->setGeometry(QRect(600, 480, 31, 21));
        btnDetener06->setCursor(QCursor(Qt::PointingHandCursor));
        btnDetener06->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"font: 700 9pt \"Segoe UI\";\n"
"color: white;"));
        btnDetener06->setIcon(icon);
        btnDetener06->setIconSize(QSize(20, 20));
        btnDetener06->setFlat(true);
        btnVer06 = new QPushButton(centralwidget);
        btnVer06->setObjectName("btnVer06");
        btnVer06->setGeometry(QRect(600, 460, 31, 21));
        btnVer06->setCursor(QCursor(Qt::PointingHandCursor));
        btnVer06->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"font: 700 9pt \"Segoe UI\";\n"
"color: white;"));
        btnVer06->setIcon(icon1);
        btnVer06->setIconSize(QSize(25, 25));
        btnVer06->setFlat(true);
        tableWidget = new QTableWidget(centralwidget);
        if (tableWidget->columnCount() < 27)
            tableWidget->setColumnCount(27);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(9, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(10, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(11, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(12, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(13, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(14, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(15, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(16, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(17, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(18, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(19, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(20, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(21, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(22, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(23, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(24, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(25, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(26, __qtablewidgetitem26);
        if (tableWidget->rowCount() < 10)
            tableWidget->setRowCount(10);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(660, 340, 471, 401));
        tableWidget->setRowCount(10);
        tableWidget->setColumnCount(27);
        tableWidget->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidget->horizontalHeader()->setDefaultSectionSize(43);
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        lblAlistador2 = new QLabel(centralwidget);
        lblAlistador2->setObjectName("lblAlistador2");
        lblAlistador2->setGeometry(QRect(590, 350, 31, 31));
        lblAlistador2->setPixmap(QPixmap(QString::fromUtf8("../Imagenes/carretilla.png")));
        lblAlistador2->setScaledContents(true);
        btnDetener07 = new QPushButton(centralwidget);
        btnDetener07->setObjectName("btnDetener07");
        btnDetener07->setGeometry(QRect(620, 350, 31, 21));
        btnDetener07->setCursor(QCursor(Qt::PointingHandCursor));
        btnDetener07->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"font: 700 9pt \"Segoe UI\";\n"
"color: white;"));
        btnDetener07->setIcon(icon);
        btnDetener07->setIconSize(QSize(20, 20));
        btnDetener07->setFlat(true);
        lblAlistador3 = new QLabel(centralwidget);
        lblAlistador3->setObjectName("lblAlistador3");
        lblAlistador3->setGeometry(QRect(590, 390, 31, 31));
        lblAlistador3->setPixmap(QPixmap(QString::fromUtf8("../Imagenes/carretilla.png")));
        lblAlistador3->setScaledContents(true);
        btnDetener08 = new QPushButton(centralwidget);
        btnDetener08->setObjectName("btnDetener08");
        btnDetener08->setGeometry(QRect(620, 390, 31, 21));
        btnDetener08->setCursor(QCursor(Qt::PointingHandCursor));
        btnDetener08->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"font: 700 9pt \"Segoe UI\";\n"
"color: white;"));
        btnDetener08->setIcon(icon);
        btnDetener08->setIconSize(QSize(20, 20));
        btnDetener08->setFlat(true);
        btnDetener09 = new QPushButton(centralwidget);
        btnDetener09->setObjectName("btnDetener09");
        btnDetener09->setGeometry(QRect(620, 310, 31, 21));
        btnDetener09->setCursor(QCursor(Qt::PointingHandCursor));
        btnDetener09->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"font: 700 9pt \"Segoe UI\";\n"
"color: white;"));
        btnDetener09->setIcon(icon);
        btnDetener09->setIconSize(QSize(20, 20));
        btnDetener09->setFlat(true);
        lblAlistador1 = new QLabel(centralwidget);
        lblAlistador1->setObjectName("lblAlistador1");
        lblAlistador1->setGeometry(QRect(590, 310, 31, 31));
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
        lblNum1Alistador->setGeometry(QRect(570, 310, 21, 21));
        lblNum1Alistador->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Arial\";\n"
"color: black;"));
        lblNum2Alistador = new QLabel(centralwidget);
        lblNum2Alistador->setObjectName("lblNum2Alistador");
        lblNum2Alistador->setGeometry(QRect(570, 350, 21, 21));
        lblNum2Alistador->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Arial\";\n"
"color: black;"));
        lblNum3Alistador = new QLabel(centralwidget);
        lblNum3Alistador->setObjectName("lblNum3Alistador");
        lblNum3Alistador->setGeometry(QRect(570, 390, 21, 21));
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
        btnDetener10 = new QPushButton(centralwidget);
        btnDetener10->setObjectName("btnDetener10");
        btnDetener10->setGeometry(QRect(1380, 520, 31, 21));
        btnDetener10->setCursor(QCursor(Qt::PointingHandCursor));
        btnDetener10->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"font: 700 9pt \"Segoe UI\";\n"
"color: white;"));
        btnDetener10->setIcon(icon);
        btnDetener10->setIconSize(QSize(20, 20));
        btnDetener10->setFlat(true);
        btnVer07 = new QPushButton(centralwidget);
        btnVer07->setObjectName("btnVer07");
        btnVer07->setGeometry(QRect(1380, 500, 31, 21));
        btnVer07->setCursor(QCursor(Qt::PointingHandCursor));
        btnVer07->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"font: 700 9pt \"Segoe UI\";\n"
"color: white;"));
        btnVer07->setIcon(icon1);
        btnVer07->setIconSize(QSize(25, 25));
        btnVer07->setFlat(true);
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
        btnVer08 = new QPushButton(centralwidget);
        btnVer08->setObjectName("btnVer08");
        btnVer08->setGeometry(QRect(1380, 290, 31, 21));
        btnVer08->setCursor(QCursor(Qt::PointingHandCursor));
        btnVer08->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"font: 700 9pt \"Segoe UI\";\n"
"color: white;"));
        btnVer08->setIcon(icon1);
        btnVer08->setIconSize(QSize(25, 25));
        btnVer08->setFlat(true);
        btnDetener11 = new QPushButton(centralwidget);
        btnDetener11->setObjectName("btnDetener11");
        btnDetener11->setGeometry(QRect(1380, 310, 31, 21));
        btnDetener11->setCursor(QCursor(Qt::PointingHandCursor));
        btnDetener11->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"font: 700 9pt \"Segoe UI\";\n"
"color: white;"));
        btnDetener11->setIcon(icon);
        btnDetener11->setIconSize(QSize(20, 20));
        btnDetener11->setFlat(true);
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
        btnVer09 = new QPushButton(centralwidget);
        btnVer09->setObjectName("btnVer09");
        btnVer09->setGeometry(QRect(1330, 150, 31, 21));
        btnVer09->setCursor(QCursor(Qt::PointingHandCursor));
        btnVer09->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"font: 700 9pt \"Segoe UI\";\n"
"color: white;"));
        btnVer09->setIcon(icon1);
        btnVer09->setIconSize(QSize(25, 25));
        btnVer09->setFlat(true);
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
        btnColaFabricaciones2->raise();
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
        btnDetener01->raise();
        btnVer01->raise();
        btnVer02->raise();
        btnDetener02->raise();
        btnVer04Com->raise();
        btnDetener04Com->raise();
        btnVer03->raise();
        btnDetener03->raise();
        btnDetener05->raise();
        lineH09->raise();
        lineV04->raise();
        lineH15->raise();
        lineV05->raise();
        lineH14->raise();
        btnVer05->raise();
        lblAlistadores->raise();
        lineH16->raise();
        btnDetener06->raise();
        btnVer06->raise();
        lblAlistador2->raise();
        btnDetener07->raise();
        lblAlistador3->raise();
        btnDetener08->raise();
        btnDetener09->raise();
        lblAlistador1->raise();
        btnColaDeAlisto->raise();
        lblAlmacen->raise();
        lineV06->raise();
        lblBalanceador->raise();
        lblNum1Alistador->raise();
        lblNum2Alistador->raise();
        lblNum3Alistador->raise();
        lineH17->raise();
        tableWidget->raise();
        btnColaAlistados->raise();
        lblCaja->raise();
        btnDetener10->raise();
        btnVer07->raise();
        btnColaPorFacturar->raise();
        lblCajaRegistradora->raise();
        btnVer08->raise();
        btnDetener11->raise();
        lblPedidoFinal->raise();
        btnVer09->raise();
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
"Fabricaciones", nullptr));
#if QT_CONFIG(tooltip)
        btnColaFabricaciones1->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Pedidos</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        btnColaFabricaciones1->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Pedidos</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        btnColaFabricaciones1->setText(QCoreApplication::translate("MainWindow", "Cola de \n"
"Fabricaciones", nullptr));
#if QT_CONFIG(tooltip)
        btnColaFabricaciones3->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Pedidos</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        btnColaFabricaciones3->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Pedidos</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        btnColaFabricaciones3->setText(QCoreApplication::translate("MainWindow", "Cola de \n"
"Fabricaciones", nullptr));
        lblFabrica3->setText(QString());
#if QT_CONFIG(tooltip)
        btnColaFabricaciones4Com->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Pedidos</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        btnColaFabricaciones4Com->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Pedidos</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        btnColaFabricaciones4Com->setText(QCoreApplication::translate("MainWindow", "Cola de \n"
"Fabricaciones", nullptr));
        lblcliente2->setText(QString());
        lblcliente3->setText(QString());
        lblcliente4->setText(QString());
        lblFabrica1->setText(QString());
        lblFabrica2->setText(QString());
        lblFabrica4Com->setText(QString());
        lblImgListos->setText(QString());
        btnDetener01->setText(QString());
        btnVer01->setText(QString());
        btnVer02->setText(QString());
        btnDetener02->setText(QString());
        btnVer04Com->setText(QString());
        btnDetener04Com->setText(QString());
        btnVer03->setText(QString());
        btnDetener03->setText(QString());
        btnDetener05->setText(QString());
#if QT_CONFIG(tooltip)
        btnColaDeAlisto->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Pedidos</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        btnColaDeAlisto->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Pedidos</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        btnColaDeAlisto->setText(QCoreApplication::translate("MainWindow", "Cola de \n"
"Alisto", nullptr));
        btnVer05->setText(QString());
        lblAlistadores->setText(QString());
        btnDetener06->setText(QString());
        btnVer06->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "A", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "D", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "E", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "F", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "G", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "H", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("MainWindow", "I", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("MainWindow", "J", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->horizontalHeaderItem(10);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("MainWindow", "K", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->horizontalHeaderItem(11);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("MainWindow", "L", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->horizontalHeaderItem(12);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("MainWindow", "M", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget->horizontalHeaderItem(13);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("MainWindow", "N", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget->horizontalHeaderItem(14);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("MainWindow", "\303\221", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget->horizontalHeaderItem(15);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("MainWindow", "O", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget->horizontalHeaderItem(16);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("MainWindow", "P", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget->horizontalHeaderItem(17);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("MainWindow", "Q", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget->horizontalHeaderItem(18);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("MainWindow", "R", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget->horizontalHeaderItem(19);
        ___qtablewidgetitem19->setText(QCoreApplication::translate("MainWindow", "S", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget->horizontalHeaderItem(20);
        ___qtablewidgetitem20->setText(QCoreApplication::translate("MainWindow", "T", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidget->horizontalHeaderItem(21);
        ___qtablewidgetitem21->setText(QCoreApplication::translate("MainWindow", "U", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidget->horizontalHeaderItem(22);
        ___qtablewidgetitem22->setText(QCoreApplication::translate("MainWindow", "V", nullptr));
        QTableWidgetItem *___qtablewidgetitem23 = tableWidget->horizontalHeaderItem(23);
        ___qtablewidgetitem23->setText(QCoreApplication::translate("MainWindow", "W", nullptr));
        QTableWidgetItem *___qtablewidgetitem24 = tableWidget->horizontalHeaderItem(24);
        ___qtablewidgetitem24->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        QTableWidgetItem *___qtablewidgetitem25 = tableWidget->horizontalHeaderItem(25);
        ___qtablewidgetitem25->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        QTableWidgetItem *___qtablewidgetitem26 = tableWidget->horizontalHeaderItem(26);
        ___qtablewidgetitem26->setText(QCoreApplication::translate("MainWindow", "Z", nullptr));
        lblAlistador2->setText(QString());
        btnDetener07->setText(QString());
        lblAlistador3->setText(QString());
        btnDetener08->setText(QString());
        btnDetener09->setText(QString());
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
        btnDetener10->setText(QString());
        btnVer07->setText(QString());
#if QT_CONFIG(tooltip)
        btnColaPorFacturar->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Pedidos</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        btnColaPorFacturar->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Pedidos</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        btnColaPorFacturar->setText(QCoreApplication::translate("MainWindow", "Cola por \n"
"Facturar", nullptr));
        lblCajaRegistradora->setText(QString());
        btnVer08->setText(QString());
        btnDetener11->setText(QString());
        lblPedidoFinal->setText(QString());
        btnVer09->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
