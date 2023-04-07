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
    QPushButton *btnDetener1;
    QPushButton *btnVer1;
    QPushButton *btnVer2;
    QPushButton *btnDetener2;
    QPushButton *btnVer4Com;
    QPushButton *btnDetener4Com;
    QPushButton *btnVer3;
    QPushButton *btnDetener3;
    QPushButton *btnDetener5;
    QFrame *lineH09;
    QFrame *lineV04;
    QFrame *lineH15;
    QFrame *lineV05;
    QPushButton *btnColaDeAlisto;
    QFrame *lineH14;
    QPushButton *btnVer5;
    QLabel *lblAlistadores;
    QFrame *lineH16;
    QPushButton *btnDetener6;
    QPushButton *btnVer6;
    QTableWidget *tableWidget;
    QLabel *lblAlistador2;
    QPushButton *btnDetener6_2;
    QLabel *lblAlistador3;
    QPushButton *btnDetener6_3;
    QPushButton *btnDetener6_4;
    QLabel *lblAlistador1;
    QLabel *lblAlmacen;
    QFrame *lineV06;
    QLabel *lblNum1Alistador;
    QLabel *lblNum2Alistador;
    QLabel *lblNum3Alistador;
    QFrame *lineH16_2;
    QPushButton *btnColaAlistados;
    QLabel *label;
    QPushButton *btnDetener6_5;
    QPushButton *btnVer6_2;
    QFrame *lineV05_2;
    QPushButton *btnColaAlistados_2;
    QLabel *label_2;
    QPushButton *btnVer6_3;
    QPushButton *btnDetener6_6;
    QFrame *lineV05_3;
    QLabel *label_3;
    QPushButton *btnVer6_4;
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
        btnDetener1 = new QPushButton(centralwidget);
        btnDetener1->setObjectName("btnDetener1");
        btnDetener1->setGeometry(QRect(600, 50, 31, 21));
        btnDetener1->setCursor(QCursor(Qt::PointingHandCursor));
        btnDetener1->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"font: 700 9pt \"Segoe UI\";\n"
"color: white;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../Imagenes/semaforos.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnDetener1->setIcon(icon);
        btnDetener1->setIconSize(QSize(20, 20));
        btnDetener1->setFlat(true);
        btnVer1 = new QPushButton(centralwidget);
        btnVer1->setObjectName("btnVer1");
        btnVer1->setGeometry(QRect(600, 70, 31, 21));
        btnVer1->setCursor(QCursor(Qt::PointingHandCursor));
        btnVer1->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"font: 700 9pt \"Segoe UI\";\n"
"color: white;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../Imagenes/vision.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnVer1->setIcon(icon1);
        btnVer1->setIconSize(QSize(25, 25));
        btnVer1->setFlat(true);
        btnVer2 = new QPushButton(centralwidget);
        btnVer2->setObjectName("btnVer2");
        btnVer2->setGeometry(QRect(600, 150, 31, 21));
        btnVer2->setCursor(QCursor(Qt::PointingHandCursor));
        btnVer2->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"font: 700 9pt \"Segoe UI\";\n"
"color: white;"));
        btnVer2->setIcon(icon1);
        btnVer2->setIconSize(QSize(25, 25));
        btnVer2->setFlat(true);
        btnDetener2 = new QPushButton(centralwidget);
        btnDetener2->setObjectName("btnDetener2");
        btnDetener2->setGeometry(QRect(600, 130, 31, 21));
        btnDetener2->setCursor(QCursor(Qt::PointingHandCursor));
        btnDetener2->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"font: 700 9pt \"Segoe UI\";\n"
"color: white;"));
        btnDetener2->setIcon(icon);
        btnDetener2->setIconSize(QSize(20, 20));
        btnDetener2->setFlat(true);
        btnVer4Com = new QPushButton(centralwidget);
        btnVer4Com->setObjectName("btnVer4Com");
        btnVer4Com->setGeometry(QRect(190, 70, 31, 21));
        btnVer4Com->setCursor(QCursor(Qt::PointingHandCursor));
        btnVer4Com->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"font: 700 9pt \"Segoe UI\";\n"
"color: white;"));
        btnVer4Com->setIcon(icon1);
        btnVer4Com->setIconSize(QSize(25, 25));
        btnVer4Com->setFlat(true);
        btnDetener4Com = new QPushButton(centralwidget);
        btnDetener4Com->setObjectName("btnDetener4Com");
        btnDetener4Com->setGeometry(QRect(190, 50, 31, 21));
        btnDetener4Com->setCursor(QCursor(Qt::PointingHandCursor));
        btnDetener4Com->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"font: 700 9pt \"Segoe UI\";\n"
