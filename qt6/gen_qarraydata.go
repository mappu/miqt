package qt6

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
	QArrayData__Grow     QArrayData__AllocationOption = 0
	QArrayData__KeepSize QArrayData__AllocationOption = 1
)

type QArrayData__GrowthPosition int

const (
	QArrayData__GrowsAtEnd       QArrayData__GrowthPosition = 0
	QArrayData__GrowsAtBeginning QArrayData__GrowthPosition = 1
)

type QArrayData__ArrayOption int

const (
	QArrayData__ArrayOptionDefault QArrayData__ArrayOption = 0
	QArrayData__CapacityReserved   QArrayData__ArrayOption = 1
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

func newQArrayData(h *C.QArrayData) *QArrayData {
	if h == nil {
		return nil
	}
	return &QArrayData{h: h}
}

func UnsafeNewQArrayData(h unsafe.Pointer) *QArrayData {
	return newQArrayData((*C.QArrayData)(h))
}

func (this *QArrayData) AllocatedCapacity() int64 {
	return (int64)(C.QArrayData_AllocatedCapacity(this.h))
}

func (this *QArrayData) ConstAllocatedCapacity() int64 {
	return (int64)(C.QArrayData_ConstAllocatedCapacity(this.h))
}

func (this *QArrayData) Ref() bool {
	return (bool)(C.QArrayData_Ref(this.h))
}

func (this *QArrayData) Deref() bool {
	return (bool)(C.QArrayData_Deref(this.h))
}

func (this *QArrayData) IsShared() bool {
	return (bool)(C.QArrayData_IsShared(this.h))
}

func (this *QArrayData) NeedsDetach() bool {
	return (bool)(C.QArrayData_NeedsDetach(this.h))
}

func (this *QArrayData) DetachCapacity(newSize int64) int64 {
	return (int64)(C.QArrayData_DetachCapacity(this.h, (C.ptrdiff_t)(newSize)))
}

func QArrayData_ReallocateUnaligned(data *QArrayData, dataPointer unsafe.Pointer, objectSize int64, newCapacity int64, option QArrayData__AllocationOption) struct {
	First  *QArrayData
	Second unsafe.Pointer
} {
	var _mm C.struct_miqt_map = C.QArrayData_ReallocateUnaligned(data.cPointer(), dataPointer, (C.ptrdiff_t)(objectSize), (C.ptrdiff_t)(newCapacity), (C.int)(option))
	_First_CArray := (*[0xffff]*C.QArrayData)(unsafe.Pointer(_mm.keys))
	_Second_CArray := (*[0xffff]unsafe.Pointer)(unsafe.Pointer(_mm.values))
	_entry_First := UnsafeNewQArrayData(unsafe.Pointer(_First_CArray[0]))
	_entry_Second := (unsafe.Pointer)(_Second_CArray[0])

	return struct {
		First  *QArrayData
		Second unsafe.Pointer
	}{First: _entry_First, Second: _entry_Second}
}

func QArrayData_Deallocate(data *QArrayData, objectSize int64, alignment int64) {
	C.QArrayData_Deallocate(data.cPointer(), (C.ptrdiff_t)(objectSize), (C.ptrdiff_t)(alignment))
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

func (this *QtPrivate__QContainerImplHelper) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQtPrivate__QContainerImplHelper(h *C.QtPrivate__QContainerImplHelper) *QtPrivate__QContainerImplHelper {
	if h == nil {
		return nil
	}
	return &QtPrivate__QContainerImplHelper{h: h}
}

func UnsafeNewQtPrivate__QContainerImplHelper(h unsafe.Pointer) *QtPrivate__QContainerImplHelper {
	return newQtPrivate__QContainerImplHelper((*C.QtPrivate__QContainerImplHelper)(h))
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
