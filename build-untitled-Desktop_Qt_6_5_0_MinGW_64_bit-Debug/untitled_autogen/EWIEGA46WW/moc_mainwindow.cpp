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
struct qt_meta_stringdata_CLASSBalanceadorENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSBalanceadorENDCLASS = QtMocHelpers::stringData(
    "Balanceador",
    "actualizarLabelBalanceador",
    "",
    "texto",
    "actualizarLabelCantBalanceador"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSBalanceadorENDCLASS_t {
    uint offsetsAndSizes[10];
    char stringdata0[12];
    char stringdata1[27];
    char stringdata2[1];
    char stringdata3[6];
    char stringdata4[31];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSBalanceadorENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSBalanceadorENDCLASS_t qt_meta_stringdata_CLASSBalanceadorENDCLASS = {
    {
        QT_MOC_LITERAL(0, 11),  // "Balanceador"
        QT_MOC_LITERAL(12, 26),  // "actualizarLabelBalanceador"
        QT_MOC_LITERAL(39, 0),  // ""
        QT_MOC_LITERAL(40, 5),  // "texto"
        QT_MOC_LITERAL(46, 30)   // "actualizarLabelCantBalanceador"
    },
    "Balanceador",
    "actualizarLabelBalanceador",
    "",
    "texto",
    "actualizarLabelCantBalanceador"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSBalanceadorENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   26,    2, 0x06,    1 /* Public */,
       4,    1,   29,    2, 0x06,    3 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

Q_CONSTINIT const QMetaObject Balanceador::staticMetaObject = { {
    QMetaObject::SuperData::link<QThread::staticMetaObject>(),
    qt_meta_stringdata_CLASSBalanceadorENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSBalanceadorENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSBalanceadorENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Balanceador, std::true_type>,
        // method 'actualizarLabelBalanceador'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'actualizarLabelCantBalanceador'
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
        case 1: _t->actualizarLabelCantBalanceador((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
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
        {
            using _t = void (Balanceador::*)(const QString & );
            if (_t _q_method = &Balanceador::actualizarLabelCantBalanceador; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
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
    if (!strcmp(_clname, qt_meta_stringdata_CLASSBalanceadorENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int Balanceador::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void Balanceador::actualizarLabelBalanceador(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Balanceador::actualizarLabelCantBalanceador(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSFabricaENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSFabricaENDCLASS = QtMocHelpers::stringData(
    "Fabrica",
    "actualizarLabel",
    "",
    "texto",
    "actualizarLabelCant"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSFabricaENDCLASS_t {
    uint offsetsAndSizes[10];
    char stringdata0[8];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[6];
    char stringdata4[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSFabricaENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSFabricaENDCLASS_t qt_meta_stringdata_CLASSFabricaENDCLASS = {
    {
        QT_MOC_LITERAL(0, 7),  // "Fabrica"
        QT_MOC_LITERAL(8, 15),  // "actualizarLabel"
        QT_MOC_LITERAL(24, 0),  // ""
        QT_MOC_LITERAL(25, 5),  // "texto"
        QT_MOC_LITERAL(31, 19)   // "actualizarLabelCant"
    },
    "Fabrica",
    "actualizarLabel",
    "",
    "texto",
    "actualizarLabelCant"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSFabricaENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   26,    2, 0x06,    1 /* Public */,
       4,    1,   29,    2, 0x06,    3 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
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
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'actualizarLabelCant'
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
        case 1: _t->actualizarLabelCant((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
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
        {
            using _t = void (Fabrica::*)(const QString & );
            if (_t _q_method = &Fabrica::actualizarLabelCant; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
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
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void Fabrica::actualizarLabel(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Fabrica::actualizarLabelCant(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSFacturadoraENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSFacturadoraENDCLASS = QtMocHelpers::stringData(
    "Facturadora",
    "actualizarLabelCantFacturadora",
    "",
    "texto",
    "actualizarLabelFacturadora"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSFacturadoraENDCLASS_t {
    uint offsetsAndSizes[10];
    char stringdata0[12];
    char stringdata1[31];
    char stringdata2[1];
    char stringdata3[6];
    char stringdata4[27];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSFacturadoraENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSFacturadoraENDCLASS_t qt_meta_stringdata_CLASSFacturadoraENDCLASS = {
    {
        QT_MOC_LITERAL(0, 11),  // "Facturadora"
        QT_MOC_LITERAL(12, 30),  // "actualizarLabelCantFacturadora"
        QT_MOC_LITERAL(43, 0),  // ""
        QT_MOC_LITERAL(44, 5),  // "texto"
        QT_MOC_LITERAL(50, 26)   // "actualizarLabelFacturadora"
    },
    "Facturadora",
    "actualizarLabelCantFacturadora",
    "",
    "texto",
    "actualizarLabelFacturadora"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSFacturadoraENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   26,    2, 0x06,    1 /* Public */,
       4,    1,   29,    2, 0x06,    3 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

Q_CONSTINIT const QMetaObject Facturadora::staticMetaObject = { {
    QMetaObject::SuperData::link<QThread::staticMetaObject>(),
    qt_meta_stringdata_CLASSFacturadoraENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSFacturadoraENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSFacturadoraENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Facturadora, std::true_type>,
        // method 'actualizarLabelCantFacturadora'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'actualizarLabelFacturadora'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void Facturadora::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Facturadora *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->actualizarLabelCantFacturadora((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->actualizarLabelFacturadora((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Facturadora::*)(const QString & );
            if (_t _q_method = &Facturadora::actualizarLabelCantFacturadora; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Facturadora::*)(const QString & );
            if (_t _q_method = &Facturadora::actualizarLabelFacturadora; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *Facturadora::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Facturadora::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSFacturadoraENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int Facturadora::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void Facturadora::actualizarLabelCantFacturadora(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Facturadora::actualizarLabelFacturadora(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
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
    "ubicacion",
    "ArticuloPedido*",
    "articulo",
    "actualizarLabelCantBalanceador",
    "texto",
    "actualizarLabelBalanceador"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSBodegaENDCLASS_t {
    uint offsetsAndSizes[22];
    char stringdata0[7];
    char stringdata1[23];
    char stringdata2[1];
    char stringdata3[18];
    char stringdata4[16];
    char stringdata5[10];
    char stringdata6[16];
    char stringdata7[9];
    char stringdata8[31];
    char stringdata9[6];
    char stringdata10[27];
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
        QT_MOC_LITERAL(65, 9),  // "ubicacion"
        QT_MOC_LITERAL(75, 15),  // "ArticuloPedido*"
        QT_MOC_LITERAL(91, 8),  // "articulo"
        QT_MOC_LITERAL(100, 30),  // "actualizarLabelCantBalanceador"
        QT_MOC_LITERAL(131, 5),  // "texto"
        QT_MOC_LITERAL(137, 26)   // "actualizarLabelBalanceador"
    },
    "Bodega",
    "procesarArticuloBodega",
    "",
    "Queue<Alistador*>",
    "colaAlistadores",
    "ubicacion",
    "ArticuloPedido*",
    "articulo",
    "actualizarLabelCantBalanceador",
    "texto",
    "actualizarLabelBalanceador"
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
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    3,   32,    2, 0x06,    1 /* Public */,
       8,    1,   39,    2, 0x06,    5 /* Public */,
      10,    1,   42,    2, 0x06,    7 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, 0x80000000 | 6,    4,    5,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,    9,

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
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<ArticuloPedido *, std::false_type>,
        // method 'actualizarLabelCantBalanceador'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'actualizarLabelBalanceador'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
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
        case 1: _t->actualizarLabelCantBalanceador((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->actualizarLabelBalanceador((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
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
        {
            using _t = void (Bodega::*)(const QString & );
            if (_t _q_method = &Bodega::actualizarLabelCantBalanceador; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Bodega::*)(const QString & );
            if (_t _q_method = &Bodega::actualizarLabelBalanceador; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void Bodega::procesarArticuloBodega(Queue<Alistador*> _t1, const QString & _t2, ArticuloPedido * _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Bodega::actualizarLabelCantBalanceador(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Bodega::actualizarLabelBalanceador(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSAlistadosENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSAlistadosENDCLASS = QtMocHelpers::stringData(
    "Alistados",
    "actualizarLabelCantAlistados",
    "",
    "texto",
    "actualizarLabelAlistados"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSAlistadosENDCLASS_t {
    uint offsetsAndSizes[10];
    char stringdata0[10];
    char stringdata1[29];
    char stringdata2[1];
    char stringdata3[6];
    char stringdata4[25];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSAlistadosENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSAlistadosENDCLASS_t qt_meta_stringdata_CLASSAlistadosENDCLASS = {
    {
        QT_MOC_LITERAL(0, 9),  // "Alistados"
        QT_MOC_LITERAL(10, 28),  // "actualizarLabelCantAlistados"
        QT_MOC_LITERAL(39, 0),  // ""
        QT_MOC_LITERAL(40, 5),  // "texto"
        QT_MOC_LITERAL(46, 24)   // "actualizarLabelAlistados"
    },
    "Alistados",
    "actualizarLabelCantAlistados",
    "",
    "texto",
    "actualizarLabelAlistados"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSAlistadosENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   26,    2, 0x06,    1 /* Public */,
       4,    1,   29,    2, 0x06,    3 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

Q_CONSTINIT const QMetaObject Alistados::staticMetaObject = { {
    QMetaObject::SuperData::link<QThread::staticMetaObject>(),
    qt_meta_stringdata_CLASSAlistadosENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSAlistadosENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSAlistadosENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Alistados, std::true_type>,
        // method 'actualizarLabelCantAlistados'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'actualizarLabelAlistados'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void Alistados::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Alistados *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->actualizarLabelCantAlistados((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->actualizarLabelAlistados((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Alistados::*)(const QString & );
            if (_t _q_method = &Alistados::actualizarLabelCantAlistados; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Alistados::*)(const QString & );
            if (_t _q_method = &Alistados::actualizarLabelAlistados; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *Alistados::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Alistados::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSAlistadosENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int Alistados::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void Alistados::actualizarLabelCantAlistados(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Alistados::actualizarLabelAlistados(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
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
    "on_btnDetenerFab04Com_clicked",
    "on_btnDetenerFab03_clicked",
    "on_btnDetenerFab02_clicked",
    "on_btnDetenerFab01_clicked",
    "actualizarTextoLabelA",
    "texto",
    "actualizarTextoLabelB",
    "actualizarTextoLabelC",
    "actualizarTextoLabelComodin",
    "actualizarTextoLabelBalanceador",
    "actualizarTextoLabelCantBalanceador",
    "actualizarTextoLabelCantA",
    "actualizarTextoLabelCantB",
    "actualizarTextoLabelCantC",
    "actualizarTextoLabelCantComodin",
    "on_btnColaDeAlistadores_clicked",
    "on_btnDetenerAlistados_clicked",
    "actualizarTextoLabelBodega",
    "actualizarTextoLabelCantBodega",
    "actualizarTextoLabelCantAlistados",
    "actualizarTextoLabelAlistados",
    "actualizarTextoLabelFacturadora",
    "actualizarTextoLabelCantFacturadora",
    "on_btnDetenerFacturacion_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[76];
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
    char stringdata14[30];
    char stringdata15[27];
    char stringdata16[27];
    char stringdata17[27];
    char stringdata18[22];
    char stringdata19[6];
    char stringdata20[22];
    char stringdata21[22];
    char stringdata22[28];
    char stringdata23[32];
    char stringdata24[36];
    char stringdata25[26];
    char stringdata26[26];
    char stringdata27[26];
    char stringdata28[32];
    char stringdata29[32];
    char stringdata30[31];
    char stringdata31[27];
    char stringdata32[31];
    char stringdata33[34];
    char stringdata34[30];
    char stringdata35[32];
    char stringdata36[36];
    char stringdata37[33];
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
        QT_MOC_LITERAL(335, 29),  // "on_btnDetenerFab04Com_clicked"
        QT_MOC_LITERAL(365, 26),  // "on_btnDetenerFab03_clicked"
        QT_MOC_LITERAL(392, 26),  // "on_btnDetenerFab02_clicked"
        QT_MOC_LITERAL(419, 26),  // "on_btnDetenerFab01_clicked"
        QT_MOC_LITERAL(446, 21),  // "actualizarTextoLabelA"
        QT_MOC_LITERAL(468, 5),  // "texto"
        QT_MOC_LITERAL(474, 21),  // "actualizarTextoLabelB"
        QT_MOC_LITERAL(496, 21),  // "actualizarTextoLabelC"
        QT_MOC_LITERAL(518, 27),  // "actualizarTextoLabelComodin"
        QT_MOC_LITERAL(546, 31),  // "actualizarTextoLabelBalanceador"
        QT_MOC_LITERAL(578, 35),  // "actualizarTextoLabelCantBalan..."
        QT_MOC_LITERAL(614, 25),  // "actualizarTextoLabelCantA"
        QT_MOC_LITERAL(640, 25),  // "actualizarTextoLabelCantB"
        QT_MOC_LITERAL(666, 25),  // "actualizarTextoLabelCantC"
        QT_MOC_LITERAL(692, 31),  // "actualizarTextoLabelCantComodin"
        QT_MOC_LITERAL(724, 31),  // "on_btnColaDeAlistadores_clicked"
        QT_MOC_LITERAL(756, 30),  // "on_btnDetenerAlistados_clicked"
        QT_MOC_LITERAL(787, 26),  // "actualizarTextoLabelBodega"
        QT_MOC_LITERAL(814, 30),  // "actualizarTextoLabelCantBodega"
        QT_MOC_LITERAL(845, 33),  // "actualizarTextoLabelCantAlist..."
        QT_MOC_LITERAL(879, 29),  // "actualizarTextoLabelAlistados"
        QT_MOC_LITERAL(909, 31),  // "actualizarTextoLabelFacturadora"
        QT_MOC_LITERAL(941, 35),  // "actualizarTextoLabelCantFactu..."
        QT_MOC_LITERAL(977, 32)   // "on_btnDetenerFacturacion_clicked"
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
    "on_btnDetenerFab04Com_clicked",
    "on_btnDetenerFab03_clicked",
    "on_btnDetenerFab02_clicked",
    "on_btnDetenerFab01_clicked",
    "actualizarTextoLabelA",
    "texto",
    "actualizarTextoLabelB",
    "actualizarTextoLabelC",
    "actualizarTextoLabelComodin",
    "actualizarTextoLabelBalanceador",
    "actualizarTextoLabelCantBalanceador",
    "actualizarTextoLabelCantA",
    "actualizarTextoLabelCantB",
    "actualizarTextoLabelCantC",
    "actualizarTextoLabelCantComodin",
    "on_btnColaDeAlistadores_clicked",
    "on_btnDetenerAlistados_clicked",
    "actualizarTextoLabelBodega",
    "actualizarTextoLabelCantBodega",
    "actualizarTextoLabelCantAlistados",
    "actualizarTextoLabelAlistados",
    "actualizarTextoLabelFacturadora",
    "actualizarTextoLabelCantFacturadora",
    "on_btnDetenerFacturacion_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      33,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  212,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,  215,    2, 0x08,    3 /* Private */,
       6,    0,  216,    2, 0x08,    4 /* Private */,
       7,    0,  217,    2, 0x08,    5 /* Private */,
       8,    0,  218,    2, 0x08,    6 /* Private */,
       9,    0,  219,    2, 0x08,    7 /* Private */,
      10,    0,  220,    2, 0x08,    8 /* Private */,
      11,    0,  221,    2, 0x08,    9 /* Private */,
      12,    0,  222,    2, 0x08,   10 /* Private */,
      13,    0,  223,    2, 0x08,   11 /* Private */,
      14,    0,  224,    2, 0x08,   12 /* Private */,
      15,    0,  225,    2, 0x08,   13 /* Private */,
      16,    0,  226,    2, 0x08,   14 /* Private */,
      17,    0,  227,    2, 0x08,   15 /* Private */,
      18,    1,  228,    2, 0x08,   16 /* Private */,
      20,    1,  231,    2, 0x08,   18 /* Private */,
      21,    1,  234,    2, 0x08,   20 /* Private */,
      22,    1,  237,    2, 0x08,   22 /* Private */,
      23,    1,  240,    2, 0x08,   24 /* Private */,
      24,    1,  243,    2, 0x08,   26 /* Private */,
      25,    1,  246,    2, 0x08,   28 /* Private */,
      26,    1,  249,    2, 0x08,   30 /* Private */,
      27,    1,  252,    2, 0x08,   32 /* Private */,
      28,    1,  255,    2, 0x08,   34 /* Private */,
      29,    0,  258,    2, 0x08,   36 /* Private */,
      30,    0,  259,    2, 0x08,   37 /* Private */,
      31,    1,  260,    2, 0x08,   38 /* Private */,
      32,    1,  263,    2, 0x08,   40 /* Private */,
      33,    1,  266,    2, 0x08,   42 /* Private */,
      34,    1,  269,    2, 0x08,   44 /* Private */,
      35,    1,  272,    2, 0x08,   46 /* Private */,
      36,    1,  275,    2, 0x08,   48 /* Private */,
      37,    0,  278,    2, 0x08,   50 /* Private */,

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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void, QMetaType::QString,   19,
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
        // method 'actualizarTextoLabelBalanceador'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'actualizarTextoLabelCantBalanceador'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'actualizarTextoLabelCantA'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'actualizarTextoLabelCantB'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'actualizarTextoLabelCantC'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'actualizarTextoLabelCantComodin'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_btnColaDeAlistadores_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnDetenerAlistados_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'actualizarTextoLabelBodega'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'actualizarTextoLabelCantBodega'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'actualizarTextoLabelCantAlistados'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'actualizarTextoLabelAlistados'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'actualizarTextoLabelFacturadora'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'actualizarTextoLabelCantFacturadora'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_btnDetenerFacturacion_clicked'
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
        case 10: _t->on_btnDetenerFab04Com_clicked(); break;
        case 11: _t->on_btnDetenerFab03_clicked(); break;
        case 12: _t->on_btnDetenerFab02_clicked(); break;
        case 13: _t->on_btnDetenerFab01_clicked(); break;
        case 14: _t->actualizarTextoLabelA((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 15: _t->actualizarTextoLabelB((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 16: _t->actualizarTextoLabelC((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 17: _t->actualizarTextoLabelComodin((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 18: _t->actualizarTextoLabelBalanceador((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 19: _t->actualizarTextoLabelCantBalanceador((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 20: _t->actualizarTextoLabelCantA((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 21: _t->actualizarTextoLabelCantB((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 22: _t->actualizarTextoLabelCantC((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 23: _t->actualizarTextoLabelCantComodin((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 24: _t->on_btnColaDeAlistadores_clicked(); break;
        case 25: _t->on_btnDetenerAlistados_clicked(); break;
        case 26: _t->actualizarTextoLabelBodega((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 27: _t->actualizarTextoLabelCantBodega((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 28: _t->actualizarTextoLabelCantAlistados((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 29: _t->actualizarTextoLabelAlistados((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 30: _t->actualizarTextoLabelFacturadora((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 31: _t->actualizarTextoLabelCantFacturadora((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 32: _t->on_btnDetenerFacturacion_clicked(); break;
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
        if (_id < 33)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 33;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 33)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 33;
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
