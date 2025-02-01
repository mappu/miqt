package cbor

/*

#include "gen_qcborarray.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
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

func (this *QCborArray) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQCborArray constructs the type using only CGO pointers.
func newQCborArray(h *C.QCborArray) *QCborArray {
	if h == nil {
		return nil
	}

	return &QCborArray{h: h}
}

// UnsafeNewQCborArray constructs the type using only unsafe pointers.
func UnsafeNewQCborArray(h unsafe.Pointer) *QCborArray {
	return newQCborArray((*C.QCborArray)(h))
}

// NewQCborArray constructs a new QCborArray object.
func NewQCborArray() *QCborArray {

	return newQCborArray(C.QCborArray_new())
}

// NewQCborArray2 constructs a new QCborArray object.
func NewQCborArray2(other *QCborArray) *QCborArray {

	return newQCborArray(C.QCborArray_new2(other.cPointer()))
}

func (this *QCborArray) OperatorAssign(other *QCborArray) {
	C.QCborArray_operatorAssign(this.h, other.cPointer())
}

func (this *QCborArray) Swap(other *QCborArray) {
	C.QCborArray_swap(this.h, other.cPointer())
}

func (this *QCborArray) ToCborValue() *QCborValue {
	_goptr := newQCborValue(C.QCborArray_toCborValue(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray) Size() int64 {
	return (int64)(C.QCborArray_size(this.h))
}

func (this *QCborArray) IsEmpty() bool {
	return (bool)(C.QCborArray_isEmpty(this.h))
}

func (this *QCborArray) Clear() {
	C.QCborArray_clear(this.h)
}

func (this *QCborArray) At(i int64) *QCborValue {
	_goptr := newQCborValue(C.QCborArray_at(this.h, (C.ptrdiff_t)(i)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray) First() *QCborValue {
	_goptr := newQCborValue(C.QCborArray_first(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray) Last() *QCborValue {
	_goptr := newQCborValue(C.QCborArray_last(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray) OperatorSubscript(i int64) *QCborValue {
	_goptr := newQCborValue(C.QCborArray_operatorSubscript(this.h, (C.ptrdiff_t)(i)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray) First2() *QCborValueRef {
	_goptr := newQCborValueRef(C.QCborArray_first2(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray) Last2() *QCborValueRef {
	_goptr := newQCborValueRef(C.QCborArray_last2(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray) OperatorSubscriptWithQsizetype(i int64) *QCborValueRef {
	_goptr := newQCborValueRef(C.QCborArray_operatorSubscriptWithQsizetype(this.h, (C.ptrdiff_t)(i)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray) Insert(i int64, value *QCborValue) {
	C.QCborArray_insert(this.h, (C.ptrdiff_t)(i), value.cPointer())
}

func (this *QCborArray) Prepend(value *QCborValue) {
	C.QCborArray_prepend(this.h, value.cPointer())
}

func (this *QCborArray) Append(value *QCborValue) {
	C.QCborArray_append(this.h, value.cPointer())
}

func (this *QCborArray) Extract(it QCborArray__ConstIterator) *QCborValue {
	_goptr := newQCborValue(C.QCborArray_extract(this.h, it.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray) ExtractWithIt(it QCborArray__Iterator) *QCborValue {
	_goptr := newQCborValue(C.QCborArray_extractWithIt(this.h, it.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray) RemoveAt(i int64) {
	C.QCborArray_removeAt(this.h, (C.ptrdiff_t)(i))
}

func (this *QCborArray) TakeAt(i int64) *QCborValue {
	_goptr := newQCborValue(C.QCborArray_takeAt(this.h, (C.ptrdiff_t)(i)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray) RemoveFirst() {
	C.QCborArray_removeFirst(this.h)
}

func (this *QCborArray) RemoveLast() {
	C.QCborArray_removeLast(this.h)
}

func (this *QCborArray) TakeFirst() *QCborValue {
	_goptr := newQCborValue(C.QCborArray_takeFirst(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray) TakeLast() *QCborValue {
	_goptr := newQCborValue(C.QCborArray_takeLast(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray) Contains(value *QCborValue) bool {
	return (bool)(C.QCborArray_contains(this.h, value.cPointer()))
}

func (this *QCborArray) Compare(other *QCborArray) int {
	return (int)(C.QCborArray_compare(this.h, other.cPointer()))
}

func (this *QCborArray) OperatorEqual(other *QCborArray) bool {
	return (bool)(C.QCborArray_operatorEqual(this.h, other.cPointer()))
}

func (this *QCborArray) OperatorNotEqual(other *QCborArray) bool {
	return (bool)(C.QCborArray_operatorNotEqual(this.h, other.cPointer()))
}

func (this *QCborArray) OperatorLesser(other *QCborArray) bool {
	return (bool)(C.QCborArray_operatorLesser(this.h, other.cPointer()))
}

func (this *QCborArray) Begin() *QCborArray__Iterator {
	_goptr := newQCborArray__Iterator(C.QCborArray_begin(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray) ConstBegin() *QCborArray__ConstIterator {
	_goptr := newQCborArray__ConstIterator(C.QCborArray_constBegin(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray) Begin2() *QCborArray__ConstIterator {
	_goptr := newQCborArray__ConstIterator(C.QCborArray_begin2(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray) Cbegin() *QCborArray__ConstIterator {
	_goptr := newQCborArray__ConstIterator(C.QCborArray_cbegin(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray) End() *QCborArray__Iterator {
	_goptr := newQCborArray__Iterator(C.QCborArray_end(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray) ConstEnd() *QCborArray__ConstIterator {
	_goptr := newQCborArray__ConstIterator(C.QCborArray_constEnd(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray) End2() *QCborArray__ConstIterator {
	_goptr := newQCborArray__ConstIterator(C.QCborArray_end2(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray) Cend() *QCborArray__ConstIterator {
	_goptr := newQCborArray__ConstIterator(C.QCborArray_cend(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray) Insert2(before QCborArray__Iterator, value *QCborValue) *QCborArray__Iterator {
	_goptr := newQCborArray__Iterator(C.QCborArray_insert2(this.h, before.cPointer(), value.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray) Insert3(before QCborArray__ConstIterator, value *QCborValue) *QCborArray__Iterator {
	_goptr := newQCborArray__Iterator(C.QCborArray_insert3(this.h, before.cPointer(), value.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray) Erase(it QCborArray__Iterator) *QCborArray__Iterator {
	_goptr := newQCborArray__Iterator(C.QCborArray_erase(this.h, it.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray) EraseWithIt(it QCborArray__ConstIterator) *QCborArray__Iterator {
	_goptr := newQCborArray__Iterator(C.QCborArray_eraseWithIt(this.h, it.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray) PushBack(t *QCborValue) {
	C.QCborArray_pushBack(this.h, t.cPointer())
}

func (this *QCborArray) PushFront(t *QCborValue) {
	C.QCborArray_pushFront(this.h, t.cPointer())
}

func (this *QCborArray) PopFront() {
	C.QCborArray_popFront(this.h)
}

func (this *QCborArray) PopBack() {
	C.QCborArray_popBack(this.h)
}

func (this *QCborArray) Empty() bool {
	return (bool)(C.QCborArray_empty(this.h))
}

func (this *QCborArray) OperatorPlus(v *QCborValue) *QCborArray {
	_goptr := newQCborArray(C.QCborArray_operatorPlus(this.h, v.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray) OperatorPlusAssign(v *QCborValue) *QCborArray {
	return newQCborArray(C.QCborArray_operatorPlusAssign(this.h, v.cPointer()))
}

func (this *QCborArray) OperatorShiftLeft(v *QCborValue) *QCborArray {
	return newQCborArray(C.QCborArray_operatorShiftLeft(this.h, v.cPointer()))
}

func QCborArray_FromStringList(list []string) *QCborArray {
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
	_goptr := newQCborArray(C.QCborArray_fromStringList(list_ma))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QCborArray_FromJsonArray(array *qt.QJsonArray) *QCborArray {
	_goptr := newQCborArray(C.QCborArray_fromJsonArray((*C.QJsonArray)(array.UnsafePointer())))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray) ToJsonArray() *qt.QJsonArray {
	_goptr := qt.UnsafeNewQJsonArray(unsafe.Pointer(C.QCborArray_toJsonArray(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QCborArray) Delete() {
	C.QCborArray_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QCborArray) GoGC() {
	runtime.SetFinalizer(this, func(this *QCborArray) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
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

func (this *QCborArray__Iterator) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQCborArray__Iterator constructs the type using only CGO pointers.
func newQCborArray__Iterator(h *C.QCborArray__Iterator) *QCborArray__Iterator {
	if h == nil {
		return nil
	}

	return &QCborArray__Iterator{h: h}
}

// UnsafeNewQCborArray__Iterator constructs the type using only unsafe pointers.
func UnsafeNewQCborArray__Iterator(h unsafe.Pointer) *QCborArray__Iterator {
	return newQCborArray__Iterator((*C.QCborArray__Iterator)(h))
}

// NewQCborArray__Iterator constructs a new QCborArray::Iterator object.
func NewQCborArray__Iterator() *QCborArray__Iterator {

	return newQCborArray__Iterator(C.QCborArray__Iterator_new())
}

// NewQCborArray__Iterator2 constructs a new QCborArray::Iterator object.
func NewQCborArray__Iterator2(param1 *QCborArray__Iterator) *QCborArray__Iterator {

	return newQCborArray__Iterator(C.QCborArray__Iterator_new2(param1.cPointer()))
}

func (this *QCborArray__Iterator) OperatorAssign(other *QCborArray__Iterator) {
	C.QCborArray__Iterator_operatorAssign(this.h, other.cPointer())
}

func (this *QCborArray__Iterator) OperatorMultiply() *QCborValueRef {
	_goptr := newQCborValueRef(C.QCborArray__Iterator_operatorMultiply(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray__Iterator) OperatorMinusGreater() *QCborValueRef {
	return newQCborValueRef(C.QCborArray__Iterator_operatorMinusGreater(this.h))
}

func (this *QCborArray__Iterator) OperatorSubscript(j int64) *QCborValueRef {
	_goptr := newQCborValueRef(C.QCborArray__Iterator_operatorSubscript(this.h, (C.ptrdiff_t)(j)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray__Iterator) OperatorEqual(o *QCborArray__Iterator) bool {
	return (bool)(C.QCborArray__Iterator_operatorEqual(this.h, o.cPointer()))
}

func (this *QCborArray__Iterator) OperatorNotEqual(o *QCborArray__Iterator) bool {
	return (bool)(C.QCborArray__Iterator_operatorNotEqual(this.h, o.cPointer()))
}

func (this *QCborArray__Iterator) OperatorLesser(other *QCborArray__Iterator) bool {
	return (bool)(C.QCborArray__Iterator_operatorLesser(this.h, other.cPointer()))
}

func (this *QCborArray__Iterator) OperatorLesserOrEqual(other *QCborArray__Iterator) bool {
	return (bool)(C.QCborArray__Iterator_operatorLesserOrEqual(this.h, other.cPointer()))
}

func (this *QCborArray__Iterator) OperatorGreater(other *QCborArray__Iterator) bool {
	return (bool)(C.QCborArray__Iterator_operatorGreater(this.h, other.cPointer()))
}

func (this *QCborArray__Iterator) OperatorGreaterOrEqual(other *QCborArray__Iterator) bool {
	return (bool)(C.QCborArray__Iterator_operatorGreaterOrEqual(this.h, other.cPointer()))
}

func (this *QCborArray__Iterator) OperatorEqualWithQCborArrayConstIterator(o *QCborArray__ConstIterator) bool {
	return (bool)(C.QCborArray__Iterator_operatorEqualWithQCborArrayConstIterator(this.h, o.cPointer()))
}

func (this *QCborArray__Iterator) OperatorNotEqualWithQCborArrayConstIterator(o *QCborArray__ConstIterator) bool {
	return (bool)(C.QCborArray__Iterator_operatorNotEqualWithQCborArrayConstIterator(this.h, o.cPointer()))
}

func (this *QCborArray__Iterator) OperatorLesserWithOther(other *QCborArray__ConstIterator) bool {
	return (bool)(C.QCborArray__Iterator_operatorLesserWithOther(this.h, other.cPointer()))
}

func (this *QCborArray__Iterator) OperatorLesserOrEqualWithOther(other *QCborArray__ConstIterator) bool {
	return (bool)(C.QCborArray__Iterator_operatorLesserOrEqualWithOther(this.h, other.cPointer()))
}

func (this *QCborArray__Iterator) OperatorGreaterWithOther(other *QCborArray__ConstIterator) bool {
	return (bool)(C.QCborArray__Iterator_operatorGreaterWithOther(this.h, other.cPointer()))
}

func (this *QCborArray__Iterator) OperatorGreaterOrEqualWithOther(other *QCborArray__ConstIterator) bool {
	return (bool)(C.QCborArray__Iterator_operatorGreaterOrEqualWithOther(this.h, other.cPointer()))
}

func (this *QCborArray__Iterator) OperatorPlusPlus() *QCborArray__Iterator {
	return newQCborArray__Iterator(C.QCborArray__Iterator_operatorPlusPlus(this.h))
}

func (this *QCborArray__Iterator) OperatorPlusPlusWithInt(param1 int) *QCborArray__Iterator {
	_goptr := newQCborArray__Iterator(C.QCborArray__Iterator_operatorPlusPlusWithInt(this.h, (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray__Iterator) OperatorMinusMinus() *QCborArray__Iterator {
	return newQCborArray__Iterator(C.QCborArray__Iterator_operatorMinusMinus(this.h))
}

func (this *QCborArray__Iterator) OperatorMinusMinusWithInt(param1 int) *QCborArray__Iterator {
	_goptr := newQCborArray__Iterator(C.QCborArray__Iterator_operatorMinusMinusWithInt(this.h, (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray__Iterator) OperatorPlusAssign(j int64) *QCborArray__Iterator {
	return newQCborArray__Iterator(C.QCborArray__Iterator_operatorPlusAssign(this.h, (C.ptrdiff_t)(j)))
}

func (this *QCborArray__Iterator) OperatorMinusAssign(j int64) *QCborArray__Iterator {
	return newQCborArray__Iterator(C.QCborArray__Iterator_operatorMinusAssign(this.h, (C.ptrdiff_t)(j)))
}

func (this *QCborArray__Iterator) OperatorPlus(j int64) *QCborArray__Iterator {
	_goptr := newQCborArray__Iterator(C.QCborArray__Iterator_operatorPlus(this.h, (C.ptrdiff_t)(j)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray__Iterator) OperatorMinus(j int64) *QCborArray__Iterator {
	_goptr := newQCborArray__Iterator(C.QCborArray__Iterator_operatorMinus(this.h, (C.ptrdiff_t)(j)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray__Iterator) OperatorMinusWithQCborArrayIterator(j QCborArray__Iterator) int64 {
	return (int64)(C.QCborArray__Iterator_operatorMinusWithQCborArrayIterator(this.h, j.cPointer()))
}

// Delete this object from C++ memory.
func (this *QCborArray__Iterator) Delete() {
	C.QCborArray__Iterator_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QCborArray__Iterator) GoGC() {
	runtime.SetFinalizer(this, func(this *QCborArray__Iterator) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
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

func (this *QCborArray__ConstIterator) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQCborArray__ConstIterator constructs the type using only CGO pointers.
func newQCborArray__ConstIterator(h *C.QCborArray__ConstIterator) *QCborArray__ConstIterator {
	if h == nil {
		return nil
	}

	return &QCborArray__ConstIterator{h: h}
}

// UnsafeNewQCborArray__ConstIterator constructs the type using only unsafe pointers.
func UnsafeNewQCborArray__ConstIterator(h unsafe.Pointer) *QCborArray__ConstIterator {
	return newQCborArray__ConstIterator((*C.QCborArray__ConstIterator)(h))
}

// NewQCborArray__ConstIterator constructs a new QCborArray::ConstIterator object.
func NewQCborArray__ConstIterator() *QCborArray__ConstIterator {

	return newQCborArray__ConstIterator(C.QCborArray__ConstIterator_new())
}

// NewQCborArray__ConstIterator2 constructs a new QCborArray::ConstIterator object.
func NewQCborArray__ConstIterator2(param1 *QCborArray__ConstIterator) *QCborArray__ConstIterator {

	return newQCborArray__ConstIterator(C.QCborArray__ConstIterator_new2(param1.cPointer()))
}

func (this *QCborArray__ConstIterator) OperatorAssign(other *QCborArray__ConstIterator) {
	C.QCborArray__ConstIterator_operatorAssign(this.h, other.cPointer())
}

func (this *QCborArray__ConstIterator) OperatorMultiply() *QCborValueRef {
	_goptr := newQCborValueRef(C.QCborArray__ConstIterator_operatorMultiply(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray__ConstIterator) OperatorMinusGreater() *QCborValueRef {
	return newQCborValueRef(C.QCborArray__ConstIterator_operatorMinusGreater(this.h))
}

func (this *QCborArray__ConstIterator) OperatorSubscript(j int64) *QCborValueRef {
	_goptr := newQCborValueRef(C.QCborArray__ConstIterator_operatorSubscript(this.h, (C.ptrdiff_t)(j)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray__ConstIterator) OperatorEqual(o *QCborArray__Iterator) bool {
	return (bool)(C.QCborArray__ConstIterator_operatorEqual(this.h, o.cPointer()))
}

func (this *QCborArray__ConstIterator) OperatorNotEqual(o *QCborArray__Iterator) bool {
	return (bool)(C.QCborArray__ConstIterator_operatorNotEqual(this.h, o.cPointer()))
}

func (this *QCborArray__ConstIterator) OperatorLesser(other *QCborArray__Iterator) bool {
	return (bool)(C.QCborArray__ConstIterator_operatorLesser(this.h, other.cPointer()))
}

func (this *QCborArray__ConstIterator) OperatorLesserOrEqual(other *QCborArray__Iterator) bool {
	return (bool)(C.QCborArray__ConstIterator_operatorLesserOrEqual(this.h, other.cPointer()))
}

func (this *QCborArray__ConstIterator) OperatorGreater(other *QCborArray__Iterator) bool {
	return (bool)(C.QCborArray__ConstIterator_operatorGreater(this.h, other.cPointer()))
}

func (this *QCborArray__ConstIterator) OperatorGreaterOrEqual(other *QCborArray__Iterator) bool {
	return (bool)(C.QCborArray__ConstIterator_operatorGreaterOrEqual(this.h, other.cPointer()))
}

func (this *QCborArray__ConstIterator) OperatorEqualWithQCborArrayConstIterator(o *QCborArray__ConstIterator) bool {
	return (bool)(C.QCborArray__ConstIterator_operatorEqualWithQCborArrayConstIterator(this.h, o.cPointer()))
}

func (this *QCborArray__ConstIterator) OperatorNotEqualWithQCborArrayConstIterator(o *QCborArray__ConstIterator) bool {
	return (bool)(C.QCborArray__ConstIterator_operatorNotEqualWithQCborArrayConstIterator(this.h, o.cPointer()))
}

func (this *QCborArray__ConstIterator) OperatorLesserWithOther(other *QCborArray__ConstIterator) bool {
	return (bool)(C.QCborArray__ConstIterator_operatorLesserWithOther(this.h, other.cPointer()))
}

func (this *QCborArray__ConstIterator) OperatorLesserOrEqualWithOther(other *QCborArray__ConstIterator) bool {
	return (bool)(C.QCborArray__ConstIterator_operatorLesserOrEqualWithOther(this.h, other.cPointer()))
}

func (this *QCborArray__ConstIterator) OperatorGreaterWithOther(other *QCborArray__ConstIterator) bool {
	return (bool)(C.QCborArray__ConstIterator_operatorGreaterWithOther(this.h, other.cPointer()))
}

func (this *QCborArray__ConstIterator) OperatorGreaterOrEqualWithOther(other *QCborArray__ConstIterator) bool {
	return (bool)(C.QCborArray__ConstIterator_operatorGreaterOrEqualWithOther(this.h, other.cPointer()))
}

func (this *QCborArray__ConstIterator) OperatorPlusPlus() *QCborArray__ConstIterator {
	return newQCborArray__ConstIterator(C.QCborArray__ConstIterator_operatorPlusPlus(this.h))
}

func (this *QCborArray__ConstIterator) OperatorPlusPlusWithInt(param1 int) *QCborArray__ConstIterator {
	_goptr := newQCborArray__ConstIterator(C.QCborArray__ConstIterator_operatorPlusPlusWithInt(this.h, (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray__ConstIterator) OperatorMinusMinus() *QCborArray__ConstIterator {
	return newQCborArray__ConstIterator(C.QCborArray__ConstIterator_operatorMinusMinus(this.h))
}

func (this *QCborArray__ConstIterator) OperatorMinusMinusWithInt(param1 int) *QCborArray__ConstIterator {
	_goptr := newQCborArray__ConstIterator(C.QCborArray__ConstIterator_operatorMinusMinusWithInt(this.h, (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray__ConstIterator) OperatorPlusAssign(j int64) *QCborArray__ConstIterator {
	return newQCborArray__ConstIterator(C.QCborArray__ConstIterator_operatorPlusAssign(this.h, (C.ptrdiff_t)(j)))
}

func (this *QCborArray__ConstIterator) OperatorMinusAssign(j int64) *QCborArray__ConstIterator {
	return newQCborArray__ConstIterator(C.QCborArray__ConstIterator_operatorMinusAssign(this.h, (C.ptrdiff_t)(j)))
}

func (this *QCborArray__ConstIterator) OperatorPlus(j int64) *QCborArray__ConstIterator {
	_goptr := newQCborArray__ConstIterator(C.QCborArray__ConstIterator_operatorPlus(this.h, (C.ptrdiff_t)(j)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray__ConstIterator) OperatorMinus(j int64) *QCborArray__ConstIterator {
	_goptr := newQCborArray__ConstIterator(C.QCborArray__ConstIterator_operatorMinus(this.h, (C.ptrdiff_t)(j)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray__ConstIterator) OperatorMinusWithQCborArrayConstIterator(j QCborArray__ConstIterator) int64 {
	return (int64)(C.QCborArray__ConstIterator_operatorMinusWithQCborArrayConstIterator(this.h, j.cPointer()))
}

// Delete this object from C++ memory.
func (this *QCborArray__ConstIterator) Delete() {
	C.QCborArray__ConstIterator_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QCborArray__ConstIterator) GoGC() {
	runtime.SetFinalizer(this, func(this *QCborArray__ConstIterator) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
