/****************************************************************************
** Meta object code from reading C++ file 'profitapimethods.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../TimeLord1/profitapimethods.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'profitapimethods.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AuthorizationProfit_t {
    QByteArrayData data[3];
    char stringdata[40];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AuthorizationProfit_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AuthorizationProfit_t qt_meta_stringdata_AuthorizationProfit = {
    {
QT_MOC_LITERAL(0, 0, 19), // "AuthorizationProfit"
QT_MOC_LITERAL(1, 20, 18), // "onResponseFinished"
QT_MOC_LITERAL(2, 39, 0) // ""

    },
    "AuthorizationProfit\0onResponseFinished\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AuthorizationProfit[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QJsonDocument,    2,

       0        // eod
};

void AuthorizationProfit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AuthorizationProfit *_t = static_cast<AuthorizationProfit *>(_o);
        switch (_id) {
        case 0: _t->onResponseFinished((*reinterpret_cast< const QJsonDocument(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject AuthorizationProfit::staticMetaObject = {
    { &AbstractApiMethod::staticMetaObject, qt_meta_stringdata_AuthorizationProfit.data,
      qt_meta_data_AuthorizationProfit,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AuthorizationProfit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AuthorizationProfit::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AuthorizationProfit.stringdata))
        return static_cast<void*>(const_cast< AuthorizationProfit*>(this));
    return AbstractApiMethod::qt_metacast(_clname);
}

int AuthorizationProfit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractApiMethod::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_GetPressSheet_t {
    QByteArrayData data[7];
    char stringdata[103];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GetPressSheet_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GetPressSheet_t qt_meta_stringdata_GetPressSheet = {
    {
QT_MOC_LITERAL(0, 0, 13), // "GetPressSheet"
QT_MOC_LITERAL(1, 14, 28), // "setModelPressSheetsListToQML"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 15), // "QList<QObject*>"
QT_MOC_LITERAL(4, 60, 10), // "objectList"
QT_MOC_LITERAL(5, 71, 18), // "onResponseFinished"
QT_MOC_LITERAL(6, 90, 12) // "jsonResponse"

    },
    "GetPressSheet\0setModelPressSheetsListToQML\0"
    "\0QList<QObject*>\0objectList\0"
    "onResponseFinished\0jsonResponse"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GetPressSheet[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   27,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QJsonDocument,    6,

       0        // eod
};

void GetPressSheet::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GetPressSheet *_t = static_cast<GetPressSheet *>(_o);
        switch (_id) {
        case 0: _t->setModelPressSheetsListToQML((*reinterpret_cast< QList<QObject*>(*)>(_a[1]))); break;
        case 1: _t->onResponseFinished((*reinterpret_cast< const QJsonDocument(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QObject*> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (GetPressSheet::*_t)(QList<QObject*> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GetPressSheet::setModelPressSheetsListToQML)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject GetPressSheet::staticMetaObject = {
    { &AbstractApiMethod::staticMetaObject, qt_meta_stringdata_GetPressSheet.data,
      qt_meta_data_GetPressSheet,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *GetPressSheet::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GetPressSheet::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_GetPressSheet.stringdata))
        return static_cast<void*>(const_cast< GetPressSheet*>(this));
    return AbstractApiMethod::qt_metacast(_clname);
}

int GetPressSheet::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractApiMethod::qt_metacall(_c, _id, _a);
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
void GetPressSheet::setModelPressSheetsListToQML(QList<QObject*> _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_GetPressSheetsList_t {
    QByteArrayData data[7];
    char stringdata[108];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GetPressSheetsList_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GetPressSheetsList_t qt_meta_stringdata_GetPressSheetsList = {
    {
QT_MOC_LITERAL(0, 0, 18), // "GetPressSheetsList"
QT_MOC_LITERAL(1, 19, 28), // "setModelPressSheetsListToQML"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 15), // "QList<QObject*>"
QT_MOC_LITERAL(4, 65, 10), // "objectList"
QT_MOC_LITERAL(5, 76, 18), // "onResponseFinished"
QT_MOC_LITERAL(6, 95, 12) // "jsonResponse"

    },
    "GetPressSheetsList\0setModelPressSheetsListToQML\0"
    "\0QList<QObject*>\0objectList\0"
    "onResponseFinished\0jsonResponse"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GetPressSheetsList[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   27,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QJsonDocument,    6,

       0        // eod
};

void GetPressSheetsList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GetPressSheetsList *_t = static_cast<GetPressSheetsList *>(_o);
        switch (_id) {
        case 0: _t->setModelPressSheetsListToQML((*reinterpret_cast< QList<QObject*>(*)>(_a[1]))); break;
        case 1: _t->onResponseFinished((*reinterpret_cast< const QJsonDocument(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QObject*> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (GetPressSheetsList::*_t)(QList<QObject*> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GetPressSheetsList::setModelPressSheetsListToQML)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject GetPressSheetsList::staticMetaObject = {
    { &AbstractApiMethod::staticMetaObject, qt_meta_stringdata_GetPressSheetsList.data,
      qt_meta_data_GetPressSheetsList,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *GetPressSheetsList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GetPressSheetsList::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_GetPressSheetsList.stringdata))
        return static_cast<void*>(const_cast< GetPressSheetsList*>(this));
    return AbstractApiMethod::qt_metacast(_clname);
}

int GetPressSheetsList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractApiMethod::qt_metacall(_c, _id, _a);
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
void GetPressSheetsList::setModelPressSheetsListToQML(QList<QObject*> _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_GetPressSheetTemplate_t {
    QByteArrayData data[6];
    char stringdata[100];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GetPressSheetTemplate_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GetPressSheetTemplate_t qt_meta_stringdata_GetPressSheetTemplate = {
    {
QT_MOC_LITERAL(0, 0, 21), // "GetPressSheetTemplate"
QT_MOC_LITERAL(1, 22, 31), // "setModelPressSheetTemplateToQML"
QT_MOC_LITERAL(2, 54, 0), // ""
QT_MOC_LITERAL(3, 55, 12), // "pstByteArray"
QT_MOC_LITERAL(4, 68, 18), // "onResponseFinished"
QT_MOC_LITERAL(5, 87, 12) // "jsonResponse"

    },
    "GetPressSheetTemplate\0"
    "setModelPressSheetTemplateToQML\0\0"
    "pstByteArray\0onResponseFinished\0"
    "jsonResponse"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GetPressSheetTemplate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   27,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QByteArray,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QJsonDocument,    5,

       0        // eod
};

void GetPressSheetTemplate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GetPressSheetTemplate *_t = static_cast<GetPressSheetTemplate *>(_o);
        switch (_id) {
        case 0: _t->setModelPressSheetTemplateToQML((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 1: _t->onResponseFinished((*reinterpret_cast< const QJsonDocument(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (GetPressSheetTemplate::*_t)(const QByteArray );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GetPressSheetTemplate::setModelPressSheetTemplateToQML)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject GetPressSheetTemplate::staticMetaObject = {
    { &AbstractApiMethod::staticMetaObject, qt_meta_stringdata_GetPressSheetTemplate.data,
      qt_meta_data_GetPressSheetTemplate,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *GetPressSheetTemplate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GetPressSheetTemplate::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_GetPressSheetTemplate.stringdata))
        return static_cast<void*>(const_cast< GetPressSheetTemplate*>(this));
    return AbstractApiMethod::qt_metacast(_clname);
}

int GetPressSheetTemplate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractApiMethod::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void GetPressSheetTemplate::setModelPressSheetTemplateToQML(const QByteArray _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_GetPressSheetItemsList_t {
    QByteArrayData data[10];
    char stringdata[155];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GetPressSheetItemsList_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GetPressSheetItemsList_t qt_meta_stringdata_GetPressSheetItemsList = {
    {
QT_MOC_LITERAL(0, 0, 22), // "GetPressSheetItemsList"
QT_MOC_LITERAL(1, 23, 32), // "setModelPressSheetItemsListToQML"
QT_MOC_LITERAL(2, 56, 0), // ""
QT_MOC_LITERAL(3, 57, 15), // "QList<QObject*>"
QT_MOC_LITERAL(4, 73, 14), // "jsonObjectList"
QT_MOC_LITERAL(5, 88, 14), // "queryOrderItem"
QT_MOC_LITERAL(6, 103, 7), // "orderId"
QT_MOC_LITERAL(7, 111, 11), // "orderItemId"
QT_MOC_LITERAL(8, 123, 18), // "onResponseFinished"
QT_MOC_LITERAL(9, 142, 12) // "jsonResponse"

    },
    "GetPressSheetItemsList\0"
    "setModelPressSheetItemsListToQML\0\0"
    "QList<QObject*>\0jsonObjectList\0"
    "queryOrderItem\0orderId\0orderItemId\0"
    "onResponseFinished\0jsonResponse"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GetPressSheetItemsList[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       5,    2,   32,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   37,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::LongLong, QMetaType::QString,    6,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::QJsonDocument,    9,

       0        // eod
};

void GetPressSheetItemsList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GetPressSheetItemsList *_t = static_cast<GetPressSheetItemsList *>(_o);
        switch (_id) {
        case 0: _t->setModelPressSheetItemsListToQML((*reinterpret_cast< QList<QObject*>(*)>(_a[1]))); break;
        case 1: _t->queryOrderItem((*reinterpret_cast< const long long(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->onResponseFinished((*reinterpret_cast< const QJsonDocument(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QObject*> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (GetPressSheetItemsList::*_t)(QList<QObject*> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GetPressSheetItemsList::setModelPressSheetItemsListToQML)) {
                *result = 0;
            }
        }
        {
            typedef void (GetPressSheetItemsList::*_t)(const long long , const QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GetPressSheetItemsList::queryOrderItem)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject GetPressSheetItemsList::staticMetaObject = {
    { &AbstractApiMethod::staticMetaObject, qt_meta_stringdata_GetPressSheetItemsList.data,
      qt_meta_data_GetPressSheetItemsList,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *GetPressSheetItemsList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GetPressSheetItemsList::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_GetPressSheetItemsList.stringdata))
        return static_cast<void*>(const_cast< GetPressSheetItemsList*>(this));
    return AbstractApiMethod::qt_metacast(_clname);
}

int GetPressSheetItemsList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractApiMethod::qt_metacall(_c, _id, _a);
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
void GetPressSheetItemsList::setModelPressSheetItemsListToQML(QList<QObject*> _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GetPressSheetItemsList::queryOrderItem(const long long _t1, const QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_GetOrderItem_t {
    QByteArrayData data[5];
    char stringdata[68];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GetOrderItem_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GetOrderItem_t qt_meta_stringdata_GetOrderItem = {
    {
QT_MOC_LITERAL(0, 0, 12), // "GetOrderItem"
QT_MOC_LITERAL(1, 13, 22), // "setModelOrderItemToQML"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 15), // "QList<QObject*>"
QT_MOC_LITERAL(4, 53, 14) // "jsonObjectList"

    },
    "GetOrderItem\0setModelOrderItemToQML\0"
    "\0QList<QObject*>\0jsonObjectList"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GetOrderItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void GetOrderItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GetOrderItem *_t = static_cast<GetOrderItem *>(_o);
        switch (_id) {
        case 0: _t->setModelOrderItemToQML((*reinterpret_cast< QList<QObject*>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QObject*> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (GetOrderItem::*_t)(QList<QObject*> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GetOrderItem::setModelOrderItemToQML)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject GetOrderItem::staticMetaObject = {
    { &AbstractApiMethod::staticMetaObject, qt_meta_stringdata_GetOrderItem.data,
      qt_meta_data_GetOrderItem,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *GetOrderItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GetOrderItem::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_GetOrderItem.stringdata))
        return static_cast<void*>(const_cast< GetOrderItem*>(this));
    return AbstractApiMethod::qt_metacast(_clname);
}

int GetOrderItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractApiMethod::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void GetOrderItem::setModelOrderItemToQML(QList<QObject*> _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_SetStatusWorkflow_t {
    QByteArrayData data[5];
    char stringdata[73];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SetStatusWorkflow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SetStatusWorkflow_t qt_meta_stringdata_SetStatusWorkflow = {
    {
QT_MOC_LITERAL(0, 0, 17), // "SetStatusWorkflow"
QT_MOC_LITERAL(1, 18, 22), // "setModelOrderItemToQML"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 15), // "QList<QObject*>"
QT_MOC_LITERAL(4, 58, 14) // "jsonObjectList"

    },
    "SetStatusWorkflow\0setModelOrderItemToQML\0"
    "\0QList<QObject*>\0jsonObjectList"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SetStatusWorkflow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void SetStatusWorkflow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SetStatusWorkflow *_t = static_cast<SetStatusWorkflow *>(_o);
        switch (_id) {
        case 0: _t->setModelOrderItemToQML((*reinterpret_cast< QList<QObject*>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QObject*> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SetStatusWorkflow::*_t)(QList<QObject*> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SetStatusWorkflow::setModelOrderItemToQML)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject SetStatusWorkflow::staticMetaObject = {
    { &AbstractApiMethod::staticMetaObject, qt_meta_stringdata_SetStatusWorkflow.data,
      qt_meta_data_SetStatusWorkflow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SetStatusWorkflow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SetStatusWorkflow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SetStatusWorkflow.stringdata))
        return static_cast<void*>(const_cast< SetStatusWorkflow*>(this));
    return AbstractApiMethod::qt_metacast(_clname);
}

int SetStatusWorkflow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractApiMethod::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void SetStatusWorkflow::setModelOrderItemToQML(QList<QObject*> _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
