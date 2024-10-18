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

func (this *QJsonObject) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQJsonObject(h *C.QJsonObject) *QJsonObject {
	if h == nil {
		return nil
	}
	return &QJsonObject{h: h}
}

func UnsafeNewQJsonObject(h unsafe.Pointer) *QJsonObject {
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
	var _ma *C.struct_miqt_array = C.QJsonObject_Keys(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QJsonObject) Size() int {
	return (int)(C.QJsonObject_Size(this.h))
}

func (this *QJsonObject) Count() int {
	return (int)(C.QJsonObject_Count(this.h))
}

func (this *QJsonObject) Length() int {
	return (int)(C.QJsonObject_Length(this.h))
}

func (this *QJsonObject) IsEmpty() bool {
	return (bool)(C.QJsonObject_IsEmpty(this.h))
}

func (this *QJsonObject) Value(key string) *QJsonValue {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	_ret := C.QJsonObject_Value(this.h, key_ms)
	_goptr := newQJsonValue(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonObject) OperatorSubscript(key string) *QJsonValue {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	_ret := C.QJsonObject_OperatorSubscript(this.h, key_ms)
	_goptr := newQJsonValue(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonObject) OperatorSubscriptWithKey(key string) *QJsonValueRef {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	_ret := C.QJsonObject_OperatorSubscriptWithKey(this.h, key_ms)
	_goptr := newQJsonValueRef(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonObject) Remove(key string) {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	C.QJsonObject_Remove(this.h, key_ms)
}

func (this *QJsonObject) Take(key string) *QJsonValue {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	_ret := C.QJsonObject_Take(this.h, key_ms)
	_goptr := newQJsonValue(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonObject) Contains(key string) bool {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	return (bool)(C.QJsonObject_Contains(this.h, key_ms))
}

func (this *QJsonObject) OperatorEqual(other *QJsonObject) bool {
	return (bool)(C.QJsonObject_OperatorEqual(this.h, other.cPointer()))
}

func (this *QJsonObject) OperatorNotEqual(other *QJsonObject) bool {
	return (bool)(C.QJsonObject_OperatorNotEqual(this.h, other.cPointer()))
}

func (this *QJsonObject) Begin() *QJsonObject__iterator {
	_ret := C.QJsonObject_Begin(this.h)
	_goptr := newQJsonObject__iterator(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonObject) Begin2() *QJsonObject__const_iterator {
	_ret := C.QJsonObject_Begin2(this.h)
	_goptr := newQJsonObject__const_iterator(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonObject) ConstBegin() *QJsonObject__const_iterator {
	_ret := C.QJsonObject_ConstBegin(this.h)
	_goptr := newQJsonObject__const_iterator(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonObject) End() *QJsonObject__iterator {
	_ret := C.QJsonObject_End(this.h)
	_goptr := newQJsonObject__iterator(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonObject) End2() *QJsonObject__const_iterator {
	_ret := C.QJsonObject_End2(this.h)
	_goptr := newQJsonObject__const_iterator(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonObject) ConstEnd() *QJsonObject__const_iterator {
	_ret := C.QJsonObject_ConstEnd(this.h)
	_goptr := newQJsonObject__const_iterator(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonObject) Erase(it QJsonObject__iterator) *QJsonObject__iterator {
	_ret := C.QJsonObject_Erase(this.h, it.cPointer())
	_goptr := newQJsonObject__iterator(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonObject) Find(key string) *QJsonObject__iterator {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	_ret := C.QJsonObject_Find(this.h, key_ms)
	_goptr := newQJsonObject__iterator(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonObject) FindWithKey(key string) *QJsonObject__const_iterator {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	_ret := C.QJsonObject_FindWithKey(this.h, key_ms)
	_goptr := newQJsonObject__const_iterator(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonObject) ConstFind(key string) *QJsonObject__const_iterator {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	_ret := C.QJsonObject_ConstFind(this.h, key_ms)
	_goptr := newQJsonObject__const_iterator(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonObject) Insert(key string, value *QJsonValue) *QJsonObject__iterator {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	_ret := C.QJsonObject_Insert(this.h, key_ms, value.cPointer())
	_goptr := newQJsonObject__iterator(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonObject) Empty() bool {
	return (bool)(C.QJsonObject_Empty(this.h))
}

// Delete this object from C++ memory.
func (this *QJsonObject) Delete() {
	C.QJsonObject_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QJsonObject) GoGC() {
	runtime.SetFinalizer(this, func(this *QJsonObject) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
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

func (this *QJsonObject__iterator) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQJsonObject__iterator(h *C.QJsonObject__iterator) *QJsonObject__iterator {
	if h == nil {
		return nil
	}
	return &QJsonObject__iterator{h: h}
}

func UnsafeNewQJsonObject__iterator(h unsafe.Pointer) *QJsonObject__iterator {
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
	var _ms C.struct_miqt_string = C.QJsonObject__iterator_Key(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QJsonObject__iterator) Value() *QJsonValueRef {
	_ret := C.QJsonObject__iterator_Value(this.h)
	_goptr := newQJsonValueRef(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonObject__iterator) OperatorMultiply() *QJsonValueRef {
	_ret := C.QJsonObject__iterator_OperatorMultiply(this.h)
	_goptr := newQJsonValueRef(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonObject__iterator) OperatorMinusGreater() *QJsonValueRefPtr {
	_ret := C.QJsonObject__iterator_OperatorMinusGreater(this.h)
	_goptr := newQJsonValueRefPtr(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonObject__iterator) OperatorSubscript(j int) *QJsonValueRef {
	_ret := C.QJsonObject__iterator_OperatorSubscript(this.h, (C.int)(j))
	_goptr := newQJsonValueRef(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonObject__iterator) OperatorEqual(other *QJsonObject__iterator) bool {
	return (bool)(C.QJsonObject__iterator_OperatorEqual(this.h, other.cPointer()))
}

func (this *QJsonObject__iterator) OperatorNotEqual(other *QJsonObject__iterator) bool {
	return (bool)(C.QJsonObject__iterator_OperatorNotEqual(this.h, other.cPointer()))
}

func (this *QJsonObject__iterator) OperatorLesser(other *QJsonObject__iterator) bool {
	return (bool)(C.QJsonObject__iterator_OperatorLesser(this.h, other.cPointer()))
}

func (this *QJsonObject__iterator) OperatorLesserOrEqual(other *QJsonObject__iterator) bool {
	return (bool)(C.QJsonObject__iterator_OperatorLesserOrEqual(this.h, other.cPointer()))
}

func (this *QJsonObject__iterator) OperatorGreater(other *QJsonObject__iterator) bool {
	return (bool)(C.QJsonObject__iterator_OperatorGreater(this.h, other.cPointer()))
}

func (this *QJsonObject__iterator) OperatorGreaterOrEqual(other *QJsonObject__iterator) bool {
	return (bool)(C.QJsonObject__iterator_OperatorGreaterOrEqual(this.h, other.cPointer()))
}

func (this *QJsonObject__iterator) OperatorPlusPlus() *QJsonObject__iterator {
	return UnsafeNewQJsonObject__iterator(unsafe.Pointer(C.QJsonObject__iterator_OperatorPlusPlus(this.h)))
}

func (this *QJsonObject__iterator) OperatorPlusPlusWithInt(param1 int) *QJsonObject__iterator {
	_ret := C.QJsonObject__iterator_OperatorPlusPlusWithInt(this.h, (C.int)(param1))
	_goptr := newQJsonObject__iterator(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonObject__iterator) OperatorMinusMinus() *QJsonObject__iterator {
	return UnsafeNewQJsonObject__iterator(unsafe.Pointer(C.QJsonObject__iterator_OperatorMinusMinus(this.h)))
}

func (this *QJsonObject__iterator) OperatorMinusMinusWithInt(param1 int) *QJsonObject__iterator {
	_ret := C.QJsonObject__iterator_OperatorMinusMinusWithInt(this.h, (C.int)(param1))
	_goptr := newQJsonObject__iterator(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonObject__iterator) OperatorPlus(j int) *QJsonObject__iterator {
	_ret := C.QJsonObject__iterator_OperatorPlus(this.h, (C.int)(j))
	_goptr := newQJsonObject__iterator(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonObject__iterator) OperatorMinus(j int) *QJsonObject__iterator {
	_ret := C.QJsonObject__iterator_OperatorMinus(this.h, (C.int)(j))
	_goptr := newQJsonObject__iterator(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonObject__iterator) OperatorPlusAssign(j int) *QJsonObject__iterator {
	return UnsafeNewQJsonObject__iterator(unsafe.Pointer(C.QJsonObject__iterator_OperatorPlusAssign(this.h, (C.int)(j))))
}

func (this *QJsonObject__iterator) OperatorMinusAssign(j int) *QJsonObject__iterator {
	return UnsafeNewQJsonObject__iterator(unsafe.Pointer(C.QJsonObject__iterator_OperatorMinusAssign(this.h, (C.int)(j))))
}

func (this *QJsonObject__iterator) OperatorMinusWithQJsonObjectiterator(j QJsonObject__iterator) int {
	return (int)(C.QJsonObject__iterator_OperatorMinusWithQJsonObjectiterator(this.h, j.cPointer()))
}

func (this *QJsonObject__iterator) OperatorEqualWithOther(other *QJsonObject__const_iterator) bool {
	return (bool)(C.QJsonObject__iterator_OperatorEqualWithOther(this.h, other.cPointer()))
}

func (this *QJsonObject__iterator) OperatorNotEqualWithOther(other *QJsonObject__const_iterator) bool {
	return (bool)(C.QJsonObject__iterator_OperatorNotEqualWithOther(this.h, other.cPointer()))
}

func (this *QJsonObject__iterator) OperatorLesserWithOther(other *QJsonObject__const_iterator) bool {
	return (bool)(C.QJsonObject__iterator_OperatorLesserWithOther(this.h, other.cPointer()))
}

func (this *QJsonObject__iterator) OperatorLesserOrEqualWithOther(other *QJsonObject__const_iterator) bool {
	return (bool)(C.QJsonObject__iterator_OperatorLesserOrEqualWithOther(this.h, other.cPointer()))
}

func (this *QJsonObject__iterator) OperatorGreaterWithOther(other *QJsonObject__const_iterator) bool {
	return (bool)(C.QJsonObject__iterator_OperatorGreaterWithOther(this.h, other.cPointer()))
}

func (this *QJsonObject__iterator) OperatorGreaterOrEqualWithOther(other *QJsonObject__const_iterator) bool {
	return (bool)(C.QJsonObject__iterator_OperatorGreaterOrEqualWithOther(this.h, other.cPointer()))
}

// Delete this object from C++ memory.
func (this *QJsonObject__iterator) Delete() {
	C.QJsonObject__iterator_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QJsonObject__iterator) GoGC() {
	runtime.SetFinalizer(this, func(this *QJsonObject__iterator) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
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

func (this *QJsonObject__const_iterator) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQJsonObject__const_iterator(h *C.QJsonObject__const_iterator) *QJsonObject__const_iterator {
	if h == nil {
		return nil
	}
	return &QJsonObject__const_iterator{h: h}
}

func UnsafeNewQJsonObject__const_iterator(h unsafe.Pointer) *QJsonObject__const_iterator {
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
	var _ms C.struct_miqt_string = C.QJsonObject__const_iterator_Key(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QJsonObject__const_iterator) Value() *QJsonValue {
	_ret := C.QJsonObject__const_iterator_Value(this.h)
	_goptr := newQJsonValue(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonObject__const_iterator) OperatorMultiply() *QJsonValue {
	_ret := C.QJsonObject__const_iterator_OperatorMultiply(this.h)
	_goptr := newQJsonValue(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonObject__const_iterator) OperatorMinusGreater() *QJsonValuePtr {
	_ret := C.QJsonObject__const_iterator_OperatorMinusGreater(this.h)
	_goptr := newQJsonValuePtr(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonObject__const_iterator) OperatorSubscript(j int) *QJsonValue {
	_ret := C.QJsonObject__const_iterator_OperatorSubscript(this.h, (C.int)(j))
	_goptr := newQJsonValue(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonObject__const_iterator) OperatorEqual(other *QJsonObject__const_iterator) bool {
	return (bool)(C.QJsonObject__const_iterator_OperatorEqual(this.h, other.cPointer()))
}

func (this *QJsonObject__const_iterator) OperatorNotEqual(other *QJsonObject__const_iterator) bool {
	return (bool)(C.QJsonObject__const_iterator_OperatorNotEqual(this.h, other.cPointer()))
}

func (this *QJsonObject__const_iterator) OperatorLesser(other *QJsonObject__const_iterator) bool {
	return (bool)(C.QJsonObject__const_iterator_OperatorLesser(this.h, other.cPointer()))
}

func (this *QJsonObject__const_iterator) OperatorLesserOrEqual(other *QJsonObject__const_iterator) bool {
	return (bool)(C.QJsonObject__const_iterator_OperatorLesserOrEqual(this.h, other.cPointer()))
}

func (this *QJsonObject__const_iterator) OperatorGreater(other *QJsonObject__const_iterator) bool {
	return (bool)(C.QJsonObject__const_iterator_OperatorGreater(this.h, other.cPointer()))
}

func (this *QJsonObject__const_iterator) OperatorGreaterOrEqual(other *QJsonObject__const_iterator) bool {
	return (bool)(C.QJsonObject__const_iterator_OperatorGreaterOrEqual(this.h, other.cPointer()))
}

func (this *QJsonObject__const_iterator) OperatorPlusPlus() *QJsonObject__const_iterator {
	return UnsafeNewQJsonObject__const_iterator(unsafe.Pointer(C.QJsonObject__const_iterator_OperatorPlusPlus(this.h)))
}

func (this *QJsonObject__const_iterator) OperatorPlusPlusWithInt(param1 int) *QJsonObject__const_iterator {
	_ret := C.QJsonObject__const_iterator_OperatorPlusPlusWithInt(this.h, (C.int)(param1))
	_goptr := newQJsonObject__const_iterator(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonObject__const_iterator) OperatorMinusMinus() *QJsonObject__const_iterator {
	return UnsafeNewQJsonObject__const_iterator(unsafe.Pointer(C.QJsonObject__const_iterator_OperatorMinusMinus(this.h)))
}

func (this *QJsonObject__const_iterator) OperatorMinusMinusWithInt(param1 int) *QJsonObject__const_iterator {
	_ret := C.QJsonObject__const_iterator_OperatorMinusMinusWithInt(this.h, (C.int)(param1))
	_goptr := newQJsonObject__const_iterator(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonObject__const_iterator) OperatorPlus(j int) *QJsonObject__const_iterator {
	_ret := C.QJsonObject__const_iterator_OperatorPlus(this.h, (C.int)(j))
	_goptr := newQJsonObject__const_iterator(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonObject__const_iterator) OperatorMinus(j int) *QJsonObject__const_iterator {
	_ret := C.QJsonObject__const_iterator_OperatorMinus(this.h, (C.int)(j))
	_goptr := newQJsonObject__const_iterator(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonObject__const_iterator) OperatorPlusAssign(j int) *QJsonObject__const_iterator {
	return UnsafeNewQJsonObject__const_iterator(unsafe.Pointer(C.QJsonObject__const_iterator_OperatorPlusAssign(this.h, (C.int)(j))))
}

func (this *QJsonObject__const_iterator) OperatorMinusAssign(j int) *QJsonObject__const_iterator {
	return UnsafeNewQJsonObject__const_iterator(unsafe.Pointer(C.QJsonObject__const_iterator_OperatorMinusAssign(this.h, (C.int)(j))))
}

func (this *QJsonObject__const_iterator) OperatorMinusWithQJsonObjectconstIterator(j QJsonObject__const_iterator) int {
	return (int)(C.QJsonObject__const_iterator_OperatorMinusWithQJsonObjectconstIterator(this.h, j.cPointer()))
}

func (this *QJsonObject__const_iterator) OperatorEqualWithOther(other *QJsonObject__iterator) bool {
	return (bool)(C.QJsonObject__const_iterator_OperatorEqualWithOther(this.h, other.cPointer()))
}

func (this *QJsonObject__const_iterator) OperatorNotEqualWithOther(other *QJsonObject__iterator) bool {
	return (bool)(C.QJsonObject__const_iterator_OperatorNotEqualWithOther(this.h, other.cPointer()))
}

func (this *QJsonObject__const_iterator) OperatorLesserWithOther(other *QJsonObject__iterator) bool {
	return (bool)(C.QJsonObject__const_iterator_OperatorLesserWithOther(this.h, other.cPointer()))
}

func (this *QJsonObject__const_iterator) OperatorLesserOrEqualWithOther(other *QJsonObject__iterator) bool {
	return (bool)(C.QJsonObject__const_iterator_OperatorLesserOrEqualWithOther(this.h, other.cPointer()))
}

func (this *QJsonObject__const_iterator) OperatorGreaterWithOther(other *QJsonObject__iterator) bool {
	return (bool)(C.QJsonObject__const_iterator_OperatorGreaterWithOther(this.h, other.cPointer()))
}

func (this *QJsonObject__const_iterator) OperatorGreaterOrEqualWithOther(other *QJsonObject__iterator) bool {
	return (bool)(C.QJsonObject__const_iterator_OperatorGreaterOrEqualWithOther(this.h, other.cPointer()))
}

// Delete this object from C++ memory.
func (this *QJsonObject__const_iterator) Delete() {
	C.QJsonObject__const_iterator_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QJsonObject__const_iterator) GoGC() {
	runtime.SetFinalizer(this, func(this *QJsonObject__const_iterator) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
