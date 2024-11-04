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

type QtPrivate__AbstractDebugStreamFunction struct {
	h *C.QtPrivate__AbstractDebugStreamFunction
}

func (this *QtPrivate__AbstractDebugStreamFunction) cPointer() *C.QtPrivate__AbstractDebugStreamFunction {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QtPrivate__AbstractDebugStreamFunction) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQtPrivate__AbstractDebugStreamFunction(h *C.QtPrivate__AbstractDebugStreamFunction) *QtPrivate__AbstractDebugStreamFunction {
	if h == nil {
		return nil
	}
	return &QtPrivate__AbstractDebugStreamFunction{h: h}
}

func UnsafeNewQtPrivate__AbstractDebugStreamFunction(h unsafe.Pointer) *QtPrivate__AbstractDebugStreamFunction {
	return newQtPrivate__AbstractDebugStreamFunction((*C.QtPrivate__AbstractDebugStreamFunction)(h))
}

// NewQtPrivate__AbstractDebugStreamFunction constructs a new QtPrivate::AbstractDebugStreamFunction object.
func NewQtPrivate__AbstractDebugStreamFunction() *QtPrivate__AbstractDebugStreamFunction {
	ret := C.QtPrivate__AbstractDebugStreamFunction_new()
	return newQtPrivate__AbstractDebugStreamFunction(ret)
}

