package qt6

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

func (this *QJsonArray) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQJsonArray constructs the type using only CGO pointers.
func newQJsonArray(h *C.QJsonArray) *QJsonArray {
	if h == nil {
		return nil
	}

	return &QJsonArray{h: h}
}

// UnsafeNewQJsonArray constructs the type using only unsafe pointers.
func UnsafeNewQJsonArray(h unsafe.Pointer) *QJsonArray {
	return newQJsonArray((*C.QJsonArray)(h))
}

// NewQJsonArray constructs a new QJsonArray object.
func NewQJsonArray() *QJsonArray {

	return newQJsonArray(C.QJsonArray_new())
}

// NewQJsonArray2 constructs a new QJsonArray object.
func NewQJsonArray2(other *QJsonArray) *QJsonArray {

	return newQJsonArray(C.QJsonArray_new2(other.cPointer()))
}

func (this *QJsonArray) OperatorAssign(other *QJsonArray) {
	C.QJsonArray_operatorAssign(this.h, other.cPointer())
}

func QJsonArray_FromStringList(list []string) *QJsonArray {
	list_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(list))))
	defer C.free(unsafe.Pointer(list_CArray))
	for i := range list {
		list_i_ms := C.struct_miqt_string{}
		list_i_ms.data = C.CString(list[i])
		list_i_ms.len = C.size_t(len(list[i]))
		defer C.free(unsafe.Pointer(list_i_ms.data))
		list_CArray[i] = list_i_ms
	}
	list_ma := C.struct_miqt_array{len: C.size_t(len(list)), data: unsafe.Pointer(list_CArray)}
	_goptr := newQJsonArray(C.QJsonArray_fromStringList(list_ma))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonArray) Size() int64 {
	return (int64)(C.QJsonArray_size(this.h))
}

func (this *QJsonArray) Count() int64 {
	return (int64)(C.QJsonArray_count(this.h))
}

func (this *QJsonArray) IsEmpty() bool {
	return (bool)(C.QJsonArray_isEmpty(this.h))
}

