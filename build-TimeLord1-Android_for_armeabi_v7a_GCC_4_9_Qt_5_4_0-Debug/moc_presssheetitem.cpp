/****************************************************************************
** Meta object code from reading C++ file 'presssheetitem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../TimeLord1/presssheetitem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'presssheetitem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PressSheetItem_t {
    QByteArrayData data[21];
    char stringdata[227];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PressSheetItem_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PressSheetItem_t qt_meta_stringdata_PressSheetItem = {
    {
QT_MOC_LITERAL(0, 0, 14), // "PressSheetItem"
QT_MOC_LITERAL(1, 15, 9), // "idChanged"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 3), // "arg"
QT_MOC_LITERAL(4, 30, 15), // "positionChanged"
QT_MOC_LITERAL(5, 46, 10), // "urlChanged"
QT_MOC_LITERAL(6, 57, 19), // "pressSheetIdChanged"
QT_MOC_LITERAL(7, 77, 14), // "orderIdChanged"
QT_MOC_LITERAL(8, 92, 18), // "orderItemIdChanged"
QT_MOC_LITERAL(9, 111, 5), // "setId"
QT_MOC_LITERAL(10, 117, 11), // "setPosition"
QT_MOC_LITERAL(11, 129, 6), // "setUrl"
QT_MOC_LITERAL(12, 136, 15), // "setPressSheetId"
QT_MOC_LITERAL(13, 152, 10), // "setOrderId"
QT_MOC_LITERAL(14, 163, 14), // "setOrderItemId"
QT_MOC_LITERAL(15, 178, 2), // "id"
QT_MOC_LITERAL(16, 181, 8), // "position"
QT_MOC_LITERAL(17, 190, 3), // "url"
QT_MOC_LITERAL(18, 194, 12), // "pressSheetId"
QT_MOC_LITERAL(19, 207, 7), // "orderId"
QT_MOC_LITERAL(20, 215, 11) // "orderItemId"

    },
    "PressSheetItem\0idChanged\0\0arg\0"
    "positionChanged\0urlChanged\0"
    "pressSheetIdChanged\0orderIdChanged\0"
    "orderItemIdChanged\0setId\0setPosition\0"
    "setUrl\0setPressSheetId\0setOrderId\0"
    "setOrderItemId\0id\0position\0url\0"
    "pressSheetId\0orderId\0orderItemId"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PressSheetItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       6,  110, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       4,    1,   77,    2, 0x06 /* Public */,
       5,    1,   80,    2, 0x06 /* Public */,
       6,    1,   83,    2, 0x06 /* Public */,
       7,    1,   86,    2, 0x06 /* Public */,
       8,    1,   89,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   92,    2, 0x0a /* Public */,
      10,    1,   95,    2, 0x0a /* Public */,
      11,    1,   98,    2, 0x0a /* Public */,
      12,    1,  101,    2, 0x0a /* Public */,
      13,    1,  104,    2, 0x0a /* Public */,
      14,    1,  107,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::LongLong,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::LongLong,    3,
    QMetaType::Void, QMetaType::LongLong,    3,
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::LongLong,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::LongLong,    3,
    QMetaType::Void, QMetaType::LongLong,    3,
    QMetaType::Void, QMetaType::QString,    3,

 // properties: name, type, flags
      15, QMetaType::LongLong, 0x00495103,
      16, QMetaType::Int, 0x00495103,
      17, QMetaType::QString, 0x00495103,
      18, QMetaType::LongLong, 0x00495103,
      19, QMetaType::LongLong, 0x00495103,
      20, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,

       0        // eod
};

void PressSheetItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PressSheetItem *_t = static_cast<PressSheetItem *>(_o);
        switch (_id) {
        case 0: _t->idChanged((*reinterpret_cast< long long(*)>(_a[1]))); break;
        case 1: _t->positionChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->urlChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->pressSheetIdChanged((*reinterpret_cast< long long(*)>(_a[1]))); break;
        case 4: _t->orderIdChanged((*reinterpret_cast< long long(*)>(_a[1]))); break;
        case 5: _t->orderItemIdChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->setId((*reinterpret_cast< long long(*)>(_a[1]))); break;
        case 7: _t->setPosition((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->setUrl((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->setPressSheetId((*reinterpret_cast< long long(*)>(_a[1]))); break;
        case 10: _t->setOrderId((*reinterpret_cast< long long(*)>(_a[1]))); break;
        case 11: _t->setOrderItemId((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PressSheetItem::*_t)(long long );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PressSheetItem::idChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (PressSheetItem::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PressSheetItem::positionChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (PressSheetItem::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PressSheetItem::urlChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (PressSheetItem::*_t)(long long );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PressSheetItem::pressSheetIdChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (PressSheetItem::*_t)(long long );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PressSheetItem::orderIdChanged)) {
                *result = 4;
            }
        }
        {
            typedef void (PressSheetItem::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PressSheetItem::orderItemIdChanged)) {
                *result = 5;
            }
        }
    }
}

const QMetaObject PressSheetItem::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PressSheetItem.data,
      qt_meta_data_PressSheetItem,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PressSheetItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PressSheetItem::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PressSheetItem.stringdata))
        return static_cast<void*>(const_cast< PressSheetItem*>(this));
    return QObject::qt_metacast(_clname);
}

int PressSheetItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< long long*>(_v) = id(); break;
        case 1: *reinterpret_cast< int*>(_v) = position(); break;
        case 2: *reinterpret_cast< QString*>(_v) = url(); break;
        case 3: *reinterpret_cast< long long*>(_v) = pressSheetId(); break;
        case 4: *reinterpret_cast< long long*>(_v) = orderId(); break;
        case 5: *reinterpret_cast< QString*>(_v) = orderItemId(); break;
        default: break;
        }
        _id -= 6;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setId(*reinterpret_cast< long long*>(_v)); break;
        case 1: setPosition(*reinterpret_cast< int*>(_v)); break;
        case 2: setUrl(*reinterpret_cast< QString*>(_v)); break;
        case 3: setPressSheetId(*reinterpret_cast< long long*>(_v)); break;
        case 4: setOrderId(*reinterpret_cast< long long*>(_v)); break;
        case 5: setOrderItemId(*reinterpret_cast< QString*>(_v)); break;
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
void PressSheetItem::idChanged(long long _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PressSheetItem::positionChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PressSheetItem::urlChanged(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void PressSheetItem::pressSheetIdChanged(long long _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void PressSheetItem::orderIdChanged(long long _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void PressSheetItem::orderItemIdChanged(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
