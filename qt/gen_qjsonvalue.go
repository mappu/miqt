package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qjsonvalue.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
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
	return &QJsonValue{h: h}
}

func newQJsonValue_U(h unsafe.Pointer) *QJsonValue {
	return newQJsonValue((*C.QJsonValue)(h))
}

// NewQJsonValue constructs a new QJsonValue object.
func NewQJsonValue(b bool) *QJsonValue {
	ret := C.QJsonValue_new((C.bool)(b))
	return newQJsonValue(ret)
}

// NewQJsonValue2 constructs a new QJsonValue object.
func NewQJsonValue2(n float64) *QJsonValue {
	ret := C.QJsonValue_new2((C.double)(n))
	return newQJsonValue(ret)
}

// NewQJsonValue3 constructs a new QJsonValue object.
func NewQJsonValue3(n int) *QJsonValue {
	ret := C.QJsonValue_new3((C.int)(n))
	return newQJsonValue(ret)
}

// NewQJsonValue4 constructs a new QJsonValue object.
func NewQJsonValue4(v int64) *QJsonValue {
	ret := C.QJsonValue_new4((C.int64_t)(v))
	return newQJsonValue(ret)
}

// NewQJsonValue5 constructs a new QJsonValue object.
func NewQJsonValue5(s string) *QJsonValue {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	ret := C.QJsonValue_new5(s_Cstring, C.ulong(len(s)))
	return newQJsonValue(ret)
}

// NewQJsonValue6 constructs a new QJsonValue object.
func NewQJsonValue6(s string) *QJsonValue {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	ret := C.QJsonValue_new6(s_Cstring)
	return newQJsonValue(ret)
}

// NewQJsonValue7 constructs a new QJsonValue object.
func NewQJsonValue7(a *QJsonArray) *QJsonValue {
	ret := C.QJsonValue_new7(a.cPointer())
	return newQJsonValue(ret)
}

// NewQJsonValue8 constructs a new QJsonValue object.
func NewQJsonValue8(o *QJsonObject) *QJsonValue {
	ret := C.QJsonValue_new8(o.cPointer())
	return newQJsonValue(ret)
}

// NewQJsonValue9 constructs a new QJsonValue object.
func NewQJsonValue9(other *QJsonValue) *QJsonValue {
	ret := C.QJsonValue_new9(other.cPointer())
	return newQJsonValue(ret)
}

func (this *QJsonValue) OperatorAssign(other *QJsonValue) {
	C.QJsonValue_OperatorAssign(this.h, other.cPointer())
}

func (this *QJsonValue) Swap(other *QJsonValue) {
	C.QJsonValue_Swap(this.h, other.cPointer())
}