"color: white;"));
        btnDetener4Com->setIcon(icon);
        btnDetener4Com->setIconSize(QSize(20, 20));
        btnDetener4Com->setFlat(true);
        btnVer3 = new QPushButton(centralwidget);
        btnVer3->setObjectName("btnVer3");
        btnVer3->setGeometry(QRect(190, 150, 31, 21));
        btnVer3->setCursor(QCursor(Qt::PointingHandCursor));
        btnVer3->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"font: 700 9pt \"Segoe UI\";\n"
"color: white;"));
        btnVer3->setIcon(icon1);
        btnVer3->setIconSize(QSize(25, 25));
        btnVer3->setFlat(true);
        btnDetener3 = new QPushButton(centralwidget);
        btnDetener3->setObjectName("btnDetener3");
        btnDetener3->setGeometry(QRect(190, 130, 31, 21));
        btnDetener3->setCursor(QCursor(Qt::PointingHandCursor));
        btnDetener3->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"font: 700 9pt \"Segoe UI\";\n"
"color: white;"));
        btnDetener3->setIcon(icon);
        btnDetener3->setIconSize(QSize(20, 20));
        btnDetener3->setFlat(true);
        btnDetener5 = new QPushButton(centralwidget);
        btnDetener5->setObjectName("btnDetener5");
        btnDetener5->setGeometry(QRect(370, 320, 31, 20));
        btnDetener5->setCursor(QCursor(Qt::PointingHandCursor));
        btnDetener5->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"font: 700 9pt \"Segoe UI\";\n"
"color: white;"));
        btnDetener5->setIcon(icon);
        btnDetener5->setIconSize(QSize(20, 20));
        btnDetener5->setFlat(true);
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
        btnVer5 = new QPushButton(centralwidget);
        btnVer5->setObjectName("btnVer5");
        btnVer5->setGeometry(QRect(370, 300, 31, 21));
        btnVer5->setCursor(QCursor(Qt::PointingHandCursor));
        btnVer5->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"font: 700 9pt \"Segoe UI\";\n"
"color: white;"));
        btnVer5->setIcon(icon1);
        btnVer5->setIconSize(QSize(25, 25));
        btnVer5->setFlat(true);
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
        btnDetener6 = new QPushButton(centralwidget);
        btnDetener6->setObjectName("btnDetener6");
        btnDetener6->setGeometry(QRect(600, 480, 31, 21));
        btnDetener6->setCursor(QCursor(Qt::PointingHandCursor));
        btnDetener6->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"font: 700 9pt \"Segoe UI\";\n"
"color: white;"));
        btnDetener6->setIcon(icon);
        btnDetener6->setIconSize(QSize(20, 20));
        btnDetener6->setFlat(true);
        btnVer6 = new QPushButton(centralwidget);
        btnVer6->setObjectName("btnVer6");
        btnVer6->setGeometry(QRect(600, 460, 31, 21));
        btnVer6->setCursor(QCursor(Qt::PointingHandCursor));
        btnVer6->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"font: 700 9pt \"Segoe UI\";\n"
"color: white;"));
        btnVer6->setIcon(icon1);
        btnVer6->setIconSize(QSize(25, 25));
        btnVer6->setFlat(true);
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
        btnDetener6_2 = new QPushButton(centralwidget);
        btnDetener6_2->setObjectName("btnDetener6_2");
        btnDetener6_2->setGeometry(QRect(620, 350, 31, 21));
        btnDetener6_2->setCursor(QCursor(Qt::PointingHandCursor));
        btnDetener6_2->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"font: 700 9pt \"Segoe UI\";\n"
"color: white;"));
        btnDetener6_2->setIcon(icon);
        btnDetener6_2->setIconSize(QSize(20, 20));
        btnDetener6_2->setFlat(true);
        lblAlistador3 = new QLabel(centralwidget);
        lblAlistador3->setObjectName("lblAlistador3");
        lblAlistador3->setGeometry(QRect(590, 390, 31, 31));
        lblAlistador3->setPixmap(QPixmap(QString::fromUtf8("../Imagenes/carretilla.png")));
        lblAlistador3->setScaledContents(true);
        btnDetener6_3 = new QPushButton(centralwidget);
        btnDetener6_3->setObjectName("btnDetener6_3");
        btnDetener6_3->setGeometry(QRect(620, 390, 31, 21));
        btnDetener6_3->setCursor(QCursor(Qt::PointingHandCursor));
        btnDetener6_3->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"font: 700 9pt \"Segoe UI\";\n"
