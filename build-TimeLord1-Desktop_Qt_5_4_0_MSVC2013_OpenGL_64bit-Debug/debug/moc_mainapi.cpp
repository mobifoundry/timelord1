/****************************************************************************
** Meta object code from reading C++ file 'mainapi.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../TimeLord1/mainapi.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainapi.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainApi_t {
    QByteArrayData data[25];
    char stringdata[292];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainApi_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainApi_t qt_meta_stringdata_MainApi = {
    {
QT_MOC_LITERAL(0, 0, 7), // "MainApi"
QT_MOC_LITERAL(1, 8, 11), // "statusError"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 8), // "loggedIn"
QT_MOC_LITERAL(4, 30, 9), // "loggedOut"
QT_MOC_LITERAL(5, 40, 8), // "nextStep"
QT_MOC_LITERAL(6, 49, 5), // "logIn"
QT_MOC_LITERAL(7, 55, 8), // "userName"
QT_MOC_LITERAL(8, 64, 8), // "password"
QT_MOC_LITERAL(9, 73, 14), // "authentificate"
QT_MOC_LITERAL(10, 88, 6), // "status"
QT_MOC_LITERAL(11, 95, 6), // "logOut"
QT_MOC_LITERAL(12, 102, 11), // "getUserName"
QT_MOC_LITERAL(13, 114, 14), // "sendFileToShws"
QT_MOC_LITERAL(14, 129, 8), // "nameFile"
QT_MOC_LITERAL(15, 138, 25), // "loadChosenCutCourseFromDb"
QT_MOC_LITERAL(16, 164, 20), // "loadCutCoursesFromDb"
QT_MOC_LITERAL(17, 185, 17), // "loadCutterProgram"
QT_MOC_LITERAL(18, 203, 16), // "deleteObjectList"
QT_MOC_LITERAL(19, 220, 16), // "QList<QObject*>&"
QT_MOC_LITERAL(20, 237, 10), // "objectList"
QT_MOC_LITERAL(21, 248, 8), // "logWrite"
QT_MOC_LITERAL(22, 257, 7), // "message"
QT_MOC_LITERAL(23, 265, 13), // "logWriteError"
QT_MOC_LITERAL(24, 279, 12) // "showNextStep"

    },
    "MainApi\0statusError\0\0loggedIn\0loggedOut\0"
    "nextStep\0logIn\0userName\0password\0"
    "authentificate\0status\0logOut\0getUserName\0"
    "sendFileToShws\0nameFile\0"
    "loadChosenCutCourseFromDb\0"
    "loadCutCoursesFromDb\0loadCutterProgram\0"
    "deleteObjectList\0QList<QObject*>&\0"
    "objectList\0logWrite\0message\0logWriteError\0"
    "showNextStep"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainApi[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x06 /* Public */,
       3,    0,   97,    2, 0x06 /* Public */,
       4,    0,   98,    2, 0x06 /* Public */,
       5,    0,   99,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    2,  100,    2, 0x0a /* Public */,
       9,    1,  105,    2, 0x0a /* Public */,
      11,    0,  108,    2, 0x0a /* Public */,
      12,    0,  109,    2, 0x0a /* Public */,
      13,    1,  110,    2, 0x0a /* Public */,
      15,    0,  113,    2, 0x0a /* Public */,
      16,    0,  114,    2, 0x0a /* Public */,
      17,    0,  115,    2, 0x0a /* Public */,
      18,    1,  116,    2, 0x0a /* Public */,
      21,    1,  119,    2, 0x0a /* Public */,
      23,    1,  122,    2, 0x0a /* Public */,
      24,    0,  125,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    1,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    7,    8,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void, QMetaType::QString,   22,
    QMetaType::Void, QMetaType::QString,   22,
    QMetaType::Void,

       0        // eod
};

void MainApi::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainApi *_t = static_cast<MainApi *>(_o);
        switch (_id) {
        case 0: _t->statusError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->loggedIn(); break;
        case 2: _t->loggedOut(); break;
        case 3: _t->nextStep(); break;
        case 4: _t->logIn((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 5: _t->authentificate((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 6: _t->logOut(); break;
        case 7: { QString _r = _t->getUserName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 8: _t->sendFileToShws((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->loadChosenCutCourseFromDb(); break;
        case 10: _t->loadCutCoursesFromDb(); break;
        case 11: _t->loadCutterProgram(); break;
        case 12: _t->deleteObjectList((*reinterpret_cast< QList<QObject*>(*)>(_a[1]))); break;
        case 13: _t->logWrite((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 14: _t->logWriteError((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 15: _t->showNextStep(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MainApi::*_t)(const QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainApi::statusError)) {
                *result = 0;
            }
        }
        {
            typedef void (MainApi::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainApi::loggedIn)) {
                *result = 1;
            }
        }
        {
            typedef void (MainApi::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainApi::loggedOut)) {
                *result = 2;
            }
        }
        {
            typedef void (MainApi::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainApi::nextStep)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject MainApi::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MainApi.data,
      qt_meta_data_MainApi,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainApi::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainApi::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainApi.stringdata))
        return static_cast<void*>(const_cast< MainApi*>(this));
    return QObject::qt_metacast(_clname);
}

int MainApi::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void MainApi::statusError(const QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainApi::loggedIn()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void MainApi::loggedOut()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void MainApi::nextStep()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
