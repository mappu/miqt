package qt6

/*

#include "gen_qjsonvalue.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QJsonValue__Type int

const (
	QJsonValue__Null      QJsonValue__Type = 0
	QJsonValue__Bool      QJsonValue__Type = 1
	QJsonValue__Double    QJsonValue__Type = 2
	QJsonValue__String    QJsonValue__Type = 3
	QJsonValue__Array     QJsonValue__Type = 4
	QJsonValue__Object    QJsonValue__Type = 5
	QJsonValue__Undefined QJsonValue__Type = 128
)

type QJsonValue struct {
	h          *C.QJsonValue
	isSubclass bool
}

func (this *QJsonValue) cPointer() *C.QJsonValue {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QJsonValue) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQJsonValue constructs the type using only CGO pointers.
func newQJsonValue(h *C.QJsonValue) *QJsonValue {
	if h == nil {
		return nil
	}
	return &QJsonValue{h: h}
}

// UnsafeNewQJsonValue constructs the type using only unsafe pointers.
func UnsafeNewQJsonValue(h unsafe.Pointer) *QJsonValue {
	if h == nil {
		return nil
	}

	return &QJsonValue{h: (*C.QJsonValue)(h)}
}

// NewQJsonValue constructs a new QJsonValue object.
func NewQJsonValue() *QJsonValue {
	var outptr_QJsonValue *C.QJsonValue = nil

	C.QJsonValue_new(&outptr_QJsonValue)
	ret := newQJsonValue(outptr_QJsonValue)
	ret.isSubclass = true
	return ret
}

// NewQJsonValue2 constructs a new QJsonValue object.
func NewQJsonValue2(b bool) *QJsonValue {
	var outptr_QJsonValue *C.QJsonValue = nil

	C.QJsonValue_new2((C.bool)(b), &outptr_QJsonValue)
	ret := newQJsonValue(outptr_QJsonValue)
	ret.isSubclass = true
	return ret
}

// NewQJsonValue3 constructs a new QJsonValue object.
func NewQJsonValue3(n float64) *QJsonValue {
	var outptr_QJsonValue *C.QJsonValue = nil

	C.QJsonValue_new3((C.double)(n), &outptr_QJsonValue)
	ret := newQJsonValue(outptr_QJsonValue)
	ret.isSubclass = true
	return ret
}

// NewQJsonValue4 constructs a new QJsonValue object.
func NewQJsonValue4(n int) *QJsonValue {
	var outptr_QJsonValue *C.QJsonValue = nil

	C.QJsonValue_new4((C.int)(n), &outptr_QJsonValue)
	ret := newQJsonValue(outptr_QJsonValue)
	ret.isSubclass = true
	return ret
}

// NewQJsonValue5 constructs a new QJsonValue object.
func NewQJsonValue5(v int64) *QJsonValue {
	var outptr_QJsonValue *C.QJsonValue = nil

	C.QJsonValue_new5((C.longlong)(v), &outptr_QJsonValue)
	ret := newQJsonValue(outptr_QJsonValue)
	ret.isSubclass = true
	return ret
}

// NewQJsonValue6 constructs a new QJsonValue object.
func NewQJsonValue6(s string) *QJsonValue {
	s_ms := C.struct_miqt_string{}
	s_ms.data = C.CString(s)
	s_ms.len = C.size_t(len(s))
	defer C.free(unsafe.Pointer(s_ms.data))
	var outptr_QJsonValue *C.QJsonValue = nil

	C.QJsonValue_new6(s_ms, &outptr_QJsonValue)
	ret := newQJsonValue(outptr_QJsonValue)
	ret.isSubclass = true
	return ret
}

// NewQJsonValue7 constructs a new QJsonValue object.
func NewQJsonValue7(s string) *QJsonValue {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var outptr_QJsonValue *C.QJsonValue = nil

	C.QJsonValue_new7(s_Cstring, &outptr_QJsonValue)
	ret := newQJsonValue(outptr_QJsonValue)
	ret.isSubclass = true
	return ret
}

// NewQJsonValue8 constructs a new QJsonValue object.
func NewQJsonValue8(a *QJsonArray) *QJsonValue {
	var outptr_QJsonValue *C.QJsonValue = nil

	C.QJsonValue_new8(a.cPointer(), &outptr_QJsonValue)
	ret := newQJsonValue(outptr_QJsonValue)
	ret.isSubclass = true
	return ret
}

// NewQJsonValue9 constructs a new QJsonValue object.
func NewQJsonValue9(o *QJsonObject) *QJsonValue {
	var outptr_QJsonValue *C.QJsonValue = nil

	C.QJsonValue_new9(o.cPointer(), &outptr_QJsonValue)
	ret := newQJsonValue(outptr_QJsonValue)
	ret.isSubclass = true
	return ret
}

// NewQJsonValue10 constructs a new QJsonValue object.
func NewQJsonValue10(other *QJsonValue) *QJsonValue {
	var outptr_QJsonValue *C.QJsonValue = nil

	C.QJsonValue_new10(other.cPointer(), &outptr_QJsonValue)
	ret := newQJsonValue(outptr_QJsonValue)
	ret.isSubclass = true
	return ret
}

// NewQJsonValue11 constructs a new QJsonValue object.
func NewQJsonValue11(param1 QJsonValue__Type) *QJsonValue {
	var outptr_QJsonValue *C.QJsonValue = nil

	C.QJsonValue_new11((C.int)(param1), &outptr_QJsonValue)
	ret := newQJsonValue(outptr_QJsonValue)
	ret.isSubclass = true
	return ret
}

func (this *QJsonValue) OperatorAssign(other *QJsonValue) {
	C.QJsonValue_OperatorAssign(this.h, other.cPointer())
}

func (this *QJsonValue) Swap(other *QJsonValue) {
	C.QJsonValue_Swap(this.h, other.cPointer())
}

func QJsonValue_FromVariant(variant *QVariant) *QJsonValue {
	_goptr := newQJsonValue(C.QJsonValue_FromVariant(variant.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonValue) ToVariant() *QVariant {
	_goptr := newQVariant(C.QJsonValue_ToVariant(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonValue) Type() QJsonValue__Type {
	return (QJsonValue__Type)(C.QJsonValue_Type(this.h))
}

func (this *QJsonValue) IsNull() bool {
	return (bool)(C.QJsonValue_IsNull(this.h))
}

func (this *QJsonValue) IsBool() bool {
	return (bool)(C.QJsonValue_IsBool(this.h))
}

func (this *QJsonValue) IsDouble() bool {
	return (bool)(C.QJsonValue_IsDouble(this.h))
}

func (this *QJsonValue) IsString() bool {
	return (bool)(C.QJsonValue_IsString(this.h))
}

func (this *QJsonValue) IsArray() bool {
	return (bool)(C.QJsonValue_IsArray(this.h))
}

func (this *QJsonValue) IsObject() bool {
	return (bool)(C.QJsonValue_IsObject(this.h))
}

func (this *QJsonValue) IsUndefined() bool {
	return (bool)(C.QJsonValue_IsUndefined(this.h))
}

func (this *QJsonValue) ToBool() bool {
	return (bool)(C.QJsonValue_ToBool(this.h))
}

func (this *QJsonValue) ToInt() int {
	return (int)(C.QJsonValue_ToInt(this.h))
}

func (this *QJsonValue) ToInteger() int64 {
	return (int64)(C.QJsonValue_ToInteger(this.h))
}

func (this *QJsonValue) ToDouble() float64 {
	return (float64)(C.QJsonValue_ToDouble(this.h))
}

func (this *QJsonValue) ToString() string {
	var _ms C.struct_miqt_string = C.QJsonValue_ToString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QJsonValue) ToStringWithDefaultValue(defaultValue string) string {
	defaultValue_ms := C.struct_miqt_string{}
	defaultValue_ms.data = C.CString(defaultValue)
	defaultValue_ms.len = C.size_t(len(defaultValue))
	defer C.free(unsafe.Pointer(defaultValue_ms.data))
	var _ms C.struct_miqt_string = C.QJsonValue_ToStringWithDefaultValue(this.h, defaultValue_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QJsonValue) ToArray() *QJsonArray {
	_goptr := newQJsonArray(C.QJsonValue_ToArray(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonValue) ToArrayWithDefaultValue(defaultValue *QJsonArray) *QJsonArray {
	_goptr := newQJsonArray(C.QJsonValue_ToArrayWithDefaultValue(this.h, defaultValue.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonValue) ToObject() *QJsonObject {
	_goptr := newQJsonObject(C.QJsonValue_ToObject(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonValue) ToObjectWithDefaultValue(defaultValue *QJsonObject) *QJsonObject {
	_goptr := newQJsonObject(C.QJsonValue_ToObjectWithDefaultValue(this.h, defaultValue.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonValue) OperatorSubscript(key string) *QJsonValue {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	_goptr := newQJsonValue(C.QJsonValue_OperatorSubscript(this.h, key_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonValue) OperatorSubscriptWithQsizetype(i int64) *QJsonValue {
	_goptr := newQJsonValue(C.QJsonValue_OperatorSubscriptWithQsizetype(this.h, (C.ptrdiff_t)(i)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonValue) OperatorEqual(other *QJsonValue) bool {
	return (bool)(C.QJsonValue_OperatorEqual(this.h, other.cPointer()))
}

func (this *QJsonValue) OperatorNotEqual(other *QJsonValue) bool {
	return (bool)(C.QJsonValue_OperatorNotEqual(this.h, other.cPointer()))
}

func (this *QJsonValue) ToBool1(defaultValue bool) bool {
	return (bool)(C.QJsonValue_ToBool1(this.h, (C.bool)(defaultValue)))
}

func (this *QJsonValue) ToInt1(defaultValue int) int {
	return (int)(C.QJsonValue_ToInt1(this.h, (C.int)(defaultValue)))
}

func (this *QJsonValue) ToInteger1(defaultValue int64) int64 {
	return (int64)(C.QJsonValue_ToInteger1(this.h, (C.longlong)(defaultValue)))
}

func (this *QJsonValue) ToDouble1(defaultValue float64) float64 {
	return (float64)(C.QJsonValue_ToDouble1(this.h, (C.double)(defaultValue)))
}

// Delete this object from C++ memory.
func (this *QJsonValue) Delete() {
	C.QJsonValue_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QJsonValue) GoGC() {
	runtime.SetFinalizer(this, func(this *QJsonValue) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QJsonValueConstRef struct {
	h          *C.QJsonValueConstRef
	isSubclass bool
}

func (this *QJsonValueConstRef) cPointer() *C.QJsonValueConstRef {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QJsonValueConstRef) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQJsonValueConstRef constructs the type using only CGO pointers.
func newQJsonValueConstRef(h *C.QJsonValueConstRef) *QJsonValueConstRef {
	if h == nil {
		return nil
	}
	return &QJsonValueConstRef{h: h}
}

// UnsafeNewQJsonValueConstRef constructs the type using only unsafe pointers.
func UnsafeNewQJsonValueConstRef(h unsafe.Pointer) *QJsonValueConstRef {
	if h == nil {
		return nil
	}

	return &QJsonValueConstRef{h: (*C.QJsonValueConstRef)(h)}
}

// NewQJsonValueConstRef constructs a new QJsonValueConstRef object.
func NewQJsonValueConstRef(param1 *QJsonValueConstRef) *QJsonValueConstRef {
	var outptr_QJsonValueConstRef *C.QJsonValueConstRef = nil

	C.QJsonValueConstRef_new(param1.cPointer(), &outptr_QJsonValueConstRef)
	ret := newQJsonValueConstRef(outptr_QJsonValueConstRef)
	ret.isSubclass = true
	return ret
}

func (this *QJsonValueConstRef) ToVariant() *QVariant {
	_goptr := newQVariant(C.QJsonValueConstRef_ToVariant(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonValueConstRef) Type() QJsonValue__Type {
	return (QJsonValue__Type)(C.QJsonValueConstRef_Type(this.h))
}

func (this *QJsonValueConstRef) IsNull() bool {
	return (bool)(C.QJsonValueConstRef_IsNull(this.h))
}

func (this *QJsonValueConstRef) IsBool() bool {
	return (bool)(C.QJsonValueConstRef_IsBool(this.h))
}

func (this *QJsonValueConstRef) IsDouble() bool {
	return (bool)(C.QJsonValueConstRef_IsDouble(this.h))
}

func (this *QJsonValueConstRef) IsString() bool {
	return (bool)(C.QJsonValueConstRef_IsString(this.h))
}

func (this *QJsonValueConstRef) IsArray() bool {
	return (bool)(C.QJsonValueConstRef_IsArray(this.h))
}

func (this *QJsonValueConstRef) IsObject() bool {
	return (bool)(C.QJsonValueConstRef_IsObject(this.h))
}

func (this *QJsonValueConstRef) IsUndefined() bool {
	return (bool)(C.QJsonValueConstRef_IsUndefined(this.h))
}

func (this *QJsonValueConstRef) ToBool() bool {
	return (bool)(C.QJsonValueConstRef_ToBool(this.h))
}

func (this *QJsonValueConstRef) ToInt() int {
	return (int)(C.QJsonValueConstRef_ToInt(this.h))
}

func (this *QJsonValueConstRef) ToInteger() int64 {
	return (int64)(C.QJsonValueConstRef_ToInteger(this.h))
}

func (this *QJsonValueConstRef) ToDouble() float64 {
	return (float64)(C.QJsonValueConstRef_ToDouble(this.h))
}

func (this *QJsonValueConstRef) ToString() string {
	var _ms C.struct_miqt_string = C.QJsonValueConstRef_ToString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QJsonValueConstRef) ToArray() *QJsonArray {
	_goptr := newQJsonArray(C.QJsonValueConstRef_ToArray(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonValueConstRef) ToObject() *QJsonObject {
	_goptr := newQJsonObject(C.QJsonValueConstRef_ToObject(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonValueConstRef) OperatorSubscriptWithQsizetype(i int64) *QJsonValue {
	_goptr := newQJsonValue(C.QJsonValueConstRef_OperatorSubscriptWithQsizetype(this.h, (C.ptrdiff_t)(i)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonValueConstRef) OperatorEqual(other *QJsonValue) bool {
	return (bool)(C.QJsonValueConstRef_OperatorEqual(this.h, other.cPointer()))
}

func (this *QJsonValueConstRef) OperatorNotEqual(other *QJsonValue) bool {
	return (bool)(C.QJsonValueConstRef_OperatorNotEqual(this.h, other.cPointer()))
}

func (this *QJsonValueConstRef) ToBool1(defaultValue bool) bool {
	return (bool)(C.QJsonValueConstRef_ToBool1(this.h, (C.bool)(defaultValue)))
}

func (this *QJsonValueConstRef) ToInt1(defaultValue int) int {
	return (int)(C.QJsonValueConstRef_ToInt1(this.h, (C.int)(defaultValue)))
}

func (this *QJsonValueConstRef) ToInteger1(defaultValue int64) int64 {
	return (int64)(C.QJsonValueConstRef_ToInteger1(this.h, (C.longlong)(defaultValue)))
}

func (this *QJsonValueConstRef) ToDouble1(defaultValue float64) float64 {
	return (float64)(C.QJsonValueConstRef_ToDouble1(this.h, (C.double)(defaultValue)))
}

func (this *QJsonValueConstRef) ToString1(defaultValue string) string {
	defaultValue_ms := C.struct_miqt_string{}
	defaultValue_ms.data = C.CString(defaultValue)
	defaultValue_ms.len = C.size_t(len(defaultValue))
	defer C.free(unsafe.Pointer(defaultValue_ms.data))
	var _ms C.struct_miqt_string = C.QJsonValueConstRef_ToString1(this.h, defaultValue_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QJsonValueConstRef) Delete() {
	C.QJsonValueConstRef_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QJsonValueConstRef) GoGC() {
	runtime.SetFinalizer(this, func(this *QJsonValueConstRef) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QJsonValueRef struct {
	h          *C.QJsonValueRef
	isSubclass bool
	*QJsonValueConstRef
}

func (this *QJsonValueRef) cPointer() *C.QJsonValueRef {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QJsonValueRef) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQJsonValueRef constructs the type using only CGO pointers.
func newQJsonValueRef(h *C.QJsonValueRef, h_QJsonValueConstRef *C.QJsonValueConstRef) *QJsonValueRef {
	if h == nil {
		return nil
	}
	return &QJsonValueRef{h: h,
		QJsonValueConstRef: newQJsonValueConstRef(h_QJsonValueConstRef)}
}

// UnsafeNewQJsonValueRef constructs the type using only unsafe pointers.
func UnsafeNewQJsonValueRef(h unsafe.Pointer, h_QJsonValueConstRef unsafe.Pointer) *QJsonValueRef {
	if h == nil {
		return nil
	}

	return &QJsonValueRef{h: (*C.QJsonValueRef)(h),
		QJsonValueConstRef: UnsafeNewQJsonValueConstRef(h_QJsonValueConstRef)}
}

// NewQJsonValueRef constructs a new QJsonValueRef object.
func NewQJsonValueRef(param1 *QJsonValueRef) *QJsonValueRef {
	var outptr_QJsonValueRef *C.QJsonValueRef = nil
	var outptr_QJsonValueConstRef *C.QJsonValueConstRef = nil

	C.QJsonValueRef_new(param1.cPointer(), &outptr_QJsonValueRef, &outptr_QJsonValueConstRef)
	ret := newQJsonValueRef(outptr_QJsonValueRef, outptr_QJsonValueConstRef)
	ret.isSubclass = true
	return ret
}

// NewQJsonValueRef2 constructs a new QJsonValueRef object.
func NewQJsonValueRef2(array *QJsonArray, idx int64) *QJsonValueRef {
	var outptr_QJsonValueRef *C.QJsonValueRef = nil
	var outptr_QJsonValueConstRef *C.QJsonValueConstRef = nil

	C.QJsonValueRef_new2(array.cPointer(), (C.ptrdiff_t)(idx), &outptr_QJsonValueRef, &outptr_QJsonValueConstRef)
	ret := newQJsonValueRef(outptr_QJsonValueRef, outptr_QJsonValueConstRef)
	ret.isSubclass = true
	return ret
}

// NewQJsonValueRef3 constructs a new QJsonValueRef object.
func NewQJsonValueRef3(object *QJsonObject, idx int64) *QJsonValueRef {
	var outptr_QJsonValueRef *C.QJsonValueRef = nil
	var outptr_QJsonValueConstRef *C.QJsonValueConstRef = nil

	C.QJsonValueRef_new3(object.cPointer(), (C.ptrdiff_t)(idx), &outptr_QJsonValueRef, &outptr_QJsonValueConstRef)
	ret := newQJsonValueRef(outptr_QJsonValueRef, outptr_QJsonValueConstRef)
	ret.isSubclass = true
	return ret
}

func (this *QJsonValueRef) OperatorAssign(val *QJsonValue) {
	C.QJsonValueRef_OperatorAssign(this.h, val.cPointer())
}

func (this *QJsonValueRef) OperatorAssignWithVal(val *QJsonValueRef) {
	C.QJsonValueRef_OperatorAssignWithVal(this.h, val.cPointer())
}

func (this *QJsonValueRef) ToVariant() *QVariant {
	_goptr := newQVariant(C.QJsonValueRef_ToVariant(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonValueRef) Type() QJsonValue__Type {
	return (QJsonValue__Type)(C.QJsonValueRef_Type(this.h))
}

func (this *QJsonValueRef) IsNull() bool {
	return (bool)(C.QJsonValueRef_IsNull(this.h))
}

func (this *QJsonValueRef) IsBool() bool {
	return (bool)(C.QJsonValueRef_IsBool(this.h))
}

func (this *QJsonValueRef) IsDouble() bool {
	return (bool)(C.QJsonValueRef_IsDouble(this.h))
}

func (this *QJsonValueRef) IsString() bool {
	return (bool)(C.QJsonValueRef_IsString(this.h))
}

func (this *QJsonValueRef) IsArray() bool {
	return (bool)(C.QJsonValueRef_IsArray(this.h))
}

func (this *QJsonValueRef) IsObject() bool {
	return (bool)(C.QJsonValueRef_IsObject(this.h))
}

func (this *QJsonValueRef) IsUndefined() bool {
	return (bool)(C.QJsonValueRef_IsUndefined(this.h))
}

func (this *QJsonValueRef) ToBool() bool {
	return (bool)(C.QJsonValueRef_ToBool(this.h))
}

func (this *QJsonValueRef) ToInt() int {
	return (int)(C.QJsonValueRef_ToInt(this.h))
}

func (this *QJsonValueRef) ToInteger() int64 {
	return (int64)(C.QJsonValueRef_ToInteger(this.h))
}

func (this *QJsonValueRef) ToDouble() float64 {
	return (float64)(C.QJsonValueRef_ToDouble(this.h))
}

func (this *QJsonValueRef) ToString() string {
	var _ms C.struct_miqt_string = C.QJsonValueRef_ToString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QJsonValueRef) ToArray() *QJsonArray {
	_goptr := newQJsonArray(C.QJsonValueRef_ToArray(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonValueRef) ToObject() *QJsonObject {
	_goptr := newQJsonObject(C.QJsonValueRef_ToObject(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonValueRef) OperatorSubscriptWithQsizetype(i int64) *QJsonValue {
	_goptr := newQJsonValue(C.QJsonValueRef_OperatorSubscriptWithQsizetype(this.h, (C.ptrdiff_t)(i)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonValueRef) OperatorEqual(other *QJsonValue) bool {
	return (bool)(C.QJsonValueRef_OperatorEqual(this.h, other.cPointer()))
}

func (this *QJsonValueRef) OperatorNotEqual(other *QJsonValue) bool {
	return (bool)(C.QJsonValueRef_OperatorNotEqual(this.h, other.cPointer()))
}

func (this *QJsonValueRef) ToBool1(defaultValue bool) bool {
	return (bool)(C.QJsonValueRef_ToBool1(this.h, (C.bool)(defaultValue)))
}

func (this *QJsonValueRef) ToInt1(defaultValue int) int {
	return (int)(C.QJsonValueRef_ToInt1(this.h, (C.int)(defaultValue)))
}

func (this *QJsonValueRef) ToInteger1(defaultValue int64) int64 {
	return (int64)(C.QJsonValueRef_ToInteger1(this.h, (C.longlong)(defaultValue)))
}

func (this *QJsonValueRef) ToDouble1(defaultValue float64) float64 {
	return (float64)(C.QJsonValueRef_ToDouble1(this.h, (C.double)(defaultValue)))
}

func (this *QJsonValueRef) ToString1(defaultValue string) string {
	defaultValue_ms := C.struct_miqt_string{}
	defaultValue_ms.data = C.CString(defaultValue)
	defaultValue_ms.len = C.size_t(len(defaultValue))
	defer C.free(unsafe.Pointer(defaultValue_ms.data))
	var _ms C.struct_miqt_string = C.QJsonValueRef_ToString1(this.h, defaultValue_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QJsonValueRef) Delete() {
	C.QJsonValueRef_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QJsonValueRef) GoGC() {
	runtime.SetFinalizer(this, func(this *QJsonValueRef) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
