/****************************************************************************
** Meta object code from reading C++ file 'basestation.h'
**
** Created: Wed 17. Aug 20:58:23 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../basestation.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'basestation.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_baseStation[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      28,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      25,   13,   12,   12, 0x08,
      64,   12,   12,   12, 0x08,
      81,   12,   12,   12, 0x08,
     103,   12,   12,   12, 0x08,
     131,   12,   12,   12, 0x08,
     150,   12,   12,   12, 0x08,
     169,   12,   12,   12, 0x08,
     185,   12,   12,   12, 0x08,
     200,   12,   12,   12, 0x08,
     219,   12,   12,   12, 0x08,
     237,   12,   12,   12, 0x08,
     254,   12,   12,   12, 0x08,
     279,   12,   12,   12, 0x08,
     305,   12,   12,   12, 0x08,
     325,   12,   12,   12, 0x08,
     341,   12,   12,   12, 0x08,
     358,   12,   12,   12, 0x08,
     379,   12,   12,   12, 0x08,
     403,   12,   12,   12, 0x08,
     424,   12,   12,   12, 0x08,
     443,   12,   12,   12, 0x08,
     463,   12,   12,   12, 0x08,
     496,  487,   12,   12, 0x08,
     527,   12,   12,   12, 0x08,
     550,   12,   12,   12, 0x08,
     574,   12,   12,   12, 0x08,
     594,   12,   12,   12, 0x08,
     612,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_baseStation[] = {
    "baseStation\0\0Event,Coord\0"
    "slot_Click(const QMouseEvent*,QPointF)\0"
    "slot_osmAction()\0slot_yahooActionMap()\0"
    "slot_yahooActionSatellite()\0"
    "slot_cleanOutput()\0slot_startEngine()\0"
    "slot_startAll()\0slot_stopAll()\0"
    "slot_resetDevice()\0slot_startCalib()\0"
    "slot_stopCalib()\0slot_readCompassValues()\0"
    "slot_writeCompassValues()\0slot_requestDebug()\0"
    "slot_startYGE()\0slot_updateYGE()\0"
    "slot_connectDevice()\0slot_disConnectDevice()\0"
    "slot_updateAdcRate()\0slot_readSetting()\0"
    "slot_flashSetting()\0slot_init_Diagnostics()\0"
    "Typ,Text\0slot_showTerminal(int,QString)\0"
    "slot_updatePIDSimple()\0slot_convertPIDSimple()\0"
    "slot_writeSetting()\0slot_readSetHdd()\0"
    "slot_writeSetHdd()\0"
};

const QMetaObject baseStation::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_baseStation,
      qt_meta_data_baseStation, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &baseStation::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *baseStation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *baseStation::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_baseStation))
        return static_cast<void*>(const_cast< baseStation*>(this));
    if (!strcmp(_clname, "Ui::baseStation"))
        return static_cast< Ui::baseStation*>(const_cast< baseStation*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int baseStation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: slot_Click((*reinterpret_cast< const QMouseEvent*(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2]))); break;
        case 1: slot_osmAction(); break;
        case 2: slot_yahooActionMap(); break;
        case 3: slot_yahooActionSatellite(); break;
        case 4: slot_cleanOutput(); break;
        case 5: slot_startEngine(); break;
        case 6: slot_startAll(); break;
        case 7: slot_stopAll(); break;
        case 8: slot_resetDevice(); break;
        case 9: slot_startCalib(); break;
        case 10: slot_stopCalib(); break;
        case 11: slot_readCompassValues(); break;
        case 12: slot_writeCompassValues(); break;
        case 13: slot_requestDebug(); break;
        case 14: slot_startYGE(); break;
        case 15: slot_updateYGE(); break;
        case 16: slot_connectDevice(); break;
        case 17: slot_disConnectDevice(); break;
        case 18: slot_updateAdcRate(); break;
        case 19: slot_readSetting(); break;
        case 20: slot_flashSetting(); break;
        case 21: slot_init_Diagnostics(); break;
        case 22: slot_showTerminal((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 23: slot_updatePIDSimple(); break;
        case 24: slot_convertPIDSimple(); break;
        case 25: slot_writeSetting(); break;
        case 26: slot_readSetHdd(); break;
        case 27: slot_writeSetHdd(); break;
        default: ;
        }
        _id -= 28;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
