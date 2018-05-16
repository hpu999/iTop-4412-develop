/****************************************************************************
** Meta object code from reading C++ file 'gridlayout.h'
**
** Created: Fri May 11 23:33:22 2018
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../gridlayout.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gridlayout.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GraphicsGridLayoutObject[] = {

 // content:
       5,       // revision
       0,       // classname
       1,   14, // classinfo
       1,   16, // methods
       5,   21, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // classinfo: key, value
      34,   25,

 // slots: signature, parameters, type, tag, flags
      53,   51,   50,   50, 0x08,

 // properties: name, type, flags
      25,  105, 0x00095009,
     157,  151, (QMetaType::QReal << 24) | 0x00095103,
     165,  151, (QMetaType::QReal << 24) | 0x00095103,
     180,  151, (QMetaType::QReal << 24) | 0x00095103,
     196,  151, (QMetaType::QReal << 24) | 0x00095103,

       0        // eod
};

static const char qt_meta_stringdata_GraphicsGridLayoutObject[] = {
    "GraphicsGridLayoutObject\0children\0"
    "DefaultProperty\0\0,\0"
    "updateAlignment(QGraphicsLayoutItem*,Qt::Alignment)\0"
    "QDeclarativeListProperty<QGraphicsLayoutItem>\0"
    "qreal\0spacing\0contentsMargin\0"
    "verticalSpacing\0horizontalSpacing\0"
};

const QMetaObject GraphicsGridLayoutObject::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_GraphicsGridLayoutObject,
      qt_meta_data_GraphicsGridLayoutObject, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GraphicsGridLayoutObject::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GraphicsGridLayoutObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GraphicsGridLayoutObject::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GraphicsGridLayoutObject))
        return static_cast<void*>(const_cast< GraphicsGridLayoutObject*>(this));
    if (!strcmp(_clname, "QGraphicsGridLayout"))
        return static_cast< QGraphicsGridLayout*>(const_cast< GraphicsGridLayoutObject*>(this));
    if (!strcmp(_clname, "com.trolltech.Qt.QGraphicsLayout"))
        return static_cast< QGraphicsLayout*>(const_cast< GraphicsGridLayoutObject*>(this));
    if (!strcmp(_clname, "com.trolltech.Qt.QGraphicsLayoutItem"))
        return static_cast< QGraphicsLayoutItem*>(const_cast< GraphicsGridLayoutObject*>(this));
    return QObject::qt_metacast(_clname);
}

int GraphicsGridLayoutObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: updateAlignment((*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[1])),(*reinterpret_cast< Qt::Alignment(*)>(_a[2]))); break;
        default: ;
        }
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QDeclarativeListProperty<QGraphicsLayoutItem>*>(_v) = children(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = spacing(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = contentsMargin(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = verticalSpacing(); break;
        case 4: *reinterpret_cast< qreal*>(_v) = horizontalSpacing(); break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 1: setSpacing(*reinterpret_cast< qreal*>(_v)); break;
        case 2: setContentsMargin(*reinterpret_cast< qreal*>(_v)); break;
        case 3: setVerticalSpacing(*reinterpret_cast< qreal*>(_v)); break;
        case 4: setHorizontalSpacing(*reinterpret_cast< qreal*>(_v)); break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
static const uint qt_meta_data_GridLayoutAttached[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
      17,   19, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   20,   19,   19, 0x05,

 // properties: name, type, flags
      79,   75, 0x02095103,
      83,   75, 0x02095103,
      90,   75, 0x02095103,
      98,   75, 0x02095103,
     123,  109, 0x0009510b,
     133,   75, 0x02095103,
     150,   75, 0x02095103,
     170,   75, 0x02095103,
     181,   75, 0x02095103,
     195,   75, 0x02095103,
     214,   75, 0x02095103,
     231,   75, 0x02095103,
     248,   75, 0x02095103,
     263,   75, 0x02095103,
     284,   75, 0x02095103,
     303,   75, 0x02095103,
     322,   75, 0x02095103,

       0        // eod
};

static const char qt_meta_stringdata_GridLayoutAttached[] = {
    "GridLayoutAttached\0\0,\0"
    "alignmentChanged(QGraphicsLayoutItem*,Qt::Alignment)\0"
    "int\0row\0column\0rowSpan\0columnSpan\0"
    "Qt::Alignment\0alignment\0rowStretchFactor\0"
    "columnStretchFactor\0rowSpacing\0"
    "columnSpacing\0rowPreferredHeight\0"
    "rowMinimumHeight\0rowMaximumHeight\0"
    "rowFixedHeight\0columnPreferredWidth\0"
    "columnMaximumWidth\0columnMinimumWidth\0"
    "columnFixedWidth\0"
};

const QMetaObject GridLayoutAttached::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_GridLayoutAttached,
      qt_meta_data_GridLayoutAttached, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GridLayoutAttached::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GridLayoutAttached::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GridLayoutAttached::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GridLayoutAttached))
        return static_cast<void*>(const_cast< GridLayoutAttached*>(this));
    return QObject::qt_metacast(_clname);
}

int GridLayoutAttached::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: alignmentChanged((*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[1])),(*reinterpret_cast< Qt::Alignment(*)>(_a[2]))); break;
        default: ;
        }
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = row(); break;
        case 1: *reinterpret_cast< int*>(_v) = column(); break;
        case 2: *reinterpret_cast< int*>(_v) = rowSpan(); break;
        case 3: *reinterpret_cast< int*>(_v) = columnSpan(); break;
        case 4: *reinterpret_cast< Qt::Alignment*>(_v) = alignment(); break;
        case 5: *reinterpret_cast< int*>(_v) = rowStretchFactor(); break;
        case 6: *reinterpret_cast< int*>(_v) = columnStretchFactor(); break;
        case 7: *reinterpret_cast< int*>(_v) = rowSpacing(); break;
        case 8: *reinterpret_cast< int*>(_v) = columnSpacing(); break;
        case 9: *reinterpret_cast< int*>(_v) = rowPreferredHeight(); break;
        case 10: *reinterpret_cast< int*>(_v) = rowMinimumHeight(); break;
        case 11: *reinterpret_cast< int*>(_v) = rowMaximumHeight(); break;
        case 12: *reinterpret_cast< int*>(_v) = rowFixedHeight(); break;
        case 13: *reinterpret_cast< int*>(_v) = columnPreferredWidth(); break;
        case 14: *reinterpret_cast< int*>(_v) = columnMaximumWidth(); break;
        case 15: *reinterpret_cast< int*>(_v) = columnMinimumWidth(); break;
        case 16: *reinterpret_cast< int*>(_v) = columnFixedWidth(); break;
        }
        _id -= 17;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setRow(*reinterpret_cast< int*>(_v)); break;
        case 1: setColumn(*reinterpret_cast< int*>(_v)); break;
        case 2: setRowSpan(*reinterpret_cast< int*>(_v)); break;
        case 3: setColumnSpan(*reinterpret_cast< int*>(_v)); break;
        case 4: setAlignment(*reinterpret_cast< Qt::Alignment*>(_v)); break;
        case 5: setRowStretchFactor(*reinterpret_cast< int*>(_v)); break;
        case 6: setColumnStretchFactor(*reinterpret_cast< int*>(_v)); break;
        case 7: setRowSpacing(*reinterpret_cast< int*>(_v)); break;
        case 8: setColumnSpacing(*reinterpret_cast< int*>(_v)); break;
        case 9: setRowPreferredHeight(*reinterpret_cast< int*>(_v)); break;
        case 10: setRowMinimumHeight(*reinterpret_cast< int*>(_v)); break;
        case 11: setRowMaximumHeight(*reinterpret_cast< int*>(_v)); break;
        case 12: setRowFixedHeight(*reinterpret_cast< int*>(_v)); break;
        case 13: setColumnPreferredWidth(*reinterpret_cast< int*>(_v)); break;
        case 14: setColumnMaximumWidth(*reinterpret_cast< int*>(_v)); break;
        case 15: setColumnMinimumWidth(*reinterpret_cast< int*>(_v)); break;
        case 16: setColumnFixedWidth(*reinterpret_cast< int*>(_v)); break;
        }
        _id -= 17;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 17;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 17;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 17;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 17;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 17;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 17;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void GridLayoutAttached::alignmentChanged(QGraphicsLayoutItem * _t1, Qt::Alignment _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
