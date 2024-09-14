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
	QJsonValue__Type__Null      QJsonValue__Type = 0
	QJsonValue__Type__Bool      QJsonValue__Type = 1
	QJsonValue__Type__Double    QJsonValue__Type = 2
	QJsonValue__Type__String    QJsonValue__Type = 3
	QJsonValue__Type__Array     QJsonValue__Type = 4
	QJsonValue__Type__Object    QJsonValue__Type = 5
	QJsonValue__Type__Undefined QJsonValue__Type = 128
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

func newQJsonValue(h *C.QJsonValue) *QJsonValue {
	if h == nil {
		return nil
	}
	return &QJsonValue{h: h}
}

func newQJsonValue_U(h unsafe.Pointer) *QJsonValue {
	return newQJsonValue((*C.QJsonValue)(h))
}

// NewQJsonValue constructs a new QJsonValue object.
func NewQJsonValue() *QJsonValue {
	ret := C.QJsonValue_new()
	return newQJsonValue(ret)
}

// NewQJsonValue2 constructs a new QJsonValue object.
func NewQJsonValue2(b bool) *QJsonValue {
	ret := C.QJsonValue_new2((C.bool)(b))
	return newQJsonValue(ret)
}

// NewQJsonValue3 constructs a new QJsonValue object.
func NewQJsonValue3(n float64) *QJsonValue {
	ret := C.QJsonValue_new3((C.double)(n))
	return newQJsonValue(ret)
}

// NewQJsonValue4 constructs a new QJsonValue object.
func NewQJsonValue4(n int) *QJsonValue {
	ret := C.QJsonValue_new4((C.int)(n))
	return newQJsonValue(ret)
}

// NewQJsonValue5 constructs a new QJsonValue object.
func NewQJsonValue5(v int64) *QJsonValue {
	ret := C.QJsonValue_new5((C.longlong)(v))
	return newQJsonValue(ret)
}

// NewQJsonValue6 constructs a new QJsonValue object.
func NewQJsonValue6(s string) *QJsonValue {
	s_ms := miqt_strdupg(s)
	defer C.free(s_ms)
	ret := C.QJsonValue_new6((*C.struct_miqt_string)(s_ms))
	return newQJsonValue(ret)
}

// NewQJsonValue7 constructs a new QJsonValue object.
func NewQJsonValue7(s string) *QJsonValue {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	ret := C.QJsonValue_new7(s_Cstring)
	return newQJsonValue(ret)
}

// NewQJsonValue8 constructs a new QJsonValue object.
func NewQJsonValue8(a *QJsonArray) *QJsonValue {
	ret := C.QJsonValue_new8(a.cPointer())
	return newQJsonValue(ret)
}

// NewQJsonValue9 constructs a new QJsonValue object.
func NewQJsonValue9(o *QJsonObject) *QJsonValue {
	ret := C.QJsonValue_new9(o.cPointer())
	return newQJsonValue(ret)
}

// NewQJsonValue10 constructs a new QJsonValue object.
func NewQJsonValue10(other *QJsonValue) *QJsonValue {
	ret := C.QJsonValue_new10(other.cPointer())
	return newQJsonValue(ret)
}

// NewQJsonValue11 constructs a new QJsonValue object.
func NewQJsonValue11(param1 QJsonValue__Type) *QJsonValue {
	ret := C.QJsonValue_new11((C.uintptr_t)(param1))
	return newQJsonValue(ret)
}

func (this *QJsonValue) OperatorAssign(other *QJsonValue) {
	C.QJsonValue_OperatorAssign(this.h, other.cPointer())
}

func (this *QJsonValue) Swap(other *QJsonValue) {
	C.QJsonValue_Swap(this.h, other.cPointer())
}

