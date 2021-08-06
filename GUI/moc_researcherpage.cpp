/****************************************************************************
** Meta object code from reading C++ file 'researcherpage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../project_repo/GUI/researcherpage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'researcherpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ResearcherPage_t {
    QByteArrayData data[15];
    char stringdata0[180];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ResearcherPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ResearcherPage_t qt_meta_stringdata_ResearcherPage = {
    {
QT_MOC_LITERAL(0, 0, 14), // "ResearcherPage"
QT_MOC_LITERAL(1, 15, 11), // "set_bee_num"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 10), // "set_sim_id"
QT_MOC_LITERAL(4, 39, 13), // "set_board_num"
QT_MOC_LITERAL(5, 53, 8), // "set_temp"
QT_MOC_LITERAL(6, 62, 11), // "set_weather"
QT_MOC_LITERAL(7, 74, 12), // "set_swarming"
QT_MOC_LITERAL(8, 87, 11), // "set_robbing"
QT_MOC_LITERAL(9, 99, 7), // "set_day"
QT_MOC_LITERAL(10, 107, 12), // "set_duration"
QT_MOC_LITERAL(11, 120, 14), // "run_simulation"
QT_MOC_LITERAL(12, 135, 19), // "colorize_temp_input"
QT_MOC_LITERAL(13, 155, 1), // "v"
QT_MOC_LITERAL(14, 157, 22) // "colorize_weather_input"

    },
    "ResearcherPage\0set_bee_num\0\0set_sim_id\0"
    "set_board_num\0set_temp\0set_weather\0"
    "set_swarming\0set_robbing\0set_day\0"
    "set_duration\0run_simulation\0"
    "colorize_temp_input\0v\0colorize_weather_input"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ResearcherPage[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x08 /* Private */,
       3,    0,   75,    2, 0x08 /* Private */,
       4,    0,   76,    2, 0x08 /* Private */,
       5,    0,   77,    2, 0x08 /* Private */,
       6,    0,   78,    2, 0x08 /* Private */,
       7,    0,   79,    2, 0x08 /* Private */,
       8,    0,   80,    2, 0x08 /* Private */,
       9,    0,   81,    2, 0x08 /* Private */,
      10,    0,   82,    2, 0x08 /* Private */,
      11,    0,   83,    2, 0x08 /* Private */,
      12,    1,   84,    2, 0x08 /* Private */,
      14,    1,   87,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   13,

       0        // eod
};

void ResearcherPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ResearcherPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->set_bee_num(); break;
        case 1: _t->set_sim_id(); break;
        case 2: _t->set_board_num(); break;
        case 3: _t->set_temp(); break;
        case 4: _t->set_weather(); break;
        case 5: _t->set_swarming(); break;
        case 6: _t->set_robbing(); break;
        case 7: _t->set_day(); break;
        case 8: _t->set_duration(); break;
        case 9: _t->run_simulation(); break;
        case 10: _t->colorize_temp_input((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->colorize_weather_input((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ResearcherPage::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_ResearcherPage.data,
    qt_meta_data_ResearcherPage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ResearcherPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ResearcherPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ResearcherPage.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int ResearcherPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
