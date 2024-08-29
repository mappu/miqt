package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qcbormap.h"
#include <stdlib.h>

*/
import "C"

import (
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

func newQCborMap(h *C.QCborMap) *QCborMap {
	return &QCborMap{h: h}
}

func newQCborMap_U(h unsafe.Pointer) *QCborMap {
	return newQCborMap((*C.QCborMap)(h))
}

// NewQCborMap constructs a new QCborMap object.
func NewQCborMap() *QCborMap {
	ret := C.QCborMap_new()
	return newQCborMap(ret)
}

// NewQCborMap2 constructs a new QCborMap object.
func NewQCborMap2(other *QCborMap) *QCborMap {
	ret := C.QCborMap_new2(other.cPointer())
	return newQCborMap(ret)
}

func (this *QCborMap) OperatorAssign(other *QCborMap) {
	C.QCborMap_OperatorAssign(this.h, other.cPointer())
}

func (this *QCborMap) Swap(other *QCborMap) {
	C.QCborMap_Swap(this.h, other.cPointer())
}

func (this *QCborMap) ToCborValue() *QCborValue {
	ret := C.QCborMap_ToCborValue(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborValue(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborValue) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborMap) Size() uint64 {
	ret := C.QCborMap_Size(this.h)
	return (uint64)(ret)
}

func (this *QCborMap) IsEmpty() bool {
	ret := C.QCborMap_IsEmpty(this.h)
	return (bool)(ret)
}

func (this *QCborMap) Clear() {
	C.QCborMap_Clear(this.h)
}

func (this *QCborMap) Keys() []QCborValue {
	var _out **C.QCborValue = nil
	var _out_len C.size_t = 0
	C.QCborMap_Keys(this.h, &_out, &_out_len)
	ret := make([]QCborValue, int(_out_len))
	_outCast := (*[0xffff]*C.QCborValue)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = *newQCborValue(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QCborMap) Value(key int64) *QCborValue {
	ret := C.QCborMap_Value(this.h, (C.longlong)(key))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborValue(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborValue) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborMap) Value2(key string) *QCborValue {
	key_Cstring := C.CString(key)
	defer C.free(unsafe.Pointer(key_Cstring))
	ret := C.QCborMap_Value2(this.h, key_Cstring, C.ulong(len(key)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborValue(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborValue) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborMap) Value3(key *QCborValue) *QCborValue {
	ret := C.QCborMap_Value3(this.h, key.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborValue(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborValue) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborMap) OperatorSubscript(key int64) *QCborValue {
	ret := C.QCborMap_OperatorSubscript(this.h, (C.longlong)(key))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborValue(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborValue) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborMap) OperatorSubscript2(key string) *QCborValue {
	key_Cstring := C.CString(key)
	defer C.free(unsafe.Pointer(key_Cstring))
	ret := C.QCborMap_OperatorSubscript2(this.h, key_Cstring, C.ulong(len(key)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborValue(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborValue) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborMap) OperatorSubscript3(key *QCborValue) *QCborValue {
	ret := C.QCborMap_OperatorSubscript3(this.h, key.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborValue(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborValue) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborMap) OperatorSubscript4(key int64) *QCborValueRef {
	ret := C.QCborMap_OperatorSubscript4(this.h, (C.longlong)(key))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborValueRef(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborValueRef) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborMap) OperatorSubscript6(key string) *QCborValueRef {
	key_Cstring := C.CString(key)
	defer C.free(unsafe.Pointer(key_Cstring))
	ret := C.QCborMap_OperatorSubscript6(this.h, key_Cstring, C.ulong(len(key)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborValueRef(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborValueRef) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborMap) OperatorSubscript7(key *QCborValue) *QCborValueRef {
	ret := C.QCborMap_OperatorSubscript7(this.h, key.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborValueRef(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborValueRef) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborMap) Take(key int64) *QCborValue {
	ret := C.QCborMap_Take(this.h, (C.longlong)(key))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborValue(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborValue) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborMap) Take2(key string) *QCborValue {
	key_Cstring := C.CString(key)
	defer C.free(unsafe.Pointer(key_Cstring))
	ret := C.QCborMap_Take2(this.h, key_Cstring, C.ulong(len(key)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborValue(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborValue) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborMap) Take3(key *QCborValue) *QCborValue {
	ret := C.QCborMap_Take3(this.h, key.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborValue(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborValue) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborMap) Remove(key int64) {
	C.QCborMap_Remove(this.h, (C.longlong)(key))
}

func (this *QCborMap) Remove2(key string) {
	key_Cstring := C.CString(key)
	defer C.free(unsafe.Pointer(key_Cstring))
	C.QCborMap_Remove2(this.h, key_Cstring, C.ulong(len(key)))
}

func (this *QCborMap) Remove3(key *QCborValue) {
	C.QCborMap_Remove3(this.h, key.cPointer())
}

func (this *QCborMap) Contains(key int64) bool {
	ret := C.QCborMap_Contains(this.h, (C.longlong)(key))
	return (bool)(ret)
}

func (this *QCborMap) Contains2(key string) bool {
	key_Cstring := C.CString(key)
	defer C.free(unsafe.Pointer(key_Cstring))
	ret := C.QCborMap_Contains2(this.h, key_Cstring, C.ulong(len(key)))
	return (bool)(ret)
}

func (this *QCborMap) Contains3(key *QCborValue) bool {
	ret := C.QCborMap_Contains3(this.h, key.cPointer())
	return (bool)(ret)
}

func (this *QCborMap) Compare(other *QCborMap) int {
	ret := C.QCborMap_Compare(this.h, other.cPointer())
	return (int)(ret)
}

func (this *QCborMap) OperatorEqual(other *QCborMap) bool {
	ret := C.QCborMap_OperatorEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QCborMap) OperatorNotEqual(other *QCborMap) bool {
	ret := C.QCborMap_OperatorNotEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QCborMap) OperatorLesser(other *QCborMap) bool {
	ret := C.QCborMap_OperatorLesser(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QCborMap) Begin() *QCborMap__Iterator {
	ret := C.QCborMap_Begin(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborMap__Iterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborMap__Iterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborMap) ConstBegin() *QCborMap__ConstIterator {
	ret := C.QCborMap_ConstBegin(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborMap__ConstIterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborMap__ConstIterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborMap) Begin2() *QCborMap__ConstIterator {
	ret := C.QCborMap_Begin2(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborMap__ConstIterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborMap__ConstIterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborMap) Cbegin() *QCborMap__ConstIterator {
	ret := C.QCborMap_Cbegin(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborMap__ConstIterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborMap__ConstIterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborMap) End() *QCborMap__Iterator {
	ret := C.QCborMap_End(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborMap__Iterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborMap__Iterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborMap) ConstEnd() *QCborMap__ConstIterator {
	ret := C.QCborMap_ConstEnd(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborMap__ConstIterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborMap__ConstIterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborMap) End2() *QCborMap__ConstIterator {
	ret := C.QCborMap_End2(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborMap__ConstIterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborMap__ConstIterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborMap) Cend() *QCborMap__ConstIterator {
	ret := C.QCborMap_Cend(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborMap__ConstIterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborMap__ConstIterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborMap) Erase(it QCborMap__Iterator) *QCborMap__Iterator {
	ret := C.QCborMap_Erase(this.h, it.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborMap__Iterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborMap__Iterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborMap) EraseWithIt(it QCborMap__ConstIterator) *QCborMap__Iterator {
	ret := C.QCborMap_EraseWithIt(this.h, it.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborMap__Iterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborMap__Iterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborMap) Extract(it QCborMap__Iterator) *QCborValue {
	ret := C.QCborMap_Extract(this.h, it.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborValue(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborValue) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborMap) ExtractWithIt(it QCborMap__ConstIterator) *QCborValue {
	ret := C.QCborMap_ExtractWithIt(this.h, it.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborValue(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborValue) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborMap) Empty() bool {
	ret := C.QCborMap_Empty(this.h)
	return (bool)(ret)
}

func (this *QCborMap) Find(key int64) *QCborMap__Iterator {
	ret := C.QCborMap_Find(this.h, (C.longlong)(key))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborMap__Iterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborMap__Iterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborMap) Find2(key string) *QCborMap__Iterator {
	key_Cstring := C.CString(key)
	defer C.free(unsafe.Pointer(key_Cstring))
	ret := C.QCborMap_Find2(this.h, key_Cstring, C.ulong(len(key)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborMap__Iterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborMap__Iterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborMap) Find3(key *QCborValue) *QCborMap__Iterator {
	ret := C.QCborMap_Find3(this.h, key.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborMap__Iterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborMap__Iterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborMap) ConstFind(key int64) *QCborMap__ConstIterator {
	ret := C.QCborMap_ConstFind(this.h, (C.longlong)(key))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborMap__ConstIterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborMap__ConstIterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborMap) ConstFind2(key string) *QCborMap__ConstIterator {
	key_Cstring := C.CString(key)
	defer C.free(unsafe.Pointer(key_Cstring))
	ret := C.QCborMap_ConstFind2(this.h, key_Cstring, C.ulong(len(key)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborMap__ConstIterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborMap__ConstIterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborMap) ConstFind3(key *QCborValue) *QCborMap__ConstIterator {
	ret := C.QCborMap_ConstFind3(this.h, key.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborMap__ConstIterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborMap__ConstIterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborMap) Find4(key int64) *QCborMap__ConstIterator {
	ret := C.QCborMap_Find4(this.h, (C.longlong)(key))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborMap__ConstIterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborMap__ConstIterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborMap) Find6(key string) *QCborMap__ConstIterator {
	key_Cstring := C.CString(key)
	defer C.free(unsafe.Pointer(key_Cstring))
	ret := C.QCborMap_Find6(this.h, key_Cstring, C.ulong(len(key)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborMap__ConstIterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborMap__ConstIterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborMap) Find7(key *QCborValue) *QCborMap__ConstIterator {
	ret := C.QCborMap_Find7(this.h, key.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborMap__ConstIterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborMap__ConstIterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborMap) Insert(key int64, value_ *QCborValue) *QCborMap__Iterator {
	ret := C.QCborMap_Insert(this.h, (C.longlong)(key), value_.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborMap__Iterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborMap__Iterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborMap) Insert3(key string, value_ *QCborValue) *QCborMap__Iterator {
	key_Cstring := C.CString(key)
	defer C.free(unsafe.Pointer(key_Cstring))
	ret := C.QCborMap_Insert3(this.h, key_Cstring, C.ulong(len(key)), value_.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborMap__Iterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborMap__Iterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborMap) Insert4(key *QCborValue, value_ *QCborValue) *QCborMap__Iterator {
	ret := C.QCborMap_Insert4(this.h, key.cPointer(), value_.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborMap__Iterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborMap__Iterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QCborMap_FromJsonObject(o *QJsonObject) *QCborMap {
	ret := C.QCborMap_FromJsonObject(o.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborMap(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborMap) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborMap) ToJsonObject() *QJsonObject {
	ret := C.QCborMap_ToJsonObject(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQJsonObject(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QJsonObject) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborMap) Delete() {
	C.QCborMap_Delete(this.h)
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

func newQCborMap__Iterator(h *C.QCborMap__Iterator) *QCborMap__Iterator {
	return &QCborMap__Iterator{h: h}
}

func newQCborMap__Iterator_U(h unsafe.Pointer) *QCborMap__Iterator {
	return newQCborMap__Iterator((*C.QCborMap__Iterator)(h))
}

// NewQCborMap__Iterator constructs a new QCborMap::Iterator object.
func NewQCborMap__Iterator() *QCborMap__Iterator {
	ret := C.QCborMap__Iterator_new()
	return newQCborMap__Iterator(ret)
}

// NewQCborMap__Iterator2 constructs a new QCborMap::Iterator object.
func NewQCborMap__Iterator2(param1 *QCborMap__Iterator) *QCborMap__Iterator {
	ret := C.QCborMap__Iterator_new2(param1.cPointer())
	return newQCborMap__Iterator(ret)
}

func (this *QCborMap__Iterator) OperatorMinusGreater() *QCborValueRef {
	ret := C.QCborMap__Iterator_OperatorMinusGreater(this.h)
	return newQCborValueRef_U(unsafe.Pointer(ret))
}

func (this *QCborMap__Iterator) Key() *QCborValue {
	ret := C.QCborMap__Iterator_Key(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborValue(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborValue) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborMap__Iterator) Value() *QCborValueRef {
	ret := C.QCborMap__Iterator_Value(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborValueRef(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborValueRef) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborMap__Iterator) OperatorEqual(o *QCborMap__Iterator) bool {
	ret := C.QCborMap__Iterator_OperatorEqual(this.h, o.cPointer())
	return (bool)(ret)
}

func (this *QCborMap__Iterator) OperatorNotEqual(o *QCborMap__Iterator) bool {
	ret := C.QCborMap__Iterator_OperatorNotEqual(this.h, o.cPointer())
	return (bool)(ret)
}

func (this *QCborMap__Iterator) OperatorLesser(other *QCborMap__Iterator) bool {
	ret := C.QCborMap__Iterator_OperatorLesser(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QCborMap__Iterator) OperatorLesserOrEqual(other *QCborMap__Iterator) bool {
	ret := C.QCborMap__Iterator_OperatorLesserOrEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QCborMap__Iterator) OperatorGreater(other *QCborMap__Iterator) bool {
	ret := C.QCborMap__Iterator_OperatorGreater(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QCborMap__Iterator) OperatorGreaterOrEqual(other *QCborMap__Iterator) bool {
	ret := C.QCborMap__Iterator_OperatorGreaterOrEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QCborMap__Iterator) OperatorEqualWithQCborMapConstIterator(o *QCborMap__ConstIterator) bool {
	ret := C.QCborMap__Iterator_OperatorEqualWithQCborMapConstIterator(this.h, o.cPointer())
	return (bool)(ret)
}

func (this *QCborMap__Iterator) OperatorNotEqualWithQCborMapConstIterator(o *QCborMap__ConstIterator) bool {
	ret := C.QCborMap__Iterator_OperatorNotEqualWithQCborMapConstIterator(this.h, o.cPointer())
	return (bool)(ret)
}

func (this *QCborMap__Iterator) OperatorLesserWithOther(other *QCborMap__ConstIterator) bool {
	ret := C.QCborMap__Iterator_OperatorLesserWithOther(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QCborMap__Iterator) OperatorLesserOrEqualWithOther(other *QCborMap__ConstIterator) bool {
	ret := C.QCborMap__Iterator_OperatorLesserOrEqualWithOther(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QCborMap__Iterator) OperatorGreaterWithOther(other *QCborMap__ConstIterator) bool {
	ret := C.QCborMap__Iterator_OperatorGreaterWithOther(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QCborMap__Iterator) OperatorGreaterOrEqualWithOther(other *QCborMap__ConstIterator) bool {
	ret := C.QCborMap__Iterator_OperatorGreaterOrEqualWithOther(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QCborMap__Iterator) OperatorPlusPlus(param1 int) *QCborMap__Iterator {
	ret := C.QCborMap__Iterator_OperatorPlusPlus(this.h, (C.int)(param1))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborMap__Iterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborMap__Iterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborMap__Iterator) OperatorMinusMinus(param1 int) *QCborMap__Iterator {
	ret := C.QCborMap__Iterator_OperatorMinusMinus(this.h, (C.int)(param1))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborMap__Iterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborMap__Iterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborMap__Iterator) OperatorPlus(j uint64) *QCborMap__Iterator {
	ret := C.QCborMap__Iterator_OperatorPlus(this.h, (C.size_t)(j))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborMap__Iterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborMap__Iterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborMap__Iterator) OperatorMinus(j uint64) *QCborMap__Iterator {
	ret := C.QCborMap__Iterator_OperatorMinus(this.h, (C.size_t)(j))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborMap__Iterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborMap__Iterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborMap__Iterator) OperatorMinusWithQCborMapIterator(j QCborMap__Iterator) uint64 {
	ret := C.QCborMap__Iterator_OperatorMinusWithQCborMapIterator(this.h, j.cPointer())
	return (uint64)(ret)
}

func (this *QCborMap__Iterator) Delete() {
	C.QCborMap__Iterator_Delete(this.h)
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

func newQCborMap__ConstIterator(h *C.QCborMap__ConstIterator) *QCborMap__ConstIterator {
	return &QCborMap__ConstIterator{h: h}
}

func newQCborMap__ConstIterator_U(h unsafe.Pointer) *QCborMap__ConstIterator {
	return newQCborMap__ConstIterator((*C.QCborMap__ConstIterator)(h))
}

// NewQCborMap__ConstIterator constructs a new QCborMap::ConstIterator object.
func NewQCborMap__ConstIterator() *QCborMap__ConstIterator {
	ret := C.QCborMap__ConstIterator_new()
	return newQCborMap__ConstIterator(ret)
}

// NewQCborMap__ConstIterator2 constructs a new QCborMap::ConstIterator object.
func NewQCborMap__ConstIterator2(param1 *QCborMap__ConstIterator) *QCborMap__ConstIterator {
	ret := C.QCborMap__ConstIterator_new2(param1.cPointer())
	return newQCborMap__ConstIterator(ret)
}

func (this *QCborMap__ConstIterator) OperatorMinusGreater() *QCborValueRef {
	ret := C.QCborMap__ConstIterator_OperatorMinusGreater(this.h)
	return newQCborValueRef_U(unsafe.Pointer(ret))
}

func (this *QCborMap__ConstIterator) Key() *QCborValue {
	ret := C.QCborMap__ConstIterator_Key(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborValue(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborValue) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborMap__ConstIterator) Value() *QCborValueRef {
	ret := C.QCborMap__ConstIterator_Value(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborValueRef(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborValueRef) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborMap__ConstIterator) OperatorEqual(o *QCborMap__Iterator) bool {
	ret := C.QCborMap__ConstIterator_OperatorEqual(this.h, o.cPointer())
	return (bool)(ret)
}

func (this *QCborMap__ConstIterator) OperatorNotEqual(o *QCborMap__Iterator) bool {
	ret := C.QCborMap__ConstIterator_OperatorNotEqual(this.h, o.cPointer())
	return (bool)(ret)
}

func (this *QCborMap__ConstIterator) OperatorLesser(other *QCborMap__Iterator) bool {
	ret := C.QCborMap__ConstIterator_OperatorLesser(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QCborMap__ConstIterator) OperatorLesserOrEqual(other *QCborMap__Iterator) bool {
	ret := C.QCborMap__ConstIterator_OperatorLesserOrEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QCborMap__ConstIterator) OperatorGreater(other *QCborMap__Iterator) bool {
	ret := C.QCborMap__ConstIterator_OperatorGreater(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QCborMap__ConstIterator) OperatorGreaterOrEqual(other *QCborMap__Iterator) bool {
	ret := C.QCborMap__ConstIterator_OperatorGreaterOrEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QCborMap__ConstIterator) OperatorEqualWithQCborMapConstIterator(o *QCborMap__ConstIterator) bool {
	ret := C.QCborMap__ConstIterator_OperatorEqualWithQCborMapConstIterator(this.h, o.cPointer())
	return (bool)(ret)
}

func (this *QCborMap__ConstIterator) OperatorNotEqualWithQCborMapConstIterator(o *QCborMap__ConstIterator) bool {
	ret := C.QCborMap__ConstIterator_OperatorNotEqualWithQCborMapConstIterator(this.h, o.cPointer())
	return (bool)(ret)
}

func (this *QCborMap__ConstIterator) OperatorLesserWithOther(other *QCborMap__ConstIterator) bool {
	ret := C.QCborMap__ConstIterator_OperatorLesserWithOther(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QCborMap__ConstIterator) OperatorLesserOrEqualWithOther(other *QCborMap__ConstIterator) bool {
	ret := C.QCborMap__ConstIterator_OperatorLesserOrEqualWithOther(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QCborMap__ConstIterator) OperatorGreaterWithOther(other *QCborMap__ConstIterator) bool {
	ret := C.QCborMap__ConstIterator_OperatorGreaterWithOther(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QCborMap__ConstIterator) OperatorGreaterOrEqualWithOther(other *QCborMap__ConstIterator) bool {
	ret := C.QCborMap__ConstIterator_OperatorGreaterOrEqualWithOther(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QCborMap__ConstIterator) OperatorPlusPlus(param1 int) *QCborMap__ConstIterator {
	ret := C.QCborMap__ConstIterator_OperatorPlusPlus(this.h, (C.int)(param1))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborMap__ConstIterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborMap__ConstIterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborMap__ConstIterator) OperatorMinusMinus(param1 int) *QCborMap__ConstIterator {
	ret := C.QCborMap__ConstIterator_OperatorMinusMinus(this.h, (C.int)(param1))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborMap__ConstIterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborMap__ConstIterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborMap__ConstIterator) OperatorPlus(j uint64) *QCborMap__ConstIterator {
	ret := C.QCborMap__ConstIterator_OperatorPlus(this.h, (C.size_t)(j))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborMap__ConstIterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborMap__ConstIterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborMap__ConstIterator) OperatorMinus(j uint64) *QCborMap__ConstIterator {
	ret := C.QCborMap__ConstIterator_OperatorMinus(this.h, (C.size_t)(j))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborMap__ConstIterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborMap__ConstIterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborMap__ConstIterator) OperatorMinusWithQCborMapConstIterator(j QCborMap__ConstIterator) uint64 {
	ret := C.QCborMap__ConstIterator_OperatorMinusWithQCborMapConstIterator(this.h, j.cPointer())
	return (uint64)(ret)
}

func (this *QCborMap__ConstIterator) Delete() {
	C.QCborMap__ConstIterator_Delete(this.h)
}
