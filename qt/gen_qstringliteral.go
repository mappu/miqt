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
	h          *C.QStringDataPtr
	isSubclass bool
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
	C.QStringDataPtr_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QStringDataPtr) GoGC() {
	runtime.SetFinalizer(this, func(this *QStringDataPtr) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
