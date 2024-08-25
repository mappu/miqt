package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
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

func (this *QJsonObject) Empty() bool {
	ret := C.QJsonObject_Empty(this.h)
	return (bool)(ret)
}

func (this *QJsonObject) Delete() {
	C.QJsonObject_Delete(this.h)
}
