package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
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
	ret := C.QJsonArray_FromStringList(&list_CArray[0], &list_Lengths[0], C.ulong(len(list)))
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
