package qt

/*

#include "gen_qstringliteral.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QStringDataPtr struct {
	h  *C.QStringDataPtr
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QStringDataPtr) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QStringDataPtr) cPointer() *C.QStringDataPtr {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QStringDataPtr) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQStringDataPtr constructs the type using only CGO pointers.
func newQStringDataPtr(h *C.QStringDataPtr) *QStringDataPtr {
	if h == nil {
		return nil
	}

	return &QStringDataPtr{h: h}
}

// UnsafeNewQStringDataPtr constructs the type using only unsafe pointers.
func UnsafeNewQStringDataPtr(h unsafe.Pointer) *QStringDataPtr {
	return newQStringDataPtr((*C.QStringDataPtr)(h))
}

// Delete this object from C++ memory.
func (this *QStringDataPtr) Delete() {
	C.QStringDataPtr_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QStringDataPtr) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QStringDataPtr_delete((*C.QStringDataPtr)(gc[0]))
	})
	this.miqtSetGC(gc)
}
