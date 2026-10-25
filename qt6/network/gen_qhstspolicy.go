package network

/*

#include "gen_qhstspolicy.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"unsafe"
)

type QHstsPolicy__PolicyFlag int

const (
	QHstsPolicy__IncludeSubDomains QHstsPolicy__PolicyFlag = 1
)

type QHstsPolicy struct {
	h  *C.QHstsPolicy
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QHstsPolicy) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QHstsPolicy) cPointer() *C.QHstsPolicy {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QHstsPolicy) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQHstsPolicy constructs the type using only CGO pointers.
func newQHstsPolicy(h *C.QHstsPolicy) *QHstsPolicy {
	if h == nil {
		return nil
	}

	return &QHstsPolicy{h: h}
}

// UnsafeNewQHstsPolicy constructs the type using only unsafe pointers.
func UnsafeNewQHstsPolicy(h unsafe.Pointer) *QHstsPolicy {
	return newQHstsPolicy((*C.QHstsPolicy)(h))
}

// NewQHstsPolicy constructs a new QHstsPolicy object.
func NewQHstsPolicy() *QHstsPolicy {

	return newQHstsPolicy(C.QHstsPolicy_new())
}

// NewQHstsPolicy2 constructs a new QHstsPolicy object.
func NewQHstsPolicy2(expiry *qt6.QDateTime, flags QHstsPolicy__PolicyFlag, host string) *QHstsPolicy {
	defer runtime.KeepAlive(expiry)
	host_ms := C.struct_miqt_string{}
	host_ms.data = C.CString(host)
	host_ms.len = C.size_t(len(host))
	defer C.free(unsafe.Pointer(host_ms.data))

	return newQHstsPolicy(C.QHstsPolicy_new2((*C.QDateTime)(expiry.UnsafePointer()), (C.int)(flags), host_ms))
}

// NewQHstsPolicy3 constructs a new QHstsPolicy object.
func NewQHstsPolicy3(rhs *QHstsPolicy) *QHstsPolicy {
	defer runtime.KeepAlive(rhs)

	return newQHstsPolicy(C.QHstsPolicy_new3(rhs.cPointer()))
}

// NewQHstsPolicy4 constructs a new QHstsPolicy object.
func NewQHstsPolicy4(expiry *qt6.QDateTime, flags QHstsPolicy__PolicyFlag, host string, mode qt6.QUrl__ParsingMode) *QHstsPolicy {
	defer runtime.KeepAlive(expiry)
	host_ms := C.struct_miqt_string{}
	host_ms.data = C.CString(host)
	host_ms.len = C.size_t(len(host))
	defer C.free(unsafe.Pointer(host_ms.data))

	return newQHstsPolicy(C.QHstsPolicy_new4((*C.QDateTime)(expiry.UnsafePointer()), (C.int)(flags), host_ms, (C.int)(mode)))
}

func (this *QHstsPolicy) OperatorAssign(rhs *QHstsPolicy) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(rhs)
	C.QHstsPolicy_operatorAssign(this.h, rhs.cPointer())
}

func (this *QHstsPolicy) Swap(other *QHstsPolicy) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QHstsPolicy_swap(this.h, other.cPointer())
}

func (this *QHstsPolicy) SetHost(host string) {
	defer runtime.KeepAlive(this)
	host_ms := C.struct_miqt_string{}
	host_ms.data = C.CString(host)
	host_ms.len = C.size_t(len(host))
	defer C.free(unsafe.Pointer(host_ms.data))
	C.QHstsPolicy_setHost(this.h, host_ms)
}

func (this *QHstsPolicy) Host() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QHstsPolicy_host(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QHstsPolicy) SetExpiry(expiry *qt6.QDateTime) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(expiry)
	C.QHstsPolicy_setExpiry(this.h, (*C.QDateTime)(expiry.UnsafePointer()))
}

func (this *QHstsPolicy) Expiry() *qt6.QDateTime {
	defer runtime.KeepAlive(this)
	_goptr := qt6.UnsafeNewQDateTime(unsafe.Pointer(C.QHstsPolicy_expiry(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QHstsPolicy) SetIncludesSubDomains(include bool) {
	defer runtime.KeepAlive(this)
	C.QHstsPolicy_setIncludesSubDomains(this.h, (C.bool)(include))
}

func (this *QHstsPolicy) IncludesSubDomains() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QHstsPolicy_includesSubDomains(this.h))
}

func (this *QHstsPolicy) IsExpired() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QHstsPolicy_isExpired(this.h))
}

func (this *QHstsPolicy) SetHost2(host string, mode qt6.QUrl__ParsingMode) {
	defer runtime.KeepAlive(this)
	host_ms := C.struct_miqt_string{}
	host_ms.data = C.CString(host)
	host_ms.len = C.size_t(len(host))
	defer C.free(unsafe.Pointer(host_ms.data))
	C.QHstsPolicy_setHost2(this.h, host_ms, (C.int)(mode))
}

func (this *QHstsPolicy) HostWithOptions(options qt6.QUrl__ComponentFormattingOption) string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QHstsPolicy_hostWithOptions(this.h, (C.uint)(options))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QHstsPolicy) Delete() {
	C.QHstsPolicy_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QHstsPolicy) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QHstsPolicy_delete((*C.QHstsPolicy)(gc[0]))
	})
	this.miqtSetGC(gc)
}
