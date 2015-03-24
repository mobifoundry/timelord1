/****************************************************************************
** Meta object code from reading C++ file 'cutterapi.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../TimeLord1/cutterapi.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cutterapi.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CutterApi_t {
    QByteArrayData data[9];
    char stringdata[85];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CutterApi_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CutterApi_t qt_meta_stringdata_CutterApi = {
    {
QT_MOC_LITERAL(0, 0, 9), // "CutterApi"
QT_MOC_LITERAL(1, 10, 11), // "statusError"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 5), // "error"
QT_MOC_LITERAL(4, 29, 10), // "statusLoad"
QT_MOC_LITERAL(5, 40, 7), // "message"
QT_MOC_LITERAL(6, 48, 8), // "nextStep"
QT_MOC_LITERAL(7, 57, 13), // "checkProgress"
QT_MOC_LITERAL(8, 71, 13) // "readResponse2"

    },
    "CutterApi\0statusError\0\0error\0statusLoad\0"
    "message\0nextStep\0checkProgress\0"
    "readResponse2"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CutterApi[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    1,   42,    2, 0x06 /* Public */,
       6,    0,   45,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   46,    2, 0x08 /* Private */,
       8,    0,   47,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CutterApi::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CutterApi *_t = static_cast<CutterApi *>(_o);
        switch (_id) {
        case 0: _t->statusError((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->statusLoad((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->nextStep(); break;
        case 3: _t->checkProgress(); break;
        case 4: _t->readResponse2(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CutterApi::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CutterApi::statusError)) {
                *result = 0;
            }
        }
        {
            typedef void (CutterApi::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CutterApi::statusLoad)) {
                *result = 1;
            }
        }
        {
            typedef void (CutterApi::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CutterApi::nextStep)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject CutterApi::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CutterApi.data,
      qt_meta_data_CutterApi,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CutterApi::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CutterApi::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CutterApi.stringdata))
        return static_cast<void*>(const_cast< CutterApi*>(this));
    return QObject::qt_metacast(_clname);
}

int CutterApi::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void CutterApi::statusError(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CutterApi::statusLoad(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CutterApi::nextStep()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
