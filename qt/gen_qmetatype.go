package qt

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

type QtMetaTypePrivate__IteratorCapability int

const (
	QtMetaTypePrivate__ForwardCapability       QtMetaTypePrivate__IteratorCapability = 1
	QtMetaTypePrivate__BiDirectionalCapability QtMetaTypePrivate__IteratorCapability = 2
	QtMetaTypePrivate__RandomAccessCapability  QtMetaTypePrivate__IteratorCapability = 4
)

type QtMetaTypePrivate__ContainerCapability int

const (
	QtMetaTypePrivate__ContainerIsAppendable QtMetaTypePrivate__ContainerCapability = 1
)

type QMetaType__Type int

const (
	QMetaType__Void                  QMetaType__Type = 43
	QMetaType__Bool                  QMetaType__Type = 1
	QMetaType__Int                   QMetaType__Type = 2
	QMetaType__UInt                  QMetaType__Type = 3
	QMetaType__LongLong              QMetaType__Type = 4
	QMetaType__ULongLong             QMetaType__Type = 5
	QMetaType__Double                QMetaType__Type = 6
	QMetaType__Long                  QMetaType__Type = 32
	QMetaType__Short                 QMetaType__Type = 33
	QMetaType__Char                  QMetaType__Type = 34
	QMetaType__ULong                 QMetaType__Type = 35
	QMetaType__UShort                QMetaType__Type = 36
	QMetaType__UChar                 QMetaType__Type = 37
	QMetaType__Float                 QMetaType__Type = 38
	QMetaType__SChar                 QMetaType__Type = 40
	QMetaType__Nullptr               QMetaType__Type = 51
	QMetaType__QCborSimpleType       QMetaType__Type = 52
	QMetaType__VoidStar              QMetaType__Type = 31
	QMetaType__QChar                 QMetaType__Type = 7
	QMetaType__QString               QMetaType__Type = 10
	QMetaType__QStringList           QMetaType__Type = 11
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
	QMetaType__QRegExp               QMetaType__Type = 27
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
	QMetaType__QByteArrayList        QMetaType__Type = 49
	QMetaType__QFont                 QMetaType__Type = 64
	QMetaType__QPixmap               QMetaType__Type = 65
	QMetaType__QBrush                QMetaType__Type = 66
	QMetaType__QColor                QMetaType__Type = 67
	QMetaType__QPalette              QMetaType__Type = 68
	QMetaType__QIcon                 QMetaType__Type = 69
	QMetaType__QImage                QMetaType__Type = 70
	QMetaType__QPolygon              QMetaType__Type = 71
	QMetaType__QRegion               QMetaType__Type = 72
	QMetaType__QBitmap               QMetaType__Type = 73
	QMetaType__QCursor               QMetaType__Type = 74
	QMetaType__QKeySequence          QMetaType__Type = 75
	QMetaType__QPen                  QMetaType__Type = 76
	QMetaType__QTextLength           QMetaType__Type = 77
	QMetaType__QTextFormat           QMetaType__Type = 78
	QMetaType__QMatrix               QMetaType__Type = 79
	QMetaType__QTransform            QMetaType__Type = 80
	QMetaType__QMatrix4x4            QMetaType__Type = 81
	QMetaType__QVector2D             QMetaType__Type = 82
	QMetaType__QVector3D             QMetaType__Type = 83
	QMetaType__QVector4D             QMetaType__Type = 84
	QMetaType__QQuaternion           QMetaType__Type = 85
	QMetaType__QPolygonF             QMetaType__Type = 86
	QMetaType__QColorSpace           QMetaType__Type = 87
	QMetaType__QSizePolicy           QMetaType__Type = 121
	QMetaType__FirstCoreType         QMetaType__Type = 1
	QMetaType__LastCoreType          QMetaType__Type = 55
	QMetaType__FirstGuiType          QMetaType__Type = 64
	QMetaType__LastGuiType           QMetaType__Type = 87
	QMetaType__FirstWidgetsType      QMetaType__Type = 121
	QMetaType__LastWidgetsType       QMetaType__Type = 121
	QMetaType__HighestInternalId     QMetaType__Type = 121
	QMetaType__QReal                 QMetaType__Type = 6
	QMetaType__UnknownType           QMetaType__Type = 0
	QMetaType__User                  QMetaType__Type = 1024
)

type QMetaType__TypeFlag int

