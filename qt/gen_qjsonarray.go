package qt

/*

#include "gen_qjsonarray.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/libmiqt"
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

func (this *QJsonArray) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQJsonArray(h *C.QJsonArray) *QJsonArray {
	if h == nil {
		return nil
	}
	return &QJsonArray{h: h}
}

func UnsafeNewQJsonArray(h unsafe.Pointer) *QJsonArray {
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
	// For the C ABI, malloc a C array of raw pointers
	list_CArray := (*[0xffff]*C.struct_miqt_string)(C.malloc(C.size_t(8 * len(list))))
	defer C.free(unsafe.Pointer(list_CArray))
	for i := range list {
		list_i_ms := libmiqt.Strdupg(list[i])
		defer C.free(list_i_ms)
		list_CArray[i] = (*C.struct_miqt_string)(list_i_ms)
	}
	list_ma := &C.struct_miqt_array{len: C.size_t(len(list)), data: unsafe.Pointer(list_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(list_ma))
	_ret := C.QJsonArray_FromStringList(list_ma)
	_goptr := newQJsonArray(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonArray) Size() int {
	return (int)(C.QJsonArray_Size(this.h))
}

func (this *QJsonArray) Count() int {
	return (int)(C.QJsonArray_Count(this.h))
}

func (this *QJsonArray) IsEmpty() bool {
	return (bool)(C.QJsonArray_IsEmpty(this.h))
}

func (this *QJsonArray) At(i int) *QJsonValue {
	_ret := C.QJsonArray_At(this.h, (C.int)(i))
	_goptr := newQJsonValue(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonArray) First() *QJsonValue {
	_ret := C.QJsonArray_First(this.h)
	_goptr := newQJsonValue(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonArray) Last() *QJsonValue {
	_ret := C.QJsonArray_Last(this.h)
	_goptr := newQJsonValue(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
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
	_ret := C.QJsonArray_TakeAt(this.h, (C.int)(i))
	_goptr := newQJsonValue(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
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
	return (bool)(C.QJsonArray_Contains(this.h, element.cPointer()))
}

func (this *QJsonArray) OperatorSubscript(i int) *QJsonValueRef {
	_ret := C.QJsonArray_OperatorSubscript(this.h, (C.int)(i))
	_goptr := newQJsonValueRef(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonArray) OperatorSubscriptWithInt(i int) *QJsonValue {
	_ret := C.QJsonArray_OperatorSubscriptWithInt(this.h, (C.int)(i))
	_goptr := newQJsonValue(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonArray) OperatorEqual(other *QJsonArray) bool {
	return (bool)(C.QJsonArray_OperatorEqual(this.h, other.cPointer()))
}

func (this *QJsonArray) OperatorNotEqual(other *QJsonArray) bool {
	return (bool)(C.QJsonArray_OperatorNotEqual(this.h, other.cPointer()))
}

func (this *QJsonArray) Swap(other *QJsonArray) {
	C.QJsonArray_Swap(this.h, other.cPointer())
}

func (this *QJsonArray) Begin() *QJsonArray__iterator {
	_ret := C.QJsonArray_Begin(this.h)
	_goptr := newQJsonArray__iterator(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonArray) Begin2() *QJsonArray__const_iterator {
	_ret := C.QJsonArray_Begin2(this.h)
	_goptr := newQJsonArray__const_iterator(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonArray) ConstBegin() *QJsonArray__const_iterator {
	_ret := C.QJsonArray_ConstBegin(this.h)
	_goptr := newQJsonArray__const_iterator(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonArray) Cbegin() *QJsonArray__const_iterator {
	_ret := C.QJsonArray_Cbegin(this.h)
	_goptr := newQJsonArray__const_iterator(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonArray) End() *QJsonArray__iterator {
	_ret := C.QJsonArray_End(this.h)
	_goptr := newQJsonArray__iterator(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonArray) End2() *QJsonArray__const_iterator {
	_ret := C.QJsonArray_End2(this.h)
	_goptr := newQJsonArray__const_iterator(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonArray) ConstEnd() *QJsonArray__const_iterator {
	_ret := C.QJsonArray_ConstEnd(this.h)
	_goptr := newQJsonArray__const_iterator(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonArray) Cend() *QJsonArray__const_iterator {
	_ret := C.QJsonArray_Cend(this.h)
	_goptr := newQJsonArray__const_iterator(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonArray) Insert2(before QJsonArray__iterator, value *QJsonValue) *QJsonArray__iterator {
	_ret := C.QJsonArray_Insert2(this.h, before.cPointer(), value.cPointer())
	_goptr := newQJsonArray__iterator(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonArray) Erase(it QJsonArray__iterator) *QJsonArray__iterator {
	_ret := C.QJsonArray_Erase(this.h, it.cPointer())
	_goptr := newQJsonArray__iterator(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonArray) OperatorPlus(v *QJsonValue) *QJsonArray {
	_ret := C.QJsonArray_OperatorPlus(this.h, v.cPointer())
	_goptr := newQJsonArray(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonArray) OperatorPlusAssign(v *QJsonValue) *QJsonArray {
	return UnsafeNewQJsonArray(unsafe.Pointer(C.QJsonArray_OperatorPlusAssign(this.h, v.cPointer())))
}

func (this *QJsonArray) OperatorShiftLeft(v *QJsonValue) *QJsonArray {
	return UnsafeNewQJsonArray(unsafe.Pointer(C.QJsonArray_OperatorShiftLeft(this.h, v.cPointer())))
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
	return (bool)(C.QJsonArray_Empty(this.h))
}

// Delete this object from C++ memory.
func (this *QJsonArray) Delete() {
	C.QJsonArray_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QJsonArray) GoGC() {
	runtime.SetFinalizer(this, func(this *QJsonArray) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
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

func (this *QJsonArray__iterator) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQJsonArray__iterator(h *C.QJsonArray__iterator) *QJsonArray__iterator {
	if h == nil {
		return nil
	}
	return &QJsonArray__iterator{h: h}
}

func UnsafeNewQJsonArray__iterator(h unsafe.Pointer) *QJsonArray__iterator {
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
	_ret := C.QJsonArray__iterator_OperatorMultiply(this.h)
	_goptr := newQJsonValueRef(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonArray__iterator) OperatorMinusGreater() *QJsonValueRefPtr {
	_ret := C.QJsonArray__iterator_OperatorMinusGreater(this.h)
	_goptr := newQJsonValueRefPtr(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonArray__iterator) OperatorSubscript(j int) *QJsonValueRef {
	_ret := C.QJsonArray__iterator_OperatorSubscript(this.h, (C.int)(j))
	_goptr := newQJsonValueRef(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonArray__iterator) OperatorEqual(o *QJsonArray__iterator) bool {
	return (bool)(C.QJsonArray__iterator_OperatorEqual(this.h, o.cPointer()))
}

func (this *QJsonArray__iterator) OperatorNotEqual(o *QJsonArray__iterator) bool {
	return (bool)(C.QJsonArray__iterator_OperatorNotEqual(this.h, o.cPointer()))
}

func (this *QJsonArray__iterator) OperatorLesser(other *QJsonArray__iterator) bool {
	return (bool)(C.QJsonArray__iterator_OperatorLesser(this.h, other.cPointer()))
}

func (this *QJsonArray__iterator) OperatorLesserOrEqual(other *QJsonArray__iterator) bool {
	return (bool)(C.QJsonArray__iterator_OperatorLesserOrEqual(this.h, other.cPointer()))
}

func (this *QJsonArray__iterator) OperatorGreater(other *QJsonArray__iterator) bool {
	return (bool)(C.QJsonArray__iterator_OperatorGreater(this.h, other.cPointer()))
}

func (this *QJsonArray__iterator) OperatorGreaterOrEqual(other *QJsonArray__iterator) bool {
	return (bool)(C.QJsonArray__iterator_OperatorGreaterOrEqual(this.h, other.cPointer()))
}

func (this *QJsonArray__iterator) OperatorEqualWithQJsonArrayconstIterator(o *QJsonArray__const_iterator) bool {
	return (bool)(C.QJsonArray__iterator_OperatorEqualWithQJsonArrayconstIterator(this.h, o.cPointer()))
}

func (this *QJsonArray__iterator) OperatorNotEqualWithQJsonArrayconstIterator(o *QJsonArray__const_iterator) bool {
	return (bool)(C.QJsonArray__iterator_OperatorNotEqualWithQJsonArrayconstIterator(this.h, o.cPointer()))
}

func (this *QJsonArray__iterator) OperatorLesserWithOther(other *QJsonArray__const_iterator) bool {
	return (bool)(C.QJsonArray__iterator_OperatorLesserWithOther(this.h, other.cPointer()))
}

func (this *QJsonArray__iterator) OperatorLesserOrEqualWithOther(other *QJsonArray__const_iterator) bool {
	return (bool)(C.QJsonArray__iterator_OperatorLesserOrEqualWithOther(this.h, other.cPointer()))
}

func (this *QJsonArray__iterator) OperatorGreaterWithOther(other *QJsonArray__const_iterator) bool {
	return (bool)(C.QJsonArray__iterator_OperatorGreaterWithOther(this.h, other.cPointer()))
}

func (this *QJsonArray__iterator) OperatorGreaterOrEqualWithOther(other *QJsonArray__const_iterator) bool {
	return (bool)(C.QJsonArray__iterator_OperatorGreaterOrEqualWithOther(this.h, other.cPointer()))
}

func (this *QJsonArray__iterator) OperatorPlusPlus() *QJsonArray__iterator {
	return UnsafeNewQJsonArray__iterator(unsafe.Pointer(C.QJsonArray__iterator_OperatorPlusPlus(this.h)))
}

func (this *QJsonArray__iterator) OperatorPlusPlusWithInt(param1 int) *QJsonArray__iterator {
	_ret := C.QJsonArray__iterator_OperatorPlusPlusWithInt(this.h, (C.int)(param1))
	_goptr := newQJsonArray__iterator(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonArray__iterator) OperatorMinusMinus() *QJsonArray__iterator {
	return UnsafeNewQJsonArray__iterator(unsafe.Pointer(C.QJsonArray__iterator_OperatorMinusMinus(this.h)))
}

func (this *QJsonArray__iterator) OperatorMinusMinusWithInt(param1 int) *QJsonArray__iterator {
	_ret := C.QJsonArray__iterator_OperatorMinusMinusWithInt(this.h, (C.int)(param1))
	_goptr := newQJsonArray__iterator(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonArray__iterator) OperatorPlusAssign(j int) *QJsonArray__iterator {
	return UnsafeNewQJsonArray__iterator(unsafe.Pointer(C.QJsonArray__iterator_OperatorPlusAssign(this.h, (C.int)(j))))
}

func (this *QJsonArray__iterator) OperatorMinusAssign(j int) *QJsonArray__iterator {
	return UnsafeNewQJsonArray__iterator(unsafe.Pointer(C.QJsonArray__iterator_OperatorMinusAssign(this.h, (C.int)(j))))
}

func (this *QJsonArray__iterator) OperatorPlus(j int) *QJsonArray__iterator {
	_ret := C.QJsonArray__iterator_OperatorPlus(this.h, (C.int)(j))
	_goptr := newQJsonArray__iterator(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonArray__iterator) OperatorMinus(j int) *QJsonArray__iterator {
	_ret := C.QJsonArray__iterator_OperatorMinus(this.h, (C.int)(j))
	_goptr := newQJsonArray__iterator(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonArray__iterator) OperatorMinusWithQJsonArrayiterator(j QJsonArray__iterator) int {
	return (int)(C.QJsonArray__iterator_OperatorMinusWithQJsonArrayiterator(this.h, j.cPointer()))
}

// Delete this object from C++ memory.
func (this *QJsonArray__iterator) Delete() {
	C.QJsonArray__iterator_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QJsonArray__iterator) GoGC() {
	runtime.SetFinalizer(this, func(this *QJsonArray__iterator) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
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

func (this *QJsonArray__const_iterator) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQJsonArray__const_iterator(h *C.QJsonArray__const_iterator) *QJsonArray__const_iterator {
	if h == nil {
		return nil
	}
	return &QJsonArray__const_iterator{h: h}
}

func UnsafeNewQJsonArray__const_iterator(h unsafe.Pointer) *QJsonArray__const_iterator {
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
	_ret := C.QJsonArray__const_iterator_OperatorMultiply(this.h)
	_goptr := newQJsonValue(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonArray__const_iterator) OperatorMinusGreater() *QJsonValuePtr {
	_ret := C.QJsonArray__const_iterator_OperatorMinusGreater(this.h)
	_goptr := newQJsonValuePtr(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonArray__const_iterator) OperatorSubscript(j int) *QJsonValue {
	_ret := C.QJsonArray__const_iterator_OperatorSubscript(this.h, (C.int)(j))
	_goptr := newQJsonValue(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonArray__const_iterator) OperatorEqual(o *QJsonArray__const_iterator) bool {
	return (bool)(C.QJsonArray__const_iterator_OperatorEqual(this.h, o.cPointer()))
}

func (this *QJsonArray__const_iterator) OperatorNotEqual(o *QJsonArray__const_iterator) bool {
	return (bool)(C.QJsonArray__const_iterator_OperatorNotEqual(this.h, o.cPointer()))
}

func (this *QJsonArray__const_iterator) OperatorLesser(other *QJsonArray__const_iterator) bool {
	return (bool)(C.QJsonArray__const_iterator_OperatorLesser(this.h, other.cPointer()))
}

func (this *QJsonArray__const_iterator) OperatorLesserOrEqual(other *QJsonArray__const_iterator) bool {
	return (bool)(C.QJsonArray__const_iterator_OperatorLesserOrEqual(this.h, other.cPointer()))
}

func (this *QJsonArray__const_iterator) OperatorGreater(other *QJsonArray__const_iterator) bool {
	return (bool)(C.QJsonArray__const_iterator_OperatorGreater(this.h, other.cPointer()))
}

func (this *QJsonArray__const_iterator) OperatorGreaterOrEqual(other *QJsonArray__const_iterator) bool {
	return (bool)(C.QJsonArray__const_iterator_OperatorGreaterOrEqual(this.h, other.cPointer()))
}

func (this *QJsonArray__const_iterator) OperatorPlusPlus() *QJsonArray__const_iterator {
	return UnsafeNewQJsonArray__const_iterator(unsafe.Pointer(C.QJsonArray__const_iterator_OperatorPlusPlus(this.h)))
}

func (this *QJsonArray__const_iterator) OperatorPlusPlusWithInt(param1 int) *QJsonArray__const_iterator {
	_ret := C.QJsonArray__const_iterator_OperatorPlusPlusWithInt(this.h, (C.int)(param1))
	_goptr := newQJsonArray__const_iterator(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonArray__const_iterator) OperatorMinusMinus() *QJsonArray__const_iterator {
	return UnsafeNewQJsonArray__const_iterator(unsafe.Pointer(C.QJsonArray__const_iterator_OperatorMinusMinus(this.h)))
}

func (this *QJsonArray__const_iterator) OperatorMinusMinusWithInt(param1 int) *QJsonArray__const_iterator {
	_ret := C.QJsonArray__const_iterator_OperatorMinusMinusWithInt(this.h, (C.int)(param1))
	_goptr := newQJsonArray__const_iterator(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonArray__const_iterator) OperatorPlusAssign(j int) *QJsonArray__const_iterator {
	return UnsafeNewQJsonArray__const_iterator(unsafe.Pointer(C.QJsonArray__const_iterator_OperatorPlusAssign(this.h, (C.int)(j))))
}

func (this *QJsonArray__const_iterator) OperatorMinusAssign(j int) *QJsonArray__const_iterator {
	return UnsafeNewQJsonArray__const_iterator(unsafe.Pointer(C.QJsonArray__const_iterator_OperatorMinusAssign(this.h, (C.int)(j))))
}

func (this *QJsonArray__const_iterator) OperatorPlus(j int) *QJsonArray__const_iterator {
	_ret := C.QJsonArray__const_iterator_OperatorPlus(this.h, (C.int)(j))
	_goptr := newQJsonArray__const_iterator(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonArray__const_iterator) OperatorMinus(j int) *QJsonArray__const_iterator {
	_ret := C.QJsonArray__const_iterator_OperatorMinus(this.h, (C.int)(j))
	_goptr := newQJsonArray__const_iterator(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonArray__const_iterator) OperatorMinusWithQJsonArrayconstIterator(j QJsonArray__const_iterator) int {
	return (int)(C.QJsonArray__const_iterator_OperatorMinusWithQJsonArrayconstIterator(this.h, j.cPointer()))
}

// Delete this object from C++ memory.
func (this *QJsonArray__const_iterator) Delete() {
	C.QJsonArray__const_iterator_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QJsonArray__const_iterator) GoGC() {
	runtime.SetFinalizer(this, func(this *QJsonArray__const_iterator) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
