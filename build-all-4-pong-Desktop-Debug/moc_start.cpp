/****************************************************************************
** Meta object code from reading C++ file 'start.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.1.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../all-4-pong/start.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'start.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.1.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Start_t {
<<<<<<< HEAD
    QByteArrayData data[1];
    char stringdata[7];
=======
    QByteArrayData data[6];
    char stringdata[77];
>>>>>>> 8774f954aa68fc36544097b61bd3ca2f12fe0f2d
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_Start_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_Start_t qt_meta_stringdata_Start = {
    {
<<<<<<< HEAD
QT_MOC_LITERAL(0, 0, 5)
    },
    "Start\0"
=======
QT_MOC_LITERAL(0, 0, 5),
QT_MOC_LITERAL(1, 6, 20),
QT_MOC_LITERAL(2, 27, 0),
QT_MOC_LITERAL(3, 28, 15),
QT_MOC_LITERAL(4, 44, 12),
QT_MOC_LITERAL(5, 57, 18)
    },
    "Start\0on_start_Btn_clicked\0\0clientConnected\0"
    "dataReceived\0clientDisconnected\0"
>>>>>>> 8774f954aa68fc36544097b61bd3ca2f12fe0f2d
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Start[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
<<<<<<< HEAD
       0,    0, // methods
=======
       4,   14, // methods
>>>>>>> 8774f954aa68fc36544097b61bd3ca2f12fe0f2d
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

<<<<<<< HEAD
=======
 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08,
       3,    0,   35,    2, 0x08,
       4,    0,   36,    2, 0x08,
       5,    0,   37,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

>>>>>>> 8774f954aa68fc36544097b61bd3ca2f12fe0f2d
       0        // eod
};

void Start::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
<<<<<<< HEAD
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
=======
    if (_c == QMetaObject::InvokeMetaMethod) {
        Start *_t = static_cast<Start *>(_o);
        switch (_id) {
        case 0: _t->on_start_Btn_clicked(); break;
        case 1: _t->clientConnected(); break;
        case 2: _t->dataReceived(); break;
        case 3: _t->clientDisconnected(); break;
        default: ;
        }
    }
>>>>>>> 8774f954aa68fc36544097b61bd3ca2f12fe0f2d
    Q_UNUSED(_a);
}

const QMetaObject Start::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Start.data,
      qt_meta_data_Start,  qt_static_metacall, 0, 0}
};


const QMetaObject *Start::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Start::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Start.stringdata))
        return static_cast<void*>(const_cast< Start*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Start::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
<<<<<<< HEAD
=======
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
>>>>>>> 8774f954aa68fc36544097b61bd3ca2f12fe0f2d
    return _id;
}
QT_END_MOC_NAMESPACE