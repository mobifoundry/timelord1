/****************************************************************************
** Meta object code from reading C++ file 'presssheettemplate.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../TimeLord1/presssheettemplate.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'presssheettemplate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PressSheetTemplate_t {
    QByteArrayData data[17];
    char stringdata[179];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PressSheetTemplate_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PressSheetTemplate_t qt_meta_stringdata_PressSheetTemplate = {
    {
QT_MOC_LITERAL(0, 0, 18), // "PressSheetTemplate"
QT_MOC_LITERAL(1, 19, 9), // "idChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 10), // "urlChanged"
QT_MOC_LITERAL(4, 41, 14), // "versionChanged"
QT_MOC_LITERAL(5, 56, 14), // "enabledChanged"
QT_MOC_LITERAL(6, 71, 12), // "widthChanged"
QT_MOC_LITERAL(7, 84, 13), // "heightChanged"
QT_MOC_LITERAL(8, 98, 12), // "cellsChanged"
QT_MOC_LITERAL(9, 111, 2), // "id"
QT_MOC_LITERAL(10, 114, 7), // "version"
QT_MOC_LITERAL(11, 122, 3), // "url"
QT_MOC_LITERAL(12, 126, 7), // "enabled"
QT_MOC_LITERAL(13, 134, 5), // "width"
QT_MOC_LITERAL(14, 140, 6), // "height"
QT_MOC_LITERAL(15, 147, 5), // "cells"
QT_MOC_LITERAL(16, 153, 25) // "QQmlListProperty<QObject>"

    },
    "PressSheetTemplate\0idChanged\0\0urlChanged\0"
    "versionChanged\0enabledChanged\0"
    "widthChanged\0heightChanged\0cellsChanged\0"
    "id\0version\0url\0enabled\0width\0height\0"
    "cells\0QQmlListProperty<QObject>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PressSheetTemplate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       7,   56, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,
       4,    0,   51,    2, 0x06 /* Public */,
       5,    0,   52,    2, 0x06 /* Public */,
       6,    0,   53,    2, 0x06 /* Public */,
       7,    0,   54,    2, 0x06 /* Public */,
       8,    0,   55,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       9, QMetaType::QString, 0x00495103,
      10, QMetaType::QString, 0x00495103,
      11, QMetaType::QString, 0x00495103,
      12, QMetaType::Bool, 0x00495103,
      13, QMetaType::Int, 0x00495103,
      14, QMetaType::Int, 0x00495103,
      15, 0x80000000 | 16, 0x00495009,

 // properties: notify_signal_id
       0,
       2,
       1,
       3,
       4,
       5,
       6,

       0        // eod
};

void PressSheetTemplate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PressSheetTemplate *_t = static_cast<PressSheetTemplate *>(_o);
        switch (_id) {
        case 0: _t->idChanged(); break;
        case 1: _t->urlChanged(); break;
        case 2: _t->versionChanged(); break;
        case 3: _t->enabledChanged(); break;
        case 4: _t->widthChanged(); break;
        case 5: _t->heightChanged(); break;
        case 6: _t->cellsChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PressSheetTemplate::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PressSheetTemplate::idChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (PressSheetTemplate::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PressSheetTemplate::urlChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (PressSheetTemplate::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PressSheetTemplate::versionChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (PressSheetTemplate::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PressSheetTemplate::enabledChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (PressSheetTemplate::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PressSheetTemplate::widthChanged)) {
                *result = 4;
            }
        }
        {
            typedef void (PressSheetTemplate::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PressSheetTemplate::heightChanged)) {
                *result = 5;
            }
        }
        {
            typedef void (PressSheetTemplate::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PressSheetTemplate::cellsChanged)) {
                *result = 6;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject PressSheetTemplate::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PressSheetTemplate.data,
      qt_meta_data_PressSheetTemplate,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PressSheetTemplate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PressSheetTemplate::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PressSheetTemplate.stringdata))
        return static_cast<void*>(const_cast< PressSheetTemplate*>(this));
    return QObject::qt_metacast(_clname);
}

int PressSheetTemplate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = id(); break;
        case 1: *reinterpret_cast< QString*>(_v) = version(); break;
        case 2: *reinterpret_cast< QString*>(_v) = url(); break;
        case 3: *reinterpret_cast< bool*>(_v) = enabled(); break;
        case 4: *reinterpret_cast< int*>(_v) = width(); break;
        case 5: *reinterpret_cast< int*>(_v) = height(); break;
        case 6: *reinterpret_cast< QQmlListProperty<QObject>*>(_v) = qmlCells(); break;
        default: break;
        }
        _id -= 7;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setId(*reinterpret_cast< QString*>(_v)); break;
        case 1: setVersion(*reinterpret_cast< QString*>(_v)); break;
        case 2: setUrl(*reinterpret_cast< QString*>(_v)); break;
        case 3: setEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 4: setWidth(*reinterpret_cast< int*>(_v)); break;
        case 5: setHeight(*reinterpret_cast< int*>(_v)); break;
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
void PressSheetTemplate::idChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void PressSheetTemplate::urlChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void PressSheetTemplate::versionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void PressSheetTemplate::enabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void PressSheetTemplate::widthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void PressSheetTemplate::heightChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void PressSheetTemplate::cellsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
