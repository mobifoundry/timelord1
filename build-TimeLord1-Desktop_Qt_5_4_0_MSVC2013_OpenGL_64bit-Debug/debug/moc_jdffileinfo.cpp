/****************************************************************************
** Meta object code from reading C++ file 'jdffileinfo.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../TimeLord1/jdffileinfo.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'jdffileinfo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_JdfFileInfo_t {
    QByteArrayData data[10];
    char stringdata[122];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_JdfFileInfo_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_JdfFileInfo_t qt_meta_stringdata_JdfFileInfo = {
    {
QT_MOC_LITERAL(0, 0, 11), // "JdfFileInfo"
QT_MOC_LITERAL(1, 12, 15), // "nameFileChanged"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 11), // "sizeChanged"
QT_MOC_LITERAL(4, 41, 19), // "lastModifiedChanged"
QT_MOC_LITERAL(5, 61, 23), // "absoluteFilePathChanged"
QT_MOC_LITERAL(6, 85, 4), // "type"
QT_MOC_LITERAL(7, 90, 4), // "size"
QT_MOC_LITERAL(8, 95, 9), // "substrate"
QT_MOC_LITERAL(9, 105, 16) // "absoluteFilePath"

    },
    "JdfFileInfo\0nameFileChanged\0\0sizeChanged\0"
    "lastModifiedChanged\0absoluteFilePathChanged\0"
    "type\0size\0substrate\0absoluteFilePath"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_JdfFileInfo[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       4,   38, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,
       4,    0,   36,    2, 0x06 /* Public */,
       5,    0,   37,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       6, QMetaType::QString, 0x00495003,
       7, QMetaType::Long, 0x00495103,
       8, QMetaType::QString, 0x00495003,
       9, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

       0        // eod
};

void JdfFileInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        JdfFileInfo *_t = static_cast<JdfFileInfo *>(_o);
        switch (_id) {
        case 0: _t->nameFileChanged(); break;
        case 1: _t->sizeChanged(); break;
        case 2: _t->lastModifiedChanged(); break;
        case 3: _t->absoluteFilePathChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (JdfFileInfo::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&JdfFileInfo::nameFileChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (JdfFileInfo::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&JdfFileInfo::sizeChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (JdfFileInfo::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&JdfFileInfo::lastModifiedChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (JdfFileInfo::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&JdfFileInfo::absoluteFilePathChanged)) {
                *result = 3;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject JdfFileInfo::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_JdfFileInfo.data,
      qt_meta_data_JdfFileInfo,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *JdfFileInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *JdfFileInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_JdfFileInfo.stringdata))
        return static_cast<void*>(const_cast< JdfFileInfo*>(this));
    return QObject::qt_metacast(_clname);
}

int JdfFileInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = nameFile(); break;
        case 1: *reinterpret_cast< long*>(_v) = size(); break;
        case 2: *reinterpret_cast< QString*>(_v) = lastModified(); break;
        case 3: *reinterpret_cast< QString*>(_v) = absoluteFilePath(); break;
        default: break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setNameFile(*reinterpret_cast< QString*>(_v)); break;
        case 1: setSize(*reinterpret_cast< long*>(_v)); break;
        case 2: setLastModified(*reinterpret_cast< QString*>(_v)); break;
        case 3: setAbsoluteFilePath(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void JdfFileInfo::nameFileChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void JdfFileInfo::sizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void JdfFileInfo::lastModifiedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void JdfFileInfo::absoluteFilePathChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
