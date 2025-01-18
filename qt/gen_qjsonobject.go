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
	h          *C.QJsonObject
	isSubclass bool
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

// newQJsonObject constructs the type using only CGO pointers.
func newQJsonObject(h *C.QJsonObject) *QJsonObject {
	if h == nil {
		return nil
	}

	return &QJsonObject{h: h}
}

// UnsafeNewQJsonObject constructs the type using only unsafe pointers.
func UnsafeNewQJsonObject(h unsafe.Pointer) *QJsonObject {
	return newQJsonObject((*C.QJsonObject)(h))
}

// NewQJsonObject constructs a new QJsonObject object.
func NewQJsonObject() *QJsonObject {

	ret := newQJsonObject(C.QJsonObject_new())
	ret.isSubclass = true
	return ret
}

// NewQJsonObject2 constructs a new QJsonObject object.
func NewQJsonObject2(other *QJsonObject) *QJsonObject {

	ret := newQJsonObject(C.QJsonObject_new2(other.cPointer()))
	ret.isSubclass = true
	return ret
}

func (this *QJsonObject) OperatorAssign(other *QJsonObject) {
	C.QJsonObject_OperatorAssign(this.h, other.cPointer())
}

func (this *QJsonObject) Swap(other *QJsonObject) {
	C.QJsonObject_Swap(this.h, other.cPointer())
}

func QJsonObject_FromVariantMap(mapVal map[string]QVariant) *QJsonObject {
	mapVal_Keys_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(mapVal))))
	defer C.free(unsafe.Pointer(mapVal_Keys_CArray))
	mapVal_Values_CArray := (*[0xffff]*C.QVariant)(C.malloc(C.size_t(8 * len(mapVal))))
	defer C.free(unsafe.Pointer(mapVal_Values_CArray))
	mapVal_ctr := 0
	for mapVal_k, mapVal_v := range mapVal {
		mapVal_k_ms := C.struct_miqt_string{}
		mapVal_k_ms.data = C.CString(mapVal_k)
		mapVal_k_ms.len = C.size_t(len(mapVal_k))
		defer C.free(unsafe.Pointer(mapVal_k_ms.data))
		mapVal_Keys_CArray[mapVal_ctr] = mapVal_k_ms
		mapVal_Values_CArray[mapVal_ctr] = mapVal_v.cPointer()
		mapVal_ctr++
	}
	mapVal_mm := C.struct_miqt_map{
		len:    C.size_t(len(mapVal)),
		keys:   unsafe.Pointer(mapVal_Keys_CArray),
		values: unsafe.Pointer(mapVal_Values_CArray),
	}
	_goptr := newQJsonObject(C.QJsonObject_FromVariantMap(mapVal_mm))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonObject) ToVariantMap() map[string]QVariant {
	var _mm C.struct_miqt_map = C.QJsonObject_ToVariantMap(this.h)
	_ret := make(map[string]QVariant, int(_mm.len))
	_Keys := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_mm.keys))
	_Values := (*[0xffff]*C.QVariant)(unsafe.Pointer(_mm.values))
	for i := 0; i < int(_mm.len); i++ {
		var _mapkey_ms C.struct_miqt_string = _Keys[i]
		_mapkey_ret := C.GoStringN(_mapkey_ms.data, C.int(int64(_mapkey_ms.len)))
		C.free(unsafe.Pointer(_mapkey_ms.data))
		_entry_Key := _mapkey_ret
		_mapval_goptr := newQVariant(_Values[i])
		_mapval_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_entry_Value := *_mapval_goptr

		_ret[_entry_Key] = _entry_Value
	}
	return _ret
}

