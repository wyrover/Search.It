/****************************************************************************
** Meta object code from reading C++ file 'desktopsearch.h'
**
** Created: Sat May 28 14:57:06 2011
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../desktopsearch.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'desktopsearch.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DesktopSearch[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      44,   14,   14,   14, 0x0a,
      65,   14,   14,   14, 0x0a,
      96,   14,   14,   14, 0x0a,
     127,   14,   14,   14, 0x0a,
     145,  143,   14,   14, 0x0a,
     174,   14,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_DesktopSearch[] = {
    "DesktopSearch\0\0Signal_SearchResult(QString)\0"
    "OnSearchBtnClicked()\0"
    "ShowResult(QList<DSFileItem>*)\0"
    "readResult(QList<DSFileItem>*)\0"
    "OnEdit(QString)\0,\0OnItemDoubleClicked(int,int)\0"
    "OnHistoryItemDoubleClicked(QModelIndex)\0"
};

void DesktopSearch::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DesktopSearch *_t = static_cast<DesktopSearch *>(_o);
        switch (_id) {
        case 0: _t->Signal_SearchResult((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->OnSearchBtnClicked(); break;
        case 2: _t->ShowResult((*reinterpret_cast< QList<DSFileItem>*(*)>(_a[1]))); break;
        case 3: _t->readResult((*reinterpret_cast< QList<DSFileItem>*(*)>(_a[1]))); break;
        case 4: _t->OnEdit((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->OnItemDoubleClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->OnHistoryItemDoubleClicked((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DesktopSearch::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DesktopSearch::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_DesktopSearch,
      qt_meta_data_DesktopSearch, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DesktopSearch::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DesktopSearch::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DesktopSearch::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DesktopSearch))
        return static_cast<void*>(const_cast< DesktopSearch*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int DesktopSearch::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void DesktopSearch::Signal_SearchResult(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
