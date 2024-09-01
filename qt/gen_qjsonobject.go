package qt

/*

#include "gen_qjsonobject.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QJsonObject struct {
	h *C.QJsonObject
}

func (this *QJsonObject) cPointer() *C.QJsonObject {
	if this == nil {
		return nil
	}
	return this.h
}

func newQJsonObject(h *C.QJsonObject) *QJsonObject {
	if h == nil {
		return nil
	}
	return &QJsonObject{h: h}
}

func newQJsonObject_U(h unsafe.Pointer) *QJsonObject {
	return newQJsonObject((*C.QJsonObject)(h))
}

// NewQJsonObject constructs a new QJsonObject object.
func NewQJsonObject() *QJsonObject {
	ret := C.QJsonObject_new()
	return newQJsonObject(ret)
}

// NewQJsonObject2 constructs a new QJsonObject object.
func NewQJsonObject2(other *QJsonObject) *QJsonObject {
	ret := C.QJsonObject_new2(other.cPointer())
	return newQJsonObject(ret)
}

func (this *QJsonObject) OperatorAssign(other *QJsonObject) {
	C.QJsonObject_OperatorAssign(this.h, other.cPointer())
}

func (this *QJsonObject) Swap(other *QJsonObject) {
	C.QJsonObject_Swap(this.h, other.cPointer())
}

func (this *QJsonObject) Keys() []string {
	var _out **C.char = nil
	var _out_Lengths *C.int = nil
	var _out_len C.size_t = 0
	C.QJsonObject_Keys(this.h, &_out, &_out_Lengths, &_out_len)
	ret := make([]string, int(_out_len))
	_outCast := (*[0xffff]*C.char)(unsafe.Pointer(_out)) // hey ya
	_out_LengthsCast := (*[0xffff]C.int)(unsafe.Pointer(_out_Lengths))
	for i := 0; i < int(_out_len); i++ {
		ret[i] = C.GoStringN(_outCast[i], _out_LengthsCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QJsonObject) Size() int {
	ret := C.QJsonObject_Size(this.h)
	return (int)(ret)
}

func (this *QJsonObject) Count() int {
	ret := C.QJsonObject_Count(this.h)
	return (int)(ret)
}

func (this *QJsonObject) Length() int {
	ret := C.QJsonObject_Length(this.h)
	return (int)(ret)
}

func (this *QJsonObject) IsEmpty() bool {
	ret := C.QJsonObject_IsEmpty(this.h)
	return (bool)(ret)
}

func (this *QJsonObject) Value(key string) *QJsonValue {
	key_Cstring := C.CString(key)
	defer C.free(unsafe.Pointer(key_Cstring))
	ret := C.QJsonObject_Value(this.h, key_Cstring, C.ulong(len(key)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQJsonValue(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QJsonValue) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QJsonObject) OperatorSubscript(key string) *QJsonValue {
	key_Cstring := C.CString(key)
	defer C.free(unsafe.Pointer(key_Cstring))
	ret := C.QJsonObject_OperatorSubscript(this.h, key_Cstring, C.ulong(len(key)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQJsonValue(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QJsonValue) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QJsonObject) OperatorSubscriptWithKey(key string) *QJsonValueRef {
	key_Cstring := C.CString(key)
	defer C.free(unsafe.Pointer(key_Cstring))
	ret := C.QJsonObject_OperatorSubscriptWithKey(this.h, key_Cstring, C.ulong(len(key)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQJsonValueRef(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QJsonValueRef) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QJsonObject) Remove(key string) {
	key_Cstring := C.CString(key)
	defer C.free(unsafe.Pointer(key_Cstring))
	C.QJsonObject_Remove(this.h, key_Cstring, C.ulong(len(key)))
}

func (this *QJsonObject) Take(key string) *QJsonValue {
	key_Cstring := C.CString(key)
	defer C.free(unsafe.Pointer(key_Cstring))
	ret := C.QJsonObject_Take(this.h, key_Cstring, C.ulong(len(key)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQJsonValue(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QJsonValue) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QJsonObject) Contains(key string) bool {
	key_Cstring := C.CString(key)
	defer C.free(unsafe.Pointer(key_Cstring))
	ret := C.QJsonObject_Contains(this.h, key_Cstring, C.ulong(len(key)))
	return (bool)(ret)
}

func (this *QJsonObject) OperatorEqual(other *QJsonObject) bool {
	ret := C.QJsonObject_OperatorEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QJsonObject) OperatorNotEqual(other *QJsonObject) bool {
	ret := C.QJsonObject_OperatorNotEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QJsonObject) Begin() *QJsonObject__iterator {
	ret := C.QJsonObject_Begin(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQJsonObject__iterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QJsonObject__iterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QJsonObject) Begin2() *QJsonObject__const_iterator {
	ret := C.QJsonObject_Begin2(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQJsonObject__const_iterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QJsonObject__const_iterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QJsonObject) ConstBegin() *QJsonObject__const_iterator {
	ret := C.QJsonObject_ConstBegin(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQJsonObject__const_iterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QJsonObject__const_iterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QJsonObject) End() *QJsonObject__iterator {
	ret := C.QJsonObject_End(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQJsonObject__iterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QJsonObject__iterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QJsonObject) End2() *QJsonObject__const_iterator {
	ret := C.QJsonObject_End2(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQJsonObject__const_iterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QJsonObject__const_iterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QJsonObject) ConstEnd() *QJsonObject__const_iterator {
	ret := C.QJsonObject_ConstEnd(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQJsonObject__const_iterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QJsonObject__const_iterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QJsonObject) Erase(it QJsonObject__iterator) *QJsonObject__iterator {
	ret := C.QJsonObject_Erase(this.h, it.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQJsonObject__iterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QJsonObject__iterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QJsonObject) Find(key string) *QJsonObject__iterator {
	key_Cstring := C.CString(key)
	defer C.free(unsafe.Pointer(key_Cstring))
	ret := C.QJsonObject_Find(this.h, key_Cstring, C.ulong(len(key)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQJsonObject__iterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QJsonObject__iterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QJsonObject) FindWithKey(key string) *QJsonObject__const_iterator {
	key_Cstring := C.CString(key)
	defer C.free(unsafe.Pointer(key_Cstring))
	ret := C.QJsonObject_FindWithKey(this.h, key_Cstring, C.ulong(len(key)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQJsonObject__const_iterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QJsonObject__const_iterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QJsonObject) ConstFind(key string) *QJsonObject__const_iterator {
	key_Cstring := C.CString(key)
	defer C.free(unsafe.Pointer(key_Cstring))
	ret := C.QJsonObject_ConstFind(this.h, key_Cstring, C.ulong(len(key)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQJsonObject__const_iterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QJsonObject__const_iterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QJsonObject) Insert(key string, value *QJsonValue) *QJsonObject__iterator {
	key_Cstring := C.CString(key)
	defer C.free(unsafe.Pointer(key_Cstring))
	ret := C.QJsonObject_Insert(this.h, key_Cstring, C.ulong(len(key)), value.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQJsonObject__iterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QJsonObject__iterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QJsonObject) Empty() bool {
	ret := C.QJsonObject_Empty(this.h)
	return (bool)(ret)
}

func (this *QJsonObject) Delete() {
	C.QJsonObject_Delete(this.h)
}

type QJsonObject__iterator struct {
	h *C.QJsonObject__iterator
}

func (this *QJsonObject__iterator) cPointer() *C.QJsonObject__iterator {
	if this == nil {
		return nil
	}
	return this.h
}

func newQJsonObject__iterator(h *C.QJsonObject__iterator) *QJsonObject__iterator {
	if h == nil {
		return nil
	}
	return &QJsonObject__iterator{h: h}
}

func newQJsonObject__iterator_U(h unsafe.Pointer) *QJsonObject__iterator {
	return newQJsonObject__iterator((*C.QJsonObject__iterator)(h))
}

// NewQJsonObject__iterator constructs a new QJsonObject::iterator object.
func NewQJsonObject__iterator() *QJsonObject__iterator {
	ret := C.QJsonObject__iterator_new()
	return newQJsonObject__iterator(ret)
}

// NewQJsonObject__iterator2 constructs a new QJsonObject::iterator object.
func NewQJsonObject__iterator2(obj *QJsonObject, index int) *QJsonObject__iterator {
	ret := C.QJsonObject__iterator_new2(obj.cPointer(), (C.int)(index))
	return newQJsonObject__iterator(ret)
}

// NewQJsonObject__iterator3 constructs a new QJsonObject::iterator object.
func NewQJsonObject__iterator3(param1 *QJsonObject__iterator) *QJsonObject__iterator {
	ret := C.QJsonObject__iterator_new3(param1.cPointer())
	return newQJsonObject__iterator(ret)
}

func (this *QJsonObject__iterator) Key() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QJsonObject__iterator_Key(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QJsonObject__iterator) Value() *QJsonValueRef {
	ret := C.QJsonObject__iterator_Value(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQJsonValueRef(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QJsonValueRef) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QJsonObject__iterator) OperatorMultiply() *QJsonValueRef {
	ret := C.QJsonObject__iterator_OperatorMultiply(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQJsonValueRef(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QJsonValueRef) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QJsonObject__iterator) OperatorMinusGreater() *QJsonValueRefPtr {
	ret := C.QJsonObject__iterator_OperatorMinusGreater(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQJsonValueRefPtr(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QJsonValueRefPtr) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QJsonObject__iterator) OperatorSubscript(j int) *QJsonValueRef {
	ret := C.QJsonObject__iterator_OperatorSubscript(this.h, (C.int)(j))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQJsonValueRef(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QJsonValueRef) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QJsonObject__iterator) OperatorEqual(other *QJsonObject__iterator) bool {
	ret := C.QJsonObject__iterator_OperatorEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QJsonObject__iterator) OperatorNotEqual(other *QJsonObject__iterator) bool {
	ret := C.QJsonObject__iterator_OperatorNotEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QJsonObject__iterator) OperatorLesser(other *QJsonObject__iterator) bool {
	ret := C.QJsonObject__iterator_OperatorLesser(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QJsonObject__iterator) OperatorLesserOrEqual(other *QJsonObject__iterator) bool {
	ret := C.QJsonObject__iterator_OperatorLesserOrEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QJsonObject__iterator) OperatorGreater(other *QJsonObject__iterator) bool {
	ret := C.QJsonObject__iterator_OperatorGreater(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QJsonObject__iterator) OperatorGreaterOrEqual(other *QJsonObject__iterator) bool {
	ret := C.QJsonObject__iterator_OperatorGreaterOrEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QJsonObject__iterator) OperatorPlusPlus(param1 int) *QJsonObject__iterator {
	ret := C.QJsonObject__iterator_OperatorPlusPlus(this.h, (C.int)(param1))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQJsonObject__iterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QJsonObject__iterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QJsonObject__iterator) OperatorMinusMinus(param1 int) *QJsonObject__iterator {
	ret := C.QJsonObject__iterator_OperatorMinusMinus(this.h, (C.int)(param1))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQJsonObject__iterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QJsonObject__iterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QJsonObject__iterator) OperatorPlus(j int) *QJsonObject__iterator {
	ret := C.QJsonObject__iterator_OperatorPlus(this.h, (C.int)(j))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQJsonObject__iterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QJsonObject__iterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QJsonObject__iterator) OperatorMinus(j int) *QJsonObject__iterator {
	ret := C.QJsonObject__iterator_OperatorMinus(this.h, (C.int)(j))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQJsonObject__iterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QJsonObject__iterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QJsonObject__iterator) OperatorMinusWithQJsonObjectiterator(j QJsonObject__iterator) int {
	ret := C.QJsonObject__iterator_OperatorMinusWithQJsonObjectiterator(this.h, j.cPointer())
	return (int)(ret)
}

func (this *QJsonObject__iterator) OperatorEqualWithOther(other *QJsonObject__const_iterator) bool {
	ret := C.QJsonObject__iterator_OperatorEqualWithOther(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QJsonObject__iterator) OperatorNotEqualWithOther(other *QJsonObject__const_iterator) bool {
	ret := C.QJsonObject__iterator_OperatorNotEqualWithOther(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QJsonObject__iterator) OperatorLesserWithOther(other *QJsonObject__const_iterator) bool {
	ret := C.QJsonObject__iterator_OperatorLesserWithOther(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QJsonObject__iterator) OperatorLesserOrEqualWithOther(other *QJsonObject__const_iterator) bool {
	ret := C.QJsonObject__iterator_OperatorLesserOrEqualWithOther(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QJsonObject__iterator) OperatorGreaterWithOther(other *QJsonObject__const_iterator) bool {
	ret := C.QJsonObject__iterator_OperatorGreaterWithOther(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QJsonObject__iterator) OperatorGreaterOrEqualWithOther(other *QJsonObject__const_iterator) bool {
	ret := C.QJsonObject__iterator_OperatorGreaterOrEqualWithOther(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QJsonObject__iterator) Delete() {
	C.QJsonObject__iterator_Delete(this.h)
}

type QJsonObject__const_iterator struct {
	h *C.QJsonObject__const_iterator
}

func (this *QJsonObject__const_iterator) cPointer() *C.QJsonObject__const_iterator {
	if this == nil {
		return nil
	}
	return this.h
}

func newQJsonObject__const_iterator(h *C.QJsonObject__const_iterator) *QJsonObject__const_iterator {
	if h == nil {
		return nil
	}
	return &QJsonObject__const_iterator{h: h}
}

func newQJsonObject__const_iterator_U(h unsafe.Pointer) *QJsonObject__const_iterator {
	return newQJsonObject__const_iterator((*C.QJsonObject__const_iterator)(h))
}

// NewQJsonObject__const_iterator constructs a new QJsonObject::const_iterator object.
func NewQJsonObject__const_iterator() *QJsonObject__const_iterator {
	ret := C.QJsonObject__const_iterator_new()
	return newQJsonObject__const_iterator(ret)
}

// NewQJsonObject__const_iterator2 constructs a new QJsonObject::const_iterator object.
func NewQJsonObject__const_iterator2(obj *QJsonObject, index int) *QJsonObject__const_iterator {
	ret := C.QJsonObject__const_iterator_new2(obj.cPointer(), (C.int)(index))
	return newQJsonObject__const_iterator(ret)
}

// NewQJsonObject__const_iterator3 constructs a new QJsonObject::const_iterator object.
func NewQJsonObject__const_iterator3(other *QJsonObject__iterator) *QJsonObject__const_iterator {
	ret := C.QJsonObject__const_iterator_new3(other.cPointer())
	return newQJsonObject__const_iterator(ret)
}

// NewQJsonObject__const_iterator4 constructs a new QJsonObject::const_iterator object.
func NewQJsonObject__const_iterator4(param1 *QJsonObject__const_iterator) *QJsonObject__const_iterator {
	ret := C.QJsonObject__const_iterator_new4(param1.cPointer())
	return newQJsonObject__const_iterator(ret)
}

func (this *QJsonObject__const_iterator) Key() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QJsonObject__const_iterator_Key(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QJsonObject__const_iterator) Value() *QJsonValue {
	ret := C.QJsonObject__const_iterator_Value(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQJsonValue(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QJsonValue) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QJsonObject__const_iterator) OperatorMultiply() *QJsonValue {
	ret := C.QJsonObject__const_iterator_OperatorMultiply(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQJsonValue(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QJsonValue) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QJsonObject__const_iterator) OperatorMinusGreater() *QJsonValuePtr {
	ret := C.QJsonObject__const_iterator_OperatorMinusGreater(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQJsonValuePtr(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QJsonValuePtr) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QJsonObject__const_iterator) OperatorSubscript(j int) *QJsonValue {
	ret := C.QJsonObject__const_iterator_OperatorSubscript(this.h, (C.int)(j))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQJsonValue(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QJsonValue) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QJsonObject__const_iterator) OperatorEqual(other *QJsonObject__const_iterator) bool {
	ret := C.QJsonObject__const_iterator_OperatorEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QJsonObject__const_iterator) OperatorNotEqual(other *QJsonObject__const_iterator) bool {
	ret := C.QJsonObject__const_iterator_OperatorNotEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QJsonObject__const_iterator) OperatorLesser(other *QJsonObject__const_iterator) bool {
	ret := C.QJsonObject__const_iterator_OperatorLesser(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QJsonObject__const_iterator) OperatorLesserOrEqual(other *QJsonObject__const_iterator) bool {
	ret := C.QJsonObject__const_iterator_OperatorLesserOrEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QJsonObject__const_iterator) OperatorGreater(other *QJsonObject__const_iterator) bool {
	ret := C.QJsonObject__const_iterator_OperatorGreater(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QJsonObject__const_iterator) OperatorGreaterOrEqual(other *QJsonObject__const_iterator) bool {
	ret := C.QJsonObject__const_iterator_OperatorGreaterOrEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QJsonObject__const_iterator) OperatorPlusPlus(param1 int) *QJsonObject__const_iterator {
	ret := C.QJsonObject__const_iterator_OperatorPlusPlus(this.h, (C.int)(param1))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQJsonObject__const_iterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QJsonObject__const_iterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QJsonObject__const_iterator) OperatorMinusMinus(param1 int) *QJsonObject__const_iterator {
	ret := C.QJsonObject__const_iterator_OperatorMinusMinus(this.h, (C.int)(param1))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQJsonObject__const_iterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QJsonObject__const_iterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QJsonObject__const_iterator) OperatorPlus(j int) *QJsonObject__const_iterator {
	ret := C.QJsonObject__const_iterator_OperatorPlus(this.h, (C.int)(j))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQJsonObject__const_iterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QJsonObject__const_iterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QJsonObject__const_iterator) OperatorMinus(j int) *QJsonObject__const_iterator {
	ret := C.QJsonObject__const_iterator_OperatorMinus(this.h, (C.int)(j))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQJsonObject__const_iterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QJsonObject__const_iterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QJsonObject__const_iterator) OperatorMinusWithQJsonObjectconstIterator(j QJsonObject__const_iterator) int {
	ret := C.QJsonObject__const_iterator_OperatorMinusWithQJsonObjectconstIterator(this.h, j.cPointer())
	return (int)(ret)
}

func (this *QJsonObject__const_iterator) OperatorEqualWithOther(other *QJsonObject__iterator) bool {
	ret := C.QJsonObject__const_iterator_OperatorEqualWithOther(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QJsonObject__const_iterator) OperatorNotEqualWithOther(other *QJsonObject__iterator) bool {
	ret := C.QJsonObject__const_iterator_OperatorNotEqualWithOther(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QJsonObject__const_iterator) OperatorLesserWithOther(other *QJsonObject__iterator) bool {
	ret := C.QJsonObject__const_iterator_OperatorLesserWithOther(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QJsonObject__const_iterator) OperatorLesserOrEqualWithOther(other *QJsonObject__iterator) bool {
	ret := C.QJsonObject__const_iterator_OperatorLesserOrEqualWithOther(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QJsonObject__const_iterator) OperatorGreaterWithOther(other *QJsonObject__iterator) bool {
	ret := C.QJsonObject__const_iterator_OperatorGreaterWithOther(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QJsonObject__const_iterator) OperatorGreaterOrEqualWithOther(other *QJsonObject__iterator) bool {
	ret := C.QJsonObject__const_iterator_OperatorGreaterOrEqualWithOther(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QJsonObject__const_iterator) Delete() {
	C.QJsonObject__const_iterator_Delete(this.h)
}
