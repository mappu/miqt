package qt6

/*

#include "gen_qmessageauthenticationcode.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QMessageAuthenticationCode struct {
	h *C.QMessageAuthenticationCode
}

func (this *QMessageAuthenticationCode) cPointer() *C.QMessageAuthenticationCode {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QMessageAuthenticationCode) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQMessageAuthenticationCode constructs the type using only CGO pointers.
func newQMessageAuthenticationCode(h *C.QMessageAuthenticationCode) *QMessageAuthenticationCode {
	if h == nil {
		return nil
	}

	return &QMessageAuthenticationCode{h: h}
}

// UnsafeNewQMessageAuthenticationCode constructs the type using only unsafe pointers.
func UnsafeNewQMessageAuthenticationCode(h unsafe.Pointer) *QMessageAuthenticationCode {
	return newQMessageAuthenticationCode((*C.QMessageAuthenticationCode)(h))
}

// NewQMessageAuthenticationCode constructs a new QMessageAuthenticationCode object.
func NewQMessageAuthenticationCode(method QCryptographicHash__Algorithm) *QMessageAuthenticationCode {

	return newQMessageAuthenticationCode(C.QMessageAuthenticationCode_new((C.int)(method)))
}

// NewQMessageAuthenticationCode2 constructs a new QMessageAuthenticationCode object.
func NewQMessageAuthenticationCode2(method QCryptographicHash__Algorithm, key []byte) *QMessageAuthenticationCode {
	key_alias := C.struct_miqt_string{}
	if len(key) > 0 {
		key_alias.data = (*C.char)(unsafe.Pointer(&key[0]))
	} else {
		key_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	key_alias.len = C.size_t(len(key))

	return newQMessageAuthenticationCode(C.QMessageAuthenticationCode_new2((C.int)(method), key_alias))
}

func (this *QMessageAuthenticationCode) Reset() {
	C.QMessageAuthenticationCode_reset(this.h)
}

func (this *QMessageAuthenticationCode) SetKey(key []byte) {
	key_alias := C.struct_miqt_string{}
	if len(key) > 0 {
		key_alias.data = (*C.char)(unsafe.Pointer(&key[0]))
	} else {
		key_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	key_alias.len = C.size_t(len(key))
	C.QMessageAuthenticationCode_setKey(this.h, key_alias)
}

func (this *QMessageAuthenticationCode) AddData(data string, length int64) {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))
	C.QMessageAuthenticationCode_addData(this.h, data_Cstring, (C.ptrdiff_t)(length))
}

func (this *QMessageAuthenticationCode) AddDataWithData(data []byte) {
	data_alias := C.struct_miqt_string{}
	if len(data) > 0 {
		data_alias.data = (*C.char)(unsafe.Pointer(&data[0]))
	} else {
		data_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	data_alias.len = C.size_t(len(data))
	C.QMessageAuthenticationCode_addDataWithData(this.h, data_alias)
}

func (this *QMessageAuthenticationCode) AddDataWithDevice(device *QIODevice) bool {
	return (bool)(C.QMessageAuthenticationCode_addDataWithDevice(this.h, device.cPointer()))
}

func (this *QMessageAuthenticationCode) Result() []byte {
	var _bytearray C.struct_miqt_string = C.QMessageAuthenticationCode_result(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func QMessageAuthenticationCode_Hash(message []byte, key []byte, method QCryptographicHash__Algorithm) []byte {
	message_alias := C.struct_miqt_string{}
	if len(message) > 0 {
		message_alias.data = (*C.char)(unsafe.Pointer(&message[0]))
	} else {
		message_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	message_alias.len = C.size_t(len(message))
	key_alias := C.struct_miqt_string{}
	if len(key) > 0 {
		key_alias.data = (*C.char)(unsafe.Pointer(&key[0]))
	} else {
		key_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	key_alias.len = C.size_t(len(key))
	var _bytearray C.struct_miqt_string = C.QMessageAuthenticationCode_hash(message_alias, key_alias, (C.int)(method))
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QMessageAuthenticationCode) Delete() {
	C.QMessageAuthenticationCode_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMessageAuthenticationCode) GoGC() {
	runtime.SetFinalizer(this, func(this *QMessageAuthenticationCode) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
