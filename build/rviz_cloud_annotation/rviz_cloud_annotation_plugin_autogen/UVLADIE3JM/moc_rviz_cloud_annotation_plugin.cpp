/****************************************************************************
** Meta object code from reading C++ file 'rviz_cloud_annotation_plugin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/rviz_cloud_annotation/src/rviz_cloud_annotation_plugin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rviz_cloud_annotation_plugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_rviz_cloud_annotation__QRVizCloudAnnotation_t {
    QByteArrayData data[67];
    char stringdata0[952];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_rviz_cloud_annotation__QRVizCloudAnnotation_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_rviz_cloud_annotation__QRVizCloudAnnotation_t qt_meta_stringdata_rviz_cloud_annotation__QRVizCloudAnnotation = {
    {
QT_MOC_LITERAL(0, 0, 43), // "rviz_cloud_annotation::QRVizC..."
QT_MOC_LITERAL(1, 44, 13), // "onSetEditMode"
QT_MOC_LITERAL(2, 58, 0), // ""
QT_MOC_LITERAL(3, 59, 4), // "mode"
QT_MOC_LITERAL(4, 64, 13), // "onSetToolType"
QT_MOC_LITERAL(5, 78, 4), // "type"
QT_MOC_LITERAL(6, 83, 19), // "onSetAnnotationType"
QT_MOC_LITERAL(7, 103, 6), // "uint32"
QT_MOC_LITERAL(8, 110, 15), // "annotation_type"
QT_MOC_LITERAL(9, 126, 21), // "onLabelButtonSelected"
QT_MOC_LITERAL(10, 148, 2), // "id"
QT_MOC_LITERAL(11, 151, 11), // "onPlusLabel"
QT_MOC_LITERAL(12, 163, 12), // "onMinusLabel"
QT_MOC_LITERAL(13, 176, 8), // "onPageUp"
QT_MOC_LITERAL(14, 185, 10), // "onPageDown"
QT_MOC_LITERAL(15, 196, 11), // "onAutoPlane"
QT_MOC_LITERAL(16, 208, 6), // "onSave"
QT_MOC_LITERAL(17, 215, 9), // "onRestore"
QT_MOC_LITERAL(18, 225, 7), // "onClear"
QT_MOC_LITERAL(19, 233, 5), // "onNew"
QT_MOC_LITERAL(20, 239, 14), // "onClearCurrent"
QT_MOC_LITERAL(21, 254, 6), // "onUndo"
QT_MOC_LITERAL(22, 261, 6), // "onRedo"
QT_MOC_LITERAL(23, 268, 10), // "onSendName"
QT_MOC_LITERAL(24, 279, 18), // "onViewCloudToggled"
QT_MOC_LITERAL(25, 298, 7), // "checked"
QT_MOC_LITERAL(26, 306, 26), // "onViewControlPointsToggled"
QT_MOC_LITERAL(27, 333, 19), // "onViewLabelsToggled"
QT_MOC_LITERAL(28, 353, 17), // "onGotoFirstUnused"
QT_MOC_LITERAL(29, 371, 16), // "onGotoLastUnused"
QT_MOC_LITERAL(30, 388, 11), // "onGotoFirst"
QT_MOC_LITERAL(31, 400, 16), // "onGotoNextUnused"
QT_MOC_LITERAL(32, 417, 15), // "onSmallerPoints"
QT_MOC_LITERAL(33, 433, 14), // "onBiggerPoints"
QT_MOC_LITERAL(34, 448, 17), // "onResetPointsSize"
QT_MOC_LITERAL(35, 466, 23), // "onControlYawSliderMoved"
QT_MOC_LITERAL(36, 490, 9), // "new_value"
QT_MOC_LITERAL(37, 500, 21), // "onControlYawSliderSet"
QT_MOC_LITERAL(38, 522, 18), // "onSetControlMaxYaw"
QT_MOC_LITERAL(39, 541, 15), // "std_msgs::Int32"
QT_MOC_LITERAL(40, 557, 3), // "msg"
QT_MOC_LITERAL(41, 561, 18), // "onSetControlMinYaw"
QT_MOC_LITERAL(42, 580, 8), // "onYawInc"
QT_MOC_LITERAL(43, 589, 8), // "onYawDec"
QT_MOC_LITERAL(44, 598, 8), // "onBiasX1"
QT_MOC_LITERAL(45, 607, 8), // "onBiasX2"
QT_MOC_LITERAL(46, 616, 8), // "onBiasX3"
QT_MOC_LITERAL(47, 625, 8), // "onBiasX4"
QT_MOC_LITERAL(48, 634, 8), // "onBiasY1"
QT_MOC_LITERAL(49, 643, 8), // "onBiasY2"
QT_MOC_LITERAL(50, 652, 8), // "onBiasY3"
QT_MOC_LITERAL(51, 661, 8), // "onBiasY4"
QT_MOC_LITERAL(52, 670, 8), // "onBiasZ1"
QT_MOC_LITERAL(53, 679, 8), // "onBiasZ2"
QT_MOC_LITERAL(54, 688, 8), // "onBiasZ3"
QT_MOC_LITERAL(55, 697, 8), // "onBiasZ4"
QT_MOC_LITERAL(56, 706, 13), // "onSetBiasZero"
QT_MOC_LITERAL(57, 720, 15), // "std_msgs::Empty"
QT_MOC_LITERAL(58, 736, 13), // "onSetObjectId"
QT_MOC_LITERAL(59, 750, 16), // "onChangeObjectId"
QT_MOC_LITERAL(60, 767, 31), // "onControlPointWeightSliderMoved"
QT_MOC_LITERAL(61, 799, 29), // "onControlPointWeightSliderSet"
QT_MOC_LITERAL(62, 829, 23), // "onControlPointWeightInc"
QT_MOC_LITERAL(63, 853, 23), // "onControlPointWeightDec"
QT_MOC_LITERAL(64, 877, 23), // "onControlPointWeightMax"
QT_MOC_LITERAL(65, 901, 23), // "onControlPointWeightMin"
QT_MOC_LITERAL(66, 925, 26) // "onSetControlPointMaxWeight"

    },
    "rviz_cloud_annotation::QRVizCloudAnnotation\0"
    "onSetEditMode\0\0mode\0onSetToolType\0"
    "type\0onSetAnnotationType\0uint32\0"
    "annotation_type\0onLabelButtonSelected\0"
    "id\0onPlusLabel\0onMinusLabel\0onPageUp\0"
    "onPageDown\0onAutoPlane\0onSave\0onRestore\0"
    "onClear\0onNew\0onClearCurrent\0onUndo\0"
    "onRedo\0onSendName\0onViewCloudToggled\0"
    "checked\0onViewControlPointsToggled\0"
    "onViewLabelsToggled\0onGotoFirstUnused\0"
    "onGotoLastUnused\0onGotoFirst\0"
    "onGotoNextUnused\0onSmallerPoints\0"
    "onBiggerPoints\0onResetPointsSize\0"
    "onControlYawSliderMoved\0new_value\0"
    "onControlYawSliderSet\0onSetControlMaxYaw\0"
    "std_msgs::Int32\0msg\0onSetControlMinYaw\0"
    "onYawInc\0onYawDec\0onBiasX1\0onBiasX2\0"
    "onBiasX3\0onBiasX4\0onBiasY1\0onBiasY2\0"
    "onBiasY3\0onBiasY4\0onBiasZ1\0onBiasZ2\0"
    "onBiasZ3\0onBiasZ4\0onSetBiasZero\0"
    "std_msgs::Empty\0onSetObjectId\0"
    "onChangeObjectId\0onControlPointWeightSliderMoved\0"
    "onControlPointWeightSliderSet\0"
    "onControlPointWeightInc\0onControlPointWeightDec\0"
    "onControlPointWeightMax\0onControlPointWeightMin\0"
    "onSetControlPointMaxWeight"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_rviz_cloud_annotation__QRVizCloudAnnotation[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      55,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  289,    2, 0x08 /* Private */,
       4,    1,  292,    2, 0x08 /* Private */,
       6,    1,  295,    2, 0x08 /* Private */,
       9,    1,  298,    2, 0x08 /* Private */,
      11,    0,  301,    2, 0x08 /* Private */,
      12,    0,  302,    2, 0x08 /* Private */,
      13,    0,  303,    2, 0x08 /* Private */,
      14,    0,  304,    2, 0x08 /* Private */,
      15,    0,  305,    2, 0x08 /* Private */,
      16,    0,  306,    2, 0x08 /* Private */,
      17,    0,  307,    2, 0x08 /* Private */,
      18,    0,  308,    2, 0x08 /* Private */,
      19,    0,  309,    2, 0x08 /* Private */,
      20,    0,  310,    2, 0x08 /* Private */,
      21,    0,  311,    2, 0x08 /* Private */,
      22,    0,  312,    2, 0x08 /* Private */,
      23,    0,  313,    2, 0x08 /* Private */,
      24,    1,  314,    2, 0x08 /* Private */,
      26,    1,  317,    2, 0x08 /* Private */,
      27,    1,  320,    2, 0x08 /* Private */,
      28,    0,  323,    2, 0x08 /* Private */,
      29,    0,  324,    2, 0x08 /* Private */,
      30,    0,  325,    2, 0x08 /* Private */,
      31,    0,  326,    2, 0x08 /* Private */,
      32,    0,  327,    2, 0x08 /* Private */,
      33,    0,  328,    2, 0x08 /* Private */,
      34,    0,  329,    2, 0x08 /* Private */,
      35,    1,  330,    2, 0x08 /* Private */,
      37,    1,  333,    2, 0x08 /* Private */,
      38,    1,  336,    2, 0x08 /* Private */,
      41,    1,  339,    2, 0x08 /* Private */,
      42,    0,  342,    2, 0x08 /* Private */,
      43,    0,  343,    2, 0x08 /* Private */,
      44,    0,  344,    2, 0x08 /* Private */,
      45,    0,  345,    2, 0x08 /* Private */,
      46,    0,  346,    2, 0x08 /* Private */,
      47,    0,  347,    2, 0x08 /* Private */,
      48,    0,  348,    2, 0x08 /* Private */,
      49,    0,  349,    2, 0x08 /* Private */,
      50,    0,  350,    2, 0x08 /* Private */,
      51,    0,  351,    2, 0x08 /* Private */,
      52,    0,  352,    2, 0x08 /* Private */,
      53,    0,  353,    2, 0x08 /* Private */,
      54,    0,  354,    2, 0x08 /* Private */,
      55,    0,  355,    2, 0x08 /* Private */,
      56,    1,  356,    2, 0x08 /* Private */,
      58,    1,  359,    2, 0x08 /* Private */,
      59,    0,  362,    2, 0x08 /* Private */,
      60,    1,  363,    2, 0x08 /* Private */,
      61,    1,  366,    2, 0x08 /* Private */,
      62,    0,  369,    2, 0x08 /* Private */,
      63,    0,  370,    2, 0x08 /* Private */,
      64,    0,  371,    2, 0x08 /* Private */,
      65,    0,  372,    2, 0x08 /* Private */,
      66,    1,  373,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::Int,   10,
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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   25,
    QMetaType::Void, QMetaType::Bool,   25,
    QMetaType::Void, QMetaType::Bool,   25,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   36,
    QMetaType::Void, QMetaType::Int,   36,
    QMetaType::Void, 0x80000000 | 39,   40,
    QMetaType::Void, 0x80000000 | 39,   40,
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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 57,   40,
    QMetaType::Void, 0x80000000 | 39,   40,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   36,
    QMetaType::Void, QMetaType::Int,   36,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 39,   40,

       0        // eod
};

