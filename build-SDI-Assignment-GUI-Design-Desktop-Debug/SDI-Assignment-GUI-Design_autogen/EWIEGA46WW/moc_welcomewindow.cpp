/****************************************************************************
** Meta object code from reading C++ file 'welcomewindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "welcomewindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'welcomewindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WelcomeWindow_t {
    QByteArrayData data[14];
    char stringdata0[307];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WelcomeWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WelcomeWindow_t qt_meta_stringdata_WelcomeWindow = {
    {
QT_MOC_LITERAL(0, 0, 13), // "WelcomeWindow"
QT_MOC_LITERAL(1, 14, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(4, 63, 23), // "on_pushButton_4_clicked"
QT_MOC_LITERAL(5, 87, 23), // "on_pushButton_5_clicked"
QT_MOC_LITERAL(6, 111, 23), // "on_pushButton_6_clicked"
QT_MOC_LITERAL(7, 135, 23), // "on_pushButton_7_clicked"
QT_MOC_LITERAL(8, 159, 29), // "on_ChooseAnotherRole1_clicked"
QT_MOC_LITERAL(9, 189, 22), // "on_ChooseRole2_clicked"
QT_MOC_LITERAL(10, 212, 22), // "on_ChooseRole3_clicked"
QT_MOC_LITERAL(11, 235, 22), // "on_Login_Owner_clicked"
QT_MOC_LITERAL(12, 258, 24), // "on_Login_Company_clicked"
QT_MOC_LITERAL(13, 283, 23) // "on_Login_Driver_clicked"

    },
    "WelcomeWindow\0on_pushButton_2_clicked\0"
    "\0on_pushButton_3_clicked\0"
    "on_pushButton_4_clicked\0on_pushButton_5_clicked\0"
    "on_pushButton_6_clicked\0on_pushButton_7_clicked\0"
    "on_ChooseAnotherRole1_clicked\0"
    "on_ChooseRole2_clicked\0on_ChooseRole3_clicked\0"
    "on_Login_Owner_clicked\0on_Login_Company_clicked\0"
    "on_Login_Driver_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WelcomeWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x08 /* Private */,
       3,    0,   75,    2, 0x08 /* Private */,
       4,    0,   76,    2, 0x08 /* Private */,
       5,    0,   77,    2, 0x08 /* Private */,
       6,    0,   78,    2, 0x08 /* Private */,
       7,    0,   79,    2, 0x08 /* Private */,
       8,    0,   80,    2, 0x08 /* Private */,
       9,    0,   81,    2, 0x08 /* Private */,
      10,    0,   82,    2, 0x08 /* Private */,
      11,    0,   83,    2, 0x08 /* Private */,
      12,    0,   84,    2, 0x08 /* Private */,
      13,    0,   85,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void WelcomeWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WelcomeWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_2_clicked(); break;
        case 1: _t->on_pushButton_3_clicked(); break;
        case 2: _t->on_pushButton_4_clicked(); break;
        case 3: _t->on_pushButton_5_clicked(); break;
        case 4: _t->on_pushButton_6_clicked(); break;
        case 5: _t->on_pushButton_7_clicked(); break;
        case 6: _t->on_ChooseAnotherRole1_clicked(); break;
        case 7: _t->on_ChooseRole2_clicked(); break;
        case 8: _t->on_ChooseRole3_clicked(); break;
        case 9: _t->on_Login_Owner_clicked(); break;
        case 10: _t->on_Login_Company_clicked(); break;
        case 11: _t->on_Login_Driver_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject WelcomeWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_WelcomeWindow.data,
    qt_meta_data_WelcomeWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WelcomeWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WelcomeWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WelcomeWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int WelcomeWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
