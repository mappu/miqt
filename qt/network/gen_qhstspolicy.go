package network

/*

#include "gen_qhstspolicy.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QHstsPolicy__PolicyFlag int

const (
	QHstsPolicy__IncludeSubDomains QHstsPolicy__PolicyFlag = 1
)

type QHstsPolicy struct {
	h *C.QHstsPolicy
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
func NewQHstsPolicy2(expiry *qt.QDateTime, flags QHstsPolicy__PolicyFlag, host string) *QHstsPolicy {
	host_ms := C.struct_miqt_string{}
	host_ms.data = C.CString(host)
	host_ms.len = C.size_t(len(host))
	defer C.free(unsafe.Pointer(host_ms.data))

	return newQHstsPolicy(C.QHstsPolicy_new2((*C.QDateTime)(expiry.UnsafePointer()), (C.int)(flags), host_ms))
}

// NewQHstsPolicy3 constructs a new QHstsPolicy object.
func NewQHstsPolicy3(rhs *QHstsPolicy) *QHstsPolicy {

	return newQHstsPolicy(C.QHstsPolicy_new3(rhs.cPointer()))
}

// NewQHstsPolicy4 constructs a new QHstsPolicy object.
func NewQHstsPolicy4(expiry *qt.QDateTime, flags QHstsPolicy__PolicyFlag, host string, mode qt.QUrl__ParsingMode) *QHstsPolicy {
	host_ms := C.struct_miqt_string{}
	host_ms.data = C.CString(host)
	host_ms.len = C.size_t(len(host))
	defer C.free(unsafe.Pointer(host_ms.data))

	return newQHstsPolicy(C.QHstsPolicy_new4((*C.QDateTime)(expiry.UnsafePointer()), (C.int)(flags), host_ms, (C.int)(mode)))
}

func (this *QHstsPolicy) OperatorAssign(rhs *QHstsPolicy) {
	C.QHstsPolicy_operatorAssign(this.h, rhs.cPointer())
}

func (this *QHstsPolicy) Swap(other *QHstsPolicy) {
	C.QHstsPolicy_swap(this.h, other.cPointer())
}

func (this *QHstsPolicy) SetHost(host string) {
	host_ms := C.struct_miqt_string{}
	host_ms.data = C.CString(host)
	host_ms.len = C.size_t(len(host))
	defer C.free(unsafe.Pointer(host_ms.data))
	C.QHstsPolicy_setHost(this.h, host_ms)
}

func (this *QHstsPolicy) Host() string {
	var _ms C.struct_miqt_string = C.QHstsPolicy_host(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QHstsPolicy) SetExpiry(expiry *qt.QDateTime) {
	C.QHstsPolicy_setExpiry(this.h, (*C.QDateTime)(expiry.UnsafePointer()))
}

func (this *QHstsPolicy) Expiry() *qt.QDateTime {
	_goptr := qt.UnsafeNewQDateTime(unsafe.Pointer(C.QHstsPolicy_expiry(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QHstsPolicy) SetIncludesSubDomains(include bool) {
	C.QHstsPolicy_setIncludesSubDomains(this.h, (C.bool)(include))
}

func (this *QHstsPolicy) IncludesSubDomains() bool {
	return (bool)(C.QHstsPolicy_includesSubDomains(this.h))
}

func (this *QHstsPolicy) IsExpired() bool {
	return (bool)(C.QHstsPolicy_isExpired(this.h))
}

func (this *QHstsPolicy) SetHost2(host string, mode qt.QUrl__ParsingMode) {
	host_ms := C.struct_miqt_string{}
	host_ms.data = C.CString(host)
	host_ms.len = C.size_t(len(host))
	defer C.free(unsafe.Pointer(host_ms.data))
	C.QHstsPolicy_setHost2(this.h, host_ms, (C.int)(mode))
}

func (this *QHstsPolicy) HostWithOptions(options qt.QUrl__ComponentFormattingOption) string {
	var _ms C.struct_miqt_string = C.QHstsPolicy_hostWithOptions(this.h, (C.int)(options))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QHstsPolicy) Delete() {
	C.QHstsPolicy_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QHstsPolicy) GoGC() {
	runtime.SetFinalizer(this, func(this *QHstsPolicy) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
