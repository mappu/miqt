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
	h          *C.QAuthenticator
	isSubclass bool
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
	if h == nil {
		return nil
	}

	return &QAuthenticator{h: (*C.QAuthenticator)(h)}
}

// NewQAuthenticator constructs a new QAuthenticator object.
func NewQAuthenticator() *QAuthenticator {
	var outptr_QAuthenticator *C.QAuthenticator = nil

	C.QAuthenticator_new(&outptr_QAuthenticator)
	ret := newQAuthenticator(outptr_QAuthenticator)
	ret.isSubclass = true
	return ret
}

// NewQAuthenticator2 constructs a new QAuthenticator object.
func NewQAuthenticator2(other *QAuthenticator) *QAuthenticator {
	var outptr_QAuthenticator *C.QAuthenticator = nil

	C.QAuthenticator_new2(other.cPointer(), &outptr_QAuthenticator)
	ret := newQAuthenticator(outptr_QAuthenticator)
	ret.isSubclass = true
	return ret
}

func (this *QAuthenticator) OperatorAssign(other *QAuthenticator) {
	C.QAuthenticator_OperatorAssign(this.h, other.cPointer())
}

func (this *QAuthenticator) OperatorEqual(other *QAuthenticator) bool {
	return (bool)(C.QAuthenticator_OperatorEqual(this.h, other.cPointer()))
}

func (this *QAuthenticator) OperatorNotEqual(other *QAuthenticator) bool {
	return (bool)(C.QAuthenticator_OperatorNotEqual(this.h, other.cPointer()))
}

func (this *QAuthenticator) User() string {
	var _ms C.struct_miqt_string = C.QAuthenticator_User(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAuthenticator) SetUser(user string) {
	user_ms := C.struct_miqt_string{}
	user_ms.data = C.CString(user)
	user_ms.len = C.size_t(len(user))
	defer C.free(unsafe.Pointer(user_ms.data))
	C.QAuthenticator_SetUser(this.h, user_ms)
}

func (this *QAuthenticator) Password() string {
	var _ms C.struct_miqt_string = C.QAuthenticator_Password(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAuthenticator) SetPassword(password string) {
	password_ms := C.struct_miqt_string{}
	password_ms.data = C.CString(password)
	password_ms.len = C.size_t(len(password))
	defer C.free(unsafe.Pointer(password_ms.data))
	C.QAuthenticator_SetPassword(this.h, password_ms)
}

func (this *QAuthenticator) Realm() string {
	var _ms C.struct_miqt_string = C.QAuthenticator_Realm(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAuthenticator) SetRealm(realm string) {
	realm_ms := C.struct_miqt_string{}
	realm_ms.data = C.CString(realm)
	realm_ms.len = C.size_t(len(realm))
	defer C.free(unsafe.Pointer(realm_ms.data))
	C.QAuthenticator_SetRealm(this.h, realm_ms)
}

func (this *QAuthenticator) Option(opt string) *qt6.QVariant {
	opt_ms := C.struct_miqt_string{}
	opt_ms.data = C.CString(opt)
	opt_ms.len = C.size_t(len(opt))
	defer C.free(unsafe.Pointer(opt_ms.data))
	_ret := C.QAuthenticator_Option(this.h, opt_ms)
	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAuthenticator) Options() map[string]qt6.QVariant {
	var _mm C.struct_miqt_map = C.QAuthenticator_Options(this.h)
	_ret := make(map[string]qt6.QVariant, int(_mm.len))
	_Keys := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_mm.keys))
	_Values := (*[0xffff]*C.QVariant)(unsafe.Pointer(_mm.values))
	for i := 0; i < int(_mm.len); i++ {
		var _hashkey_ms C.struct_miqt_string = _Keys[i]
		_hashkey_ret := C.GoStringN(_hashkey_ms.data, C.int(int64(_hashkey_ms.len)))
		C.free(unsafe.Pointer(_hashkey_ms.data))
		_entry_Key := _hashkey_ret
		_hashval_ret := _Values[i]
		_hashval_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(_hashval_ret))
		_hashval_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_entry_Value := *_hashval_goptr

		_ret[_entry_Key] = _entry_Value
	}
	return _ret
}

func (this *QAuthenticator) SetOption(opt string, value *qt6.QVariant) {
	opt_ms := C.struct_miqt_string{}
	opt_ms.data = C.CString(opt)
	opt_ms.len = C.size_t(len(opt))
	defer C.free(unsafe.Pointer(opt_ms.data))
	C.QAuthenticator_SetOption(this.h, opt_ms, (*C.QVariant)(value.UnsafePointer()))
}

func (this *QAuthenticator) IsNull() bool {
	return (bool)(C.QAuthenticator_IsNull(this.h))
}

func (this *QAuthenticator) Detach() {
	C.QAuthenticator_Detach(this.h)
}

// Delete this object from C++ memory.
func (this *QAuthenticator) Delete() {
	C.QAuthenticator_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAuthenticator) GoGC() {
	runtime.SetFinalizer(this, func(this *QAuthenticator) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
