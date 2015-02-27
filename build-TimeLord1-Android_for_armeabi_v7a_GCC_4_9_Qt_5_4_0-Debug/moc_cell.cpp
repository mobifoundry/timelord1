/****************************************************************************
** Meta object code from reading C++ file 'cell.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../TimeLord1/cell.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cell.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Cell_t {
    QByteArrayData data[18];
    char stringdata[170];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Cell_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Cell_t qt_meta_stringdata_Cell = {
    {
QT_MOC_LITERAL(0, 0, 4), // "Cell"
QT_MOC_LITERAL(1, 5, 20), // "signatureTypeChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 15), // "positionChanged"
QT_MOC_LITERAL(4, 43, 12), // "widthChanged"
QT_MOC_LITERAL(5, 56, 13), // "heightChanged"
QT_MOC_LITERAL(6, 70, 8), // "xChanged"
QT_MOC_LITERAL(7, 79, 8), // "yChanged"
QT_MOC_LITERAL(8, 88, 15), // "rotationChanged"
QT_MOC_LITERAL(9, 104, 11), // "textChanged"
QT_MOC_LITERAL(10, 116, 13), // "signatureType"
QT_MOC_LITERAL(11, 130, 8), // "position"
QT_MOC_LITERAL(12, 139, 5), // "width"
QT_MOC_LITERAL(13, 145, 6), // "height"
QT_MOC_LITERAL(14, 152, 1), // "x"
QT_MOC_LITERAL(15, 154, 1), // "y"
QT_MOC_LITERAL(16, 156, 8), // "rotation"
QT_MOC_LITERAL(17, 165, 4) // "text"

    },
    "Cell\0signatureTypeChanged\0\0positionChanged\0"
    "widthChanged\0heightChanged\0xChanged\0"
    "yChanged\0rotationChanged\0textChanged\0"
    "signatureType\0position\0width\0height\0"
    "x\0y\0rotation\0text"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Cell[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       8,   62, // properties
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
      10, QMetaType::QString, 0x00495103,
      11, QMetaType::Int, 0x00495103,
      12, QMetaType::Float, 0x00495103,
      13, QMetaType::Float, 0x00495103,
      14, QMetaType::Float, 0x00495103,
      15, QMetaType::Float, 0x00495103,
      16, QMetaType::Int, 0x00495103,
      17, QMetaType::QString, 0x00495103,

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

void Cell::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Cell *_t = static_cast<Cell *>(_o);
        switch (_id) {
        case 0: _t->signatureTypeChanged(); break;
        case 1: _t->positionChanged(); break;
        case 2: _t->widthChanged(); break;
        case 3: _t->heightChanged(); break;
        case 4: _t->xChanged(); break;
        case 5: _t->yChanged(); break;
        case 6: _t->rotationChanged(); break;
        case 7: _t->textChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Cell::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Cell::signatureTypeChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (Cell::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Cell::positionChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (Cell::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Cell::widthChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (Cell::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Cell::heightChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (Cell::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Cell::xChanged)) {
                *result = 4;
            }
        }
        {
            typedef void (Cell::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Cell::yChanged)) {
                *result = 5;
            }
        }
        {
            typedef void (Cell::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Cell::rotationChanged)) {
                *result = 6;
            }
        }
        {
            typedef void (Cell::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Cell::textChanged)) {
                *result = 7;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Cell::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Cell.data,
      qt_meta_data_Cell,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Cell::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Cell::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Cell.stringdata))
        return static_cast<void*>(const_cast< Cell*>(this));
    return QObject::qt_metacast(_clname);
}

int Cell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        case 0: *reinterpret_cast< QString*>(_v) = signatureType(); break;
        case 1: *reinterpret_cast< int*>(_v) = position(); break;
        case 2: *reinterpret_cast< float*>(_v) = width(); break;
        case 3: *reinterpret_cast< float*>(_v) = height(); break;
        case 4: *reinterpret_cast< float*>(_v) = x(); break;
        case 5: *reinterpret_cast< float*>(_v) = y(); break;
        case 6: *reinterpret_cast< int*>(_v) = rotation(); break;
        case 7: *reinterpret_cast< QString*>(_v) = text(); break;
        default: break;
        }
        _id -= 8;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setSignatureType(*reinterpret_cast< QString*>(_v)); break;
        case 1: setPosition(*reinterpret_cast< int*>(_v)); break;
        case 2: setWidth(*reinterpret_cast< float*>(_v)); break;
        case 3: setHeight(*reinterpret_cast< float*>(_v)); break;
        case 4: setX(*reinterpret_cast< float*>(_v)); break;
        case 5: setY(*reinterpret_cast< float*>(_v)); break;
        case 6: setRotation(*reinterpret_cast< int*>(_v)); break;
        case 7: setText(*reinterpret_cast< QString*>(_v)); break;
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
void Cell::signatureTypeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void Cell::positionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void Cell::widthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void Cell::heightChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void Cell::xChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void Cell::yChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void Cell::rotationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}

// SIGNAL 7
void Cell::textChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
