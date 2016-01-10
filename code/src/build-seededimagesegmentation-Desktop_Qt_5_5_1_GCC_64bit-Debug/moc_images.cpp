/****************************************************************************
** Meta object code from reading C++ file 'images.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../common/images.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'images.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_images_t {
    QByteArrayData data[10];
    char stringdata0[118];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_images_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_images_t qt_meta_stringdata_images = {
    {
QT_MOC_LITERAL(0, 0, 6), // "images"
QT_MOC_LITERAL(1, 7, 17), // "showMousePosition"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 7), // "QPoint&"
QT_MOC_LITERAL(4, 34, 3), // "pos"
QT_MOC_LITERAL(5, 38, 18), // "on_btnDone_clicked"
QT_MOC_LITERAL(6, 57, 15), // "on_rbBG_clicked"
QT_MOC_LITERAL(7, 73, 14), // "on_rb1_clicked"
QT_MOC_LITERAL(8, 88, 14), // "on_rb2_clicked"
QT_MOC_LITERAL(9, 103, 14) // "on_rb3_clicked"

    },
    "images\0showMousePosition\0\0QPoint&\0pos\0"
    "on_btnDone_clicked\0on_rbBG_clicked\0"
    "on_rb1_clicked\0on_rb2_clicked\0"
    "on_rb3_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_images[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x0a /* Public */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,
       8,    0,   50,    2, 0x08 /* Private */,
       9,    0,   51,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void images::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        images *_t = static_cast<images *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showMousePosition((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 1: _t->on_btnDone_clicked(); break;
        case 2: _t->on_rbBG_clicked(); break;
        case 3: _t->on_rb1_clicked(); break;
        case 4: _t->on_rb2_clicked(); break;
        case 5: _t->on_rb3_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject images::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_images.data,
      qt_meta_data_images,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *images::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *images::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_images.stringdata0))
        return static_cast<void*>(const_cast< images*>(this));
    return QDialog::qt_metacast(_clname);
}

int images::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
