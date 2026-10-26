package script

/*

#include "gen_qscriptstring.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QScriptString struct {
	h  *C.QScriptString
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QScriptString) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QScriptString) cPointer() *C.QScriptString {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QScriptString) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQScriptString constructs the type using only CGO pointers.
func newQScriptString(h *C.QScriptString) *QScriptString {
	if h == nil {
		return nil
	}

	return &QScriptString{h: h}
}

// UnsafeNewQScriptString constructs the type using only unsafe pointers.
func UnsafeNewQScriptString(h unsafe.Pointer) *QScriptString {
	return newQScriptString((*C.QScriptString)(h))
}

// NewQScriptString constructs a new QScriptString object.
func NewQScriptString() *QScriptString {

	return newQScriptString(C.QScriptString_new())
}

// NewQScriptString2 constructs a new QScriptString object.
func NewQScriptString2(other *QScriptString) *QScriptString {
	defer runtime.KeepAlive(other)

	return newQScriptString(C.QScriptString_new2(other.cPointer()))
}

func (this *QScriptString) OperatorAssign(other *QScriptString) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QScriptString_operatorAssign(this.h, other.cPointer())
}

func (this *QScriptString) IsValid() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QScriptString_isValid(this.h))
}

func (this *QScriptString) OperatorEqual(other *QScriptString) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	return (bool)(C.QScriptString_operatorEqual(this.h, other.cPointer()))
}

func (this *QScriptString) OperatorNotEqual(other *QScriptString) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	return (bool)(C.QScriptString_operatorNotEqual(this.h, other.cPointer()))
}

func (this *QScriptString) ToArrayIndex() uint {
	defer runtime.KeepAlive(this)
	return (uint)(C.QScriptString_toArrayIndex(this.h))
}

func (this *QScriptString) ToString() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QScriptString_toString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QScriptString) ToQString() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QScriptString_ToQString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QScriptString) ToArrayIndexWithOk(ok *bool) uint {
	defer runtime.KeepAlive(this)
	return (uint)(C.QScriptString_toArrayIndexWithOk(this.h, (*C.bool)(unsafe.Pointer(ok))))
}

// Delete this object from C++ memory.
func (this *QScriptString) Delete() {
	C.QScriptString_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QScriptString) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QScriptString_delete((*C.QScriptString)(gc[0]))
	})
	this.miqtSetGC(gc)
}
