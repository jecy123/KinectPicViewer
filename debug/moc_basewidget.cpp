/****************************************************************************
** Meta object code from reading C++ file 'basewidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../basewidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'basewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_BaseWidget_t {
    QByteArrayData data[28];
    char stringdata0[233];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BaseWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BaseWidget_t qt_meta_stringdata_BaseWidget = {
    {
QT_MOC_LITERAL(0, 0, 10), // "BaseWidget"
QT_MOC_LITERAL(1, 11, 7), // "display"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 5), // "index"
QT_MOC_LITERAL(4, 26, 13), // "cursorPosMove"
QT_MOC_LITERAL(5, 40, 2), // "dx"
QT_MOC_LITERAL(6, 43, 2), // "dy"
QT_MOC_LITERAL(7, 46, 9), // "catchMove"
QT_MOC_LITERAL(8, 56, 13), // "cursorCatched"
QT_MOC_LITERAL(9, 70, 1), // "x"
QT_MOC_LITERAL(10, 72, 1), // "y"
QT_MOC_LITERAL(11, 74, 2), // "vx"
QT_MOC_LITERAL(12, 77, 2), // "vy"
QT_MOC_LITERAL(13, 80, 2), // "vz"
QT_MOC_LITERAL(14, 83, 12), // "catchRelease"
QT_MOC_LITERAL(15, 96, 13), // "cursorTouched"
QT_MOC_LITERAL(16, 110, 9), // "clickedAt"
QT_MOC_LITERAL(17, 120, 6), // "zoomIn"
QT_MOC_LITERAL(18, 127, 6), // "offset"
QT_MOC_LITERAL(19, 134, 7), // "zoomOut"
QT_MOC_LITERAL(20, 142, 9), // "zoomBegin"
QT_MOC_LITERAL(21, 152, 7), // "zoomEnd"
QT_MOC_LITERAL(22, 160, 8), // "rotateCW"
QT_MOC_LITERAL(23, 169, 10), // "rotateRate"
QT_MOC_LITERAL(24, 180, 9), // "rotateCCW"
QT_MOC_LITERAL(25, 190, 9), // "rotateEnd"
QT_MOC_LITERAL(26, 200, 16), // "cursorWavedRight"
QT_MOC_LITERAL(27, 217, 15) // "cursorWavedLeft"

    },
    "BaseWidget\0display\0\0index\0cursorPosMove\0"
    "dx\0dy\0catchMove\0cursorCatched\0x\0y\0vx\0"
    "vy\0vz\0catchRelease\0cursorTouched\0"
    "clickedAt\0zoomIn\0offset\0zoomOut\0"
    "zoomBegin\0zoomEnd\0rotateCW\0rotateRate\0"
    "rotateCCW\0rotateEnd\0cursorWavedRight\0"
    "cursorWavedLeft"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BaseWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    2,   97,    2, 0x0a /* Public */,
       7,    2,  102,    2, 0x0a /* Public */,
       8,    7,  107,    2, 0x0a /* Public */,
      14,    7,  122,    2, 0x0a /* Public */,
      15,    2,  137,    2, 0x0a /* Public */,
      16,    2,  142,    2, 0x0a /* Public */,
      17,    1,  147,    2, 0x0a /* Public */,
      19,    1,  150,    2, 0x0a /* Public */,
      20,    2,  153,    2, 0x0a /* Public */,
      21,    0,  158,    2, 0x0a /* Public */,
      22,    1,  159,    2, 0x0a /* Public */,
      24,    1,  162,    2, 0x0a /* Public */,
      25,    0,  165,    2, 0x0a /* Public */,
      26,    1,  166,    2, 0x0a /* Public */,
      27,    1,  169,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    5,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    5,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Float, QMetaType::Float, QMetaType::Float,    9,   10,    5,    6,   11,   12,   13,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Float, QMetaType::Float, QMetaType::Float,    9,   10,    5,    6,   11,   12,   13,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    9,   10,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    9,   10,
    QMetaType::Void, QMetaType::Float,   18,
    QMetaType::Void, QMetaType::Float,   18,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    9,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   23,
    QMetaType::Void, QMetaType::Int,   23,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,

       0        // eod
};

void BaseWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BaseWidget *_t = static_cast<BaseWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->display((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->cursorPosMove((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->catchMove((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->cursorCatched((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6])),(*reinterpret_cast< float(*)>(_a[7]))); break;
        case 4: _t->catchRelease((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6])),(*reinterpret_cast< float(*)>(_a[7]))); break;
        case 5: _t->cursorTouched((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->clickedAt((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->zoomIn((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 8: _t->zoomOut((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 9: _t->zoomBegin((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: _t->zoomEnd(); break;
        case 11: _t->rotateCW((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->rotateCCW((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->rotateEnd(); break;
        case 14: _t->cursorWavedRight((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->cursorWavedLeft((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (BaseWidget::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BaseWidget::display)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject BaseWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_BaseWidget.data,
      qt_meta_data_BaseWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *BaseWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BaseWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_BaseWidget.stringdata0))
        return static_cast<void*>(const_cast< BaseWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int BaseWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void BaseWidget::display(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