func QJsonValue_FromVariant(variant *QVariant) *QJsonValue {
	_ret := C.QJsonValue_FromVariant(variant.cPointer())
	_goptr := newQJsonValue(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonValue) ToVariant() *QVariant {
	_ret := C.QJsonValue_ToVariant(this.h)
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonValue) Type() QJsonValue__Type {
	_ret := C.QJsonValue_Type(this.h)
	return (QJsonValue__Type)(_ret)
}

func (this *QJsonValue) IsNull() bool {
	_ret := C.QJsonValue_IsNull(this.h)
	return (bool)(_ret)
}

func (this *QJsonValue) IsBool() bool {
	_ret := C.QJsonValue_IsBool(this.h)
	return (bool)(_ret)
}

func (this *QJsonValue) IsDouble() bool {
	_ret := C.QJsonValue_IsDouble(this.h)
	return (bool)(_ret)
}

func (this *QJsonValue) IsString() bool {
	_ret := C.QJsonValue_IsString(this.h)
	return (bool)(_ret)
}

func (this *QJsonValue) IsArray() bool {
	_ret := C.QJsonValue_IsArray(this.h)
	return (bool)(_ret)
}

func (this *QJsonValue) IsObject() bool {
	_ret := C.QJsonValue_IsObject(this.h)
	return (bool)(_ret)
}

func (this *QJsonValue) IsUndefined() bool {
	_ret := C.QJsonValue_IsUndefined(this.h)
	return (bool)(_ret)
}

func (this *QJsonValue) ToBool() bool {
	_ret := C.QJsonValue_ToBool(this.h)
	return (bool)(_ret)
}

func (this *QJsonValue) ToInt() int {
	_ret := C.QJsonValue_ToInt(this.h)
	return (int)(_ret)
}

func (this *QJsonValue) ToDouble() float64 {
	_ret := C.QJsonValue_ToDouble(this.h)
	return (float64)(_ret)
}

func (this *QJsonValue) ToString() string {
	var _ms *C.struct_miqt_string = C.QJsonValue_ToString(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QJsonValue) ToStringWithDefaultValue(defaultValue string) string {
	defaultValue_ms := miqt_strdupg(defaultValue)
	defer C.free(defaultValue_ms)
	var _ms *C.struct_miqt_string = C.QJsonValue_ToStringWithDefaultValue(this.h, (*C.struct_miqt_string)(defaultValue_ms))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QJsonValue) ToArray() *QJsonArray {
	_ret := C.QJsonValue_ToArray(this.h)
	_goptr := newQJsonArray(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonValue) ToArrayWithDefaultValue(defaultValue *QJsonArray) *QJsonArray {
	_ret := C.QJsonValue_ToArrayWithDefaultValue(this.h, defaultValue.cPointer())
	_goptr := newQJsonArray(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonValue) ToObject() *QJsonObject {
	_ret := C.QJsonValue_ToObject(this.h)
	_goptr := newQJsonObject(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonValue) ToObjectWithDefaultValue(defaultValue *QJsonObject) *QJsonObject {
	_ret := C.QJsonValue_ToObjectWithDefaultValue(this.h, defaultValue.cPointer())
	_goptr := newQJsonObject(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonValue) OperatorSubscript(key string) *QJsonValue {
	key_ms := miqt_strdupg(key)
	defer C.free(key_ms)
	_ret := C.QJsonValue_OperatorSubscript(this.h, (*C.struct_miqt_string)(key_ms))
	_goptr := newQJsonValue(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonValue) OperatorSubscriptWithInt(i int) *QJsonValue {
	_ret := C.QJsonValue_OperatorSubscriptWithInt(this.h, (C.int)(i))
	_goptr := newQJsonValue(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonValue) OperatorEqual(other *QJsonValue) bool {
	_ret := C.QJsonValue_OperatorEqual(this.h, other.cPointer())
	return (bool)(_ret)
}

func (this *QJsonValue) OperatorNotEqual(other *QJsonValue) bool {
	_ret := C.QJsonValue_OperatorNotEqual(this.h, other.cPointer())
	return (bool)(_ret)
}

func (this *QJsonValue) ToBool1(defaultValue bool) bool {
	_ret := C.QJsonValue_ToBool1(this.h, (C.bool)(defaultValue))
	return (bool)(_ret)
}

func (this *QJsonValue) ToInt1(defaultValue int) int {
	_ret := C.QJsonValue_ToInt1(this.h, (C.int)(defaultValue))
	return (int)(_ret)
}

func (this *QJsonValue) ToDouble1(defaultValue float64) float64 {
	_ret := C.QJsonValue_ToDouble1(this.h, (C.double)(defaultValue))
	return (float64)(_ret)
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

func newQJsonValueRef(h *C.QJsonValueRef) *QJsonValueRef {
	if h == nil {
		return nil
	}
	return &QJsonValueRef{h: h}
}

func newQJsonValueRef_U(h unsafe.Pointer) *QJsonValueRef {
	return newQJsonValueRef((*C.QJsonValueRef)(h))
}

// NewQJsonValueRef constructs a new QJsonValueRef object.
func NewQJsonValueRef(param1 *QJsonValueRef) *QJsonValueRef {
	ret := C.QJsonValueRef_new(param1.cPointer())
	return newQJsonValueRef(ret)
}

// NewQJsonValueRef2 constructs a new QJsonValueRef object.
func NewQJsonValueRef2(array *QJsonArray, idx int) *QJsonValueRef {
	ret := C.QJsonValueRef_new2(array.cPointer(), (C.int)(idx))
	return newQJsonValueRef(ret)
}

// NewQJsonValueRef3 constructs a new QJsonValueRef object.
func NewQJsonValueRef3(object *QJsonObject, idx int) *QJsonValueRef {
	ret := C.QJsonValueRef_new3(object.cPointer(), (C.int)(idx))
	return newQJsonValueRef(ret)
}

func (this *QJsonValueRef) OperatorAssign(val *QJsonValue) {
	C.QJsonValueRef_OperatorAssign(this.h, val.cPointer())
}

func (this *QJsonValueRef) OperatorAssignWithVal(val *QJsonValueRef) {
	C.QJsonValueRef_OperatorAssignWithVal(this.h, val.cPointer())
}

func (this *QJsonValueRef) ToVariant() *QVariant {
	_ret := C.QJsonValueRef_ToVariant(this.h)
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonValueRef) Type() QJsonValue__Type {
	_ret := C.QJsonValueRef_Type(this.h)
	return (QJsonValue__Type)(_ret)
}

func (this *QJsonValueRef) IsNull() bool {
	_ret := C.QJsonValueRef_IsNull(this.h)
	return (bool)(_ret)
}

func (this *QJsonValueRef) IsBool() bool {
	_ret := C.QJsonValueRef_IsBool(this.h)
	return (bool)(_ret)
}

func (this *QJsonValueRef) IsDouble() bool {
	_ret := C.QJsonValueRef_IsDouble(this.h)
	return (bool)(_ret)
}

func (this *QJsonValueRef) IsString() bool {
	_ret := C.QJsonValueRef_IsString(this.h)
	return (bool)(_ret)
}

func (this *QJsonValueRef) IsArray() bool {
	_ret := C.QJsonValueRef_IsArray(this.h)
	return (bool)(_ret)
}

func (this *QJsonValueRef) IsObject() bool {
	_ret := C.QJsonValueRef_IsObject(this.h)
	return (bool)(_ret)
}

func (this *QJsonValueRef) IsUndefined() bool {
	_ret := C.QJsonValueRef_IsUndefined(this.h)
	return (bool)(_ret)
}

func (this *QJsonValueRef) ToBool() bool {
	_ret := C.QJsonValueRef_ToBool(this.h)
	return (bool)(_ret)
}

func (this *QJsonValueRef) ToInt() int {
	_ret := C.QJsonValueRef_ToInt(this.h)
	return (int)(_ret)
}

func (this *QJsonValueRef) ToDouble() float64 {
	_ret := C.QJsonValueRef_ToDouble(this.h)
	return (float64)(_ret)
}

func (this *QJsonValueRef) ToString() string {
	var _ms *C.struct_miqt_string = C.QJsonValueRef_ToString(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QJsonValueRef) ToArray() *QJsonArray {
	_ret := C.QJsonValueRef_ToArray(this.h)
	_goptr := newQJsonArray(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonValueRef) ToObject() *QJsonObject {
	_ret := C.QJsonValueRef_ToObject(this.h)
	_goptr := newQJsonObject(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonValueRef) ToBoolWithDefaultValue(defaultValue bool) bool {
	_ret := C.QJsonValueRef_ToBoolWithDefaultValue(this.h, (C.bool)(defaultValue))
	return (bool)(_ret)
}

func (this *QJsonValueRef) ToIntWithDefaultValue(defaultValue int) int {
	_ret := C.QJsonValueRef_ToIntWithDefaultValue(this.h, (C.int)(defaultValue))
	return (int)(_ret)
}

func (this *QJsonValueRef) ToDoubleWithDefaultValue(defaultValue float64) float64 {
	_ret := C.QJsonValueRef_ToDoubleWithDefaultValue(this.h, (C.double)(defaultValue))
	return (float64)(_ret)
}

func (this *QJsonValueRef) ToStringWithDefaultValue(defaultValue string) string {
	defaultValue_ms := miqt_strdupg(defaultValue)
	defer C.free(defaultValue_ms)
	var _ms *C.struct_miqt_string = C.QJsonValueRef_ToStringWithDefaultValue(this.h, (*C.struct_miqt_string)(defaultValue_ms))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QJsonValueRef) OperatorEqual(other *QJsonValue) bool {
	_ret := C.QJsonValueRef_OperatorEqual(this.h, other.cPointer())
	return (bool)(_ret)
}

func (this *QJsonValueRef) OperatorNotEqual(other *QJsonValue) bool {
	_ret := C.QJsonValueRef_OperatorNotEqual(this.h, other.cPointer())
	return (bool)(_ret)
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

func newQJsonValuePtr(h *C.QJsonValuePtr) *QJsonValuePtr {
	if h == nil {
		return nil
	}
	return &QJsonValuePtr{h: h}
}

func newQJsonValuePtr_U(h unsafe.Pointer) *QJsonValuePtr {
	return newQJsonValuePtr((*C.QJsonValuePtr)(h))
}

// NewQJsonValuePtr constructs a new QJsonValuePtr object.
func NewQJsonValuePtr(val *QJsonValue) *QJsonValuePtr {
	ret := C.QJsonValuePtr_new(val.cPointer())
	return newQJsonValuePtr(ret)
}

// NewQJsonValuePtr2 constructs a new QJsonValuePtr object.
func NewQJsonValuePtr2(param1 *QJsonValuePtr) *QJsonValuePtr {
	ret := C.QJsonValuePtr_new2(param1.cPointer())
	return newQJsonValuePtr(ret)
}

func (this *QJsonValuePtr) OperatorMultiply() *QJsonValue {
	_ret := C.QJsonValuePtr_OperatorMultiply(this.h)
	return newQJsonValue_U(unsafe.Pointer(_ret))
}

func (this *QJsonValuePtr) OperatorMinusGreater() *QJsonValue {
	_ret := C.QJsonValuePtr_OperatorMinusGreater(this.h)
	return newQJsonValue_U(unsafe.Pointer(_ret))
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

func newQJsonValueRefPtr(h *C.QJsonValueRefPtr) *QJsonValueRefPtr {
	if h == nil {
		return nil
	}
	return &QJsonValueRefPtr{h: h}
}

func newQJsonValueRefPtr_U(h unsafe.Pointer) *QJsonValueRefPtr {
	return newQJsonValueRefPtr((*C.QJsonValueRefPtr)(h))
}

// NewQJsonValueRefPtr constructs a new QJsonValueRefPtr object.
func NewQJsonValueRefPtr(array *QJsonArray, idx int) *QJsonValueRefPtr {
	ret := C.QJsonValueRefPtr_new(array.cPointer(), (C.int)(idx))
	return newQJsonValueRefPtr(ret)
}

// NewQJsonValueRefPtr2 constructs a new QJsonValueRefPtr object.
func NewQJsonValueRefPtr2(object *QJsonObject, idx int) *QJsonValueRefPtr {
	ret := C.QJsonValueRefPtr_new2(object.cPointer(), (C.int)(idx))
	return newQJsonValueRefPtr(ret)
}

// NewQJsonValueRefPtr3 constructs a new QJsonValueRefPtr object.
func NewQJsonValueRefPtr3(param1 *QJsonValueRefPtr) *QJsonValueRefPtr {
	ret := C.QJsonValueRefPtr_new3(param1.cPointer())
	return newQJsonValueRefPtr(ret)
}

func (this *QJsonValueRefPtr) OperatorMultiply() *QJsonValueRef {
	_ret := C.QJsonValueRefPtr_OperatorMultiply(this.h)
	return newQJsonValueRef_U(unsafe.Pointer(_ret))
}

func (this *QJsonValueRefPtr) OperatorMinusGreater() *QJsonValueRef {
	_ret := C.QJsonValueRefPtr_OperatorMinusGreater(this.h)
	return newQJsonValueRef_U(unsafe.Pointer(_ret))
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
