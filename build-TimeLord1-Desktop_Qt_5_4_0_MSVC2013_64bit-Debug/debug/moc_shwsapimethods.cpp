/****************************************************************************
** Meta object code from reading C++ file 'shwsapimethods.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../TimeLord1/shwsapimethods.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'shwsapimethods.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WakeUpShws_t {
    QByteArrayData data[4];
    char stringdata[44];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WakeUpShws_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WakeUpShws_t qt_meta_stringdata_WakeUpShws = {
    {
QT_MOC_LITERAL(0, 0, 10), // "WakeUpShws"
QT_MOC_LITERAL(1, 11, 18), // "onResponseFinished"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 12) // "jsonDocument"

    },
    "WakeUpShws\0onResponseFinished\0\0"
    "jsonDocument"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WakeUpShws[] = {

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
       1,    1,   19,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::QJsonDocument,    3,

       0        // eod
};

void WakeUpShws::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WakeUpShws *_t = static_cast<WakeUpShws *>(_o);
        switch (_id) {
        case 0: _t->onResponseFinished((*reinterpret_cast< const QJsonDocument(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject WakeUpShws::staticMetaObject = {
    { &AbstractApiMethod::staticMetaObject, qt_meta_stringdata_WakeUpShws.data,
      qt_meta_data_WakeUpShws,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WakeUpShws::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WakeUpShws::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WakeUpShws.stringdata))
        return static_cast<void*>(const_cast< WakeUpShws*>(this));
    return AbstractApiMethod::qt_metacast(_clname);
}

int WakeUpShws::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_CreateCuttingCourse_t {
    QByteArrayData data[7];
    char stringdata[105];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CreateCuttingCourse_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CreateCuttingCourse_t qt_meta_stringdata_CreateCuttingCourse = {
    {
QT_MOC_LITERAL(0, 0, 19), // "CreateCuttingCourse"
QT_MOC_LITERAL(1, 20, 22), // "sendCuttingCourseToQml"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 14), // "CuttingCourse*"
QT_MOC_LITERAL(4, 59, 13), // "cutCourseList"
QT_MOC_LITERAL(5, 73, 18), // "onResponseFinished"
QT_MOC_LITERAL(6, 92, 12) // "jsonDocument"

    },
    "CreateCuttingCourse\0sendCuttingCourseToQml\0"
    "\0CuttingCourse*\0cutCourseList\0"
    "onResponseFinished\0jsonDocument"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CreateCuttingCourse[] = {

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
       5,    1,   27,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QJsonDocument,    6,

       0        // eod
};

void CreateCuttingCourse::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CreateCuttingCourse *_t = static_cast<CreateCuttingCourse *>(_o);
        switch (_id) {
        case 0: _t->sendCuttingCourseToQml((*reinterpret_cast< CuttingCourse*(*)>(_a[1]))); break;
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
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< CuttingCourse* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CreateCuttingCourse::*_t)(CuttingCourse * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CreateCuttingCourse::sendCuttingCourseToQml)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject CreateCuttingCourse::staticMetaObject = {
    { &AbstractApiMethod::staticMetaObject, qt_meta_stringdata_CreateCuttingCourse.data,
      qt_meta_data_CreateCuttingCourse,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CreateCuttingCourse::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CreateCuttingCourse::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CreateCuttingCourse.stringdata))
        return static_cast<void*>(const_cast< CreateCuttingCourse*>(this));
    return AbstractApiMethod::qt_metacast(_clname);
}

int CreateCuttingCourse::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void CreateCuttingCourse::sendCuttingCourseToQml(CuttingCourse * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
