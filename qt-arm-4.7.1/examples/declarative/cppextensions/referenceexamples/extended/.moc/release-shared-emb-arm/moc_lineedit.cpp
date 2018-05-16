/****************************************************************************
** Meta object code from reading C++ file 'lineedit.h'
**
** Created: Fri May 11 23:33:35 2018
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../lineedit.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lineedit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_LineEditExtension[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       4,   19, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x05,

 // properties: name, type, flags
      40,   36, 0x02495103,
      51,   36, 0x02495103,
      63,   36, 0x02495103,
      73,   36, 0x02495103,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,

       0        // eod
};

static const char qt_meta_stringdata_LineEditExtension[] = {
    "LineEditExtension\0\0marginsChanged()\0"
    "int\0leftMargin\0rightMargin\0topMargin\0"
    "bottomMargin\0"
};

const QMetaObject LineEditExtension::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_LineEditExtension,
      qt_meta_data_LineEditExtension, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LineEditExtension::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LineEditExtension::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LineEditExtension::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LineEditExtension))
        return static_cast<void*>(const_cast< LineEditExtension*>(this));
    return QObject::qt_metacast(_clname);
}

int LineEditExtension::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: marginsChanged(); break;
        default: ;
        }
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = leftMargin(); break;
        case 1: *reinterpret_cast< int*>(_v) = rightMargin(); break;
        case 2: *reinterpret_cast< int*>(_v) = topMargin(); break;
        case 3: *reinterpret_cast< int*>(_v) = bottomMargin(); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setLeftMargin(*reinterpret_cast< int*>(_v)); break;
        case 1: setRightMargin(*reinterpret_cast< int*>(_v)); break;
        case 2: setTopMargin(*reinterpret_cast< int*>(_v)); break;
        case 3: setBottomMargin(*reinterpret_cast< int*>(_v)); break;
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

// SIGNAL 0
void LineEditExtension::marginsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
