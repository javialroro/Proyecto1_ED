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
    "ListaArticulosP*",
    "_lista",
    "alistadorLiberado"
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
    char stringdata8[17];
    char stringdata9[7];
    char stringdata10[18];
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
        QT_MOC_LITERAL(100, 16),  // "ListaArticulosP*"
        QT_MOC_LITERAL(117, 6),  // "_lista"
        QT_MOC_LITERAL(124, 17)   // "alistadorLiberado"
    },
    "Alistador",
    "finalizado",
    "",
    "Alistador*",
    "alistador",
    "procesarArticuloAlist",
    "Queue<Alistador*>",
    "_colaAlistadores",
    "ListaArticulosP*",
    "_lista",
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
       5,    2,   35,    2, 0x0a,    3 /* Public */,
      10,    1,   40,    2, 0x0a,    6 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 8,    7,    9,
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
        QtPrivate::TypeAndForceComplete<ListaArticulosP *, std::false_type>,
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
        case 1: _t->procesarArticuloAlist((*reinterpret_cast< std::add_pointer_t<Queue<Alistador*>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<ListaArticulosP*>>(_a[2]))); break;
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
    "procesarPedidoBodega1",
    "",
    "Queue<Alistador*>",
    "_colaAlistadores",
    "ListaArticulosP*",
    "_lista",
    "procesarPedidoBodega2",
    "procesarPedidoBodega3",
    "procesarPedidoBodega4",
    "procesarPedidoBodega5",
    "procesarPedidoBodega6",
    "alistadorLiberado",
    "Alistador*",
    "alistador"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSBodegaENDCLASS_t {
    uint offsetsAndSizes[30];
    char stringdata0[7];
    char stringdata1[22];
    char stringdata2[1];
    char stringdata3[18];
    char stringdata4[17];
    char stringdata5[17];
    char stringdata6[7];
    char stringdata7[22];
    char stringdata8[22];
    char stringdata9[22];
    char stringdata10[22];
    char stringdata11[22];
    char stringdata12[18];
    char stringdata13[11];
    char stringdata14[10];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSBodegaENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSBodegaENDCLASS_t qt_meta_stringdata_CLASSBodegaENDCLASS = {
    {
        QT_MOC_LITERAL(0, 6),  // "Bodega"
        QT_MOC_LITERAL(7, 21),  // "procesarPedidoBodega1"
        QT_MOC_LITERAL(29, 0),  // ""
        QT_MOC_LITERAL(30, 17),  // "Queue<Alistador*>"
        QT_MOC_LITERAL(48, 16),  // "_colaAlistadores"
        QT_MOC_LITERAL(65, 16),  // "ListaArticulosP*"
        QT_MOC_LITERAL(82, 6),  // "_lista"
        QT_MOC_LITERAL(89, 21),  // "procesarPedidoBodega2"
        QT_MOC_LITERAL(111, 21),  // "procesarPedidoBodega3"
        QT_MOC_LITERAL(133, 21),  // "procesarPedidoBodega4"
        QT_MOC_LITERAL(155, 21),  // "procesarPedidoBodega5"
        QT_MOC_LITERAL(177, 21),  // "procesarPedidoBodega6"
        QT_MOC_LITERAL(199, 17),  // "alistadorLiberado"
        QT_MOC_LITERAL(217, 10),  // "Alistador*"
        QT_MOC_LITERAL(228, 9)   // "alistador"
    },
    "Bodega",
    "procesarPedidoBodega1",
    "",
    "Queue<Alistador*>",
    "_colaAlistadores",
    "ListaArticulosP*",
    "_lista",
    "procesarPedidoBodega2",
    "procesarPedidoBodega3",
    "procesarPedidoBodega4",
    "procesarPedidoBodega5",
    "procesarPedidoBodega6",
    "alistadorLiberado",
    "Alistador*",
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
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   56,    2, 0x06,    1 /* Public */,
       7,    2,   61,    2, 0x06,    4 /* Public */,
       8,    2,   66,    2, 0x06,    7 /* Public */,
       9,    2,   71,    2, 0x06,   10 /* Public */,
      10,    2,   76,    2, 0x06,   13 /* Public */,
      11,    2,   81,    2, 0x06,   16 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      12,    1,   86,    2, 0x0a,   19 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,

 // slots: parameters
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
        // method 'procesarPedidoBodega1'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Queue<Alistador*>, std::false_type>,
        QtPrivate::TypeAndForceComplete<ListaArticulosP *, std::false_type>,
        // method 'procesarPedidoBodega2'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Queue<Alistador*>, std::false_type>,
        QtPrivate::TypeAndForceComplete<ListaArticulosP *, std::false_type>,
        // method 'procesarPedidoBodega3'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Queue<Alistador*>, std::false_type>,
        QtPrivate::TypeAndForceComplete<ListaArticulosP *, std::false_type>,
        // method 'procesarPedidoBodega4'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Queue<Alistador*>, std::false_type>,
        QtPrivate::TypeAndForceComplete<ListaArticulosP *, std::false_type>,
        // method 'procesarPedidoBodega5'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Queue<Alistador*>, std::false_type>,
        QtPrivate::TypeAndForceComplete<ListaArticulosP *, std::false_type>,
        // method 'procesarPedidoBodega6'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Queue<Alistador*>, std::false_type>,
        QtPrivate::TypeAndForceComplete<ListaArticulosP *, std::false_type>,
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
        case 0: _t->procesarPedidoBodega1((*reinterpret_cast< std::add_pointer_t<Queue<Alistador*>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<ListaArticulosP*>>(_a[2]))); break;
        case 1: _t->procesarPedidoBodega2((*reinterpret_cast< std::add_pointer_t<Queue<Alistador*>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<ListaArticulosP*>>(_a[2]))); break;
        case 2: _t->procesarPedidoBodega3((*reinterpret_cast< std::add_pointer_t<Queue<Alistador*>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<ListaArticulosP*>>(_a[2]))); break;
        case 3: _t->procesarPedidoBodega4((*reinterpret_cast< std::add_pointer_t<Queue<Alistador*>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<ListaArticulosP*>>(_a[2]))); break;
        case 4: _t->procesarPedidoBodega5((*reinterpret_cast< std::add_pointer_t<Queue<Alistador*>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<ListaArticulosP*>>(_a[2]))); break;
        case 5: _t->procesarPedidoBodega6((*reinterpret_cast< std::add_pointer_t<Queue<Alistador*>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<ListaArticulosP*>>(_a[2]))); break;
        case 6: _t->alistadorLiberado((*reinterpret_cast< std::add_pointer_t<Alistador*>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 6:
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
            using _t = void (Bodega::*)(Queue<Alistador*> , ListaArticulosP * );
            if (_t _q_method = &Bodega::procesarPedidoBodega1; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Bodega::*)(Queue<Alistador*> , ListaArticulosP * );
            if (_t _q_method = &Bodega::procesarPedidoBodega2; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Bodega::*)(Queue<Alistador*> , ListaArticulosP * );
            if (_t _q_method = &Bodega::procesarPedidoBodega3; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Bodega::*)(Queue<Alistador*> , ListaArticulosP * );
            if (_t _q_method = &Bodega::procesarPedidoBodega4; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Bodega::*)(Queue<Alistador*> , ListaArticulosP * );
            if (_t _q_method = &Bodega::procesarPedidoBodega5; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Bodega::*)(Queue<Alistador*> , ListaArticulosP * );
            if (_t _q_method = &Bodega::procesarPedidoBodega6; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
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
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void Bodega::procesarPedidoBodega1(Queue<Alistador*> _t1, ListaArticulosP * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Bodega::procesarPedidoBodega2(Queue<Alistador*> _t1, ListaArticulosP * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Bodega::procesarPedidoBodega3(Queue<Alistador*> _t1, ListaArticulosP * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Bodega::procesarPedidoBodega4(Queue<Alistador*> _t1, ListaArticulosP * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Bodega::procesarPedidoBodega5(Queue<Alistador*> _t1, ListaArticulosP * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Bodega::procesarPedidoBodega6(Queue<Alistador*> _t1, ListaArticulosP * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "actualizarATable",
    "",
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
    "texto"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[42];
    char stringdata0[11];
    char stringdata1[17];
    char stringdata2[1];
    char stringdata3[26];
    char stringdata4[33];
    char stringdata5[33];
    char stringdata6[33];
    char stringdata7[36];
    char stringdata8[27];
    char stringdata9[28];
    char stringdata10[30];
    char stringdata11[33];
    char stringdata12[20];
    char stringdata13[8];
    char stringdata14[6];
    char stringdata15[30];
    char stringdata16[27];
    char stringdata17[27];
    char stringdata18[27];
    char stringdata19[21];
    char stringdata20[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 16),  // "actualizarATable"
        QT_MOC_LITERAL(28, 0),  // ""
        QT_MOC_LITERAL(29, 25),  // "on_btnColaPedidos_clicked"
        QT_MOC_LITERAL(55, 32),  // "on_btnColaFabricaciones1_clicked"
        QT_MOC_LITERAL(88, 32),  // "on_btnColaFabricaciones2_clicked"
        QT_MOC_LITERAL(121, 32),  // "on_btnColaFabricaciones3_clicked"
        QT_MOC_LITERAL(154, 35),  // "on_btnColaFabricaciones4Com_c..."
        QT_MOC_LITERAL(190, 26),  // "on_btnColaDeAlisto_clicked"
        QT_MOC_LITERAL(217, 27),  // "on_btnColaAlistados_clicked"
        QT_MOC_LITERAL(245, 29),  // "on_btnColaPorFacturar_clicked"
        QT_MOC_LITERAL(275, 32),  // "on_btnDetenerBalanceador_clicked"
        QT_MOC_LITERAL(308, 19),  // "setLabelFabricacion"
        QT_MOC_LITERAL(328, 7),  // "QLabel*"
        QT_MOC_LITERAL(336, 5),  // "label"
        QT_MOC_LITERAL(342, 29),  // "on_btnDetenerFab04Com_clicked"
        QT_MOC_LITERAL(372, 26),  // "on_btnDetenerFab03_clicked"
        QT_MOC_LITERAL(399, 26),  // "on_btnDetenerFab02_clicked"
        QT_MOC_LITERAL(426, 26),  // "on_btnDetenerFab01_clicked"
        QT_MOC_LITERAL(453, 20),  // "actualizarTextoLabel"
        QT_MOC_LITERAL(474, 5)   // "texto"
    },
    "MainWindow",
    "actualizarATable",
    "",
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
    "texto"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  110,    2, 0x08,    1 /* Private */,
       3,    0,  111,    2, 0x08,    2 /* Private */,
       4,    0,  112,    2, 0x08,    3 /* Private */,
       5,    0,  113,    2, 0x08,    4 /* Private */,
       6,    0,  114,    2, 0x08,    5 /* Private */,
       7,    0,  115,    2, 0x08,    6 /* Private */,
       8,    0,  116,    2, 0x08,    7 /* Private */,
       9,    0,  117,    2, 0x08,    8 /* Private */,
      10,    0,  118,    2, 0x08,    9 /* Private */,
      11,    0,  119,    2, 0x08,   10 /* Private */,
      12,    1,  120,    2, 0x08,   11 /* Private */,
      15,    0,  123,    2, 0x08,   13 /* Private */,
      16,    0,  124,    2, 0x08,   14 /* Private */,
      17,    0,  125,    2, 0x08,   15 /* Private */,
      18,    0,  126,    2, 0x08,   16 /* Private */,
      19,    1,  127,    2, 0x08,   17 /* Private */,

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
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   20,

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
        // method 'actualizarATable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
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
        case 0: _t->actualizarATable(); break;
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
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 10:
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
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}
QT_WARNING_POP
