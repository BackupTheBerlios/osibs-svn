/****************************************************************************
** Meta object code from reading C++ file 'attitude_indicator.h'
**
** Created: Mon 25. Apr 18:57:40 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../attitude_indicator.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'attitude_indicator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AttitudeIndicator[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x0a,
      45,   39,   18,   18, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_AttitudeIndicator[] = {
    "AttitudeIndicator\0\0setGradient(double)\0"
    "angle\0setAngle(double)\0"
};

const QMetaObject AttitudeIndicator::staticMetaObject = {
    { &QwtDial::staticMetaObject, qt_meta_stringdata_AttitudeIndicator,
      qt_meta_data_AttitudeIndicator, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AttitudeIndicator::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AttitudeIndicator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AttitudeIndicator::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AttitudeIndicator))
        return static_cast<void*>(const_cast< AttitudeIndicator*>(this));
    return QwtDial::qt_metacast(_clname);
}

int AttitudeIndicator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QwtDial::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: setGradient((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: setAngle((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
