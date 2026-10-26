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
	h  *C.QPageRanges
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QPageRanges) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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

	return newQPageRanges(C.QPageRanges_new())
}

// NewQPageRanges2 constructs a new QPageRanges object.
func NewQPageRanges2(other *QPageRanges) *QPageRanges {
	defer runtime.KeepAlive(other)

	return newQPageRanges(C.QPageRanges_new2(other.cPointer()))
}

func (this *QPageRanges) OperatorAssign(other *QPageRanges) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QPageRanges_operatorAssign(this.h, other.cPointer())
}

func (this *QPageRanges) Swap(other *QPageRanges) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QPageRanges_swap(this.h, other.cPointer())
}

func (this *QPageRanges) AddPage(pageNumber int) {
	defer runtime.KeepAlive(this)
	C.QPageRanges_addPage(this.h, (C.int)(pageNumber))
}

func (this *QPageRanges) AddRange(from int, to int) {
	defer runtime.KeepAlive(this)
	C.QPageRanges_addRange(this.h, (C.int)(from), (C.int)(to))
}

func (this *QPageRanges) ToRangeList() []QPageRanges__Range {
	defer runtime.KeepAlive(this)
	var _ma C.struct_miqt_array = C.QPageRanges_toRangeList(this.h)
	_ret := make([]QPageRanges__Range, int(_ma.len))
	_outCast := unsafe.Slice((**C.QPageRanges__Range)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQPageRanges__Range(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QPageRanges) Clear() {
	defer runtime.KeepAlive(this)
	C.QPageRanges_clear(this.h)
}

func (this *QPageRanges) ToString() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QPageRanges_toString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPageRanges_FromString(ranges string) *QPageRanges {
	ranges_ms := C.struct_miqt_string{}
	ranges_ms.data = C.CString(ranges)
	ranges_ms.len = C.size_t(len(ranges))
	defer C.free(unsafe.Pointer(ranges_ms.data))
	_goptr := newQPageRanges(C.QPageRanges_fromString(ranges_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPageRanges) Contains(pageNumber int) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QPageRanges_contains(this.h, (C.int)(pageNumber)))
}

func (this *QPageRanges) IsEmpty() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QPageRanges_isEmpty(this.h))
}

func (this *QPageRanges) FirstPage() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QPageRanges_firstPage(this.h))
}

func (this *QPageRanges) LastPage() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QPageRanges_lastPage(this.h))
}

func (this *QPageRanges) Detach() {
	defer runtime.KeepAlive(this)
	C.QPageRanges_detach(this.h)
}

// Delete this object from C++ memory.
func (this *QPageRanges) Delete() {
	C.QPageRanges_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QPageRanges) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QPageRanges_delete((*C.QPageRanges)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QPageRanges__Range struct {
	h  *C.QPageRanges__Range
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QPageRanges__Range) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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

	return newQPageRanges__Range(C.QPageRanges__Range_new())
}

// NewQPageRanges__Range2 constructs a new QPageRanges::Range object.
func NewQPageRanges__Range2(param1 *QPageRanges__Range) *QPageRanges__Range {
	defer runtime.KeepAlive(param1)

	return newQPageRanges__Range(C.QPageRanges__Range_new2(param1.cPointer()))
}

func (this *QPageRanges__Range) From() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QPageRanges__Range_from(this.h))
}

func (this *QPageRanges__Range) SetFrom(from int) {
	defer runtime.KeepAlive(this)
	C.QPageRanges__Range_setFrom(this.h, (C.int)(from))
}

func (this *QPageRanges__Range) To() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QPageRanges__Range_to(this.h))
}

func (this *QPageRanges__Range) SetTo(to int) {
	defer runtime.KeepAlive(this)
	C.QPageRanges__Range_setTo(this.h, (C.int)(to))
}

func (this *QPageRanges__Range) Contains(pageNumber int) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QPageRanges__Range_contains(this.h, (C.int)(pageNumber)))
}

// Delete this object from C++ memory.
func (this *QPageRanges__Range) Delete() {
	C.QPageRanges__Range_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QPageRanges__Range) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QPageRanges__Range_delete((*C.QPageRanges__Range)(gc[0]))
	})
	this.miqtSetGC(gc)
}
