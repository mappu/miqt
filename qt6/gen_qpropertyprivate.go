package qt6

/*

#include "gen_qpropertyprivate.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QUntypedPropertyData struct {
	h *C.QUntypedPropertyData
}

func (this *QUntypedPropertyData) cPointer() *C.QUntypedPropertyData {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QUntypedPropertyData) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQUntypedPropertyData constructs the type using only CGO pointers.
func newQUntypedPropertyData(h *C.QUntypedPropertyData) *QUntypedPropertyData {
	if h == nil {
		return nil
	}

	return &QUntypedPropertyData{h: h}
}

// UnsafeNewQUntypedPropertyData constructs the type using only unsafe pointers.
func UnsafeNewQUntypedPropertyData(h unsafe.Pointer) *QUntypedPropertyData {
	return newQUntypedPropertyData((*C.QUntypedPropertyData)(h))
}

// Delete this object from C++ memory.
func (this *QUntypedPropertyData) Delete() {
	C.QUntypedPropertyData_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QUntypedPropertyData) GoGC() {
	runtime.SetFinalizer(this, func(this *QUntypedPropertyData) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
