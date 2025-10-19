package qt

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
	h *C.QContiguousCacheData
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

func (this *QContiguousCacheData) Alloc() int {
	return (int)(C.QContiguousCacheData_alloc(this.h))
}

func (this *QContiguousCacheData) SetAlloc(alloc int) {
	C.QContiguousCacheData_setAlloc(this.h, (C.int)(alloc))
}

func (this *QContiguousCacheData) Count() int {
	return (int)(C.QContiguousCacheData_count(this.h))
}

func (this *QContiguousCacheData) SetCount(count int) {
	C.QContiguousCacheData_setCount(this.h, (C.int)(count))
}

func (this *QContiguousCacheData) Start() int {
	return (int)(C.QContiguousCacheData_start(this.h))
}

func (this *QContiguousCacheData) SetStart(start int) {
	C.QContiguousCacheData_setStart(this.h, (C.int)(start))
}

func (this *QContiguousCacheData) Offset() int {
	return (int)(C.QContiguousCacheData_offset(this.h))
}

func (this *QContiguousCacheData) SetOffset(offset int) {
	C.QContiguousCacheData_setOffset(this.h, (C.int)(offset))
}

func (this *QContiguousCacheData) Sharable() uint {
	return (uint)(C.QContiguousCacheData_sharable(this.h))
}

func (this *QContiguousCacheData) SetSharable(sharable uint) {
	C.QContiguousCacheData_setSharable(this.h, (C.uint)(sharable))
}

func (this *QContiguousCacheData) Reserved() uint {
	return (uint)(C.QContiguousCacheData_reserved(this.h))
}

func (this *QContiguousCacheData) SetReserved(reserved uint) {
	C.QContiguousCacheData_setReserved(this.h, (C.uint)(reserved))
}

func QContiguousCacheData_AllocateData(size int, alignment int) *QContiguousCacheData {
	return newQContiguousCacheData(C.QContiguousCacheData_allocateData((C.int)(size), (C.int)(alignment)))
}

func QContiguousCacheData_FreeData(data *QContiguousCacheData) {
	C.QContiguousCacheData_freeData(data.cPointer())
}

// Delete this object from C++ memory.
func (this *QContiguousCacheData) Delete() {
	C.QContiguousCacheData_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QContiguousCacheData) GoGC() {
	runtime.SetFinalizer(this, func(this *QContiguousCacheData) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
