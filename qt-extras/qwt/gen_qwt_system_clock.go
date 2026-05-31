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
	h *C.QwtSystemClock
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
	return (bool)(C.QwtSystemClock_isNull(this.h))
}

func (this *QwtSystemClock) Start() {
	C.QwtSystemClock_start(this.h)
}

func (this *QwtSystemClock) Restart() float64 {
	return (float64)(C.QwtSystemClock_restart(this.h))
}

func (this *QwtSystemClock) Elapsed() float64 {
	return (float64)(C.QwtSystemClock_elapsed(this.h))
}

func (this *QwtSystemClock) OperatorAssign(param1 *QwtSystemClock) {
	C.QwtSystemClock_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QwtSystemClock) Delete() {
	C.QwtSystemClock_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtSystemClock) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtSystemClock) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
