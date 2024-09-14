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
	QArrayData__AllocationOption__CapacityReserved QArrayData__AllocationOption = 1
	QArrayData__AllocationOption__Unsharable       QArrayData__AllocationOption = 2
	QArrayData__AllocationOption__RawData          QArrayData__AllocationOption = 4
	QArrayData__AllocationOption__Grow             QArrayData__AllocationOption = 8
	QArrayData__AllocationOption__Default          QArrayData__AllocationOption = 0
)

type QtPrivate__QContainerImplHelper__CutResult int

const (
	QtPrivate__QContainerImplHelper__CutResult__Null   QtPrivate__QContainerImplHelper__CutResult = 0
	QtPrivate__QContainerImplHelper__CutResult__Empty  QtPrivate__QContainerImplHelper__CutResult = 1
	QtPrivate__QContainerImplHelper__CutResult__Full   QtPrivate__QContainerImplHelper__CutResult = 2
	QtPrivate__QContainerImplHelper__CutResult__Subset QtPrivate__QContainerImplHelper__CutResult = 3
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

func newQArrayData(h *C.QArrayData) *QArrayData {
	if h == nil {
		return nil
	}
	return &QArrayData{h: h}
}

func newQArrayData_U(h unsafe.Pointer) *QArrayData {
	return newQArrayData((*C.QArrayData)(h))
}

func (this *QArrayData) IsMutable() bool {
	_ret := C.QArrayData_IsMutable(this.h)
	return (bool)(_ret)
}

func (this *QArrayData) DetachCapacity(newSize uint64) uint64 {
	_ret := C.QArrayData_DetachCapacity(this.h, (C.size_t)(newSize))
	return (uint64)(_ret)
}

func (this *QArrayData) DetachFlags() int {
	_ret := C.QArrayData_DetachFlags(this.h)
	return (int)(_ret)
}

func (this *QArrayData) CloneFlags() int {
	_ret := C.QArrayData_CloneFlags(this.h)
	return (int)(_ret)
}

func QArrayData_Allocate(objectSize uint64, alignment uint64, capacity uint64) *QArrayData {
	_ret := C.QArrayData_Allocate((C.size_t)(objectSize), (C.size_t)(alignment), (C.size_t)(capacity))
	return newQArrayData_U(unsafe.Pointer(_ret))
}

func QArrayData_ReallocateUnaligned(data *QArrayData, objectSize uint64, newCapacity uint64) *QArrayData {
	_ret := C.QArrayData_ReallocateUnaligned(data.cPointer(), (C.size_t)(objectSize), (C.size_t)(newCapacity))
	return newQArrayData_U(unsafe.Pointer(_ret))
}

func QArrayData_Deallocate(data *QArrayData, objectSize uint64, alignment uint64) {
	C.QArrayData_Deallocate(data.cPointer(), (C.size_t)(objectSize), (C.size_t)(alignment))
}

func QArrayData_SharedNull() *QArrayData {
	_ret := C.QArrayData_SharedNull()
	return newQArrayData_U(unsafe.Pointer(_ret))
}

func QArrayData_Allocate4(objectSize uint64, alignment uint64, capacity uint64, options int) *QArrayData {
	_ret := C.QArrayData_Allocate4((C.size_t)(objectSize), (C.size_t)(alignment), (C.size_t)(capacity), (C.int)(options))
	return newQArrayData_U(unsafe.Pointer(_ret))
}

func QArrayData_ReallocateUnaligned4(data *QArrayData, objectSize uint64, newCapacity uint64, newOptions int) *QArrayData {
	_ret := C.QArrayData_ReallocateUnaligned4(data.cPointer(), (C.size_t)(objectSize), (C.size_t)(newCapacity), (C.int)(newOptions))
	return newQArrayData_U(unsafe.Pointer(_ret))
}

// Delete this object from C++ memory.
func (this *QArrayData) Delete() {
	C.QArrayData_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QArrayData) GoGC() {
	runtime.SetFinalizer(this, func(this *QArrayData) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QtPrivate__QContainerImplHelper struct {
	h *C.QtPrivate__QContainerImplHelper
}

func (this *QtPrivate__QContainerImplHelper) cPointer() *C.QtPrivate__QContainerImplHelper {
	if this == nil {
		return nil
	}
	return this.h
}

func newQtPrivate__QContainerImplHelper(h *C.QtPrivate__QContainerImplHelper) *QtPrivate__QContainerImplHelper {
	if h == nil {
		return nil
	}
	return &QtPrivate__QContainerImplHelper{h: h}
}

func newQtPrivate__QContainerImplHelper_U(h unsafe.Pointer) *QtPrivate__QContainerImplHelper {
	return newQtPrivate__QContainerImplHelper((*C.QtPrivate__QContainerImplHelper)(h))
}

func QtPrivate__QContainerImplHelper_Mid(originalLength int, position *int, length *int) QtPrivate__QContainerImplHelper__CutResult {
	_ret := C.QtPrivate__QContainerImplHelper_Mid((C.int)(originalLength), (*C.int)(unsafe.Pointer(position)), (*C.int)(unsafe.Pointer(length)))
	return (QtPrivate__QContainerImplHelper__CutResult)(_ret)
}

// Delete this object from C++ memory.
func (this *QtPrivate__QContainerImplHelper) Delete() {
	C.QtPrivate__QContainerImplHelper_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QtPrivate__QContainerImplHelper) GoGC() {
	runtime.SetFinalizer(this, func(this *QtPrivate__QContainerImplHelper) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
