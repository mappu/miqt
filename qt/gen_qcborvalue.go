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
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QCborParserError_ErrorString(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QCborParserError) Delete() {
	C.QCborParserError_Delete(this.h)
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
func NewQCborValue2(t_ uintptr) *QCborValue {
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
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	ret := C.QCborValue_new9(s_Cstring, C.ulong(len(s)))
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

func (this *QCborValue) Type() uintptr {
	ret := C.QCborValue_Type(this.h)
	return (uintptr)(ret)
}

func (this *QCborValue) IsInteger() bool {
	ret := C.QCborValue_IsInteger(this.h)
	return (bool)(ret)
}

func (this *QCborValue) IsByteArray() bool {
	ret := C.QCborValue_IsByteArray(this.h)
	return (bool)(ret)
}

func (this *QCborValue) IsString() bool {
	ret := C.QCborValue_IsString(this.h)
	return (bool)(ret)
}

func (this *QCborValue) IsArray() bool {
	ret := C.QCborValue_IsArray(this.h)
	return (bool)(ret)
}

func (this *QCborValue) IsMap() bool {
	ret := C.QCborValue_IsMap(this.h)
	return (bool)(ret)
}

func (this *QCborValue) IsTag() bool {
	ret := C.QCborValue_IsTag(this.h)
	return (bool)(ret)
}

func (this *QCborValue) IsFalse() bool {
	ret := C.QCborValue_IsFalse(this.h)
	return (bool)(ret)
}

func (this *QCborValue) IsTrue() bool {
	ret := C.QCborValue_IsTrue(this.h)
	return (bool)(ret)
}

func (this *QCborValue) IsBool() bool {
	ret := C.QCborValue_IsBool(this.h)
	return (bool)(ret)
}

func (this *QCborValue) IsNull() bool {
	ret := C.QCborValue_IsNull(this.h)
	return (bool)(ret)
}

func (this *QCborValue) IsUndefined() bool {
	ret := C.QCborValue_IsUndefined(this.h)
	return (bool)(ret)
}

func (this *QCborValue) IsDouble() bool {
	ret := C.QCborValue_IsDouble(this.h)
	return (bool)(ret)
}

func (this *QCborValue) IsDateTime() bool {
	ret := C.QCborValue_IsDateTime(this.h)
	return (bool)(ret)
}

func (this *QCborValue) IsUrl() bool {
	ret := C.QCborValue_IsUrl(this.h)
	return (bool)(ret)
}

func (this *QCborValue) IsRegularExpression() bool {
	ret := C.QCborValue_IsRegularExpression(this.h)
	return (bool)(ret)
}

func (this *QCborValue) IsUuid() bool {
	ret := C.QCborValue_IsUuid(this.h)
	return (bool)(ret)
}

func (this *QCborValue) IsInvalid() bool {
	ret := C.QCborValue_IsInvalid(this.h)
	return (bool)(ret)
}

func (this *QCborValue) IsContainer() bool {
	ret := C.QCborValue_IsContainer(this.h)
	return (bool)(ret)
}

func (this *QCborValue) IsSimpleType() bool {
	ret := C.QCborValue_IsSimpleType(this.h)
	return (bool)(ret)
}

func (this *QCborValue) ToInteger() int64 {
	ret := C.QCborValue_ToInteger(this.h)
	return (int64)(ret)
}

func (this *QCborValue) ToBool() bool {
	ret := C.QCborValue_ToBool(this.h)
	return (bool)(ret)
}

func (this *QCborValue) ToDouble() float64 {
	ret := C.QCborValue_ToDouble(this.h)
	return (float64)(ret)
}

func (this *QCborValue) TaggedValue() *QCborValue {
	ret := C.QCborValue_TaggedValue(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborValue(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborValue) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborValue) ToByteArray() *QByteArray {
	ret := C.QCborValue_ToByteArray(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborValue) ToString() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QCborValue_ToString(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QCborValue) ToDateTime() *QDateTime {
	ret := C.QCborValue_ToDateTime(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQDateTime(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QDateTime) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborValue) ToUrl() *QUrl {
	ret := C.QCborValue_ToUrl(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQUrl(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QUrl) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborValue) ToRegularExpression() *QRegularExpression {
	ret := C.QCborValue_ToRegularExpression(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRegularExpression(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRegularExpression) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborValue) ToUuid() *QUuid {
	ret := C.QCborValue_ToUuid(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQUuid(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QUuid) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborValue) ToArray() *QCborArray {
	ret := C.QCborValue_ToArray(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborValue) ToArrayWithDefaultValue(defaultValue *QCborArray) *QCborArray {
	ret := C.QCborValue_ToArrayWithDefaultValue(this.h, defaultValue.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborValue) ToMap() *QCborMap {
	ret := C.QCborValue_ToMap(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborMap(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborMap) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborValue) ToMapWithDefaultValue(defaultValue *QCborMap) *QCborMap {
	ret := C.QCborValue_ToMapWithDefaultValue(this.h, defaultValue.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborMap(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborMap) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborValue) OperatorSubscript(key string) *QCborValue {
	key_Cstring := C.CString(key)
	defer C.free(unsafe.Pointer(key_Cstring))
	ret := C.QCborValue_OperatorSubscript(this.h, key_Cstring, C.ulong(len(key)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborValue(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborValue) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborValue) OperatorSubscript2(key int64) *QCborValue {
	ret := C.QCborValue_OperatorSubscript2(this.h, (C.longlong)(key))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborValue(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborValue) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborValue) OperatorSubscript3(key int64) *QCborValueRef {
	ret := C.QCborValue_OperatorSubscript3(this.h, (C.longlong)(key))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborValueRef(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborValueRef) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborValue) OperatorSubscript5(key string) *QCborValueRef {
	key_Cstring := C.CString(key)
	defer C.free(unsafe.Pointer(key_Cstring))
	ret := C.QCborValue_OperatorSubscript5(this.h, key_Cstring, C.ulong(len(key)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborValueRef(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborValueRef) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborValue) Compare(other *QCborValue) int {
	ret := C.QCborValue_Compare(this.h, other.cPointer())
	return (int)(ret)
}

func (this *QCborValue) OperatorEqual(other *QCborValue) bool {
	ret := C.QCborValue_OperatorEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QCborValue) OperatorNotEqual(other *QCborValue) bool {
	ret := C.QCborValue_OperatorNotEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QCborValue) OperatorLesser(other *QCborValue) bool {
	ret := C.QCborValue_OperatorLesser(this.h, other.cPointer())
	return (bool)(ret)
}

func QCborValue_FromVariant(variant *QVariant) *QCborValue {
	ret := C.QCborValue_FromVariant(variant.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborValue(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborValue) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborValue) ToVariant() *QVariant {
	ret := C.QCborValue_ToVariant(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVariant(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVariant) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QCborValue_FromJsonValue(v *QJsonValue) *QCborValue {
	ret := C.QCborValue_FromJsonValue(v.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborValue(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborValue) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborValue) ToJsonValue() *QJsonValue {
	ret := C.QCborValue_ToJsonValue(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQJsonValue(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QJsonValue) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QCborValue_FromCbor(reader *QCborStreamReader) *QCborValue {
	ret := C.QCborValue_FromCbor(reader.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborValue(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborValue) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QCborValue_FromCborWithBa(ba *QByteArray) *QCborValue {
	ret := C.QCborValue_FromCborWithBa(ba.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborValue(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborValue) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QCborValue_FromCbor2(data string, lenVal uint64) *QCborValue {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))
	ret := C.QCborValue_FromCbor2(data_Cstring, (C.size_t)(lenVal))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborValue(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborValue) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QCborValue_FromCbor3(data *byte, lenVal uint64) *QCborValue {
	ret := C.QCborValue_FromCbor3((*C.uchar)(unsafe.Pointer(data)), (C.size_t)(lenVal))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborValue(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborValue) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborValue) ToCbor() *QByteArray {
	ret := C.QCborValue_ToCbor(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborValue) ToCborWithWriter(writer *QCborStreamWriter) {
	C.QCborValue_ToCborWithWriter(this.h, writer.cPointer())
}

func (this *QCborValue) ToDiagnosticNotation() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QCborValue_ToDiagnosticNotation(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QCborValue) ToInteger1(defaultValue int64) int64 {
	ret := C.QCborValue_ToInteger1(this.h, (C.longlong)(defaultValue))
	return (int64)(ret)
}

func (this *QCborValue) ToBool1(defaultValue bool) bool {
	ret := C.QCborValue_ToBool1(this.h, (C.bool)(defaultValue))
	return (bool)(ret)
}

func (this *QCborValue) ToDouble1(defaultValue float64) float64 {
	ret := C.QCborValue_ToDouble1(this.h, (C.double)(defaultValue))
	return (float64)(ret)
}

func (this *QCborValue) TaggedValue1(defaultValue *QCborValue) *QCborValue {
	ret := C.QCborValue_TaggedValue1(this.h, defaultValue.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborValue(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborValue) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborValue) ToByteArray1(defaultValue *QByteArray) *QByteArray {
	ret := C.QCborValue_ToByteArray1(this.h, defaultValue.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborValue) ToString1(defaultValue string) string {
	defaultValue_Cstring := C.CString(defaultValue)
	defer C.free(unsafe.Pointer(defaultValue_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QCborValue_ToString1(this.h, defaultValue_Cstring, C.ulong(len(defaultValue)), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QCborValue) ToDateTime1(defaultValue *QDateTime) *QDateTime {
	ret := C.QCborValue_ToDateTime1(this.h, defaultValue.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQDateTime(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QDateTime) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborValue) ToUrl1(defaultValue *QUrl) *QUrl {
	ret := C.QCborValue_ToUrl1(this.h, defaultValue.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQUrl(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QUrl) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborValue) ToRegularExpression1(defaultValue *QRegularExpression) *QRegularExpression {
	ret := C.QCborValue_ToRegularExpression1(this.h, defaultValue.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRegularExpression(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRegularExpression) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborValue) ToUuid1(defaultValue *QUuid) *QUuid {
	ret := C.QCborValue_ToUuid1(this.h, defaultValue.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQUuid(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QUuid) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QCborValue_FromCbor22(ba *QByteArray, error *QCborParserError) *QCborValue {
	ret := C.QCborValue_FromCbor22(ba.cPointer(), error.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborValue(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborValue) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QCborValue_FromCbor32(data string, lenVal uint64, error *QCborParserError) *QCborValue {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))
	ret := C.QCborValue_FromCbor32(data_Cstring, (C.size_t)(lenVal), error.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborValue(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborValue) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QCborValue_FromCbor33(data *byte, lenVal uint64, error *QCborParserError) *QCborValue {
	ret := C.QCborValue_FromCbor33((*C.uchar)(unsafe.Pointer(data)), (C.size_t)(lenVal), error.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborValue(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborValue) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborValue) ToCbor1(opt int) *QByteArray {
	ret := C.QCborValue_ToCbor1(this.h, (C.int)(opt))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborValue) ToCbor2(writer *QCborStreamWriter, opt int) {
	C.QCborValue_ToCbor2(this.h, writer.cPointer(), (C.int)(opt))
}

func (this *QCborValue) ToDiagnosticNotation1(opts int) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QCborValue_ToDiagnosticNotation1(this.h, (C.int)(opts), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QCborValue) Delete() {
	C.QCborValue_Delete(this.h)
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

func (this *QCborValueRef) Type() uintptr {
	ret := C.QCborValueRef_Type(this.h)
	return (uintptr)(ret)
}

func (this *QCborValueRef) IsInteger() bool {
	ret := C.QCborValueRef_IsInteger(this.h)
	return (bool)(ret)
}

func (this *QCborValueRef) IsByteArray() bool {
	ret := C.QCborValueRef_IsByteArray(this.h)
	return (bool)(ret)
}

func (this *QCborValueRef) IsString() bool {
	ret := C.QCborValueRef_IsString(this.h)
	return (bool)(ret)
}

func (this *QCborValueRef) IsArray() bool {
	ret := C.QCborValueRef_IsArray(this.h)
	return (bool)(ret)
}

func (this *QCborValueRef) IsMap() bool {
	ret := C.QCborValueRef_IsMap(this.h)
	return (bool)(ret)
}

func (this *QCborValueRef) IsTag() bool {
	ret := C.QCborValueRef_IsTag(this.h)
	return (bool)(ret)
}

func (this *QCborValueRef) IsFalse() bool {
	ret := C.QCborValueRef_IsFalse(this.h)
	return (bool)(ret)
}

func (this *QCborValueRef) IsTrue() bool {
	ret := C.QCborValueRef_IsTrue(this.h)
	return (bool)(ret)
}

func (this *QCborValueRef) IsBool() bool {
	ret := C.QCborValueRef_IsBool(this.h)
	return (bool)(ret)
}

func (this *QCborValueRef) IsNull() bool {
	ret := C.QCborValueRef_IsNull(this.h)
	return (bool)(ret)
}

func (this *QCborValueRef) IsUndefined() bool {
	ret := C.QCborValueRef_IsUndefined(this.h)
	return (bool)(ret)
}

func (this *QCborValueRef) IsDouble() bool {
	ret := C.QCborValueRef_IsDouble(this.h)
	return (bool)(ret)
}

func (this *QCborValueRef) IsDateTime() bool {
	ret := C.QCborValueRef_IsDateTime(this.h)
	return (bool)(ret)
}

func (this *QCborValueRef) IsUrl() bool {
	ret := C.QCborValueRef_IsUrl(this.h)
	return (bool)(ret)
}

func (this *QCborValueRef) IsRegularExpression() bool {
	ret := C.QCborValueRef_IsRegularExpression(this.h)
	return (bool)(ret)
}

func (this *QCborValueRef) IsUuid() bool {
	ret := C.QCborValueRef_IsUuid(this.h)
	return (bool)(ret)
}

func (this *QCborValueRef) IsInvalid() bool {
	ret := C.QCborValueRef_IsInvalid(this.h)
	return (bool)(ret)
}

func (this *QCborValueRef) IsContainer() bool {
	ret := C.QCborValueRef_IsContainer(this.h)
	return (bool)(ret)
}

func (this *QCborValueRef) IsSimpleType() bool {
	ret := C.QCborValueRef_IsSimpleType(this.h)
	return (bool)(ret)
}

func (this *QCborValueRef) TaggedValue() *QCborValue {
	ret := C.QCborValueRef_TaggedValue(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborValue(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborValue) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborValueRef) ToInteger() int64 {
	ret := C.QCborValueRef_ToInteger(this.h)
	return (int64)(ret)
}

func (this *QCborValueRef) ToBool() bool {
	ret := C.QCborValueRef_ToBool(this.h)
	return (bool)(ret)
}

func (this *QCborValueRef) ToDouble() float64 {
	ret := C.QCborValueRef_ToDouble(this.h)
	return (float64)(ret)
}

func (this *QCborValueRef) ToByteArray() *QByteArray {
	ret := C.QCborValueRef_ToByteArray(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborValueRef) ToString() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QCborValueRef_ToString(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QCborValueRef) ToDateTime() *QDateTime {
	ret := C.QCborValueRef_ToDateTime(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQDateTime(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QDateTime) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborValueRef) ToUrl() *QUrl {
	ret := C.QCborValueRef_ToUrl(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQUrl(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QUrl) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborValueRef) ToRegularExpression() *QRegularExpression {
	ret := C.QCborValueRef_ToRegularExpression(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRegularExpression(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRegularExpression) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborValueRef) ToUuid() *QUuid {
	ret := C.QCborValueRef_ToUuid(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQUuid(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QUuid) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborValueRef) ToArray() *QCborArray {
	ret := C.QCborValueRef_ToArray(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborValueRef) ToArrayWithQCborArray(a *QCborArray) *QCborArray {
	ret := C.QCborValueRef_ToArrayWithQCborArray(this.h, a.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborValueRef) ToMap() *QCborMap {
	ret := C.QCborValueRef_ToMap(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborMap(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborMap) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborValueRef) ToMapWithQCborMap(m *QCborMap) *QCborMap {
	ret := C.QCborValueRef_ToMapWithQCborMap(this.h, m.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborMap(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborMap) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborValueRef) OperatorSubscript(key string) *QCborValue {
	key_Cstring := C.CString(key)
	defer C.free(unsafe.Pointer(key_Cstring))
	ret := C.QCborValueRef_OperatorSubscript(this.h, key_Cstring, C.ulong(len(key)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborValue(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborValue) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborValueRef) OperatorSubscript2(key int64) *QCborValue {
	ret := C.QCborValueRef_OperatorSubscript2(this.h, (C.longlong)(key))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborValue(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborValue) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborValueRef) OperatorSubscript3(key int64) *QCborValueRef {
	ret := C.QCborValueRef_OperatorSubscript3(this.h, (C.longlong)(key))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborValueRef(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborValueRef) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborValueRef) OperatorSubscript5(key string) *QCborValueRef {
	key_Cstring := C.CString(key)
	defer C.free(unsafe.Pointer(key_Cstring))
	ret := C.QCborValueRef_OperatorSubscript5(this.h, key_Cstring, C.ulong(len(key)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborValueRef(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborValueRef) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborValueRef) Compare(other *QCborValue) int {
	ret := C.QCborValueRef_Compare(this.h, other.cPointer())
	return (int)(ret)
}

func (this *QCborValueRef) OperatorEqual(other *QCborValue) bool {
	ret := C.QCborValueRef_OperatorEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QCborValueRef) OperatorNotEqual(other *QCborValue) bool {
	ret := C.QCborValueRef_OperatorNotEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QCborValueRef) OperatorLesser(other *QCborValue) bool {
	ret := C.QCborValueRef_OperatorLesser(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QCborValueRef) ToVariant() *QVariant {
	ret := C.QCborValueRef_ToVariant(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVariant(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVariant) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborValueRef) ToJsonValue() *QJsonValue {
	ret := C.QCborValueRef_ToJsonValue(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQJsonValue(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QJsonValue) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborValueRef) ToCbor() *QByteArray {
	ret := C.QCborValueRef_ToCbor(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborValueRef) ToCborWithWriter(writer *QCborStreamWriter) {
	C.QCborValueRef_ToCborWithWriter(this.h, writer.cPointer())
}

func (this *QCborValueRef) ToDiagnosticNotation() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QCborValueRef_ToDiagnosticNotation(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QCborValueRef) TaggedValue1(defaultValue *QCborValue) *QCborValue {
	ret := C.QCborValueRef_TaggedValue1(this.h, defaultValue.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborValue(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborValue) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborValueRef) ToInteger1(defaultValue int64) int64 {
	ret := C.QCborValueRef_ToInteger1(this.h, (C.longlong)(defaultValue))
	return (int64)(ret)
}

func (this *QCborValueRef) ToBool1(defaultValue bool) bool {
	ret := C.QCborValueRef_ToBool1(this.h, (C.bool)(defaultValue))
	return (bool)(ret)
}

func (this *QCborValueRef) ToDouble1(defaultValue float64) float64 {
	ret := C.QCborValueRef_ToDouble1(this.h, (C.double)(defaultValue))
	return (float64)(ret)
}

func (this *QCborValueRef) ToByteArray1(defaultValue *QByteArray) *QByteArray {
	ret := C.QCborValueRef_ToByteArray1(this.h, defaultValue.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborValueRef) ToString1(defaultValue string) string {
	defaultValue_Cstring := C.CString(defaultValue)
	defer C.free(unsafe.Pointer(defaultValue_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QCborValueRef_ToString1(this.h, defaultValue_Cstring, C.ulong(len(defaultValue)), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QCborValueRef) ToDateTime1(defaultValue *QDateTime) *QDateTime {
	ret := C.QCborValueRef_ToDateTime1(this.h, defaultValue.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQDateTime(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QDateTime) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborValueRef) ToUrl1(defaultValue *QUrl) *QUrl {
	ret := C.QCborValueRef_ToUrl1(this.h, defaultValue.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQUrl(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QUrl) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborValueRef) ToRegularExpression1(defaultValue *QRegularExpression) *QRegularExpression {
	ret := C.QCborValueRef_ToRegularExpression1(this.h, defaultValue.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRegularExpression(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRegularExpression) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborValueRef) ToUuid1(defaultValue *QUuid) *QUuid {
	ret := C.QCborValueRef_ToUuid1(this.h, defaultValue.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQUuid(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QUuid) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborValueRef) ToCbor1(opt int) *QByteArray {
	ret := C.QCborValueRef_ToCbor1(this.h, (C.int)(opt))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborValueRef) ToCbor2(writer *QCborStreamWriter, opt int) {
	C.QCborValueRef_ToCbor2(this.h, writer.cPointer(), (C.int)(opt))
}

func (this *QCborValueRef) ToDiagnosticNotation1(opt int) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QCborValueRef_ToDiagnosticNotation1(this.h, (C.int)(opt), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QCborValueRef) Delete() {
	C.QCborValueRef_Delete(this.h)
}
