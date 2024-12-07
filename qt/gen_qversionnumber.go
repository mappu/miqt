package qt

/*

#include "gen_qversionnumber.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QVersionNumber struct {
	h          *C.QVersionNumber
	isSubclass bool
}

func (this *QVersionNumber) cPointer() *C.QVersionNumber {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QVersionNumber) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQVersionNumber constructs the type using only CGO pointers.
func newQVersionNumber(h *C.QVersionNumber) *QVersionNumber {
	if h == nil {
		return nil
	}

	return &QVersionNumber{h: h}
}

// UnsafeNewQVersionNumber constructs the type using only unsafe pointers.
func UnsafeNewQVersionNumber(h unsafe.Pointer) *QVersionNumber {
	return newQVersionNumber((*C.QVersionNumber)(h))
}

// NewQVersionNumber constructs a new QVersionNumber object.
func NewQVersionNumber() *QVersionNumber {

	ret := newQVersionNumber(C.QVersionNumber_new())
	ret.isSubclass = true
	return ret
}

// NewQVersionNumber2 constructs a new QVersionNumber object.
func NewQVersionNumber2(seg []int) *QVersionNumber {
	seg_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8 * len(seg))))
	defer C.free(unsafe.Pointer(seg_CArray))
	for i := range seg {
		seg_CArray[i] = (C.int)(seg[i])
	}
	seg_ma := C.struct_miqt_array{len: C.size_t(len(seg)), data: unsafe.Pointer(seg_CArray)}

	ret := newQVersionNumber(C.QVersionNumber_new2(seg_ma))
	ret.isSubclass = true
	return ret
}

// NewQVersionNumber3 constructs a new QVersionNumber object.
func NewQVersionNumber3(maj int) *QVersionNumber {

	ret := newQVersionNumber(C.QVersionNumber_new3((C.int)(maj)))
	ret.isSubclass = true
	return ret
}

// NewQVersionNumber4 constructs a new QVersionNumber object.
func NewQVersionNumber4(maj int, min int) *QVersionNumber {

	ret := newQVersionNumber(C.QVersionNumber_new4((C.int)(maj), (C.int)(min)))
	ret.isSubclass = true
	return ret
}

// NewQVersionNumber5 constructs a new QVersionNumber object.
func NewQVersionNumber5(maj int, min int, mic int) *QVersionNumber {

	ret := newQVersionNumber(C.QVersionNumber_new5((C.int)(maj), (C.int)(min), (C.int)(mic)))
	ret.isSubclass = true
	return ret
}

func (this *QVersionNumber) IsNull() bool {
	return (bool)(C.QVersionNumber_IsNull(this.h))
}

func (this *QVersionNumber) IsNormalized() bool {
	return (bool)(C.QVersionNumber_IsNormalized(this.h))
}

func (this *QVersionNumber) MajorVersion() int {
	return (int)(C.QVersionNumber_MajorVersion(this.h))
}

func (this *QVersionNumber) MinorVersion() int {
	return (int)(C.QVersionNumber_MinorVersion(this.h))
}

func (this *QVersionNumber) MicroVersion() int {
	return (int)(C.QVersionNumber_MicroVersion(this.h))
}

func (this *QVersionNumber) Normalized() *QVersionNumber {
	_goptr := newQVersionNumber(C.QVersionNumber_Normalized(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVersionNumber) Segments() []int {
	var _ma C.struct_miqt_array = C.QVersionNumber_Segments(this.h)
	_ret := make([]int, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (int)(_outCast[i])
	}
	return _ret
}

func (this *QVersionNumber) SegmentAt(index int) int {
	return (int)(C.QVersionNumber_SegmentAt(this.h, (C.int)(index)))
}

func (this *QVersionNumber) SegmentCount() int {
	return (int)(C.QVersionNumber_SegmentCount(this.h))
}

func (this *QVersionNumber) IsPrefixOf(other *QVersionNumber) bool {
	return (bool)(C.QVersionNumber_IsPrefixOf(this.h, other.cPointer()))
}

func QVersionNumber_Compare(v1 *QVersionNumber, v2 *QVersionNumber) int {
	return (int)(C.QVersionNumber_Compare(v1.cPointer(), v2.cPointer()))
}

func QVersionNumber_CommonPrefix(v1 *QVersionNumber, v2 *QVersionNumber) *QVersionNumber {
	_goptr := newQVersionNumber(C.QVersionNumber_CommonPrefix(v1.cPointer(), v2.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVersionNumber) ToString() string {
	var _ms C.struct_miqt_string = C.QVersionNumber_ToString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QVersionNumber_FromString(stringVal string) *QVersionNumber {
	stringVal_ms := C.struct_miqt_string{}
	stringVal_ms.data = C.CString(stringVal)
	stringVal_ms.len = C.size_t(len(stringVal))
	defer C.free(unsafe.Pointer(stringVal_ms.data))
	_goptr := newQVersionNumber(C.QVersionNumber_FromString(stringVal_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QVersionNumber_FromString22(stringVal string, suffixIndex *int) *QVersionNumber {
	stringVal_ms := C.struct_miqt_string{}
	stringVal_ms.data = C.CString(stringVal)
	stringVal_ms.len = C.size_t(len(stringVal))
	defer C.free(unsafe.Pointer(stringVal_ms.data))
	_goptr := newQVersionNumber(C.QVersionNumber_FromString22(stringVal_ms, (*C.int)(unsafe.Pointer(suffixIndex))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QVersionNumber) Delete() {
	C.QVersionNumber_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QVersionNumber) GoGC() {
	runtime.SetFinalizer(this, func(this *QVersionNumber) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
