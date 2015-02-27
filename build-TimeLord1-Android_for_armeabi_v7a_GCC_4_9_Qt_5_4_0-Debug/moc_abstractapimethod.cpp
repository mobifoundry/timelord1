/****************************************************************************
** Meta object code from reading C++ file 'abstractapimethod.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../TimeLord1/abstractapimethod.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'abstractapimethod.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AbstractApiMethod_t {
    QByteArrayData data[11];
    char stringdata[136];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AbstractApiMethod_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AbstractApiMethod_t qt_meta_stringdata_AbstractApiMethod = {
    {
QT_MOC_LITERAL(0, 0, 17), // "AbstractApiMethod"
QT_MOC_LITERAL(1, 18, 11), // "statusQuery"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 6), // "status"
QT_MOC_LITERAL(4, 38, 16), // "statusErrorQuery"
QT_MOC_LITERAL(5, 55, 10), // "errorQuery"
QT_MOC_LITERAL(6, 66, 16), // "onResponseStatus"
QT_MOC_LITERAL(7, 83, 8), // "response"
QT_MOC_LITERAL(8, 92, 27), // "QNetworkReply::NetworkError"
QT_MOC_LITERAL(9, 120, 5), // "error"
QT_MOC_LITERAL(10, 126, 9) // "onTimeout"

    },
    "AbstractApiMethod\0statusQuery\0\0status\0"
    "statusErrorQuery\0errorQuery\0"
    "onResponseStatus\0response\0"
    "QNetworkReply::NetworkError\0error\0"
    "onTimeout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AbstractApiMethod[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    3,   40,    2, 0x0a /* Public */,
      10,    0,   47,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QString,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QByteArray, QMetaType::Int, 0x80000000 | 8,    7,    3,    9,
    QMetaType::Void,

       0        // eod
};

void AbstractApiMethod::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AbstractApiMethod *_t = static_cast<AbstractApiMethod *>(_o);
        switch (_id) {
        case 0: _t->statusQuery((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 1: _t->statusErrorQuery((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->onResponseStatus((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[3]))); break;
        case 3: _t->onTimeout(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply::NetworkError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AbstractApiMethod::*_t)(const int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AbstractApiMethod::statusQuery)) {
                *result = 0;
            }
        }
        {
            typedef void (AbstractApiMethod::*_t)(const QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AbstractApiMethod::statusErrorQuery)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject AbstractApiMethod::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AbstractApiMethod.data,
      qt_meta_data_AbstractApiMethod,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AbstractApiMethod::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AbstractApiMethod::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AbstractApiMethod.stringdata))
        return static_cast<void*>(const_cast< AbstractApiMethod*>(this));
    if (!strcmp(_clname, "QRunnable"))
        return static_cast< QRunnable*>(const_cast< AbstractApiMethod*>(this));
    return QObject::qt_metacast(_clname);
}

int AbstractApiMethod::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void AbstractApiMethod::statusQuery(const int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AbstractApiMethod::statusErrorQuery(const QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
