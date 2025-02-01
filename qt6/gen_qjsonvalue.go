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
	h *C.QJsonValue
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
	return newQJsonValue((*C.QJsonValue)(h))
}

// NewQJsonValue constructs a new QJsonValue object.
func NewQJsonValue() *QJsonValue {

	return newQJsonValue(C.QJsonValue_new())
}

// NewQJsonValue2 constructs a new QJsonValue object.
func NewQJsonValue2(b bool) *QJsonValue {

	return newQJsonValue(C.QJsonValue_new2((C.bool)(b)))
}

// NewQJsonValue3 constructs a new QJsonValue object.
func NewQJsonValue3(n float64) *QJsonValue {

	return newQJsonValue(C.QJsonValue_new3((C.double)(n)))
}

// NewQJsonValue4 constructs a new QJsonValue object.
func NewQJsonValue4(n int) *QJsonValue {

	return newQJsonValue(C.QJsonValue_new4((C.int)(n)))
}

// NewQJsonValue5 constructs a new QJsonValue object.
func NewQJsonValue5(v int64) *QJsonValue {

	return newQJsonValue(C.QJsonValue_new5((C.longlong)(v)))
}

// NewQJsonValue6 constructs a new QJsonValue object.
func NewQJsonValue6(s string) *QJsonValue {
	s_ms := C.struct_miqt_string{}
	s_ms.data = C.CString(s)
	s_ms.len = C.size_t(len(s))
	defer C.free(unsafe.Pointer(s_ms.data))

	return newQJsonValue(C.QJsonValue_new6(s_ms))
}

// NewQJsonValue7 constructs a new QJsonValue object.
func NewQJsonValue7(s string) *QJsonValue {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))

	return newQJsonValue(C.QJsonValue_new7(s_Cstring))
}

// NewQJsonValue8 constructs a new QJsonValue object.
func NewQJsonValue8(a *QJsonArray) *QJsonValue {

	return newQJsonValue(C.QJsonValue_new8(a.cPointer()))
}

// NewQJsonValue9 constructs a new QJsonValue object.
func NewQJsonValue9(o *QJsonObject) *QJsonValue {

	return newQJsonValue(C.QJsonValue_new9(o.cPointer()))
}

// NewQJsonValue10 constructs a new QJsonValue object.
func NewQJsonValue10(other *QJsonValue) *QJsonValue {

	return newQJsonValue(C.QJsonValue_new10(other.cPointer()))
}

// NewQJsonValue11 constructs a new QJsonValue object.
func NewQJsonValue11(param1 QJsonValue__Type) *QJsonValue {

	return newQJsonValue(C.QJsonValue_new11((C.int)(param1)))
}

func (this *QJsonValue) OperatorAssign(other *QJsonValue) {
	C.QJsonValue_operatorAssign(this.h, other.cPointer())
}

func (this *QJsonValue) Swap(other *QJsonValue) {
	C.QJsonValue_swap(this.h, other.cPointer())
}

