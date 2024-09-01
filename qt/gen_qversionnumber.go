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
	seg_CArray := (*[0xffff]C.int)(C.malloc(C.ulong(8 * len(seg))))
	defer C.free(unsafe.Pointer(seg_CArray))
	for i := range seg {
		seg_CArray[i] = (C.int)(seg[i])
	}
	ret := C.QVersionNumber_new2(&seg_CArray[0], C.ulong(len(seg)))
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
	ret := C.QVersionNumber_IsNull(this.h)
	return (bool)(ret)
}

func (this *QVersionNumber) IsNormalized() bool {
	ret := C.QVersionNumber_IsNormalized(this.h)
	return (bool)(ret)
}

func (this *QVersionNumber) MajorVersion() int {
	ret := C.QVersionNumber_MajorVersion(this.h)
	return (int)(ret)
}

func (this *QVersionNumber) MinorVersion() int {
	ret := C.QVersionNumber_MinorVersion(this.h)
	return (int)(ret)
}

func (this *QVersionNumber) MicroVersion() int {
	ret := C.QVersionNumber_MicroVersion(this.h)
	return (int)(ret)
}

func (this *QVersionNumber) Normalized() *QVersionNumber {
	ret := C.QVersionNumber_Normalized(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVersionNumber(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVersionNumber) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QVersionNumber) Segments() []int {
	var _out *C.int = nil
	var _out_len C.size_t = 0
	C.QVersionNumber_Segments(this.h, &_out, &_out_len)
	ret := make([]int, int(_out_len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_out)) // mrs jackson
	for i := 0; i < int(_out_len); i++ {
		ret[i] = (int)(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QVersionNumber) SegmentAt(index int) int {
	ret := C.QVersionNumber_SegmentAt(this.h, (C.int)(index))
	return (int)(ret)
}

func (this *QVersionNumber) SegmentCount() int {
	ret := C.QVersionNumber_SegmentCount(this.h)
	return (int)(ret)
}

func (this *QVersionNumber) IsPrefixOf(other *QVersionNumber) bool {
	ret := C.QVersionNumber_IsPrefixOf(this.h, other.cPointer())
	return (bool)(ret)
}

func QVersionNumber_Compare(v1 *QVersionNumber, v2 *QVersionNumber) int {
	ret := C.QVersionNumber_Compare(v1.cPointer(), v2.cPointer())
	return (int)(ret)
}

func QVersionNumber_CommonPrefix(v1 *QVersionNumber, v2 *QVersionNumber) *QVersionNumber {
	ret := C.QVersionNumber_CommonPrefix(v1.cPointer(), v2.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVersionNumber(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVersionNumber) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QVersionNumber) ToString() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QVersionNumber_ToString(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QVersionNumber_FromString(stringVal string) *QVersionNumber {
	stringVal_Cstring := C.CString(stringVal)
	defer C.free(unsafe.Pointer(stringVal_Cstring))
	ret := C.QVersionNumber_FromString(stringVal_Cstring, C.ulong(len(stringVal)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVersionNumber(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVersionNumber) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QVersionNumber_FromString22(stringVal string, suffixIndex *int) *QVersionNumber {
	stringVal_Cstring := C.CString(stringVal)
	defer C.free(unsafe.Pointer(stringVal_Cstring))
	ret := C.QVersionNumber_FromString22(stringVal_Cstring, C.ulong(len(stringVal)), (*C.int)(unsafe.Pointer(suffixIndex)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVersionNumber(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVersionNumber) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QVersionNumber) Delete() {
	C.QVersionNumber_Delete(this.h)
}
