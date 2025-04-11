package cbor

/*

#include "gen_qcborvalue.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"unsafe"
)

type QCborValue__EncodingOption int

const (
	QCborValue__SortKeysInMaps   QCborValue__EncodingOption = 1
	QCborValue__UseFloat         QCborValue__EncodingOption = 2
	QCborValue__UseFloat16       QCborValue__EncodingOption = 6
	QCborValue__UseIntegers      QCborValue__EncodingOption = 8
	QCborValue__NoTransformation QCborValue__EncodingOption = 0
)

type QCborValue__DiagnosticNotationOption int

const (
	QCborValue__Compact        QCborValue__DiagnosticNotationOption = 0
	QCborValue__LineWrapped    QCborValue__DiagnosticNotationOption = 1
	QCborValue__ExtendedFormat QCborValue__DiagnosticNotationOption = 2
)

type QCborValue__Type int

const (
	QCborValue__Integer           QCborValue__Type = 0
	QCborValue__ByteArray         QCborValue__Type = 64
	QCborValue__String            QCborValue__Type = 96
	QCborValue__Array             QCborValue__Type = 128
	QCborValue__Map               QCborValue__Type = 160
	QCborValue__Tag               QCborValue__Type = 192
	QCborValue__SimpleType        QCborValue__Type = 256
	QCborValue__False             QCborValue__Type = 276
	QCborValue__True              QCborValue__Type = 277
	QCborValue__Null              QCborValue__Type = 278
	QCborValue__Undefined         QCborValue__Type = 279
	QCborValue__Double            QCborValue__Type = 514
	QCborValue__DateTime          QCborValue__Type = 65536
	QCborValue__Url               QCborValue__Type = 65568
	QCborValue__RegularExpression QCborValue__Type = 65571
	QCborValue__Uuid              QCborValue__Type = 65573
	QCborValue__Invalid           QCborValue__Type = -1
)

type QCborParserError struct {
	h *C.QCborParserError
}

func (this *QCborParserError) cPointer() *C.QCborParserError {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QCborParserError) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQCborParserError constructs the type using only CGO pointers.
func newQCborParserError(h *C.QCborParserError) *QCborParserError {
	if h == nil {
		return nil
	}

	return &QCborParserError{h: h}
}

// UnsafeNewQCborParserError constructs the type using only unsafe pointers.
func UnsafeNewQCborParserError(h unsafe.Pointer) *QCborParserError {
	return newQCborParserError((*C.QCborParserError)(h))
}

func (this *QCborParserError) ErrorString() string {
	var _ms C.struct_miqt_string = C.QCborParserError_errorString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QCborParserError) Delete() {
	C.QCborParserError_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QCborParserError) GoGC() {
	runtime.SetFinalizer(this, func(this *QCborParserError) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QCborValue struct {
	h *C.QCborValue
}

func (this *QCborValue) cPointer() *C.QCborValue {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QCborValue) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQCborValue constructs the type using only CGO pointers.
func newQCborValue(h *C.QCborValue) *QCborValue {
	if h == nil {
		return nil
	}

	return &QCborValue{h: h}
}

// UnsafeNewQCborValue constructs the type using only unsafe pointers.
func UnsafeNewQCborValue(h unsafe.Pointer) *QCborValue {
	return newQCborValue((*C.QCborValue)(h))
}

// NewQCborValue constructs a new QCborValue object.
func NewQCborValue() *QCborValue {

	return newQCborValue(C.QCborValue_new())
}

// NewQCborValue2 constructs a new QCborValue object.
func NewQCborValue2(t_ QCborValue__Type) *QCborValue {

	return newQCborValue(C.QCborValue_new2((C.int)(t_)))
}

// NewQCborValue3 constructs a new QCborValue object.
func NewQCborValue3(b_ bool) *QCborValue {

	return newQCborValue(C.QCborValue_new3((C.bool)(b_)))
}

// NewQCborValue4 constructs a new QCborValue object.
func NewQCborValue4(i int) *QCborValue {

	return newQCborValue(C.QCborValue_new4((C.int)(i)))
}

// NewQCborValue5 constructs a new QCborValue object.
func NewQCborValue5(u uint) *QCborValue {

	return newQCborValue(C.QCborValue_new5((C.uint)(u)))
}

// NewQCborValue6 constructs a new QCborValue object.
func NewQCborValue6(i int64) *QCborValue {

	return newQCborValue(C.QCborValue_new6((C.longlong)(i)))
}

// NewQCborValue7 constructs a new QCborValue object.
func NewQCborValue7(v float64) *QCborValue {

	return newQCborValue(C.QCborValue_new7((C.double)(v)))
}

// NewQCborValue8 constructs a new QCborValue object.
func NewQCborValue8(st QCborSimpleType) *QCborValue {

	return newQCborValue(C.QCborValue_new8((C.uint8_t)(st)))
}

// NewQCborValue9 constructs a new QCborValue object.
func NewQCborValue9(ba []byte) *QCborValue {
	ba_alias := C.struct_miqt_string{}
	if len(ba) > 0 {
		ba_alias.data = (*C.char)(unsafe.Pointer(&ba[0]))
	} else {
		ba_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	ba_alias.len = C.size_t(len(ba))

	return newQCborValue(C.QCborValue_new9(ba_alias))
}

// NewQCborValue10 constructs a new QCborValue object.
func NewQCborValue10(s string) *QCborValue {
	s_ms := C.struct_miqt_string{}
	s_ms.data = C.CString(s)
	s_ms.len = C.size_t(len(s))
	defer C.free(unsafe.Pointer(s_ms.data))

	return newQCborValue(C.QCborValue_new10(s_ms))
}

// NewQCborValue11 constructs a new QCborValue object.
func NewQCborValue11(s string) *QCborValue {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))

	return newQCborValue(C.QCborValue_new11(s_Cstring))
}

// NewQCborValue12 constructs a new QCborValue object.
func NewQCborValue12(a *QCborArray) *QCborValue {

	return newQCborValue(C.QCborValue_new12(a.cPointer()))
}

// NewQCborValue13 constructs a new QCborValue object.
func NewQCborValue13(m *QCborMap) *QCborValue {

	return newQCborValue(C.QCborValue_new13(m.cPointer()))
}

// NewQCborValue14 constructs a new QCborValue object.
func NewQCborValue14(tag QCborTag) *QCborValue {

	return newQCborValue(C.QCborValue_new14((C.uint64_t)(tag)))
}

// NewQCborValue15 constructs a new QCborValue object.
func NewQCborValue15(t_ QCborKnownTags) *QCborValue {

	return newQCborValue(C.QCborValue_new15((C.int)(t_)))
}

// NewQCborValue16 constructs a new QCborValue object.
func NewQCborValue16(dt *qt6.QDateTime) *QCborValue {

	return newQCborValue(C.QCborValue_new16((*C.QDateTime)(dt.UnsafePointer())))
}

// NewQCborValue17 constructs a new QCborValue object.
func NewQCborValue17(url *qt6.QUrl) *QCborValue {

	return newQCborValue(C.QCborValue_new17((*C.QUrl)(url.UnsafePointer())))
}

// NewQCborValue18 constructs a new QCborValue object.
func NewQCborValue18(rx *qt6.QRegularExpression) *QCborValue {

	return newQCborValue(C.QCborValue_new18((*C.QRegularExpression)(rx.UnsafePointer())))
}

// NewQCborValue19 constructs a new QCborValue object.
func NewQCborValue19(uuid *qt6.QUuid) *QCborValue {

	return newQCborValue(C.QCborValue_new19((*C.QUuid)(uuid.UnsafePointer())))
}

// NewQCborValue20 constructs a new QCborValue object.
func NewQCborValue20(other *QCborValue) *QCborValue {

	return newQCborValue(C.QCborValue_new20(other.cPointer()))
}

// NewQCborValue21 constructs a new QCborValue object.
func NewQCborValue21(tag QCborTag, taggedValue *QCborValue) *QCborValue {

	return newQCborValue(C.QCborValue_new21((C.uint64_t)(tag), taggedValue.cPointer()))
}

// NewQCborValue22 constructs a new QCborValue object.
func NewQCborValue22(t_ QCborKnownTags, tv *QCborValue) *QCborValue {

	return newQCborValue(C.QCborValue_new22((C.int)(t_), tv.cPointer()))
}

func (this *QCborValue) OperatorAssign(other *QCborValue) {
	C.QCborValue_operatorAssign(this.h, other.cPointer())
}

func (this *QCborValue) Swap(other *QCborValue) {
	C.QCborValue_swap(this.h, other.cPointer())
}

func (this *QCborValue) Type() QCborValue__Type {
	return (QCborValue__Type)(C.QCborValue_type(this.h))
}

func (this *QCborValue) IsInteger() bool {
	return (bool)(C.QCborValue_isInteger(this.h))
}

func (this *QCborValue) IsByteArray() bool {
	return (bool)(C.QCborValue_isByteArray(this.h))
}

func (this *QCborValue) IsString() bool {
	return (bool)(C.QCborValue_isString(this.h))
}

func (this *QCborValue) IsArray() bool {
	return (bool)(C.QCborValue_isArray(this.h))
}

func (this *QCborValue) IsMap() bool {
	return (bool)(C.QCborValue_isMap(this.h))
}

func (this *QCborValue) IsTag() bool {
	return (bool)(C.QCborValue_isTag(this.h))
}

func (this *QCborValue) IsFalse() bool {
	return (bool)(C.QCborValue_isFalse(this.h))
}

func (this *QCborValue) IsTrue() bool {
	return (bool)(C.QCborValue_isTrue(this.h))
}

func (this *QCborValue) IsBool() bool {
	return (bool)(C.QCborValue_isBool(this.h))
}

func (this *QCborValue) IsNull() bool {
	return (bool)(C.QCborValue_isNull(this.h))
}

func (this *QCborValue) IsUndefined() bool {
	return (bool)(C.QCborValue_isUndefined(this.h))
}

func (this *QCborValue) IsDouble() bool {
	return (bool)(C.QCborValue_isDouble(this.h))
}

func (this *QCborValue) IsDateTime() bool {
	return (bool)(C.QCborValue_isDateTime(this.h))
}

func (this *QCborValue) IsUrl() bool {
	return (bool)(C.QCborValue_isUrl(this.h))
}

func (this *QCborValue) IsRegularExpression() bool {
	return (bool)(C.QCborValue_isRegularExpression(this.h))
}

func (this *QCborValue) IsUuid() bool {
	return (bool)(C.QCborValue_isUuid(this.h))
}

func (this *QCborValue) IsInvalid() bool {
	return (bool)(C.QCborValue_isInvalid(this.h))
}

func (this *QCborValue) IsContainer() bool {
	return (bool)(C.QCborValue_isContainer(this.h))
}

func (this *QCborValue) IsSimpleType() bool {
	return (bool)(C.QCborValue_isSimpleType(this.h))
}

func (this *QCborValue) IsSimpleTypeWithSt(st QCborSimpleType) bool {
	return (bool)(C.QCborValue_isSimpleTypeWithSt(this.h, (C.uint8_t)(st)))
}

func (this *QCborValue) ToSimpleType() QCborSimpleType {
	return (QCborSimpleType)(C.QCborValue_toSimpleType(this.h))
}

func (this *QCborValue) ToInteger() int64 {
	return (int64)(C.QCborValue_toInteger(this.h))
}

func (this *QCborValue) ToBool() bool {
	return (bool)(C.QCborValue_toBool(this.h))
}

func (this *QCborValue) ToDouble() float64 {
	return (float64)(C.QCborValue_toDouble(this.h))
}

func (this *QCborValue) Tag() QCborTag {
	return (QCborTag)(C.QCborValue_tag(this.h))
}

func (this *QCborValue) TaggedValue() *QCborValue {
	_goptr := newQCborValue(C.QCborValue_taggedValue(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValue) ToByteArray() []byte {
	var _bytearray C.struct_miqt_string = C.QCborValue_toByteArray(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QCborValue) ToString() string {
	var _ms C.struct_miqt_string = C.QCborValue_toString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCborValue) ToDateTime() *qt6.QDateTime {
	_goptr := qt6.UnsafeNewQDateTime(unsafe.Pointer(C.QCborValue_toDateTime(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValue) ToUrl() *qt6.QUrl {
	_goptr := qt6.UnsafeNewQUrl(unsafe.Pointer(C.QCborValue_toUrl(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValue) ToRegularExpression() *qt6.QRegularExpression {
	_goptr := qt6.UnsafeNewQRegularExpression(unsafe.Pointer(C.QCborValue_toRegularExpression(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValue) ToUuid() *qt6.QUuid {
	_goptr := qt6.UnsafeNewQUuid(unsafe.Pointer(C.QCborValue_toUuid(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValue) ToArray() *QCborArray {
	_goptr := newQCborArray(C.QCborValue_toArray(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValue) ToArrayWithDefaultValue(defaultValue *QCborArray) *QCborArray {
	_goptr := newQCborArray(C.QCborValue_toArrayWithDefaultValue(this.h, defaultValue.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValue) ToMap() *QCborMap {
	_goptr := newQCborMap(C.QCborValue_toMap(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValue) ToMapWithDefaultValue(defaultValue *QCborMap) *QCborMap {
	_goptr := newQCborMap(C.QCborValue_toMapWithDefaultValue(this.h, defaultValue.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValue) OperatorSubscript(key string) *QCborValue {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	_goptr := newQCborValue(C.QCborValue_operatorSubscript(this.h, key_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValue) OperatorSubscript2(key int64) *QCborValue {
	_goptr := newQCborValue(C.QCborValue_operatorSubscript2(this.h, (C.longlong)(key)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValue) OperatorSubscript3(key int64) *QCborValueRef {
	_goptr := newQCborValueRef(C.QCborValue_operatorSubscript3(this.h, (C.longlong)(key)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValue) OperatorSubscript5(key string) *QCborValueRef {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	_goptr := newQCborValueRef(C.QCborValue_operatorSubscript5(this.h, key_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValue) Compare(other *QCborValue) int {
	return (int)(C.QCborValue_compare(this.h, other.cPointer()))
}

func (this *QCborValue) OperatorEqual(other *QCborValue) bool {
	return (bool)(C.QCborValue_operatorEqual(this.h, other.cPointer()))
}

func (this *QCborValue) OperatorNotEqual(other *QCborValue) bool {
	return (bool)(C.QCborValue_operatorNotEqual(this.h, other.cPointer()))
}

func (this *QCborValue) OperatorLesser(other *QCborValue) bool {
	return (bool)(C.QCborValue_operatorLesser(this.h, other.cPointer()))
}

func QCborValue_FromVariant(variant *qt6.QVariant) *QCborValue {
	_goptr := newQCborValue(C.QCborValue_fromVariant((*C.QVariant)(variant.UnsafePointer())))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValue) ToVariant() *qt6.QVariant {
	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(C.QCborValue_toVariant(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QCborValue_FromJsonValue(v *qt6.QJsonValue) *QCborValue {
	_goptr := newQCborValue(C.QCborValue_fromJsonValue((*C.QJsonValue)(v.UnsafePointer())))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValue) ToJsonValue() *qt6.QJsonValue {
	_goptr := qt6.UnsafeNewQJsonValue(unsafe.Pointer(C.QCborValue_toJsonValue(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QCborValue_FromCbor(reader *QCborStreamReader) *QCborValue {
	_goptr := newQCborValue(C.QCborValue_fromCbor(reader.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QCborValue_FromCborWithBa(ba []byte) *QCborValue {
	ba_alias := C.struct_miqt_string{}
	if len(ba) > 0 {
		ba_alias.data = (*C.char)(unsafe.Pointer(&ba[0]))
	} else {
		ba_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	ba_alias.len = C.size_t(len(ba))
	_goptr := newQCborValue(C.QCborValue_fromCborWithBa(ba_alias))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QCborValue_FromCbor2(data string, lenVal int64) *QCborValue {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))
	_goptr := newQCborValue(C.QCborValue_fromCbor2(data_Cstring, (C.ptrdiff_t)(lenVal)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QCborValue_FromCbor3(data *byte, lenVal int64) *QCborValue {
	_goptr := newQCborValue(C.QCborValue_fromCbor3((*C.uchar)(unsafe.Pointer(data)), (C.ptrdiff_t)(lenVal)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValue) ToCbor() []byte {
	var _bytearray C.struct_miqt_string = C.QCborValue_toCbor(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QCborValue) ToCborWithWriter(writer *QCborStreamWriter) {
	C.QCborValue_toCborWithWriter(this.h, writer.cPointer())
}

func (this *QCborValue) ToDiagnosticNotation() string {
	var _ms C.struct_miqt_string = C.QCborValue_toDiagnosticNotation(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCborValue) ToSimpleTypeWithDefaultValue(defaultValue QCborSimpleType) QCborSimpleType {
	return (QCborSimpleType)(C.QCborValue_toSimpleTypeWithDefaultValue(this.h, (C.uint8_t)(defaultValue)))
}

func (this *QCborValue) ToIntegerWithDefaultValue(defaultValue int64) int64 {
	return (int64)(C.QCborValue_toIntegerWithDefaultValue(this.h, (C.longlong)(defaultValue)))
}

func (this *QCborValue) ToBoolWithDefaultValue(defaultValue bool) bool {
	return (bool)(C.QCborValue_toBoolWithDefaultValue(this.h, (C.bool)(defaultValue)))
}

func (this *QCborValue) ToDoubleWithDefaultValue(defaultValue float64) float64 {
	return (float64)(C.QCborValue_toDoubleWithDefaultValue(this.h, (C.double)(defaultValue)))
}

func (this *QCborValue) TagWithDefaultValue(defaultValue QCborTag) QCborTag {
	return (QCborTag)(C.QCborValue_tagWithDefaultValue(this.h, (C.uint64_t)(defaultValue)))
}

func (this *QCborValue) TaggedValueWithDefaultValue(defaultValue *QCborValue) *QCborValue {
	_goptr := newQCborValue(C.QCborValue_taggedValueWithDefaultValue(this.h, defaultValue.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValue) ToByteArrayWithDefaultValue(defaultValue []byte) []byte {
	defaultValue_alias := C.struct_miqt_string{}
	if len(defaultValue) > 0 {
		defaultValue_alias.data = (*C.char)(unsafe.Pointer(&defaultValue[0]))
	} else {
		defaultValue_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	defaultValue_alias.len = C.size_t(len(defaultValue))
	var _bytearray C.struct_miqt_string = C.QCborValue_toByteArrayWithDefaultValue(this.h, defaultValue_alias)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QCborValue) ToStringWithDefaultValue(defaultValue string) string {
	defaultValue_ms := C.struct_miqt_string{}
	defaultValue_ms.data = C.CString(defaultValue)
	defaultValue_ms.len = C.size_t(len(defaultValue))
	defer C.free(unsafe.Pointer(defaultValue_ms.data))
	var _ms C.struct_miqt_string = C.QCborValue_toStringWithDefaultValue(this.h, defaultValue_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCborValue) ToDateTimeWithDefaultValue(defaultValue *qt6.QDateTime) *qt6.QDateTime {
	_goptr := qt6.UnsafeNewQDateTime(unsafe.Pointer(C.QCborValue_toDateTimeWithDefaultValue(this.h, (*C.QDateTime)(defaultValue.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValue) ToUrlWithDefaultValue(defaultValue *qt6.QUrl) *qt6.QUrl {
	_goptr := qt6.UnsafeNewQUrl(unsafe.Pointer(C.QCborValue_toUrlWithDefaultValue(this.h, (*C.QUrl)(defaultValue.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValue) ToRegularExpressionWithDefaultValue(defaultValue *qt6.QRegularExpression) *qt6.QRegularExpression {
	_goptr := qt6.UnsafeNewQRegularExpression(unsafe.Pointer(C.QCborValue_toRegularExpressionWithDefaultValue(this.h, (*C.QRegularExpression)(defaultValue.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValue) ToUuidWithDefaultValue(defaultValue *qt6.QUuid) *qt6.QUuid {
	_goptr := qt6.UnsafeNewQUuid(unsafe.Pointer(C.QCborValue_toUuidWithDefaultValue(this.h, (*C.QUuid)(defaultValue.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QCborValue_FromCbor4(ba []byte, error *QCborParserError) *QCborValue {
	ba_alias := C.struct_miqt_string{}
	if len(ba) > 0 {
		ba_alias.data = (*C.char)(unsafe.Pointer(&ba[0]))
	} else {
		ba_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	ba_alias.len = C.size_t(len(ba))
	_goptr := newQCborValue(C.QCborValue_fromCbor4(ba_alias, error.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QCborValue_FromCbor5(data string, lenVal int64, error *QCborParserError) *QCborValue {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))
	_goptr := newQCborValue(C.QCborValue_fromCbor5(data_Cstring, (C.ptrdiff_t)(lenVal), error.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QCborValue_FromCbor6(data *byte, lenVal int64, error *QCborParserError) *QCborValue {
	_goptr := newQCborValue(C.QCborValue_fromCbor6((*C.uchar)(unsafe.Pointer(data)), (C.ptrdiff_t)(lenVal), error.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValue) ToCborWithOpt(opt QCborValue__EncodingOption) []byte {
	var _bytearray C.struct_miqt_string = C.QCborValue_toCborWithOpt(this.h, (C.int)(opt))
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QCborValue) ToCbor2(writer *QCborStreamWriter, opt QCborValue__EncodingOption) {
	C.QCborValue_toCbor2(this.h, writer.cPointer(), (C.int)(opt))
}

func (this *QCborValue) ToDiagnosticNotationWithOpts(opts QCborValue__DiagnosticNotationOption) string {
	var _ms C.struct_miqt_string = C.QCborValue_toDiagnosticNotationWithOpts(this.h, (C.int)(opts))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QCborValue) Delete() {
	C.QCborValue_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QCborValue) GoGC() {
	runtime.SetFinalizer(this, func(this *QCborValue) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QCborValueConstRef struct {
	h *C.QCborValueConstRef
}

func (this *QCborValueConstRef) cPointer() *C.QCborValueConstRef {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QCborValueConstRef) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQCborValueConstRef constructs the type using only CGO pointers.
func newQCborValueConstRef(h *C.QCborValueConstRef) *QCborValueConstRef {
	if h == nil {
		return nil
	}

	return &QCborValueConstRef{h: h}
}

// UnsafeNewQCborValueConstRef constructs the type using only unsafe pointers.
func UnsafeNewQCborValueConstRef(h unsafe.Pointer) *QCborValueConstRef {
	return newQCborValueConstRef((*C.QCborValueConstRef)(h))
}

// NewQCborValueConstRef constructs a new QCborValueConstRef object.
func NewQCborValueConstRef(param1 *QCborValueConstRef) *QCborValueConstRef {

	return newQCborValueConstRef(C.QCborValueConstRef_new(param1.cPointer()))
}

func (this *QCborValueConstRef) ToQCborValue() *QCborValue {
	_goptr := newQCborValue(C.QCborValueConstRef_ToQCborValue(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValueConstRef) Type() QCborValue__Type {
	return (QCborValue__Type)(C.QCborValueConstRef_type(this.h))
}

func (this *QCborValueConstRef) IsInteger() bool {
	return (bool)(C.QCborValueConstRef_isInteger(this.h))
}

func (this *QCborValueConstRef) IsByteArray() bool {
	return (bool)(C.QCborValueConstRef_isByteArray(this.h))
}

func (this *QCborValueConstRef) IsString() bool {
	return (bool)(C.QCborValueConstRef_isString(this.h))
}

func (this *QCborValueConstRef) IsArray() bool {
	return (bool)(C.QCborValueConstRef_isArray(this.h))
}

func (this *QCborValueConstRef) IsMap() bool {
	return (bool)(C.QCborValueConstRef_isMap(this.h))
}

func (this *QCborValueConstRef) IsTag() bool {
	return (bool)(C.QCborValueConstRef_isTag(this.h))
}

func (this *QCborValueConstRef) IsFalse() bool {
	return (bool)(C.QCborValueConstRef_isFalse(this.h))
}

func (this *QCborValueConstRef) IsTrue() bool {
	return (bool)(C.QCborValueConstRef_isTrue(this.h))
}

func (this *QCborValueConstRef) IsBool() bool {
	return (bool)(C.QCborValueConstRef_isBool(this.h))
}

func (this *QCborValueConstRef) IsNull() bool {
	return (bool)(C.QCborValueConstRef_isNull(this.h))
}

func (this *QCborValueConstRef) IsUndefined() bool {
	return (bool)(C.QCborValueConstRef_isUndefined(this.h))
}

func (this *QCborValueConstRef) IsDouble() bool {
	return (bool)(C.QCborValueConstRef_isDouble(this.h))
}

func (this *QCborValueConstRef) IsDateTime() bool {
	return (bool)(C.QCborValueConstRef_isDateTime(this.h))
}

func (this *QCborValueConstRef) IsUrl() bool {
	return (bool)(C.QCborValueConstRef_isUrl(this.h))
}

func (this *QCborValueConstRef) IsRegularExpression() bool {
	return (bool)(C.QCborValueConstRef_isRegularExpression(this.h))
}

func (this *QCborValueConstRef) IsUuid() bool {
	return (bool)(C.QCborValueConstRef_isUuid(this.h))
}

func (this *QCborValueConstRef) IsInvalid() bool {
	return (bool)(C.QCborValueConstRef_isInvalid(this.h))
}

func (this *QCborValueConstRef) IsContainer() bool {
	return (bool)(C.QCborValueConstRef_isContainer(this.h))
}

func (this *QCborValueConstRef) IsSimpleType() bool {
	return (bool)(C.QCborValueConstRef_isSimpleType(this.h))
}

func (this *QCborValueConstRef) IsSimpleTypeWithSt(st QCborSimpleType) bool {
	return (bool)(C.QCborValueConstRef_isSimpleTypeWithSt(this.h, (C.uint8_t)(st)))
}

func (this *QCborValueConstRef) ToSimpleType() QCborSimpleType {
	return (QCborSimpleType)(C.QCborValueConstRef_toSimpleType(this.h))
}

func (this *QCborValueConstRef) Tag() QCborTag {
	return (QCborTag)(C.QCborValueConstRef_tag(this.h))
}

func (this *QCborValueConstRef) TaggedValue() *QCborValue {
	_goptr := newQCborValue(C.QCborValueConstRef_taggedValue(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValueConstRef) ToInteger() int64 {
	return (int64)(C.QCborValueConstRef_toInteger(this.h))
}

func (this *QCborValueConstRef) ToBool() bool {
	return (bool)(C.QCborValueConstRef_toBool(this.h))
}

func (this *QCborValueConstRef) ToDouble() float64 {
	return (float64)(C.QCborValueConstRef_toDouble(this.h))
}

func (this *QCborValueConstRef) ToByteArray() []byte {
	var _bytearray C.struct_miqt_string = C.QCborValueConstRef_toByteArray(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QCborValueConstRef) ToString() string {
	var _ms C.struct_miqt_string = C.QCborValueConstRef_toString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCborValueConstRef) ToDateTime() *qt6.QDateTime {
	_goptr := qt6.UnsafeNewQDateTime(unsafe.Pointer(C.QCborValueConstRef_toDateTime(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValueConstRef) ToUrl() *qt6.QUrl {
	_goptr := qt6.UnsafeNewQUrl(unsafe.Pointer(C.QCborValueConstRef_toUrl(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValueConstRef) ToRegularExpression() *qt6.QRegularExpression {
	_goptr := qt6.UnsafeNewQRegularExpression(unsafe.Pointer(C.QCborValueConstRef_toRegularExpression(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValueConstRef) ToUuid() *qt6.QUuid {
	_goptr := qt6.UnsafeNewQUuid(unsafe.Pointer(C.QCborValueConstRef_toUuid(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValueConstRef) ToArray() *QCborArray {
	_goptr := newQCborArray(C.QCborValueConstRef_toArray(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValueConstRef) ToArrayWithQCborArray(a *QCborArray) *QCborArray {
	_goptr := newQCborArray(C.QCborValueConstRef_toArrayWithQCborArray(this.h, a.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValueConstRef) ToMap() *QCborMap {
	_goptr := newQCborMap(C.QCborValueConstRef_toMap(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValueConstRef) ToMapWithQCborMap(m *QCborMap) *QCborMap {
	_goptr := newQCborMap(C.QCborValueConstRef_toMapWithQCborMap(this.h, m.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValueConstRef) OperatorSubscript(key string) *QCborValue {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	_goptr := newQCborValue(C.QCborValueConstRef_operatorSubscript(this.h, key_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValueConstRef) OperatorSubscript2(key int64) *QCborValue {
	_goptr := newQCborValue(C.QCborValueConstRef_operatorSubscript2(this.h, (C.longlong)(key)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValueConstRef) Compare(other *QCborValue) int {
	return (int)(C.QCborValueConstRef_compare(this.h, other.cPointer()))
}

func (this *QCborValueConstRef) OperatorEqual(other *QCborValue) bool {
	return (bool)(C.QCborValueConstRef_operatorEqual(this.h, other.cPointer()))
}

func (this *QCborValueConstRef) OperatorNotEqual(other *QCborValue) bool {
	return (bool)(C.QCborValueConstRef_operatorNotEqual(this.h, other.cPointer()))
}

func (this *QCborValueConstRef) OperatorLesser(other *QCborValue) bool {
	return (bool)(C.QCborValueConstRef_operatorLesser(this.h, other.cPointer()))
}

func (this *QCborValueConstRef) ToVariant() *qt6.QVariant {
	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(C.QCborValueConstRef_toVariant(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValueConstRef) ToJsonValue() *qt6.QJsonValue {
	_goptr := qt6.UnsafeNewQJsonValue(unsafe.Pointer(C.QCborValueConstRef_toJsonValue(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValueConstRef) ToCbor() []byte {
	var _bytearray C.struct_miqt_string = C.QCborValueConstRef_toCbor(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QCborValueConstRef) ToCborWithWriter(writer *QCborStreamWriter) {
	C.QCborValueConstRef_toCborWithWriter(this.h, writer.cPointer())
}

func (this *QCborValueConstRef) ToDiagnosticNotation() string {
	var _ms C.struct_miqt_string = C.QCborValueConstRef_toDiagnosticNotation(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCborValueConstRef) ToSimpleTypeWithDefaultValue(defaultValue QCborSimpleType) QCborSimpleType {
	return (QCborSimpleType)(C.QCborValueConstRef_toSimpleTypeWithDefaultValue(this.h, (C.uint8_t)(defaultValue)))
}

func (this *QCborValueConstRef) TagWithDefaultValue(defaultValue QCborTag) QCborTag {
	return (QCborTag)(C.QCborValueConstRef_tagWithDefaultValue(this.h, (C.uint64_t)(defaultValue)))
}

func (this *QCborValueConstRef) TaggedValueWithDefaultValue(defaultValue *QCborValue) *QCborValue {
	_goptr := newQCborValue(C.QCborValueConstRef_taggedValueWithDefaultValue(this.h, defaultValue.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValueConstRef) ToIntegerWithDefaultValue(defaultValue int64) int64 {
	return (int64)(C.QCborValueConstRef_toIntegerWithDefaultValue(this.h, (C.longlong)(defaultValue)))
}

func (this *QCborValueConstRef) ToBoolWithDefaultValue(defaultValue bool) bool {
	return (bool)(C.QCborValueConstRef_toBoolWithDefaultValue(this.h, (C.bool)(defaultValue)))
}

func (this *QCborValueConstRef) ToDoubleWithDefaultValue(defaultValue float64) float64 {
	return (float64)(C.QCborValueConstRef_toDoubleWithDefaultValue(this.h, (C.double)(defaultValue)))
}

func (this *QCborValueConstRef) ToByteArrayWithDefaultValue(defaultValue []byte) []byte {
	defaultValue_alias := C.struct_miqt_string{}
	if len(defaultValue) > 0 {
		defaultValue_alias.data = (*C.char)(unsafe.Pointer(&defaultValue[0]))
	} else {
		defaultValue_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	defaultValue_alias.len = C.size_t(len(defaultValue))
	var _bytearray C.struct_miqt_string = C.QCborValueConstRef_toByteArrayWithDefaultValue(this.h, defaultValue_alias)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QCborValueConstRef) ToStringWithDefaultValue(defaultValue string) string {
	defaultValue_ms := C.struct_miqt_string{}
	defaultValue_ms.data = C.CString(defaultValue)
	defaultValue_ms.len = C.size_t(len(defaultValue))
	defer C.free(unsafe.Pointer(defaultValue_ms.data))
	var _ms C.struct_miqt_string = C.QCborValueConstRef_toStringWithDefaultValue(this.h, defaultValue_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCborValueConstRef) ToDateTimeWithDefaultValue(defaultValue *qt6.QDateTime) *qt6.QDateTime {
	_goptr := qt6.UnsafeNewQDateTime(unsafe.Pointer(C.QCborValueConstRef_toDateTimeWithDefaultValue(this.h, (*C.QDateTime)(defaultValue.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValueConstRef) ToUrlWithDefaultValue(defaultValue *qt6.QUrl) *qt6.QUrl {
	_goptr := qt6.UnsafeNewQUrl(unsafe.Pointer(C.QCborValueConstRef_toUrlWithDefaultValue(this.h, (*C.QUrl)(defaultValue.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValueConstRef) ToRegularExpressionWithDefaultValue(defaultValue *qt6.QRegularExpression) *qt6.QRegularExpression {
	_goptr := qt6.UnsafeNewQRegularExpression(unsafe.Pointer(C.QCborValueConstRef_toRegularExpressionWithDefaultValue(this.h, (*C.QRegularExpression)(defaultValue.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValueConstRef) ToUuidWithDefaultValue(defaultValue *qt6.QUuid) *qt6.QUuid {
	_goptr := qt6.UnsafeNewQUuid(unsafe.Pointer(C.QCborValueConstRef_toUuidWithDefaultValue(this.h, (*C.QUuid)(defaultValue.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValueConstRef) ToCborWithOpt(opt QCborValue__EncodingOption) []byte {
	var _bytearray C.struct_miqt_string = C.QCborValueConstRef_toCborWithOpt(this.h, (C.int)(opt))
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QCborValueConstRef) ToCbor2(writer *QCborStreamWriter, opt QCborValue__EncodingOption) {
	C.QCborValueConstRef_toCbor2(this.h, writer.cPointer(), (C.int)(opt))
}

func (this *QCborValueConstRef) ToDiagnosticNotationWithOpt(opt QCborValue__DiagnosticNotationOption) string {
	var _ms C.struct_miqt_string = C.QCborValueConstRef_toDiagnosticNotationWithOpt(this.h, (C.int)(opt))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QCborValueConstRef) Delete() {
	C.QCborValueConstRef_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QCborValueConstRef) GoGC() {
	runtime.SetFinalizer(this, func(this *QCborValueConstRef) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QCborValueRef struct {
	h *C.QCborValueRef
	*QCborValueConstRef
}

func (this *QCborValueRef) cPointer() *C.QCborValueRef {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QCborValueRef) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQCborValueRef constructs the type using only CGO pointers.
func newQCborValueRef(h *C.QCborValueRef) *QCborValueRef {
	if h == nil {
		return nil
	}
	var outptr_QCborValueConstRef *C.QCborValueConstRef = nil
	C.QCborValueRef_virtbase(h, &outptr_QCborValueConstRef)

	return &QCborValueRef{h: h,
		QCborValueConstRef: newQCborValueConstRef(outptr_QCborValueConstRef)}
}

// UnsafeNewQCborValueRef constructs the type using only unsafe pointers.
func UnsafeNewQCborValueRef(h unsafe.Pointer) *QCborValueRef {
	return newQCborValueRef((*C.QCborValueRef)(h))
}

// NewQCborValueRef constructs a new QCborValueRef object.
func NewQCborValueRef(param1 *QCborValueRef) *QCborValueRef {

	return newQCborValueRef(C.QCborValueRef_new(param1.cPointer()))
}

func (this *QCborValueRef) OperatorAssign(other *QCborValue) {
	C.QCborValueRef_operatorAssign(this.h, other.cPointer())
}

func (this *QCborValueRef) OperatorAssignWithOther(other *QCborValueRef) {
	C.QCborValueRef_operatorAssignWithOther(this.h, other.cPointer())
}

func (this *QCborValueRef) OperatorSubscript(key int64) *QCborValueRef {
	_goptr := newQCborValueRef(C.QCborValueRef_operatorSubscript(this.h, (C.longlong)(key)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValueRef) OperatorSubscript2(key string) *QCborValueRef {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	_goptr := newQCborValueRef(C.QCborValueRef_operatorSubscript2(this.h, key_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValueRef) ToQCborValue() *QCborValue {
	_goptr := newQCborValue(C.QCborValueRef_ToQCborValue(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValueRef) Type() QCborValue__Type {
	return (QCborValue__Type)(C.QCborValueRef_type(this.h))
}

func (this *QCborValueRef) IsInteger() bool {
	return (bool)(C.QCborValueRef_isInteger(this.h))
}

func (this *QCborValueRef) IsByteArray() bool {
	return (bool)(C.QCborValueRef_isByteArray(this.h))
}

func (this *QCborValueRef) IsString() bool {
	return (bool)(C.QCborValueRef_isString(this.h))
}

func (this *QCborValueRef) IsArray() bool {
	return (bool)(C.QCborValueRef_isArray(this.h))
}

func (this *QCborValueRef) IsMap() bool {
	return (bool)(C.QCborValueRef_isMap(this.h))
}

func (this *QCborValueRef) IsTag() bool {
	return (bool)(C.QCborValueRef_isTag(this.h))
}

func (this *QCborValueRef) IsFalse() bool {
	return (bool)(C.QCborValueRef_isFalse(this.h))
}

func (this *QCborValueRef) IsTrue() bool {
	return (bool)(C.QCborValueRef_isTrue(this.h))
}

func (this *QCborValueRef) IsBool() bool {
	return (bool)(C.QCborValueRef_isBool(this.h))
}

func (this *QCborValueRef) IsNull() bool {
	return (bool)(C.QCborValueRef_isNull(this.h))
}

func (this *QCborValueRef) IsUndefined() bool {
	return (bool)(C.QCborValueRef_isUndefined(this.h))
}

func (this *QCborValueRef) IsDouble() bool {
	return (bool)(C.QCborValueRef_isDouble(this.h))
}

func (this *QCborValueRef) IsDateTime() bool {
	return (bool)(C.QCborValueRef_isDateTime(this.h))
}

func (this *QCborValueRef) IsUrl() bool {
	return (bool)(C.QCborValueRef_isUrl(this.h))
}

func (this *QCborValueRef) IsRegularExpression() bool {
	return (bool)(C.QCborValueRef_isRegularExpression(this.h))
}

func (this *QCborValueRef) IsUuid() bool {
	return (bool)(C.QCborValueRef_isUuid(this.h))
}

func (this *QCborValueRef) IsInvalid() bool {
	return (bool)(C.QCborValueRef_isInvalid(this.h))
}

func (this *QCborValueRef) IsContainer() bool {
	return (bool)(C.QCborValueRef_isContainer(this.h))
}

func (this *QCborValueRef) IsSimpleType() bool {
	return (bool)(C.QCborValueRef_isSimpleType(this.h))
}

func (this *QCborValueRef) IsSimpleTypeWithSt(st QCborSimpleType) bool {
	return (bool)(C.QCborValueRef_isSimpleTypeWithSt(this.h, (C.uint8_t)(st)))
}

func (this *QCborValueRef) ToSimpleType() QCborSimpleType {
	return (QCborSimpleType)(C.QCborValueRef_toSimpleType(this.h))
}

func (this *QCborValueRef) Tag() QCborTag {
	return (QCborTag)(C.QCborValueRef_tag(this.h))
}

func (this *QCborValueRef) TaggedValue() *QCborValue {
	_goptr := newQCborValue(C.QCborValueRef_taggedValue(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValueRef) ToInteger() int64 {
	return (int64)(C.QCborValueRef_toInteger(this.h))
}

func (this *QCborValueRef) ToBool() bool {
	return (bool)(C.QCborValueRef_toBool(this.h))
}

func (this *QCborValueRef) ToDouble() float64 {
	return (float64)(C.QCborValueRef_toDouble(this.h))
}

func (this *QCborValueRef) ToByteArray() []byte {
	var _bytearray C.struct_miqt_string = C.QCborValueRef_toByteArray(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QCborValueRef) ToString() string {
	var _ms C.struct_miqt_string = C.QCborValueRef_toString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCborValueRef) ToDateTime() *qt6.QDateTime {
	_goptr := qt6.UnsafeNewQDateTime(unsafe.Pointer(C.QCborValueRef_toDateTime(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValueRef) ToUrl() *qt6.QUrl {
	_goptr := qt6.UnsafeNewQUrl(unsafe.Pointer(C.QCborValueRef_toUrl(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValueRef) ToRegularExpression() *qt6.QRegularExpression {
	_goptr := qt6.UnsafeNewQRegularExpression(unsafe.Pointer(C.QCborValueRef_toRegularExpression(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValueRef) ToUuid() *qt6.QUuid {
	_goptr := qt6.UnsafeNewQUuid(unsafe.Pointer(C.QCborValueRef_toUuid(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValueRef) ToArray() *QCborArray {
	_goptr := newQCborArray(C.QCborValueRef_toArray(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValueRef) ToArrayWithQCborArray(a *QCborArray) *QCborArray {
	_goptr := newQCborArray(C.QCborValueRef_toArrayWithQCborArray(this.h, a.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValueRef) ToMap() *QCborMap {
	_goptr := newQCborMap(C.QCborValueRef_toMap(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValueRef) ToMapWithQCborMap(m *QCborMap) *QCborMap {
	_goptr := newQCborMap(C.QCborValueRef_toMapWithQCborMap(this.h, m.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValueRef) OperatorSubscript3(key string) *QCborValue {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	_goptr := newQCborValue(C.QCborValueRef_operatorSubscript3(this.h, key_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValueRef) OperatorSubscript5(key int64) *QCborValue {
	_goptr := newQCborValue(C.QCborValueRef_operatorSubscript5(this.h, (C.longlong)(key)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValueRef) Compare(other *QCborValue) int {
	return (int)(C.QCborValueRef_compare(this.h, other.cPointer()))
}

func (this *QCborValueRef) OperatorEqual(other *QCborValue) bool {
	return (bool)(C.QCborValueRef_operatorEqual(this.h, other.cPointer()))
}

func (this *QCborValueRef) OperatorNotEqual(other *QCborValue) bool {
	return (bool)(C.QCborValueRef_operatorNotEqual(this.h, other.cPointer()))
}

func (this *QCborValueRef) OperatorLesser(other *QCborValue) bool {
	return (bool)(C.QCborValueRef_operatorLesser(this.h, other.cPointer()))
}

func (this *QCborValueRef) ToVariant() *qt6.QVariant {
	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(C.QCborValueRef_toVariant(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValueRef) ToJsonValue() *qt6.QJsonValue {
	_goptr := qt6.UnsafeNewQJsonValue(unsafe.Pointer(C.QCborValueRef_toJsonValue(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValueRef) ToCbor() []byte {
	var _bytearray C.struct_miqt_string = C.QCborValueRef_toCbor(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QCborValueRef) ToCborWithWriter(writer *QCborStreamWriter) {
	C.QCborValueRef_toCborWithWriter(this.h, writer.cPointer())
}

func (this *QCborValueRef) ToDiagnosticNotation() string {
	var _ms C.struct_miqt_string = C.QCborValueRef_toDiagnosticNotation(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCborValueRef) ToSimpleTypeWithDefaultValue(defaultValue QCborSimpleType) QCborSimpleType {
	return (QCborSimpleType)(C.QCborValueRef_toSimpleTypeWithDefaultValue(this.h, (C.uint8_t)(defaultValue)))
}

func (this *QCborValueRef) TagWithDefaultValue(defaultValue QCborTag) QCborTag {
	return (QCborTag)(C.QCborValueRef_tagWithDefaultValue(this.h, (C.uint64_t)(defaultValue)))
}

func (this *QCborValueRef) TaggedValueWithDefaultValue(defaultValue *QCborValue) *QCborValue {
	_goptr := newQCborValue(C.QCborValueRef_taggedValueWithDefaultValue(this.h, defaultValue.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValueRef) ToIntegerWithDefaultValue(defaultValue int64) int64 {
	return (int64)(C.QCborValueRef_toIntegerWithDefaultValue(this.h, (C.longlong)(defaultValue)))
}

func (this *QCborValueRef) ToBoolWithDefaultValue(defaultValue bool) bool {
	return (bool)(C.QCborValueRef_toBoolWithDefaultValue(this.h, (C.bool)(defaultValue)))
}

func (this *QCborValueRef) ToDoubleWithDefaultValue(defaultValue float64) float64 {
	return (float64)(C.QCborValueRef_toDoubleWithDefaultValue(this.h, (C.double)(defaultValue)))
}

func (this *QCborValueRef) ToByteArrayWithDefaultValue(defaultValue []byte) []byte {
	defaultValue_alias := C.struct_miqt_string{}
	if len(defaultValue) > 0 {
		defaultValue_alias.data = (*C.char)(unsafe.Pointer(&defaultValue[0]))
	} else {
		defaultValue_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	defaultValue_alias.len = C.size_t(len(defaultValue))
	var _bytearray C.struct_miqt_string = C.QCborValueRef_toByteArrayWithDefaultValue(this.h, defaultValue_alias)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QCborValueRef) ToStringWithDefaultValue(defaultValue string) string {
	defaultValue_ms := C.struct_miqt_string{}
	defaultValue_ms.data = C.CString(defaultValue)
	defaultValue_ms.len = C.size_t(len(defaultValue))
	defer C.free(unsafe.Pointer(defaultValue_ms.data))
	var _ms C.struct_miqt_string = C.QCborValueRef_toStringWithDefaultValue(this.h, defaultValue_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCborValueRef) ToDateTimeWithDefaultValue(defaultValue *qt6.QDateTime) *qt6.QDateTime {
	_goptr := qt6.UnsafeNewQDateTime(unsafe.Pointer(C.QCborValueRef_toDateTimeWithDefaultValue(this.h, (*C.QDateTime)(defaultValue.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValueRef) ToUrlWithDefaultValue(defaultValue *qt6.QUrl) *qt6.QUrl {
	_goptr := qt6.UnsafeNewQUrl(unsafe.Pointer(C.QCborValueRef_toUrlWithDefaultValue(this.h, (*C.QUrl)(defaultValue.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValueRef) ToRegularExpressionWithDefaultValue(defaultValue *qt6.QRegularExpression) *qt6.QRegularExpression {
	_goptr := qt6.UnsafeNewQRegularExpression(unsafe.Pointer(C.QCborValueRef_toRegularExpressionWithDefaultValue(this.h, (*C.QRegularExpression)(defaultValue.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValueRef) ToUuidWithDefaultValue(defaultValue *qt6.QUuid) *qt6.QUuid {
	_goptr := qt6.UnsafeNewQUuid(unsafe.Pointer(C.QCborValueRef_toUuidWithDefaultValue(this.h, (*C.QUuid)(defaultValue.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValueRef) ToCborWithOpt(opt QCborValue__EncodingOption) []byte {
	var _bytearray C.struct_miqt_string = C.QCborValueRef_toCborWithOpt(this.h, (C.int)(opt))
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QCborValueRef) ToCbor2(writer *QCborStreamWriter, opt QCborValue__EncodingOption) {
	C.QCborValueRef_toCbor2(this.h, writer.cPointer(), (C.int)(opt))
}

func (this *QCborValueRef) ToDiagnosticNotationWithOpt(opt QCborValue__DiagnosticNotationOption) string {
	var _ms C.struct_miqt_string = C.QCborValueRef_toDiagnosticNotationWithOpt(this.h, (C.int)(opt))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QCborValueRef) Delete() {
	C.QCborValueRef_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QCborValueRef) GoGC() {
	runtime.SetFinalizer(this, func(this *QCborValueRef) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
