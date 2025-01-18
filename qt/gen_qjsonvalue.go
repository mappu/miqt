package qt

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

func (this *QJsonValue) OperatorSubscriptWithInt(i int) *QJsonValue {
	_goptr := newQJsonValue(C.QJsonValue_OperatorSubscriptWithInt(this.h, (C.int)(i)))
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

func (this *QJsonValue) ToDouble1(defaultValue float64) float64 {
	return (float64)(C.QJsonValue_ToDouble1(this.h, (C.double)(defaultValue)))
}

// Delete this object from C++ memory.
func (this *QJsonValue) Delete() {
	C.QJsonValue_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QJsonValue) GoGC() {
	runtime.SetFinalizer(this, func(this *QJsonValue) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QJsonValueRef struct {
	h *C.QJsonValueRef
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

	return &QJsonValueRef{h: h}
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
func NewQJsonValueRef2(array *QJsonArray, idx int) *QJsonValueRef {

	return newQJsonValueRef(C.QJsonValueRef_new2(array.cPointer(), (C.int)(idx)))
}

// NewQJsonValueRef3 constructs a new QJsonValueRef object.
func NewQJsonValueRef3(object *QJsonObject, idx int) *QJsonValueRef {

	return newQJsonValueRef(C.QJsonValueRef_new3(object.cPointer(), (C.int)(idx)))
}

func (this *QJsonValueRef) ToQJsonValue() *QJsonValue {
	_goptr := newQJsonValue(C.QJsonValueRef_ToQJsonValue(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
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

func (this *QJsonValueRef) ToBoolWithDefaultValue(defaultValue bool) bool {
	return (bool)(C.QJsonValueRef_ToBoolWithDefaultValue(this.h, (C.bool)(defaultValue)))
}

func (this *QJsonValueRef) ToIntWithDefaultValue(defaultValue int) int {
	return (int)(C.QJsonValueRef_ToIntWithDefaultValue(this.h, (C.int)(defaultValue)))
}

func (this *QJsonValueRef) ToDoubleWithDefaultValue(defaultValue float64) float64 {
	return (float64)(C.QJsonValueRef_ToDoubleWithDefaultValue(this.h, (C.double)(defaultValue)))
}

func (this *QJsonValueRef) ToStringWithDefaultValue(defaultValue string) string {
	defaultValue_ms := C.struct_miqt_string{}
	defaultValue_ms.data = C.CString(defaultValue)
	defaultValue_ms.len = C.size_t(len(defaultValue))
	defer C.free(unsafe.Pointer(defaultValue_ms.data))
	var _ms C.struct_miqt_string = C.QJsonValueRef_ToStringWithDefaultValue(this.h, defaultValue_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QJsonValueRef) OperatorEqual(other *QJsonValue) bool {
	return (bool)(C.QJsonValueRef_OperatorEqual(this.h, other.cPointer()))
}

func (this *QJsonValueRef) OperatorNotEqual(other *QJsonValue) bool {
	return (bool)(C.QJsonValueRef_OperatorNotEqual(this.h, other.cPointer()))
}

// Delete this object from C++ memory.
func (this *QJsonValueRef) Delete() {
	C.QJsonValueRef_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QJsonValueRef) GoGC() {
	runtime.SetFinalizer(this, func(this *QJsonValueRef) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QJsonValuePtr struct {
	h *C.QJsonValuePtr
}

func (this *QJsonValuePtr) cPointer() *C.QJsonValuePtr {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QJsonValuePtr) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQJsonValuePtr constructs the type using only CGO pointers.
func newQJsonValuePtr(h *C.QJsonValuePtr) *QJsonValuePtr {
	if h == nil {
		return nil
	}

	return &QJsonValuePtr{h: h}
}

// UnsafeNewQJsonValuePtr constructs the type using only unsafe pointers.
func UnsafeNewQJsonValuePtr(h unsafe.Pointer) *QJsonValuePtr {
	return newQJsonValuePtr((*C.QJsonValuePtr)(h))
}

// NewQJsonValuePtr constructs a new QJsonValuePtr object.
func NewQJsonValuePtr(val *QJsonValue) *QJsonValuePtr {

	return newQJsonValuePtr(C.QJsonValuePtr_new(val.cPointer()))
}

// NewQJsonValuePtr2 constructs a new QJsonValuePtr object.
func NewQJsonValuePtr2(param1 *QJsonValuePtr) *QJsonValuePtr {

	return newQJsonValuePtr(C.QJsonValuePtr_new2(param1.cPointer()))
}

func (this *QJsonValuePtr) OperatorMultiply() *QJsonValue {
	return newQJsonValue(C.QJsonValuePtr_OperatorMultiply(this.h))
}

func (this *QJsonValuePtr) OperatorMinusGreater() *QJsonValue {
	return newQJsonValue(C.QJsonValuePtr_OperatorMinusGreater(this.h))
}

func (this *QJsonValuePtr) OperatorAssign(param1 *QJsonValuePtr) {
	C.QJsonValuePtr_OperatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QJsonValuePtr) Delete() {
	C.QJsonValuePtr_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QJsonValuePtr) GoGC() {
	runtime.SetFinalizer(this, func(this *QJsonValuePtr) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QJsonValueRefPtr struct {
	h *C.QJsonValueRefPtr
}

func (this *QJsonValueRefPtr) cPointer() *C.QJsonValueRefPtr {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QJsonValueRefPtr) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQJsonValueRefPtr constructs the type using only CGO pointers.
func newQJsonValueRefPtr(h *C.QJsonValueRefPtr) *QJsonValueRefPtr {
	if h == nil {
		return nil
	}

	return &QJsonValueRefPtr{h: h}
}

// UnsafeNewQJsonValueRefPtr constructs the type using only unsafe pointers.
func UnsafeNewQJsonValueRefPtr(h unsafe.Pointer) *QJsonValueRefPtr {
	return newQJsonValueRefPtr((*C.QJsonValueRefPtr)(h))
}

// NewQJsonValueRefPtr constructs a new QJsonValueRefPtr object.
func NewQJsonValueRefPtr(array *QJsonArray, idx int) *QJsonValueRefPtr {

	return newQJsonValueRefPtr(C.QJsonValueRefPtr_new(array.cPointer(), (C.int)(idx)))
}

// NewQJsonValueRefPtr2 constructs a new QJsonValueRefPtr object.
func NewQJsonValueRefPtr2(object *QJsonObject, idx int) *QJsonValueRefPtr {

	return newQJsonValueRefPtr(C.QJsonValueRefPtr_new2(object.cPointer(), (C.int)(idx)))
}

// NewQJsonValueRefPtr3 constructs a new QJsonValueRefPtr object.
func NewQJsonValueRefPtr3(param1 *QJsonValueRefPtr) *QJsonValueRefPtr {

	return newQJsonValueRefPtr(C.QJsonValueRefPtr_new3(param1.cPointer()))
}

func (this *QJsonValueRefPtr) OperatorMultiply() *QJsonValueRef {
	return newQJsonValueRef(C.QJsonValueRefPtr_OperatorMultiply(this.h))
}

func (this *QJsonValueRefPtr) OperatorMinusGreater() *QJsonValueRef {
	return newQJsonValueRef(C.QJsonValueRefPtr_OperatorMinusGreater(this.h))
}

func (this *QJsonValueRefPtr) OperatorAssign(param1 *QJsonValueRefPtr) {
	C.QJsonValueRefPtr_OperatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QJsonValueRefPtr) Delete() {
	C.QJsonValueRefPtr_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QJsonValueRefPtr) GoGC() {
	runtime.SetFinalizer(this, func(this *QJsonValueRefPtr) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
