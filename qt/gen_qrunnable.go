package qt

/*

#include "gen_qrunnable.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QRunnable struct {
	h  *C.QRunnable
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QRunnable) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QRunnable) cPointer() *C.QRunnable {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QRunnable) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQRunnable constructs the type using only CGO pointers.
func newQRunnable(h *C.QRunnable) *QRunnable {
	if h == nil {
		return nil
	}

	return &QRunnable{h: h}
}

// UnsafeNewQRunnable constructs the type using only unsafe pointers.
func UnsafeNewQRunnable(h unsafe.Pointer) *QRunnable {
	return newQRunnable((*C.QRunnable)(h))
}

// NewQRunnable constructs a new QRunnable object.
func NewQRunnable() *QRunnable {

	return newQRunnable(C.QRunnable_new())
}

func (this *QRunnable) Run() {
	defer runtime.KeepAlive(this)
	C.QRunnable_run(this.h)
}

func (this *QRunnable) AutoDelete() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QRunnable_autoDelete(this.h))
}

func (this *QRunnable) SetAutoDelete(_autoDelete bool) {
	defer runtime.KeepAlive(this)
	C.QRunnable_setAutoDelete(this.h, (C.bool)(_autoDelete))
}

func (this *QRunnable) OperatorAssign(param1 *QRunnable) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QRunnable_operatorAssign(this.h, param1.cPointer())
}
func (this *QRunnable) OnRun(slot func()) {
	C.QRunnable_override_virtual_run(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QRunnable_run
func miqt_exec_callback_QRunnable_run(self *C.QRunnable, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()

}

// Delete this object from C++ memory.
func (this *QRunnable) Delete() {
	C.QRunnable_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QRunnable) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QRunnable_delete((*C.QRunnable)(gc[0]))
	})
	this.miqtSetGC(gc)
}