func (this *QJsonArray) At(i int64) *QJsonValue {
	_goptr := newQJsonValue(C.QJsonArray_at(this.h, (C.ptrdiff_t)(i)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonArray) First() *QJsonValue {
	_goptr := newQJsonValue(C.QJsonArray_first(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonArray) Last() *QJsonValue {
	_goptr := newQJsonValue(C.QJsonArray_last(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonArray) Prepend(value *QJsonValue) {
	C.QJsonArray_prepend(this.h, value.cPointer())
}

func (this *QJsonArray) Append(value *QJsonValue) {
	C.QJsonArray_append(this.h, value.cPointer())
}

func (this *QJsonArray) RemoveAt(i int64) {
	C.QJsonArray_removeAt(this.h, (C.ptrdiff_t)(i))
}

func (this *QJsonArray) TakeAt(i int64) *QJsonValue {
	_goptr := newQJsonValue(C.QJsonArray_takeAt(this.h, (C.ptrdiff_t)(i)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonArray) RemoveFirst() {
	C.QJsonArray_removeFirst(this.h)
}

func (this *QJsonArray) RemoveLast() {
	C.QJsonArray_removeLast(this.h)
}

func (this *QJsonArray) Insert(i int64, value *QJsonValue) {
	C.QJsonArray_insert(this.h, (C.ptrdiff_t)(i), value.cPointer())
}

func (this *QJsonArray) Replace(i int64, value *QJsonValue) {
	C.QJsonArray_replace(this.h, (C.ptrdiff_t)(i), value.cPointer())
}

func (this *QJsonArray) Contains(element *QJsonValue) bool {
	return (bool)(C.QJsonArray_contains(this.h, element.cPointer()))
}

func (this *QJsonArray) OperatorSubscript(i int64) *QJsonValueRef {
	_goptr := newQJsonValueRef(C.QJsonArray_operatorSubscript(this.h, (C.ptrdiff_t)(i)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonArray) OperatorSubscriptWithQsizetype(i int64) *QJsonValue {
	_goptr := newQJsonValue(C.QJsonArray_operatorSubscriptWithQsizetype(this.h, (C.ptrdiff_t)(i)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonArray) OperatorEqual(other *QJsonArray) bool {
	return (bool)(C.QJsonArray_operatorEqual(this.h, other.cPointer()))
}

func (this *QJsonArray) OperatorNotEqual(other *QJsonArray) bool {
	return (bool)(C.QJsonArray_operatorNotEqual(this.h, other.cPointer()))
}

func (this *QJsonArray) Swap(other *QJsonArray) {
	C.QJsonArray_swap(this.h, other.cPointer())
}

func (this *QJsonArray) Begin() *QJsonArray__iterator {
	_goptr := newQJsonArray__iterator(C.QJsonArray_begin(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonArray) Begin2() *QJsonArray__const_iterator {
	_goptr := newQJsonArray__const_iterator(C.QJsonArray_begin2(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonArray) ConstBegin() *QJsonArray__const_iterator {
	_goptr := newQJsonArray__const_iterator(C.QJsonArray_constBegin(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonArray) Cbegin() *QJsonArray__const_iterator {
	_goptr := newQJsonArray__const_iterator(C.QJsonArray_cbegin(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonArray) End() *QJsonArray__iterator {
	_goptr := newQJsonArray__iterator(C.QJsonArray_end(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonArray) End2() *QJsonArray__const_iterator {
	_goptr := newQJsonArray__const_iterator(C.QJsonArray_end2(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonArray) ConstEnd() *QJsonArray__const_iterator {
	_goptr := newQJsonArray__const_iterator(C.QJsonArray_constEnd(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonArray) Cend() *QJsonArray__const_iterator {
	_goptr := newQJsonArray__const_iterator(C.QJsonArray_cend(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonArray) Insert2(before QJsonArray__iterator, value *QJsonValue) *QJsonArray__iterator {
	_goptr := newQJsonArray__iterator(C.QJsonArray_insert2(this.h, before.cPointer(), value.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonArray) Erase(it QJsonArray__iterator) *QJsonArray__iterator {
	_goptr := newQJsonArray__iterator(C.QJsonArray_erase(this.h, it.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonArray) OperatorPlus(v *QJsonValue) *QJsonArray {
	_goptr := newQJsonArray(C.QJsonArray_operatorPlus(this.h, v.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonArray) OperatorPlusAssign(v *QJsonValue) *QJsonArray {
	return newQJsonArray(C.QJsonArray_operatorPlusAssign(this.h, v.cPointer()))
}

func (this *QJsonArray) OperatorShiftLeft(v *QJsonValue) *QJsonArray {
	return newQJsonArray(C.QJsonArray_operatorShiftLeft(this.h, v.cPointer()))
}

func (this *QJsonArray) PushBack(t *QJsonValue) {
	C.QJsonArray_pushBack(this.h, t.cPointer())
}

func (this *QJsonArray) PushFront(t *QJsonValue) {
	C.QJsonArray_pushFront(this.h, t.cPointer())
}

func (this *QJsonArray) PopFront() {
	C.QJsonArray_popFront(this.h)
}

func (this *QJsonArray) PopBack() {
	C.QJsonArray_popBack(this.h)
}

func (this *QJsonArray) Empty() bool {
	return (bool)(C.QJsonArray_empty(this.h))
}

// Delete this object from C++ memory.
func (this *QJsonArray) Delete() {
	C.QJsonArray_delete(this.h)
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

// newQJsonArray__iterator constructs the type using only CGO pointers.
func newQJsonArray__iterator(h *C.QJsonArray__iterator) *QJsonArray__iterator {
	if h == nil {
		return nil
	}

	return &QJsonArray__iterator{h: h}
}

// UnsafeNewQJsonArray__iterator constructs the type using only unsafe pointers.
func UnsafeNewQJsonArray__iterator(h unsafe.Pointer) *QJsonArray__iterator {
	return newQJsonArray__iterator((*C.QJsonArray__iterator)(h))
}

// NewQJsonArray__iterator constructs a new QJsonArray::iterator object.
func NewQJsonArray__iterator() *QJsonArray__iterator {

	return newQJsonArray__iterator(C.QJsonArray__iterator_new())
}

// NewQJsonArray__iterator2 constructs a new QJsonArray::iterator object.
func NewQJsonArray__iterator2(array *QJsonArray, index int64) *QJsonArray__iterator {

	return newQJsonArray__iterator(C.QJsonArray__iterator_new2(array.cPointer(), (C.ptrdiff_t)(index)))
}

// NewQJsonArray__iterator3 constructs a new QJsonArray::iterator object.
func NewQJsonArray__iterator3(other *QJsonArray__iterator) *QJsonArray__iterator {

	return newQJsonArray__iterator(C.QJsonArray__iterator_new3(other.cPointer()))
}

func (this *QJsonArray__iterator) OperatorAssign(other *QJsonArray__iterator) {
	C.QJsonArray__iterator_operatorAssign(this.h, other.cPointer())
}

func (this *QJsonArray__iterator) OperatorMultiply() *QJsonValueRef {
	_goptr := newQJsonValueRef(C.QJsonArray__iterator_operatorMultiply(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonArray__iterator) OperatorMinusGreater() *QJsonValueConstRef {
	return newQJsonValueConstRef(C.QJsonArray__iterator_operatorMinusGreater(this.h))
}

func (this *QJsonArray__iterator) OperatorMinusGreater2() *QJsonValueRef {
	return newQJsonValueRef(C.QJsonArray__iterator_operatorMinusGreater2(this.h))
}

func (this *QJsonArray__iterator) OperatorSubscript(j int64) *QJsonValueRef {
	_goptr := newQJsonValueRef(C.QJsonArray__iterator_operatorSubscript(this.h, (C.ptrdiff_t)(j)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonArray__iterator) OperatorEqual(o *QJsonArray__iterator) bool {
	return (bool)(C.QJsonArray__iterator_operatorEqual(this.h, o.cPointer()))
}

func (this *QJsonArray__iterator) OperatorNotEqual(o *QJsonArray__iterator) bool {
	return (bool)(C.QJsonArray__iterator_operatorNotEqual(this.h, o.cPointer()))
}

func (this *QJsonArray__iterator) OperatorLesser(other *QJsonArray__iterator) bool {
	return (bool)(C.QJsonArray__iterator_operatorLesser(this.h, other.cPointer()))
}

func (this *QJsonArray__iterator) OperatorLesserOrEqual(other *QJsonArray__iterator) bool {
	return (bool)(C.QJsonArray__iterator_operatorLesserOrEqual(this.h, other.cPointer()))
}

func (this *QJsonArray__iterator) OperatorGreater(other *QJsonArray__iterator) bool {
	return (bool)(C.QJsonArray__iterator_operatorGreater(this.h, other.cPointer()))
}

func (this *QJsonArray__iterator) OperatorGreaterOrEqual(other *QJsonArray__iterator) bool {
	return (bool)(C.QJsonArray__iterator_operatorGreaterOrEqual(this.h, other.cPointer()))
}

func (this *QJsonArray__iterator) OperatorEqualWithQJsonArrayconstIterator(o *QJsonArray__const_iterator) bool {
	return (bool)(C.QJsonArray__iterator_operatorEqualWithQJsonArrayconstIterator(this.h, o.cPointer()))
}

func (this *QJsonArray__iterator) OperatorNotEqualWithQJsonArrayconstIterator(o *QJsonArray__const_iterator) bool {
	return (bool)(C.QJsonArray__iterator_operatorNotEqualWithQJsonArrayconstIterator(this.h, o.cPointer()))
}

func (this *QJsonArray__iterator) OperatorLesserWithOther(other *QJsonArray__const_iterator) bool {
	return (bool)(C.QJsonArray__iterator_operatorLesserWithOther(this.h, other.cPointer()))
}

func (this *QJsonArray__iterator) OperatorLesserOrEqualWithOther(other *QJsonArray__const_iterator) bool {
	return (bool)(C.QJsonArray__iterator_operatorLesserOrEqualWithOther(this.h, other.cPointer()))
}

func (this *QJsonArray__iterator) OperatorGreaterWithOther(other *QJsonArray__const_iterator) bool {
	return (bool)(C.QJsonArray__iterator_operatorGreaterWithOther(this.h, other.cPointer()))
}

func (this *QJsonArray__iterator) OperatorGreaterOrEqualWithOther(other *QJsonArray__const_iterator) bool {
	return (bool)(C.QJsonArray__iterator_operatorGreaterOrEqualWithOther(this.h, other.cPointer()))
}

func (this *QJsonArray__iterator) OperatorPlusPlus() *QJsonArray__iterator {
	return newQJsonArray__iterator(C.QJsonArray__iterator_operatorPlusPlus(this.h))
}

func (this *QJsonArray__iterator) OperatorPlusPlusWithInt(param1 int) *QJsonArray__iterator {
	_goptr := newQJsonArray__iterator(C.QJsonArray__iterator_operatorPlusPlusWithInt(this.h, (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonArray__iterator) OperatorMinusMinus() *QJsonArray__iterator {
	return newQJsonArray__iterator(C.QJsonArray__iterator_operatorMinusMinus(this.h))
}

func (this *QJsonArray__iterator) OperatorMinusMinusWithInt(param1 int) *QJsonArray__iterator {
	_goptr := newQJsonArray__iterator(C.QJsonArray__iterator_operatorMinusMinusWithInt(this.h, (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonArray__iterator) OperatorPlusAssign(j int64) *QJsonArray__iterator {
	return newQJsonArray__iterator(C.QJsonArray__iterator_operatorPlusAssign(this.h, (C.ptrdiff_t)(j)))
}

func (this *QJsonArray__iterator) OperatorMinusAssign(j int64) *QJsonArray__iterator {
	return newQJsonArray__iterator(C.QJsonArray__iterator_operatorMinusAssign(this.h, (C.ptrdiff_t)(j)))
}

func (this *QJsonArray__iterator) OperatorPlus(j int64) *QJsonArray__iterator {
	_goptr := newQJsonArray__iterator(C.QJsonArray__iterator_operatorPlus(this.h, (C.ptrdiff_t)(j)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonArray__iterator) OperatorMinus(j int64) *QJsonArray__iterator {
	_goptr := newQJsonArray__iterator(C.QJsonArray__iterator_operatorMinus(this.h, (C.ptrdiff_t)(j)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonArray__iterator) OperatorMinusWithQJsonArrayiterator(j QJsonArray__iterator) int64 {
	return (int64)(C.QJsonArray__iterator_operatorMinusWithQJsonArrayiterator(this.h, j.cPointer()))
}

// Delete this object from C++ memory.
func (this *QJsonArray__iterator) Delete() {
	C.QJsonArray__iterator_delete(this.h)
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

// newQJsonArray__const_iterator constructs the type using only CGO pointers.
func newQJsonArray__const_iterator(h *C.QJsonArray__const_iterator) *QJsonArray__const_iterator {
	if h == nil {
		return nil
	}

	return &QJsonArray__const_iterator{h: h}
}

// UnsafeNewQJsonArray__const_iterator constructs the type using only unsafe pointers.
func UnsafeNewQJsonArray__const_iterator(h unsafe.Pointer) *QJsonArray__const_iterator {
	return newQJsonArray__const_iterator((*C.QJsonArray__const_iterator)(h))
}

// NewQJsonArray__const_iterator constructs a new QJsonArray::const_iterator object.
func NewQJsonArray__const_iterator() *QJsonArray__const_iterator {

	return newQJsonArray__const_iterator(C.QJsonArray__const_iterator_new())
}

// NewQJsonArray__const_iterator2 constructs a new QJsonArray::const_iterator object.
func NewQJsonArray__const_iterator2(array *QJsonArray, index int64) *QJsonArray__const_iterator {

	return newQJsonArray__const_iterator(C.QJsonArray__const_iterator_new2(array.cPointer(), (C.ptrdiff_t)(index)))
}

// NewQJsonArray__const_iterator3 constructs a new QJsonArray::const_iterator object.
func NewQJsonArray__const_iterator3(o *QJsonArray__iterator) *QJsonArray__const_iterator {

	return newQJsonArray__const_iterator(C.QJsonArray__const_iterator_new3(o.cPointer()))
}

// NewQJsonArray__const_iterator4 constructs a new QJsonArray::const_iterator object.
func NewQJsonArray__const_iterator4(other *QJsonArray__const_iterator) *QJsonArray__const_iterator {

	return newQJsonArray__const_iterator(C.QJsonArray__const_iterator_new4(other.cPointer()))
}

func (this *QJsonArray__const_iterator) OperatorAssign(other *QJsonArray__const_iterator) {
	C.QJsonArray__const_iterator_operatorAssign(this.h, other.cPointer())
}

func (this *QJsonArray__const_iterator) OperatorMultiply() *QJsonValueConstRef {
	_goptr := newQJsonValueConstRef(C.QJsonArray__const_iterator_operatorMultiply(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonArray__const_iterator) OperatorMinusGreater() *QJsonValueConstRef {
	return newQJsonValueConstRef(C.QJsonArray__const_iterator_operatorMinusGreater(this.h))
}

func (this *QJsonArray__const_iterator) OperatorSubscript(j int64) *QJsonValueConstRef {
	_goptr := newQJsonValueConstRef(C.QJsonArray__const_iterator_operatorSubscript(this.h, (C.ptrdiff_t)(j)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonArray__const_iterator) OperatorEqual(o *QJsonArray__const_iterator) bool {
	return (bool)(C.QJsonArray__const_iterator_operatorEqual(this.h, o.cPointer()))
}

func (this *QJsonArray__const_iterator) OperatorNotEqual(o *QJsonArray__const_iterator) bool {
	return (bool)(C.QJsonArray__const_iterator_operatorNotEqual(this.h, o.cPointer()))
}

func (this *QJsonArray__const_iterator) OperatorLesser(other *QJsonArray__const_iterator) bool {
	return (bool)(C.QJsonArray__const_iterator_operatorLesser(this.h, other.cPointer()))
}

func (this *QJsonArray__const_iterator) OperatorLesserOrEqual(other *QJsonArray__const_iterator) bool {
	return (bool)(C.QJsonArray__const_iterator_operatorLesserOrEqual(this.h, other.cPointer()))
}

func (this *QJsonArray__const_iterator) OperatorGreater(other *QJsonArray__const_iterator) bool {
	return (bool)(C.QJsonArray__const_iterator_operatorGreater(this.h, other.cPointer()))
}

func (this *QJsonArray__const_iterator) OperatorGreaterOrEqual(other *QJsonArray__const_iterator) bool {
	return (bool)(C.QJsonArray__const_iterator_operatorGreaterOrEqual(this.h, other.cPointer()))
}

func (this *QJsonArray__const_iterator) OperatorPlusPlus() *QJsonArray__const_iterator {
	return newQJsonArray__const_iterator(C.QJsonArray__const_iterator_operatorPlusPlus(this.h))
}

func (this *QJsonArray__const_iterator) OperatorPlusPlusWithInt(param1 int) *QJsonArray__const_iterator {
	_goptr := newQJsonArray__const_iterator(C.QJsonArray__const_iterator_operatorPlusPlusWithInt(this.h, (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonArray__const_iterator) OperatorMinusMinus() *QJsonArray__const_iterator {
	return newQJsonArray__const_iterator(C.QJsonArray__const_iterator_operatorMinusMinus(this.h))
}

func (this *QJsonArray__const_iterator) OperatorMinusMinusWithInt(param1 int) *QJsonArray__const_iterator {
	_goptr := newQJsonArray__const_iterator(C.QJsonArray__const_iterator_operatorMinusMinusWithInt(this.h, (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonArray__const_iterator) OperatorPlusAssign(j int64) *QJsonArray__const_iterator {
	return newQJsonArray__const_iterator(C.QJsonArray__const_iterator_operatorPlusAssign(this.h, (C.ptrdiff_t)(j)))
}

func (this *QJsonArray__const_iterator) OperatorMinusAssign(j int64) *QJsonArray__const_iterator {
	return newQJsonArray__const_iterator(C.QJsonArray__const_iterator_operatorMinusAssign(this.h, (C.ptrdiff_t)(j)))
}

func (this *QJsonArray__const_iterator) OperatorPlus(j int64) *QJsonArray__const_iterator {
	_goptr := newQJsonArray__const_iterator(C.QJsonArray__const_iterator_operatorPlus(this.h, (C.ptrdiff_t)(j)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonArray__const_iterator) OperatorMinus(j int64) *QJsonArray__const_iterator {
	_goptr := newQJsonArray__const_iterator(C.QJsonArray__const_iterator_operatorMinus(this.h, (C.ptrdiff_t)(j)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonArray__const_iterator) OperatorMinusWithQJsonArrayconstIterator(j QJsonArray__const_iterator) int64 {
	return (int64)(C.QJsonArray__const_iterator_operatorMinusWithQJsonArrayconstIterator(this.h, j.cPointer()))
}

// Delete this object from C++ memory.
func (this *QJsonArray__const_iterator) Delete() {
	C.QJsonArray__const_iterator_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QJsonArray__const_iterator) GoGC() {
	runtime.SetFinalizer(this, func(this *QJsonArray__const_iterator) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
