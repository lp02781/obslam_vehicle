/****************************************************************************
** Meta object code from reading C++ file 'QMMapView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../QtMapKit/src/QMMapView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QMMapView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QMMapView_t {
    QByteArrayData data[46];
    char stringdata0[596];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QMMapView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QMMapView_t qt_meta_stringdata_QMMapView = {
    {
QT_MOC_LITERAL(0, 0, 9), // "QMMapView"
QT_MOC_LITERAL(1, 10, 9), // "mapLoaded"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 13), // "mapBecameIdle"
QT_MOC_LITERAL(4, 35, 13), // "regionChanged"
QT_MOC_LITERAL(5, 49, 18), // "QMCoordinateRegion"
QT_MOC_LITERAL(6, 68, 6), // "region"
QT_MOC_LITERAL(7, 75, 13), // "centerChanged"
QT_MOC_LITERAL(8, 89, 12), // "QMCoordinate"
QT_MOC_LITERAL(9, 102, 6), // "center"
QT_MOC_LITERAL(10, 109, 12), // "mouseClicked"
QT_MOC_LITERAL(11, 122, 10), // "coordinate"
QT_MOC_LITERAL(12, 133, 18), // "mouseDoubleClicked"
QT_MOC_LITERAL(13, 152, 17), // "mouseRightClicked"
QT_MOC_LITERAL(14, 170, 12), // "mouseDragged"
QT_MOC_LITERAL(15, 183, 16), // "mouseDragStarted"
QT_MOC_LITERAL(16, 200, 14), // "mouseDragEnded"
QT_MOC_LITERAL(17, 215, 11), // "cursorMoved"
QT_MOC_LITERAL(18, 227, 13), // "cursorEntered"
QT_MOC_LITERAL(19, 241, 12), // "cursorLeaved"
QT_MOC_LITERAL(20, 254, 14), // "headingChanged"
QT_MOC_LITERAL(21, 269, 14), // "mapTypeChanged"
QT_MOC_LITERAL(22, 284, 7), // "MapType"
QT_MOC_LITERAL(23, 292, 4), // "type"
QT_MOC_LITERAL(24, 297, 11), // "tilesLoaded"
QT_MOC_LITERAL(25, 309, 12), // "tilesChanged"
QT_MOC_LITERAL(26, 322, 16), // "zoomLevelChanged"
QT_MOC_LITERAL(27, 339, 5), // "level"
QT_MOC_LITERAL(28, 345, 13), // "initializeMap"
QT_MOC_LITERAL(29, 359, 18), // "insertNativeObject"
QT_MOC_LITERAL(30, 378, 17), // "regionDidChangeTo"
QT_MOC_LITERAL(31, 396, 5), // "north"
QT_MOC_LITERAL(32, 402, 5), // "south"
QT_MOC_LITERAL(33, 408, 4), // "east"
QT_MOC_LITERAL(34, 413, 4), // "west"
QT_MOC_LITERAL(35, 418, 17), // "centerDidChangeTo"
QT_MOC_LITERAL(36, 436, 8), // "latitude"
QT_MOC_LITERAL(37, 445, 9), // "longitude"
QT_MOC_LITERAL(38, 455, 18), // "mapTypeDidChangeTo"
QT_MOC_LITERAL(39, 474, 10), // "typeString"
QT_MOC_LITERAL(40, 485, 15), // "mouseDidClickAt"
QT_MOC_LITERAL(41, 501, 21), // "mouseDidDoubleClickAt"
QT_MOC_LITERAL(42, 523, 20), // "mouseDidRightClickAt"
QT_MOC_LITERAL(43, 544, 15), // "cursorDidMoveTo"
QT_MOC_LITERAL(44, 560, 16), // "cursorDidEnterTo"
QT_MOC_LITERAL(45, 577, 18) // "cursorDidLeaveFrom"

    },
    "QMMapView\0mapLoaded\0\0mapBecameIdle\0"
    "regionChanged\0QMCoordinateRegion\0"
    "region\0centerChanged\0QMCoordinate\0"
    "center\0mouseClicked\0coordinate\0"
    "mouseDoubleClicked\0mouseRightClicked\0"
    "mouseDragged\0mouseDragStarted\0"
    "mouseDragEnded\0cursorMoved\0cursorEntered\0"
    "cursorLeaved\0headingChanged\0mapTypeChanged\0"
    "MapType\0type\0tilesLoaded\0tilesChanged\0"
    "zoomLevelChanged\0level\0initializeMap\0"
    "insertNativeObject\0regionDidChangeTo\0"
    "north\0south\0east\0west\0centerDidChangeTo\0"
    "latitude\0longitude\0mapTypeDidChangeTo\0"
    "typeString\0mouseDidClickAt\0"
    "mouseDidDoubleClickAt\0mouseDidRightClickAt\0"
    "cursorDidMoveTo\0cursorDidEnterTo\0"
    "cursorDidLeaveFrom"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QMMapView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      29,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      18,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  159,    2, 0x06 /* Public */,
       3,    0,  160,    2, 0x06 /* Public */,
       4,    1,  161,    2, 0x06 /* Public */,
       7,    1,  164,    2, 0x06 /* Public */,
      10,    1,  167,    2, 0x06 /* Public */,
      12,    1,  170,    2, 0x06 /* Public */,
      13,    1,  173,    2, 0x06 /* Public */,
      14,    0,  176,    2, 0x06 /* Public */,
      15,    0,  177,    2, 0x06 /* Public */,
      16,    0,  178,    2, 0x06 /* Public */,
      17,    1,  179,    2, 0x06 /* Public */,
      18,    1,  182,    2, 0x06 /* Public */,
      19,    1,  185,    2, 0x06 /* Public */,
      20,    0,  188,    2, 0x06 /* Public */,
      21,    1,  189,    2, 0x06 /* Public */,
      24,    0,  192,    2, 0x06 /* Public */,
      25,    0,  193,    2, 0x06 /* Public */,
      26,    1,  194,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      28,    0,  197,    2, 0x09 /* Protected */,
      29,    0,  198,    2, 0x09 /* Protected */,
      30,    4,  199,    2, 0x09 /* Protected */,
      35,    2,  208,    2, 0x09 /* Protected */,
      38,    1,  213,    2, 0x09 /* Protected */,
      40,    2,  216,    2, 0x09 /* Protected */,
      41,    2,  221,    2, 0x09 /* Protected */,
      42,    2,  226,    2, 0x09 /* Protected */,
      43,    2,  231,    2, 0x09 /* Protected */,
      44,    2,  236,    2, 0x09 /* Protected */,
      45,    2,  241,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,   11,
    QMetaType::Void, 0x80000000 | 8,   11,
    QMetaType::Void, 0x80000000 | 8,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,   11,
    QMetaType::Void, 0x80000000 | 8,   11,
    QMetaType::Void, 0x80000000 | 8,   11,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 22,   23,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt,   27,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal,   31,   32,   33,   34,
    QMetaType::Void, QMetaType::QReal, QMetaType::QReal,   36,   37,
    QMetaType::Void, QMetaType::QString,   39,
    QMetaType::Void, QMetaType::QReal, QMetaType::QReal,   36,   37,
    QMetaType::Void, QMetaType::QReal, QMetaType::QReal,   36,   37,
    QMetaType::Void, QMetaType::QReal, QMetaType::QReal,   36,   37,
    QMetaType::Void, QMetaType::QReal, QMetaType::QReal,   36,   37,
    QMetaType::Void, QMetaType::QReal, QMetaType::QReal,   36,   37,
    QMetaType::Void, QMetaType::QReal, QMetaType::QReal,   36,   37,

       0        // eod
};

