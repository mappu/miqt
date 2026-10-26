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
	h  *C.QBitArray
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QBitArray) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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
	defer runtime.KeepAlive(other)

	return newQBitArray(C.QBitArray_new3(other.cPointer()))
}

// NewQBitArray4 constructs a new QBitArray object.
func NewQBitArray4(size int, val bool) *QBitArray {

	return newQBitArray(C.QBitArray_new4((C.int)(size), (C.bool)(val)))
}

func (this *QBitArray) OperatorAssign(other *QBitArray) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QBitArray_operatorAssign(this.h, other.cPointer())
}

func (this *QBitArray) Swap(other *QBitArray) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QBitArray_swap(this.h, other.cPointer())
}

func (this *QBitArray) Size() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QBitArray_size(this.h))
}

func (this *QBitArray) Count() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QBitArray_count(this.h))
}

func (this *QBitArray) CountWithOn(on bool) int {
	defer runtime.KeepAlive(this)
	return (int)(C.QBitArray_countWithOn(this.h, (C.bool)(on)))
}

func (this *QBitArray) IsEmpty() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QBitArray_isEmpty(this.h))
}

func (this *QBitArray) IsNull() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QBitArray_isNull(this.h))
}

func (this *QBitArray) Resize(size int) {
	defer runtime.KeepAlive(this)
	C.QBitArray_resize(this.h, (C.int)(size))
}

func (this *QBitArray) Detach() {
	defer runtime.KeepAlive(this)
	C.QBitArray_detach(this.h)
}

func (this *QBitArray) IsDetached() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QBitArray_isDetached(this.h))
}

func (this *QBitArray) Clear() {
	defer runtime.KeepAlive(this)
	C.QBitArray_clear(this.h)
}

func (this *QBitArray) TestBit(i int) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QBitArray_testBit(this.h, (C.int)(i)))
}

func (this *QBitArray) SetBit(i int) {
	defer runtime.KeepAlive(this)
	C.QBitArray_setBit(this.h, (C.int)(i))
}

func (this *QBitArray) SetBit2(i int, val bool) {
	defer runtime.KeepAlive(this)
	C.QBitArray_setBit2(this.h, (C.int)(i), (C.bool)(val))
}

func (this *QBitArray) ClearBit(i int) {
	defer runtime.KeepAlive(this)
	C.QBitArray_clearBit(this.h, (C.int)(i))
}

func (this *QBitArray) ToggleBit(i int) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QBitArray_toggleBit(this.h, (C.int)(i)))
}

func (this *QBitArray) At(i int) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QBitArray_at(this.h, (C.int)(i)))
}

func (this *QBitArray) OperatorSubscript(i int) *QBitRef {
	defer runtime.KeepAlive(this)
	_goptr := newQBitRef(C.QBitArray_operatorSubscript(this.h, (C.int)(i)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QBitArray) OperatorSubscriptWithInt(i int) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QBitArray_operatorSubscriptWithInt(this.h, (C.int)(i)))
}

func (this *QBitArray) OperatorSubscriptWithUint(i uint) *QBitRef {
	defer runtime.KeepAlive(this)
	_goptr := newQBitRef(C.QBitArray_operatorSubscriptWithUint(this.h, (C.uint)(i)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QBitArray) OperatorSubscript2(i uint) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QBitArray_operatorSubscript2(this.h, (C.uint)(i)))
}

func (this *QBitArray) OperatorBitwiseAndAssign(param1 *QBitArray) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QBitArray_operatorBitwiseAndAssign(this.h, param1.cPointer())
}

func (this *QBitArray) OperatorBitwiseOrAssign(param1 *QBitArray) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QBitArray_operatorBitwiseOrAssign(this.h, param1.cPointer())
}

func (this *QBitArray) OperatorBitwiseNotAssign(param1 *QBitArray) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QBitArray_operatorBitwiseNotAssign(this.h, param1.cPointer())
}

func (this *QBitArray) OperatorEqual(other *QBitArray) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	return (bool)(C.QBitArray_operatorEqual(this.h, other.cPointer()))
}

func (this *QBitArray) OperatorNotEqual(other *QBitArray) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	return (bool)(C.QBitArray_operatorNotEqual(this.h, other.cPointer()))
}

func (this *QBitArray) Fill(val bool) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QBitArray_fill(this.h, (C.bool)(val)))
}

func (this *QBitArray) Fill2(val bool, first int, last int) {
	defer runtime.KeepAlive(this)
	C.QBitArray_fill2(this.h, (C.bool)(val), (C.int)(first), (C.int)(last))
}

func (this *QBitArray) Truncate(pos int) {
	defer runtime.KeepAlive(this)
	C.QBitArray_truncate(this.h, (C.int)(pos))
}

func (this *QBitArray) Bits() string {
	defer runtime.KeepAlive(this)
	_ret := C.QBitArray_bits(this.h)
	return C.GoString(_ret)
}

func QBitArray_FromBits(data string, lenVal int64) *QBitArray {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))
	_goptr := newQBitArray(C.QBitArray_fromBits(data_Cstring, (C.ptrdiff_t)(lenVal)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QBitArray) Fill3(val bool, size int) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QBitArray_fill3(this.h, (C.bool)(val), (C.int)(size)))
}

// Delete this object from C++ memory.
func (this *QBitArray) Delete() {
	C.QBitArray_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QBitArray) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QBitArray_delete((*C.QBitArray)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QBitRef struct {
	h  *C.QBitRef
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QBitRef) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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
	defer runtime.KeepAlive(param1)

	return newQBitRef(C.QBitRef_new(param1.cPointer()))
}

func (this *QBitRef) ToBool() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QBitRef_ToBool(this.h))
}

func (this *QBitRef) OperatorNot() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QBitRef_operatorNot(this.h))
}

func (this *QBitRef) OperatorAssign(val *QBitRef) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(val)
	C.QBitRef_operatorAssign(this.h, val.cPointer())
}

func (this *QBitRef) OperatorAssignWithVal(val bool) {
	defer runtime.KeepAlive(this)
	C.QBitRef_operatorAssignWithVal(this.h, (C.bool)(val))
}

// Delete this object from C++ memory.
func (this *QBitRef) Delete() {
	C.QBitRef_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QBitRef) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QBitRef_delete((*C.QBitRef)(gc[0]))
	})
	this.miqtSetGC(gc)
}