const (
	QMetaType__NeedsConstruction        QMetaType__TypeFlag = 1
	QMetaType__NeedsDestruction         QMetaType__TypeFlag = 2
	QMetaType__MovableType              QMetaType__TypeFlag = 4
	QMetaType__PointerToQObject         QMetaType__TypeFlag = 8
	QMetaType__IsEnumeration            QMetaType__TypeFlag = 16
	QMetaType__SharedPointerToQObject   QMetaType__TypeFlag = 32
	QMetaType__WeakPointerToQObject     QMetaType__TypeFlag = 64
	QMetaType__TrackingPointerToQObject QMetaType__TypeFlag = 128
	QMetaType__WasDeclaredAsMetaType    QMetaType__TypeFlag = 256
	QMetaType__IsGadget                 QMetaType__TypeFlag = 512
	QMetaType__PointerToGadget          QMetaType__TypeFlag = 1024
)

type QtMetaTypePrivate__QSequentialIterableImpl__Position int

const (
	QtMetaTypePrivate__QSequentialIterableImpl__ToBegin QtMetaTypePrivate__QSequentialIterableImpl__Position = 0
	QtMetaTypePrivate__QSequentialIterableImpl__ToEnd   QtMetaTypePrivate__QSequentialIterableImpl__Position = 1
)

