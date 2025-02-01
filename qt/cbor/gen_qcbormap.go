package cbor

/*

#include "gen_qcbormap.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QCborMap struct {
	h *C.QCborMap
}

func (this *QCborMap) cPointer() *C.QCborMap {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QCborMap) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQCborMap constructs the type using only CGO pointers.
func newQCborMap(h *C.QCborMap) *QCborMap {
	if h == nil {
		return nil
	}

	return &QCborMap{h: h}
}

// UnsafeNewQCborMap constructs the type using only unsafe pointers.
func UnsafeNewQCborMap(h unsafe.Pointer) *QCborMap {
	return newQCborMap((*C.QCborMap)(h))
}

// NewQCborMap constructs a new QCborMap object.
func NewQCborMap() *QCborMap {

	return newQCborMap(C.QCborMap_new())
}

// NewQCborMap2 constructs a new QCborMap object.
func NewQCborMap2(other *QCborMap) *QCborMap {

	return newQCborMap(C.QCborMap_new2(other.cPointer()))
}

func (this *QCborMap) OperatorAssign(other *QCborMap) {
	C.QCborMap_operatorAssign(this.h, other.cPointer())
}

func (this *QCborMap) Swap(other *QCborMap) {
	C.QCborMap_swap(this.h, other.cPointer())
}

func (this *QCborMap) ToCborValue() *QCborValue {
	_goptr := newQCborValue(C.QCborMap_toCborValue(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborMap) Size() int64 {
	return (int64)(C.QCborMap_size(this.h))
}

func (this *QCborMap) IsEmpty() bool {
	return (bool)(C.QCborMap_isEmpty(this.h))
}

func (this *QCborMap) Clear() {
	C.QCborMap_clear(this.h)
}

func (this *QCborMap) Keys() []QCborValue {
	var _ma C.struct_miqt_array = C.QCborMap_keys(this.h)
	_ret := make([]QCborValue, int(_ma.len))
	_outCast := (*[0xffff]*C.QCborValue)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_vv_goptr := newQCborValue(_outCast[i])
		_vv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_vv_goptr
	}
	return _ret
}

func (this *QCborMap) Value(key int64) *QCborValue {
	_goptr := newQCborValue(C.QCborMap_value(this.h, (C.longlong)(key)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborMap) Value2(key string) *QCborValue {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	_goptr := newQCborValue(C.QCborMap_value2(this.h, key_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborMap) Value3(key *QCborValue) *QCborValue {
	_goptr := newQCborValue(C.QCborMap_value3(this.h, key.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborMap) OperatorSubscript(key int64) *QCborValue {
	_goptr := newQCborValue(C.QCborMap_operatorSubscript(this.h, (C.longlong)(key)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborMap) OperatorSubscript2(key string) *QCborValue {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	_goptr := newQCborValue(C.QCborMap_operatorSubscript2(this.h, key_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborMap) OperatorSubscript3(key *QCborValue) *QCborValue {
	_goptr := newQCborValue(C.QCborMap_operatorSubscript3(this.h, key.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborMap) OperatorSubscript4(key int64) *QCborValueRef {
	_goptr := newQCborValueRef(C.QCborMap_operatorSubscript4(this.h, (C.longlong)(key)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborMap) OperatorSubscript6(key string) *QCborValueRef {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	_goptr := newQCborValueRef(C.QCborMap_operatorSubscript6(this.h, key_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborMap) OperatorSubscript7(key *QCborValue) *QCborValueRef {
	_goptr := newQCborValueRef(C.QCborMap_operatorSubscript7(this.h, key.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborMap) Take(key int64) *QCborValue {
	_goptr := newQCborValue(C.QCborMap_take(this.h, (C.longlong)(key)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborMap) Take2(key string) *QCborValue {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	_goptr := newQCborValue(C.QCborMap_take2(this.h, key_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborMap) Take3(key *QCborValue) *QCborValue {
	_goptr := newQCborValue(C.QCborMap_take3(this.h, key.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborMap) Remove(key int64) {
	C.QCborMap_remove(this.h, (C.longlong)(key))
}

func (this *QCborMap) Remove2(key string) {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	C.QCborMap_remove2(this.h, key_ms)
}

func (this *QCborMap) Remove3(key *QCborValue) {
	C.QCborMap_remove3(this.h, key.cPointer())
}

func (this *QCborMap) Contains(key int64) bool {
	return (bool)(C.QCborMap_contains(this.h, (C.longlong)(key)))
}

func (this *QCborMap) Contains2(key string) bool {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	return (bool)(C.QCborMap_contains2(this.h, key_ms))
}

func (this *QCborMap) Contains3(key *QCborValue) bool {
	return (bool)(C.QCborMap_contains3(this.h, key.cPointer()))
}

func (this *QCborMap) Compare(other *QCborMap) int {
	return (int)(C.QCborMap_compare(this.h, other.cPointer()))
}

func (this *QCborMap) OperatorEqual(other *QCborMap) bool {
	return (bool)(C.QCborMap_operatorEqual(this.h, other.cPointer()))
}

func (this *QCborMap) OperatorNotEqual(other *QCborMap) bool {
	return (bool)(C.QCborMap_operatorNotEqual(this.h, other.cPointer()))
}

func (this *QCborMap) OperatorLesser(other *QCborMap) bool {
	return (bool)(C.QCborMap_operatorLesser(this.h, other.cPointer()))
}

func (this *QCborMap) Begin() *QCborMap__Iterator {
	_goptr := newQCborMap__Iterator(C.QCborMap_begin(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborMap) ConstBegin() *QCborMap__ConstIterator {
	_goptr := newQCborMap__ConstIterator(C.QCborMap_constBegin(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborMap) Begin2() *QCborMap__ConstIterator {
	_goptr := newQCborMap__ConstIterator(C.QCborMap_begin2(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborMap) Cbegin() *QCborMap__ConstIterator {
	_goptr := newQCborMap__ConstIterator(C.QCborMap_cbegin(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborMap) End() *QCborMap__Iterator {
	_goptr := newQCborMap__Iterator(C.QCborMap_end(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborMap) ConstEnd() *QCborMap__ConstIterator {
	_goptr := newQCborMap__ConstIterator(C.QCborMap_constEnd(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborMap) End2() *QCborMap__ConstIterator {
	_goptr := newQCborMap__ConstIterator(C.QCborMap_end2(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborMap) Cend() *QCborMap__ConstIterator {
	_goptr := newQCborMap__ConstIterator(C.QCborMap_cend(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborMap) Erase(it QCborMap__Iterator) *QCborMap__Iterator {
	_goptr := newQCborMap__Iterator(C.QCborMap_erase(this.h, it.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborMap) EraseWithIt(it QCborMap__ConstIterator) *QCborMap__Iterator {
	_goptr := newQCborMap__Iterator(C.QCborMap_eraseWithIt(this.h, it.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborMap) Extract(it QCborMap__Iterator) *QCborValue {
	_goptr := newQCborValue(C.QCborMap_extract(this.h, it.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborMap) ExtractWithIt(it QCborMap__ConstIterator) *QCborValue {
	_goptr := newQCborValue(C.QCborMap_extractWithIt(this.h, it.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborMap) Empty() bool {
	return (bool)(C.QCborMap_empty(this.h))
}

func (this *QCborMap) Find(key int64) *QCborMap__Iterator {
	_goptr := newQCborMap__Iterator(C.QCborMap_find(this.h, (C.longlong)(key)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborMap) Find2(key string) *QCborMap__Iterator {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	_goptr := newQCborMap__Iterator(C.QCborMap_find2(this.h, key_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborMap) Find3(key *QCborValue) *QCborMap__Iterator {
	_goptr := newQCborMap__Iterator(C.QCborMap_find3(this.h, key.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborMap) ConstFind(key int64) *QCborMap__ConstIterator {
	_goptr := newQCborMap__ConstIterator(C.QCborMap_constFind(this.h, (C.longlong)(key)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborMap) ConstFind2(key string) *QCborMap__ConstIterator {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	_goptr := newQCborMap__ConstIterator(C.QCborMap_constFind2(this.h, key_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborMap) ConstFind3(key *QCborValue) *QCborMap__ConstIterator {
	_goptr := newQCborMap__ConstIterator(C.QCborMap_constFind3(this.h, key.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborMap) Find4(key int64) *QCborMap__ConstIterator {
	_goptr := newQCborMap__ConstIterator(C.QCborMap_find4(this.h, (C.longlong)(key)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborMap) Find6(key string) *QCborMap__ConstIterator {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	_goptr := newQCborMap__ConstIterator(C.QCborMap_find6(this.h, key_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborMap) Find7(key *QCborValue) *QCborMap__ConstIterator {
	_goptr := newQCborMap__ConstIterator(C.QCborMap_find7(this.h, key.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborMap) Insert(key int64, value_ *QCborValue) *QCborMap__Iterator {
	_goptr := newQCborMap__Iterator(C.QCborMap_insert(this.h, (C.longlong)(key), value_.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborMap) Insert3(key string, value_ *QCborValue) *QCborMap__Iterator {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	_goptr := newQCborMap__Iterator(C.QCborMap_insert3(this.h, key_ms, value_.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborMap) Insert4(key *QCborValue, value_ *QCborValue) *QCborMap__Iterator {
	_goptr := newQCborMap__Iterator(C.QCborMap_insert4(this.h, key.cPointer(), value_.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborMap) InsertWithQCborMapvalueType(v struct {
	First  QCborValue
	Second QCborValue
}) *QCborMap__Iterator {
	v_First_CArray := (*[0xffff]*C.QCborValue)(C.malloc(C.size_t(8)))
	defer C.free(unsafe.Pointer(v_First_CArray))
	v_Second_CArray := (*[0xffff]*C.QCborValue)(C.malloc(C.size_t(8)))
	defer C.free(unsafe.Pointer(v_Second_CArray))
	v_First_CArray[0] = v.First.cPointer()
	v_Second_CArray[0] = v.Second.cPointer()
	v_pair := C.struct_miqt_map{
		len:    1,
		keys:   unsafe.Pointer(v_First_CArray),
		values: unsafe.Pointer(v_Second_CArray),
	}
	_goptr := newQCborMap__Iterator(C.QCborMap_insertWithQCborMapvalueType(this.h, v_pair))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QCborMap_FromVariantMap(mapVal map[string]qt.QVariant) *QCborMap {
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
		mapVal_Values_CArray[mapVal_ctr] = (*C.QVariant)(mapVal_v.UnsafePointer())
		mapVal_ctr++
	}
	mapVal_mm := C.struct_miqt_map{
		len:    C.size_t(len(mapVal)),
		keys:   unsafe.Pointer(mapVal_Keys_CArray),
		values: unsafe.Pointer(mapVal_Values_CArray),
	}
	_goptr := newQCborMap(C.QCborMap_fromVariantMap(mapVal_mm))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QCborMap_FromVariantHash(hash map[string]qt.QVariant) *QCborMap {
	hash_Keys_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(hash))))
	defer C.free(unsafe.Pointer(hash_Keys_CArray))
	hash_Values_CArray := (*[0xffff]*C.QVariant)(C.malloc(C.size_t(8 * len(hash))))
	defer C.free(unsafe.Pointer(hash_Values_CArray))
	hash_ctr := 0
	for hash_k, hash_v := range hash {
		hash_k_ms := C.struct_miqt_string{}
		hash_k_ms.data = C.CString(hash_k)
		hash_k_ms.len = C.size_t(len(hash_k))
		defer C.free(unsafe.Pointer(hash_k_ms.data))
		hash_Keys_CArray[hash_ctr] = hash_k_ms
		hash_Values_CArray[hash_ctr] = (*C.QVariant)(hash_v.UnsafePointer())
		hash_ctr++
	}
	hash_mm := C.struct_miqt_map{
		len:    C.size_t(len(hash)),
		keys:   unsafe.Pointer(hash_Keys_CArray),
		values: unsafe.Pointer(hash_Values_CArray),
	}
	_goptr := newQCborMap(C.QCborMap_fromVariantHash(hash_mm))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QCborMap_FromJsonObject(o *qt.QJsonObject) *QCborMap {
	_goptr := newQCborMap(C.QCborMap_fromJsonObject((*C.QJsonObject)(o.UnsafePointer())))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborMap) ToVariantMap() map[string]qt.QVariant {
	var _mm C.struct_miqt_map = C.QCborMap_toVariantMap(this.h)
	_ret := make(map[string]qt.QVariant, int(_mm.len))
	_Keys := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_mm.keys))
	_Values := (*[0xffff]*C.QVariant)(unsafe.Pointer(_mm.values))
	for i := 0; i < int(_mm.len); i++ {
		var _mapkey_ms C.struct_miqt_string = _Keys[i]
		_mapkey_ret := C.GoStringN(_mapkey_ms.data, C.int(int64(_mapkey_ms.len)))
		C.free(unsafe.Pointer(_mapkey_ms.data))
		_entry_Key := _mapkey_ret
		_mapval_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(_Values[i]))
		_mapval_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_entry_Value := *_mapval_goptr

		_ret[_entry_Key] = _entry_Value
	}
	return _ret
}

func (this *QCborMap) ToVariantHash() map[string]qt.QVariant {
	var _mm C.struct_miqt_map = C.QCborMap_toVariantHash(this.h)
	_ret := make(map[string]qt.QVariant, int(_mm.len))
	_Keys := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_mm.keys))
	_Values := (*[0xffff]*C.QVariant)(unsafe.Pointer(_mm.values))
	for i := 0; i < int(_mm.len); i++ {
		var _hashkey_ms C.struct_miqt_string = _Keys[i]
		_hashkey_ret := C.GoStringN(_hashkey_ms.data, C.int(int64(_hashkey_ms.len)))
		C.free(unsafe.Pointer(_hashkey_ms.data))
		_entry_Key := _hashkey_ret
		_hashval_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(_Values[i]))
		_hashval_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_entry_Value := *_hashval_goptr

		_ret[_entry_Key] = _entry_Value
	}
	return _ret
}

func (this *QCborMap) ToJsonObject() *qt.QJsonObject {
	_goptr := qt.UnsafeNewQJsonObject(unsafe.Pointer(C.QCborMap_toJsonObject(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QCborMap) Delete() {
	C.QCborMap_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QCborMap) GoGC() {
	runtime.SetFinalizer(this, func(this *QCborMap) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QCborMap__Iterator struct {
	h *C.QCborMap__Iterator
}

func (this *QCborMap__Iterator) cPointer() *C.QCborMap__Iterator {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QCborMap__Iterator) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQCborMap__Iterator constructs the type using only CGO pointers.
func newQCborMap__Iterator(h *C.QCborMap__Iterator) *QCborMap__Iterator {
	if h == nil {
		return nil
	}

	return &QCborMap__Iterator{h: h}
}

// UnsafeNewQCborMap__Iterator constructs the type using only unsafe pointers.
func UnsafeNewQCborMap__Iterator(h unsafe.Pointer) *QCborMap__Iterator {
	return newQCborMap__Iterator((*C.QCborMap__Iterator)(h))
}

// NewQCborMap__Iterator constructs a new QCborMap::Iterator object.
func NewQCborMap__Iterator() *QCborMap__Iterator {

	return newQCborMap__Iterator(C.QCborMap__Iterator_new())
}

// NewQCborMap__Iterator2 constructs a new QCborMap::Iterator object.
func NewQCborMap__Iterator2(param1 *QCborMap__Iterator) *QCborMap__Iterator {

	return newQCborMap__Iterator(C.QCborMap__Iterator_new2(param1.cPointer()))
}

func (this *QCborMap__Iterator) OperatorAssign(other *QCborMap__Iterator) {
	C.QCborMap__Iterator_operatorAssign(this.h, other.cPointer())
}

func (this *QCborMap__Iterator) OperatorMultiply() struct {
	First  QCborValueRef
	Second QCborValueRef
} {
	var _mm C.struct_miqt_map = C.QCborMap__Iterator_operatorMultiply(this.h)
	_First_CArray := (*[0xffff]*C.QCborValueRef)(unsafe.Pointer(_mm.keys))
	_Second_CArray := (*[0xffff]*C.QCborValueRef)(unsafe.Pointer(_mm.values))
	_first_goptr := newQCborValueRef(_First_CArray[0])
	_first_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	_entry_First := *_first_goptr

	_second_goptr := newQCborValueRef(_Second_CArray[0])
	_second_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	_entry_Second := *_second_goptr

	return struct {
		First  QCborValueRef
		Second QCborValueRef
	}{First: _entry_First, Second: _entry_Second}
}

func (this *QCborMap__Iterator) OperatorMinusGreater() *QCborValueRef {
	return newQCborValueRef(C.QCborMap__Iterator_operatorMinusGreater(this.h))
}

func (this *QCborMap__Iterator) Key() *QCborValue {
	_goptr := newQCborValue(C.QCborMap__Iterator_key(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborMap__Iterator) Value() *QCborValueRef {
	_goptr := newQCborValueRef(C.QCborMap__Iterator_value(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborMap__Iterator) OperatorEqual(o *QCborMap__Iterator) bool {
	return (bool)(C.QCborMap__Iterator_operatorEqual(this.h, o.cPointer()))
}

func (this *QCborMap__Iterator) OperatorNotEqual(o *QCborMap__Iterator) bool {
	return (bool)(C.QCborMap__Iterator_operatorNotEqual(this.h, o.cPointer()))
}

func (this *QCborMap__Iterator) OperatorLesser(other *QCborMap__Iterator) bool {
	return (bool)(C.QCborMap__Iterator_operatorLesser(this.h, other.cPointer()))
}

func (this *QCborMap__Iterator) OperatorLesserOrEqual(other *QCborMap__Iterator) bool {
	return (bool)(C.QCborMap__Iterator_operatorLesserOrEqual(this.h, other.cPointer()))
}

func (this *QCborMap__Iterator) OperatorGreater(other *QCborMap__Iterator) bool {
	return (bool)(C.QCborMap__Iterator_operatorGreater(this.h, other.cPointer()))
}

func (this *QCborMap__Iterator) OperatorGreaterOrEqual(other *QCborMap__Iterator) bool {
	return (bool)(C.QCborMap__Iterator_operatorGreaterOrEqual(this.h, other.cPointer()))
}

func (this *QCborMap__Iterator) OperatorEqualWithQCborMapConstIterator(o *QCborMap__ConstIterator) bool {
	return (bool)(C.QCborMap__Iterator_operatorEqualWithQCborMapConstIterator(this.h, o.cPointer()))
}

func (this *QCborMap__Iterator) OperatorNotEqualWithQCborMapConstIterator(o *QCborMap__ConstIterator) bool {
	return (bool)(C.QCborMap__Iterator_operatorNotEqualWithQCborMapConstIterator(this.h, o.cPointer()))
}

func (this *QCborMap__Iterator) OperatorLesserWithOther(other *QCborMap__ConstIterator) bool {
	return (bool)(C.QCborMap__Iterator_operatorLesserWithOther(this.h, other.cPointer()))
}

func (this *QCborMap__Iterator) OperatorLesserOrEqualWithOther(other *QCborMap__ConstIterator) bool {
	return (bool)(C.QCborMap__Iterator_operatorLesserOrEqualWithOther(this.h, other.cPointer()))
}

func (this *QCborMap__Iterator) OperatorGreaterWithOther(other *QCborMap__ConstIterator) bool {
	return (bool)(C.QCborMap__Iterator_operatorGreaterWithOther(this.h, other.cPointer()))
}

func (this *QCborMap__Iterator) OperatorGreaterOrEqualWithOther(other *QCborMap__ConstIterator) bool {
	return (bool)(C.QCborMap__Iterator_operatorGreaterOrEqualWithOther(this.h, other.cPointer()))
}

func (this *QCborMap__Iterator) OperatorPlusPlus() *QCborMap__Iterator {
	return newQCborMap__Iterator(C.QCborMap__Iterator_operatorPlusPlus(this.h))
}

func (this *QCborMap__Iterator) OperatorPlusPlusWithInt(param1 int) *QCborMap__Iterator {
	_goptr := newQCborMap__Iterator(C.QCborMap__Iterator_operatorPlusPlusWithInt(this.h, (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborMap__Iterator) OperatorMinusMinus() *QCborMap__Iterator {
	return newQCborMap__Iterator(C.QCborMap__Iterator_operatorMinusMinus(this.h))
}

func (this *QCborMap__Iterator) OperatorMinusMinusWithInt(param1 int) *QCborMap__Iterator {
	_goptr := newQCborMap__Iterator(C.QCborMap__Iterator_operatorMinusMinusWithInt(this.h, (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborMap__Iterator) OperatorPlusAssign(j int64) *QCborMap__Iterator {
	return newQCborMap__Iterator(C.QCborMap__Iterator_operatorPlusAssign(this.h, (C.ptrdiff_t)(j)))
}

func (this *QCborMap__Iterator) OperatorMinusAssign(j int64) *QCborMap__Iterator {
	return newQCborMap__Iterator(C.QCborMap__Iterator_operatorMinusAssign(this.h, (C.ptrdiff_t)(j)))
}

func (this *QCborMap__Iterator) OperatorPlus(j int64) *QCborMap__Iterator {
	_goptr := newQCborMap__Iterator(C.QCborMap__Iterator_operatorPlus(this.h, (C.ptrdiff_t)(j)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborMap__Iterator) OperatorMinus(j int64) *QCborMap__Iterator {
	_goptr := newQCborMap__Iterator(C.QCborMap__Iterator_operatorMinus(this.h, (C.ptrdiff_t)(j)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborMap__Iterator) OperatorMinusWithQCborMapIterator(j QCborMap__Iterator) int64 {
	return (int64)(C.QCborMap__Iterator_operatorMinusWithQCborMapIterator(this.h, j.cPointer()))
}

// Delete this object from C++ memory.
func (this *QCborMap__Iterator) Delete() {
	C.QCborMap__Iterator_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QCborMap__Iterator) GoGC() {
	runtime.SetFinalizer(this, func(this *QCborMap__Iterator) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QCborMap__ConstIterator struct {
	h *C.QCborMap__ConstIterator
}

func (this *QCborMap__ConstIterator) cPointer() *C.QCborMap__ConstIterator {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QCborMap__ConstIterator) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQCborMap__ConstIterator constructs the type using only CGO pointers.
func newQCborMap__ConstIterator(h *C.QCborMap__ConstIterator) *QCborMap__ConstIterator {
	if h == nil {
		return nil
	}

	return &QCborMap__ConstIterator{h: h}
}

// UnsafeNewQCborMap__ConstIterator constructs the type using only unsafe pointers.
func UnsafeNewQCborMap__ConstIterator(h unsafe.Pointer) *QCborMap__ConstIterator {
	return newQCborMap__ConstIterator((*C.QCborMap__ConstIterator)(h))
}

// NewQCborMap__ConstIterator constructs a new QCborMap::ConstIterator object.
func NewQCborMap__ConstIterator() *QCborMap__ConstIterator {

	return newQCborMap__ConstIterator(C.QCborMap__ConstIterator_new())
}

// NewQCborMap__ConstIterator2 constructs a new QCborMap::ConstIterator object.
func NewQCborMap__ConstIterator2(param1 *QCborMap__ConstIterator) *QCborMap__ConstIterator {

	return newQCborMap__ConstIterator(C.QCborMap__ConstIterator_new2(param1.cPointer()))
}

func (this *QCborMap__ConstIterator) OperatorAssign(other *QCborMap__ConstIterator) {
	C.QCborMap__ConstIterator_operatorAssign(this.h, other.cPointer())
}

func (this *QCborMap__ConstIterator) OperatorMultiply() struct {
	First  QCborValueRef
	Second QCborValueRef
} {
	var _mm C.struct_miqt_map = C.QCborMap__ConstIterator_operatorMultiply(this.h)
	_First_CArray := (*[0xffff]*C.QCborValueRef)(unsafe.Pointer(_mm.keys))
	_Second_CArray := (*[0xffff]*C.QCborValueRef)(unsafe.Pointer(_mm.values))
	_first_goptr := newQCborValueRef(_First_CArray[0])
	_first_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	_entry_First := *_first_goptr

	_second_goptr := newQCborValueRef(_Second_CArray[0])
	_second_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	_entry_Second := *_second_goptr

	return struct {
		First  QCborValueRef
		Second QCborValueRef
	}{First: _entry_First, Second: _entry_Second}
}

func (this *QCborMap__ConstIterator) OperatorMinusGreater() *QCborValueRef {
	return newQCborValueRef(C.QCborMap__ConstIterator_operatorMinusGreater(this.h))
}

func (this *QCborMap__ConstIterator) Key() *QCborValue {
	_goptr := newQCborValue(C.QCborMap__ConstIterator_key(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborMap__ConstIterator) Value() *QCborValueRef {
	_goptr := newQCborValueRef(C.QCborMap__ConstIterator_value(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborMap__ConstIterator) OperatorEqual(o *QCborMap__Iterator) bool {
	return (bool)(C.QCborMap__ConstIterator_operatorEqual(this.h, o.cPointer()))
}

func (this *QCborMap__ConstIterator) OperatorNotEqual(o *QCborMap__Iterator) bool {
	return (bool)(C.QCborMap__ConstIterator_operatorNotEqual(this.h, o.cPointer()))
}

func (this *QCborMap__ConstIterator) OperatorLesser(other *QCborMap__Iterator) bool {
	return (bool)(C.QCborMap__ConstIterator_operatorLesser(this.h, other.cPointer()))
}

func (this *QCborMap__ConstIterator) OperatorLesserOrEqual(other *QCborMap__Iterator) bool {
	return (bool)(C.QCborMap__ConstIterator_operatorLesserOrEqual(this.h, other.cPointer()))
}

func (this *QCborMap__ConstIterator) OperatorGreater(other *QCborMap__Iterator) bool {
	return (bool)(C.QCborMap__ConstIterator_operatorGreater(this.h, other.cPointer()))
}

func (this *QCborMap__ConstIterator) OperatorGreaterOrEqual(other *QCborMap__Iterator) bool {
	return (bool)(C.QCborMap__ConstIterator_operatorGreaterOrEqual(this.h, other.cPointer()))
}

func (this *QCborMap__ConstIterator) OperatorEqualWithQCborMapConstIterator(o *QCborMap__ConstIterator) bool {
	return (bool)(C.QCborMap__ConstIterator_operatorEqualWithQCborMapConstIterator(this.h, o.cPointer()))
}

func (this *QCborMap__ConstIterator) OperatorNotEqualWithQCborMapConstIterator(o *QCborMap__ConstIterator) bool {
	return (bool)(C.QCborMap__ConstIterator_operatorNotEqualWithQCborMapConstIterator(this.h, o.cPointer()))
}

func (this *QCborMap__ConstIterator) OperatorLesserWithOther(other *QCborMap__ConstIterator) bool {
	return (bool)(C.QCborMap__ConstIterator_operatorLesserWithOther(this.h, other.cPointer()))
}

func (this *QCborMap__ConstIterator) OperatorLesserOrEqualWithOther(other *QCborMap__ConstIterator) bool {
	return (bool)(C.QCborMap__ConstIterator_operatorLesserOrEqualWithOther(this.h, other.cPointer()))
}

func (this *QCborMap__ConstIterator) OperatorGreaterWithOther(other *QCborMap__ConstIterator) bool {
	return (bool)(C.QCborMap__ConstIterator_operatorGreaterWithOther(this.h, other.cPointer()))
}

func (this *QCborMap__ConstIterator) OperatorGreaterOrEqualWithOther(other *QCborMap__ConstIterator) bool {
	return (bool)(C.QCborMap__ConstIterator_operatorGreaterOrEqualWithOther(this.h, other.cPointer()))
}

func (this *QCborMap__ConstIterator) OperatorPlusPlus() *QCborMap__ConstIterator {
	return newQCborMap__ConstIterator(C.QCborMap__ConstIterator_operatorPlusPlus(this.h))
}

func (this *QCborMap__ConstIterator) OperatorPlusPlusWithInt(param1 int) *QCborMap__ConstIterator {
	_goptr := newQCborMap__ConstIterator(C.QCborMap__ConstIterator_operatorPlusPlusWithInt(this.h, (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborMap__ConstIterator) OperatorMinusMinus() *QCborMap__ConstIterator {
	return newQCborMap__ConstIterator(C.QCborMap__ConstIterator_operatorMinusMinus(this.h))
}

func (this *QCborMap__ConstIterator) OperatorMinusMinusWithInt(param1 int) *QCborMap__ConstIterator {
	_goptr := newQCborMap__ConstIterator(C.QCborMap__ConstIterator_operatorMinusMinusWithInt(this.h, (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborMap__ConstIterator) OperatorPlusAssign(j int64) *QCborMap__ConstIterator {
	return newQCborMap__ConstIterator(C.QCborMap__ConstIterator_operatorPlusAssign(this.h, (C.ptrdiff_t)(j)))
}

func (this *QCborMap__ConstIterator) OperatorMinusAssign(j int64) *QCborMap__ConstIterator {
	return newQCborMap__ConstIterator(C.QCborMap__ConstIterator_operatorMinusAssign(this.h, (C.ptrdiff_t)(j)))
}

func (this *QCborMap__ConstIterator) OperatorPlus(j int64) *QCborMap__ConstIterator {
	_goptr := newQCborMap__ConstIterator(C.QCborMap__ConstIterator_operatorPlus(this.h, (C.ptrdiff_t)(j)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborMap__ConstIterator) OperatorMinus(j int64) *QCborMap__ConstIterator {
	_goptr := newQCborMap__ConstIterator(C.QCborMap__ConstIterator_operatorMinus(this.h, (C.ptrdiff_t)(j)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborMap__ConstIterator) OperatorMinusWithQCborMapConstIterator(j QCborMap__ConstIterator) int64 {
	return (int64)(C.QCborMap__ConstIterator_operatorMinusWithQCborMapConstIterator(this.h, j.cPointer()))
}

// Delete this object from C++ memory.
func (this *QCborMap__ConstIterator) Delete() {
	C.QCborMap__ConstIterator_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QCborMap__ConstIterator) GoGC() {
	runtime.SetFinalizer(this, func(this *QCborMap__ConstIterator) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
