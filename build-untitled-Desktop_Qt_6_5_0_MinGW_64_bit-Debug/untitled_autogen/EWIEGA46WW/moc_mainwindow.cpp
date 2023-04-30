/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../untitled/mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSAlistadorENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSAlistadorENDCLASS = QtMocHelpers::stringData(
    "Alistador",
    "finalizado",
    "",
    "Alistador*",
    "alistador",
    "procesarArticuloAlist",
    "Queue<Alistador*>",
    "_colaAlistadores",
    "_ubicacion",
    "ArticuloPedido*",
    "_articulo"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSAlistadorENDCLASS_t {
    uint offsetsAndSizes[22];
    char stringdata0[10];
    char stringdata1[11];
    char stringdata2[1];
    char stringdata3[11];
    char stringdata4[10];
    char stringdata5[22];
    char stringdata6[18];
    char stringdata7[17];
    char stringdata8[11];
    char stringdata9[16];
    char stringdata10[10];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSAlistadorENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSAlistadorENDCLASS_t qt_meta_stringdata_CLASSAlistadorENDCLASS = {
    {
        QT_MOC_LITERAL(0, 9),  // "Alistador"
        QT_MOC_LITERAL(10, 10),  // "finalizado"
        QT_MOC_LITERAL(21, 0),  // ""
        QT_MOC_LITERAL(22, 10),  // "Alistador*"
        QT_MOC_LITERAL(33, 9),  // "alistador"
        QT_MOC_LITERAL(43, 21),  // "procesarArticuloAlist"
        QT_MOC_LITERAL(65, 17),  // "Queue<Alistador*>"
        QT_MOC_LITERAL(83, 16),  // "_colaAlistadores"
        QT_MOC_LITERAL(100, 10),  // "_ubicacion"
        QT_MOC_LITERAL(111, 15),  // "ArticuloPedido*"
        QT_MOC_LITERAL(127, 9)   // "_articulo"
    },
    "Alistador",
    "finalizado",
    "",
    "Alistador*",
    "alistador",
    "procesarArticuloAlist",
    "Queue<Alistador*>",
    "_colaAlistadores",
    "_ubicacion",
    "ArticuloPedido*",
    "_articulo"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSAlistadorENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   26,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    3,   29,    2, 0x0a,    3 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6, QMetaType::QString, 0x80000000 | 9,    7,    8,   10,

       0        // eod
};

Q_CONSTINIT const QMetaObject Alistador::staticMetaObject = { {
    QMetaObject::SuperData::link<QThread::staticMetaObject>(),
    qt_meta_stringdata_CLASSAlistadorENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSAlistadorENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSAlistadorENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Alistador, std::true_type>,
        // method 'finalizado'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Alistador *, std::false_type>,
        // method 'procesarArticuloAlist'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Queue<Alistador*>, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<ArticuloPedido *, std::false_type>
    >,
    nullptr
} };

void Alistador::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Alistador *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->finalizado((*reinterpret_cast< std::add_pointer_t<Alistador*>>(_a[1]))); break;
        case 1: _t->procesarArticuloAlist((*reinterpret_cast< std::add_pointer_t<Queue<Alistador*>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<ArticuloPedido*>>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Alistador* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Alistador::*)(Alistador * );
            if (_t _q_method = &Alistador::finalizado; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *Alistador::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Alistador::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSAlistadorENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int Alistador::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void Alistador::finalizado(Alistador * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSBodegaENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSBodegaENDCLASS = QtMocHelpers::stringData(
    "Bodega",
    "procesarArticuloBodega",
    "",
    "Queue<Alistador*>",
    "colaAlistadores",
    "Alistador*",
    "alistDisp",
    "ubicacion",
    "ArticuloPedido*",
    "articulo",
    "alistadorLiberado",
    "alistador"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSBodegaENDCLASS_t {
    uint offsetsAndSizes[24];
    char stringdata0[7];
    char stringdata1[23];
    char stringdata2[1];
    char stringdata3[18];
    char stringdata4[16];
    char stringdata5[11];
    char stringdata6[10];
    char stringdata7[10];
    char stringdata8[16];
    char stringdata9[9];
    char stringdata10[18];
    char stringdata11[10];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSBodegaENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSBodegaENDCLASS_t qt_meta_stringdata_CLASSBodegaENDCLASS = {
    {
        QT_MOC_LITERAL(0, 6),  // "Bodega"
        QT_MOC_LITERAL(7, 22),  // "procesarArticuloBodega"
        QT_MOC_LITERAL(30, 0),  // ""
        QT_MOC_LITERAL(31, 17),  // "Queue<Alistador*>"
        QT_MOC_LITERAL(49, 15),  // "colaAlistadores"
        QT_MOC_LITERAL(65, 10),  // "Alistador*"
        QT_MOC_LITERAL(76, 9),  // "alistDisp"
        QT_MOC_LITERAL(86, 9),  // "ubicacion"
        QT_MOC_LITERAL(96, 15),  // "ArticuloPedido*"
        QT_MOC_LITERAL(112, 8),  // "articulo"
        QT_MOC_LITERAL(121, 17),  // "alistadorLiberado"
        QT_MOC_LITERAL(139, 9)   // "alistador"
    },
    "Bodega",
    "procesarArticuloBodega",
    "",
    "Queue<Alistador*>",
    "colaAlistadores",
    "Alistador*",
    "alistDisp",
    "ubicacion",
    "ArticuloPedido*",
    "articulo",
    "alistadorLiberado",
    "alistador"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSBodegaENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    4,   26,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      10,    1,   35,    2, 0x0a,    6 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5, QMetaType::QString, 0x80000000 | 8,    4,    6,    7,    9,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,   11,

       0        // eod
};

Q_CONSTINIT const QMetaObject Bodega::staticMetaObject = { {
    QMetaObject::SuperData::link<QThread::staticMetaObject>(),
    qt_meta_stringdata_CLASSBodegaENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSBodegaENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSBodegaENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Bodega, std::true_type>,
        // method 'procesarArticuloBodega'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Queue<Alistador*>, std::false_type>,
        QtPrivate::TypeAndForceComplete<Alistador *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<ArticuloPedido *, std::false_type>,
        // method 'alistadorLiberado'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Alistador *, std::false_type>
    >,
    nullptr
} };

void Bodega::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Bodega *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->procesarArticuloBodega((*reinterpret_cast< std::add_pointer_t<Queue<Alistador*>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<Alistador*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<ArticuloPedido*>>(_a[4]))); break;
        case 1: _t->alistadorLiberado((*reinterpret_cast< std::add_pointer_t<Alistador*>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Alistador* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Alistador* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Bodega::*)(Queue<Alistador*> , Alistador * , const QString & , ArticuloPedido * );
            if (_t _q_method = &Bodega::procesarArticuloBodega; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *Bodega::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Bodega::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSBodegaENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int Bodega::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void Bodega::procesarArticuloBodega(Queue<Alistador*> _t1, Alistador * _t2, const QString & _t3, ArticuloPedido * _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "on_btnColaPedidos_clicked",
    "",
    "on_btnColaFabricaciones1_clicked",
    "on_btnColaFabricaciones2_clicked",
    "on_btnColaFabricaciones3_clicked",
    "on_btnColaFabricaciones4Com_clicked",
    "on_btnColaDeAlisto_clicked",
    "on_btnColaAlistados_clicked",
    "on_btnColaPorFacturar_clicked",
    "on_btnDetenerBalanceador_clicked",
    "setLabelFabricacion",
    "QLabel*",
    "label"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[28];
    char stringdata0[11];
    char stringdata1[26];
    char stringdata2[1];
    char stringdata3[33];
    char stringdata4[33];
    char stringdata5[33];
    char stringdata6[36];
    char stringdata7[27];
    char stringdata8[28];
    char stringdata9[30];
    char stringdata10[33];
    char stringdata11[20];
    char stringdata12[8];
    char stringdata13[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 25),  // "on_btnColaPedidos_clicked"
        QT_MOC_LITERAL(37, 0),  // ""
        QT_MOC_LITERAL(38, 32),  // "on_btnColaFabricaciones1_clicked"
        QT_MOC_LITERAL(71, 32),  // "on_btnColaFabricaciones2_clicked"
        QT_MOC_LITERAL(104, 32),  // "on_btnColaFabricaciones3_clicked"
        QT_MOC_LITERAL(137, 35),  // "on_btnColaFabricaciones4Com_c..."
        QT_MOC_LITERAL(173, 26),  // "on_btnColaDeAlisto_clicked"
        QT_MOC_LITERAL(200, 27),  // "on_btnColaAlistados_clicked"
        QT_MOC_LITERAL(228, 29),  // "on_btnColaPorFacturar_clicked"
        QT_MOC_LITERAL(258, 32),  // "on_btnDetenerBalanceador_clicked"
        QT_MOC_LITERAL(291, 19),  // "setLabelFabricacion"
        QT_MOC_LITERAL(311, 7),  // "QLabel*"
        QT_MOC_LITERAL(319, 5)   // "label"
    },
    "MainWindow",
    "on_btnColaPedidos_clicked",
    "",
    "on_btnColaFabricaciones1_clicked",
    "on_btnColaFabricaciones2_clicked",
    "on_btnColaFabricaciones3_clicked",
    "on_btnColaFabricaciones4Com_clicked",
    "on_btnColaDeAlisto_clicked",
    "on_btnColaAlistados_clicked",
    "on_btnColaPorFacturar_clicked",
    "on_btnDetenerBalanceador_clicked",
    "setLabelFabricacion",
    "QLabel*",
    "label"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   74,    2, 0x08,    1 /* Private */,
       3,    0,   75,    2, 0x08,    2 /* Private */,
       4,    0,   76,    2, 0x08,    3 /* Private */,
       5,    0,   77,    2, 0x08,    4 /* Private */,
       6,    0,   78,    2, 0x08,    5 /* Private */,
       7,    0,   79,    2, 0x08,    6 /* Private */,
       8,    0,   80,    2, 0x08,    7 /* Private */,
       9,    0,   81,    2, 0x08,    8 /* Private */,
      10,    0,   82,    2, 0x08,    9 /* Private */,
      11,    1,   83,    2, 0x08,   10 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   13,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'on_btnColaPedidos_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnColaFabricaciones1_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnColaFabricaciones2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnColaFabricaciones3_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnColaFabricaciones4Com_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnColaDeAlisto_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnColaAlistados_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnColaPorFacturar_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnDetenerBalanceador_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setLabelFabricacion'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QLabel *, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_btnColaPedidos_clicked(); break;
        case 1: _t->on_btnColaFabricaciones1_clicked(); break;
        case 2: _t->on_btnColaFabricaciones2_clicked(); break;
        case 3: _t->on_btnColaFabricaciones3_clicked(); break;
        case 4: _t->on_btnColaFabricaciones4Com_clicked(); break;
        case 5: _t->on_btnColaDeAlisto_clicked(); break;
        case 6: _t->on_btnColaAlistados_clicked(); break;
        case 7: _t->on_btnColaPorFacturar_clicked(); break;
        case 8: _t->on_btnDetenerBalanceador_clicked(); break;
        case 9: _t->setLabelFabricacion((*reinterpret_cast< std::add_pointer_t<QLabel*>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QLabel* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
