package qt6

/*

#include "gen_qstringbuilder.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QAbstractConcatenable struct {
	h  *C.QAbstractConcatenable
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QAbstractConcatenable) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QAbstractConcatenable) cPointer() *C.QAbstractConcatenable {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAbstractConcatenable) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAbstractConcatenable constructs the type using only CGO pointers.
func newQAbstractConcatenable(h *C.QAbstractConcatenable) *QAbstractConcatenable {
	if h == nil {
		return nil
	}

	return &QAbstractConcatenable{h: h}
}

// UnsafeNewQAbstractConcatenable constructs the type using only unsafe pointers.
func UnsafeNewQAbstractConcatenable(h unsafe.Pointer) *QAbstractConcatenable {
	return newQAbstractConcatenable((*C.QAbstractConcatenable)(h))
}

// Delete this object from C++ memory.
func (this *QAbstractConcatenable) Delete() {
	C.QAbstractConcatenable_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QAbstractConcatenable) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QAbstractConcatenable_delete((*C.QAbstractConcatenable)(gc[0]))
	})
	this.miqtSetGC(gc)
}
