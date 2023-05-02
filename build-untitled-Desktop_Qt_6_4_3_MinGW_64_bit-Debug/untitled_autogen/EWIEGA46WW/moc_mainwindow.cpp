/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../untitled/mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_Balanceador_t {
    uint offsetsAndSizes[8];
    char stringdata0[12];
    char stringdata1[27];
    char stringdata2[1];
    char stringdata3[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_Balanceador_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_Balanceador_t qt_meta_stringdata_Balanceador = {
    {
        QT_MOC_LITERAL(0, 11),  // "Balanceador"
        QT_MOC_LITERAL(12, 26),  // "actualizarLabelBalanceador"
        QT_MOC_LITERAL(39, 0),  // ""
        QT_MOC_LITERAL(40, 5)   // "texto"
    },
    "Balanceador",
    "actualizarLabelBalanceador",
    "",
    "texto"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_Balanceador[] = {

 // content:
      10,       // revision
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

Q_CONSTINIT const QMetaObject Balanceador::staticMetaObject = { {
    QMetaObject::SuperData::link<QThread::staticMetaObject>(),
    qt_meta_stringdata_Balanceador.offsetsAndSizes,
    qt_meta_data_Balanceador,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_Balanceador_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Balanceador, std::true_type>,
        // method 'actualizarLabelBalanceador'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void Balanceador::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Balanceador *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->actualizarLabelBalanceador((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Balanceador::*)(const QString & );
            if (_t _q_method = &Balanceador::actualizarLabelBalanceador; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *Balanceador::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Balanceador::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Balanceador.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int Balanceador::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void Balanceador::actualizarLabelBalanceador(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
namespace {
struct qt_meta_stringdata_Fabrica_t {
    uint offsetsAndSizes[8];
    char stringdata0[8];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_Fabrica_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_Fabrica_t qt_meta_stringdata_Fabrica = {
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
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_Fabrica[] = {

 // content:
      10,       // revision
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
    qt_meta_stringdata_Fabrica.offsetsAndSizes,
    qt_meta_data_Fabrica,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_Fabrica_t,
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
    if (!strcmp(_clname, qt_meta_stringdata_Fabrica.stringdata0))
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
struct qt_meta_stringdata_Alistador_t {
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
    uint(sizeof(qt_meta_stringdata_Alistador_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_Alistador_t qt_meta_stringdata_Alistador = {
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
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_Alistador[] = {

 // content:
      10,       // revision
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
    qt_meta_stringdata_Alistador.offsetsAndSizes,
    qt_meta_data_Alistador,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_Alistador_t,
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
    if (!strcmp(_clname, qt_meta_stringdata_Alistador.stringdata0))
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
struct qt_meta_stringdata_Bodega_t {
    uint offsetsAndSizes[16];
    char stringdata0[7];
    char stringdata1[23];
    char stringdata2[1];
    char stringdata3[18];
    char stringdata4[16];
    char stringdata5[10];
    char stringdata6[16];
    char stringdata7[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_Bodega_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_Bodega_t qt_meta_stringdata_Bodega = {
    {
        QT_MOC_LITERAL(0, 6),  // "Bodega"
        QT_MOC_LITERAL(7, 22),  // "procesarArticuloBodega"
        QT_MOC_LITERAL(30, 0),  // ""
        QT_MOC_LITERAL(31, 17),  // "Queue<Alistador*>"
        QT_MOC_LITERAL(49, 15),  // "colaAlistadores"
        QT_MOC_LITERAL(65, 9),  // "ubicacion"
        QT_MOC_LITERAL(75, 15),  // "ArticuloPedido*"
        QT_MOC_LITERAL(91, 8)   // "articulo"
    },
    "Bodega",
    "procesarArticuloBodega",
    "",
    "Queue<Alistador*>",
    "colaAlistadores",
    "ubicacion",
    "ArticuloPedido*",
    "articulo"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_Bodega[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    3,   20,    2, 0x06,    1 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, 0x80000000 | 6,    4,    5,    7,

       0        // eod
};

Q_CONSTINIT const QMetaObject Bodega::staticMetaObject = { {
    QMetaObject::SuperData::link<QThread::staticMetaObject>(),
    qt_meta_stringdata_Bodega.offsetsAndSizes,
    qt_meta_data_Bodega,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_Bodega_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Bodega, std::true_type>,
        // method 'procesarArticuloBodega'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Queue<Alistador*>, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<ArticuloPedido *, std::false_type>
    >,
    nullptr
} };

void Bodega::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Bodega *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->procesarArticuloBodega((*reinterpret_cast< std::add_pointer_t<Queue<Alistador*>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<ArticuloPedido*>>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Bodega::*)(Queue<Alistador*> , const QString & , ArticuloPedido * );
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
    if (!strcmp(_clname, qt_meta_stringdata_Bodega.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int Bodega::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void Bodega::procesarArticuloBodega(Queue<Alistador*> _t1, const QString & _t2, ArticuloPedido * _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
namespace {
struct qt_meta_stringdata_MainWindow_t {
    uint offsetsAndSizes[66];
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
    char stringdata14[21];
    char stringdata15[8];
    char stringdata16[6];
    char stringdata17[21];
    char stringdata18[21];
    char stringdata19[27];
    char stringdata20[30];
    char stringdata21[27];
    char stringdata22[27];
    char stringdata23[27];
    char stringdata24[22];
    char stringdata25[6];
    char stringdata26[22];
    char stringdata27[22];
    char stringdata28[28];
    char stringdata29[32];
    char stringdata30[31];
    char stringdata31[20];
    char stringdata32[32];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_MainWindow_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
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
        QT_MOC_LITERAL(335, 20),  // "setLabelFabricacionA"
        QT_MOC_LITERAL(356, 7),  // "QLabel*"
        QT_MOC_LITERAL(364, 5),  // "label"
        QT_MOC_LITERAL(370, 20),  // "setLabelFabricacionB"
        QT_MOC_LITERAL(391, 20),  // "setLabelFabricacionC"
        QT_MOC_LITERAL(412, 26),  // "setLabelFabricacionComodin"
        QT_MOC_LITERAL(439, 29),  // "on_btnDetenerFab04Com_clicked"
        QT_MOC_LITERAL(469, 26),  // "on_btnDetenerFab03_clicked"
        QT_MOC_LITERAL(496, 26),  // "on_btnDetenerFab02_clicked"
        QT_MOC_LITERAL(523, 26),  // "on_btnDetenerFab01_clicked"
        QT_MOC_LITERAL(550, 21),  // "actualizarTextoLabelA"
        QT_MOC_LITERAL(572, 5),  // "texto"
        QT_MOC_LITERAL(578, 21),  // "actualizarTextoLabelB"
        QT_MOC_LITERAL(600, 21),  // "actualizarTextoLabelC"
        QT_MOC_LITERAL(622, 27),  // "actualizarTextoLabelComodin"
        QT_MOC_LITERAL(650, 31),  // "on_btnColaDeAlistadores_clicked"
        QT_MOC_LITERAL(682, 30),  // "on_btnDetenerAlistados_clicked"
        QT_MOC_LITERAL(713, 19),  // "setLabelBalanceador"
        QT_MOC_LITERAL(733, 31)   // "actualizarTextoLabelBalanceador"
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
    "setLabelFabricacionA",
    "QLabel*",
    "label",
    "setLabelFabricacionB",
    "setLabelFabricacionC",
    "setLabelFabricacionComodin",
    "on_btnDetenerFab04Com_clicked",
    "on_btnDetenerFab03_clicked",
    "on_btnDetenerFab02_clicked",
    "on_btnDetenerFab01_clicked",
    "actualizarTextoLabelA",
    "texto",
    "actualizarTextoLabelB",
    "actualizarTextoLabelC",
    "actualizarTextoLabelComodin",
    "on_btnColaDeAlistadores_clicked",
    "on_btnDetenerAlistados_clicked",
    "setLabelBalanceador",
    "actualizarTextoLabelBalanceador"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  170,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,  173,    2, 0x08,    3 /* Private */,
       6,    0,  174,    2, 0x08,    4 /* Private */,
       7,    0,  175,    2, 0x08,    5 /* Private */,
       8,    0,  176,    2, 0x08,    6 /* Private */,
       9,    0,  177,    2, 0x08,    7 /* Private */,
      10,    0,  178,    2, 0x08,    8 /* Private */,
      11,    0,  179,    2, 0x08,    9 /* Private */,
      12,    0,  180,    2, 0x08,   10 /* Private */,
      13,    0,  181,    2, 0x08,   11 /* Private */,
      14,    1,  182,    2, 0x08,   12 /* Private */,
      17,    1,  185,    2, 0x08,   14 /* Private */,
      18,    1,  188,    2, 0x08,   16 /* Private */,
      19,    1,  191,    2, 0x08,   18 /* Private */,
      20,    0,  194,    2, 0x08,   20 /* Private */,
      21,    0,  195,    2, 0x08,   21 /* Private */,
      22,    0,  196,    2, 0x08,   22 /* Private */,
      23,    0,  197,    2, 0x08,   23 /* Private */,
      24,    1,  198,    2, 0x08,   24 /* Private */,
      26,    1,  201,    2, 0x08,   26 /* Private */,
      27,    1,  204,    2, 0x08,   28 /* Private */,
      28,    1,  207,    2, 0x08,   30 /* Private */,
      29,    0,  210,    2, 0x08,   32 /* Private */,
      30,    0,  211,    2, 0x08,   33 /* Private */,
      31,    1,  212,    2, 0x08,   34 /* Private */,
      32,    1,  215,    2, 0x08,   36 /* Private */,

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
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   25,
    QMetaType::Void, QMetaType::QString,   25,
    QMetaType::Void, QMetaType::QString,   25,
    QMetaType::Void, QMetaType::QString,   25,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, QMetaType::QString,   25,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSizes,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t,
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
        // method 'setLabelFabricacionA'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QLabel *, std::false_type>,
        // method 'setLabelFabricacionB'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QLabel *, std::false_type>,
        // method 'setLabelFabricacionC'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QLabel *, std::false_type>,
        // method 'setLabelFabricacionComodin'
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
        // method 'actualizarTextoLabelA'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'actualizarTextoLabelB'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'actualizarTextoLabelC'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'actualizarTextoLabelComodin'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_btnColaDeAlistadores_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnDetenerAlistados_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setLabelBalanceador'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QLabel *, std::false_type>,
        // method 'actualizarTextoLabelBalanceador'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
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
        case 10: _t->setLabelFabricacionA((*reinterpret_cast< std::add_pointer_t<QLabel*>>(_a[1]))); break;
        case 11: _t->setLabelFabricacionB((*reinterpret_cast< std::add_pointer_t<QLabel*>>(_a[1]))); break;
        case 12: _t->setLabelFabricacionC((*reinterpret_cast< std::add_pointer_t<QLabel*>>(_a[1]))); break;
        case 13: _t->setLabelFabricacionComodin((*reinterpret_cast< std::add_pointer_t<QLabel*>>(_a[1]))); break;
        case 14: _t->on_btnDetenerFab04Com_clicked(); break;
        case 15: _t->on_btnDetenerFab03_clicked(); break;
        case 16: _t->on_btnDetenerFab02_clicked(); break;
        case 17: _t->on_btnDetenerFab01_clicked(); break;
        case 18: _t->actualizarTextoLabelA((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 19: _t->actualizarTextoLabelB((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 20: _t->actualizarTextoLabelC((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 21: _t->actualizarTextoLabelComodin((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 22: _t->on_btnColaDeAlistadores_clicked(); break;
        case 23: _t->on_btnDetenerAlistados_clicked(); break;
        case 24: _t->setLabelBalanceador((*reinterpret_cast< std::add_pointer_t<QLabel*>>(_a[1]))); break;
        case 25: _t->actualizarTextoLabelBalanceador((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
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
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QLabel* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QLabel* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QLabel* >(); break;
            }
            break;
        case 24:
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
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
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
QT_END_MOC_NAMESPACE