func QJsonObject_FromVariantHash(mapVal map[string]QVariant) *QJsonObject {
	mapVal_Keys_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(mapVal))))
	defer C.free(unsafe.Pointer(mapVal_Keys_CArray))
	mapVal_Values_CArray := (*[0xffff]*C.QVariant)(C.malloc(C.size_t(8 * len(mapVal))))
	defer C.free(unsafe.Pointer(mapVal_Values_CArray))
	mapVal_ctr := 0
	for mapVal_k, mapVal_v := range mapVal {
		mapVal_k_ms := C.struct_miqt_string{}
		mapVal_k_ms.data = C.CString(mapVal_k)
		mapVal_k_ms.len = C.size_t(len(mapVal_k))
		defer C.free(unsafe.Pointer(mapVal_k_ms.data))
		mapVal_Keys_CArray[mapVal_ctr] = mapVal_k_ms
		mapVal_Values_CArray[mapVal_ctr] = mapVal_v.cPointer()
		mapVal_ctr++
	}
	mapVal_mm := C.struct_miqt_map{
		len:    C.size_t(len(mapVal)),
		keys:   unsafe.Pointer(mapVal_Keys_CArray),
		values: unsafe.Pointer(mapVal_Values_CArray),
	}
	_goptr := newQJsonObject(C.QJsonObject_FromVariantHash(mapVal_mm))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonObject) ToVariantHash() map[string]QVariant {
	var _mm C.struct_miqt_map = C.QJsonObject_ToVariantHash(this.h)
	_ret := make(map[string]QVariant, int(_mm.len))
	_Keys := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_mm.keys))
	_Values := (*[0xffff]*C.QVariant)(unsafe.Pointer(_mm.values))
	for i := 0; i < int(_mm.len); i++ {
		var _hashkey_ms C.struct_miqt_string = _Keys[i]
		_hashkey_ret := C.GoStringN(_hashkey_ms.data, C.int(int64(_hashkey_ms.len)))
		C.free(unsafe.Pointer(_hashkey_ms.data))
		_entry_Key := _hashkey_ret
		_hashval_goptr := newQVariant(_Values[i])
		_hashval_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_entry_Value := *_hashval_goptr

		_ret[_entry_Key] = _entry_Value
	}
	return _ret
}

