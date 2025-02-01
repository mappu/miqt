package qt6

/*

#include "gen_qmetatype.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QCborSimpleType byte

type QMetaType__Type int

const (
	QMetaType__Bool                  QMetaType__Type = 1
	QMetaType__Int                   QMetaType__Type = 2
	QMetaType__UInt                  QMetaType__Type = 3
	QMetaType__LongLong              QMetaType__Type = 4
	QMetaType__ULongLong             QMetaType__Type = 5
	QMetaType__Double                QMetaType__Type = 6
	QMetaType__Long                  QMetaType__Type = 32
	QMetaType__Short                 QMetaType__Type = 33
	QMetaType__Char                  QMetaType__Type = 34
	QMetaType__Char16                QMetaType__Type = 56
	QMetaType__Char32                QMetaType__Type = 57
	QMetaType__ULong                 QMetaType__Type = 35
	QMetaType__UShort                QMetaType__Type = 36
	QMetaType__UChar                 QMetaType__Type = 37
	QMetaType__Float                 QMetaType__Type = 38
	QMetaType__SChar                 QMetaType__Type = 40
	QMetaType__Nullptr               QMetaType__Type = 51
	QMetaType__QCborSimpleType       QMetaType__Type = 52
	QMetaType__Void                  QMetaType__Type = 43
	QMetaType__VoidStar              QMetaType__Type = 31
	QMetaType__QChar                 QMetaType__Type = 7
	QMetaType__QString               QMetaType__Type = 10
	QMetaType__QByteArray            QMetaType__Type = 12
	QMetaType__QBitArray             QMetaType__Type = 13
	QMetaType__QDate                 QMetaType__Type = 14
	QMetaType__QTime                 QMetaType__Type = 15
	QMetaType__QDateTime             QMetaType__Type = 16
	QMetaType__QUrl                  QMetaType__Type = 17
	QMetaType__QLocale               QMetaType__Type = 18
	QMetaType__QRect                 QMetaType__Type = 19
	QMetaType__QRectF                QMetaType__Type = 20
	QMetaType__QSize                 QMetaType__Type = 21
	QMetaType__QSizeF                QMetaType__Type = 22
	QMetaType__QLine                 QMetaType__Type = 23
	QMetaType__QLineF                QMetaType__Type = 24
	QMetaType__QPoint                QMetaType__Type = 25
	QMetaType__QPointF               QMetaType__Type = 26
	QMetaType__QEasingCurve          QMetaType__Type = 29
	QMetaType__QUuid                 QMetaType__Type = 30
	QMetaType__QVariant              QMetaType__Type = 41
	QMetaType__QRegularExpression    QMetaType__Type = 44
	QMetaType__QJsonValue            QMetaType__Type = 45
	QMetaType__QJsonObject           QMetaType__Type = 46
	QMetaType__QJsonArray            QMetaType__Type = 47
	QMetaType__QJsonDocument         QMetaType__Type = 48
	QMetaType__QCborValue            QMetaType__Type = 53
	QMetaType__QCborArray            QMetaType__Type = 54
	QMetaType__QCborMap              QMetaType__Type = 55
	QMetaType__QModelIndex           QMetaType__Type = 42
	QMetaType__QPersistentModelIndex QMetaType__Type = 50
	QMetaType__QObjectStar           QMetaType__Type = 39
	QMetaType__QVariantMap           QMetaType__Type = 8
	QMetaType__QVariantList          QMetaType__Type = 9
	QMetaType__QVariantHash          QMetaType__Type = 28
	QMetaType__QVariantPair          QMetaType__Type = 58
	QMetaType__QByteArrayList        QMetaType__Type = 49
	QMetaType__QStringList           QMetaType__Type = 11
	QMetaType__QFont                 QMetaType__Type = 4096
	QMetaType__QPixmap               QMetaType__Type = 4097
	QMetaType__QBrush                QMetaType__Type = 4098
	QMetaType__QColor                QMetaType__Type = 4099
	QMetaType__QPalette              QMetaType__Type = 4100
	QMetaType__QIcon                 QMetaType__Type = 4101
	QMetaType__QImage                QMetaType__Type = 4102
	QMetaType__QPolygon              QMetaType__Type = 4103
	QMetaType__QRegion               QMetaType__Type = 4104
	QMetaType__QBitmap               QMetaType__Type = 4105
	QMetaType__QCursor               QMetaType__Type = 4106
	QMetaType__QKeySequence          QMetaType__Type = 4107
	QMetaType__QPen                  QMetaType__Type = 4108
	QMetaType__QTextLength           QMetaType__Type = 4109
	QMetaType__QTextFormat           QMetaType__Type = 4110
	QMetaType__QTransform            QMetaType__Type = 4112
	QMetaType__QMatrix4x4            QMetaType__Type = 4113
	QMetaType__QVector2D             QMetaType__Type = 4114
	QMetaType__QVector3D             QMetaType__Type = 4115
	QMetaType__QVector4D             QMetaType__Type = 4116
	QMetaType__QQuaternion           QMetaType__Type = 4117
	QMetaType__QPolygonF             QMetaType__Type = 4118
	QMetaType__QColorSpace           QMetaType__Type = 4119
	QMetaType__QSizePolicy           QMetaType__Type = 8192
	QMetaType__FirstCoreType         QMetaType__Type = 1
	QMetaType__LastCoreType          QMetaType__Type = 58
	QMetaType__FirstGuiType          QMetaType__Type = 4096
	QMetaType__LastGuiType           QMetaType__Type = 4119
	QMetaType__FirstWidgetsType      QMetaType__Type = 8192
	QMetaType__LastWidgetsType       QMetaType__Type = 8192
	QMetaType__HighestInternalId     QMetaType__Type = 8192
	QMetaType__QReal                 QMetaType__Type = 6
	QMetaType__UnknownType           QMetaType__Type = 0
	QMetaType__User                  QMetaType__Type = 65536
)

type QMetaType__TypeFlag int

const (
	QMetaType__NeedsConstruction        QMetaType__TypeFlag = 1
	QMetaType__NeedsDestruction         QMetaType__TypeFlag = 2
	QMetaType__RelocatableType          QMetaType__TypeFlag = 4
	QMetaType__MovableType              QMetaType__TypeFlag = 4
	QMetaType__PointerToQObject         QMetaType__TypeFlag = 8
	QMetaType__IsEnumeration            QMetaType__TypeFlag = 16
	QMetaType__SharedPointerToQObject   QMetaType__TypeFlag = 32
	QMetaType__WeakPointerToQObject     QMetaType__TypeFlag = 64
	QMetaType__TrackingPointerToQObject QMetaType__TypeFlag = 128
	QMetaType__IsUnsignedEnumeration    QMetaType__TypeFlag = 256
	QMetaType__IsGadget                 QMetaType__TypeFlag = 512
	QMetaType__PointerToGadget          QMetaType__TypeFlag = 1024
	QMetaType__IsPointer                QMetaType__TypeFlag = 2048
	QMetaType__IsQmlList                QMetaType__TypeFlag = 4096
	QMetaType__IsConst                  QMetaType__TypeFlag = 8192
)

type QMetaType struct {
	h *C.QMetaType
}

func (this *QMetaType) cPointer() *C.QMetaType {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QMetaType) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQMetaType constructs the type using only CGO pointers.
func newQMetaType(h *C.QMetaType) *QMetaType {
	if h == nil {
		return nil
	}

	return &QMetaType{h: h}
}

// UnsafeNewQMetaType constructs the type using only unsafe pointers.
func UnsafeNewQMetaType(h unsafe.Pointer) *QMetaType {
	return newQMetaType((*C.QMetaType)(h))
}

// NewQMetaType constructs a new QMetaType object.
func NewQMetaType(typeVal int) *QMetaType {

	return newQMetaType(C.QMetaType_new((C.int)(typeVal)))
}

// NewQMetaType2 constructs a new QMetaType object.
func NewQMetaType2() *QMetaType {

	return newQMetaType(C.QMetaType_new2())
}

// NewQMetaType3 constructs a new QMetaType object.
func NewQMetaType3(param1 *QMetaType) *QMetaType {

	return newQMetaType(C.QMetaType_new3(param1.cPointer()))
}

func QMetaType_RegisterNormalizedTypedef(normalizedTypeName []byte, typeVal QMetaType) {
	normalizedTypeName_alias := C.struct_miqt_string{}
	if len(normalizedTypeName) > 0 {
		normalizedTypeName_alias.data = (*C.char)(unsafe.Pointer(&normalizedTypeName[0]))
	} else {
		normalizedTypeName_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	normalizedTypeName_alias.len = C.size_t(len(normalizedTypeName))
	C.QMetaType_registerNormalizedTypedef(normalizedTypeName_alias, typeVal.cPointer())
}

func QMetaType_Type(typeName string) int {
	typeName_Cstring := C.CString(typeName)
	defer C.free(unsafe.Pointer(typeName_Cstring))
	return (int)(C.QMetaType_type(typeName_Cstring))
}

func QMetaType_TypeWithTypeName(typeName []byte) int {
	typeName_alias := C.struct_miqt_string{}
	if len(typeName) > 0 {
		typeName_alias.data = (*C.char)(unsafe.Pointer(&typeName[0]))
	} else {
		typeName_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	typeName_alias.len = C.size_t(len(typeName))
	return (int)(C.QMetaType_typeWithTypeName(typeName_alias))
}

func QMetaType_TypeName(typeVal int) string {
	_ret := C.QMetaType_typeName((C.int)(typeVal))
	return C.GoString(_ret)
}

func QMetaType_SizeOf(typeVal int) int {
	return (int)(C.QMetaType_sizeOf((C.int)(typeVal)))
}

func QMetaType_TypeFlags(typeVal int) QMetaType__TypeFlag {
	return (QMetaType__TypeFlag)(C.QMetaType_typeFlags((C.int)(typeVal)))
}

func QMetaType_MetaObjectForType(typeVal int) *QMetaObject {
	return newQMetaObject(C.QMetaType_metaObjectForType((C.int)(typeVal)))
}

func QMetaType_Create(typeVal int) unsafe.Pointer {
	return (unsafe.Pointer)(C.QMetaType_create((C.int)(typeVal)))
}

func QMetaType_Destroy(typeVal int, data unsafe.Pointer) {
	C.QMetaType_destroy((C.int)(typeVal), data)
}

func QMetaType_Construct(typeVal int, where unsafe.Pointer, copyVal unsafe.Pointer) unsafe.Pointer {
	return (unsafe.Pointer)(C.QMetaType_construct((C.int)(typeVal), where, copyVal))
}

func QMetaType_Destruct(typeVal int, where unsafe.Pointer) {
	C.QMetaType_destruct((C.int)(typeVal), where)
}

func QMetaType_IsRegistered(typeVal int) bool {
	return (bool)(C.QMetaType_isRegistered((C.int)(typeVal)))
}

func (this *QMetaType) IsValid() bool {
	return (bool)(C.QMetaType_isValid(this.h))
}

func (this *QMetaType) IsRegistered2() bool {
	return (bool)(C.QMetaType_isRegistered2(this.h))
}

func (this *QMetaType) Id() int {
	return (int)(C.QMetaType_id(this.h))
}

func (this *QMetaType) SizeOf2() int64 {
	return (int64)(C.QMetaType_sizeOf2(this.h))
}

func (this *QMetaType) AlignOf() int64 {
	return (int64)(C.QMetaType_alignOf(this.h))
}

func (this *QMetaType) Flags() QMetaType__TypeFlag {
	return (QMetaType__TypeFlag)(C.QMetaType_flags(this.h))
}

func (this *QMetaType) MetaObject() *QMetaObject {
	return newQMetaObject(C.QMetaType_metaObject(this.h))
}

func (this *QMetaType) Name() string {
	_ret := C.QMetaType_name(this.h)
	return C.GoString(_ret)
}

func (this *QMetaType) Create2() unsafe.Pointer {
	return (unsafe.Pointer)(C.QMetaType_create2(this.h))
}

func (this *QMetaType) DestroyWithData(data unsafe.Pointer) {
	C.QMetaType_destroyWithData(this.h, data)
}

func (this *QMetaType) ConstructWithWhere(where unsafe.Pointer) unsafe.Pointer {
	return (unsafe.Pointer)(C.QMetaType_constructWithWhere(this.h, where))
}

func (this *QMetaType) DestructWithData(data unsafe.Pointer) {
	C.QMetaType_destructWithData(this.h, data)
}

func (this *QMetaType) Compare(lhs unsafe.Pointer, rhs unsafe.Pointer) *QPartialOrdering {
	_goptr := newQPartialOrdering(C.QMetaType_compare(this.h, lhs, rhs))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMetaType) Equals(lhs unsafe.Pointer, rhs unsafe.Pointer) bool {
	return (bool)(C.QMetaType_equals(this.h, lhs, rhs))
}

func (this *QMetaType) IsEqualityComparable() bool {
	return (bool)(C.QMetaType_isEqualityComparable(this.h))
}

func (this *QMetaType) IsOrdered() bool {
	return (bool)(C.QMetaType_isOrdered(this.h))
}

func (this *QMetaType) Save(stream *QDataStream, data unsafe.Pointer) bool {
	return (bool)(C.QMetaType_save(this.h, stream.cPointer(), data))
}

func (this *QMetaType) Load(stream *QDataStream, data unsafe.Pointer) bool {
	return (bool)(C.QMetaType_load(this.h, stream.cPointer(), data))
}

func (this *QMetaType) HasRegisteredDataStreamOperators() bool {
	return (bool)(C.QMetaType_hasRegisteredDataStreamOperators(this.h))
}

func QMetaType_Save2(stream *QDataStream, typeVal int, data unsafe.Pointer) bool {
	return (bool)(C.QMetaType_save2(stream.cPointer(), (C.int)(typeVal), data))
}

func QMetaType_Load2(stream *QDataStream, typeVal int, data unsafe.Pointer) bool {
	return (bool)(C.QMetaType_load2(stream.cPointer(), (C.int)(typeVal), data))
}

func QMetaType_FromName(name QByteArrayView) *QMetaType {
	_goptr := newQMetaType(C.QMetaType_fromName(name.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMetaType) DebugStream(dbg *QDebug, rhs unsafe.Pointer) bool {
	return (bool)(C.QMetaType_debugStream(this.h, dbg.cPointer(), rhs))
}

func (this *QMetaType) HasRegisteredDebugStreamOperator() bool {
	return (bool)(C.QMetaType_hasRegisteredDebugStreamOperator(this.h))
}

func QMetaType_DebugStream2(dbg *QDebug, rhs unsafe.Pointer, typeId int) bool {
	return (bool)(C.QMetaType_debugStream2(dbg.cPointer(), rhs, (C.int)(typeId)))
}

func QMetaType_HasRegisteredDebugStreamOperatorWithTypeId(typeId int) bool {
	return (bool)(C.QMetaType_hasRegisteredDebugStreamOperatorWithTypeId((C.int)(typeId)))
}

func QMetaType_Convert(fromType QMetaType, from unsafe.Pointer, toType QMetaType, to unsafe.Pointer) bool {
	return (bool)(C.QMetaType_convert(fromType.cPointer(), from, toType.cPointer(), to))
}

func QMetaType_CanConvert(fromType QMetaType, toType QMetaType) bool {
	return (bool)(C.QMetaType_canConvert(fromType.cPointer(), toType.cPointer()))
}

func QMetaType_View(fromType QMetaType, from unsafe.Pointer, toType QMetaType, to unsafe.Pointer) bool {
	return (bool)(C.QMetaType_view(fromType.cPointer(), from, toType.cPointer(), to))
}

func QMetaType_CanView(fromType QMetaType, toType QMetaType) bool {
	return (bool)(C.QMetaType_canView(fromType.cPointer(), toType.cPointer()))
}

func QMetaType_Convert2(from unsafe.Pointer, fromTypeId int, to unsafe.Pointer, toTypeId int) bool {
	return (bool)(C.QMetaType_convert2(from, (C.int)(fromTypeId), to, (C.int)(toTypeId)))
}

func QMetaType_Compare2(lhs unsafe.Pointer, rhs unsafe.Pointer, typeId int, result *int) bool {
	return (bool)(C.QMetaType_compare2(lhs, rhs, (C.int)(typeId), (*C.int)(unsafe.Pointer(result))))
}

func QMetaType_Equals2(lhs unsafe.Pointer, rhs unsafe.Pointer, typeId int, result *int) bool {
	return (bool)(C.QMetaType_equals2(lhs, rhs, (C.int)(typeId), (*C.int)(unsafe.Pointer(result))))
}

func QMetaType_HasRegisteredConverterFunction(fromType QMetaType, toType QMetaType) bool {
	return (bool)(C.QMetaType_hasRegisteredConverterFunction(fromType.cPointer(), toType.cPointer()))
}

func QMetaType_HasRegisteredMutableViewFunction(fromType QMetaType, toType QMetaType) bool {
	return (bool)(C.QMetaType_hasRegisteredMutableViewFunction(fromType.cPointer(), toType.cPointer()))
}

func QMetaType_UnregisterConverterFunction(from QMetaType, to QMetaType) {
	C.QMetaType_unregisterConverterFunction(from.cPointer(), to.cPointer())
}

func QMetaType_UnregisterMutableViewFunction(from QMetaType, to QMetaType) {
	C.QMetaType_unregisterMutableViewFunction(from.cPointer(), to.cPointer())
}

func QMetaType_UnregisterMetaType(typeVal QMetaType) {
	C.QMetaType_unregisterMetaType(typeVal.cPointer())
}

func QMetaType_Create22(typeVal int, copyVal unsafe.Pointer) unsafe.Pointer {
	return (unsafe.Pointer)(C.QMetaType_create22((C.int)(typeVal), copyVal))
}

func (this *QMetaType) Id1(param1 int) int {
	return (int)(C.QMetaType_id1(this.h, (C.int)(param1)))
}

func (this *QMetaType) Create1(copyVal unsafe.Pointer) unsafe.Pointer {
	return (unsafe.Pointer)(C.QMetaType_create1(this.h, copyVal))
}

func (this *QMetaType) Construct2(where unsafe.Pointer, copyVal unsafe.Pointer) unsafe.Pointer {
	return (unsafe.Pointer)(C.QMetaType_construct2(this.h, where, copyVal))
}

// Delete this object from C++ memory.
func (this *QMetaType) Delete() {
	C.QMetaType_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMetaType) GoGC() {
	runtime.SetFinalizer(this, func(this *QMetaType) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