type QMetaType struct {
	h          *C.QMetaType
	isSubclass bool
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
func NewQMetaType() *QMetaType {

	ret := newQMetaType(C.QMetaType_new())
	ret.isSubclass = true
	return ret
}

// NewQMetaType2 constructs a new QMetaType object.
func NewQMetaType2(typeVal int) *QMetaType {

	ret := newQMetaType(C.QMetaType_new2((C.int)(typeVal)))
	ret.isSubclass = true
	return ret
}

func QMetaType_UnregisterType(typeVal int) bool {
	return (bool)(C.QMetaType_UnregisterType((C.int)(typeVal)))
}

func QMetaType_RegisterTypedef(typeName string, aliasId int) int {
	typeName_Cstring := C.CString(typeName)
	defer C.free(unsafe.Pointer(typeName_Cstring))
	return (int)(C.QMetaType_RegisterTypedef(typeName_Cstring, (C.int)(aliasId)))
}

func QMetaType_RegisterNormalizedTypedef(normalizedTypeName []byte, aliasId int) int {
	normalizedTypeName_alias := C.struct_miqt_string{}
	normalizedTypeName_alias.data = (*C.char)(unsafe.Pointer(&normalizedTypeName[0]))
	normalizedTypeName_alias.len = C.size_t(len(normalizedTypeName))
	return (int)(C.QMetaType_RegisterNormalizedTypedef(normalizedTypeName_alias, (C.int)(aliasId)))
}

func QMetaType_Type(typeName string) int {
	typeName_Cstring := C.CString(typeName)
	defer C.free(unsafe.Pointer(typeName_Cstring))
	return (int)(C.QMetaType_Type(typeName_Cstring))
}

func QMetaType_TypeWithTypeName(typeName []byte) int {
	typeName_alias := C.struct_miqt_string{}
	typeName_alias.data = (*C.char)(unsafe.Pointer(&typeName[0]))
	typeName_alias.len = C.size_t(len(typeName))
	return (int)(C.QMetaType_TypeWithTypeName(typeName_alias))
}

func QMetaType_TypeName(typeVal int) string {
	_ret := C.QMetaType_TypeName((C.int)(typeVal))
	return C.GoString(_ret)
}

func QMetaType_SizeOf(typeVal int) int {
	return (int)(C.QMetaType_SizeOf((C.int)(typeVal)))
}

func QMetaType_TypeFlags(typeVal int) QMetaType__TypeFlag {
	return (QMetaType__TypeFlag)(C.QMetaType_TypeFlags((C.int)(typeVal)))
}

func QMetaType_MetaObjectForType(typeVal int) *QMetaObject {
	return newQMetaObject(C.QMetaType_MetaObjectForType((C.int)(typeVal)))
}

func QMetaType_IsRegistered(typeVal int) bool {
	return (bool)(C.QMetaType_IsRegistered((C.int)(typeVal)))
}

func QMetaType_Create(typeVal int) unsafe.Pointer {
	return (unsafe.Pointer)(C.QMetaType_Create((C.int)(typeVal)))
}

func QMetaType_Destroy(typeVal int, data unsafe.Pointer) {
	C.QMetaType_Destroy((C.int)(typeVal), data)
}

func QMetaType_Construct(typeVal int, where unsafe.Pointer, copyVal unsafe.Pointer) unsafe.Pointer {
	return (unsafe.Pointer)(C.QMetaType_Construct((C.int)(typeVal), where, copyVal))
}

func QMetaType_Destruct(typeVal int, where unsafe.Pointer) {
	C.QMetaType_Destruct((C.int)(typeVal), where)
}

func QMetaType_Save(stream *QDataStream, typeVal int, data unsafe.Pointer) bool {
	return (bool)(C.QMetaType_Save(stream.cPointer(), (C.int)(typeVal), data))
}

func QMetaType_Load(stream *QDataStream, typeVal int, data unsafe.Pointer) bool {
	return (bool)(C.QMetaType_Load(stream.cPointer(), (C.int)(typeVal), data))
}

func (this *QMetaType) IsValid() bool {
	return (bool)(C.QMetaType_IsValid(this.h))
}

func (this *QMetaType) IsRegistered2() bool {
	return (bool)(C.QMetaType_IsRegistered2(this.h))
}

func (this *QMetaType) Id() int {
	return (int)(C.QMetaType_Id(this.h))
}

func (this *QMetaType) SizeOf2() int {
	return (int)(C.QMetaType_SizeOf2(this.h))
}

func (this *QMetaType) Flags() QMetaType__TypeFlag {
	return (QMetaType__TypeFlag)(C.QMetaType_Flags(this.h))
}

func (this *QMetaType) MetaObject() *QMetaObject {
	return newQMetaObject(C.QMetaType_MetaObject(this.h))
}

func (this *QMetaType) Name() []byte {
	var _bytearray C.struct_miqt_string = C.QMetaType_Name(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QMetaType) Create2() unsafe.Pointer {
	return (unsafe.Pointer)(C.QMetaType_Create2(this.h))
}

func (this *QMetaType) DestroyWithData(data unsafe.Pointer) {
	C.QMetaType_DestroyWithData(this.h, data)
}

func (this *QMetaType) ConstructWithWhere(where unsafe.Pointer) unsafe.Pointer {
	return (unsafe.Pointer)(C.QMetaType_ConstructWithWhere(this.h, where))
}

func (this *QMetaType) DestructWithData(data unsafe.Pointer) {
	C.QMetaType_DestructWithData(this.h, data)
}

func QMetaType_HasRegisteredComparators(typeId int) bool {
	return (bool)(C.QMetaType_HasRegisteredComparators((C.int)(typeId)))
}

func QMetaType_HasRegisteredDebugStreamOperator(typeId int) bool {
	return (bool)(C.QMetaType_HasRegisteredDebugStreamOperator((C.int)(typeId)))
}

func QMetaType_Convert(from unsafe.Pointer, fromTypeId int, to unsafe.Pointer, toTypeId int) bool {
	return (bool)(C.QMetaType_Convert(from, (C.int)(fromTypeId), to, (C.int)(toTypeId)))
}

func QMetaType_Compare(lhs unsafe.Pointer, rhs unsafe.Pointer, typeId int, result *int) bool {
	return (bool)(C.QMetaType_Compare(lhs, rhs, (C.int)(typeId), (*C.int)(unsafe.Pointer(result))))
}

func QMetaType_Equals(lhs unsafe.Pointer, rhs unsafe.Pointer, typeId int, result *int) bool {
	return (bool)(C.QMetaType_Equals(lhs, rhs, (C.int)(typeId), (*C.int)(unsafe.Pointer(result))))
}

func QMetaType_DebugStream(dbg *QDebug, rhs unsafe.Pointer, typeId int) bool {
	return (bool)(C.QMetaType_DebugStream(dbg.cPointer(), rhs, (C.int)(typeId)))
}

func QMetaType_HasRegisteredConverterFunction(fromTypeId int, toTypeId int) bool {
	return (bool)(C.QMetaType_HasRegisteredConverterFunction((C.int)(fromTypeId), (C.int)(toTypeId)))
}

func QMetaType_Create22(typeVal int, copyVal unsafe.Pointer) unsafe.Pointer {
	return (unsafe.Pointer)(C.QMetaType_Create22((C.int)(typeVal), copyVal))
}

func (this *QMetaType) Create1(copyVal unsafe.Pointer) unsafe.Pointer {
	return (unsafe.Pointer)(C.QMetaType_Create1(this.h, copyVal))
}

func (this *QMetaType) Construct2(where unsafe.Pointer, copyVal unsafe.Pointer) unsafe.Pointer {
	return (unsafe.Pointer)(C.QMetaType_Construct2(this.h, where, copyVal))
}

// Delete this object from C++ memory.
func (this *QMetaType) Delete() {
	C.QMetaType_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMetaType) GoGC() {
	runtime.SetFinalizer(this, func(this *QMetaType) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
