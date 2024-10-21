package qt6

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

func (this *QCborArray) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQCborArray(h *C.QCborArray) *QCborArray {
	if h == nil {
		return nil
	}
	return &QCborArray{h: h}
}

func UnsafeNewQCborArray(h unsafe.Pointer) *QCborArray {
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
	_ret := C.QCborArray_ToCborValue(this.h)
	_goptr := newQCborValue(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray) Size() int64 {
	return (int64)(C.QCborArray_Size(this.h))
}

func (this *QCborArray) IsEmpty() bool {
	return (bool)(C.QCborArray_IsEmpty(this.h))
}

func (this *QCborArray) Clear() {
	C.QCborArray_Clear(this.h)
}

func (this *QCborArray) At(i int64) *QCborValue {
	_ret := C.QCborArray_At(this.h, (C.ptrdiff_t)(i))
	_goptr := newQCborValue(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray) First() *QCborValue {
	_ret := C.QCborArray_First(this.h)
	_goptr := newQCborValue(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray) Last() *QCborValue {
	_ret := C.QCborArray_Last(this.h)
	_goptr := newQCborValue(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray) OperatorSubscript(i int64) *QCborValue {
	_ret := C.QCborArray_OperatorSubscript(this.h, (C.ptrdiff_t)(i))
	_goptr := newQCborValue(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray) First2() *QCborValueRef {
	_ret := C.QCborArray_First2(this.h)
	_goptr := newQCborValueRef(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray) Last2() *QCborValueRef {
	_ret := C.QCborArray_Last2(this.h)
	_goptr := newQCborValueRef(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray) OperatorSubscriptWithQsizetype(i int64) *QCborValueRef {
	_ret := C.QCborArray_OperatorSubscriptWithQsizetype(this.h, (C.ptrdiff_t)(i))
	_goptr := newQCborValueRef(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray) Insert(i int64, value *QCborValue) {
	C.QCborArray_Insert(this.h, (C.ptrdiff_t)(i), value.cPointer())
}

func (this *QCborArray) Prepend(value *QCborValue) {
	C.QCborArray_Prepend(this.h, value.cPointer())
}

func (this *QCborArray) Append(value *QCborValue) {
	C.QCborArray_Append(this.h, value.cPointer())
}

func (this *QCborArray) Extract(it QCborArray__ConstIterator) *QCborValue {
	_ret := C.QCborArray_Extract(this.h, it.cPointer())
	_goptr := newQCborValue(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray) ExtractWithIt(it QCborArray__Iterator) *QCborValue {
	_ret := C.QCborArray_ExtractWithIt(this.h, it.cPointer())
	_goptr := newQCborValue(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray) RemoveAt(i int64) {
	C.QCborArray_RemoveAt(this.h, (C.ptrdiff_t)(i))
}

func (this *QCborArray) TakeAt(i int64) *QCborValue {
	_ret := C.QCborArray_TakeAt(this.h, (C.ptrdiff_t)(i))
	_goptr := newQCborValue(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray) RemoveFirst() {
	C.QCborArray_RemoveFirst(this.h)
}

func (this *QCborArray) RemoveLast() {
	C.QCborArray_RemoveLast(this.h)
}

func (this *QCborArray) TakeFirst() *QCborValue {
	_ret := C.QCborArray_TakeFirst(this.h)
	_goptr := newQCborValue(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray) TakeLast() *QCborValue {
	_ret := C.QCborArray_TakeLast(this.h)
	_goptr := newQCborValue(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray) Contains(value *QCborValue) bool {
	return (bool)(C.QCborArray_Contains(this.h, value.cPointer()))
}

func (this *QCborArray) Compare(other *QCborArray) int {
	return (int)(C.QCborArray_Compare(this.h, other.cPointer()))
}

func (this *QCborArray) OperatorEqual(other *QCborArray) bool {
	return (bool)(C.QCborArray_OperatorEqual(this.h, other.cPointer()))
}

func (this *QCborArray) OperatorNotEqual(other *QCborArray) bool {
	return (bool)(C.QCborArray_OperatorNotEqual(this.h, other.cPointer()))
}

func (this *QCborArray) OperatorLesser(other *QCborArray) bool {
	return (bool)(C.QCborArray_OperatorLesser(this.h, other.cPointer()))
}

func (this *QCborArray) Begin() *QCborArray__Iterator {
	_ret := C.QCborArray_Begin(this.h)
	_goptr := newQCborArray__Iterator(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray) ConstBegin() *QCborArray__ConstIterator {
	_ret := C.QCborArray_ConstBegin(this.h)
	_goptr := newQCborArray__ConstIterator(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray) Begin2() *QCborArray__ConstIterator {
	_ret := C.QCborArray_Begin2(this.h)
	_goptr := newQCborArray__ConstIterator(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray) Cbegin() *QCborArray__ConstIterator {
	_ret := C.QCborArray_Cbegin(this.h)
	_goptr := newQCborArray__ConstIterator(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray) End() *QCborArray__Iterator {
	_ret := C.QCborArray_End(this.h)
	_goptr := newQCborArray__Iterator(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray) ConstEnd() *QCborArray__ConstIterator {
	_ret := C.QCborArray_ConstEnd(this.h)
	_goptr := newQCborArray__ConstIterator(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray) End2() *QCborArray__ConstIterator {
	_ret := C.QCborArray_End2(this.h)
	_goptr := newQCborArray__ConstIterator(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray) Cend() *QCborArray__ConstIterator {
	_ret := C.QCborArray_Cend(this.h)
	_goptr := newQCborArray__ConstIterator(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray) Insert2(before QCborArray__Iterator, value *QCborValue) *QCborArray__Iterator {
	_ret := C.QCborArray_Insert2(this.h, before.cPointer(), value.cPointer())
	_goptr := newQCborArray__Iterator(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray) Insert3(before QCborArray__ConstIterator, value *QCborValue) *QCborArray__Iterator {
	_ret := C.QCborArray_Insert3(this.h, before.cPointer(), value.cPointer())
	_goptr := newQCborArray__Iterator(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray) Erase(it QCborArray__Iterator) *QCborArray__Iterator {
	_ret := C.QCborArray_Erase(this.h, it.cPointer())
	_goptr := newQCborArray__Iterator(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray) EraseWithIt(it QCborArray__ConstIterator) *QCborArray__Iterator {
	_ret := C.QCborArray_EraseWithIt(this.h, it.cPointer())
	_goptr := newQCborArray__Iterator(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
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
	return (bool)(C.QCborArray_Empty(this.h))
}

func (this *QCborArray) OperatorPlus(v *QCborValue) *QCborArray {
	_ret := C.QCborArray_OperatorPlus(this.h, v.cPointer())
	_goptr := newQCborArray(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray) OperatorPlusAssign(v *QCborValue) *QCborArray {
	return UnsafeNewQCborArray(unsafe.Pointer(C.QCborArray_OperatorPlusAssign(this.h, v.cPointer())))
}

func (this *QCborArray) OperatorShiftLeft(v *QCborValue) *QCborArray {
	return UnsafeNewQCborArray(unsafe.Pointer(C.QCborArray_OperatorShiftLeft(this.h, v.cPointer())))
}

func QCborArray_FromStringList(list []string) *QCborArray {
	// For the C ABI, malloc a C array of structs
	list_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(list))))
	defer C.free(unsafe.Pointer(list_CArray))
	for i := range list {
		list_i_ms := C.struct_miqt_string{}
		list_i_ms.data = C.CString(list[i])
		list_i_ms.len = C.size_t(len(list[i]))
		defer C.free(unsafe.Pointer(list_i_ms.data))
		list_CArray[i] = list_i_ms
	}
	list_ma := &C.struct_miqt_array{len: C.size_t(len(list)), data: unsafe.Pointer(list_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(list_ma))
	_ret := C.QCborArray_FromStringList(list_ma)
	_goptr := newQCborArray(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QCborArray_FromJsonArray(array *QJsonArray) *QCborArray {
	_ret := C.QCborArray_FromJsonArray(array.cPointer())
	_goptr := newQCborArray(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray) ToJsonArray() *QJsonArray {
	_ret := C.QCborArray_ToJsonArray(this.h)
	_goptr := newQJsonArray(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QCborArray) Delete() {
	C.QCborArray_Delete(this.h)
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

func newQCborArray__Iterator(h *C.QCborArray__Iterator) *QCborArray__Iterator {
	if h == nil {
		return nil
	}
	return &QCborArray__Iterator{h: h}
}

func UnsafeNewQCborArray__Iterator(h unsafe.Pointer) *QCborArray__Iterator {
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

func (this *QCborArray__Iterator) OperatorAssign(other *QCborArray__Iterator) {
	C.QCborArray__Iterator_OperatorAssign(this.h, other.cPointer())
}

func (this *QCborArray__Iterator) OperatorMultiply() *QCborValueRef {
	_ret := C.QCborArray__Iterator_OperatorMultiply(this.h)
	_goptr := newQCborValueRef(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray__Iterator) OperatorMinusGreater() *QCborValueRef {
	return UnsafeNewQCborValueRef(unsafe.Pointer(C.QCborArray__Iterator_OperatorMinusGreater(this.h)))
}

func (this *QCborArray__Iterator) OperatorMinusGreater2() *QCborValueConstRef {
	return UnsafeNewQCborValueConstRef(unsafe.Pointer(C.QCborArray__Iterator_OperatorMinusGreater2(this.h)))
}

func (this *QCborArray__Iterator) OperatorSubscript(j int64) *QCborValueRef {
	_ret := C.QCborArray__Iterator_OperatorSubscript(this.h, (C.ptrdiff_t)(j))
	_goptr := newQCborValueRef(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray__Iterator) OperatorEqual(o *QCborArray__Iterator) bool {
	return (bool)(C.QCborArray__Iterator_OperatorEqual(this.h, o.cPointer()))
}

func (this *QCborArray__Iterator) OperatorNotEqual(o *QCborArray__Iterator) bool {
	return (bool)(C.QCborArray__Iterator_OperatorNotEqual(this.h, o.cPointer()))
}

func (this *QCborArray__Iterator) OperatorLesser(other *QCborArray__Iterator) bool {
	return (bool)(C.QCborArray__Iterator_OperatorLesser(this.h, other.cPointer()))
}

func (this *QCborArray__Iterator) OperatorLesserOrEqual(other *QCborArray__Iterator) bool {
	return (bool)(C.QCborArray__Iterator_OperatorLesserOrEqual(this.h, other.cPointer()))
}

func (this *QCborArray__Iterator) OperatorGreater(other *QCborArray__Iterator) bool {
	return (bool)(C.QCborArray__Iterator_OperatorGreater(this.h, other.cPointer()))
}

func (this *QCborArray__Iterator) OperatorGreaterOrEqual(other *QCborArray__Iterator) bool {
	return (bool)(C.QCborArray__Iterator_OperatorGreaterOrEqual(this.h, other.cPointer()))
}

func (this *QCborArray__Iterator) OperatorEqualWithQCborArrayConstIterator(o *QCborArray__ConstIterator) bool {
	return (bool)(C.QCborArray__Iterator_OperatorEqualWithQCborArrayConstIterator(this.h, o.cPointer()))
}

func (this *QCborArray__Iterator) OperatorNotEqualWithQCborArrayConstIterator(o *QCborArray__ConstIterator) bool {
	return (bool)(C.QCborArray__Iterator_OperatorNotEqualWithQCborArrayConstIterator(this.h, o.cPointer()))
}

func (this *QCborArray__Iterator) OperatorLesserWithOther(other *QCborArray__ConstIterator) bool {
	return (bool)(C.QCborArray__Iterator_OperatorLesserWithOther(this.h, other.cPointer()))
}

func (this *QCborArray__Iterator) OperatorLesserOrEqualWithOther(other *QCborArray__ConstIterator) bool {
	return (bool)(C.QCborArray__Iterator_OperatorLesserOrEqualWithOther(this.h, other.cPointer()))
}

func (this *QCborArray__Iterator) OperatorGreaterWithOther(other *QCborArray__ConstIterator) bool {
	return (bool)(C.QCborArray__Iterator_OperatorGreaterWithOther(this.h, other.cPointer()))
}

func (this *QCborArray__Iterator) OperatorGreaterOrEqualWithOther(other *QCborArray__ConstIterator) bool {
	return (bool)(C.QCborArray__Iterator_OperatorGreaterOrEqualWithOther(this.h, other.cPointer()))
}

func (this *QCborArray__Iterator) OperatorPlusPlus() *QCborArray__Iterator {
	return UnsafeNewQCborArray__Iterator(unsafe.Pointer(C.QCborArray__Iterator_OperatorPlusPlus(this.h)))
}

func (this *QCborArray__Iterator) OperatorPlusPlusWithInt(param1 int) *QCborArray__Iterator {
	_ret := C.QCborArray__Iterator_OperatorPlusPlusWithInt(this.h, (C.int)(param1))
	_goptr := newQCborArray__Iterator(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray__Iterator) OperatorMinusMinus() *QCborArray__Iterator {
	return UnsafeNewQCborArray__Iterator(unsafe.Pointer(C.QCborArray__Iterator_OperatorMinusMinus(this.h)))
}

func (this *QCborArray__Iterator) OperatorMinusMinusWithInt(param1 int) *QCborArray__Iterator {
	_ret := C.QCborArray__Iterator_OperatorMinusMinusWithInt(this.h, (C.int)(param1))
	_goptr := newQCborArray__Iterator(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray__Iterator) OperatorPlusAssign(j int64) *QCborArray__Iterator {
	return UnsafeNewQCborArray__Iterator(unsafe.Pointer(C.QCborArray__Iterator_OperatorPlusAssign(this.h, (C.ptrdiff_t)(j))))
}

func (this *QCborArray__Iterator) OperatorMinusAssign(j int64) *QCborArray__Iterator {
	return UnsafeNewQCborArray__Iterator(unsafe.Pointer(C.QCborArray__Iterator_OperatorMinusAssign(this.h, (C.ptrdiff_t)(j))))
}

func (this *QCborArray__Iterator) OperatorPlus(j int64) *QCborArray__Iterator {
	_ret := C.QCborArray__Iterator_OperatorPlus(this.h, (C.ptrdiff_t)(j))
	_goptr := newQCborArray__Iterator(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray__Iterator) OperatorMinus(j int64) *QCborArray__Iterator {
	_ret := C.QCborArray__Iterator_OperatorMinus(this.h, (C.ptrdiff_t)(j))
	_goptr := newQCborArray__Iterator(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray__Iterator) OperatorMinusWithQCborArrayIterator(j QCborArray__Iterator) int64 {
	return (int64)(C.QCborArray__Iterator_OperatorMinusWithQCborArrayIterator(this.h, j.cPointer()))
}

// Delete this object from C++ memory.
func (this *QCborArray__Iterator) Delete() {
	C.QCborArray__Iterator_Delete(this.h)
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

func newQCborArray__ConstIterator(h *C.QCborArray__ConstIterator) *QCborArray__ConstIterator {
	if h == nil {
		return nil
	}
	return &QCborArray__ConstIterator{h: h}
}

func UnsafeNewQCborArray__ConstIterator(h unsafe.Pointer) *QCborArray__ConstIterator {
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

func (this *QCborArray__ConstIterator) OperatorAssign(other *QCborArray__ConstIterator) {
	C.QCborArray__ConstIterator_OperatorAssign(this.h, other.cPointer())
}

func (this *QCborArray__ConstIterator) OperatorMultiply() *QCborValueConstRef {
	_ret := C.QCborArray__ConstIterator_OperatorMultiply(this.h)
	_goptr := newQCborValueConstRef(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray__ConstIterator) OperatorMinusGreater() *QCborValueConstRef {
	return UnsafeNewQCborValueConstRef(unsafe.Pointer(C.QCborArray__ConstIterator_OperatorMinusGreater(this.h)))
}

func (this *QCborArray__ConstIterator) OperatorSubscript(j int64) *QCborValueConstRef {
	_ret := C.QCborArray__ConstIterator_OperatorSubscript(this.h, (C.ptrdiff_t)(j))
	_goptr := newQCborValueConstRef(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray__ConstIterator) OperatorEqual(o *QCborArray__Iterator) bool {
	return (bool)(C.QCborArray__ConstIterator_OperatorEqual(this.h, o.cPointer()))
}

func (this *QCborArray__ConstIterator) OperatorNotEqual(o *QCborArray__Iterator) bool {
	return (bool)(C.QCborArray__ConstIterator_OperatorNotEqual(this.h, o.cPointer()))
}

func (this *QCborArray__ConstIterator) OperatorLesser(other *QCborArray__Iterator) bool {
	return (bool)(C.QCborArray__ConstIterator_OperatorLesser(this.h, other.cPointer()))
}

func (this *QCborArray__ConstIterator) OperatorLesserOrEqual(other *QCborArray__Iterator) bool {
	return (bool)(C.QCborArray__ConstIterator_OperatorLesserOrEqual(this.h, other.cPointer()))
}

func (this *QCborArray__ConstIterator) OperatorGreater(other *QCborArray__Iterator) bool {
	return (bool)(C.QCborArray__ConstIterator_OperatorGreater(this.h, other.cPointer()))
}

func (this *QCborArray__ConstIterator) OperatorGreaterOrEqual(other *QCborArray__Iterator) bool {
	return (bool)(C.QCborArray__ConstIterator_OperatorGreaterOrEqual(this.h, other.cPointer()))
}

func (this *QCborArray__ConstIterator) OperatorEqualWithQCborArrayConstIterator(o *QCborArray__ConstIterator) bool {
	return (bool)(C.QCborArray__ConstIterator_OperatorEqualWithQCborArrayConstIterator(this.h, o.cPointer()))
}

func (this *QCborArray__ConstIterator) OperatorNotEqualWithQCborArrayConstIterator(o *QCborArray__ConstIterator) bool {
	return (bool)(C.QCborArray__ConstIterator_OperatorNotEqualWithQCborArrayConstIterator(this.h, o.cPointer()))
}

func (this *QCborArray__ConstIterator) OperatorLesserWithOther(other *QCborArray__ConstIterator) bool {
	return (bool)(C.QCborArray__ConstIterator_OperatorLesserWithOther(this.h, other.cPointer()))
}

func (this *QCborArray__ConstIterator) OperatorLesserOrEqualWithOther(other *QCborArray__ConstIterator) bool {
	return (bool)(C.QCborArray__ConstIterator_OperatorLesserOrEqualWithOther(this.h, other.cPointer()))
}

func (this *QCborArray__ConstIterator) OperatorGreaterWithOther(other *QCborArray__ConstIterator) bool {
	return (bool)(C.QCborArray__ConstIterator_OperatorGreaterWithOther(this.h, other.cPointer()))
}

func (this *QCborArray__ConstIterator) OperatorGreaterOrEqualWithOther(other *QCborArray__ConstIterator) bool {
	return (bool)(C.QCborArray__ConstIterator_OperatorGreaterOrEqualWithOther(this.h, other.cPointer()))
}

func (this *QCborArray__ConstIterator) OperatorPlusPlus() *QCborArray__ConstIterator {
	return UnsafeNewQCborArray__ConstIterator(unsafe.Pointer(C.QCborArray__ConstIterator_OperatorPlusPlus(this.h)))
}

func (this *QCborArray__ConstIterator) OperatorPlusPlusWithInt(param1 int) *QCborArray__ConstIterator {
	_ret := C.QCborArray__ConstIterator_OperatorPlusPlusWithInt(this.h, (C.int)(param1))
	_goptr := newQCborArray__ConstIterator(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray__ConstIterator) OperatorMinusMinus() *QCborArray__ConstIterator {
	return UnsafeNewQCborArray__ConstIterator(unsafe.Pointer(C.QCborArray__ConstIterator_OperatorMinusMinus(this.h)))
}

func (this *QCborArray__ConstIterator) OperatorMinusMinusWithInt(param1 int) *QCborArray__ConstIterator {
	_ret := C.QCborArray__ConstIterator_OperatorMinusMinusWithInt(this.h, (C.int)(param1))
	_goptr := newQCborArray__ConstIterator(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray__ConstIterator) OperatorPlusAssign(j int64) *QCborArray__ConstIterator {
	return UnsafeNewQCborArray__ConstIterator(unsafe.Pointer(C.QCborArray__ConstIterator_OperatorPlusAssign(this.h, (C.ptrdiff_t)(j))))
}

func (this *QCborArray__ConstIterator) OperatorMinusAssign(j int64) *QCborArray__ConstIterator {
	return UnsafeNewQCborArray__ConstIterator(unsafe.Pointer(C.QCborArray__ConstIterator_OperatorMinusAssign(this.h, (C.ptrdiff_t)(j))))
}

func (this *QCborArray__ConstIterator) OperatorPlus(j int64) *QCborArray__ConstIterator {
	_ret := C.QCborArray__ConstIterator_OperatorPlus(this.h, (C.ptrdiff_t)(j))
	_goptr := newQCborArray__ConstIterator(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray__ConstIterator) OperatorMinus(j int64) *QCborArray__ConstIterator {
	_ret := C.QCborArray__ConstIterator_OperatorMinus(this.h, (C.ptrdiff_t)(j))
	_goptr := newQCborArray__ConstIterator(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray__ConstIterator) OperatorMinusWithQCborArrayConstIterator(j QCborArray__ConstIterator) int64 {
	return (int64)(C.QCborArray__ConstIterator_OperatorMinusWithQCborArrayConstIterator(this.h, j.cPointer()))
}

// Delete this object from C++ memory.
func (this *QCborArray__ConstIterator) Delete() {
	C.QCborArray__ConstIterator_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QCborArray__ConstIterator) GoGC() {
	runtime.SetFinalizer(this, func(this *QCborArray__ConstIterator) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
