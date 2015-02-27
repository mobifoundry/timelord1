/****************************************************************************
** Meta object code from reading C++ file 'cuttingcourse.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../TimeLord1/cuttingcourse.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cuttingcourse.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CuttingCourse_t {
    QByteArrayData data[19];
    char stringdata[236];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CuttingCourse_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CuttingCourse_t qt_meta_stringdata_CuttingCourse = {
    {
QT_MOC_LITERAL(0, 0, 13), // "CuttingCourse"
QT_MOC_LITERAL(1, 14, 11), // "nameChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 14), // "programChanged"
QT_MOC_LITERAL(4, 42, 17), // "lastUpdateChanged"
QT_MOC_LITERAL(5, 60, 13), // "authorChanged"
QT_MOC_LITERAL(6, 74, 12), // "pstIdChanged"
QT_MOC_LITERAL(7, 87, 17), // "pstVersionChanged"
QT_MOC_LITERAL(8, 105, 23), // "generatorVersionChanged"
QT_MOC_LITERAL(9, 129, 17), // "createDateChanged"
QT_MOC_LITERAL(10, 147, 12), // "stepsChanged"
QT_MOC_LITERAL(11, 160, 4), // "name"
QT_MOC_LITERAL(12, 165, 7), // "program"
QT_MOC_LITERAL(13, 173, 10), // "lastUpdate"
QT_MOC_LITERAL(14, 184, 6), // "author"
QT_MOC_LITERAL(15, 191, 5), // "pstId"
QT_MOC_LITERAL(16, 197, 10), // "pstVersion"
QT_MOC_LITERAL(17, 208, 16), // "generatorVersion"
QT_MOC_LITERAL(18, 225, 10) // "createDate"

    },
    "CuttingCourse\0nameChanged\0\0programChanged\0"
    "lastUpdateChanged\0authorChanged\0"
    "pstIdChanged\0pstVersionChanged\0"
    "generatorVersionChanged\0createDateChanged\0"
    "stepsChanged\0name\0program\0lastUpdate\0"
    "author\0pstId\0pstVersion\0generatorVersion\0"
    "createDate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CuttingCourse[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       8,   68, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    0,   60,    2, 0x06 /* Public */,
       4,    0,   61,    2, 0x06 /* Public */,
       5,    0,   62,    2, 0x06 /* Public */,
       6,    0,   63,    2, 0x06 /* Public */,
       7,    0,   64,    2, 0x06 /* Public */,
       8,    0,   65,    2, 0x06 /* Public */,
       9,    0,   66,    2, 0x06 /* Public */,
      10,    0,   67,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      11, QMetaType::QString, 0x00495103,
      12, QMetaType::QString, 0x00495103,
      13, QMetaType::QString, 0x00495103,
      14, QMetaType::QString, 0x00495103,
      15, QMetaType::QString, 0x00495103,
      16, QMetaType::QString, 0x00495103,
      17, QMetaType::QString, 0x00495103,
      18, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,
       7,

       0        // eod
};

void CuttingCourse::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CuttingCourse *_t = static_cast<CuttingCourse *>(_o);
        switch (_id) {
        case 0: _t->nameChanged(); break;
        case 1: _t->programChanged(); break;
        case 2: _t->lastUpdateChanged(); break;
        case 3: _t->authorChanged(); break;
        case 4: _t->pstIdChanged(); break;
        case 5: _t->pstVersionChanged(); break;
        case 6: _t->generatorVersionChanged(); break;
        case 7: _t->createDateChanged(); break;
        case 8: _t->stepsChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CuttingCourse::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CuttingCourse::nameChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (CuttingCourse::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CuttingCourse::programChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (CuttingCourse::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CuttingCourse::lastUpdateChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (CuttingCourse::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CuttingCourse::authorChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (CuttingCourse::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CuttingCourse::pstIdChanged)) {
                *result = 4;
            }
        }
        {
            typedef void (CuttingCourse::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CuttingCourse::pstVersionChanged)) {
                *result = 5;
            }
        }
        {
            typedef void (CuttingCourse::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CuttingCourse::generatorVersionChanged)) {
                *result = 6;
            }
        }
        {
            typedef void (CuttingCourse::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CuttingCourse::createDateChanged)) {
                *result = 7;
            }
        }
        {
            typedef void (CuttingCourse::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CuttingCourse::stepsChanged)) {
                *result = 8;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject CuttingCourse::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CuttingCourse.data,
      qt_meta_data_CuttingCourse,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CuttingCourse::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CuttingCourse::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CuttingCourse.stringdata))
        return static_cast<void*>(const_cast< CuttingCourse*>(this));
    return QObject::qt_metacast(_clname);
}

int CuttingCourse::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = name(); break;
        case 1: *reinterpret_cast< QString*>(_v) = program(); break;
        case 2: *reinterpret_cast< QString*>(_v) = lastUpdate(); break;
        case 3: *reinterpret_cast< QString*>(_v) = author(); break;
        case 4: *reinterpret_cast< QString*>(_v) = pstId(); break;
        case 5: *reinterpret_cast< QString*>(_v) = pstVersion(); break;
        case 6: *reinterpret_cast< QString*>(_v) = generatorVersion(); break;
        case 7: *reinterpret_cast< QString*>(_v) = createDate(); break;
        default: break;
        }
        _id -= 8;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setName(*reinterpret_cast< QString*>(_v)); break;
        case 1: setProgram(*reinterpret_cast< QString*>(_v)); break;
        case 2: setLastUpdate(*reinterpret_cast< QString*>(_v)); break;
        case 3: setAuthor(*reinterpret_cast< QString*>(_v)); break;
        case 4: setPstId(*reinterpret_cast< QString*>(_v)); break;
        case 5: setPstVersion(*reinterpret_cast< QString*>(_v)); break;
        case 6: setGeneratorVersion(*reinterpret_cast< QString*>(_v)); break;
        case 7: setCreateDate(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
        _id -= 8;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void CuttingCourse::nameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void CuttingCourse::programChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void CuttingCourse::lastUpdateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void CuttingCourse::authorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void CuttingCourse::pstIdChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void CuttingCourse::pstVersionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void CuttingCourse::generatorVersionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}

// SIGNAL 7
void CuttingCourse::createDateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, Q_NULLPTR);
}

// SIGNAL 8
void CuttingCourse::stepsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
