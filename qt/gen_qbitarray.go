package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
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

func newQBitArray(h *C.QBitArray) *QBitArray {
	return &QBitArray{h: h}
}

func newQBitArray_U(h unsafe.Pointer) *QBitArray {
	return newQBitArray((*C.QBitArray)(h))
}

// NewQBitArray constructs a new QBitArray object.
func NewQBitArray() *QBitArray {
	ret := C.QBitArray_new()
	return newQBitArray(ret)
}

// NewQBitArray2 constructs a new QBitArray object.
func NewQBitArray2(size int) *QBitArray {
	ret := C.QBitArray_new2((C.int)(size))
	return newQBitArray(ret)
}

// NewQBitArray3 constructs a new QBitArray object.
func NewQBitArray3(other *QBitArray) *QBitArray {
	ret := C.QBitArray_new3(other.cPointer())
	return newQBitArray(ret)
}

// NewQBitArray4 constructs a new QBitArray object.
func NewQBitArray4(size int, val bool) *QBitArray {
	ret := C.QBitArray_new4((C.int)(size), (C.bool)(val))
	return newQBitArray(ret)
}

func (this *QBitArray) OperatorAssign(other *QBitArray) {
	C.QBitArray_OperatorAssign(this.h, other.cPointer())
}

func (this *QBitArray) Swap(other *QBitArray) {
	C.QBitArray_Swap(this.h, other.cPointer())
}

func (this *QBitArray) Size() int {
	ret := C.QBitArray_Size(this.h)
	return (int)(ret)
}

func (this *QBitArray) Count() int {
	ret := C.QBitArray_Count(this.h)
	return (int)(ret)
}

func (this *QBitArray) CountWithOn(on bool) int {
	ret := C.QBitArray_CountWithOn(this.h, (C.bool)(on))
	return (int)(ret)
}

func (this *QBitArray) IsEmpty() bool {
	ret := C.QBitArray_IsEmpty(this.h)
	return (bool)(ret)
}

func (this *QBitArray) IsNull() bool {
	ret := C.QBitArray_IsNull(this.h)
	return (bool)(ret)
}

func (this *QBitArray) Resize(size int) {
	C.QBitArray_Resize(this.h, (C.int)(size))
}

func (this *QBitArray) Detach() {
	C.QBitArray_Detach(this.h)
}

func (this *QBitArray) IsDetached() bool {
	ret := C.QBitArray_IsDetached(this.h)
	return (bool)(ret)
}

func (this *QBitArray) Clear() {
	C.QBitArray_Clear(this.h)
}

func (this *QBitArray) TestBit(i int) bool {
	ret := C.QBitArray_TestBit(this.h, (C.int)(i))
	return (bool)(ret)
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
	ret := C.QBitArray_ToggleBit(this.h, (C.int)(i))
	return (bool)(ret)
}

func (this *QBitArray) At(i int) bool {
	ret := C.QBitArray_At(this.h, (C.int)(i))
	return (bool)(ret)
}

func (this *QBitArray) OperatorSubscript(i int) *QBitRef {
	ret := C.QBitArray_OperatorSubscript(this.h, (C.int)(i))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQBitRef(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QBitRef) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QBitArray) OperatorSubscriptWithInt(i int) bool {
	ret := C.QBitArray_OperatorSubscriptWithInt(this.h, (C.int)(i))
	return (bool)(ret)
}

func (this *QBitArray) OperatorSubscriptWithUint(i uint) *QBitRef {
	ret := C.QBitArray_OperatorSubscriptWithUint(this.h, (C.uint)(i))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQBitRef(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QBitRef) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QBitArray) OperatorSubscript2(i uint) bool {
	ret := C.QBitArray_OperatorSubscript2(this.h, (C.uint)(i))
	return (bool)(ret)
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

func (this *QBitArray) OperatorBitwiseXor() *QBitArray {
	ret := C.QBitArray_OperatorBitwiseXor(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQBitArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QBitArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QBitArray) OperatorEqual(other *QBitArray) bool {
	ret := C.QBitArray_OperatorEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QBitArray) OperatorNotEqual(other *QBitArray) bool {
	ret := C.QBitArray_OperatorNotEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QBitArray) Fill(val bool) bool {
	ret := C.QBitArray_Fill(this.h, (C.bool)(val))
	return (bool)(ret)
}

func (this *QBitArray) Fill2(val bool, first int, last int) {
	C.QBitArray_Fill2(this.h, (C.bool)(val), (C.int)(first), (C.int)(last))
}

func (this *QBitArray) Truncate(pos int) {
	C.QBitArray_Truncate(this.h, (C.int)(pos))
}

func (this *QBitArray) Bits() unsafe.Pointer {
	ret := C.QBitArray_Bits(this.h)
	return (unsafe.Pointer)(ret)
}

func QBitArray_FromBits(data string, lenVal uint64) *QBitArray {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))
	ret := C.QBitArray_FromBits(data_Cstring, (C.size_t)(lenVal))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQBitArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QBitArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QBitArray) Fill22(val bool, size int) bool {
	ret := C.QBitArray_Fill22(this.h, (C.bool)(val), (C.int)(size))
	return (bool)(ret)
}

func (this *QBitArray) Delete() {
	C.QBitArray_Delete(this.h)
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

func newQBitRef(h *C.QBitRef) *QBitRef {
	return &QBitRef{h: h}
}

func newQBitRef_U(h unsafe.Pointer) *QBitRef {
	return newQBitRef((*C.QBitRef)(h))
}

// NewQBitRef constructs a new QBitRef object.
func NewQBitRef(param1 *QBitRef) *QBitRef {
	ret := C.QBitRef_new(param1.cPointer())
	return newQBitRef(ret)
}

func (this *QBitRef) OperatorNot() bool {
	ret := C.QBitRef_OperatorNot(this.h)
	return (bool)(ret)
}

func (this *QBitRef) OperatorAssign(val *QBitRef) {
	C.QBitRef_OperatorAssign(this.h, val.cPointer())
}

func (this *QBitRef) OperatorAssignWithVal(val bool) {
	C.QBitRef_OperatorAssignWithVal(this.h, (C.bool)(val))
}

func (this *QBitRef) Delete() {
	C.QBitRef_Delete(this.h)
}
