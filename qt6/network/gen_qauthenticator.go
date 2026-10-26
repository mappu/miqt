package network

/*

#include "gen_qauthenticator.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"unsafe"
)

type QAuthenticator struct {
	h  *C.QAuthenticator
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QAuthenticator) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QAuthenticator) cPointer() *C.QAuthenticator {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAuthenticator) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAuthenticator constructs the type using only CGO pointers.
func newQAuthenticator(h *C.QAuthenticator) *QAuthenticator {
	if h == nil {
		return nil
	}

	return &QAuthenticator{h: h}
}

// UnsafeNewQAuthenticator constructs the type using only unsafe pointers.
func UnsafeNewQAuthenticator(h unsafe.Pointer) *QAuthenticator {
	return newQAuthenticator((*C.QAuthenticator)(h))
}

// NewQAuthenticator constructs a new QAuthenticator object.
func NewQAuthenticator() *QAuthenticator {

	return newQAuthenticator(C.QAuthenticator_new())
}

// NewQAuthenticator2 constructs a new QAuthenticator object.
func NewQAuthenticator2(other *QAuthenticator) *QAuthenticator {
	defer runtime.KeepAlive(other)

	return newQAuthenticator(C.QAuthenticator_new2(other.cPointer()))
}

func (this *QAuthenticator) OperatorAssign(other *QAuthenticator) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QAuthenticator_operatorAssign(this.h, other.cPointer())
}

func (this *QAuthenticator) OperatorEqual(other *QAuthenticator) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	return (bool)(C.QAuthenticator_operatorEqual(this.h, other.cPointer()))
}

func (this *QAuthenticator) OperatorNotEqual(other *QAuthenticator) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	return (bool)(C.QAuthenticator_operatorNotEqual(this.h, other.cPointer()))
}

func (this *QAuthenticator) User() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QAuthenticator_user(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAuthenticator) SetUser(user string) {
	defer runtime.KeepAlive(this)
	user_ms := C.struct_miqt_string{}
	user_ms.data = C.CString(user)
	user_ms.len = C.size_t(len(user))
	defer C.free(unsafe.Pointer(user_ms.data))
	C.QAuthenticator_setUser(this.h, user_ms)
}

func (this *QAuthenticator) Password() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QAuthenticator_password(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAuthenticator) SetPassword(password string) {
	defer runtime.KeepAlive(this)
	password_ms := C.struct_miqt_string{}
	password_ms.data = C.CString(password)
	password_ms.len = C.size_t(len(password))
	defer C.free(unsafe.Pointer(password_ms.data))
	C.QAuthenticator_setPassword(this.h, password_ms)
}

func (this *QAuthenticator) Realm() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QAuthenticator_realm(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAuthenticator) SetRealm(realm string) {
	defer runtime.KeepAlive(this)
	realm_ms := C.struct_miqt_string{}
	realm_ms.data = C.CString(realm)
	realm_ms.len = C.size_t(len(realm))
	defer C.free(unsafe.Pointer(realm_ms.data))
	C.QAuthenticator_setRealm(this.h, realm_ms)
}

func (this *QAuthenticator) Option(opt string) *qt6.QVariant {
	defer runtime.KeepAlive(this)
	opt_ms := C.struct_miqt_string{}
	opt_ms.data = C.CString(opt)
	opt_ms.len = C.size_t(len(opt))
	defer C.free(unsafe.Pointer(opt_ms.data))
	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(C.QAuthenticator_option(this.h, opt_ms)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAuthenticator) Options() map[string]qt6.QVariant {
	defer runtime.KeepAlive(this)
	var _mm C.struct_miqt_map = C.QAuthenticator_options(this.h)
	_ret := make(map[string]qt6.QVariant, int(_mm.len))
	_Keys := unsafe.Slice((*C.struct_miqt_string)(unsafe.Pointer(_mm.keys)), int(_mm.len))
	_Values := unsafe.Slice((**C.QVariant)(unsafe.Pointer(_mm.values)), int(_mm.len))
	for i := 0; i < int(_mm.len); i++ {
		var _hashkey_ms C.struct_miqt_string = _Keys[i]
		_hashkey_ret := C.GoStringN(_hashkey_ms.data, C.int(int64(_hashkey_ms.len)))
		C.free(unsafe.Pointer(_hashkey_ms.data))
		_entry_Key := _hashkey_ret
		_hashval_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(_Values[i]))
		_hashval_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_entry_Value := *_hashval_goptr

		_ret[_entry_Key] = _entry_Value
	}
	return _ret
}

func (this *QAuthenticator) SetOption(opt string, value *qt6.QVariant) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(value)
	opt_ms := C.struct_miqt_string{}
	opt_ms.data = C.CString(opt)
	opt_ms.len = C.size_t(len(opt))
	defer C.free(unsafe.Pointer(opt_ms.data))
	C.QAuthenticator_setOption(this.h, opt_ms, (*C.QVariant)(value.UnsafePointer()))
}

func (this *QAuthenticator) IsNull() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QAuthenticator_isNull(this.h))
}

func (this *QAuthenticator) Detach() {
	defer runtime.KeepAlive(this)
	C.QAuthenticator_detach(this.h)
}

// Delete this object from C++ memory.
func (this *QAuthenticator) Delete() {
	C.QAuthenticator_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QAuthenticator) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QAuthenticator_delete((*C.QAuthenticator)(gc[0]))
	})
	this.miqtSetGC(gc)
}