func (this *QJsonObject) Keys() []string {
	var _ma C.struct_miqt_array = C.QJsonObject_Keys(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
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
	_goptr := newQJsonValue(C.QJsonObject_Value(this.h, key_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonObject) OperatorSubscript(key string) *QJsonValue {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	_goptr := newQJsonValue(C.QJsonObject_OperatorSubscript(this.h, key_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonObject) OperatorSubscriptWithKey(key string) *QJsonValueRef {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	_goptr := newQJsonValueRef(C.QJsonObject_OperatorSubscriptWithKey(this.h, key_ms))
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
	_goptr := newQJsonValue(C.QJsonObject_Take(this.h, key_ms))
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
	_goptr := newQJsonObject__iterator(C.QJsonObject_Begin(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonObject) Begin2() *QJsonObject__const_iterator {
	_goptr := newQJsonObject__const_iterator(C.QJsonObject_Begin2(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonObject) ConstBegin() *QJsonObject__const_iterator {
	_goptr := newQJsonObject__const_iterator(C.QJsonObject_ConstBegin(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonObject) End() *QJsonObject__iterator {
	_goptr := newQJsonObject__iterator(C.QJsonObject_End(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonObject) End2() *QJsonObject__const_iterator {
	_goptr := newQJsonObject__const_iterator(C.QJsonObject_End2(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonObject) ConstEnd() *QJsonObject__const_iterator {
	_goptr := newQJsonObject__const_iterator(C.QJsonObject_ConstEnd(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonObject) Erase(it QJsonObject__iterator) *QJsonObject__iterator {
	_goptr := newQJsonObject__iterator(C.QJsonObject_Erase(this.h, it.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonObject) Find(key string) *QJsonObject__iterator {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	_goptr := newQJsonObject__iterator(C.QJsonObject_Find(this.h, key_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonObject) FindWithKey(key string) *QJsonObject__const_iterator {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	_goptr := newQJsonObject__const_iterator(C.QJsonObject_FindWithKey(this.h, key_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonObject) ConstFind(key string) *QJsonObject__const_iterator {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	_goptr := newQJsonObject__const_iterator(C.QJsonObject_ConstFind(this.h, key_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonObject) Insert(key string, value *QJsonValue) *QJsonObject__iterator {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	_goptr := newQJsonObject__iterator(C.QJsonObject_Insert(this.h, key_ms, value.cPointer()))
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
	h          *C.QJsonObject__iterator
	isSubclass bool
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

// newQJsonObject__iterator constructs the type using only CGO pointers.
func newQJsonObject__iterator(h *C.QJsonObject__iterator) *QJsonObject__iterator {
	if h == nil {
		return nil
	}

	return &QJsonObject__iterator{h: h}
}

// UnsafeNewQJsonObject__iterator constructs the type using only unsafe pointers.
func UnsafeNewQJsonObject__iterator(h unsafe.Pointer) *QJsonObject__iterator {
	return newQJsonObject__iterator((*C.QJsonObject__iterator)(h))
}

// NewQJsonObject__iterator constructs a new QJsonObject::iterator object.
func NewQJsonObject__iterator() *QJsonObject__iterator {

	ret := newQJsonObject__iterator(C.QJsonObject__iterator_new())
	ret.isSubclass = true
	return ret
}

// NewQJsonObject__iterator2 constructs a new QJsonObject::iterator object.
func NewQJsonObject__iterator2(obj *QJsonObject, index int) *QJsonObject__iterator {

	ret := newQJsonObject__iterator(C.QJsonObject__iterator_new2(obj.cPointer(), (C.int)(index)))
	ret.isSubclass = true
	return ret
}

// NewQJsonObject__iterator3 constructs a new QJsonObject::iterator object.
func NewQJsonObject__iterator3(param1 *QJsonObject__iterator) *QJsonObject__iterator {

	ret := newQJsonObject__iterator(C.QJsonObject__iterator_new3(param1.cPointer()))
	ret.isSubclass = true
	return ret
}

func (this *QJsonObject__iterator) Key() string {
	var _ms C.struct_miqt_string = C.QJsonObject__iterator_Key(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QJsonObject__iterator) Value() *QJsonValueRef {
	_goptr := newQJsonValueRef(C.QJsonObject__iterator_Value(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonObject__iterator) OperatorMultiply() *QJsonValueRef {
	_goptr := newQJsonValueRef(C.QJsonObject__iterator_OperatorMultiply(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonObject__iterator) OperatorMinusGreater() *QJsonValueRefPtr {
	_goptr := newQJsonValueRefPtr(C.QJsonObject__iterator_OperatorMinusGreater(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonObject__iterator) OperatorSubscript(j int) *QJsonValueRef {
	_goptr := newQJsonValueRef(C.QJsonObject__iterator_OperatorSubscript(this.h, (C.int)(j)))
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
	return newQJsonObject__iterator(C.QJsonObject__iterator_OperatorPlusPlus(this.h))
}

func (this *QJsonObject__iterator) OperatorPlusPlusWithInt(param1 int) *QJsonObject__iterator {
	_goptr := newQJsonObject__iterator(C.QJsonObject__iterator_OperatorPlusPlusWithInt(this.h, (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonObject__iterator) OperatorMinusMinus() *QJsonObject__iterator {
	return newQJsonObject__iterator(C.QJsonObject__iterator_OperatorMinusMinus(this.h))
}

func (this *QJsonObject__iterator) OperatorMinusMinusWithInt(param1 int) *QJsonObject__iterator {
	_goptr := newQJsonObject__iterator(C.QJsonObject__iterator_OperatorMinusMinusWithInt(this.h, (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonObject__iterator) OperatorPlus(j int) *QJsonObject__iterator {
	_goptr := newQJsonObject__iterator(C.QJsonObject__iterator_OperatorPlus(this.h, (C.int)(j)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonObject__iterator) OperatorMinus(j int) *QJsonObject__iterator {
	_goptr := newQJsonObject__iterator(C.QJsonObject__iterator_OperatorMinus(this.h, (C.int)(j)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonObject__iterator) OperatorPlusAssign(j int) *QJsonObject__iterator {
	return newQJsonObject__iterator(C.QJsonObject__iterator_OperatorPlusAssign(this.h, (C.int)(j)))
}

func (this *QJsonObject__iterator) OperatorMinusAssign(j int) *QJsonObject__iterator {
	return newQJsonObject__iterator(C.QJsonObject__iterator_OperatorMinusAssign(this.h, (C.int)(j)))
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
	h          *C.QJsonObject__const_iterator
	isSubclass bool
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

// newQJsonObject__const_iterator constructs the type using only CGO pointers.
func newQJsonObject__const_iterator(h *C.QJsonObject__const_iterator) *QJsonObject__const_iterator {
	if h == nil {
		return nil
	}

	return &QJsonObject__const_iterator{h: h}
}

// UnsafeNewQJsonObject__const_iterator constructs the type using only unsafe pointers.
func UnsafeNewQJsonObject__const_iterator(h unsafe.Pointer) *QJsonObject__const_iterator {
	return newQJsonObject__const_iterator((*C.QJsonObject__const_iterator)(h))
}

// NewQJsonObject__const_iterator constructs a new QJsonObject::const_iterator object.
func NewQJsonObject__const_iterator() *QJsonObject__const_iterator {

	ret := newQJsonObject__const_iterator(C.QJsonObject__const_iterator_new())
	ret.isSubclass = true
	return ret
}

// NewQJsonObject__const_iterator2 constructs a new QJsonObject::const_iterator object.
func NewQJsonObject__const_iterator2(obj *QJsonObject, index int) *QJsonObject__const_iterator {

	ret := newQJsonObject__const_iterator(C.QJsonObject__const_iterator_new2(obj.cPointer(), (C.int)(index)))
	ret.isSubclass = true
	return ret
}

// NewQJsonObject__const_iterator3 constructs a new QJsonObject::const_iterator object.
func NewQJsonObject__const_iterator3(other *QJsonObject__iterator) *QJsonObject__const_iterator {

	ret := newQJsonObject__const_iterator(C.QJsonObject__const_iterator_new3(other.cPointer()))
	ret.isSubclass = true
	return ret
}

// NewQJsonObject__const_iterator4 constructs a new QJsonObject::const_iterator object.
func NewQJsonObject__const_iterator4(param1 *QJsonObject__const_iterator) *QJsonObject__const_iterator {

	ret := newQJsonObject__const_iterator(C.QJsonObject__const_iterator_new4(param1.cPointer()))
	ret.isSubclass = true
	return ret
}

func (this *QJsonObject__const_iterator) Key() string {
	var _ms C.struct_miqt_string = C.QJsonObject__const_iterator_Key(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QJsonObject__const_iterator) Value() *QJsonValue {
	_goptr := newQJsonValue(C.QJsonObject__const_iterator_Value(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonObject__const_iterator) OperatorMultiply() *QJsonValue {
	_goptr := newQJsonValue(C.QJsonObject__const_iterator_OperatorMultiply(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonObject__const_iterator) OperatorMinusGreater() *QJsonValuePtr {
	_goptr := newQJsonValuePtr(C.QJsonObject__const_iterator_OperatorMinusGreater(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonObject__const_iterator) OperatorSubscript(j int) *QJsonValue {
	_goptr := newQJsonValue(C.QJsonObject__const_iterator_OperatorSubscript(this.h, (C.int)(j)))
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
	return newQJsonObject__const_iterator(C.QJsonObject__const_iterator_OperatorPlusPlus(this.h))
}

func (this *QJsonObject__const_iterator) OperatorPlusPlusWithInt(param1 int) *QJsonObject__const_iterator {
	_goptr := newQJsonObject__const_iterator(C.QJsonObject__const_iterator_OperatorPlusPlusWithInt(this.h, (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonObject__const_iterator) OperatorMinusMinus() *QJsonObject__const_iterator {
	return newQJsonObject__const_iterator(C.QJsonObject__const_iterator_OperatorMinusMinus(this.h))
}

func (this *QJsonObject__const_iterator) OperatorMinusMinusWithInt(param1 int) *QJsonObject__const_iterator {
	_goptr := newQJsonObject__const_iterator(C.QJsonObject__const_iterator_OperatorMinusMinusWithInt(this.h, (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonObject__const_iterator) OperatorPlus(j int) *QJsonObject__const_iterator {
	_goptr := newQJsonObject__const_iterator(C.QJsonObject__const_iterator_OperatorPlus(this.h, (C.int)(j)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonObject__const_iterator) OperatorMinus(j int) *QJsonObject__const_iterator {
	_goptr := newQJsonObject__const_iterator(C.QJsonObject__const_iterator_OperatorMinus(this.h, (C.int)(j)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonObject__const_iterator) OperatorPlusAssign(j int) *QJsonObject__const_iterator {
	return newQJsonObject__const_iterator(C.QJsonObject__const_iterator_OperatorPlusAssign(this.h, (C.int)(j)))
}

func (this *QJsonObject__const_iterator) OperatorMinusAssign(j int) *QJsonObject__const_iterator {
	return newQJsonObject__const_iterator(C.QJsonObject__const_iterator_OperatorMinusAssign(this.h, (C.int)(j)))
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
