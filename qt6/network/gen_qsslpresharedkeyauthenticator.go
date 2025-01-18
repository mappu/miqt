package network

/*

#include "gen_qsslpresharedkeyauthenticator.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QSslPreSharedKeyAuthenticator struct {
	h          *C.QSslPreSharedKeyAuthenticator
	isSubclass bool
}

func (this *QSslPreSharedKeyAuthenticator) cPointer() *C.QSslPreSharedKeyAuthenticator {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QSslPreSharedKeyAuthenticator) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQSslPreSharedKeyAuthenticator constructs the type using only CGO pointers.
func newQSslPreSharedKeyAuthenticator(h *C.QSslPreSharedKeyAuthenticator) *QSslPreSharedKeyAuthenticator {
	if h == nil {
		return nil
	}

	return &QSslPreSharedKeyAuthenticator{h: h}
}

// UnsafeNewQSslPreSharedKeyAuthenticator constructs the type using only unsafe pointers.
func UnsafeNewQSslPreSharedKeyAuthenticator(h unsafe.Pointer) *QSslPreSharedKeyAuthenticator {
	return newQSslPreSharedKeyAuthenticator((*C.QSslPreSharedKeyAuthenticator)(h))
}

// NewQSslPreSharedKeyAuthenticator constructs a new QSslPreSharedKeyAuthenticator object.
func NewQSslPreSharedKeyAuthenticator() *QSslPreSharedKeyAuthenticator {

	ret := newQSslPreSharedKeyAuthenticator(C.QSslPreSharedKeyAuthenticator_new())
	ret.isSubclass = true
	return ret
}

// NewQSslPreSharedKeyAuthenticator2 constructs a new QSslPreSharedKeyAuthenticator object.
func NewQSslPreSharedKeyAuthenticator2(authenticator *QSslPreSharedKeyAuthenticator) *QSslPreSharedKeyAuthenticator {

	ret := newQSslPreSharedKeyAuthenticator(C.QSslPreSharedKeyAuthenticator_new2(authenticator.cPointer()))
	ret.isSubclass = true
	return ret
}

func (this *QSslPreSharedKeyAuthenticator) OperatorAssign(authenticator *QSslPreSharedKeyAuthenticator) {
	C.QSslPreSharedKeyAuthenticator_OperatorAssign(this.h, authenticator.cPointer())
}

func (this *QSslPreSharedKeyAuthenticator) Swap(other *QSslPreSharedKeyAuthenticator) {
	C.QSslPreSharedKeyAuthenticator_Swap(this.h, other.cPointer())
}

func (this *QSslPreSharedKeyAuthenticator) IdentityHint() []byte {
	var _bytearray C.struct_miqt_string = C.QSslPreSharedKeyAuthenticator_IdentityHint(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QSslPreSharedKeyAuthenticator) SetIdentity(identity []byte) {
	identity_alias := C.struct_miqt_string{}
	identity_alias.data = (*C.char)(unsafe.Pointer(&identity[0]))
	identity_alias.len = C.size_t(len(identity))
	C.QSslPreSharedKeyAuthenticator_SetIdentity(this.h, identity_alias)
}

func (this *QSslPreSharedKeyAuthenticator) Identity() []byte {
	var _bytearray C.struct_miqt_string = C.QSslPreSharedKeyAuthenticator_Identity(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QSslPreSharedKeyAuthenticator) MaximumIdentityLength() int {
	return (int)(C.QSslPreSharedKeyAuthenticator_MaximumIdentityLength(this.h))
}

func (this *QSslPreSharedKeyAuthenticator) SetPreSharedKey(preSharedKey []byte) {
	preSharedKey_alias := C.struct_miqt_string{}
	preSharedKey_alias.data = (*C.char)(unsafe.Pointer(&preSharedKey[0]))
	preSharedKey_alias.len = C.size_t(len(preSharedKey))
	C.QSslPreSharedKeyAuthenticator_SetPreSharedKey(this.h, preSharedKey_alias)
}

func (this *QSslPreSharedKeyAuthenticator) PreSharedKey() []byte {
	var _bytearray C.struct_miqt_string = C.QSslPreSharedKeyAuthenticator_PreSharedKey(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QSslPreSharedKeyAuthenticator) MaximumPreSharedKeyLength() int {
	return (int)(C.QSslPreSharedKeyAuthenticator_MaximumPreSharedKeyLength(this.h))
}

// Delete this object from C++ memory.
func (this *QSslPreSharedKeyAuthenticator) Delete() {
	C.QSslPreSharedKeyAuthenticator_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSslPreSharedKeyAuthenticator) GoGC() {
	runtime.SetFinalizer(this, func(this *QSslPreSharedKeyAuthenticator) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