void QMMapView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QMMapView *_t = static_cast<QMMapView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mapLoaded(); break;
        case 1: _t->mapBecameIdle(); break;
        case 2: _t->regionChanged((*reinterpret_cast< QMCoordinateRegion(*)>(_a[1]))); break;
        case 3: _t->centerChanged((*reinterpret_cast< QMCoordinate(*)>(_a[1]))); break;
        case 4: _t->mouseClicked((*reinterpret_cast< QMCoordinate(*)>(_a[1]))); break;
        case 5: _t->mouseDoubleClicked((*reinterpret_cast< QMCoordinate(*)>(_a[1]))); break;
        case 6: _t->mouseRightClicked((*reinterpret_cast< QMCoordinate(*)>(_a[1]))); break;
        case 7: _t->mouseDragged(); break;
        case 8: _t->mouseDragStarted(); break;
        case 9: _t->mouseDragEnded(); break;
        case 10: _t->cursorMoved((*reinterpret_cast< QMCoordinate(*)>(_a[1]))); break;
        case 11: _t->cursorEntered((*reinterpret_cast< QMCoordinate(*)>(_a[1]))); break;
        case 12: _t->cursorLeaved((*reinterpret_cast< QMCoordinate(*)>(_a[1]))); break;
        case 13: _t->headingChanged(); break;
        case 14: _t->mapTypeChanged((*reinterpret_cast< MapType(*)>(_a[1]))); break;
        case 15: _t->tilesLoaded(); break;
        case 16: _t->tilesChanged(); break;
        case 17: _t->zoomLevelChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 18: _t->initializeMap(); break;
        case 19: _t->insertNativeObject(); break;
        case 20: _t->regionDidChangeTo((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4]))); break;
        case 21: _t->centerDidChangeTo((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 22: _t->mapTypeDidChangeTo((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 23: _t->mouseDidClickAt((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 24: _t->mouseDidDoubleClickAt((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 25: _t->mouseDidRightClickAt((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 26: _t->cursorDidMoveTo((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 27: _t->cursorDidEnterTo((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 28: _t->cursorDidLeaveFrom((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QMMapView::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMMapView::mapLoaded)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QMMapView::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMMapView::mapBecameIdle)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QMMapView::*_t)(QMCoordinateRegion );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMMapView::regionChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QMMapView::*_t)(QMCoordinate );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMMapView::centerChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QMMapView::*_t)(QMCoordinate );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMMapView::mouseClicked)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QMMapView::*_t)(QMCoordinate );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMMapView::mouseDoubleClicked)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QMMapView::*_t)(QMCoordinate );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMMapView::mouseRightClicked)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QMMapView::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMMapView::mouseDragged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (QMMapView::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMMapView::mouseDragStarted)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (QMMapView::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMMapView::mouseDragEnded)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (QMMapView::*_t)(QMCoordinate );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMMapView::cursorMoved)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (QMMapView::*_t)(QMCoordinate );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMMapView::cursorEntered)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (QMMapView::*_t)(QMCoordinate );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMMapView::cursorLeaved)) {
                *result = 12;
                return;
            }
        }
        {
            typedef void (QMMapView::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMMapView::headingChanged)) {
                *result = 13;
                return;
            }
        }
        {
            typedef void (QMMapView::*_t)(MapType );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMMapView::mapTypeChanged)) {
                *result = 14;
                return;
            }
        }
        {
            typedef void (QMMapView::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMMapView::tilesLoaded)) {
                *result = 15;
                return;
            }
        }
        {
            typedef void (QMMapView::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMMapView::tilesChanged)) {
                *result = 16;
                return;
            }
        }
        {
            typedef void (QMMapView::*_t)(uint );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMMapView::zoomLevelChanged)) {
                *result = 17;
                return;
            }
        }
    }
}

const QMetaObject QMMapView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QMMapView.data,
      qt_meta_data_QMMapView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QMMapView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QMMapView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QMMapView.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QMMapView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 29)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 29;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 29)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 29;
    }
    return _id;
}

// SIGNAL 0
void QMMapView::mapLoaded()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QMMapView::mapBecameIdle()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QMMapView::regionChanged(QMCoordinateRegion _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QMMapView::centerChanged(QMCoordinate _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QMMapView::mouseClicked(QMCoordinate _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QMMapView::mouseDoubleClicked(QMCoordinate _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QMMapView::mouseRightClicked(QMCoordinate _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QMMapView::mouseDragged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void QMMapView::mouseDragStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void QMMapView::mouseDragEnded()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void QMMapView::cursorMoved(QMCoordinate _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void QMMapView::cursorEntered(QMCoordinate _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void QMMapView::cursorLeaved(QMCoordinate _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void QMMapView::headingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void QMMapView::mapTypeChanged(MapType _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void QMMapView::tilesLoaded()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void QMMapView::tilesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void QMMapView::zoomLevelChanged(uint _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