func QJsonValue_FromVariant(variant *QVariant) *QJsonValue {
	_goptr := newQJsonValue(C.QJsonValue_fromVariant(variant.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonValue) ToVariant() *QVariant {
	_goptr := newQVariant(C.QJsonValue_toVariant(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonValue) Type() QJsonValue__Type {
	return (QJsonValue__Type)(C.QJsonValue_type(this.h))
}

func (this *QJsonValue) IsNull() bool {
	return (bool)(C.QJsonValue_isNull(this.h))
}

func (this *QJsonValue) IsBool() bool {
	return (bool)(C.QJsonValue_isBool(this.h))
}

func (this *QJsonValue) IsDouble() bool {
	return (bool)(C.QJsonValue_isDouble(this.h))
}

func (this *QJsonValue) IsString() bool {
	return (bool)(C.QJsonValue_isString(this.h))
}

func (this *QJsonValue) IsArray() bool {
	return (bool)(C.QJsonValue_isArray(this.h))
}

func (this *QJsonValue) IsObject() bool {
	return (bool)(C.QJsonValue_isObject(this.h))
}

func (this *QJsonValue) IsUndefined() bool {
	return (bool)(C.QJsonValue_isUndefined(this.h))
}

func (this *QJsonValue) ToBool() bool {
	return (bool)(C.QJsonValue_toBool(this.h))
}

func (this *QJsonValue) ToInt() int {
	return (int)(C.QJsonValue_toInt(this.h))
}

func (this *QJsonValue) ToInteger() int64 {
	return (int64)(C.QJsonValue_toInteger(this.h))
}

func (this *QJsonValue) ToDouble() float64 {
	return (float64)(C.QJsonValue_toDouble(this.h))
}

func (this *QJsonValue) ToString() string {
	var _ms C.struct_miqt_string = C.QJsonValue_toString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QJsonValue) ToStringWithDefaultValue(defaultValue string) string {
	defaultValue_ms := C.struct_miqt_string{}
	defaultValue_ms.data = C.CString(defaultValue)
	defaultValue_ms.len = C.size_t(len(defaultValue))
	defer C.free(unsafe.Pointer(defaultValue_ms.data))
	var _ms C.struct_miqt_string = C.QJsonValue_toStringWithDefaultValue(this.h, defaultValue_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QJsonValue) ToArray() *QJsonArray {
	_goptr := newQJsonArray(C.QJsonValue_toArray(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonValue) ToArrayWithDefaultValue(defaultValue *QJsonArray) *QJsonArray {
	_goptr := newQJsonArray(C.QJsonValue_toArrayWithDefaultValue(this.h, defaultValue.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonValue) ToObject() *QJsonObject {
	_goptr := newQJsonObject(C.QJsonValue_toObject(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonValue) ToObjectWithDefaultValue(defaultValue *QJsonObject) *QJsonObject {
	_goptr := newQJsonObject(C.QJsonValue_toObjectWithDefaultValue(this.h, defaultValue.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonValue) OperatorSubscript(key string) *QJsonValue {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	_goptr := newQJsonValue(C.QJsonValue_operatorSubscript(this.h, key_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonValue) OperatorSubscriptWithQsizetype(i int64) *QJsonValue {
	_goptr := newQJsonValue(C.QJsonValue_operatorSubscriptWithQsizetype(this.h, (C.ptrdiff_t)(i)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonValue) OperatorEqual(other *QJsonValue) bool {
	return (bool)(C.QJsonValue_operatorEqual(this.h, other.cPointer()))
}

func (this *QJsonValue) OperatorNotEqual(other *QJsonValue) bool {
	return (bool)(C.QJsonValue_operatorNotEqual(this.h, other.cPointer()))
}

func (this *QJsonValue) ToBool1(defaultValue bool) bool {
	return (bool)(C.QJsonValue_toBool1(this.h, (C.bool)(defaultValue)))
}

func (this *QJsonValue) ToInt1(defaultValue int) int {
	return (int)(C.QJsonValue_toInt1(this.h, (C.int)(defaultValue)))
}

func (this *QJsonValue) ToInteger1(defaultValue int64) int64 {
	return (int64)(C.QJsonValue_toInteger1(this.h, (C.longlong)(defaultValue)))
}

func (this *QJsonValue) ToDouble1(defaultValue float64) float64 {
	return (float64)(C.QJsonValue_toDouble1(this.h, (C.double)(defaultValue)))
}

// Delete this object from C++ memory.
func (this *QJsonValue) Delete() {
	C.QJsonValue_delete(this.h)
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
	h *C.QJsonValueConstRef
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
	return newQJsonValueConstRef((*C.QJsonValueConstRef)(h))
}

// NewQJsonValueConstRef constructs a new QJsonValueConstRef object.
func NewQJsonValueConstRef(param1 *QJsonValueConstRef) *QJsonValueConstRef {

	return newQJsonValueConstRef(C.QJsonValueConstRef_new(param1.cPointer()))
}

func (this *QJsonValueConstRef) ToQJsonValue() *QJsonValue {
	_goptr := newQJsonValue(C.QJsonValueConstRef_ToQJsonValue(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonValueConstRef) ToVariant() *QVariant {
	_goptr := newQVariant(C.QJsonValueConstRef_toVariant(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonValueConstRef) Type() QJsonValue__Type {
	return (QJsonValue__Type)(C.QJsonValueConstRef_type(this.h))
}

func (this *QJsonValueConstRef) IsNull() bool {
	return (bool)(C.QJsonValueConstRef_isNull(this.h))
}

func (this *QJsonValueConstRef) IsBool() bool {
	return (bool)(C.QJsonValueConstRef_isBool(this.h))
}

func (this *QJsonValueConstRef) IsDouble() bool {
	return (bool)(C.QJsonValueConstRef_isDouble(this.h))
}

func (this *QJsonValueConstRef) IsString() bool {
	return (bool)(C.QJsonValueConstRef_isString(this.h))
}

func (this *QJsonValueConstRef) IsArray() bool {
	return (bool)(C.QJsonValueConstRef_isArray(this.h))
}

func (this *QJsonValueConstRef) IsObject() bool {
	return (bool)(C.QJsonValueConstRef_isObject(this.h))
}

func (this *QJsonValueConstRef) IsUndefined() bool {
	return (bool)(C.QJsonValueConstRef_isUndefined(this.h))
}

func (this *QJsonValueConstRef) ToBool() bool {
	return (bool)(C.QJsonValueConstRef_toBool(this.h))
}

func (this *QJsonValueConstRef) ToInt() int {
	return (int)(C.QJsonValueConstRef_toInt(this.h))
}

func (this *QJsonValueConstRef) ToInteger() int64 {
	return (int64)(C.QJsonValueConstRef_toInteger(this.h))
}

func (this *QJsonValueConstRef) ToDouble() float64 {
	return (float64)(C.QJsonValueConstRef_toDouble(this.h))
}

func (this *QJsonValueConstRef) ToString() string {
	var _ms C.struct_miqt_string = C.QJsonValueConstRef_toString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QJsonValueConstRef) ToArray() *QJsonArray {
	_goptr := newQJsonArray(C.QJsonValueConstRef_toArray(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonValueConstRef) ToObject() *QJsonObject {
	_goptr := newQJsonObject(C.QJsonValueConstRef_toObject(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonValueConstRef) OperatorSubscriptWithQsizetype(i int64) *QJsonValue {
	_goptr := newQJsonValue(C.QJsonValueConstRef_operatorSubscriptWithQsizetype(this.h, (C.ptrdiff_t)(i)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonValueConstRef) OperatorEqual(other *QJsonValue) bool {
	return (bool)(C.QJsonValueConstRef_operatorEqual(this.h, other.cPointer()))
}

func (this *QJsonValueConstRef) OperatorNotEqual(other *QJsonValue) bool {
	return (bool)(C.QJsonValueConstRef_operatorNotEqual(this.h, other.cPointer()))
}

func (this *QJsonValueConstRef) ToBool1(defaultValue bool) bool {
	return (bool)(C.QJsonValueConstRef_toBool1(this.h, (C.bool)(defaultValue)))
}

func (this *QJsonValueConstRef) ToInt1(defaultValue int) int {
	return (int)(C.QJsonValueConstRef_toInt1(this.h, (C.int)(defaultValue)))
}

func (this *QJsonValueConstRef) ToInteger1(defaultValue int64) int64 {
	return (int64)(C.QJsonValueConstRef_toInteger1(this.h, (C.longlong)(defaultValue)))
}

func (this *QJsonValueConstRef) ToDouble1(defaultValue float64) float64 {
	return (float64)(C.QJsonValueConstRef_toDouble1(this.h, (C.double)(defaultValue)))
}

func (this *QJsonValueConstRef) ToString1(defaultValue string) string {
	defaultValue_ms := C.struct_miqt_string{}
	defaultValue_ms.data = C.CString(defaultValue)
	defaultValue_ms.len = C.size_t(len(defaultValue))
	defer C.free(unsafe.Pointer(defaultValue_ms.data))
	var _ms C.struct_miqt_string = C.QJsonValueConstRef_toString1(this.h, defaultValue_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QJsonValueConstRef) Delete() {
	C.QJsonValueConstRef_delete(this.h)
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
	h *C.QJsonValueRef
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
func newQJsonValueRef(h *C.QJsonValueRef) *QJsonValueRef {
	if h == nil {
		return nil
	}
	var outptr_QJsonValueConstRef *C.QJsonValueConstRef = nil
	C.QJsonValueRef_virtbase(h, &outptr_QJsonValueConstRef)

	return &QJsonValueRef{h: h,
		QJsonValueConstRef: newQJsonValueConstRef(outptr_QJsonValueConstRef)}
}

// UnsafeNewQJsonValueRef constructs the type using only unsafe pointers.
func UnsafeNewQJsonValueRef(h unsafe.Pointer) *QJsonValueRef {
	return newQJsonValueRef((*C.QJsonValueRef)(h))
}

// NewQJsonValueRef constructs a new QJsonValueRef object.
func NewQJsonValueRef(param1 *QJsonValueRef) *QJsonValueRef {

	return newQJsonValueRef(C.QJsonValueRef_new(param1.cPointer()))
}

// NewQJsonValueRef2 constructs a new QJsonValueRef object.
func NewQJsonValueRef2(array *QJsonArray, idx int64) *QJsonValueRef {

	return newQJsonValueRef(C.QJsonValueRef_new2(array.cPointer(), (C.ptrdiff_t)(idx)))
}

// NewQJsonValueRef3 constructs a new QJsonValueRef object.
func NewQJsonValueRef3(object *QJsonObject, idx int64) *QJsonValueRef {

	return newQJsonValueRef(C.QJsonValueRef_new3(object.cPointer(), (C.ptrdiff_t)(idx)))
}

func (this *QJsonValueRef) OperatorAssign(val *QJsonValue) {
	C.QJsonValueRef_operatorAssign(this.h, val.cPointer())
}

func (this *QJsonValueRef) OperatorAssignWithVal(val *QJsonValueRef) {
	C.QJsonValueRef_operatorAssignWithVal(this.h, val.cPointer())
}

func (this *QJsonValueRef) ToQJsonValue() *QJsonValue {
	_goptr := newQJsonValue(C.QJsonValueRef_ToQJsonValue(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonValueRef) ToVariant() *QVariant {
	_goptr := newQVariant(C.QJsonValueRef_toVariant(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonValueRef) Type() QJsonValue__Type {
	return (QJsonValue__Type)(C.QJsonValueRef_type(this.h))
}

func (this *QJsonValueRef) IsNull() bool {
	return (bool)(C.QJsonValueRef_isNull(this.h))
}

func (this *QJsonValueRef) IsBool() bool {
	return (bool)(C.QJsonValueRef_isBool(this.h))
}

func (this *QJsonValueRef) IsDouble() bool {
	return (bool)(C.QJsonValueRef_isDouble(this.h))
}

func (this *QJsonValueRef) IsString() bool {
	return (bool)(C.QJsonValueRef_isString(this.h))
}

func (this *QJsonValueRef) IsArray() bool {
	return (bool)(C.QJsonValueRef_isArray(this.h))
}

func (this *QJsonValueRef) IsObject() bool {
	return (bool)(C.QJsonValueRef_isObject(this.h))
}

func (this *QJsonValueRef) IsUndefined() bool {
	return (bool)(C.QJsonValueRef_isUndefined(this.h))
}

func (this *QJsonValueRef) ToBool() bool {
	return (bool)(C.QJsonValueRef_toBool(this.h))
}

func (this *QJsonValueRef) ToInt() int {
	return (int)(C.QJsonValueRef_toInt(this.h))
}

func (this *QJsonValueRef) ToInteger() int64 {
	return (int64)(C.QJsonValueRef_toInteger(this.h))
}

func (this *QJsonValueRef) ToDouble() float64 {
	return (float64)(C.QJsonValueRef_toDouble(this.h))
}

func (this *QJsonValueRef) ToString() string {
	var _ms C.struct_miqt_string = C.QJsonValueRef_toString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QJsonValueRef) ToArray() *QJsonArray {
	_goptr := newQJsonArray(C.QJsonValueRef_toArray(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonValueRef) ToObject() *QJsonObject {
	_goptr := newQJsonObject(C.QJsonValueRef_toObject(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonValueRef) OperatorSubscriptWithQsizetype(i int64) *QJsonValue {
	_goptr := newQJsonValue(C.QJsonValueRef_operatorSubscriptWithQsizetype(this.h, (C.ptrdiff_t)(i)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonValueRef) OperatorEqual(other *QJsonValue) bool {
	return (bool)(C.QJsonValueRef_operatorEqual(this.h, other.cPointer()))
}

func (this *QJsonValueRef) OperatorNotEqual(other *QJsonValue) bool {
	return (bool)(C.QJsonValueRef_operatorNotEqual(this.h, other.cPointer()))
}

func (this *QJsonValueRef) ToBool1(defaultValue bool) bool {
	return (bool)(C.QJsonValueRef_toBool1(this.h, (C.bool)(defaultValue)))
}

func (this *QJsonValueRef) ToInt1(defaultValue int) int {
	return (int)(C.QJsonValueRef_toInt1(this.h, (C.int)(defaultValue)))
}

func (this *QJsonValueRef) ToInteger1(defaultValue int64) int64 {
	return (int64)(C.QJsonValueRef_toInteger1(this.h, (C.longlong)(defaultValue)))
}

func (this *QJsonValueRef) ToDouble1(defaultValue float64) float64 {
	return (float64)(C.QJsonValueRef_toDouble1(this.h, (C.double)(defaultValue)))
}

func (this *QJsonValueRef) ToString1(defaultValue string) string {
	defaultValue_ms := C.struct_miqt_string{}
	defaultValue_ms.data = C.CString(defaultValue)
	defaultValue_ms.len = C.size_t(len(defaultValue))
	defer C.free(unsafe.Pointer(defaultValue_ms.data))
	var _ms C.struct_miqt_string = C.QJsonValueRef_toString1(this.h, defaultValue_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QJsonValueRef) Delete() {
	C.QJsonValueRef_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QJsonValueRef) GoGC() {
	runtime.SetFinalizer(this, func(this *QJsonValueRef) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
