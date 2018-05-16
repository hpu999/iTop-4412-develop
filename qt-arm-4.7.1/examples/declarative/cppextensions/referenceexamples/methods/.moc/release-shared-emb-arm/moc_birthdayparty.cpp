/****************************************************************************
** Meta object code from reading C++ file 'birthdayparty.h'
**
** Created: Fri May 11 23:33:48 2018
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../birthdayparty.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'birthdayparty.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_BirthdayParty[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       2,   19, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: signature, parameters, type, tag, flags
      20,   15,   14,   14, 0x02,

 // properties: name, type, flags
      44,   36, 0x0009510b,
      82,   49, 0x00095009,

       0        // eod
};

static const char qt_meta_stringdata_BirthdayParty[] = {
    "BirthdayParty\0\0name\0invite(QString)\0"
    "Person*\0host\0QDeclarativeListProperty<Person>\0"
    "guests\0"
};

const QMetaObject BirthdayParty::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_BirthdayParty,
      qt_meta_data_BirthdayParty, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BirthdayParty::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BirthdayParty::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BirthdayParty::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BirthdayParty))
        return static_cast<void*>(const_cast< BirthdayParty*>(this));
    return QObject::qt_metacast(_clname);
}

int BirthdayParty::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: invite((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Person**>(_v) = host(); break;
        case 1: *reinterpret_cast< QDeclarativeListProperty<Person>*>(_v) = guests(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setHost(*reinterpret_cast< Person**>(_v)); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
