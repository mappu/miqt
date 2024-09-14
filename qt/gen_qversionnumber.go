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
	h *C.QVersionNumber
}

func (this *QVersionNumber) cPointer() *C.QVersionNumber {
	if this == nil {
		return nil
	}
	return this.h
}

func newQVersionNumber(h *C.QVersionNumber) *QVersionNumber {
	if h == nil {
		return nil
	}
	return &QVersionNumber{h: h}
}

func newQVersionNumber_U(h unsafe.Pointer) *QVersionNumber {
	return newQVersionNumber((*C.QVersionNumber)(h))
}

// NewQVersionNumber constructs a new QVersionNumber object.
func NewQVersionNumber() *QVersionNumber {
	ret := C.QVersionNumber_new()
	return newQVersionNumber(ret)
}

// NewQVersionNumber2 constructs a new QVersionNumber object.
func NewQVersionNumber2(seg []int) *QVersionNumber {
	// For the C ABI, malloc a C array of raw pointers
	seg_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8 * len(seg))))
	defer C.free(unsafe.Pointer(seg_CArray))
	for i := range seg {
		seg_CArray[i] = (C.int)(seg[i])
	}
	seg_ma := &C.struct_miqt_array{len: C.size_t(len(seg)), data: unsafe.Pointer(seg_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(seg_ma))
	ret := C.QVersionNumber_new2(seg_ma)
	return newQVersionNumber(ret)
}

// NewQVersionNumber3 constructs a new QVersionNumber object.
func NewQVersionNumber3(maj int) *QVersionNumber {
	ret := C.QVersionNumber_new3((C.int)(maj))
	return newQVersionNumber(ret)
}

// NewQVersionNumber4 constructs a new QVersionNumber object.
func NewQVersionNumber4(maj int, min int) *QVersionNumber {
	ret := C.QVersionNumber_new4((C.int)(maj), (C.int)(min))
	return newQVersionNumber(ret)
}

// NewQVersionNumber5 constructs a new QVersionNumber object.
func NewQVersionNumber5(maj int, min int, mic int) *QVersionNumber {
	ret := C.QVersionNumber_new5((C.int)(maj), (C.int)(min), (C.int)(mic))
	return newQVersionNumber(ret)
}

func (this *QVersionNumber) IsNull() bool {
	_ret := C.QVersionNumber_IsNull(this.h)
	return (bool)(_ret)
}

func (this *QVersionNumber) IsNormalized() bool {
	_ret := C.QVersionNumber_IsNormalized(this.h)
	return (bool)(_ret)
}

func (this *QVersionNumber) MajorVersion() int {
	_ret := C.QVersionNumber_MajorVersion(this.h)
	return (int)(_ret)
}

func (this *QVersionNumber) MinorVersion() int {
	_ret := C.QVersionNumber_MinorVersion(this.h)
	return (int)(_ret)
}

func (this *QVersionNumber) MicroVersion() int {
	_ret := C.QVersionNumber_MicroVersion(this.h)
	return (int)(_ret)
}

func (this *QVersionNumber) Normalized() *QVersionNumber {
	_ret := C.QVersionNumber_Normalized(this.h)
	_goptr := newQVersionNumber(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVersionNumber) Segments() []int {
	var _ma *C.struct_miqt_array = C.QVersionNumber_Segments(this.h)
	_ret := make([]int, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // mrs jackson
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (int)(_outCast[i])
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QVersionNumber) SegmentAt(index int) int {
	_ret := C.QVersionNumber_SegmentAt(this.h, (C.int)(index))
	return (int)(_ret)
}

func (this *QVersionNumber) SegmentCount() int {
	_ret := C.QVersionNumber_SegmentCount(this.h)
	return (int)(_ret)
}

func (this *QVersionNumber) IsPrefixOf(other *QVersionNumber) bool {
	_ret := C.QVersionNumber_IsPrefixOf(this.h, other.cPointer())
	return (bool)(_ret)
}

func QVersionNumber_Compare(v1 *QVersionNumber, v2 *QVersionNumber) int {
	_ret := C.QVersionNumber_Compare(v1.cPointer(), v2.cPointer())
	return (int)(_ret)
}

func QVersionNumber_CommonPrefix(v1 *QVersionNumber, v2 *QVersionNumber) *QVersionNumber {
	_ret := C.QVersionNumber_CommonPrefix(v1.cPointer(), v2.cPointer())
	_goptr := newQVersionNumber(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVersionNumber) ToString() string {
	var _ms *C.struct_miqt_string = C.QVersionNumber_ToString(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QVersionNumber_FromString(stringVal string) *QVersionNumber {
	stringVal_ms := miqt_strdupg(stringVal)
	defer C.free(stringVal_ms)
	_ret := C.QVersionNumber_FromString((*C.struct_miqt_string)(stringVal_ms))
	_goptr := newQVersionNumber(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QVersionNumber_FromString22(stringVal string, suffixIndex *int) *QVersionNumber {
	stringVal_ms := miqt_strdupg(stringVal)
	defer C.free(stringVal_ms)
	_ret := C.QVersionNumber_FromString22((*C.struct_miqt_string)(stringVal_ms), (*C.int)(unsafe.Pointer(suffixIndex)))
	_goptr := newQVersionNumber(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QVersionNumber) Delete() {
	C.QVersionNumber_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QVersionNumber) GoGC() {
	runtime.SetFinalizer(this, func(this *QVersionNumber) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
