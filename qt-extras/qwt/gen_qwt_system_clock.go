package qwt

/*

#include "gen_qwt_system_clock.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QwtSystemClock struct {
	h  *C.QwtSystemClock
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QwtSystemClock) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QwtSystemClock) cPointer() *C.QwtSystemClock {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtSystemClock) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtSystemClock constructs the type using only CGO pointers.
func newQwtSystemClock(h *C.QwtSystemClock) *QwtSystemClock {
	if h == nil {
		return nil
	}

	return &QwtSystemClock{h: h}
}

// UnsafeNewQwtSystemClock constructs the type using only unsafe pointers.
func UnsafeNewQwtSystemClock(h unsafe.Pointer) *QwtSystemClock {
	return newQwtSystemClock((*C.QwtSystemClock)(h))
}

// NewQwtSystemClock constructs a new QwtSystemClock object.
func NewQwtSystemClock() *QwtSystemClock {

	return newQwtSystemClock(C.QwtSystemClock_new())
}

func (this *QwtSystemClock) IsNull() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QwtSystemClock_isNull(this.h))
}

func (this *QwtSystemClock) Start() {
	defer runtime.KeepAlive(this)
	C.QwtSystemClock_start(this.h)
}

func (this *QwtSystemClock) Restart() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QwtSystemClock_restart(this.h))
}

func (this *QwtSystemClock) Elapsed() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QwtSystemClock_elapsed(this.h))
}

func (this *QwtSystemClock) OperatorAssign(param1 *QwtSystemClock) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QwtSystemClock_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QwtSystemClock) Delete() {
	C.QwtSystemClock_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QwtSystemClock) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QwtSystemClock_delete((*C.QwtSystemClock)(gc[0]))
	})
	this.miqtSetGC(gc)
}
