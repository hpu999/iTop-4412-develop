/****************************************************************************
** Meta object code from reading C++ file 'linearlayout.h'
**
** Created: Fri May 11 23:33:25 2018
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../linearlayout.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'linearlayout.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GraphicsLinearLayoutStretchItemObject[] = {

 // content:
       5,       // revision
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

static const char qt_meta_stringdata_GraphicsLinearLayoutStretchItemObject[] = {
    "GraphicsLinearLayoutStretchItemObject\0"
};

const QMetaObject GraphicsLinearLayoutStretchItemObject::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_GraphicsLinearLayoutStretchItemObject,
      qt_meta_data_GraphicsLinearLayoutStretchItemObject, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GraphicsLinearLayoutStretchItemObject::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GraphicsLinearLayoutStretchItemObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GraphicsLinearLayoutStretchItemObject::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GraphicsLinearLayoutStretchItemObject))
        return static_cast<void*>(const_cast< GraphicsLinearLayoutStretchItemObject*>(this));
    if (!strcmp(_clname, "QGraphicsLayoutItem"))
        return static_cast< QGraphicsLayoutItem*>(const_cast< GraphicsLinearLayoutStretchItemObject*>(this));
    if (!strcmp(_clname, "com.trolltech.Qt.QGraphicsLayoutItem"))
        return static_cast< QGraphicsLayoutItem*>(const_cast< GraphicsLinearLayoutStretchItemObject*>(this));
    return QObject::qt_metacast(_clname);
}

int GraphicsLinearLayoutStretchItemObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_GraphicsLinearLayoutObject[] = {

 // content:
       5,       // revision
       0,       // classname
       1,   14, // classinfo
       3,   16, // methods
       4,   31, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // classinfo: key, value
      36,   27,

 // slots: signature, parameters, type, tag, flags
      55,   53,   52,   52, 0x08,
      95,   53,   52,   52, 0x08,
     135,   53,   52,   52, 0x08,

 // properties: name, type, flags
      27,  187, 0x00095009,
     249,  233, 0x0009510b,
     267,  261, (QMetaType::QReal << 24) | 0x00095103,
     275,  261, (QMetaType::QReal << 24) | 0x00095103,

       0        // eod
};

static const char qt_meta_stringdata_GraphicsLinearLayoutObject[] = {
    "GraphicsLinearLayoutObject\0children\0"
    "DefaultProperty\0\0,\0"
    "updateStretch(QGraphicsLayoutItem*,int)\0"
    "updateSpacing(QGraphicsLayoutItem*,int)\0"
    "updateAlignment(QGraphicsLayoutItem*,Qt::Alignment)\0"
    "QDeclarativeListProperty<QGraphicsLayoutItem>\0"
    "Qt::Orientation\0orientation\0qreal\0"
    "spacing\0contentsMargin\0"
};

const QMetaObject GraphicsLinearLayoutObject::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_GraphicsLinearLayoutObject,
      qt_meta_data_GraphicsLinearLayoutObject, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GraphicsLinearLayoutObject::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GraphicsLinearLayoutObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GraphicsLinearLayoutObject::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GraphicsLinearLayoutObject))
        return static_cast<void*>(const_cast< GraphicsLinearLayoutObject*>(this));
    if (!strcmp(_clname, "QGraphicsLinearLayout"))
        return static_cast< QGraphicsLinearLayout*>(const_cast< GraphicsLinearLayoutObject*>(this));
    if (!strcmp(_clname, "com.trolltech.Qt.QGraphicsLayout"))
        return static_cast< QGraphicsLayout*>(const_cast< GraphicsLinearLayoutObject*>(this));
    if (!strcmp(_clname, "com.trolltech.Qt.QGraphicsLayoutItem"))
        return static_cast< QGraphicsLayoutItem*>(const_cast< GraphicsLinearLayoutObject*>(this));
    return QObject::qt_metacast(_clname);
}

int GraphicsLinearLayoutObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: updateStretch((*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: updateSpacing((*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: updateAlignment((*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[1])),(*reinterpret_cast< Qt::Alignment(*)>(_a[2]))); break;
        default: ;
        }
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QDeclarativeListProperty<QGraphicsLayoutItem>*>(_v) = children(); break;
        case 1: *reinterpret_cast< Qt::Orientation*>(_v) = orientation(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = spacing(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = contentsMargin(); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 1: setOrientation(*reinterpret_cast< Qt::Orientation*>(_v)); break;
        case 2: setSpacing(*reinterpret_cast< qreal*>(_v)); break;
        case 3: setContentsMargin(*reinterpret_cast< qreal*>(_v)); break;
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
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
static const uint qt_meta_data_LinearLayoutAttached[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       3,   29, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      24,   22,   21,   21, 0x05,
      65,   22,   21,   21, 0x05,
     118,   22,   21,   21, 0x05,

 // properties: name, type, flags
     163,  159, 0x02495103,
     191,  177, 0x0049510b,
     201,  159, 0x02495103,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

static const char qt_meta_stringdata_LinearLayoutAttached[] = {
    "LinearLayoutAttached\0\0,\0"
    "stretchChanged(QGraphicsLayoutItem*,int)\0"
    "alignmentChanged(QGraphicsLayoutItem*,Qt::Alignment)\0"
    "spacingChanged(QGraphicsLayoutItem*,int)\0"
    "int\0stretchFactor\0Qt::Alignment\0"
    "alignment\0spacing\0"
};

const QMetaObject LinearLayoutAttached::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_LinearLayoutAttached,
      qt_meta_data_LinearLayoutAttached, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LinearLayoutAttached::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LinearLayoutAttached::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LinearLayoutAttached::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LinearLayoutAttached))
        return static_cast<void*>(const_cast< LinearLayoutAttached*>(this));
    return QObject::qt_metacast(_clname);
}

int LinearLayoutAttached::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: stretchChanged((*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: alignmentChanged((*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[1])),(*reinterpret_cast< Qt::Alignment(*)>(_a[2]))); break;
        case 2: spacingChanged((*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = stretchFactor(); break;
        case 1: *reinterpret_cast< Qt::Alignment*>(_v) = alignment(); break;
        case 2: *reinterpret_cast< int*>(_v) = spacing(); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setStretchFactor(*reinterpret_cast< int*>(_v)); break;
        case 1: setAlignment(*reinterpret_cast< Qt::Alignment*>(_v)); break;
        case 2: setSpacing(*reinterpret_cast< int*>(_v)); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void LinearLayoutAttached::stretchChanged(QGraphicsLayoutItem * _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LinearLayoutAttached::alignmentChanged(QGraphicsLayoutItem * _t1, Qt::Alignment _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void LinearLayoutAttached::spacingChanged(QGraphicsLayoutItem * _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
