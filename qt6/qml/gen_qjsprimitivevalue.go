package qml

/*

#include "gen_qjsprimitivevalue.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"unsafe"
)

type QJSPrimitiveValue__Type byte

const (
	QJSPrimitiveValue__Undefined QJSPrimitiveValue__Type = 0
	QJSPrimitiveValue__Null      QJSPrimitiveValue__Type = 1
	QJSPrimitiveValue__Boolean   QJSPrimitiveValue__Type = 2
	QJSPrimitiveValue__Integer   QJSPrimitiveValue__Type = 3
	QJSPrimitiveValue__Double    QJSPrimitiveValue__Type = 4
	QJSPrimitiveValue__String    QJSPrimitiveValue__Type = 5
)

type QJSPrimitiveUndefined struct {
	h *C.QJSPrimitiveUndefined
}

func (this *QJSPrimitiveUndefined) cPointer() *C.QJSPrimitiveUndefined {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QJSPrimitiveUndefined) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQJSPrimitiveUndefined constructs the type using only CGO pointers.
func newQJSPrimitiveUndefined(h *C.QJSPrimitiveUndefined) *QJSPrimitiveUndefined {
	if h == nil {
		return nil
	}

	return &QJSPrimitiveUndefined{h: h}
}

// UnsafeNewQJSPrimitiveUndefined constructs the type using only unsafe pointers.
func UnsafeNewQJSPrimitiveUndefined(h unsafe.Pointer) *QJSPrimitiveUndefined {
	return newQJSPrimitiveUndefined((*C.QJSPrimitiveUndefined)(h))
}

// NewQJSPrimitiveUndefined constructs a new QJSPrimitiveUndefined object.
func NewQJSPrimitiveUndefined() *QJSPrimitiveUndefined {

	return newQJSPrimitiveUndefined(C.QJSPrimitiveUndefined_new())
}

// NewQJSPrimitiveUndefined2 constructs a new QJSPrimitiveUndefined object.
func NewQJSPrimitiveUndefined2(param1 *QJSPrimitiveUndefined) *QJSPrimitiveUndefined {

	return newQJSPrimitiveUndefined(C.QJSPrimitiveUndefined_new2(param1.cPointer()))
}

// Delete this object from C++ memory.
func (this *QJSPrimitiveUndefined) Delete() {
	C.QJSPrimitiveUndefined_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QJSPrimitiveUndefined) GoGC() {
	runtime.SetFinalizer(this, func(this *QJSPrimitiveUndefined) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QJSPrimitiveNull struct {
	h *C.QJSPrimitiveNull
}

func (this *QJSPrimitiveNull) cPointer() *C.QJSPrimitiveNull {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QJSPrimitiveNull) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQJSPrimitiveNull constructs the type using only CGO pointers.
func newQJSPrimitiveNull(h *C.QJSPrimitiveNull) *QJSPrimitiveNull {
	if h == nil {
		return nil
	}

	return &QJSPrimitiveNull{h: h}
}

// UnsafeNewQJSPrimitiveNull constructs the type using only unsafe pointers.
func UnsafeNewQJSPrimitiveNull(h unsafe.Pointer) *QJSPrimitiveNull {
	return newQJSPrimitiveNull((*C.QJSPrimitiveNull)(h))
}

// NewQJSPrimitiveNull constructs a new QJSPrimitiveNull object.
func NewQJSPrimitiveNull() *QJSPrimitiveNull {

	return newQJSPrimitiveNull(C.QJSPrimitiveNull_new())
}

// NewQJSPrimitiveNull2 constructs a new QJSPrimitiveNull object.
func NewQJSPrimitiveNull2(param1 *QJSPrimitiveNull) *QJSPrimitiveNull {

	return newQJSPrimitiveNull(C.QJSPrimitiveNull_new2(param1.cPointer()))
}

// Delete this object from C++ memory.
func (this *QJSPrimitiveNull) Delete() {
	C.QJSPrimitiveNull_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QJSPrimitiveNull) GoGC() {
	runtime.SetFinalizer(this, func(this *QJSPrimitiveNull) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QJSPrimitiveValue struct {
	h *C.QJSPrimitiveValue
}

func (this *QJSPrimitiveValue) cPointer() *C.QJSPrimitiveValue {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QJSPrimitiveValue) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQJSPrimitiveValue constructs the type using only CGO pointers.
func newQJSPrimitiveValue(h *C.QJSPrimitiveValue) *QJSPrimitiveValue {
	if h == nil {
		return nil
	}

	return &QJSPrimitiveValue{h: h}
}

// UnsafeNewQJSPrimitiveValue constructs the type using only unsafe pointers.
func UnsafeNewQJSPrimitiveValue(h unsafe.Pointer) *QJSPrimitiveValue {
	return newQJSPrimitiveValue((*C.QJSPrimitiveValue)(h))
}

// NewQJSPrimitiveValue constructs a new QJSPrimitiveValue object.
func NewQJSPrimitiveValue() *QJSPrimitiveValue {

	return newQJSPrimitiveValue(C.QJSPrimitiveValue_new())
}

// NewQJSPrimitiveValue2 constructs a new QJSPrimitiveValue object.
func NewQJSPrimitiveValue2(undefined QJSPrimitiveUndefined) *QJSPrimitiveValue {

	return newQJSPrimitiveValue(C.QJSPrimitiveValue_new2(undefined.cPointer()))
}

// NewQJSPrimitiveValue3 constructs a new QJSPrimitiveValue object.
func NewQJSPrimitiveValue3(null QJSPrimitiveNull) *QJSPrimitiveValue {

	return newQJSPrimitiveValue(C.QJSPrimitiveValue_new3(null.cPointer()))
}

// NewQJSPrimitiveValue4 constructs a new QJSPrimitiveValue object.
func NewQJSPrimitiveValue4(value bool) *QJSPrimitiveValue {

	return newQJSPrimitiveValue(C.QJSPrimitiveValue_new4((C.bool)(value)))
}

// NewQJSPrimitiveValue5 constructs a new QJSPrimitiveValue object.
func NewQJSPrimitiveValue5(value int) *QJSPrimitiveValue {

	return newQJSPrimitiveValue(C.QJSPrimitiveValue_new5((C.int)(value)))
}

// NewQJSPrimitiveValue6 constructs a new QJSPrimitiveValue object.
func NewQJSPrimitiveValue6(value float64) *QJSPrimitiveValue {

	return newQJSPrimitiveValue(C.QJSPrimitiveValue_new6((C.double)(value)))
}

// NewQJSPrimitiveValue7 constructs a new QJSPrimitiveValue object.
func NewQJSPrimitiveValue7(stringVal string) *QJSPrimitiveValue {
	stringVal_ms := C.struct_miqt_string{}
	stringVal_ms.data = C.CString(stringVal)
	stringVal_ms.len = C.size_t(len(stringVal))
	defer C.free(unsafe.Pointer(stringVal_ms.data))

	return newQJSPrimitiveValue(C.QJSPrimitiveValue_new7(stringVal_ms))
}

// NewQJSPrimitiveValue8 constructs a new QJSPrimitiveValue object.
func NewQJSPrimitiveValue8(typeVal qt6.QMetaType, value unsafe.Pointer) *QJSPrimitiveValue {

	return newQJSPrimitiveValue(C.QJSPrimitiveValue_new8((*C.QMetaType)(typeVal.UnsafePointer()), value))
}

// NewQJSPrimitiveValue9 constructs a new QJSPrimitiveValue object.
func NewQJSPrimitiveValue9(variant *qt6.QVariant) *QJSPrimitiveValue {

	return newQJSPrimitiveValue(C.QJSPrimitiveValue_new9((*C.QVariant)(variant.UnsafePointer())))
}

// NewQJSPrimitiveValue10 constructs a new QJSPrimitiveValue object.
func NewQJSPrimitiveValue10(param1 *QJSPrimitiveValue) *QJSPrimitiveValue {

	return newQJSPrimitiveValue(C.QJSPrimitiveValue_new10(param1.cPointer()))
}

func (this *QJSPrimitiveValue) Type() QJSPrimitiveValue__Type {
	return (QJSPrimitiveValue__Type)(C.QJSPrimitiveValue_type(this.h))
}

func (this *QJSPrimitiveValue) ToBoolean() bool {
	return (bool)(C.QJSPrimitiveValue_toBoolean(this.h))
}

func (this *QJSPrimitiveValue) ToInteger() int {
	return (int)(C.QJSPrimitiveValue_toInteger(this.h))
}

func (this *QJSPrimitiveValue) ToDouble() float64 {
	return (float64)(C.QJSPrimitiveValue_toDouble(this.h))
}

func (this *QJSPrimitiveValue) ToString() string {
	var _ms C.struct_miqt_string = C.QJSPrimitiveValue_toString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QJSPrimitiveValue) ToVariant() *qt6.QVariant {
	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(C.QJSPrimitiveValue_toVariant(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJSPrimitiveValue) OperatorPlusPlus() *QJSPrimitiveValue {
	return newQJSPrimitiveValue(C.QJSPrimitiveValue_operatorPlusPlus(this.h))
}

func (this *QJSPrimitiveValue) OperatorPlusPlusWithInt(param1 int) *QJSPrimitiveValue {
	_goptr := newQJSPrimitiveValue(C.QJSPrimitiveValue_operatorPlusPlusWithInt(this.h, (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJSPrimitiveValue) OperatorMinusMinus() *QJSPrimitiveValue {
	return newQJSPrimitiveValue(C.QJSPrimitiveValue_operatorMinusMinus(this.h))
}

func (this *QJSPrimitiveValue) OperatorMinusMinusWithInt(param1 int) *QJSPrimitiveValue {
	_goptr := newQJSPrimitiveValue(C.QJSPrimitiveValue_operatorMinusMinusWithInt(this.h, (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJSPrimitiveValue) OperatorPlus() *QJSPrimitiveValue {
	_goptr := newQJSPrimitiveValue(C.QJSPrimitiveValue_operatorPlus(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJSPrimitiveValue) OperatorMinus() *QJSPrimitiveValue {
	_goptr := newQJSPrimitiveValue(C.QJSPrimitiveValue_operatorMinus(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJSPrimitiveValue) StrictlyEquals(other *QJSPrimitiveValue) bool {
	return (bool)(C.QJSPrimitiveValue_strictlyEquals(this.h, other.cPointer()))
}

func (this *QJSPrimitiveValue) Equals(other *QJSPrimitiveValue) bool {
	return (bool)(C.QJSPrimitiveValue_equals(this.h, other.cPointer()))
}

func (this *QJSPrimitiveValue) OperatorAssign(param1 *QJSPrimitiveValue) {
	C.QJSPrimitiveValue_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QJSPrimitiveValue) Delete() {
	C.QJSPrimitiveValue_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QJSPrimitiveValue) GoGC() {
	runtime.SetFinalizer(this, func(this *QJSPrimitiveValue) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