"color: white;"));
        btnDetener6_3->setIcon(icon);
        btnDetener6_3->setIconSize(QSize(20, 20));
        btnDetener6_3->setFlat(true);
        btnDetener6_4 = new QPushButton(centralwidget);
        btnDetener6_4->setObjectName("btnDetener6_4");
        btnDetener6_4->setGeometry(QRect(620, 310, 31, 21));
        btnDetener6_4->setCursor(QCursor(Qt::PointingHandCursor));
        btnDetener6_4->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"font: 700 9pt \"Segoe UI\";\n"
"color: white;"));
        btnDetener6_4->setIcon(icon);
        btnDetener6_4->setIconSize(QSize(20, 20));
        btnDetener6_4->setFlat(true);
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
        lineH16_2 = new QFrame(centralwidget);
        lineH16_2->setObjectName("lineH16_2");
        lineH16_2->setGeometry(QRect(1120, 510, 101, 21));
        lineH16_2->setLineWidth(2);
        lineH16_2->setMidLineWidth(1);
        lineH16_2->setFrameShape(QFrame::HLine);
        lineH16_2->setFrameShadow(QFrame::Sunken);
        btnColaAlistados = new QPushButton(centralwidget);
        btnColaAlistados->setObjectName("btnColaAlistados");
        btnColaAlistados->setGeometry(QRect(1220, 500, 71, 41));
        btnColaAlistados->setFont(font);
        btnColaAlistados->setCursor(QCursor(Qt::PointingHandCursor));
        btnColaAlistados->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 74, 108);\n"
"font: 700 9pt \"Segoe UI\";\n"
"color: white"));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(1300, 480, 81, 71));
        label->setPixmap(QPixmap(QString::fromUtf8("../Imagenes/caja.png")));
        label->setScaledContents(true);
        btnDetener6_5 = new QPushButton(centralwidget);
        btnDetener6_5->setObjectName("btnDetener6_5");
        btnDetener6_5->setGeometry(QRect(1380, 520, 31, 21));
        btnDetener6_5->setCursor(QCursor(Qt::PointingHandCursor));
        btnDetener6_5->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"font: 700 9pt \"Segoe UI\";\n"
"color: white;"));
        btnDetener6_5->setIcon(icon);
        btnDetener6_5->setIconSize(QSize(20, 20));
        btnDetener6_5->setFlat(true);
        btnVer6_2 = new QPushButton(centralwidget);
        btnVer6_2->setObjectName("btnVer6_2");
        btnVer6_2->setGeometry(QRect(1380, 500, 31, 21));
        btnVer6_2->setCursor(QCursor(Qt::PointingHandCursor));
        btnVer6_2->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"font: 700 9pt \"Segoe UI\";\n"
"color: white;"));
        btnVer6_2->setIcon(icon1);
        btnVer6_2->setIconSize(QSize(25, 25));
        btnVer6_2->setFlat(true);
        lineV05_2 = new QFrame(centralwidget);
        lineV05_2->setObjectName("lineV05_2");
        lineV05_2->setGeometry(QRect(1330, 380, 20, 111));
        lineV05_2->setLineWidth(2);
        lineV05_2->setMidLineWidth(1);
        lineV05_2->setFrameShape(QFrame::VLine);
        lineV05_2->setFrameShadow(QFrame::Sunken);
        btnColaAlistados_2 = new QPushButton(centralwidget);
        btnColaAlistados_2->setObjectName("btnColaAlistados_2");
        btnColaAlistados_2->setGeometry(QRect(1310, 360, 71, 41));
        btnColaAlistados_2->setFont(font);
        btnColaAlistados_2->setCursor(QCursor(Qt::PointingHandCursor));
        btnColaAlistados_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 74, 108);\n"
"font: 700 9pt \"Segoe UI\";\n"
"color: white"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(1310, 290, 71, 61));
        label_2->setPixmap(QPixmap(QString::fromUtf8("../Imagenes/caja-registradora.png")));
        label_2->setScaledContents(true);
        btnVer6_3 = new QPushButton(centralwidget);
        btnVer6_3->setObjectName("btnVer6_3");
        btnVer6_3->setGeometry(QRect(1380, 290, 31, 21));
        btnVer6_3->setCursor(QCursor(Qt::PointingHandCursor));
        btnVer6_3->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"font: 700 9pt \"Segoe UI\";\n"
"color: white;"));
        btnVer6_3->setIcon(icon1);
        btnVer6_3->setIconSize(QSize(25, 25));
        btnVer6_3->setFlat(true);
        btnDetener6_6 = new QPushButton(centralwidget);
        btnDetener6_6->setObjectName("btnDetener6_6");
        btnDetener6_6->setGeometry(QRect(1380, 310, 31, 21));
        btnDetener6_6->setCursor(QCursor(Qt::PointingHandCursor));
        btnDetener6_6->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"font: 700 9pt \"Segoe UI\";\n"
