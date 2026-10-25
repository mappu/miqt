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
	h  *C.QSslPreSharedKeyAuthenticator
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QSslPreSharedKeyAuthenticator) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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

	return newQSslPreSharedKeyAuthenticator(C.QSslPreSharedKeyAuthenticator_new())
}

// NewQSslPreSharedKeyAuthenticator2 constructs a new QSslPreSharedKeyAuthenticator object.
func NewQSslPreSharedKeyAuthenticator2(authenticator *QSslPreSharedKeyAuthenticator) *QSslPreSharedKeyAuthenticator {
	defer runtime.KeepAlive(authenticator)

	return newQSslPreSharedKeyAuthenticator(C.QSslPreSharedKeyAuthenticator_new2(authenticator.cPointer()))
}

func (this *QSslPreSharedKeyAuthenticator) OperatorAssign(authenticator *QSslPreSharedKeyAuthenticator) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(authenticator)
	C.QSslPreSharedKeyAuthenticator_operatorAssign(this.h, authenticator.cPointer())
}

func (this *QSslPreSharedKeyAuthenticator) Swap(other *QSslPreSharedKeyAuthenticator) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QSslPreSharedKeyAuthenticator_swap(this.h, other.cPointer())
}

func (this *QSslPreSharedKeyAuthenticator) IdentityHint() []byte {
	defer runtime.KeepAlive(this)
	var _bytearray C.struct_miqt_string = C.QSslPreSharedKeyAuthenticator_identityHint(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QSslPreSharedKeyAuthenticator) SetIdentity(identity []byte) {
	defer runtime.KeepAlive(this)
	identity_alias := C.struct_miqt_string{}
	if len(identity) > 0 {
		identity_alias.data = (*C.char)(unsafe.Pointer(&identity[0]))
	} else {
		identity_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	identity_alias.len = C.size_t(len(identity))
	C.QSslPreSharedKeyAuthenticator_setIdentity(this.h, identity_alias)
}

func (this *QSslPreSharedKeyAuthenticator) Identity() []byte {
	defer runtime.KeepAlive(this)
	var _bytearray C.struct_miqt_string = C.QSslPreSharedKeyAuthenticator_identity(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QSslPreSharedKeyAuthenticator) MaximumIdentityLength() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QSslPreSharedKeyAuthenticator_maximumIdentityLength(this.h))
}

func (this *QSslPreSharedKeyAuthenticator) SetPreSharedKey(preSharedKey []byte) {
	defer runtime.KeepAlive(this)
	preSharedKey_alias := C.struct_miqt_string{}
	if len(preSharedKey) > 0 {
		preSharedKey_alias.data = (*C.char)(unsafe.Pointer(&preSharedKey[0]))
	} else {
		preSharedKey_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	preSharedKey_alias.len = C.size_t(len(preSharedKey))
	C.QSslPreSharedKeyAuthenticator_setPreSharedKey(this.h, preSharedKey_alias)
}

func (this *QSslPreSharedKeyAuthenticator) PreSharedKey() []byte {
	defer runtime.KeepAlive(this)
	var _bytearray C.struct_miqt_string = C.QSslPreSharedKeyAuthenticator_preSharedKey(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QSslPreSharedKeyAuthenticator) MaximumPreSharedKeyLength() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QSslPreSharedKeyAuthenticator_maximumPreSharedKeyLength(this.h))
}

// Delete this object from C++ memory.
func (this *QSslPreSharedKeyAuthenticator) Delete() {
	C.QSslPreSharedKeyAuthenticator_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QSslPreSharedKeyAuthenticator) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QSslPreSharedKeyAuthenticator_delete((*C.QSslPreSharedKeyAuthenticator)(gc[0]))
	})
	this.miqtSetGC(gc)
}
