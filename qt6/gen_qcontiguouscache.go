package qt6

/*

#include "gen_qcontiguouscache.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QContiguousCacheData struct {
	h          *C.QContiguousCacheData
	isSubclass bool
}

func (this *QContiguousCacheData) cPointer() *C.QContiguousCacheData {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QContiguousCacheData) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQContiguousCacheData constructs the type using only CGO pointers.
func newQContiguousCacheData(h *C.QContiguousCacheData) *QContiguousCacheData {
	if h == nil {
		return nil
	}

	return &QContiguousCacheData{h: h}
}

// UnsafeNewQContiguousCacheData constructs the type using only unsafe pointers.
func UnsafeNewQContiguousCacheData(h unsafe.Pointer) *QContiguousCacheData {
	return newQContiguousCacheData((*C.QContiguousCacheData)(h))
}

func QContiguousCacheData_AllocateData(size int64, alignment int64) *QContiguousCacheData {
	return newQContiguousCacheData(C.QContiguousCacheData_AllocateData((C.ptrdiff_t)(size), (C.ptrdiff_t)(alignment)))
}

func QContiguousCacheData_FreeData(data *QContiguousCacheData) {
	C.QContiguousCacheData_FreeData(data.cPointer())
}

// Delete this object from C++ memory.
func (this *QContiguousCacheData) Delete() {
	C.QContiguousCacheData_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QContiguousCacheData) GoGC() {
	runtime.SetFinalizer(this, func(this *QContiguousCacheData) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
