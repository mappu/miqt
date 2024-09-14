package qt

/*

#include "gen_qcborvalue.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QCborValue__EncodingOption int

const (
	QCborValue__EncodingOption__SortKeysInMaps   QCborValue__EncodingOption = 1
	QCborValue__EncodingOption__UseFloat         QCborValue__EncodingOption = 2
	QCborValue__EncodingOption__UseFloat16       QCborValue__EncodingOption = 6
	QCborValue__EncodingOption__UseIntegers      QCborValue__EncodingOption = 8
	QCborValue__EncodingOption__NoTransformation QCborValue__EncodingOption = 0
)

type QCborValue__DiagnosticNotationOption int

const (
	QCborValue__DiagnosticNotationOption__Compact        QCborValue__DiagnosticNotationOption = 0
	QCborValue__DiagnosticNotationOption__LineWrapped    QCborValue__DiagnosticNotationOption = 1
	QCborValue__DiagnosticNotationOption__ExtendedFormat QCborValue__DiagnosticNotationOption = 2
)

type QCborValue__Type int

const (
	QCborValue__Type__Integer           QCborValue__Type = 0
	QCborValue__Type__ByteArray         QCborValue__Type = 64
	QCborValue__Type__String            QCborValue__Type = 96
	QCborValue__Type__Array             QCborValue__Type = 128
	QCborValue__Type__Map               QCborValue__Type = 160
	QCborValue__Type__Tag               QCborValue__Type = 192
	QCborValue__Type__SimpleType        QCborValue__Type = 256
	QCborValue__Type__False             QCborValue__Type = 276
	QCborValue__Type__True              QCborValue__Type = 277
	QCborValue__Type__Null              QCborValue__Type = 278
	QCborValue__Type__Undefined         QCborValue__Type = 279
	QCborValue__Type__Double            QCborValue__Type = 514
	QCborValue__Type__DateTime          QCborValue__Type = 65536
	QCborValue__Type__Url               QCborValue__Type = 65568
	QCborValue__Type__RegularExpression QCborValue__Type = 65571
	QCborValue__Type__Uuid              QCborValue__Type = 65573
	QCborValue__Type__Invalid           QCborValue__Type = -1
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

func newQCborParserError(h *C.QCborParserError) *QCborParserError {
	if h == nil {
		return nil
	}
	return &QCborParserError{h: h}
}

func newQCborParserError_U(h unsafe.Pointer) *QCborParserError {
	return newQCborParserError((*C.QCborParserError)(h))
}

func (this *QCborParserError) ErrorString() string {
	var _ms *C.struct_miqt_string = C.QCborParserError_ErrorString(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

// Delete this object from C++ memory.
func (this *QCborParserError) Delete() {
	C.QCborParserError_Delete(this.h)
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

func newQCborValue(h *C.QCborValue) *QCborValue {
	if h == nil {
		return nil
	}
	return &QCborValue{h: h}
}

func newQCborValue_U(h unsafe.Pointer) *QCborValue {
	return newQCborValue((*C.QCborValue)(h))
}

// NewQCborValue constructs a new QCborValue object.
func NewQCborValue() *QCborValue {
	ret := C.QCborValue_new()
	return newQCborValue(ret)
}

// NewQCborValue2 constructs a new QCborValue object.
func NewQCborValue2(t_ QCborValue__Type) *QCborValue {
	ret := C.QCborValue_new2((C.uintptr_t)(t_))
	return newQCborValue(ret)
}

// NewQCborValue3 constructs a new QCborValue object.
func NewQCborValue3(b_ bool) *QCborValue {
	ret := C.QCborValue_new3((C.bool)(b_))
	return newQCborValue(ret)
}

// NewQCborValue4 constructs a new QCborValue object.
func NewQCborValue4(i int) *QCborValue {
	ret := C.QCborValue_new4((C.int)(i))
	return newQCborValue(ret)
}

// NewQCborValue5 constructs a new QCborValue object.
func NewQCborValue5(u uint) *QCborValue {
	ret := C.QCborValue_new5((C.uint)(u))
	return newQCborValue(ret)
}

// NewQCborValue6 constructs a new QCborValue object.
func NewQCborValue6(i int64) *QCborValue {
	ret := C.QCborValue_new6((C.longlong)(i))
	return newQCborValue(ret)
}

// NewQCborValue7 constructs a new QCborValue object.
func NewQCborValue7(v float64) *QCborValue {
	ret := C.QCborValue_new7((C.double)(v))
	return newQCborValue(ret)
}

// NewQCborValue8 constructs a new QCborValue object.
func NewQCborValue8(ba *QByteArray) *QCborValue {
	ret := C.QCborValue_new8(ba.cPointer())
	return newQCborValue(ret)
}

// NewQCborValue9 constructs a new QCborValue object.
func NewQCborValue9(s string) *QCborValue {
	s_ms := miqt_strdupg(s)
	defer C.free(s_ms)
	ret := C.QCborValue_new9((*C.struct_miqt_string)(s_ms))
	return newQCborValue(ret)
}

// NewQCborValue10 constructs a new QCborValue object.
func NewQCborValue10(s string) *QCborValue {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	ret := C.QCborValue_new10(s_Cstring)
	return newQCborValue(ret)
}

// NewQCborValue11 constructs a new QCborValue object.
func NewQCborValue11(a *QCborArray) *QCborValue {
	ret := C.QCborValue_new11(a.cPointer())
	return newQCborValue(ret)
}

// NewQCborValue12 constructs a new QCborValue object.
func NewQCborValue12(m *QCborMap) *QCborValue {
	ret := C.QCborValue_new12(m.cPointer())
	return newQCborValue(ret)
}

// NewQCborValue13 constructs a new QCborValue object.
func NewQCborValue13(dt *QDateTime) *QCborValue {
	ret := C.QCborValue_new13(dt.cPointer())
	return newQCborValue(ret)
}

// NewQCborValue14 constructs a new QCborValue object.
func NewQCborValue14(url *QUrl) *QCborValue {
	ret := C.QCborValue_new14(url.cPointer())
	return newQCborValue(ret)
}

// NewQCborValue15 constructs a new QCborValue object.
func NewQCborValue15(rx *QRegularExpression) *QCborValue {
	ret := C.QCborValue_new15(rx.cPointer())
	return newQCborValue(ret)
}

// NewQCborValue16 constructs a new QCborValue object.
func NewQCborValue16(uuid *QUuid) *QCborValue {
	ret := C.QCborValue_new16(uuid.cPointer())
	return newQCborValue(ret)
}

// NewQCborValue17 constructs a new QCborValue object.
func NewQCborValue17(other *QCborValue) *QCborValue {
	ret := C.QCborValue_new17(other.cPointer())
	return newQCborValue(ret)
}

func (this *QCborValue) OperatorAssign(other *QCborValue) {
	C.QCborValue_OperatorAssign(this.h, other.cPointer())
}

func (this *QCborValue) Swap(other *QCborValue) {
	C.QCborValue_Swap(this.h, other.cPointer())
}

func (this *QCborValue) Type() QCborValue__Type {
	_ret := C.QCborValue_Type(this.h)
	return (QCborValue__Type)(_ret)
}

func (this *QCborValue) IsInteger() bool {
	_ret := C.QCborValue_IsInteger(this.h)
	return (bool)(_ret)
}

func (this *QCborValue) IsByteArray() bool {
	_ret := C.QCborValue_IsByteArray(this.h)
	return (bool)(_ret)
}

func (this *QCborValue) IsString() bool {
	_ret := C.QCborValue_IsString(this.h)
	return (bool)(_ret)
}

func (this *QCborValue) IsArray() bool {
	_ret := C.QCborValue_IsArray(this.h)
	return (bool)(_ret)
}

func (this *QCborValue) IsMap() bool {
	_ret := C.QCborValue_IsMap(this.h)
	return (bool)(_ret)
}

func (this *QCborValue) IsTag() bool {
	_ret := C.QCborValue_IsTag(this.h)
	return (bool)(_ret)
}

func (this *QCborValue) IsFalse() bool {
	_ret := C.QCborValue_IsFalse(this.h)
	return (bool)(_ret)
}

func (this *QCborValue) IsTrue() bool {
	_ret := C.QCborValue_IsTrue(this.h)
	return (bool)(_ret)
}

func (this *QCborValue) IsBool() bool {
	_ret := C.QCborValue_IsBool(this.h)
	return (bool)(_ret)
}

func (this *QCborValue) IsNull() bool {
	_ret := C.QCborValue_IsNull(this.h)
	return (bool)(_ret)
}

func (this *QCborValue) IsUndefined() bool {
	_ret := C.QCborValue_IsUndefined(this.h)
	return (bool)(_ret)
}

func (this *QCborValue) IsDouble() bool {
	_ret := C.QCborValue_IsDouble(this.h)
	return (bool)(_ret)
}

func (this *QCborValue) IsDateTime() bool {
	_ret := C.QCborValue_IsDateTime(this.h)
	return (bool)(_ret)
}

func (this *QCborValue) IsUrl() bool {
	_ret := C.QCborValue_IsUrl(this.h)
	return (bool)(_ret)
}

func (this *QCborValue) IsRegularExpression() bool {
	_ret := C.QCborValue_IsRegularExpression(this.h)
	return (bool)(_ret)
}

func (this *QCborValue) IsUuid() bool {
	_ret := C.QCborValue_IsUuid(this.h)
	return (bool)(_ret)
}

func (this *QCborValue) IsInvalid() bool {
	_ret := C.QCborValue_IsInvalid(this.h)
	return (bool)(_ret)
}

func (this *QCborValue) IsContainer() bool {
	_ret := C.QCborValue_IsContainer(this.h)
	return (bool)(_ret)
}

func (this *QCborValue) IsSimpleType() bool {
	_ret := C.QCborValue_IsSimpleType(this.h)
	return (bool)(_ret)
}

func (this *QCborValue) ToInteger() int64 {
	_ret := C.QCborValue_ToInteger(this.h)
	return (int64)(_ret)
}

func (this *QCborValue) ToBool() bool {
	_ret := C.QCborValue_ToBool(this.h)
	return (bool)(_ret)
}

func (this *QCborValue) ToDouble() float64 {
	_ret := C.QCborValue_ToDouble(this.h)
	return (float64)(_ret)
}

func (this *QCborValue) TaggedValue() *QCborValue {
	_ret := C.QCborValue_TaggedValue(this.h)
	_goptr := newQCborValue(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValue) ToByteArray() *QByteArray {
	_ret := C.QCborValue_ToByteArray(this.h)
	_goptr := newQByteArray(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValue) ToString() string {
	var _ms *C.struct_miqt_string = C.QCborValue_ToString(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QCborValue) ToDateTime() *QDateTime {
	_ret := C.QCborValue_ToDateTime(this.h)
	_goptr := newQDateTime(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValue) ToUrl() *QUrl {
	_ret := C.QCborValue_ToUrl(this.h)
	_goptr := newQUrl(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValue) ToRegularExpression() *QRegularExpression {
	_ret := C.QCborValue_ToRegularExpression(this.h)
	_goptr := newQRegularExpression(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValue) ToUuid() *QUuid {
	_ret := C.QCborValue_ToUuid(this.h)
	_goptr := newQUuid(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValue) ToArray() *QCborArray {
	_ret := C.QCborValue_ToArray(this.h)
	_goptr := newQCborArray(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValue) ToArrayWithDefaultValue(defaultValue *QCborArray) *QCborArray {
	_ret := C.QCborValue_ToArrayWithDefaultValue(this.h, defaultValue.cPointer())
	_goptr := newQCborArray(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValue) ToMap() *QCborMap {
	_ret := C.QCborValue_ToMap(this.h)
	_goptr := newQCborMap(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValue) ToMapWithDefaultValue(defaultValue *QCborMap) *QCborMap {
	_ret := C.QCborValue_ToMapWithDefaultValue(this.h, defaultValue.cPointer())
	_goptr := newQCborMap(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValue) OperatorSubscript(key string) *QCborValue {
	key_ms := miqt_strdupg(key)
	defer C.free(key_ms)
	_ret := C.QCborValue_OperatorSubscript(this.h, (*C.struct_miqt_string)(key_ms))
	_goptr := newQCborValue(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValue) OperatorSubscript2(key int64) *QCborValue {
	_ret := C.QCborValue_OperatorSubscript2(this.h, (C.longlong)(key))
	_goptr := newQCborValue(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValue) OperatorSubscript3(key int64) *QCborValueRef {
	_ret := C.QCborValue_OperatorSubscript3(this.h, (C.longlong)(key))
	_goptr := newQCborValueRef(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValue) OperatorSubscript5(key string) *QCborValueRef {
	key_ms := miqt_strdupg(key)
	defer C.free(key_ms)
	_ret := C.QCborValue_OperatorSubscript5(this.h, (*C.struct_miqt_string)(key_ms))
	_goptr := newQCborValueRef(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValue) Compare(other *QCborValue) int {
	_ret := C.QCborValue_Compare(this.h, other.cPointer())
	return (int)(_ret)
}

func (this *QCborValue) OperatorEqual(other *QCborValue) bool {
	_ret := C.QCborValue_OperatorEqual(this.h, other.cPointer())
	return (bool)(_ret)
}

func (this *QCborValue) OperatorNotEqual(other *QCborValue) bool {
	_ret := C.QCborValue_OperatorNotEqual(this.h, other.cPointer())
	return (bool)(_ret)
}

func (this *QCborValue) OperatorLesser(other *QCborValue) bool {
	_ret := C.QCborValue_OperatorLesser(this.h, other.cPointer())
	return (bool)(_ret)
}

func QCborValue_FromVariant(variant *QVariant) *QCborValue {
	_ret := C.QCborValue_FromVariant(variant.cPointer())
	_goptr := newQCborValue(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValue) ToVariant() *QVariant {
	_ret := C.QCborValue_ToVariant(this.h)
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QCborValue_FromJsonValue(v *QJsonValue) *QCborValue {
	_ret := C.QCborValue_FromJsonValue(v.cPointer())
	_goptr := newQCborValue(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValue) ToJsonValue() *QJsonValue {
	_ret := C.QCborValue_ToJsonValue(this.h)
	_goptr := newQJsonValue(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QCborValue_FromCbor(reader *QCborStreamReader) *QCborValue {
	_ret := C.QCborValue_FromCbor(reader.cPointer())
	_goptr := newQCborValue(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QCborValue_FromCborWithBa(ba *QByteArray) *QCborValue {
	_ret := C.QCborValue_FromCborWithBa(ba.cPointer())
	_goptr := newQCborValue(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QCborValue_FromCbor2(data string, lenVal uint64) *QCborValue {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))
	_ret := C.QCborValue_FromCbor2(data_Cstring, (C.size_t)(lenVal))
	_goptr := newQCborValue(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QCborValue_FromCbor3(data *byte, lenVal uint64) *QCborValue {
	_ret := C.QCborValue_FromCbor3((*C.uchar)(unsafe.Pointer(data)), (C.size_t)(lenVal))
	_goptr := newQCborValue(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValue) ToCbor() *QByteArray {
	_ret := C.QCborValue_ToCbor(this.h)
	_goptr := newQByteArray(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValue) ToCborWithWriter(writer *QCborStreamWriter) {
	C.QCborValue_ToCborWithWriter(this.h, writer.cPointer())
}

func (this *QCborValue) ToDiagnosticNotation() string {
	var _ms *C.struct_miqt_string = C.QCborValue_ToDiagnosticNotation(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QCborValue) ToInteger1(defaultValue int64) int64 {
	_ret := C.QCborValue_ToInteger1(this.h, (C.longlong)(defaultValue))
	return (int64)(_ret)
}

func (this *QCborValue) ToBool1(defaultValue bool) bool {
	_ret := C.QCborValue_ToBool1(this.h, (C.bool)(defaultValue))
	return (bool)(_ret)
}

func (this *QCborValue) ToDouble1(defaultValue float64) float64 {
	_ret := C.QCborValue_ToDouble1(this.h, (C.double)(defaultValue))
	return (float64)(_ret)
}

func (this *QCborValue) TaggedValue1(defaultValue *QCborValue) *QCborValue {
	_ret := C.QCborValue_TaggedValue1(this.h, defaultValue.cPointer())
	_goptr := newQCborValue(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValue) ToByteArray1(defaultValue *QByteArray) *QByteArray {
	_ret := C.QCborValue_ToByteArray1(this.h, defaultValue.cPointer())
	_goptr := newQByteArray(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValue) ToString1(defaultValue string) string {
	defaultValue_ms := miqt_strdupg(defaultValue)
	defer C.free(defaultValue_ms)
	var _ms *C.struct_miqt_string = C.QCborValue_ToString1(this.h, (*C.struct_miqt_string)(defaultValue_ms))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QCborValue) ToDateTime1(defaultValue *QDateTime) *QDateTime {
	_ret := C.QCborValue_ToDateTime1(this.h, defaultValue.cPointer())
	_goptr := newQDateTime(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValue) ToUrl1(defaultValue *QUrl) *QUrl {
	_ret := C.QCborValue_ToUrl1(this.h, defaultValue.cPointer())
	_goptr := newQUrl(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValue) ToRegularExpression1(defaultValue *QRegularExpression) *QRegularExpression {
	_ret := C.QCborValue_ToRegularExpression1(this.h, defaultValue.cPointer())
	_goptr := newQRegularExpression(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValue) ToUuid1(defaultValue *QUuid) *QUuid {
	_ret := C.QCborValue_ToUuid1(this.h, defaultValue.cPointer())
	_goptr := newQUuid(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QCborValue_FromCbor22(ba *QByteArray, error *QCborParserError) *QCborValue {
	_ret := C.QCborValue_FromCbor22(ba.cPointer(), error.cPointer())
	_goptr := newQCborValue(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QCborValue_FromCbor32(data string, lenVal uint64, error *QCborParserError) *QCborValue {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))
	_ret := C.QCborValue_FromCbor32(data_Cstring, (C.size_t)(lenVal), error.cPointer())
	_goptr := newQCborValue(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QCborValue_FromCbor33(data *byte, lenVal uint64, error *QCborParserError) *QCborValue {
	_ret := C.QCborValue_FromCbor33((*C.uchar)(unsafe.Pointer(data)), (C.size_t)(lenVal), error.cPointer())
	_goptr := newQCborValue(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValue) ToCbor1(opt int) *QByteArray {
	_ret := C.QCborValue_ToCbor1(this.h, (C.int)(opt))
	_goptr := newQByteArray(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValue) ToCbor2(writer *QCborStreamWriter, opt int) {
	C.QCborValue_ToCbor2(this.h, writer.cPointer(), (C.int)(opt))
}

func (this *QCborValue) ToDiagnosticNotation1(opts int) string {
	var _ms *C.struct_miqt_string = C.QCborValue_ToDiagnosticNotation1(this.h, (C.int)(opts))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

// Delete this object from C++ memory.
func (this *QCborValue) Delete() {
	C.QCborValue_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QCborValue) GoGC() {
	runtime.SetFinalizer(this, func(this *QCborValue) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QCborValueRef struct {
	h *C.QCborValueRef
}

func (this *QCborValueRef) cPointer() *C.QCborValueRef {
	if this == nil {
		return nil
	}
	return this.h
}

func newQCborValueRef(h *C.QCborValueRef) *QCborValueRef {
	if h == nil {
		return nil
	}
	return &QCborValueRef{h: h}
}

func newQCborValueRef_U(h unsafe.Pointer) *QCborValueRef {
	return newQCborValueRef((*C.QCborValueRef)(h))
}

// NewQCborValueRef constructs a new QCborValueRef object.
func NewQCborValueRef(param1 *QCborValueRef) *QCborValueRef {
	ret := C.QCborValueRef_new(param1.cPointer())
	return newQCborValueRef(ret)
}

func (this *QCborValueRef) OperatorAssign(other *QCborValue) {
	C.QCborValueRef_OperatorAssign(this.h, other.cPointer())
}

func (this *QCborValueRef) OperatorAssignWithOther(other *QCborValueRef) {
	C.QCborValueRef_OperatorAssignWithOther(this.h, other.cPointer())
}

func (this *QCborValueRef) Type() QCborValue__Type {
	_ret := C.QCborValueRef_Type(this.h)
	return (QCborValue__Type)(_ret)
}

func (this *QCborValueRef) IsInteger() bool {
	_ret := C.QCborValueRef_IsInteger(this.h)
	return (bool)(_ret)
}

func (this *QCborValueRef) IsByteArray() bool {
	_ret := C.QCborValueRef_IsByteArray(this.h)
	return (bool)(_ret)
}

func (this *QCborValueRef) IsString() bool {
	_ret := C.QCborValueRef_IsString(this.h)
	return (bool)(_ret)
}

func (this *QCborValueRef) IsArray() bool {
	_ret := C.QCborValueRef_IsArray(this.h)
	return (bool)(_ret)
}

func (this *QCborValueRef) IsMap() bool {
	_ret := C.QCborValueRef_IsMap(this.h)
	return (bool)(_ret)
}

func (this *QCborValueRef) IsTag() bool {
	_ret := C.QCborValueRef_IsTag(this.h)
	return (bool)(_ret)
}

func (this *QCborValueRef) IsFalse() bool {
	_ret := C.QCborValueRef_IsFalse(this.h)
	return (bool)(_ret)
}

func (this *QCborValueRef) IsTrue() bool {
	_ret := C.QCborValueRef_IsTrue(this.h)
	return (bool)(_ret)
}

func (this *QCborValueRef) IsBool() bool {
	_ret := C.QCborValueRef_IsBool(this.h)
	return (bool)(_ret)
}

func (this *QCborValueRef) IsNull() bool {
	_ret := C.QCborValueRef_IsNull(this.h)
	return (bool)(_ret)
}

func (this *QCborValueRef) IsUndefined() bool {
	_ret := C.QCborValueRef_IsUndefined(this.h)
	return (bool)(_ret)
}

func (this *QCborValueRef) IsDouble() bool {
	_ret := C.QCborValueRef_IsDouble(this.h)
	return (bool)(_ret)
}

func (this *QCborValueRef) IsDateTime() bool {
	_ret := C.QCborValueRef_IsDateTime(this.h)
	return (bool)(_ret)
}

func (this *QCborValueRef) IsUrl() bool {
	_ret := C.QCborValueRef_IsUrl(this.h)
	return (bool)(_ret)
}

func (this *QCborValueRef) IsRegularExpression() bool {
	_ret := C.QCborValueRef_IsRegularExpression(this.h)
	return (bool)(_ret)
}

func (this *QCborValueRef) IsUuid() bool {
	_ret := C.QCborValueRef_IsUuid(this.h)
	return (bool)(_ret)
}

func (this *QCborValueRef) IsInvalid() bool {
	_ret := C.QCborValueRef_IsInvalid(this.h)
	return (bool)(_ret)
}

func (this *QCborValueRef) IsContainer() bool {
	_ret := C.QCborValueRef_IsContainer(this.h)
	return (bool)(_ret)
}

func (this *QCborValueRef) IsSimpleType() bool {
	_ret := C.QCborValueRef_IsSimpleType(this.h)
	return (bool)(_ret)
}

func (this *QCborValueRef) TaggedValue() *QCborValue {
	_ret := C.QCborValueRef_TaggedValue(this.h)
	_goptr := newQCborValue(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValueRef) ToInteger() int64 {
	_ret := C.QCborValueRef_ToInteger(this.h)
	return (int64)(_ret)
}

func (this *QCborValueRef) ToBool() bool {
	_ret := C.QCborValueRef_ToBool(this.h)
	return (bool)(_ret)
}

func (this *QCborValueRef) ToDouble() float64 {
	_ret := C.QCborValueRef_ToDouble(this.h)
	return (float64)(_ret)
}

func (this *QCborValueRef) ToByteArray() *QByteArray {
	_ret := C.QCborValueRef_ToByteArray(this.h)
	_goptr := newQByteArray(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValueRef) ToString() string {
	var _ms *C.struct_miqt_string = C.QCborValueRef_ToString(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QCborValueRef) ToDateTime() *QDateTime {
	_ret := C.QCborValueRef_ToDateTime(this.h)
	_goptr := newQDateTime(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValueRef) ToUrl() *QUrl {
	_ret := C.QCborValueRef_ToUrl(this.h)
	_goptr := newQUrl(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValueRef) ToRegularExpression() *QRegularExpression {
	_ret := C.QCborValueRef_ToRegularExpression(this.h)
	_goptr := newQRegularExpression(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValueRef) ToUuid() *QUuid {
	_ret := C.QCborValueRef_ToUuid(this.h)
	_goptr := newQUuid(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValueRef) ToArray() *QCborArray {
	_ret := C.QCborValueRef_ToArray(this.h)
	_goptr := newQCborArray(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValueRef) ToArrayWithQCborArray(a *QCborArray) *QCborArray {
	_ret := C.QCborValueRef_ToArrayWithQCborArray(this.h, a.cPointer())
	_goptr := newQCborArray(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValueRef) ToMap() *QCborMap {
	_ret := C.QCborValueRef_ToMap(this.h)
	_goptr := newQCborMap(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValueRef) ToMapWithQCborMap(m *QCborMap) *QCborMap {
	_ret := C.QCborValueRef_ToMapWithQCborMap(this.h, m.cPointer())
	_goptr := newQCborMap(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValueRef) OperatorSubscript(key string) *QCborValue {
	key_ms := miqt_strdupg(key)
	defer C.free(key_ms)
	_ret := C.QCborValueRef_OperatorSubscript(this.h, (*C.struct_miqt_string)(key_ms))
	_goptr := newQCborValue(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValueRef) OperatorSubscript2(key int64) *QCborValue {
	_ret := C.QCborValueRef_OperatorSubscript2(this.h, (C.longlong)(key))
	_goptr := newQCborValue(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValueRef) OperatorSubscript3(key int64) *QCborValueRef {
	_ret := C.QCborValueRef_OperatorSubscript3(this.h, (C.longlong)(key))
	_goptr := newQCborValueRef(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValueRef) OperatorSubscript5(key string) *QCborValueRef {
	key_ms := miqt_strdupg(key)
	defer C.free(key_ms)
	_ret := C.QCborValueRef_OperatorSubscript5(this.h, (*C.struct_miqt_string)(key_ms))
	_goptr := newQCborValueRef(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValueRef) Compare(other *QCborValue) int {
	_ret := C.QCborValueRef_Compare(this.h, other.cPointer())
	return (int)(_ret)
}

func (this *QCborValueRef) OperatorEqual(other *QCborValue) bool {
	_ret := C.QCborValueRef_OperatorEqual(this.h, other.cPointer())
	return (bool)(_ret)
}

func (this *QCborValueRef) OperatorNotEqual(other *QCborValue) bool {
	_ret := C.QCborValueRef_OperatorNotEqual(this.h, other.cPointer())
	return (bool)(_ret)
}

func (this *QCborValueRef) OperatorLesser(other *QCborValue) bool {
	_ret := C.QCborValueRef_OperatorLesser(this.h, other.cPointer())
	return (bool)(_ret)
}

func (this *QCborValueRef) ToVariant() *QVariant {
	_ret := C.QCborValueRef_ToVariant(this.h)
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValueRef) ToJsonValue() *QJsonValue {
	_ret := C.QCborValueRef_ToJsonValue(this.h)
	_goptr := newQJsonValue(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValueRef) ToCbor() *QByteArray {
	_ret := C.QCborValueRef_ToCbor(this.h)
	_goptr := newQByteArray(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValueRef) ToCborWithWriter(writer *QCborStreamWriter) {
	C.QCborValueRef_ToCborWithWriter(this.h, writer.cPointer())
}

func (this *QCborValueRef) ToDiagnosticNotation() string {
	var _ms *C.struct_miqt_string = C.QCborValueRef_ToDiagnosticNotation(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QCborValueRef) TaggedValue1(defaultValue *QCborValue) *QCborValue {
	_ret := C.QCborValueRef_TaggedValue1(this.h, defaultValue.cPointer())
	_goptr := newQCborValue(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValueRef) ToInteger1(defaultValue int64) int64 {
	_ret := C.QCborValueRef_ToInteger1(this.h, (C.longlong)(defaultValue))
	return (int64)(_ret)
}

func (this *QCborValueRef) ToBool1(defaultValue bool) bool {
	_ret := C.QCborValueRef_ToBool1(this.h, (C.bool)(defaultValue))
	return (bool)(_ret)
}

func (this *QCborValueRef) ToDouble1(defaultValue float64) float64 {
	_ret := C.QCborValueRef_ToDouble1(this.h, (C.double)(defaultValue))
	return (float64)(_ret)
}

func (this *QCborValueRef) ToByteArray1(defaultValue *QByteArray) *QByteArray {
	_ret := C.QCborValueRef_ToByteArray1(this.h, defaultValue.cPointer())
	_goptr := newQByteArray(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValueRef) ToString1(defaultValue string) string {
	defaultValue_ms := miqt_strdupg(defaultValue)
	defer C.free(defaultValue_ms)
	var _ms *C.struct_miqt_string = C.QCborValueRef_ToString1(this.h, (*C.struct_miqt_string)(defaultValue_ms))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QCborValueRef) ToDateTime1(defaultValue *QDateTime) *QDateTime {
	_ret := C.QCborValueRef_ToDateTime1(this.h, defaultValue.cPointer())
	_goptr := newQDateTime(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValueRef) ToUrl1(defaultValue *QUrl) *QUrl {
	_ret := C.QCborValueRef_ToUrl1(this.h, defaultValue.cPointer())
	_goptr := newQUrl(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValueRef) ToRegularExpression1(defaultValue *QRegularExpression) *QRegularExpression {
	_ret := C.QCborValueRef_ToRegularExpression1(this.h, defaultValue.cPointer())
	_goptr := newQRegularExpression(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValueRef) ToUuid1(defaultValue *QUuid) *QUuid {
	_ret := C.QCborValueRef_ToUuid1(this.h, defaultValue.cPointer())
	_goptr := newQUuid(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValueRef) ToCbor1(opt int) *QByteArray {
	_ret := C.QCborValueRef_ToCbor1(this.h, (C.int)(opt))
	_goptr := newQByteArray(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborValueRef) ToCbor2(writer *QCborStreamWriter, opt int) {
	C.QCborValueRef_ToCbor2(this.h, writer.cPointer(), (C.int)(opt))
}

func (this *QCborValueRef) ToDiagnosticNotation1(opt int) string {
	var _ms *C.struct_miqt_string = C.QCborValueRef_ToDiagnosticNotation1(this.h, (C.int)(opt))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

// Delete this object from C++ memory.
func (this *QCborValueRef) Delete() {
	C.QCborValueRef_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QCborValueRef) GoGC() {
	runtime.SetFinalizer(this, func(this *QCborValueRef) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
