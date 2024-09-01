package qt

/*

#include "gen_qjsonarray.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QJsonArray struct {
	h *C.QJsonArray
}

func (this *QJsonArray) cPointer() *C.QJsonArray {
	if this == nil {
		return nil
	}
	return this.h
}

func newQJsonArray(h *C.QJsonArray) *QJsonArray {
	if h == nil {
		return nil
	}
	return &QJsonArray{h: h}
}

func newQJsonArray_U(h unsafe.Pointer) *QJsonArray {
	return newQJsonArray((*C.QJsonArray)(h))
}

// NewQJsonArray constructs a new QJsonArray object.
func NewQJsonArray() *QJsonArray {
	ret := C.QJsonArray_new()
	return newQJsonArray(ret)
}

// NewQJsonArray2 constructs a new QJsonArray object.
func NewQJsonArray2(other *QJsonArray) *QJsonArray {
	ret := C.QJsonArray_new2(other.cPointer())
	return newQJsonArray(ret)
}

func (this *QJsonArray) OperatorAssign(other *QJsonArray) {
	C.QJsonArray_OperatorAssign(this.h, other.cPointer())
}

func QJsonArray_FromStringList(list []string) *QJsonArray {
	// For the C ABI, malloc two C arrays; raw char* pointers and their lengths
	list_CArray := (*[0xffff]*C.char)(C.malloc(C.size_t(8 * len(list))))
	list_Lengths := (*[0xffff]C.uint64_t)(C.malloc(C.size_t(8 * len(list))))
	defer C.free(unsafe.Pointer(list_CArray))
	defer C.free(unsafe.Pointer(list_Lengths))
	for i := range list {
		single_cstring := C.CString(list[i])
		defer C.free(unsafe.Pointer(single_cstring))
		list_CArray[i] = single_cstring
		list_Lengths[i] = (C.uint64_t)(len(list[i]))
	}
	ret := C.QJsonArray_FromStringList(&list_CArray[0], &list_Lengths[0], C.size_t(len(list)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQJsonArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QJsonArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QJsonArray) Size() int {
	ret := C.QJsonArray_Size(this.h)
	return (int)(ret)
}

func (this *QJsonArray) Count() int {
	ret := C.QJsonArray_Count(this.h)
	return (int)(ret)
}

func (this *QJsonArray) IsEmpty() bool {
	ret := C.QJsonArray_IsEmpty(this.h)
	return (bool)(ret)
}

func (this *QJsonArray) At(i int) *QJsonValue {
	ret := C.QJsonArray_At(this.h, (C.int)(i))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQJsonValue(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QJsonValue) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QJsonArray) First() *QJsonValue {
	ret := C.QJsonArray_First(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQJsonValue(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QJsonValue) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QJsonArray) Last() *QJsonValue {
	ret := C.QJsonArray_Last(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQJsonValue(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QJsonValue) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QJsonArray) Prepend(value *QJsonValue) {
	C.QJsonArray_Prepend(this.h, value.cPointer())
}

func (this *QJsonArray) Append(value *QJsonValue) {
	C.QJsonArray_Append(this.h, value.cPointer())
}

func (this *QJsonArray) RemoveAt(i int) {
	C.QJsonArray_RemoveAt(this.h, (C.int)(i))
}

func (this *QJsonArray) TakeAt(i int) *QJsonValue {
	ret := C.QJsonArray_TakeAt(this.h, (C.int)(i))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQJsonValue(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QJsonValue) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QJsonArray) RemoveFirst() {
	C.QJsonArray_RemoveFirst(this.h)
}

func (this *QJsonArray) RemoveLast() {
	C.QJsonArray_RemoveLast(this.h)
}

func (this *QJsonArray) Insert(i int, value *QJsonValue) {
	C.QJsonArray_Insert(this.h, (C.int)(i), value.cPointer())
}

func (this *QJsonArray) Replace(i int, value *QJsonValue) {
	C.QJsonArray_Replace(this.h, (C.int)(i), value.cPointer())
}

func (this *QJsonArray) Contains(element *QJsonValue) bool {
	ret := C.QJsonArray_Contains(this.h, element.cPointer())
	return (bool)(ret)
}

func (this *QJsonArray) OperatorSubscript(i int) *QJsonValueRef {
	ret := C.QJsonArray_OperatorSubscript(this.h, (C.int)(i))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQJsonValueRef(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QJsonValueRef) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QJsonArray) OperatorSubscriptWithInt(i int) *QJsonValue {
	ret := C.QJsonArray_OperatorSubscriptWithInt(this.h, (C.int)(i))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQJsonValue(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QJsonValue) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QJsonArray) OperatorEqual(other *QJsonArray) bool {
	ret := C.QJsonArray_OperatorEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QJsonArray) OperatorNotEqual(other *QJsonArray) bool {
	ret := C.QJsonArray_OperatorNotEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QJsonArray) Swap(other *QJsonArray) {
	C.QJsonArray_Swap(this.h, other.cPointer())
}

func (this *QJsonArray) Begin() *QJsonArray__iterator {
	ret := C.QJsonArray_Begin(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQJsonArray__iterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QJsonArray__iterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QJsonArray) Begin2() *QJsonArray__const_iterator {
	ret := C.QJsonArray_Begin2(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQJsonArray__const_iterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QJsonArray__const_iterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QJsonArray) ConstBegin() *QJsonArray__const_iterator {
	ret := C.QJsonArray_ConstBegin(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQJsonArray__const_iterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QJsonArray__const_iterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QJsonArray) Cbegin() *QJsonArray__const_iterator {
	ret := C.QJsonArray_Cbegin(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQJsonArray__const_iterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QJsonArray__const_iterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QJsonArray) End() *QJsonArray__iterator {
	ret := C.QJsonArray_End(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQJsonArray__iterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QJsonArray__iterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QJsonArray) End2() *QJsonArray__const_iterator {
	ret := C.QJsonArray_End2(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQJsonArray__const_iterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QJsonArray__const_iterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QJsonArray) ConstEnd() *QJsonArray__const_iterator {
	ret := C.QJsonArray_ConstEnd(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQJsonArray__const_iterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QJsonArray__const_iterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QJsonArray) Cend() *QJsonArray__const_iterator {
	ret := C.QJsonArray_Cend(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQJsonArray__const_iterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QJsonArray__const_iterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QJsonArray) Insert2(before QJsonArray__iterator, value *QJsonValue) *QJsonArray__iterator {
	ret := C.QJsonArray_Insert2(this.h, before.cPointer(), value.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQJsonArray__iterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QJsonArray__iterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QJsonArray) Erase(it QJsonArray__iterator) *QJsonArray__iterator {
	ret := C.QJsonArray_Erase(this.h, it.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQJsonArray__iterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QJsonArray__iterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QJsonArray) OperatorPlus(v *QJsonValue) *QJsonArray {
	ret := C.QJsonArray_OperatorPlus(this.h, v.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQJsonArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QJsonArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QJsonArray) OperatorPlusAssign(v *QJsonValue) *QJsonArray {
	ret := C.QJsonArray_OperatorPlusAssign(this.h, v.cPointer())
	return newQJsonArray_U(unsafe.Pointer(ret))
}

func (this *QJsonArray) OperatorShiftLeft(v *QJsonValue) *QJsonArray {
	ret := C.QJsonArray_OperatorShiftLeft(this.h, v.cPointer())
	return newQJsonArray_U(unsafe.Pointer(ret))
}

func (this *QJsonArray) PushBack(t *QJsonValue) {
	C.QJsonArray_PushBack(this.h, t.cPointer())
}

func (this *QJsonArray) PushFront(t *QJsonValue) {
	C.QJsonArray_PushFront(this.h, t.cPointer())
}

func (this *QJsonArray) PopFront() {
	C.QJsonArray_PopFront(this.h)
}

func (this *QJsonArray) PopBack() {
	C.QJsonArray_PopBack(this.h)
}

func (this *QJsonArray) Empty() bool {
	ret := C.QJsonArray_Empty(this.h)
	return (bool)(ret)
}

func (this *QJsonArray) Delete() {
	C.QJsonArray_Delete(this.h)
}

type QJsonArray__iterator struct {
	h *C.QJsonArray__iterator
}

func (this *QJsonArray__iterator) cPointer() *C.QJsonArray__iterator {
	if this == nil {
		return nil
	}
	return this.h
}

func newQJsonArray__iterator(h *C.QJsonArray__iterator) *QJsonArray__iterator {
	if h == nil {
		return nil
	}
	return &QJsonArray__iterator{h: h}
}

func newQJsonArray__iterator_U(h unsafe.Pointer) *QJsonArray__iterator {
	return newQJsonArray__iterator((*C.QJsonArray__iterator)(h))
}

// NewQJsonArray__iterator constructs a new QJsonArray::iterator object.
func NewQJsonArray__iterator() *QJsonArray__iterator {
	ret := C.QJsonArray__iterator_new()
	return newQJsonArray__iterator(ret)
}

// NewQJsonArray__iterator2 constructs a new QJsonArray::iterator object.
func NewQJsonArray__iterator2(array *QJsonArray, index int) *QJsonArray__iterator {
	ret := C.QJsonArray__iterator_new2(array.cPointer(), (C.int)(index))
	return newQJsonArray__iterator(ret)
}

// NewQJsonArray__iterator3 constructs a new QJsonArray::iterator object.
func NewQJsonArray__iterator3(param1 *QJsonArray__iterator) *QJsonArray__iterator {
	ret := C.QJsonArray__iterator_new3(param1.cPointer())
	return newQJsonArray__iterator(ret)
}

func (this *QJsonArray__iterator) OperatorMultiply() *QJsonValueRef {
	ret := C.QJsonArray__iterator_OperatorMultiply(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQJsonValueRef(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QJsonValueRef) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QJsonArray__iterator) OperatorMinusGreater() *QJsonValueRefPtr {
	ret := C.QJsonArray__iterator_OperatorMinusGreater(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQJsonValueRefPtr(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QJsonValueRefPtr) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QJsonArray__iterator) OperatorSubscript(j int) *QJsonValueRef {
	ret := C.QJsonArray__iterator_OperatorSubscript(this.h, (C.int)(j))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQJsonValueRef(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QJsonValueRef) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QJsonArray__iterator) OperatorEqual(o *QJsonArray__iterator) bool {
	ret := C.QJsonArray__iterator_OperatorEqual(this.h, o.cPointer())
	return (bool)(ret)
}

func (this *QJsonArray__iterator) OperatorNotEqual(o *QJsonArray__iterator) bool {
	ret := C.QJsonArray__iterator_OperatorNotEqual(this.h, o.cPointer())
	return (bool)(ret)
}

func (this *QJsonArray__iterator) OperatorLesser(other *QJsonArray__iterator) bool {
	ret := C.QJsonArray__iterator_OperatorLesser(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QJsonArray__iterator) OperatorLesserOrEqual(other *QJsonArray__iterator) bool {
	ret := C.QJsonArray__iterator_OperatorLesserOrEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QJsonArray__iterator) OperatorGreater(other *QJsonArray__iterator) bool {
	ret := C.QJsonArray__iterator_OperatorGreater(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QJsonArray__iterator) OperatorGreaterOrEqual(other *QJsonArray__iterator) bool {
	ret := C.QJsonArray__iterator_OperatorGreaterOrEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QJsonArray__iterator) OperatorEqualWithQJsonArrayconstIterator(o *QJsonArray__const_iterator) bool {
	ret := C.QJsonArray__iterator_OperatorEqualWithQJsonArrayconstIterator(this.h, o.cPointer())
	return (bool)(ret)
}

func (this *QJsonArray__iterator) OperatorNotEqualWithQJsonArrayconstIterator(o *QJsonArray__const_iterator) bool {
	ret := C.QJsonArray__iterator_OperatorNotEqualWithQJsonArrayconstIterator(this.h, o.cPointer())
	return (bool)(ret)
}

func (this *QJsonArray__iterator) OperatorLesserWithOther(other *QJsonArray__const_iterator) bool {
	ret := C.QJsonArray__iterator_OperatorLesserWithOther(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QJsonArray__iterator) OperatorLesserOrEqualWithOther(other *QJsonArray__const_iterator) bool {
	ret := C.QJsonArray__iterator_OperatorLesserOrEqualWithOther(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QJsonArray__iterator) OperatorGreaterWithOther(other *QJsonArray__const_iterator) bool {
	ret := C.QJsonArray__iterator_OperatorGreaterWithOther(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QJsonArray__iterator) OperatorGreaterOrEqualWithOther(other *QJsonArray__const_iterator) bool {
	ret := C.QJsonArray__iterator_OperatorGreaterOrEqualWithOther(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QJsonArray__iterator) OperatorPlusPlus(param1 int) *QJsonArray__iterator {
	ret := C.QJsonArray__iterator_OperatorPlusPlus(this.h, (C.int)(param1))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQJsonArray__iterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QJsonArray__iterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QJsonArray__iterator) OperatorMinusMinus(param1 int) *QJsonArray__iterator {
	ret := C.QJsonArray__iterator_OperatorMinusMinus(this.h, (C.int)(param1))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQJsonArray__iterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QJsonArray__iterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QJsonArray__iterator) OperatorPlus(j int) *QJsonArray__iterator {
	ret := C.QJsonArray__iterator_OperatorPlus(this.h, (C.int)(j))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQJsonArray__iterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QJsonArray__iterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QJsonArray__iterator) OperatorMinus(j int) *QJsonArray__iterator {
	ret := C.QJsonArray__iterator_OperatorMinus(this.h, (C.int)(j))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQJsonArray__iterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QJsonArray__iterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QJsonArray__iterator) OperatorMinusWithQJsonArrayiterator(j QJsonArray__iterator) int {
	ret := C.QJsonArray__iterator_OperatorMinusWithQJsonArrayiterator(this.h, j.cPointer())
	return (int)(ret)
}

func (this *QJsonArray__iterator) Delete() {
	C.QJsonArray__iterator_Delete(this.h)
}

type QJsonArray__const_iterator struct {
	h *C.QJsonArray__const_iterator
}

func (this *QJsonArray__const_iterator) cPointer() *C.QJsonArray__const_iterator {
	if this == nil {
		return nil
	}
	return this.h
}

func newQJsonArray__const_iterator(h *C.QJsonArray__const_iterator) *QJsonArray__const_iterator {
	if h == nil {
		return nil
	}
	return &QJsonArray__const_iterator{h: h}
}

func newQJsonArray__const_iterator_U(h unsafe.Pointer) *QJsonArray__const_iterator {
	return newQJsonArray__const_iterator((*C.QJsonArray__const_iterator)(h))
}

// NewQJsonArray__const_iterator constructs a new QJsonArray::const_iterator object.
func NewQJsonArray__const_iterator() *QJsonArray__const_iterator {
	ret := C.QJsonArray__const_iterator_new()
	return newQJsonArray__const_iterator(ret)
}

// NewQJsonArray__const_iterator2 constructs a new QJsonArray::const_iterator object.
func NewQJsonArray__const_iterator2(array *QJsonArray, index int) *QJsonArray__const_iterator {
	ret := C.QJsonArray__const_iterator_new2(array.cPointer(), (C.int)(index))
	return newQJsonArray__const_iterator(ret)
}

// NewQJsonArray__const_iterator3 constructs a new QJsonArray::const_iterator object.
func NewQJsonArray__const_iterator3(o *QJsonArray__const_iterator) *QJsonArray__const_iterator {
	ret := C.QJsonArray__const_iterator_new3(o.cPointer())
	return newQJsonArray__const_iterator(ret)
}

// NewQJsonArray__const_iterator4 constructs a new QJsonArray::const_iterator object.
func NewQJsonArray__const_iterator4(o *QJsonArray__iterator) *QJsonArray__const_iterator {
	ret := C.QJsonArray__const_iterator_new4(o.cPointer())
	return newQJsonArray__const_iterator(ret)
}

func (this *QJsonArray__const_iterator) OperatorMultiply() *QJsonValue {
	ret := C.QJsonArray__const_iterator_OperatorMultiply(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQJsonValue(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QJsonValue) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QJsonArray__const_iterator) OperatorMinusGreater() *QJsonValuePtr {
	ret := C.QJsonArray__const_iterator_OperatorMinusGreater(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQJsonValuePtr(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QJsonValuePtr) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QJsonArray__const_iterator) OperatorSubscript(j int) *QJsonValue {
	ret := C.QJsonArray__const_iterator_OperatorSubscript(this.h, (C.int)(j))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQJsonValue(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QJsonValue) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QJsonArray__const_iterator) OperatorEqual(o *QJsonArray__const_iterator) bool {
	ret := C.QJsonArray__const_iterator_OperatorEqual(this.h, o.cPointer())
	return (bool)(ret)
}

func (this *QJsonArray__const_iterator) OperatorNotEqual(o *QJsonArray__const_iterator) bool {
	ret := C.QJsonArray__const_iterator_OperatorNotEqual(this.h, o.cPointer())
	return (bool)(ret)
}

func (this *QJsonArray__const_iterator) OperatorLesser(other *QJsonArray__const_iterator) bool {
	ret := C.QJsonArray__const_iterator_OperatorLesser(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QJsonArray__const_iterator) OperatorLesserOrEqual(other *QJsonArray__const_iterator) bool {
	ret := C.QJsonArray__const_iterator_OperatorLesserOrEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QJsonArray__const_iterator) OperatorGreater(other *QJsonArray__const_iterator) bool {
	ret := C.QJsonArray__const_iterator_OperatorGreater(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QJsonArray__const_iterator) OperatorGreaterOrEqual(other *QJsonArray__const_iterator) bool {
	ret := C.QJsonArray__const_iterator_OperatorGreaterOrEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QJsonArray__const_iterator) OperatorPlusPlus(param1 int) *QJsonArray__const_iterator {
	ret := C.QJsonArray__const_iterator_OperatorPlusPlus(this.h, (C.int)(param1))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQJsonArray__const_iterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QJsonArray__const_iterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QJsonArray__const_iterator) OperatorMinusMinus(param1 int) *QJsonArray__const_iterator {
	ret := C.QJsonArray__const_iterator_OperatorMinusMinus(this.h, (C.int)(param1))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQJsonArray__const_iterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QJsonArray__const_iterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QJsonArray__const_iterator) OperatorPlus(j int) *QJsonArray__const_iterator {
	ret := C.QJsonArray__const_iterator_OperatorPlus(this.h, (C.int)(j))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQJsonArray__const_iterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QJsonArray__const_iterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QJsonArray__const_iterator) OperatorMinus(j int) *QJsonArray__const_iterator {
	ret := C.QJsonArray__const_iterator_OperatorMinus(this.h, (C.int)(j))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQJsonArray__const_iterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QJsonArray__const_iterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QJsonArray__const_iterator) OperatorMinusWithQJsonArrayconstIterator(j QJsonArray__const_iterator) int {
	ret := C.QJsonArray__const_iterator_OperatorMinusWithQJsonArrayconstIterator(this.h, j.cPointer())
	return (int)(ret)
}

func (this *QJsonArray__const_iterator) Delete() {
	C.QJsonArray__const_iterator_Delete(this.h)
}
