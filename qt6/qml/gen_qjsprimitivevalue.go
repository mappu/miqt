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
	h  *C.QJSPrimitiveUndefined
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QJSPrimitiveUndefined) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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
	defer runtime.KeepAlive(param1)

	return newQJSPrimitiveUndefined(C.QJSPrimitiveUndefined_new2(param1.cPointer()))
}

// Delete this object from C++ memory.
func (this *QJSPrimitiveUndefined) Delete() {
	C.QJSPrimitiveUndefined_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QJSPrimitiveUndefined) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QJSPrimitiveUndefined_delete((*C.QJSPrimitiveUndefined)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QJSPrimitiveNull struct {
	h  *C.QJSPrimitiveNull
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QJSPrimitiveNull) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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
	defer runtime.KeepAlive(param1)

	return newQJSPrimitiveNull(C.QJSPrimitiveNull_new2(param1.cPointer()))
}

// Delete this object from C++ memory.
func (this *QJSPrimitiveNull) Delete() {
	C.QJSPrimitiveNull_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QJSPrimitiveNull) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QJSPrimitiveNull_delete((*C.QJSPrimitiveNull)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QJSPrimitiveValue struct {
	h  *C.QJSPrimitiveValue
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QJSPrimitiveValue) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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
	defer runtime.KeepAlive(undefined)

	return newQJSPrimitiveValue(C.QJSPrimitiveValue_new2(undefined.cPointer()))
}

// NewQJSPrimitiveValue3 constructs a new QJSPrimitiveValue object.
func NewQJSPrimitiveValue3(null QJSPrimitiveNull) *QJSPrimitiveValue {
	defer runtime.KeepAlive(null)

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
	defer runtime.KeepAlive(typeVal)

	return newQJSPrimitiveValue(C.QJSPrimitiveValue_new8((*C.QMetaType)(typeVal.UnsafePointer()), value))
}

// NewQJSPrimitiveValue9 constructs a new QJSPrimitiveValue object.
func NewQJSPrimitiveValue9(variant *qt6.QVariant) *QJSPrimitiveValue {
	defer runtime.KeepAlive(variant)

	return newQJSPrimitiveValue(C.QJSPrimitiveValue_new9((*C.QVariant)(variant.UnsafePointer())))
}

// NewQJSPrimitiveValue10 constructs a new QJSPrimitiveValue object.
func NewQJSPrimitiveValue10(param1 *QJSPrimitiveValue) *QJSPrimitiveValue {
	defer runtime.KeepAlive(param1)

	return newQJSPrimitiveValue(C.QJSPrimitiveValue_new10(param1.cPointer()))
}

func (this *QJSPrimitiveValue) Type() QJSPrimitiveValue__Type {
	defer runtime.KeepAlive(this)
	return (QJSPrimitiveValue__Type)(C.QJSPrimitiveValue_type(this.h))
}

func (this *QJSPrimitiveValue) ToBoolean() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QJSPrimitiveValue_toBoolean(this.h))
}

func (this *QJSPrimitiveValue) ToInteger() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QJSPrimitiveValue_toInteger(this.h))
}

func (this *QJSPrimitiveValue) ToDouble() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QJSPrimitiveValue_toDouble(this.h))
}

func (this *QJSPrimitiveValue) ToString() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QJSPrimitiveValue_toString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QJSPrimitiveValue) ToVariant() *qt6.QVariant {
	defer runtime.KeepAlive(this)
	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(C.QJSPrimitiveValue_toVariant(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJSPrimitiveValue) OperatorPlusPlus() *QJSPrimitiveValue {
	defer runtime.KeepAlive(this)
	_ret := newQJSPrimitiveValue(C.QJSPrimitiveValue_operatorPlusPlus(this.h))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QJSPrimitiveValue) OperatorPlusPlusWithInt(param1 int) *QJSPrimitiveValue {
	defer runtime.KeepAlive(this)
	_goptr := newQJSPrimitiveValue(C.QJSPrimitiveValue_operatorPlusPlusWithInt(this.h, (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJSPrimitiveValue) OperatorMinusMinus() *QJSPrimitiveValue {
	defer runtime.KeepAlive(this)
	_ret := newQJSPrimitiveValue(C.QJSPrimitiveValue_operatorMinusMinus(this.h))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QJSPrimitiveValue) OperatorMinusMinusWithInt(param1 int) *QJSPrimitiveValue {
	defer runtime.KeepAlive(this)
	_goptr := newQJSPrimitiveValue(C.QJSPrimitiveValue_operatorMinusMinusWithInt(this.h, (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJSPrimitiveValue) OperatorPlus() *QJSPrimitiveValue {
	defer runtime.KeepAlive(this)
	_goptr := newQJSPrimitiveValue(C.QJSPrimitiveValue_operatorPlus(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJSPrimitiveValue) OperatorMinus() *QJSPrimitiveValue {
	defer runtime.KeepAlive(this)
	_goptr := newQJSPrimitiveValue(C.QJSPrimitiveValue_operatorMinus(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJSPrimitiveValue) StrictlyEquals(other *QJSPrimitiveValue) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	return (bool)(C.QJSPrimitiveValue_strictlyEquals(this.h, other.cPointer()))
}

func (this *QJSPrimitiveValue) Equals(other *QJSPrimitiveValue) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	return (bool)(C.QJSPrimitiveValue_equals(this.h, other.cPointer()))
}

func (this *QJSPrimitiveValue) OperatorAssign(param1 *QJSPrimitiveValue) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QJSPrimitiveValue_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QJSPrimitiveValue) Delete() {
	C.QJSPrimitiveValue_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QJSPrimitiveValue) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QJSPrimitiveValue_delete((*C.QJSPrimitiveValue)(gc[0]))
	})
	this.miqtSetGC(gc)
}
