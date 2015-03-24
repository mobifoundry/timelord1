/****************************************************************************
** Meta object code from reading C++ file 'cuttinglog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../TimeLord1/cuttinglog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cuttinglog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CuttingLog_t {
    QByteArrayData data[15];
    char stringdata[136];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CuttingLog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CuttingLog_t qt_meta_stringdata_CuttingLog = {
    {
QT_MOC_LITERAL(0, 0, 10), // "CuttingLog"
QT_MOC_LITERAL(1, 11, 8), // "xChanged"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 8), // "yChanged"
QT_MOC_LITERAL(4, 30, 12), // "widthChanged"
QT_MOC_LITERAL(5, 43, 13), // "heightChanged"
QT_MOC_LITERAL(6, 57, 11), // "nameChanged"
QT_MOC_LITERAL(7, 69, 4), // "name"
QT_MOC_LITERAL(8, 74, 12), // "cellsChanged"
QT_MOC_LITERAL(9, 87, 1), // "x"
QT_MOC_LITERAL(10, 89, 1), // "y"
QT_MOC_LITERAL(11, 91, 5), // "width"
QT_MOC_LITERAL(12, 97, 6), // "height"
QT_MOC_LITERAL(13, 104, 5), // "cells"
QT_MOC_LITERAL(14, 110, 25) // "QQmlListProperty<QObject>"

    },
    "CuttingLog\0xChanged\0\0yChanged\0"
    "widthChanged\0heightChanged\0nameChanged\0"
    "name\0cellsChanged\0x\0y\0width\0height\0"
    "cells\0QQmlListProperty<QObject>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CuttingLog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       6,   52, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,
       4,    0,   46,    2, 0x06 /* Public */,
       5,    0,   47,    2, 0x06 /* Public */,
       6,    1,   48,    2, 0x06 /* Public */,
       8,    0,   51,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,

 // properties: name, type, flags
       9, QMetaType::Float, 0x00495103,
      10, QMetaType::Float, 0x00495103,
      11, QMetaType::Float, 0x00495103,
      12, QMetaType::Float, 0x00495103,
       7, QMetaType::QString, 0x00495103,
      13, 0x80000000 | 14, 0x00495009,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,

       0        // eod
};

void CuttingLog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CuttingLog *_t = static_cast<CuttingLog *>(_o);
        switch (_id) {
        case 0: _t->xChanged(); break;
        case 1: _t->yChanged(); break;
        case 2: _t->widthChanged(); break;
        case 3: _t->heightChanged(); break;
        case 4: _t->nameChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->cellsChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CuttingLog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CuttingLog::xChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (CuttingLog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CuttingLog::yChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (CuttingLog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CuttingLog::widthChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (CuttingLog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CuttingLog::heightChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (CuttingLog::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CuttingLog::nameChanged)) {
                *result = 4;
            }
        }
        {
            typedef void (CuttingLog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CuttingLog::cellsChanged)) {
                *result = 5;
            }
        }
    }
}

const QMetaObject CuttingLog::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CuttingLog.data,
      qt_meta_data_CuttingLog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CuttingLog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CuttingLog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CuttingLog.stringdata))
        return static_cast<void*>(const_cast< CuttingLog*>(this));
    return QObject::qt_metacast(_clname);
}

int CuttingLog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = x(); break;
        case 1: *reinterpret_cast< float*>(_v) = y(); break;
        case 2: *reinterpret_cast< float*>(_v) = width(); break;
        case 3: *reinterpret_cast< float*>(_v) = height(); break;
        case 4: *reinterpret_cast< QString*>(_v) = name(); break;
        case 5: *reinterpret_cast< QQmlListProperty<QObject>*>(_v) = qmlCells(); break;
        default: break;
        }
        _id -= 6;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setX(*reinterpret_cast< float*>(_v)); break;
        case 1: setY(*reinterpret_cast< float*>(_v)); break;
        case 2: setWidth(*reinterpret_cast< float*>(_v)); break;
        case 3: setHeight(*reinterpret_cast< float*>(_v)); break;
        case 4: setName(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
        _id -= 6;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void CuttingLog::xChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void CuttingLog::yChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void CuttingLog::widthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void CuttingLog::heightChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void CuttingLog::nameChanged(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void CuttingLog::cellsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
