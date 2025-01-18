package qt

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

// newQBitArray constructs the type using only CGO pointers.
func newQBitArray(h *C.QBitArray) *QBitArray {
	if h == nil {
		return nil
	}

	return &QBitArray{h: h}
}

// UnsafeNewQBitArray constructs the type using only unsafe pointers.
func UnsafeNewQBitArray(h unsafe.Pointer) *QBitArray {
	return newQBitArray((*C.QBitArray)(h))
}

// NewQBitArray constructs a new QBitArray object.
func NewQBitArray() *QBitArray {

	return newQBitArray(C.QBitArray_new())
}

// NewQBitArray2 constructs a new QBitArray object.
func NewQBitArray2(size int) *QBitArray {

	return newQBitArray(C.QBitArray_new2((C.int)(size)))
}

// NewQBitArray3 constructs a new QBitArray object.
func NewQBitArray3(other *QBitArray) *QBitArray {

	return newQBitArray(C.QBitArray_new3(other.cPointer()))
}

// NewQBitArray4 constructs a new QBitArray object.
func NewQBitArray4(size int, val bool) *QBitArray {

	return newQBitArray(C.QBitArray_new4((C.int)(size), (C.bool)(val)))
}

func (this *QBitArray) OperatorAssign(other *QBitArray) {
	C.QBitArray_OperatorAssign(this.h, other.cPointer())
}

func (this *QBitArray) Swap(other *QBitArray) {
	C.QBitArray_Swap(this.h, other.cPointer())
}

func (this *QBitArray) Size() int {
	return (int)(C.QBitArray_Size(this.h))
}

func (this *QBitArray) Count() int {
	return (int)(C.QBitArray_Count(this.h))
}

func (this *QBitArray) CountWithOn(on bool) int {
	return (int)(C.QBitArray_CountWithOn(this.h, (C.bool)(on)))
}

func (this *QBitArray) IsEmpty() bool {
	return (bool)(C.QBitArray_IsEmpty(this.h))
}

func (this *QBitArray) IsNull() bool {
	return (bool)(C.QBitArray_IsNull(this.h))
}

func (this *QBitArray) Resize(size int) {
	C.QBitArray_Resize(this.h, (C.int)(size))
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

func (this *QBitArray) TestBit(i int) bool {
	return (bool)(C.QBitArray_TestBit(this.h, (C.int)(i)))
}

func (this *QBitArray) SetBit(i int) {
	C.QBitArray_SetBit(this.h, (C.int)(i))
}

func (this *QBitArray) SetBit2(i int, val bool) {
	C.QBitArray_SetBit2(this.h, (C.int)(i), (C.bool)(val))
}

func (this *QBitArray) ClearBit(i int) {
	C.QBitArray_ClearBit(this.h, (C.int)(i))
}

func (this *QBitArray) ToggleBit(i int) bool {
	return (bool)(C.QBitArray_ToggleBit(this.h, (C.int)(i)))
}

func (this *QBitArray) At(i int) bool {
	return (bool)(C.QBitArray_At(this.h, (C.int)(i)))
}

func (this *QBitArray) OperatorSubscript(i int) *QBitRef {
	_goptr := newQBitRef(C.QBitArray_OperatorSubscript(this.h, (C.int)(i)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QBitArray) OperatorSubscriptWithInt(i int) bool {
	return (bool)(C.QBitArray_OperatorSubscriptWithInt(this.h, (C.int)(i)))
}

func (this *QBitArray) OperatorSubscriptWithUint(i uint) *QBitRef {
	_goptr := newQBitRef(C.QBitArray_OperatorSubscriptWithUint(this.h, (C.uint)(i)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QBitArray) OperatorSubscript2(i uint) bool {
	return (bool)(C.QBitArray_OperatorSubscript2(this.h, (C.uint)(i)))
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

func (this *QBitArray) Fill2(val bool, first int, last int) {
	C.QBitArray_Fill2(this.h, (C.bool)(val), (C.int)(first), (C.int)(last))
}

func (this *QBitArray) Truncate(pos int) {
	C.QBitArray_Truncate(this.h, (C.int)(pos))
}

func (this *QBitArray) Bits() string {
	_ret := C.QBitArray_Bits(this.h)
	return C.GoString(_ret)
}

func QBitArray_FromBits(data string, lenVal int64) *QBitArray {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))
	_goptr := newQBitArray(C.QBitArray_FromBits(data_Cstring, (C.ptrdiff_t)(lenVal)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QBitArray) Fill22(val bool, size int) bool {
	return (bool)(C.QBitArray_Fill22(this.h, (C.bool)(val), (C.int)(size)))
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

// newQBitRef constructs the type using only CGO pointers.
func newQBitRef(h *C.QBitRef) *QBitRef {
	if h == nil {
		return nil
	}

	return &QBitRef{h: h}
}

// UnsafeNewQBitRef constructs the type using only unsafe pointers.
func UnsafeNewQBitRef(h unsafe.Pointer) *QBitRef {
	return newQBitRef((*C.QBitRef)(h))
}

// NewQBitRef constructs a new QBitRef object.
func NewQBitRef(param1 *QBitRef) *QBitRef {

	return newQBitRef(C.QBitRef_new(param1.cPointer()))
}

func (this *QBitRef) ToBool() bool {
	return (bool)(C.QBitRef_ToBool(this.h))
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