"color: white;"));
        btnDetener6_6->setIcon(icon);
        btnDetener6_6->setIconSize(QSize(20, 20));
        btnDetener6_6->setFlat(true);
        lineV05_3 = new QFrame(centralwidget);
        lineV05_3->setObjectName("lineV05_3");
        lineV05_3->setGeometry(QRect(1330, 190, 20, 111));
        lineV05_3->setLineWidth(2);
        lineV05_3->setMidLineWidth(1);
        lineV05_3->setFrameShape(QFrame::VLine);
        lineV05_3->setFrameShadow(QFrame::Sunken);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(1310, 120, 71, 71));
        label_3->setPixmap(QPixmap(QString::fromUtf8("../Imagenes/simbolo-de-interfaz-de-archivo-del-contorno-de-la-hoja-de-papel-con-la-esquina-superior-derecha-doblada.png")));
        label_3->setScaledContents(true);
        btnVer6_4 = new QPushButton(centralwidget);
        btnVer6_4->setObjectName("btnVer6_4");
        btnVer6_4->setGeometry(QRect(1330, 150, 31, 21));
        btnVer6_4->setCursor(QCursor(Qt::PointingHandCursor));
        btnVer6_4->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"font: 700 9pt \"Segoe UI\";\n"
"color: white;"));
        btnVer6_4->setIcon(icon1);
        btnVer6_4->setIconSize(QSize(25, 25));
        btnVer6_4->setFlat(true);
        MainWindow->setCentralWidget(centralwidget);
        lineV05_3->raise();
        lineV05_2->raise();
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
        btnDetener1->raise();
        btnVer1->raise();
        btnVer2->raise();
        btnDetener2->raise();
        btnVer4Com->raise();
        btnDetener4Com->raise();
        btnVer3->raise();
        btnDetener3->raise();
        btnDetener5->raise();
        lineH09->raise();
        lineV04->raise();
        lineH15->raise();
        lineV05->raise();
        lineH14->raise();
        btnVer5->raise();
        lblAlistadores->raise();
        lineH16->raise();
        btnDetener6->raise();
        btnVer6->raise();
        lblAlistador2->raise();
        btnDetener6_2->raise();
        lblAlistador3->raise();
        btnDetener6_3->raise();
        btnDetener6_4->raise();
        lblAlistador1->raise();
        btnColaDeAlisto->raise();
        lblAlmacen->raise();
        lineV06->raise();
        lblBalanceador->raise();
        lblNum1Alistador->raise();
        lblNum2Alistador->raise();
        lblNum3Alistador->raise();
        lineH16_2->raise();
        tableWidget->raise();
        btnColaAlistados->raise();
        label->raise();
        btnDetener6_5->raise();
        btnVer6_2->raise();
        btnColaAlistados_2->raise();
        label_2->raise();
        btnVer6_3->raise();
        btnDetener6_6->raise();
        label_3->raise();
        btnVer6_4->raise();
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
        btnDetener1->setText(QString());
        btnVer1->setText(QString());
        btnVer2->setText(QString());
        btnDetener2->setText(QString());
        btnVer4Com->setText(QString());
        btnDetener4Com->setText(QString());
        btnVer3->setText(QString());
        btnDetener3->setText(QString());
        btnDetener5->setText(QString());
#if QT_CONFIG(tooltip)
        btnColaDeAlisto->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Pedidos</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        btnColaDeAlisto->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Pedidos</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        btnColaDeAlisto->setText(QCoreApplication::translate("MainWindow", "Cola de \n"
"Alisto", nullptr));
        btnVer5->setText(QString());
        lblAlistadores->setText(QString());
        btnDetener6->setText(QString());
        btnVer6->setText(QString());
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
        btnDetener6_2->setText(QString());
        lblAlistador3->setText(QString());
        btnDetener6_3->setText(QString());
        btnDetener6_4->setText(QString());
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
        label->setText(QString());
        btnDetener6_5->setText(QString());
        btnVer6_2->setText(QString());
#if QT_CONFIG(tooltip)
        btnColaAlistados_2->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Pedidos</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        btnColaAlistados_2->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Pedidos</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        btnColaAlistados_2->setText(QCoreApplication::translate("MainWindow", "Cola por \n"
"Facturar", nullptr));
        label_2->setText(QString());
        btnVer6_3->setText(QString());
        btnDetener6_6->setText(QString());
        label_3->setText(QString());
        btnVer6_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
