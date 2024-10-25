package qt6

/*

#include "gen_qbitarray.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QBitArray struct {
	h *C.QBitArray
}

func (this *QBitArray) cPointer() *C.QBitArray {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QBitArray) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQBitArray(h *C.QBitArray) *QBitArray {
	if h == nil {
		return nil
	}
	return &QBitArray{h: h}
}

func UnsafeNewQBitArray(h unsafe.Pointer) *QBitArray {
	return newQBitArray((*C.QBitArray)(h))
}

// NewQBitArray constructs a new QBitArray object.
func NewQBitArray() *QBitArray {
	ret := C.QBitArray_new()
	return newQBitArray(ret)
}

// NewQBitArray2 constructs a new QBitArray object.
func NewQBitArray2(size int64) *QBitArray {
	ret := C.QBitArray_new2((C.ptrdiff_t)(size))
	return newQBitArray(ret)
}

// NewQBitArray3 constructs a new QBitArray object.
func NewQBitArray3(other *QBitArray) *QBitArray {
	ret := C.QBitArray_new3(other.cPointer())
	return newQBitArray(ret)
}

// NewQBitArray4 constructs a new QBitArray object.
func NewQBitArray4(size int64, val bool) *QBitArray {
	ret := C.QBitArray_new4((C.ptrdiff_t)(size), (C.bool)(val))
	return newQBitArray(ret)
}

func (this *QBitArray) OperatorAssign(other *QBitArray) {
	C.QBitArray_OperatorAssign(this.h, other.cPointer())
}

func (this *QBitArray) Swap(other *QBitArray) {
	C.QBitArray_Swap(this.h, other.cPointer())
}

func (this *QBitArray) Size() int64 {
	return (int64)(C.QBitArray_Size(this.h))
}

func (this *QBitArray) Count() int64 {
	return (int64)(C.QBitArray_Count(this.h))
}

func (this *QBitArray) CountWithOn(on bool) int64 {
	return (int64)(C.QBitArray_CountWithOn(this.h, (C.bool)(on)))
}

func (this *QBitArray) IsEmpty() bool {
	return (bool)(C.QBitArray_IsEmpty(this.h))
}

func (this *QBitArray) IsNull() bool {
	return (bool)(C.QBitArray_IsNull(this.h))
}

func (this *QBitArray) Resize(size int64) {
	C.QBitArray_Resize(this.h, (C.ptrdiff_t)(size))
}

func (this *QBitArray) Detach() {
	C.QBitArray_Detach(this.h)
}

func (this *QBitArray) IsDetached() bool {
	return (bool)(C.QBitArray_IsDetached(this.h))
}

func (this *QBitArray) Clear() {
	C.QBitArray_Clear(this.h)
}

func (this *QBitArray) TestBit(i int64) bool {
	return (bool)(C.QBitArray_TestBit(this.h, (C.ptrdiff_t)(i)))
}

func (this *QBitArray) SetBit(i int64) {
	C.QBitArray_SetBit(this.h, (C.ptrdiff_t)(i))
}

func (this *QBitArray) SetBit2(i int64, val bool) {
	C.QBitArray_SetBit2(this.h, (C.ptrdiff_t)(i), (C.bool)(val))
}

func (this *QBitArray) ClearBit(i int64) {
	C.QBitArray_ClearBit(this.h, (C.ptrdiff_t)(i))
}

func (this *QBitArray) ToggleBit(i int64) bool {
	return (bool)(C.QBitArray_ToggleBit(this.h, (C.ptrdiff_t)(i)))
}

func (this *QBitArray) At(i int64) bool {
	return (bool)(C.QBitArray_At(this.h, (C.ptrdiff_t)(i)))
}

func (this *QBitArray) OperatorSubscript(i int64) *QBitRef {
	_ret := C.QBitArray_OperatorSubscript(this.h, (C.ptrdiff_t)(i))
	_goptr := newQBitRef(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QBitArray) OperatorSubscriptWithQsizetype(i int64) bool {
	return (bool)(C.QBitArray_OperatorSubscriptWithQsizetype(this.h, (C.ptrdiff_t)(i)))
}

func (this *QBitArray) OperatorBitwiseAndAssign(param1 *QBitArray) {
	C.QBitArray_OperatorBitwiseAndAssign(this.h, param1.cPointer())
}

func (this *QBitArray) OperatorBitwiseOrAssign(param1 *QBitArray) {
	C.QBitArray_OperatorBitwiseOrAssign(this.h, param1.cPointer())
}

func (this *QBitArray) OperatorBitwiseNotAssign(param1 *QBitArray) {
	C.QBitArray_OperatorBitwiseNotAssign(this.h, param1.cPointer())
}

func (this *QBitArray) OperatorEqual(other *QBitArray) bool {
	return (bool)(C.QBitArray_OperatorEqual(this.h, other.cPointer()))
}

func (this *QBitArray) OperatorNotEqual(other *QBitArray) bool {
	return (bool)(C.QBitArray_OperatorNotEqual(this.h, other.cPointer()))
}

func (this *QBitArray) Fill(val bool) bool {
	return (bool)(C.QBitArray_Fill(this.h, (C.bool)(val)))
}

func (this *QBitArray) Fill2(val bool, first int64, last int64) {
	C.QBitArray_Fill2(this.h, (C.bool)(val), (C.ptrdiff_t)(first), (C.ptrdiff_t)(last))
}

func (this *QBitArray) Truncate(pos int64) {
	C.QBitArray_Truncate(this.h, (C.ptrdiff_t)(pos))
}

func (this *QBitArray) Bits() string {
	_ret := C.QBitArray_Bits(this.h)
	return C.GoString(_ret)
}

func QBitArray_FromBits(data string, lenVal int64) *QBitArray {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))
	_ret := C.QBitArray_FromBits(data_Cstring, (C.ptrdiff_t)(lenVal))
	_goptr := newQBitArray(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QBitArray) ToUInt32(endianness QSysInfo__Endian) uint {
	return (uint)(C.QBitArray_ToUInt32(this.h, (C.int)(endianness)))
}

func (this *QBitArray) Fill22(val bool, size int64) bool {
	return (bool)(C.QBitArray_Fill22(this.h, (C.bool)(val), (C.ptrdiff_t)(size)))
}

func (this *QBitArray) ToUInt322(endianness QSysInfo__Endian, ok *bool) uint {
	return (uint)(C.QBitArray_ToUInt322(this.h, (C.int)(endianness), (*C.bool)(unsafe.Pointer(ok))))
}

// Delete this object from C++ memory.
func (this *QBitArray) Delete() {
	C.QBitArray_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QBitArray) GoGC() {
	runtime.SetFinalizer(this, func(this *QBitArray) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QBitRef struct {
	h *C.QBitRef
}

func (this *QBitRef) cPointer() *C.QBitRef {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QBitRef) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQBitRef(h *C.QBitRef) *QBitRef {
	if h == nil {
		return nil
	}
	return &QBitRef{h: h}
}

func UnsafeNewQBitRef(h unsafe.Pointer) *QBitRef {
	return newQBitRef((*C.QBitRef)(h))
}

// NewQBitRef constructs a new QBitRef object.
func NewQBitRef(param1 *QBitRef) *QBitRef {
	ret := C.QBitRef_new(param1.cPointer())
	return newQBitRef(ret)
}

func (this *QBitRef) OperatorNot() bool {
	return (bool)(C.QBitRef_OperatorNot(this.h))
}

func (this *QBitRef) OperatorAssign(val *QBitRef) {
	C.QBitRef_OperatorAssign(this.h, val.cPointer())
}

func (this *QBitRef) OperatorAssignWithVal(val bool) {
	C.QBitRef_OperatorAssignWithVal(this.h, (C.bool)(val))
}

// Delete this object from C++ memory.
func (this *QBitRef) Delete() {
	C.QBitRef_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QBitRef) GoGC() {
	runtime.SetFinalizer(this, func(this *QBitRef) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
