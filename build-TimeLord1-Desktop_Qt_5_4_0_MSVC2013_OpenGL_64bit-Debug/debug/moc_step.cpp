/****************************************************************************
** Meta object code from reading C++ file 'step.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../TimeLord1/step.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'step.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Step_t {
    QByteArrayData data[17];
    char stringdata[210];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Step_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Step_t qt_meta_stringdata_Step = {
    {
QT_MOC_LITERAL(0, 0, 4), // "Step"
QT_MOC_LITERAL(1, 5, 18), // "cutPositionChanged"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 13), // "rotateChanged"
QT_MOC_LITERAL(4, 39, 16), // "cutLengthChanged"
QT_MOC_LITERAL(5, 56, 12), // "wasteChanged"
QT_MOC_LITERAL(6, 69, 18), // "outLogNamesChanged"
QT_MOC_LITERAL(7, 88, 18), // "putLogNamesChanged"
QT_MOC_LITERAL(8, 107, 15), // "finishedChanged"
QT_MOC_LITERAL(9, 123, 18), // "cuttingLogsChanged"
QT_MOC_LITERAL(10, 142, 6), // "rotate"
QT_MOC_LITERAL(11, 149, 11), // "cutPosition"
QT_MOC_LITERAL(12, 161, 9), // "cutLength"
QT_MOC_LITERAL(13, 171, 5), // "waste"
QT_MOC_LITERAL(14, 177, 11), // "outLogNames"
QT_MOC_LITERAL(15, 189, 11), // "putLogNames"
QT_MOC_LITERAL(16, 201, 8) // "finished"

    },
    "Step\0cutPositionChanged\0\0rotateChanged\0"
    "cutLengthChanged\0wasteChanged\0"
    "outLogNamesChanged\0putLogNamesChanged\0"
    "finishedChanged\0cuttingLogsChanged\0"
    "rotate\0cutPosition\0cutLength\0waste\0"
    "outLogNames\0putLogNames\0finished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Step[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       7,   62, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,
       4,    0,   56,    2, 0x06 /* Public */,
       5,    0,   57,    2, 0x06 /* Public */,
       6,    0,   58,    2, 0x06 /* Public */,
       7,    0,   59,    2, 0x06 /* Public */,
       8,    0,   60,    2, 0x06 /* Public */,
       9,    0,   61,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      10, QMetaType::Int, 0x00495103,
      11, QMetaType::Float, 0x00495103,
      12, QMetaType::Float, 0x00495103,
      13, QMetaType::Bool, 0x00495103,
      14, QMetaType::QStringList, 0x00495103,
      15, QMetaType::QStringList, 0x00495103,
      16, QMetaType::Int, 0x00495103,

 // properties: notify_signal_id
       1,
       0,
       2,
       3,
       4,
       5,
       6,

       0        // eod
};

void Step::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Step *_t = static_cast<Step *>(_o);
        switch (_id) {
        case 0: _t->cutPositionChanged(); break;
        case 1: _t->rotateChanged(); break;
        case 2: _t->cutLengthChanged(); break;
        case 3: _t->wasteChanged(); break;
        case 4: _t->outLogNamesChanged(); break;
        case 5: _t->putLogNamesChanged(); break;
        case 6: _t->finishedChanged(); break;
        case 7: _t->cuttingLogsChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Step::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Step::cutPositionChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (Step::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Step::rotateChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (Step::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Step::cutLengthChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (Step::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Step::wasteChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (Step::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Step::outLogNamesChanged)) {
                *result = 4;
            }
        }
        {
            typedef void (Step::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Step::putLogNamesChanged)) {
                *result = 5;
            }
        }
        {
            typedef void (Step::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Step::finishedChanged)) {
                *result = 6;
            }
        }
        {
            typedef void (Step::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Step::cuttingLogsChanged)) {
                *result = 7;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Step::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Step.data,
      qt_meta_data_Step,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Step::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Step::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Step.stringdata))
        return static_cast<void*>(const_cast< Step*>(this));
    return QObject::qt_metacast(_clname);
}

int Step::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = rotate(); break;
        case 1: *reinterpret_cast< float*>(_v) = cutPosition(); break;
        case 2: *reinterpret_cast< float*>(_v) = cutLength(); break;
        case 3: *reinterpret_cast< bool*>(_v) = waste(); break;
        case 4: *reinterpret_cast< QStringList*>(_v) = outLogNames(); break;
        case 5: *reinterpret_cast< QStringList*>(_v) = putLogNames(); break;
        case 6: *reinterpret_cast< int*>(_v) = finished(); break;
        default: break;
        }
        _id -= 7;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setRotate(*reinterpret_cast< int*>(_v)); break;
        case 1: setCutPosition(*reinterpret_cast< float*>(_v)); break;
        case 2: setCutLength(*reinterpret_cast< float*>(_v)); break;
        case 3: setWaste(*reinterpret_cast< bool*>(_v)); break;
        case 4: setOutLogNames(*reinterpret_cast< QStringList*>(_v)); break;
        case 5: setPutLogNames(*reinterpret_cast< QStringList*>(_v)); break;
        case 6: setFinished(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
        _id -= 7;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Step::cutPositionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void Step::rotateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void Step::cutLengthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void Step::wasteChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void Step::outLogNamesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void Step::putLogNamesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void Step::finishedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}

// SIGNAL 7
void Step::cuttingLogsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
