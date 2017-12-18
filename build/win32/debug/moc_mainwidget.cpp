/****************************************************************************
** Meta object code from reading C++ file 'mainwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../client/mainwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ClientCameraManager_t {
    QByteArrayData data[1];
    char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ClientCameraManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ClientCameraManager_t qt_meta_stringdata_ClientCameraManager = {
    {
QT_MOC_LITERAL(0, 0, 19) // "ClientCameraManager"

    },
    "ClientCameraManager"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ClientCameraManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void ClientCameraManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject ClientCameraManager::staticMetaObject = {
    { &CameraManager::staticMetaObject, qt_meta_stringdata_ClientCameraManager.data,
      qt_meta_data_ClientCameraManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ClientCameraManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ClientCameraManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ClientCameraManager.stringdata0))
        return static_cast<void*>(const_cast< ClientCameraManager*>(this));
    return CameraManager::qt_metacast(_clname);
}

int ClientCameraManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CameraManager::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_MainWidget_t {
    QByteArrayData data[11];
    char stringdata0[180];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWidget_t qt_meta_stringdata_MainWidget = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWidget"
QT_MOC_LITERAL(1, 11, 10), // "add_camera"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 7), // "checked"
QT_MOC_LITERAL(4, 31, 10), // "del_camera"
QT_MOC_LITERAL(5, 42, 13), // "submit_camera"
QT_MOC_LITERAL(6, 56, 28), // "on_pushButton_search_clicked"
QT_MOC_LITERAL(7, 85, 48), // "on_treeWidget_devices_customC..."
QT_MOC_LITERAL(8, 134, 3), // "pos"
QT_MOC_LITERAL(9, 138, 35), // "on_treeWidget_devices_doubleC..."
QT_MOC_LITERAL(10, 174, 5) // "index"

    },
    "MainWidget\0add_camera\0\0checked\0"
    "del_camera\0submit_camera\0"
    "on_pushButton_search_clicked\0"
    "on_treeWidget_devices_customContextMenuRequested\0"
    "pos\0on_treeWidget_devices_doubleClicked\0"
    "index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWidget[] = {

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
       4,    1,   47,    2, 0x0a /* Public */,
       5,    1,   50,    2, 0x0a /* Public */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    1,   54,    2, 0x08 /* Private */,
       9,    1,   57,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    8,
    QMetaType::Void, QMetaType::QModelIndex,   10,

       0        // eod
};

void MainWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWidget *_t = static_cast<MainWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->add_camera((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->del_camera((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->submit_camera((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->on_pushButton_search_clicked(); break;
        case 4: _t->on_treeWidget_devices_customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 5: _t->on_treeWidget_devices_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject MainWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MainWidget.data,
      qt_meta_data_MainWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWidget.stringdata0))
        return static_cast<void*>(const_cast< MainWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int MainWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
