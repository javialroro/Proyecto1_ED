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
struct qt_meta_stringdata_CLASSFabricaENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSFabricaENDCLASS = QtMocHelpers::stringData(
    "Fabrica",
    "actualizarLabel",
    "",
    "texto"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSFabricaENDCLASS_t {
    uint offsetsAndSizes[8];
    char stringdata0[8];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSFabricaENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSFabricaENDCLASS_t qt_meta_stringdata_CLASSFabricaENDCLASS = {
    {
        QT_MOC_LITERAL(0, 7),  // "Fabrica"
        QT_MOC_LITERAL(8, 15),  // "actualizarLabel"
        QT_MOC_LITERAL(24, 0),  // ""
        QT_MOC_LITERAL(25, 5)   // "texto"
    },
    "Fabrica",
    "actualizarLabel",
    "",
    "texto"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSFabricaENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   20,    2, 0x06,    1 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

Q_CONSTINIT const QMetaObject Fabrica::staticMetaObject = { {
    QMetaObject::SuperData::link<QThread::staticMetaObject>(),
    qt_meta_stringdata_CLASSFabricaENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSFabricaENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSFabricaENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Fabrica, std::true_type>,
        // method 'actualizarLabel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void Fabrica::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Fabrica *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->actualizarLabel((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Fabrica::*)(const QString & );
            if (_t _q_method = &Fabrica::actualizarLabel; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *Fabrica::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Fabrica::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSFabricaENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int Fabrica::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void Fabrica::actualizarLabel(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
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
    "QString&",
    "_ubicacion",
    "ArticuloPedido*",
    "_articulo",
    "alistadorLiberado"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSAlistadorENDCLASS_t {
    uint offsetsAndSizes[26];
    char stringdata0[10];
    char stringdata1[11];
    char stringdata2[1];
    char stringdata3[11];
    char stringdata4[10];
    char stringdata5[22];
    char stringdata6[18];
    char stringdata7[17];
    char stringdata8[9];
    char stringdata9[11];
    char stringdata10[16];
    char stringdata11[10];
    char stringdata12[18];
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
        QT_MOC_LITERAL(100, 8),  // "QString&"
        QT_MOC_LITERAL(109, 10),  // "_ubicacion"
        QT_MOC_LITERAL(120, 15),  // "ArticuloPedido*"
        QT_MOC_LITERAL(136, 9),  // "_articulo"
        QT_MOC_LITERAL(146, 17)   // "alistadorLiberado"
    },
    "Alistador",
    "finalizado",
    "",
    "Alistador*",
    "alistador",
    "procesarArticuloAlist",
    "Queue<Alistador*>",
    "_colaAlistadores",
    "QString&",
    "_ubicacion",
    "ArticuloPedido*",
    "_articulo",
    "alistadorLiberado"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSAlistadorENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   32,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    3,   35,    2, 0x0a,    3 /* Public */,
      12,    1,   42,    2, 0x0a,    7 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 8, 0x80000000 | 10,    7,    9,   11,
    QMetaType::Void, 0x80000000 | 3,    4,

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
        QtPrivate::TypeAndForceComplete<QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<ArticuloPedido *, std::false_type>,
        // method 'alistadorLiberado'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Alistador *, std::false_type>
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
        case 1: _t->procesarArticuloAlist((*reinterpret_cast< std::add_pointer_t<Queue<Alistador*>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString&>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<ArticuloPedido*>>(_a[3]))); break;
        case 2: _t->alistadorLiberado((*reinterpret_cast< std::add_pointer_t<Alistador*>>(_a[1]))); break;
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
        case 2:
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
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
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
    "QString&",
    "ubicacion",
    "ArticuloPedido*",
    "articulo",
    "alistadorLiberado",
    "Alistador*",
    "alistador",
    "receiveTableWidget",
    "QTableWidget*",
    "tableWidget"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSBodegaENDCLASS_t {
    uint offsetsAndSizes[30];
    char stringdata0[7];
    char stringdata1[23];
    char stringdata2[1];
    char stringdata3[18];
    char stringdata4[16];
    char stringdata5[9];
    char stringdata6[10];
    char stringdata7[16];
    char stringdata8[9];
    char stringdata9[18];
    char stringdata10[11];
    char stringdata11[10];
    char stringdata12[19];
    char stringdata13[14];
    char stringdata14[12];
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
        QT_MOC_LITERAL(65, 8),  // "QString&"
        QT_MOC_LITERAL(74, 9),  // "ubicacion"
        QT_MOC_LITERAL(84, 15),  // "ArticuloPedido*"
        QT_MOC_LITERAL(100, 8),  // "articulo"
        QT_MOC_LITERAL(109, 17),  // "alistadorLiberado"
        QT_MOC_LITERAL(127, 10),  // "Alistador*"
        QT_MOC_LITERAL(138, 9),  // "alistador"
        QT_MOC_LITERAL(148, 18),  // "receiveTableWidget"
        QT_MOC_LITERAL(167, 13),  // "QTableWidget*"
        QT_MOC_LITERAL(181, 11)   // "tableWidget"
    },
    "Bodega",
    "procesarArticuloBodega",
    "",
    "Queue<Alistador*>",
    "colaAlistadores",
    "QString&",
    "ubicacion",
    "ArticuloPedido*",
    "articulo",
    "alistadorLiberado",
    "Alistador*",
    "alistador",
    "receiveTableWidget",
    "QTableWidget*",
    "tableWidget"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSBodegaENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    3,   32,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       9,    1,   39,    2, 0x0a,    5 /* Public */,
      12,    1,   42,    2, 0x0a,    7 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5, 0x80000000 | 7,    4,    6,    8,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 13,   14,

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
        QtPrivate::TypeAndForceComplete<QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<ArticuloPedido *, std::false_type>,
        // method 'alistadorLiberado'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Alistador *, std::false_type>,
        // method 'receiveTableWidget'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTableWidget *, std::false_type>
    >,
    nullptr
} };

void Bodega::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Bodega *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->procesarArticuloBodega((*reinterpret_cast< std::add_pointer_t<Queue<Alistador*>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString&>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<ArticuloPedido*>>(_a[3]))); break;
        case 1: _t->alistadorLiberado((*reinterpret_cast< std::add_pointer_t<Alistador*>>(_a[1]))); break;
        case 2: _t->receiveTableWidget((*reinterpret_cast< std::add_pointer_t<QTableWidget*>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Alistador* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QTableWidget* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Bodega::*)(Queue<Alistador*> , QString & , ArticuloPedido * );
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
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void Bodega::procesarArticuloBodega(Queue<Alistador*> _t1, QString & _t2, ArticuloPedido * _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "tableWidgetSignal",
    "",
    "QTableWidget*",
    "tableWidget",
    "on_btnColaPedidos_clicked",
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
    "label",
    "on_btnDetenerFab04Com_clicked",
    "on_btnDetenerFab03_clicked",
    "on_btnDetenerFab02_clicked",
    "on_btnDetenerFab01_clicked",
    "actualizarTextoLabel",
    "texto",
    "on_btnColaDeAlistadores_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[48];
    char stringdata0[11];
    char stringdata1[18];
    char stringdata2[1];
    char stringdata3[14];
    char stringdata4[12];
    char stringdata5[26];
    char stringdata6[33];
    char stringdata7[33];
    char stringdata8[33];
    char stringdata9[36];
    char stringdata10[27];
    char stringdata11[28];
    char stringdata12[30];
    char stringdata13[33];
    char stringdata14[20];
    char stringdata15[8];
    char stringdata16[6];
    char stringdata17[30];
    char stringdata18[27];
    char stringdata19[27];
    char stringdata20[27];
    char stringdata21[21];
    char stringdata22[6];
    char stringdata23[32];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 17),  // "tableWidgetSignal"
        QT_MOC_LITERAL(29, 0),  // ""
        QT_MOC_LITERAL(30, 13),  // "QTableWidget*"
        QT_MOC_LITERAL(44, 11),  // "tableWidget"
        QT_MOC_LITERAL(56, 25),  // "on_btnColaPedidos_clicked"
        QT_MOC_LITERAL(82, 32),  // "on_btnColaFabricaciones1_clicked"
        QT_MOC_LITERAL(115, 32),  // "on_btnColaFabricaciones2_clicked"
        QT_MOC_LITERAL(148, 32),  // "on_btnColaFabricaciones3_clicked"
        QT_MOC_LITERAL(181, 35),  // "on_btnColaFabricaciones4Com_c..."
        QT_MOC_LITERAL(217, 26),  // "on_btnColaDeAlisto_clicked"
        QT_MOC_LITERAL(244, 27),  // "on_btnColaAlistados_clicked"
        QT_MOC_LITERAL(272, 29),  // "on_btnColaPorFacturar_clicked"
        QT_MOC_LITERAL(302, 32),  // "on_btnDetenerBalanceador_clicked"
        QT_MOC_LITERAL(335, 19),  // "setLabelFabricacion"
        QT_MOC_LITERAL(355, 7),  // "QLabel*"
        QT_MOC_LITERAL(363, 5),  // "label"
        QT_MOC_LITERAL(369, 29),  // "on_btnDetenerFab04Com_clicked"
        QT_MOC_LITERAL(399, 26),  // "on_btnDetenerFab03_clicked"
        QT_MOC_LITERAL(426, 26),  // "on_btnDetenerFab02_clicked"
        QT_MOC_LITERAL(453, 26),  // "on_btnDetenerFab01_clicked"
        QT_MOC_LITERAL(480, 20),  // "actualizarTextoLabel"
        QT_MOC_LITERAL(501, 5),  // "texto"
        QT_MOC_LITERAL(507, 31)   // "on_btnColaDeAlistadores_clicked"
    },
    "MainWindow",
    "tableWidgetSignal",
    "",
    "QTableWidget*",
    "tableWidget",
    "on_btnColaPedidos_clicked",
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
    "label",
    "on_btnDetenerFab04Com_clicked",
    "on_btnDetenerFab03_clicked",
    "on_btnDetenerFab02_clicked",
    "on_btnDetenerFab01_clicked",
    "actualizarTextoLabel",
    "texto",
    "on_btnColaDeAlistadores_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  116,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,  119,    2, 0x08,    3 /* Private */,
       6,    0,  120,    2, 0x08,    4 /* Private */,
       7,    0,  121,    2, 0x08,    5 /* Private */,
       8,    0,  122,    2, 0x08,    6 /* Private */,
       9,    0,  123,    2, 0x08,    7 /* Private */,
      10,    0,  124,    2, 0x08,    8 /* Private */,
      11,    0,  125,    2, 0x08,    9 /* Private */,
      12,    0,  126,    2, 0x08,   10 /* Private */,
      13,    0,  127,    2, 0x08,   11 /* Private */,
      14,    1,  128,    2, 0x08,   12 /* Private */,
      17,    0,  131,    2, 0x08,   14 /* Private */,
      18,    0,  132,    2, 0x08,   15 /* Private */,
      19,    0,  133,    2, 0x08,   16 /* Private */,
      20,    0,  134,    2, 0x08,   17 /* Private */,
      21,    1,  135,    2, 0x08,   18 /* Private */,
      23,    0,  138,    2, 0x08,   20 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

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
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   22,
    QMetaType::Void,

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
        // method 'tableWidgetSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTableWidget *, std::false_type>,
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
        QtPrivate::TypeAndForceComplete<QLabel *, std::false_type>,
        // method 'on_btnDetenerFab04Com_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnDetenerFab03_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnDetenerFab02_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnDetenerFab01_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'actualizarTextoLabel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_btnColaDeAlistadores_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->tableWidgetSignal((*reinterpret_cast< std::add_pointer_t<QTableWidget*>>(_a[1]))); break;
        case 1: _t->on_btnColaPedidos_clicked(); break;
        case 2: _t->on_btnColaFabricaciones1_clicked(); break;
        case 3: _t->on_btnColaFabricaciones2_clicked(); break;
        case 4: _t->on_btnColaFabricaciones3_clicked(); break;
        case 5: _t->on_btnColaFabricaciones4Com_clicked(); break;
        case 6: _t->on_btnColaDeAlisto_clicked(); break;
        case 7: _t->on_btnColaAlistados_clicked(); break;
        case 8: _t->on_btnColaPorFacturar_clicked(); break;
        case 9: _t->on_btnDetenerBalanceador_clicked(); break;
        case 10: _t->setLabelFabricacion((*reinterpret_cast< std::add_pointer_t<QLabel*>>(_a[1]))); break;
        case 11: _t->on_btnDetenerFab04Com_clicked(); break;
        case 12: _t->on_btnDetenerFab03_clicked(); break;
        case 13: _t->on_btnDetenerFab02_clicked(); break;
        case 14: _t->on_btnDetenerFab01_clicked(); break;
        case 15: _t->actualizarTextoLabel((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 16: _t->on_btnColaDeAlistadores_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QTableWidget* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QLabel* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)(QTableWidget * );
            if (_t _q_method = &MainWindow::tableWidgetSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
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
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::tableWidgetSignal(QTableWidget * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