func QJsonValue_FromVariant(variant *QVariant) *QJsonValue {
	ret := C.QJsonValue_FromVariant(variant.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQJsonValue(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QJsonValue) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QJsonValue) ToVariant() *QVariant {
	ret := C.QJsonValue_ToVariant(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVariant(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVariant) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QJsonValue) IsNull() bool {
	ret := C.QJsonValue_IsNull(this.h)
	return (bool)(ret)
}

func (this *QJsonValue) IsBool() bool {
	ret := C.QJsonValue_IsBool(this.h)
	return (bool)(ret)
}

func (this *QJsonValue) IsDouble() bool {
	ret := C.QJsonValue_IsDouble(this.h)
	return (bool)(ret)
}

func (this *QJsonValue) IsString() bool {
	ret := C.QJsonValue_IsString(this.h)
	return (bool)(ret)
}

func (this *QJsonValue) IsArray() bool {
	ret := C.QJsonValue_IsArray(this.h)
	return (bool)(ret)
}

func (this *QJsonValue) IsObject() bool {
	ret := C.QJsonValue_IsObject(this.h)
	return (bool)(ret)
}

func (this *QJsonValue) IsUndefined() bool {
	ret := C.QJsonValue_IsUndefined(this.h)
	return (bool)(ret)
}

func (this *QJsonValue) ToBool() bool {
	ret := C.QJsonValue_ToBool(this.h)
	return (bool)(ret)
}

func (this *QJsonValue) ToInt() int {
	ret := C.QJsonValue_ToInt(this.h)
	return (int)(ret)
}

func (this *QJsonValue) ToDouble() float64 {
	ret := C.QJsonValue_ToDouble(this.h)
	return (float64)(ret)
}

func (this *QJsonValue) ToString() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QJsonValue_ToString(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QJsonValue) ToStringWithDefaultValue(defaultValue string) string {
	defaultValue_Cstring := C.CString(defaultValue)
	defer C.free(unsafe.Pointer(defaultValue_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QJsonValue_ToStringWithDefaultValue(this.h, defaultValue_Cstring, C.ulong(len(defaultValue)), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QJsonValue) ToArray() *QJsonArray {
	ret := C.QJsonValue_ToArray(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQJsonArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QJsonArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QJsonValue) ToArrayWithDefaultValue(defaultValue *QJsonArray) *QJsonArray {
	ret := C.QJsonValue_ToArrayWithDefaultValue(this.h, defaultValue.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQJsonArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QJsonArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QJsonValue) ToObject() *QJsonObject {
	ret := C.QJsonValue_ToObject(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQJsonObject(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QJsonObject) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QJsonValue) ToObjectWithDefaultValue(defaultValue *QJsonObject) *QJsonObject {
	ret := C.QJsonValue_ToObjectWithDefaultValue(this.h, defaultValue.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQJsonObject(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QJsonObject) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QJsonValue) OperatorSubscript(key string) *QJsonValue {
	key_Cstring := C.CString(key)
	defer C.free(unsafe.Pointer(key_Cstring))
	ret := C.QJsonValue_OperatorSubscript(this.h, key_Cstring, C.ulong(len(key)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQJsonValue(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QJsonValue) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QJsonValue) OperatorSubscriptWithInt(i int) *QJsonValue {
	ret := C.QJsonValue_OperatorSubscriptWithInt(this.h, (C.int)(i))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQJsonValue(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QJsonValue) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QJsonValue) OperatorEqual(other *QJsonValue) bool {
	ret := C.QJsonValue_OperatorEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QJsonValue) OperatorNotEqual(other *QJsonValue) bool {
	ret := C.QJsonValue_OperatorNotEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QJsonValue) ToBool1(defaultValue bool) bool {
	ret := C.QJsonValue_ToBool1(this.h, (C.bool)(defaultValue))
	return (bool)(ret)
}

func (this *QJsonValue) ToInt1(defaultValue int) int {
	ret := C.QJsonValue_ToInt1(this.h, (C.int)(defaultValue))
	return (int)(ret)
}

func (this *QJsonValue) ToDouble1(defaultValue float64) float64 {
	ret := C.QJsonValue_ToDouble1(this.h, (C.double)(defaultValue))
	return (float64)(ret)
}

func (this *QJsonValue) Delete() {
	C.QJsonValue_Delete(this.h)
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
	ret := C.QJsonValueRef_ToVariant(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVariant(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVariant) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QJsonValueRef) IsNull() bool {
	ret := C.QJsonValueRef_IsNull(this.h)
	return (bool)(ret)
}

func (this *QJsonValueRef) IsBool() bool {
	ret := C.QJsonValueRef_IsBool(this.h)
	return (bool)(ret)
}

func (this *QJsonValueRef) IsDouble() bool {
	ret := C.QJsonValueRef_IsDouble(this.h)
	return (bool)(ret)
}

func (this *QJsonValueRef) IsString() bool {
	ret := C.QJsonValueRef_IsString(this.h)
	return (bool)(ret)
}

func (this *QJsonValueRef) IsArray() bool {
	ret := C.QJsonValueRef_IsArray(this.h)
	return (bool)(ret)
}

func (this *QJsonValueRef) IsObject() bool {
	ret := C.QJsonValueRef_IsObject(this.h)
	return (bool)(ret)
}

func (this *QJsonValueRef) IsUndefined() bool {
	ret := C.QJsonValueRef_IsUndefined(this.h)
	return (bool)(ret)
}

func (this *QJsonValueRef) ToBool() bool {
	ret := C.QJsonValueRef_ToBool(this.h)
	return (bool)(ret)
}

func (this *QJsonValueRef) ToInt() int {
	ret := C.QJsonValueRef_ToInt(this.h)
	return (int)(ret)
}

func (this *QJsonValueRef) ToDouble() float64 {
	ret := C.QJsonValueRef_ToDouble(this.h)
	return (float64)(ret)
}

func (this *QJsonValueRef) ToString() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QJsonValueRef_ToString(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QJsonValueRef) ToArray() *QJsonArray {
	ret := C.QJsonValueRef_ToArray(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQJsonArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QJsonArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QJsonValueRef) ToObject() *QJsonObject {
	ret := C.QJsonValueRef_ToObject(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQJsonObject(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QJsonObject) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QJsonValueRef) ToBoolWithDefaultValue(defaultValue bool) bool {
	ret := C.QJsonValueRef_ToBoolWithDefaultValue(this.h, (C.bool)(defaultValue))
	return (bool)(ret)
}

func (this *QJsonValueRef) ToIntWithDefaultValue(defaultValue int) int {
	ret := C.QJsonValueRef_ToIntWithDefaultValue(this.h, (C.int)(defaultValue))
	return (int)(ret)
}

func (this *QJsonValueRef) ToDoubleWithDefaultValue(defaultValue float64) float64 {
	ret := C.QJsonValueRef_ToDoubleWithDefaultValue(this.h, (C.double)(defaultValue))
	return (float64)(ret)
}

func (this *QJsonValueRef) ToStringWithDefaultValue(defaultValue string) string {
	defaultValue_Cstring := C.CString(defaultValue)
	defer C.free(unsafe.Pointer(defaultValue_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QJsonValueRef_ToStringWithDefaultValue(this.h, defaultValue_Cstring, C.ulong(len(defaultValue)), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QJsonValueRef) OperatorEqual(other *QJsonValue) bool {
	ret := C.QJsonValueRef_OperatorEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QJsonValueRef) OperatorNotEqual(other *QJsonValue) bool {
	ret := C.QJsonValueRef_OperatorNotEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QJsonValueRef) Delete() {
	C.QJsonValueRef_Delete(this.h)
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
	ret := C.QJsonValuePtr_OperatorMultiply(this.h)
	return newQJsonValue_U(unsafe.Pointer(ret))
}

func (this *QJsonValuePtr) OperatorMinusGreater() *QJsonValue {
	ret := C.QJsonValuePtr_OperatorMinusGreater(this.h)
	return newQJsonValue_U(unsafe.Pointer(ret))
}

func (this *QJsonValuePtr) OperatorAssign(param1 *QJsonValuePtr) {
	C.QJsonValuePtr_OperatorAssign(this.h, param1.cPointer())
}

func (this *QJsonValuePtr) Delete() {
	C.QJsonValuePtr_Delete(this.h)
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
	ret := C.QJsonValueRefPtr_OperatorMultiply(this.h)
	return newQJsonValueRef_U(unsafe.Pointer(ret))
}

func (this *QJsonValueRefPtr) OperatorMinusGreater() *QJsonValueRef {
	ret := C.QJsonValueRefPtr_OperatorMinusGreater(this.h)
	return newQJsonValueRef_U(unsafe.Pointer(ret))
}

func (this *QJsonValueRefPtr) OperatorAssign(param1 *QJsonValueRefPtr) {
	C.QJsonValueRefPtr_OperatorAssign(this.h, param1.cPointer())
}

func (this *QJsonValueRefPtr) Delete() {
	C.QJsonValueRefPtr_Delete(this.h)
}