// Delete this object from C++ memory.
func (this *QtPrivate__AbstractDebugStreamFunction) Delete() {
	C.QtPrivate__AbstractDebugStreamFunction_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QtPrivate__AbstractDebugStreamFunction) GoGC() {
	runtime.SetFinalizer(this, func(this *QtPrivate__AbstractDebugStreamFunction) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QtPrivate__AbstractComparatorFunction struct {
	h *C.QtPrivate__AbstractComparatorFunction
}

func (this *QtPrivate__AbstractComparatorFunction) cPointer() *C.QtPrivate__AbstractComparatorFunction {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QtPrivate__AbstractComparatorFunction) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQtPrivate__AbstractComparatorFunction(h *C.QtPrivate__AbstractComparatorFunction) *QtPrivate__AbstractComparatorFunction {
	if h == nil {
		return nil
	}
	return &QtPrivate__AbstractComparatorFunction{h: h}
}

func UnsafeNewQtPrivate__AbstractComparatorFunction(h unsafe.Pointer) *QtPrivate__AbstractComparatorFunction {
	return newQtPrivate__AbstractComparatorFunction((*C.QtPrivate__AbstractComparatorFunction)(h))
}

// NewQtPrivate__AbstractComparatorFunction constructs a new QtPrivate::AbstractComparatorFunction object.
func NewQtPrivate__AbstractComparatorFunction() *QtPrivate__AbstractComparatorFunction {
	ret := C.QtPrivate__AbstractComparatorFunction_new()
	return newQtPrivate__AbstractComparatorFunction(ret)
}

// Delete this object from C++ memory.
func (this *QtPrivate__AbstractComparatorFunction) Delete() {
	C.QtPrivate__AbstractComparatorFunction_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QtPrivate__AbstractComparatorFunction) GoGC() {
	runtime.SetFinalizer(this, func(this *QtPrivate__AbstractComparatorFunction) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QtPrivate__AbstractConverterFunction struct {
	h *C.QtPrivate__AbstractConverterFunction
}

func (this *QtPrivate__AbstractConverterFunction) cPointer() *C.QtPrivate__AbstractConverterFunction {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QtPrivate__AbstractConverterFunction) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQtPrivate__AbstractConverterFunction(h *C.QtPrivate__AbstractConverterFunction) *QtPrivate__AbstractConverterFunction {
	if h == nil {
		return nil
	}
	return &QtPrivate__AbstractConverterFunction{h: h}
}

func UnsafeNewQtPrivate__AbstractConverterFunction(h unsafe.Pointer) *QtPrivate__AbstractConverterFunction {
	return newQtPrivate__AbstractConverterFunction((*C.QtPrivate__AbstractConverterFunction)(h))
}

// NewQtPrivate__AbstractConverterFunction constructs a new QtPrivate::AbstractConverterFunction object.
func NewQtPrivate__AbstractConverterFunction() *QtPrivate__AbstractConverterFunction {
	ret := C.QtPrivate__AbstractConverterFunction_new()
	return newQtPrivate__AbstractConverterFunction(ret)
}

// Delete this object from C++ memory.
func (this *QtPrivate__AbstractConverterFunction) Delete() {
	C.QtPrivate__AbstractConverterFunction_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QtPrivate__AbstractConverterFunction) GoGC() {
	runtime.SetFinalizer(this, func(this *QtPrivate__AbstractConverterFunction) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

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

func newQMetaType(h *C.QMetaType) *QMetaType {
	if h == nil {
		return nil
	}
	return &QMetaType{h: h}
}

func UnsafeNewQMetaType(h unsafe.Pointer) *QMetaType {
	return newQMetaType((*C.QMetaType)(h))
}

// NewQMetaType constructs a new QMetaType object.
func NewQMetaType() *QMetaType {
	ret := C.QMetaType_new()
	return newQMetaType(ret)
}

// NewQMetaType2 constructs a new QMetaType object.
func NewQMetaType2(typeVal int) *QMetaType {
	ret := C.QMetaType_new2((C.int)(typeVal))
	return newQMetaType(ret)
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
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QMetaType_MetaObjectForType((C.int)(typeVal))))
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
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QMetaType_MetaObject(this.h)))
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

type QtMetaTypePrivate__VariantData struct {
	h *C.QtMetaTypePrivate__VariantData
}

func (this *QtMetaTypePrivate__VariantData) cPointer() *C.QtMetaTypePrivate__VariantData {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QtMetaTypePrivate__VariantData) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQtMetaTypePrivate__VariantData(h *C.QtMetaTypePrivate__VariantData) *QtMetaTypePrivate__VariantData {
	if h == nil {
		return nil
	}
	return &QtMetaTypePrivate__VariantData{h: h}
}

func UnsafeNewQtMetaTypePrivate__VariantData(h unsafe.Pointer) *QtMetaTypePrivate__VariantData {
	return newQtMetaTypePrivate__VariantData((*C.QtMetaTypePrivate__VariantData)(h))
}

// NewQtMetaTypePrivate__VariantData constructs a new QtMetaTypePrivate::VariantData object.
func NewQtMetaTypePrivate__VariantData(metaTypeId_ int, data_ unsafe.Pointer, flags_ uint) *QtMetaTypePrivate__VariantData {
	ret := C.QtMetaTypePrivate__VariantData_new((C.int)(metaTypeId_), data_, (C.uint)(flags_))
	return newQtMetaTypePrivate__VariantData(ret)
}

// NewQtMetaTypePrivate__VariantData2 constructs a new QtMetaTypePrivate::VariantData object.
func NewQtMetaTypePrivate__VariantData2(other *QtMetaTypePrivate__VariantData) *QtMetaTypePrivate__VariantData {
	ret := C.QtMetaTypePrivate__VariantData_new2(other.cPointer())
	return newQtMetaTypePrivate__VariantData(ret)
}

// Delete this object from C++ memory.
func (this *QtMetaTypePrivate__VariantData) Delete() {
	C.QtMetaTypePrivate__VariantData_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QtMetaTypePrivate__VariantData) GoGC() {
	runtime.SetFinalizer(this, func(this *QtMetaTypePrivate__VariantData) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QtMetaTypePrivate__VectorBoolElements struct {
	h *C.QtMetaTypePrivate__VectorBoolElements
}

func (this *QtMetaTypePrivate__VectorBoolElements) cPointer() *C.QtMetaTypePrivate__VectorBoolElements {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QtMetaTypePrivate__VectorBoolElements) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQtMetaTypePrivate__VectorBoolElements(h *C.QtMetaTypePrivate__VectorBoolElements) *QtMetaTypePrivate__VectorBoolElements {
	if h == nil {
		return nil
	}
	return &QtMetaTypePrivate__VectorBoolElements{h: h}
}

func UnsafeNewQtMetaTypePrivate__VectorBoolElements(h unsafe.Pointer) *QtMetaTypePrivate__VectorBoolElements {
	return newQtMetaTypePrivate__VectorBoolElements((*C.QtMetaTypePrivate__VectorBoolElements)(h))
}

// Delete this object from C++ memory.
func (this *QtMetaTypePrivate__VectorBoolElements) Delete() {
	C.QtMetaTypePrivate__VectorBoolElements_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QtMetaTypePrivate__VectorBoolElements) GoGC() {
	runtime.SetFinalizer(this, func(this *QtMetaTypePrivate__VectorBoolElements) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QtMetaTypePrivate__QSequentialIterableImpl struct {
	h *C.QtMetaTypePrivate__QSequentialIterableImpl
}

func (this *QtMetaTypePrivate__QSequentialIterableImpl) cPointer() *C.QtMetaTypePrivate__QSequentialIterableImpl {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QtMetaTypePrivate__QSequentialIterableImpl) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQtMetaTypePrivate__QSequentialIterableImpl(h *C.QtMetaTypePrivate__QSequentialIterableImpl) *QtMetaTypePrivate__QSequentialIterableImpl {
	if h == nil {
		return nil
	}
	return &QtMetaTypePrivate__QSequentialIterableImpl{h: h}
}

func UnsafeNewQtMetaTypePrivate__QSequentialIterableImpl(h unsafe.Pointer) *QtMetaTypePrivate__QSequentialIterableImpl {
	return newQtMetaTypePrivate__QSequentialIterableImpl((*C.QtMetaTypePrivate__QSequentialIterableImpl)(h))
}

// NewQtMetaTypePrivate__QSequentialIterableImpl constructs a new QtMetaTypePrivate::QSequentialIterableImpl object.
func NewQtMetaTypePrivate__QSequentialIterableImpl() *QtMetaTypePrivate__QSequentialIterableImpl {
	ret := C.QtMetaTypePrivate__QSequentialIterableImpl_new()
	return newQtMetaTypePrivate__QSequentialIterableImpl(ret)
}

// NewQtMetaTypePrivate__QSequentialIterableImpl2 constructs a new QtMetaTypePrivate::QSequentialIterableImpl object.
func NewQtMetaTypePrivate__QSequentialIterableImpl2(param1 *QtMetaTypePrivate__QSequentialIterableImpl) *QtMetaTypePrivate__QSequentialIterableImpl {
	ret := C.QtMetaTypePrivate__QSequentialIterableImpl_new2(param1.cPointer())
	return newQtMetaTypePrivate__QSequentialIterableImpl(ret)
}

func (this *QtMetaTypePrivate__QSequentialIterableImpl) IteratorCapabilities() QtMetaTypePrivate__IteratorCapability {
	return (QtMetaTypePrivate__IteratorCapability)(C.QtMetaTypePrivate__QSequentialIterableImpl_IteratorCapabilities(this.h))
}

func (this *QtMetaTypePrivate__QSequentialIterableImpl) Revision() uint {
	return (uint)(C.QtMetaTypePrivate__QSequentialIterableImpl_Revision(this.h))
}

func (this *QtMetaTypePrivate__QSequentialIterableImpl) ContainerCapabilities() uint {
	return (uint)(C.QtMetaTypePrivate__QSequentialIterableImpl_ContainerCapabilities(this.h))
}

func (this *QtMetaTypePrivate__QSequentialIterableImpl) MoveToBegin() {
	C.QtMetaTypePrivate__QSequentialIterableImpl_MoveToBegin(this.h)
}

func (this *QtMetaTypePrivate__QSequentialIterableImpl) MoveToEnd() {
	C.QtMetaTypePrivate__QSequentialIterableImpl_MoveToEnd(this.h)
}

func (this *QtMetaTypePrivate__QSequentialIterableImpl) Equal(other *QtMetaTypePrivate__QSequentialIterableImpl) bool {
	return (bool)(C.QtMetaTypePrivate__QSequentialIterableImpl_Equal(this.h, other.cPointer()))
}

func (this *QtMetaTypePrivate__QSequentialIterableImpl) Advance(i int) *QtMetaTypePrivate__QSequentialIterableImpl {
	return UnsafeNewQtMetaTypePrivate__QSequentialIterableImpl(unsafe.Pointer(C.QtMetaTypePrivate__QSequentialIterableImpl_Advance(this.h, (C.int)(i))))
}

func (this *QtMetaTypePrivate__QSequentialIterableImpl) Append(newElement unsafe.Pointer) {
	C.QtMetaTypePrivate__QSequentialIterableImpl_Append(this.h, newElement)
}

func (this *QtMetaTypePrivate__QSequentialIterableImpl) GetCurrent() *QtMetaTypePrivate__VariantData {
	_ret := C.QtMetaTypePrivate__QSequentialIterableImpl_GetCurrent(this.h)
	_goptr := newQtMetaTypePrivate__VariantData(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QtMetaTypePrivate__QSequentialIterableImpl) At(idx int) *QtMetaTypePrivate__VariantData {
	_ret := C.QtMetaTypePrivate__QSequentialIterableImpl_At(this.h, (C.int)(idx))
	_goptr := newQtMetaTypePrivate__VariantData(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QtMetaTypePrivate__QSequentialIterableImpl) Size() int {
	return (int)(C.QtMetaTypePrivate__QSequentialIterableImpl_Size(this.h))
}

func (this *QtMetaTypePrivate__QSequentialIterableImpl) DestroyIter() {
	C.QtMetaTypePrivate__QSequentialIterableImpl_DestroyIter(this.h)
}

func (this *QtMetaTypePrivate__QSequentialIterableImpl) Copy(other *QtMetaTypePrivate__QSequentialIterableImpl) {
	C.QtMetaTypePrivate__QSequentialIterableImpl_Copy(this.h, other.cPointer())
}

func (this *QtMetaTypePrivate__QSequentialIterableImpl) OperatorAssign(param1 *QtMetaTypePrivate__QSequentialIterableImpl) {
	C.QtMetaTypePrivate__QSequentialIterableImpl_OperatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QtMetaTypePrivate__QSequentialIterableImpl) Delete() {
	C.QtMetaTypePrivate__QSequentialIterableImpl_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QtMetaTypePrivate__QSequentialIterableImpl) GoGC() {
	runtime.SetFinalizer(this, func(this *QtMetaTypePrivate__QSequentialIterableImpl) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QtMetaTypePrivate__QAssociativeIterableImpl struct {
	h *C.QtMetaTypePrivate__QAssociativeIterableImpl
}

func (this *QtMetaTypePrivate__QAssociativeIterableImpl) cPointer() *C.QtMetaTypePrivate__QAssociativeIterableImpl {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QtMetaTypePrivate__QAssociativeIterableImpl) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQtMetaTypePrivate__QAssociativeIterableImpl(h *C.QtMetaTypePrivate__QAssociativeIterableImpl) *QtMetaTypePrivate__QAssociativeIterableImpl {
	if h == nil {
		return nil
	}
	return &QtMetaTypePrivate__QAssociativeIterableImpl{h: h}
}

func UnsafeNewQtMetaTypePrivate__QAssociativeIterableImpl(h unsafe.Pointer) *QtMetaTypePrivate__QAssociativeIterableImpl {
	return newQtMetaTypePrivate__QAssociativeIterableImpl((*C.QtMetaTypePrivate__QAssociativeIterableImpl)(h))
}

// NewQtMetaTypePrivate__QAssociativeIterableImpl constructs a new QtMetaTypePrivate::QAssociativeIterableImpl object.
func NewQtMetaTypePrivate__QAssociativeIterableImpl() *QtMetaTypePrivate__QAssociativeIterableImpl {
	ret := C.QtMetaTypePrivate__QAssociativeIterableImpl_new()
	return newQtMetaTypePrivate__QAssociativeIterableImpl(ret)
}

// NewQtMetaTypePrivate__QAssociativeIterableImpl2 constructs a new QtMetaTypePrivate::QAssociativeIterableImpl object.
func NewQtMetaTypePrivate__QAssociativeIterableImpl2(param1 *QtMetaTypePrivate__QAssociativeIterableImpl) *QtMetaTypePrivate__QAssociativeIterableImpl {
	ret := C.QtMetaTypePrivate__QAssociativeIterableImpl_new2(param1.cPointer())
	return newQtMetaTypePrivate__QAssociativeIterableImpl(ret)
}

func (this *QtMetaTypePrivate__QAssociativeIterableImpl) Begin() {
	C.QtMetaTypePrivate__QAssociativeIterableImpl_Begin(this.h)
}

func (this *QtMetaTypePrivate__QAssociativeIterableImpl) End() {
	C.QtMetaTypePrivate__QAssociativeIterableImpl_End(this.h)
}

func (this *QtMetaTypePrivate__QAssociativeIterableImpl) Equal(other *QtMetaTypePrivate__QAssociativeIterableImpl) bool {
	return (bool)(C.QtMetaTypePrivate__QAssociativeIterableImpl_Equal(this.h, other.cPointer()))
}

func (this *QtMetaTypePrivate__QAssociativeIterableImpl) Advance(i int) *QtMetaTypePrivate__QAssociativeIterableImpl {
	return UnsafeNewQtMetaTypePrivate__QAssociativeIterableImpl(unsafe.Pointer(C.QtMetaTypePrivate__QAssociativeIterableImpl_Advance(this.h, (C.int)(i))))
}

func (this *QtMetaTypePrivate__QAssociativeIterableImpl) DestroyIter() {
	C.QtMetaTypePrivate__QAssociativeIterableImpl_DestroyIter(this.h)
}

func (this *QtMetaTypePrivate__QAssociativeIterableImpl) GetCurrentKey() *QtMetaTypePrivate__VariantData {
	_ret := C.QtMetaTypePrivate__QAssociativeIterableImpl_GetCurrentKey(this.h)
	_goptr := newQtMetaTypePrivate__VariantData(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QtMetaTypePrivate__QAssociativeIterableImpl) GetCurrentValue() *QtMetaTypePrivate__VariantData {
	_ret := C.QtMetaTypePrivate__QAssociativeIterableImpl_GetCurrentValue(this.h)
	_goptr := newQtMetaTypePrivate__VariantData(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QtMetaTypePrivate__QAssociativeIterableImpl) Find(key *QtMetaTypePrivate__VariantData) {
	C.QtMetaTypePrivate__QAssociativeIterableImpl_Find(this.h, key.cPointer())
}

func (this *QtMetaTypePrivate__QAssociativeIterableImpl) Size() int {
	return (int)(C.QtMetaTypePrivate__QAssociativeIterableImpl_Size(this.h))
}

func (this *QtMetaTypePrivate__QAssociativeIterableImpl) Copy(other *QtMetaTypePrivate__QAssociativeIterableImpl) {
	C.QtMetaTypePrivate__QAssociativeIterableImpl_Copy(this.h, other.cPointer())
}

func (this *QtMetaTypePrivate__QAssociativeIterableImpl) OperatorAssign(param1 *QtMetaTypePrivate__QAssociativeIterableImpl) {
	C.QtMetaTypePrivate__QAssociativeIterableImpl_OperatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QtMetaTypePrivate__QAssociativeIterableImpl) Delete() {
	C.QtMetaTypePrivate__QAssociativeIterableImpl_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QtMetaTypePrivate__QAssociativeIterableImpl) GoGC() {
	runtime.SetFinalizer(this, func(this *QtMetaTypePrivate__QAssociativeIterableImpl) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QtMetaTypePrivate__QPairVariantInterfaceImpl struct {
	h *C.QtMetaTypePrivate__QPairVariantInterfaceImpl
}

func (this *QtMetaTypePrivate__QPairVariantInterfaceImpl) cPointer() *C.QtMetaTypePrivate__QPairVariantInterfaceImpl {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QtMetaTypePrivate__QPairVariantInterfaceImpl) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQtMetaTypePrivate__QPairVariantInterfaceImpl(h *C.QtMetaTypePrivate__QPairVariantInterfaceImpl) *QtMetaTypePrivate__QPairVariantInterfaceImpl {
	if h == nil {
		return nil
	}
	return &QtMetaTypePrivate__QPairVariantInterfaceImpl{h: h}
}

func UnsafeNewQtMetaTypePrivate__QPairVariantInterfaceImpl(h unsafe.Pointer) *QtMetaTypePrivate__QPairVariantInterfaceImpl {
	return newQtMetaTypePrivate__QPairVariantInterfaceImpl((*C.QtMetaTypePrivate__QPairVariantInterfaceImpl)(h))
}

// NewQtMetaTypePrivate__QPairVariantInterfaceImpl constructs a new QtMetaTypePrivate::QPairVariantInterfaceImpl object.
func NewQtMetaTypePrivate__QPairVariantInterfaceImpl() *QtMetaTypePrivate__QPairVariantInterfaceImpl {
	ret := C.QtMetaTypePrivate__QPairVariantInterfaceImpl_new()
	return newQtMetaTypePrivate__QPairVariantInterfaceImpl(ret)
}

// NewQtMetaTypePrivate__QPairVariantInterfaceImpl2 constructs a new QtMetaTypePrivate::QPairVariantInterfaceImpl object.
func NewQtMetaTypePrivate__QPairVariantInterfaceImpl2(param1 *QtMetaTypePrivate__QPairVariantInterfaceImpl) *QtMetaTypePrivate__QPairVariantInterfaceImpl {
	ret := C.QtMetaTypePrivate__QPairVariantInterfaceImpl_new2(param1.cPointer())
	return newQtMetaTypePrivate__QPairVariantInterfaceImpl(ret)
}

func (this *QtMetaTypePrivate__QPairVariantInterfaceImpl) First() *QtMetaTypePrivate__VariantData {
	_ret := C.QtMetaTypePrivate__QPairVariantInterfaceImpl_First(this.h)
	_goptr := newQtMetaTypePrivate__VariantData(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QtMetaTypePrivate__QPairVariantInterfaceImpl) Second() *QtMetaTypePrivate__VariantData {
	_ret := C.QtMetaTypePrivate__QPairVariantInterfaceImpl_Second(this.h)
	_goptr := newQtMetaTypePrivate__VariantData(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QtMetaTypePrivate__QPairVariantInterfaceImpl) Delete() {
	C.QtMetaTypePrivate__QPairVariantInterfaceImpl_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QtMetaTypePrivate__QPairVariantInterfaceImpl) GoGC() {
	runtime.SetFinalizer(this, func(this *QtMetaTypePrivate__QPairVariantInterfaceImpl) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
