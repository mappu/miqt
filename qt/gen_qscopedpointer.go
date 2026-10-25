package qt

/*

#include "gen_qscopedpointer.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QScopedPointerPodDeleter struct {
	h  *C.QScopedPointerPodDeleter
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QScopedPointerPodDeleter) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QScopedPointerPodDeleter) cPointer() *C.QScopedPointerPodDeleter {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QScopedPointerPodDeleter) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQScopedPointerPodDeleter constructs the type using only CGO pointers.
func newQScopedPointerPodDeleter(h *C.QScopedPointerPodDeleter) *QScopedPointerPodDeleter {
	if h == nil {
		return nil
	}

	return &QScopedPointerPodDeleter{h: h}
}

// UnsafeNewQScopedPointerPodDeleter constructs the type using only unsafe pointers.
func UnsafeNewQScopedPointerPodDeleter(h unsafe.Pointer) *QScopedPointerPodDeleter {
	return newQScopedPointerPodDeleter((*C.QScopedPointerPodDeleter)(h))
}

func QScopedPointerPodDeleter_Cleanup(pointer unsafe.Pointer) {
	C.QScopedPointerPodDeleter_cleanup(pointer)
}

// Delete this object from C++ memory.
func (this *QScopedPointerPodDeleter) Delete() {
	C.QScopedPointerPodDeleter_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QScopedPointerPodDeleter) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QScopedPointerPodDeleter_delete((*C.QScopedPointerPodDeleter)(gc[0]))
	})
	this.miqtSetGC(gc)
}
