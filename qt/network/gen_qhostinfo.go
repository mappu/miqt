package network

/*

#include "gen_qhostinfo.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QHostInfo__HostInfoError int

const (
	QHostInfo__NoError      QHostInfo__HostInfoError = 0
	QHostInfo__HostNotFound QHostInfo__HostInfoError = 1
	QHostInfo__UnknownError QHostInfo__HostInfoError = 2
)

type QHostInfo struct {
	h  *C.QHostInfo
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QHostInfo) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QHostInfo) cPointer() *C.QHostInfo {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QHostInfo) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQHostInfo constructs the type using only CGO pointers.
func newQHostInfo(h *C.QHostInfo) *QHostInfo {
	if h == nil {
		return nil
	}

	return &QHostInfo{h: h}
}

// UnsafeNewQHostInfo constructs the type using only unsafe pointers.
func UnsafeNewQHostInfo(h unsafe.Pointer) *QHostInfo {
	return newQHostInfo((*C.QHostInfo)(h))
}

// NewQHostInfo constructs a new QHostInfo object.
func NewQHostInfo() *QHostInfo {

	return newQHostInfo(C.QHostInfo_new())
}

// NewQHostInfo2 constructs a new QHostInfo object.
func NewQHostInfo2(d *QHostInfo) *QHostInfo {
	defer runtime.KeepAlive(d)

	return newQHostInfo(C.QHostInfo_new2(d.cPointer()))
}

// NewQHostInfo3 constructs a new QHostInfo object.
func NewQHostInfo3(lookupId int) *QHostInfo {

	return newQHostInfo(C.QHostInfo_new3((C.int)(lookupId)))
}

func (this *QHostInfo) OperatorAssign(d *QHostInfo) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(d)
	C.QHostInfo_operatorAssign(this.h, d.cPointer())
}

func (this *QHostInfo) Swap(other *QHostInfo) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QHostInfo_swap(this.h, other.cPointer())
}

func (this *QHostInfo) HostName() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QHostInfo_hostName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QHostInfo) SetHostName(name string) {
	defer runtime.KeepAlive(this)
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QHostInfo_setHostName(this.h, name_ms)
}

func (this *QHostInfo) Addresses() []QHostAddress {
	defer runtime.KeepAlive(this)
	var _ma C.struct_miqt_array = C.QHostInfo_addresses(this.h)
	_ret := make([]QHostAddress, int(_ma.len))
	_outCast := unsafe.Slice((**C.QHostAddress)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQHostAddress(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QHostInfo) SetAddresses(addresses []QHostAddress) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(addresses)
	addresses_CArray_ptr := (**C.QHostAddress)(C.malloc(C.size_t(8 * len(addresses))))
	defer C.free(unsafe.Pointer(addresses_CArray_ptr))
	addresses_CArray := unsafe.Slice(addresses_CArray_ptr, len(addresses))
	for i := range addresses {
		addresses_CArray[i] = addresses[i].cPointer()
	}
	addresses_ma := C.struct_miqt_array{len: C.size_t(len(addresses)), data: unsafe.Pointer(addresses_CArray_ptr)}
	C.QHostInfo_setAddresses(this.h, addresses_ma)
}

func (this *QHostInfo) Error() QHostInfo__HostInfoError {
	defer runtime.KeepAlive(this)
	return (QHostInfo__HostInfoError)(C.QHostInfo_error(this.h))
}

func (this *QHostInfo) SetError(error QHostInfo__HostInfoError) {
	defer runtime.KeepAlive(this)
	C.QHostInfo_setError(this.h, (C.int)(error))
}

func (this *QHostInfo) ErrorString() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QHostInfo_errorString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QHostInfo) SetErrorString(errorString string) {
	defer runtime.KeepAlive(this)
	errorString_ms := C.struct_miqt_string{}
	errorString_ms.data = C.CString(errorString)
	errorString_ms.len = C.size_t(len(errorString))
	defer C.free(unsafe.Pointer(errorString_ms.data))
	C.QHostInfo_setErrorString(this.h, errorString_ms)
}

func (this *QHostInfo) SetLookupId(id int) {
	defer runtime.KeepAlive(this)
	C.QHostInfo_setLookupId(this.h, (C.int)(id))
}

func (this *QHostInfo) LookupId() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QHostInfo_lookupId(this.h))
}

func QHostInfo_AbortHostLookup(lookupId int) {
	C.QHostInfo_abortHostLookup((C.int)(lookupId))
}

func QHostInfo_FromName(name string) *QHostInfo {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	_goptr := newQHostInfo(C.QHostInfo_fromName(name_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QHostInfo_LocalHostName() string {
	var _ms C.struct_miqt_string = C.QHostInfo_localHostName()
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QHostInfo_LocalDomainName() string {
	var _ms C.struct_miqt_string = C.QHostInfo_localDomainName()
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QHostInfo) Delete() {
	C.QHostInfo_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QHostInfo) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QHostInfo_delete((*C.QHostInfo)(gc[0]))
	})
	this.miqtSetGC(gc)
}
