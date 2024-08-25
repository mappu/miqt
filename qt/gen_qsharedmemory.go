package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qsharedmemory.h"
#include <stdlib.h>

*/
import "C"

import (
	"unsafe"
)

type QSharedMemory struct {
	h *C.QSharedMemory
	*QObject
}

func (this *QSharedMemory) cPointer() *C.QSharedMemory {
	if this == nil {
		return nil
	}
	return this.h
}

func newQSharedMemory(h *C.QSharedMemory) *QSharedMemory {
	return &QSharedMemory{h: h, QObject: newQObject_U(unsafe.Pointer(h))}
}

func newQSharedMemory_U(h unsafe.Pointer) *QSharedMemory {
	return newQSharedMemory((*C.QSharedMemory)(h))
}

// NewQSharedMemory constructs a new QSharedMemory object.
func NewQSharedMemory() *QSharedMemory {
	ret := C.QSharedMemory_new()
	return newQSharedMemory(ret)
}

// NewQSharedMemory2 constructs a new QSharedMemory object.
func NewQSharedMemory2(key string) *QSharedMemory {
	key_Cstring := C.CString(key)
	defer C.free(unsafe.Pointer(key_Cstring))
	ret := C.QSharedMemory_new2(key_Cstring, C.ulong(len(key)))
	return newQSharedMemory(ret)
}

// NewQSharedMemory3 constructs a new QSharedMemory object.
func NewQSharedMemory3(parent *QObject) *QSharedMemory {
	ret := C.QSharedMemory_new3(parent.cPointer())
	return newQSharedMemory(ret)
}

// NewQSharedMemory4 constructs a new QSharedMemory object.
func NewQSharedMemory4(key string, parent *QObject) *QSharedMemory {
	key_Cstring := C.CString(key)
	defer C.free(unsafe.Pointer(key_Cstring))
	ret := C.QSharedMemory_new4(key_Cstring, C.ulong(len(key)), parent.cPointer())
	return newQSharedMemory(ret)
}

func (this *QSharedMemory) MetaObject() *QMetaObject {
	ret := C.QSharedMemory_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QSharedMemory_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSharedMemory_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QSharedMemory_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSharedMemory_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QSharedMemory) SetKey(key string) {
	key_Cstring := C.CString(key)
	defer C.free(unsafe.Pointer(key_Cstring))
	C.QSharedMemory_SetKey(this.h, key_Cstring, C.ulong(len(key)))
}

func (this *QSharedMemory) Key() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSharedMemory_Key(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QSharedMemory) SetNativeKey(key string) {
	key_Cstring := C.CString(key)
	defer C.free(unsafe.Pointer(key_Cstring))
	C.QSharedMemory_SetNativeKey(this.h, key_Cstring, C.ulong(len(key)))
}

func (this *QSharedMemory) NativeKey() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSharedMemory_NativeKey(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QSharedMemory) Size() int {
	ret := C.QSharedMemory_Size(this.h)
	return (int)(ret)
}

func (this *QSharedMemory) IsAttached() bool {
	ret := C.QSharedMemory_IsAttached(this.h)
	return (bool)(ret)
}

func (this *QSharedMemory) Detach() bool {
	ret := C.QSharedMemory_Detach(this.h)
	return (bool)(ret)
}

func (this *QSharedMemory) Lock() bool {
	ret := C.QSharedMemory_Lock(this.h)
	return (bool)(ret)
}

func (this *QSharedMemory) Unlock() bool {
	ret := C.QSharedMemory_Unlock(this.h)
	return (bool)(ret)
}

func (this *QSharedMemory) ErrorString() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSharedMemory_ErrorString(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QSharedMemory_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSharedMemory_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QSharedMemory_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSharedMemory_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QSharedMemory_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSharedMemory_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QSharedMemory_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSharedMemory_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QSharedMemory) Delete() {
	C.QSharedMemory_Delete(this.h)
}
