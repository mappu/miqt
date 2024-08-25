package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
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