void rviz_cloud_annotation::QRVizCloudAnnotation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QRVizCloudAnnotation *_t = static_cast<QRVizCloudAnnotation *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onSetEditMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->onSetToolType((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->onSetAnnotationType((*reinterpret_cast< uint32(*)>(_a[1]))); break;
        case 3: _t->onLabelButtonSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->onPlusLabel(); break;
        case 5: _t->onMinusLabel(); break;
        case 6: _t->onPageUp(); break;
        case 7: _t->onPageDown(); break;
        case 8: _t->onAutoPlane(); break;
        case 9: _t->onSave(); break;
        case 10: _t->onRestore(); break;
        case 11: _t->onClear(); break;
        case 12: _t->onNew(); break;
        case 13: _t->onClearCurrent(); break;
        case 14: _t->onUndo(); break;
        case 15: _t->onRedo(); break;
        case 16: _t->onSendName(); break;
        case 17: _t->onViewCloudToggled((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 18: _t->onViewControlPointsToggled((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 19: _t->onViewLabelsToggled((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 20: _t->onGotoFirstUnused(); break;
        case 21: _t->onGotoLastUnused(); break;
        case 22: _t->onGotoFirst(); break;
        case 23: _t->onGotoNextUnused(); break;
        case 24: _t->onSmallerPoints(); break;
        case 25: _t->onBiggerPoints(); break;
        case 26: _t->onResetPointsSize(); break;
        case 27: _t->onControlYawSliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 28: _t->onControlYawSliderSet((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 29: _t->onSetControlMaxYaw((*reinterpret_cast< const std_msgs::Int32(*)>(_a[1]))); break;
        case 30: _t->onSetControlMinYaw((*reinterpret_cast< const std_msgs::Int32(*)>(_a[1]))); break;
        case 31: _t->onYawInc(); break;
        case 32: _t->onYawDec(); break;
        case 33: _t->onBiasX1(); break;
        case 34: _t->onBiasX2(); break;
        case 35: _t->onBiasX3(); break;
        case 36: _t->onBiasX4(); break;
        case 37: _t->onBiasY1(); break;
        case 38: _t->onBiasY2(); break;
        case 39: _t->onBiasY3(); break;
        case 40: _t->onBiasY4(); break;
        case 41: _t->onBiasZ1(); break;
        case 42: _t->onBiasZ2(); break;
        case 43: _t->onBiasZ3(); break;
        case 44: _t->onBiasZ4(); break;
        case 45: _t->onSetBiasZero((*reinterpret_cast< const std_msgs::Empty(*)>(_a[1]))); break;
        case 46: _t->onSetObjectId((*reinterpret_cast< const std_msgs::Int32(*)>(_a[1]))); break;
        case 47: _t->onChangeObjectId(); break;
        case 48: _t->onControlPointWeightSliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 49: _t->onControlPointWeightSliderSet((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 50: _t->onControlPointWeightInc(); break;
        case 51: _t->onControlPointWeightDec(); break;
        case 52: _t->onControlPointWeightMax(); break;
        case 53: _t->onControlPointWeightMin(); break;
        case 54: _t->onSetControlPointMaxWeight((*reinterpret_cast< const std_msgs::Int32(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject rviz_cloud_annotation::QRVizCloudAnnotation::staticMetaObject = {
    { &rviz::Panel::staticMetaObject, qt_meta_stringdata_rviz_cloud_annotation__QRVizCloudAnnotation.data,
      qt_meta_data_rviz_cloud_annotation__QRVizCloudAnnotation,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *rviz_cloud_annotation::QRVizCloudAnnotation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *rviz_cloud_annotation::QRVizCloudAnnotation::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_rviz_cloud_annotation__QRVizCloudAnnotation.stringdata0))
        return static_cast<void*>(this);
    return rviz::Panel::qt_metacast(_clname);
}

int rviz_cloud_annotation::QRVizCloudAnnotation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = rviz::Panel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 55)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 55;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 55)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 55;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
