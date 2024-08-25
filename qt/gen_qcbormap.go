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
	ret := C.QCborMap_Value(this.h, (C.int64_t)(key))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborValue(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborValue) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborMap) ValueWithKey(key string) *QCborValue {
	key_Cstring := C.CString(key)
	defer C.free(unsafe.Pointer(key_Cstring))
	ret := C.QCborMap_ValueWithKey(this.h, key_Cstring, C.ulong(len(key)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborValue(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborValue) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborMap) Value2(key *QCborValue) *QCborValue {
	ret := C.QCborMap_Value2(this.h, key.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborValue(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborValue) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborMap) OperatorSubscript(key int64) *QCborValue {
	ret := C.QCborMap_OperatorSubscript(this.h, (C.int64_t)(key))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborValue(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborValue) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborMap) OperatorSubscriptWithKey(key string) *QCborValue {
	key_Cstring := C.CString(key)
	defer C.free(unsafe.Pointer(key_Cstring))
	ret := C.QCborMap_OperatorSubscriptWithKey(this.h, key_Cstring, C.ulong(len(key)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborValue(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborValue) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborMap) OperatorSubscript2(key *QCborValue) *QCborValue {
	ret := C.QCborMap_OperatorSubscript2(this.h, key.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborValue(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborValue) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborMap) OperatorSubscript3(key int64) *QCborValueRef {
	ret := C.QCborMap_OperatorSubscript3(this.h, (C.int64_t)(key))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborValueRef(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborValueRef) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborMap) OperatorSubscript4(key string) *QCborValueRef {
	key_Cstring := C.CString(key)
	defer C.free(unsafe.Pointer(key_Cstring))
	ret := C.QCborMap_OperatorSubscript4(this.h, key_Cstring, C.ulong(len(key)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborValueRef(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborValueRef) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborMap) OperatorSubscript5(key *QCborValue) *QCborValueRef {
	ret := C.QCborMap_OperatorSubscript5(this.h, key.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborValueRef(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborValueRef) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborMap) Take(key int64) *QCborValue {
	ret := C.QCborMap_Take(this.h, (C.int64_t)(key))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborValue(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborValue) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborMap) TakeWithKey(key string) *QCborValue {
	key_Cstring := C.CString(key)
	defer C.free(unsafe.Pointer(key_Cstring))
	ret := C.QCborMap_TakeWithKey(this.h, key_Cstring, C.ulong(len(key)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborValue(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborValue) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborMap) Take2(key *QCborValue) *QCborValue {
	ret := C.QCborMap_Take2(this.h, key.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCborValue(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCborValue) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCborMap) Remove(key int64) {
	C.QCborMap_Remove(this.h, (C.int64_t)(key))
}

func (this *QCborMap) RemoveWithKey(key string) {
	key_Cstring := C.CString(key)
	defer C.free(unsafe.Pointer(key_Cstring))
	C.QCborMap_RemoveWithKey(this.h, key_Cstring, C.ulong(len(key)))
}

func (this *QCborMap) Remove2(key *QCborValue) {
	C.QCborMap_Remove2(this.h, key.cPointer())
}

func (this *QCborMap) Contains(key int64) bool {
	ret := C.QCborMap_Contains(this.h, (C.int64_t)(key))
	return (bool)(ret)
}

func (this *QCborMap) ContainsWithKey(key string) bool {
	key_Cstring := C.CString(key)
	defer C.free(unsafe.Pointer(key_Cstring))
	ret := C.QCborMap_ContainsWithKey(this.h, key_Cstring, C.ulong(len(key)))
	return (bool)(ret)
}

func (this *QCborMap) Contains2(key *QCborValue) bool {
	ret := C.QCborMap_Contains2(this.h, key.cPointer())
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

func (this *QCborMap) Empty() bool {
	ret := C.QCborMap_Empty(this.h)
	return (bool)(ret)
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
