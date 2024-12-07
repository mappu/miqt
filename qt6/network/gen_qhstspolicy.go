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
	h          *C.QHstsPolicy
	isSubclass bool
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
	if h == nil {
		return nil
	}

	return &QHstsPolicy{h: (*C.QHstsPolicy)(h)}
}

// NewQHstsPolicy constructs a new QHstsPolicy object.
func NewQHstsPolicy() *QHstsPolicy {
	var outptr_QHstsPolicy *C.QHstsPolicy = nil

	C.QHstsPolicy_new(&outptr_QHstsPolicy)
	ret := newQHstsPolicy(outptr_QHstsPolicy)
	ret.isSubclass = true
	return ret
}

// NewQHstsPolicy2 constructs a new QHstsPolicy object.
func NewQHstsPolicy2(expiry *qt6.QDateTime, flags QHstsPolicy__PolicyFlag, host string) *QHstsPolicy {
	host_ms := C.struct_miqt_string{}
	host_ms.data = C.CString(host)
	host_ms.len = C.size_t(len(host))
	defer C.free(unsafe.Pointer(host_ms.data))
	var outptr_QHstsPolicy *C.QHstsPolicy = nil

	C.QHstsPolicy_new2((*C.QDateTime)(expiry.UnsafePointer()), (C.int)(flags), host_ms, &outptr_QHstsPolicy)
	ret := newQHstsPolicy(outptr_QHstsPolicy)
	ret.isSubclass = true
	return ret
}

// NewQHstsPolicy3 constructs a new QHstsPolicy object.
func NewQHstsPolicy3(rhs *QHstsPolicy) *QHstsPolicy {
	var outptr_QHstsPolicy *C.QHstsPolicy = nil

	C.QHstsPolicy_new3(rhs.cPointer(), &outptr_QHstsPolicy)
	ret := newQHstsPolicy(outptr_QHstsPolicy)
	ret.isSubclass = true
	return ret
}

// NewQHstsPolicy4 constructs a new QHstsPolicy object.
func NewQHstsPolicy4(expiry *qt6.QDateTime, flags QHstsPolicy__PolicyFlag, host string, mode qt6.QUrl__ParsingMode) *QHstsPolicy {
	host_ms := C.struct_miqt_string{}
	host_ms.data = C.CString(host)
	host_ms.len = C.size_t(len(host))
	defer C.free(unsafe.Pointer(host_ms.data))
	var outptr_QHstsPolicy *C.QHstsPolicy = nil

	C.QHstsPolicy_new4((*C.QDateTime)(expiry.UnsafePointer()), (C.int)(flags), host_ms, (C.int)(mode), &outptr_QHstsPolicy)
	ret := newQHstsPolicy(outptr_QHstsPolicy)
	ret.isSubclass = true
	return ret
}

func (this *QHstsPolicy) OperatorAssign(rhs *QHstsPolicy) {
	C.QHstsPolicy_OperatorAssign(this.h, rhs.cPointer())
}

func (this *QHstsPolicy) Swap(other *QHstsPolicy) {
	C.QHstsPolicy_Swap(this.h, other.cPointer())
}

func (this *QHstsPolicy) SetHost(host string) {
	host_ms := C.struct_miqt_string{}
	host_ms.data = C.CString(host)
	host_ms.len = C.size_t(len(host))
	defer C.free(unsafe.Pointer(host_ms.data))
	C.QHstsPolicy_SetHost(this.h, host_ms)
}

func (this *QHstsPolicy) Host() string {
	var _ms C.struct_miqt_string = C.QHstsPolicy_Host(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QHstsPolicy) SetExpiry(expiry *qt6.QDateTime) {
	C.QHstsPolicy_SetExpiry(this.h, (*C.QDateTime)(expiry.UnsafePointer()))
}

func (this *QHstsPolicy) Expiry() *qt6.QDateTime {
	_goptr := qt6.UnsafeNewQDateTime(unsafe.Pointer(C.QHstsPolicy_Expiry(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QHstsPolicy) SetIncludesSubDomains(include bool) {
	C.QHstsPolicy_SetIncludesSubDomains(this.h, (C.bool)(include))
}

func (this *QHstsPolicy) IncludesSubDomains() bool {
	return (bool)(C.QHstsPolicy_IncludesSubDomains(this.h))
}

func (this *QHstsPolicy) IsExpired() bool {
	return (bool)(C.QHstsPolicy_IsExpired(this.h))
}

func (this *QHstsPolicy) SetHost2(host string, mode qt6.QUrl__ParsingMode) {
	host_ms := C.struct_miqt_string{}
	host_ms.data = C.CString(host)
	host_ms.len = C.size_t(len(host))
	defer C.free(unsafe.Pointer(host_ms.data))
	C.QHstsPolicy_SetHost2(this.h, host_ms, (C.int)(mode))
}

func (this *QHstsPolicy) Host1(options qt6.QUrl__ComponentFormattingOption) string {
	var _ms C.struct_miqt_string = C.QHstsPolicy_Host1(this.h, (C.uint)(options))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QHstsPolicy) Delete() {
	C.QHstsPolicy_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QHstsPolicy) GoGC() {
	runtime.SetFinalizer(this, func(this *QHstsPolicy) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
