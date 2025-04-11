package qt

/*

#include "gen_qarraydata.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QArrayData__AllocationOption int

const (
	QArrayData__CapacityReserved QArrayData__AllocationOption = 1
	QArrayData__Unsharable       QArrayData__AllocationOption = 2
	QArrayData__RawData          QArrayData__AllocationOption = 4
	QArrayData__Grow             QArrayData__AllocationOption = 8
	QArrayData__Default          QArrayData__AllocationOption = 0
)

type QtPrivate__QContainerImplHelper__CutResult int

const (
	QtPrivate__QContainerImplHelper__Null   QtPrivate__QContainerImplHelper__CutResult = 0
	QtPrivate__QContainerImplHelper__Empty  QtPrivate__QContainerImplHelper__CutResult = 1
	QtPrivate__QContainerImplHelper__Full   QtPrivate__QContainerImplHelper__CutResult = 2
	QtPrivate__QContainerImplHelper__Subset QtPrivate__QContainerImplHelper__CutResult = 3
)

type QArrayData struct {
	h *C.QArrayData
}

func (this *QArrayData) cPointer() *C.QArrayData {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QArrayData) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQArrayData constructs the type using only CGO pointers.
func newQArrayData(h *C.QArrayData) *QArrayData {
	if h == nil {
		return nil
	}

	return &QArrayData{h: h}
}

// UnsafeNewQArrayData constructs the type using only unsafe pointers.
func UnsafeNewQArrayData(h unsafe.Pointer) *QArrayData {
	return newQArrayData((*C.QArrayData)(h))
}

func (this *QArrayData) Data() unsafe.Pointer {
	return (unsafe.Pointer)(C.QArrayData_data(this.h))
}

func (this *QArrayData) Data2() unsafe.Pointer {
	return (unsafe.Pointer)(C.QArrayData_data2(this.h))
}

func (this *QArrayData) IsMutable() bool {
	return (bool)(C.QArrayData_isMutable(this.h))
}

func (this *QArrayData) DetachCapacity(newSize uint64) uint64 {
	return (uint64)(C.QArrayData_detachCapacity(this.h, (C.size_t)(newSize)))
}

func (this *QArrayData) DetachFlags() QArrayData__AllocationOption {
	return (QArrayData__AllocationOption)(C.QArrayData_detachFlags(this.h))
}

func (this *QArrayData) CloneFlags() QArrayData__AllocationOption {
	return (QArrayData__AllocationOption)(C.QArrayData_cloneFlags(this.h))
}

func QArrayData_Allocate(objectSize uint64, alignment uint64, capacity uint64) *QArrayData {
	return newQArrayData(C.QArrayData_allocate((C.size_t)(objectSize), (C.size_t)(alignment), (C.size_t)(capacity)))
}

func QArrayData_ReallocateUnaligned(data *QArrayData, objectSize uint64, newCapacity uint64) *QArrayData {
	return newQArrayData(C.QArrayData_reallocateUnaligned(data.cPointer(), (C.size_t)(objectSize), (C.size_t)(newCapacity)))
}

func QArrayData_Deallocate(data *QArrayData, objectSize uint64, alignment uint64) {
	C.QArrayData_deallocate(data.cPointer(), (C.size_t)(objectSize), (C.size_t)(alignment))
}

func QArrayData_SharedNull() *QArrayData {
	return newQArrayData(C.QArrayData_sharedNull())
}

func QArrayData_Allocate2(objectSize uint64, alignment uint64, capacity uint64, options QArrayData__AllocationOption) *QArrayData {
	return newQArrayData(C.QArrayData_allocate2((C.size_t)(objectSize), (C.size_t)(alignment), (C.size_t)(capacity), (C.int)(options)))
}

func QArrayData_ReallocateUnaligned2(data *QArrayData, objectSize uint64, newCapacity uint64, newOptions QArrayData__AllocationOption) *QArrayData {
	return newQArrayData(C.QArrayData_reallocateUnaligned2(data.cPointer(), (C.size_t)(objectSize), (C.size_t)(newCapacity), (C.int)(newOptions)))
}

// Delete this object from C++ memory.
func (this *QArrayData) Delete() {
	C.QArrayData_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QArrayData) GoGC() {
	runtime.SetFinalizer(this, func(this *QArrayData) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
