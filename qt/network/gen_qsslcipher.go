package network

/*

#include "gen_qsslcipher.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QSslCipher struct {
	h  *C.QSslCipher
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QSslCipher) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QSslCipher) cPointer() *C.QSslCipher {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QSslCipher) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQSslCipher constructs the type using only CGO pointers.
func newQSslCipher(h *C.QSslCipher) *QSslCipher {
	if h == nil {
		return nil
	}

	return &QSslCipher{h: h}
}

// UnsafeNewQSslCipher constructs the type using only unsafe pointers.
func UnsafeNewQSslCipher(h unsafe.Pointer) *QSslCipher {
	return newQSslCipher((*C.QSslCipher)(h))
}

// NewQSslCipher constructs a new QSslCipher object.
func NewQSslCipher() *QSslCipher {

	return newQSslCipher(C.QSslCipher_new())
}

// NewQSslCipher2 constructs a new QSslCipher object.
func NewQSslCipher2(name string) *QSslCipher {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))

	return newQSslCipher(C.QSslCipher_new2(name_ms))
}

// NewQSslCipher3 constructs a new QSslCipher object.
func NewQSslCipher3(name string, protocol QSsl__SslProtocol) *QSslCipher {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))

	return newQSslCipher(C.QSslCipher_new3(name_ms, (C.int)(protocol)))
}

// NewQSslCipher4 constructs a new QSslCipher object.
func NewQSslCipher4(other *QSslCipher) *QSslCipher {
	defer runtime.KeepAlive(other)

	return newQSslCipher(C.QSslCipher_new4(other.cPointer()))
}

func (this *QSslCipher) OperatorAssign(other *QSslCipher) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QSslCipher_operatorAssign(this.h, other.cPointer())
}

func (this *QSslCipher) Swap(other *QSslCipher) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QSslCipher_swap(this.h, other.cPointer())
}

func (this *QSslCipher) OperatorEqual(other *QSslCipher) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	return (bool)(C.QSslCipher_operatorEqual(this.h, other.cPointer()))
}

func (this *QSslCipher) OperatorNotEqual(other *QSslCipher) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	return (bool)(C.QSslCipher_operatorNotEqual(this.h, other.cPointer()))
}

func (this *QSslCipher) IsNull() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QSslCipher_isNull(this.h))
}

func (this *QSslCipher) Name() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QSslCipher_name(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSslCipher) SupportedBits() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QSslCipher_supportedBits(this.h))
}

func (this *QSslCipher) UsedBits() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QSslCipher_usedBits(this.h))
}

func (this *QSslCipher) KeyExchangeMethod() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QSslCipher_keyExchangeMethod(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSslCipher) AuthenticationMethod() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QSslCipher_authenticationMethod(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSslCipher) EncryptionMethod() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QSslCipher_encryptionMethod(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSslCipher) ProtocolString() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QSslCipher_protocolString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSslCipher) Protocol() QSsl__SslProtocol {
	defer runtime.KeepAlive(this)
	return (QSsl__SslProtocol)(C.QSslCipher_protocol(this.h))
}

// Delete this object from C++ memory.
func (this *QSslCipher) Delete() {
	C.QSslCipher_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QSslCipher) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QSslCipher_delete((*C.QSslCipher)(gc[0]))
	})
	this.miqtSetGC(gc)
}
