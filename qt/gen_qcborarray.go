package qt

/*

#include "gen_qcborarray.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QCborArray struct {
	h *C.QCborArray
}

func (this *QCborArray) cPointer() *C.QCborArray {
	if this == nil {
		return nil
	}
	return this.h
}

func newQCborArray(h *C.QCborArray) *QCborArray {
	if h == nil {
		return nil
	}
	return &QCborArray{h: h}
}

func newQCborArray_U(h unsafe.Pointer) *QCborArray {
	return newQCborArray((*C.QCborArray)(h))
}

// NewQCborArray constructs a new QCborArray object.
func NewQCborArray() *QCborArray {
	ret := C.QCborArray_new()
	return newQCborArray(ret)
}

// NewQCborArray2 constructs a new QCborArray object.
func NewQCborArray2(other *QCborArray) *QCborArray {
	ret := C.QCborArray_new2(other.cPointer())
	return newQCborArray(ret)
}

func (this *QCborArray) OperatorAssign(other *QCborArray) {
	C.QCborArray_OperatorAssign(this.h, other.cPointer())
}

func (this *QCborArray) Swap(other *QCborArray) {
	C.QCborArray_Swap(this.h, other.cPointer())
}

func (this *QCborArray) ToCborValue() *QCborValue {
	ret := C.QCborArray_ToCborValue(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborValue(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborValue) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborArray) Size() uint64 {
	ret := C.QCborArray_Size(this.h)
	return (uint64)(ret)
}

func (this *QCborArray) IsEmpty() bool {
	ret := C.QCborArray_IsEmpty(this.h)
	return (bool)(ret)
}

func (this *QCborArray) Clear() {
	C.QCborArray_Clear(this.h)
}

func (this *QCborArray) At(i uint64) *QCborValue {
	ret := C.QCborArray_At(this.h, (C.size_t)(i))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborValue(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborValue) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborArray) First() *QCborValue {
	ret := C.QCborArray_First(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborValue(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborValue) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborArray) Last() *QCborValue {
	ret := C.QCborArray_Last(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborValue(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborValue) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborArray) OperatorSubscript(i uint64) *QCborValue {
	ret := C.QCborArray_OperatorSubscript(this.h, (C.size_t)(i))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborValue(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborValue) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborArray) First2() *QCborValueRef {
	ret := C.QCborArray_First2(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborValueRef(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborValueRef) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborArray) Last2() *QCborValueRef {
	ret := C.QCborArray_Last2(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborValueRef(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborValueRef) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborArray) OperatorSubscriptWithQsizetype(i uint64) *QCborValueRef {
	ret := C.QCborArray_OperatorSubscriptWithQsizetype(this.h, (C.size_t)(i))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborValueRef(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborValueRef) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborArray) Insert(i uint64, value *QCborValue) {
	C.QCborArray_Insert(this.h, (C.size_t)(i), value.cPointer())
}

func (this *QCborArray) Prepend(value *QCborValue) {
	C.QCborArray_Prepend(this.h, value.cPointer())
}

func (this *QCborArray) Append(value *QCborValue) {
	C.QCborArray_Append(this.h, value.cPointer())
}

func (this *QCborArray) Extract(it QCborArray__ConstIterator) *QCborValue {
	ret := C.QCborArray_Extract(this.h, it.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborValue(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborValue) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborArray) ExtractWithIt(it QCborArray__Iterator) *QCborValue {
	ret := C.QCborArray_ExtractWithIt(this.h, it.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborValue(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborValue) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborArray) RemoveAt(i uint64) {
	C.QCborArray_RemoveAt(this.h, (C.size_t)(i))
}

func (this *QCborArray) TakeAt(i uint64) *QCborValue {
	ret := C.QCborArray_TakeAt(this.h, (C.size_t)(i))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborValue(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborValue) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborArray) RemoveFirst() {
	C.QCborArray_RemoveFirst(this.h)
}

func (this *QCborArray) RemoveLast() {
	C.QCborArray_RemoveLast(this.h)
}

func (this *QCborArray) TakeFirst() *QCborValue {
	ret := C.QCborArray_TakeFirst(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborValue(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborValue) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborArray) TakeLast() *QCborValue {
	ret := C.QCborArray_TakeLast(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborValue(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborValue) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborArray) Contains(value *QCborValue) bool {
	ret := C.QCborArray_Contains(this.h, value.cPointer())
	return (bool)(ret)
}

func (this *QCborArray) Compare(other *QCborArray) int {
	ret := C.QCborArray_Compare(this.h, other.cPointer())
	return (int)(ret)
}

func (this *QCborArray) OperatorEqual(other *QCborArray) bool {
	ret := C.QCborArray_OperatorEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QCborArray) OperatorNotEqual(other *QCborArray) bool {
	ret := C.QCborArray_OperatorNotEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QCborArray) OperatorLesser(other *QCborArray) bool {
	ret := C.QCborArray_OperatorLesser(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QCborArray) Begin() *QCborArray__Iterator {
	ret := C.QCborArray_Begin(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborArray__Iterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborArray__Iterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborArray) ConstBegin() *QCborArray__ConstIterator {
	ret := C.QCborArray_ConstBegin(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborArray__ConstIterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborArray__ConstIterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborArray) Begin2() *QCborArray__ConstIterator {
	ret := C.QCborArray_Begin2(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborArray__ConstIterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborArray__ConstIterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborArray) Cbegin() *QCborArray__ConstIterator {
	ret := C.QCborArray_Cbegin(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborArray__ConstIterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborArray__ConstIterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborArray) End() *QCborArray__Iterator {
	ret := C.QCborArray_End(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborArray__Iterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborArray__Iterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborArray) ConstEnd() *QCborArray__ConstIterator {
	ret := C.QCborArray_ConstEnd(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborArray__ConstIterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborArray__ConstIterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborArray) End2() *QCborArray__ConstIterator {
	ret := C.QCborArray_End2(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborArray__ConstIterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborArray__ConstIterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborArray) Cend() *QCborArray__ConstIterator {
	ret := C.QCborArray_Cend(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborArray__ConstIterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborArray__ConstIterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborArray) Insert2(before QCborArray__Iterator, value *QCborValue) *QCborArray__Iterator {
	ret := C.QCborArray_Insert2(this.h, before.cPointer(), value.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborArray__Iterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborArray__Iterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborArray) Insert3(before QCborArray__ConstIterator, value *QCborValue) *QCborArray__Iterator {
	ret := C.QCborArray_Insert3(this.h, before.cPointer(), value.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborArray__Iterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborArray__Iterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborArray) Erase(it QCborArray__Iterator) *QCborArray__Iterator {
	ret := C.QCborArray_Erase(this.h, it.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborArray__Iterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborArray__Iterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborArray) EraseWithIt(it QCborArray__ConstIterator) *QCborArray__Iterator {
	ret := C.QCborArray_EraseWithIt(this.h, it.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborArray__Iterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborArray__Iterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborArray) PushBack(t *QCborValue) {
	C.QCborArray_PushBack(this.h, t.cPointer())
}

func (this *QCborArray) PushFront(t *QCborValue) {
	C.QCborArray_PushFront(this.h, t.cPointer())
}

func (this *QCborArray) PopFront() {
	C.QCborArray_PopFront(this.h)
}

func (this *QCborArray) PopBack() {
	C.QCborArray_PopBack(this.h)
}

func (this *QCborArray) Empty() bool {
	ret := C.QCborArray_Empty(this.h)
	return (bool)(ret)
}

func (this *QCborArray) OperatorPlus(v *QCborValue) *QCborArray {
	ret := C.QCborArray_OperatorPlus(this.h, v.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborArray) OperatorPlusAssign(v *QCborValue) *QCborArray {
	ret := C.QCborArray_OperatorPlusAssign(this.h, v.cPointer())
	return newQCborArray_U(unsafe.Pointer(ret))
}

func (this *QCborArray) OperatorShiftLeft(v *QCborValue) *QCborArray {
	ret := C.QCborArray_OperatorShiftLeft(this.h, v.cPointer())
	return newQCborArray_U(unsafe.Pointer(ret))
}

func QCborArray_FromStringList(list []string) *QCborArray {
	// For the C ABI, malloc two C arrays; raw char* pointers and their lengths
	list_CArray := (*[0xffff]*C.char)(C.malloc(C.ulong(8 * len(list))))
	list_Lengths := (*[0xffff]C.size_t)(C.malloc(C.ulong(8 * len(list))))
	defer C.free(unsafe.Pointer(list_CArray))
	defer C.free(unsafe.Pointer(list_Lengths))
	for i := range list {
		single_cstring := C.CString(list[i])
		defer C.free(unsafe.Pointer(single_cstring))
		list_CArray[i] = single_cstring
		list_Lengths[i] = (C.size_t)(len(list[i]))
	}
	ret := C.QCborArray_FromStringList(&list_CArray[0], &list_Lengths[0], C.ulong(len(list)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QCborArray_FromJsonArray(array *QJsonArray) *QCborArray {
	ret := C.QCborArray_FromJsonArray(array.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborArray) ToJsonArray() *QJsonArray {
	ret := C.QCborArray_ToJsonArray(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQJsonArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QJsonArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborArray) Delete() {
	C.QCborArray_Delete(this.h)
}

type QCborArray__Iterator struct {
	h *C.QCborArray__Iterator
}

func (this *QCborArray__Iterator) cPointer() *C.QCborArray__Iterator {
	if this == nil {
		return nil
	}
	return this.h
}

func newQCborArray__Iterator(h *C.QCborArray__Iterator) *QCborArray__Iterator {
	if h == nil {
		return nil
	}
	return &QCborArray__Iterator{h: h}
}

func newQCborArray__Iterator_U(h unsafe.Pointer) *QCborArray__Iterator {
	return newQCborArray__Iterator((*C.QCborArray__Iterator)(h))
}

// NewQCborArray__Iterator constructs a new QCborArray::Iterator object.
func NewQCborArray__Iterator() *QCborArray__Iterator {
	ret := C.QCborArray__Iterator_new()
	return newQCborArray__Iterator(ret)
}

// NewQCborArray__Iterator2 constructs a new QCborArray::Iterator object.
func NewQCborArray__Iterator2(param1 *QCborArray__Iterator) *QCborArray__Iterator {
	ret := C.QCborArray__Iterator_new2(param1.cPointer())
	return newQCborArray__Iterator(ret)
}

func (this *QCborArray__Iterator) OperatorMultiply() *QCborValueRef {
	ret := C.QCborArray__Iterator_OperatorMultiply(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborValueRef(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborValueRef) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborArray__Iterator) OperatorMinusGreater() *QCborValueRef {
	ret := C.QCborArray__Iterator_OperatorMinusGreater(this.h)
	return newQCborValueRef_U(unsafe.Pointer(ret))
}

func (this *QCborArray__Iterator) OperatorSubscript(j uint64) *QCborValueRef {
	ret := C.QCborArray__Iterator_OperatorSubscript(this.h, (C.size_t)(j))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborValueRef(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborValueRef) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborArray__Iterator) OperatorEqual(o *QCborArray__Iterator) bool {
	ret := C.QCborArray__Iterator_OperatorEqual(this.h, o.cPointer())
	return (bool)(ret)
}

func (this *QCborArray__Iterator) OperatorNotEqual(o *QCborArray__Iterator) bool {
	ret := C.QCborArray__Iterator_OperatorNotEqual(this.h, o.cPointer())
	return (bool)(ret)
}

func (this *QCborArray__Iterator) OperatorLesser(other *QCborArray__Iterator) bool {
	ret := C.QCborArray__Iterator_OperatorLesser(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QCborArray__Iterator) OperatorLesserOrEqual(other *QCborArray__Iterator) bool {
	ret := C.QCborArray__Iterator_OperatorLesserOrEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QCborArray__Iterator) OperatorGreater(other *QCborArray__Iterator) bool {
	ret := C.QCborArray__Iterator_OperatorGreater(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QCborArray__Iterator) OperatorGreaterOrEqual(other *QCborArray__Iterator) bool {
	ret := C.QCborArray__Iterator_OperatorGreaterOrEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QCborArray__Iterator) OperatorEqualWithQCborArrayConstIterator(o *QCborArray__ConstIterator) bool {
	ret := C.QCborArray__Iterator_OperatorEqualWithQCborArrayConstIterator(this.h, o.cPointer())
	return (bool)(ret)
}

func (this *QCborArray__Iterator) OperatorNotEqualWithQCborArrayConstIterator(o *QCborArray__ConstIterator) bool {
	ret := C.QCborArray__Iterator_OperatorNotEqualWithQCborArrayConstIterator(this.h, o.cPointer())
	return (bool)(ret)
}

func (this *QCborArray__Iterator) OperatorLesserWithOther(other *QCborArray__ConstIterator) bool {
	ret := C.QCborArray__Iterator_OperatorLesserWithOther(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QCborArray__Iterator) OperatorLesserOrEqualWithOther(other *QCborArray__ConstIterator) bool {
	ret := C.QCborArray__Iterator_OperatorLesserOrEqualWithOther(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QCborArray__Iterator) OperatorGreaterWithOther(other *QCborArray__ConstIterator) bool {
	ret := C.QCborArray__Iterator_OperatorGreaterWithOther(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QCborArray__Iterator) OperatorGreaterOrEqualWithOther(other *QCborArray__ConstIterator) bool {
	ret := C.QCborArray__Iterator_OperatorGreaterOrEqualWithOther(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QCborArray__Iterator) OperatorPlusPlus(param1 int) *QCborArray__Iterator {
	ret := C.QCborArray__Iterator_OperatorPlusPlus(this.h, (C.int)(param1))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborArray__Iterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborArray__Iterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborArray__Iterator) OperatorMinusMinus(param1 int) *QCborArray__Iterator {
	ret := C.QCborArray__Iterator_OperatorMinusMinus(this.h, (C.int)(param1))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborArray__Iterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborArray__Iterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborArray__Iterator) OperatorPlus(j uint64) *QCborArray__Iterator {
	ret := C.QCborArray__Iterator_OperatorPlus(this.h, (C.size_t)(j))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborArray__Iterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborArray__Iterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborArray__Iterator) OperatorMinus(j uint64) *QCborArray__Iterator {
	ret := C.QCborArray__Iterator_OperatorMinus(this.h, (C.size_t)(j))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborArray__Iterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborArray__Iterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborArray__Iterator) OperatorMinusWithQCborArrayIterator(j QCborArray__Iterator) uint64 {
	ret := C.QCborArray__Iterator_OperatorMinusWithQCborArrayIterator(this.h, j.cPointer())
	return (uint64)(ret)
}

func (this *QCborArray__Iterator) Delete() {
	C.QCborArray__Iterator_Delete(this.h)
}

type QCborArray__ConstIterator struct {
	h *C.QCborArray__ConstIterator
}

func (this *QCborArray__ConstIterator) cPointer() *C.QCborArray__ConstIterator {
	if this == nil {
		return nil
	}
	return this.h
}

func newQCborArray__ConstIterator(h *C.QCborArray__ConstIterator) *QCborArray__ConstIterator {
	if h == nil {
		return nil
	}
	return &QCborArray__ConstIterator{h: h}
}

func newQCborArray__ConstIterator_U(h unsafe.Pointer) *QCborArray__ConstIterator {
	return newQCborArray__ConstIterator((*C.QCborArray__ConstIterator)(h))
}

// NewQCborArray__ConstIterator constructs a new QCborArray::ConstIterator object.
func NewQCborArray__ConstIterator() *QCborArray__ConstIterator {
	ret := C.QCborArray__ConstIterator_new()
	return newQCborArray__ConstIterator(ret)
}

// NewQCborArray__ConstIterator2 constructs a new QCborArray::ConstIterator object.
func NewQCborArray__ConstIterator2(param1 *QCborArray__ConstIterator) *QCborArray__ConstIterator {
	ret := C.QCborArray__ConstIterator_new2(param1.cPointer())
	return newQCborArray__ConstIterator(ret)
}

func (this *QCborArray__ConstIterator) OperatorMultiply() *QCborValueRef {
	ret := C.QCborArray__ConstIterator_OperatorMultiply(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborValueRef(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborValueRef) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborArray__ConstIterator) OperatorMinusGreater() *QCborValueRef {
	ret := C.QCborArray__ConstIterator_OperatorMinusGreater(this.h)
	return newQCborValueRef_U(unsafe.Pointer(ret))
}

func (this *QCborArray__ConstIterator) OperatorSubscript(j uint64) *QCborValueRef {
	ret := C.QCborArray__ConstIterator_OperatorSubscript(this.h, (C.size_t)(j))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborValueRef(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborValueRef) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborArray__ConstIterator) OperatorEqual(o *QCborArray__Iterator) bool {
	ret := C.QCborArray__ConstIterator_OperatorEqual(this.h, o.cPointer())
	return (bool)(ret)
}

func (this *QCborArray__ConstIterator) OperatorNotEqual(o *QCborArray__Iterator) bool {
	ret := C.QCborArray__ConstIterator_OperatorNotEqual(this.h, o.cPointer())
	return (bool)(ret)
}

func (this *QCborArray__ConstIterator) OperatorLesser(other *QCborArray__Iterator) bool {
	ret := C.QCborArray__ConstIterator_OperatorLesser(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QCborArray__ConstIterator) OperatorLesserOrEqual(other *QCborArray__Iterator) bool {
	ret := C.QCborArray__ConstIterator_OperatorLesserOrEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QCborArray__ConstIterator) OperatorGreater(other *QCborArray__Iterator) bool {
	ret := C.QCborArray__ConstIterator_OperatorGreater(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QCborArray__ConstIterator) OperatorGreaterOrEqual(other *QCborArray__Iterator) bool {
	ret := C.QCborArray__ConstIterator_OperatorGreaterOrEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QCborArray__ConstIterator) OperatorEqualWithQCborArrayConstIterator(o *QCborArray__ConstIterator) bool {
	ret := C.QCborArray__ConstIterator_OperatorEqualWithQCborArrayConstIterator(this.h, o.cPointer())
	return (bool)(ret)
}

func (this *QCborArray__ConstIterator) OperatorNotEqualWithQCborArrayConstIterator(o *QCborArray__ConstIterator) bool {
	ret := C.QCborArray__ConstIterator_OperatorNotEqualWithQCborArrayConstIterator(this.h, o.cPointer())
	return (bool)(ret)
}

func (this *QCborArray__ConstIterator) OperatorLesserWithOther(other *QCborArray__ConstIterator) bool {
	ret := C.QCborArray__ConstIterator_OperatorLesserWithOther(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QCborArray__ConstIterator) OperatorLesserOrEqualWithOther(other *QCborArray__ConstIterator) bool {
	ret := C.QCborArray__ConstIterator_OperatorLesserOrEqualWithOther(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QCborArray__ConstIterator) OperatorGreaterWithOther(other *QCborArray__ConstIterator) bool {
	ret := C.QCborArray__ConstIterator_OperatorGreaterWithOther(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QCborArray__ConstIterator) OperatorGreaterOrEqualWithOther(other *QCborArray__ConstIterator) bool {
	ret := C.QCborArray__ConstIterator_OperatorGreaterOrEqualWithOther(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QCborArray__ConstIterator) OperatorPlusPlus(param1 int) *QCborArray__ConstIterator {
	ret := C.QCborArray__ConstIterator_OperatorPlusPlus(this.h, (C.int)(param1))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborArray__ConstIterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborArray__ConstIterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborArray__ConstIterator) OperatorMinusMinus(param1 int) *QCborArray__ConstIterator {
	ret := C.QCborArray__ConstIterator_OperatorMinusMinus(this.h, (C.int)(param1))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborArray__ConstIterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborArray__ConstIterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborArray__ConstIterator) OperatorPlus(j uint64) *QCborArray__ConstIterator {
	ret := C.QCborArray__ConstIterator_OperatorPlus(this.h, (C.size_t)(j))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborArray__ConstIterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborArray__ConstIterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborArray__ConstIterator) OperatorMinus(j uint64) *QCborArray__ConstIterator {
	ret := C.QCborArray__ConstIterator_OperatorMinus(this.h, (C.size_t)(j))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborArray__ConstIterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborArray__ConstIterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborArray__ConstIterator) OperatorMinusWithQCborArrayConstIterator(j QCborArray__ConstIterator) uint64 {
	ret := C.QCborArray__ConstIterator_OperatorMinusWithQCborArrayConstIterator(this.h, j.cPointer())
	return (uint64)(ret)
}

func (this *QCborArray__ConstIterator) Delete() {
	C.QCborArray__ConstIterator_Delete(this.h)
}
