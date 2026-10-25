package qml

/*

#include "gen_qqmlscriptstring.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QQmlScriptString struct {
	h  *C.QQmlScriptString
	gc *[1]*C.QQmlScriptString
}

func (this *QQmlScriptString) cPointer() *C.QQmlScriptString {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QQmlScriptString) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQQmlScriptString constructs the type using only CGO pointers.
func newQQmlScriptString(h *C.QQmlScriptString) *QQmlScriptString {
	if h == nil {
		return nil
	}

	return &QQmlScriptString{h: h}
}

// UnsafeNewQQmlScriptString constructs the type using only unsafe pointers.
func UnsafeNewQQmlScriptString(h unsafe.Pointer) *QQmlScriptString {
	return newQQmlScriptString((*C.QQmlScriptString)(h))
}

// NewQQmlScriptString constructs a new QQmlScriptString object.
func NewQQmlScriptString() *QQmlScriptString {

	return newQQmlScriptString(C.QQmlScriptString_new())
}

// NewQQmlScriptString2 constructs a new QQmlScriptString object.
func NewQQmlScriptString2(param1 *QQmlScriptString) *QQmlScriptString {

	return newQQmlScriptString(C.QQmlScriptString_new2(param1.cPointer()))
}

func (this *QQmlScriptString) OperatorAssign(param1 *QQmlScriptString) {
	C.QQmlScriptString_operatorAssign(this.h, param1.cPointer())
}

func (this *QQmlScriptString) OperatorEqual(param1 *QQmlScriptString) bool {
	return (bool)(C.QQmlScriptString_operatorEqual(this.h, param1.cPointer()))
}

func (this *QQmlScriptString) OperatorNotEqual(param1 *QQmlScriptString) bool {
	return (bool)(C.QQmlScriptString_operatorNotEqual(this.h, param1.cPointer()))
}

func (this *QQmlScriptString) IsEmpty() bool {
	return (bool)(C.QQmlScriptString_isEmpty(this.h))
}

func (this *QQmlScriptString) IsUndefinedLiteral() bool {
	return (bool)(C.QQmlScriptString_isUndefinedLiteral(this.h))
}

func (this *QQmlScriptString) IsNullLiteral() bool {
	return (bool)(C.QQmlScriptString_isNullLiteral(this.h))
}

func (this *QQmlScriptString) StringLiteral() string {
	var _ms C.struct_miqt_string = C.QQmlScriptString_stringLiteral(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QQmlScriptString) NumberLiteral(ok *bool) float64 {
	return (float64)(C.QQmlScriptString_numberLiteral(this.h, (*C.bool)(unsafe.Pointer(ok))))
}

func (this *QQmlScriptString) BooleanLiteral(ok *bool) bool {
	return (bool)(C.QQmlScriptString_booleanLiteral(this.h, (*C.bool)(unsafe.Pointer(ok))))
}

// Delete this object from C++ memory.
func (this *QQmlScriptString) Delete() {
	C.QQmlScriptString_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QQmlScriptString) GoGC() {
	if this.gc != nil {
		return
	}
	this.gc = &[1]*C.QQmlScriptString{this.h}
	runtime.SetFinalizer(this.gc, func(gc *[1]*C.QQmlScriptString) {
		C.QQmlScriptString_delete(gc[0])
	})
}
