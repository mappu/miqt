package qml

/*

#include "gen_qqmlpropertyvaluesource.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QQmlPropertyValueSource struct {
	h  *C.QQmlPropertyValueSource
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QQmlPropertyValueSource) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QQmlPropertyValueSource) cPointer() *C.QQmlPropertyValueSource {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QQmlPropertyValueSource) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQQmlPropertyValueSource constructs the type using only CGO pointers.
func newQQmlPropertyValueSource(h *C.QQmlPropertyValueSource) *QQmlPropertyValueSource {
	if h == nil {
		return nil
	}

	return &QQmlPropertyValueSource{h: h}
}

// UnsafeNewQQmlPropertyValueSource constructs the type using only unsafe pointers.
func UnsafeNewQQmlPropertyValueSource(h unsafe.Pointer) *QQmlPropertyValueSource {
	return newQQmlPropertyValueSource((*C.QQmlPropertyValueSource)(h))
}

// NewQQmlPropertyValueSource constructs a new QQmlPropertyValueSource object.
func NewQQmlPropertyValueSource() *QQmlPropertyValueSource {

	return newQQmlPropertyValueSource(C.QQmlPropertyValueSource_new())
}

func (this *QQmlPropertyValueSource) SetTarget(target *QQmlProperty) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(target)
	C.QQmlPropertyValueSource_setTarget(this.h, target.cPointer())
}

func (this *QQmlPropertyValueSource) OperatorAssign(param1 *QQmlPropertyValueSource) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QQmlPropertyValueSource_operatorAssign(this.h, param1.cPointer())
}
func (this *QQmlPropertyValueSource) OnSetTarget(slot func(target *QQmlProperty)) {
	ok := C.QQmlPropertyValueSource_override_virtual_setTarget(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QQmlPropertyValueSource_setTarget
func miqt_exec_callback_QQmlPropertyValueSource_setTarget(self *C.QQmlPropertyValueSource, cb C.intptr_t, target *C.QQmlProperty) {
	gofunc, ok := cgo.Handle(cb).Value().(func(target *QQmlProperty))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQQmlProperty(target)

	gofunc(slotval1)

}

// Delete this object from C++ memory.
func (this *QQmlPropertyValueSource) Delete() {
	C.QQmlPropertyValueSource_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QQmlPropertyValueSource) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QQmlPropertyValueSource_delete((*C.QQmlPropertyValueSource)(gc[0]))
	})
	this.miqtSetGC(gc)
}
