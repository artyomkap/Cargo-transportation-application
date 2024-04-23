/****************************************************************************
** Meta object code from reading C++ file 'driver_profile.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "driver_profile.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'driver_profile.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Driver_Profile_t {
    QByteArrayData data[9];
    char stringdata0[193];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Driver_Profile_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Driver_Profile_t qt_meta_stringdata_Driver_Profile = {
    {
QT_MOC_LITERAL(0, 0, 14), // "Driver_Profile"
QT_MOC_LITERAL(1, 15, 24), // "on_Return_button_clicked"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 23), // "on_Update_FName_clicked"
QT_MOC_LITERAL(4, 65, 23), // "on_Update_LName_clicked"
QT_MOC_LITERAL(5, 89, 23), // "on_Update_Email_clicked"
QT_MOC_LITERAL(6, 113, 25), // "on_Update_PNumber_clicked"
QT_MOC_LITERAL(7, 139, 26), // "on_Update_NINumber_clicked"
QT_MOC_LITERAL(8, 166, 26) // "on_Update_DLNumber_clicked"

    },
    "Driver_Profile\0on_Return_button_clicked\0"
    "\0on_Update_FName_clicked\0"
    "on_Update_LName_clicked\0on_Update_Email_clicked\0"
    "on_Update_PNumber_clicked\0"
    "on_Update_NINumber_clicked\0"
    "on_Update_DLNumber_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Driver_Profile[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    0,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Driver_Profile::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Driver_Profile *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_Return_button_clicked(); break;
        case 1: _t->on_Update_FName_clicked(); break;
        case 2: _t->on_Update_LName_clicked(); break;
        case 3: _t->on_Update_Email_clicked(); break;
        case 4: _t->on_Update_PNumber_clicked(); break;
        case 5: _t->on_Update_NINumber_clicked(); break;
        case 6: _t->on_Update_DLNumber_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Driver_Profile::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_Driver_Profile.data,
    qt_meta_data_Driver_Profile,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Driver_Profile::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Driver_Profile::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Driver_Profile.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Driver_Profile::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
