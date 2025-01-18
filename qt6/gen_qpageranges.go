package qt6

/*

#include "gen_qpageranges.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QPageRanges struct {
	h          *C.QPageRanges
	isSubclass bool
}

func (this *QPageRanges) cPointer() *C.QPageRanges {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QPageRanges) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQPageRanges constructs the type using only CGO pointers.
func newQPageRanges(h *C.QPageRanges) *QPageRanges {
	if h == nil {
		return nil
	}

	return &QPageRanges{h: h}
}

// UnsafeNewQPageRanges constructs the type using only unsafe pointers.
func UnsafeNewQPageRanges(h unsafe.Pointer) *QPageRanges {
	return newQPageRanges((*C.QPageRanges)(h))
}

// NewQPageRanges constructs a new QPageRanges object.
func NewQPageRanges() *QPageRanges {

	ret := newQPageRanges(C.QPageRanges_new())
	ret.isSubclass = true
	return ret
}

// NewQPageRanges2 constructs a new QPageRanges object.
func NewQPageRanges2(other *QPageRanges) *QPageRanges {

	ret := newQPageRanges(C.QPageRanges_new2(other.cPointer()))
	ret.isSubclass = true
	return ret
}

func (this *QPageRanges) OperatorAssign(other *QPageRanges) {
	C.QPageRanges_OperatorAssign(this.h, other.cPointer())
}

func (this *QPageRanges) Swap(other *QPageRanges) {
	C.QPageRanges_Swap(this.h, other.cPointer())
}

func (this *QPageRanges) AddPage(pageNumber int) {
	C.QPageRanges_AddPage(this.h, (C.int)(pageNumber))
}

func (this *QPageRanges) AddRange(from int, to int) {
	C.QPageRanges_AddRange(this.h, (C.int)(from), (C.int)(to))
}

func (this *QPageRanges) ToRangeList() []QPageRanges__Range {
	var _ma C.struct_miqt_array = C.QPageRanges_ToRangeList(this.h)
	_ret := make([]QPageRanges__Range, int(_ma.len))
	_outCast := (*[0xffff]*C.QPageRanges__Range)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQPageRanges__Range(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QPageRanges) Clear() {
	C.QPageRanges_Clear(this.h)
}

func (this *QPageRanges) ToString() string {
	var _ms C.struct_miqt_string = C.QPageRanges_ToString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPageRanges_FromString(ranges string) *QPageRanges {
	ranges_ms := C.struct_miqt_string{}
	ranges_ms.data = C.CString(ranges)
	ranges_ms.len = C.size_t(len(ranges))
	defer C.free(unsafe.Pointer(ranges_ms.data))
	_goptr := newQPageRanges(C.QPageRanges_FromString(ranges_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPageRanges) Contains(pageNumber int) bool {
	return (bool)(C.QPageRanges_Contains(this.h, (C.int)(pageNumber)))
}

func (this *QPageRanges) IsEmpty() bool {
	return (bool)(C.QPageRanges_IsEmpty(this.h))
}

func (this *QPageRanges) FirstPage() int {
	return (int)(C.QPageRanges_FirstPage(this.h))
}

func (this *QPageRanges) LastPage() int {
	return (int)(C.QPageRanges_LastPage(this.h))
}

func (this *QPageRanges) Detach() {
	C.QPageRanges_Detach(this.h)
}

// Delete this object from C++ memory.
func (this *QPageRanges) Delete() {
	C.QPageRanges_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPageRanges) GoGC() {
	runtime.SetFinalizer(this, func(this *QPageRanges) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QPageRanges__Range struct {
	h          *C.QPageRanges__Range
	isSubclass bool
}

func (this *QPageRanges__Range) cPointer() *C.QPageRanges__Range {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QPageRanges__Range) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQPageRanges__Range constructs the type using only CGO pointers.
func newQPageRanges__Range(h *C.QPageRanges__Range) *QPageRanges__Range {
	if h == nil {
		return nil
	}

	return &QPageRanges__Range{h: h}
}

// UnsafeNewQPageRanges__Range constructs the type using only unsafe pointers.
func UnsafeNewQPageRanges__Range(h unsafe.Pointer) *QPageRanges__Range {
	return newQPageRanges__Range((*C.QPageRanges__Range)(h))
}

// NewQPageRanges__Range constructs a new QPageRanges::Range object.
func NewQPageRanges__Range() *QPageRanges__Range {

	ret := newQPageRanges__Range(C.QPageRanges__Range_new())
	ret.isSubclass = true
	return ret
}

// NewQPageRanges__Range2 constructs a new QPageRanges::Range object.
func NewQPageRanges__Range2(param1 *QPageRanges__Range) *QPageRanges__Range {

	ret := newQPageRanges__Range(C.QPageRanges__Range_new2(param1.cPointer()))
	ret.isSubclass = true
	return ret
}

func (this *QPageRanges__Range) Contains(pageNumber int) bool {
	return (bool)(C.QPageRanges__Range_Contains(this.h, (C.int)(pageNumber)))
}

// Delete this object from C++ memory.
func (this *QPageRanges__Range) Delete() {
	C.QPageRanges__Range_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPageRanges__Range) GoGC() {
	runtime.SetFinalizer(this, func(this *QPageRanges__Range) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
