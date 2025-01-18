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
	h          *C.QHostInfo
	isSubclass bool
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

	ret := newQHostInfo(C.QHostInfo_new())
	ret.isSubclass = true
	return ret
}

// NewQHostInfo2 constructs a new QHostInfo object.
func NewQHostInfo2(d *QHostInfo) *QHostInfo {

	ret := newQHostInfo(C.QHostInfo_new2(d.cPointer()))
	ret.isSubclass = true
	return ret
}

// NewQHostInfo3 constructs a new QHostInfo object.
func NewQHostInfo3(lookupId int) *QHostInfo {

	ret := newQHostInfo(C.QHostInfo_new3((C.int)(lookupId)))
	ret.isSubclass = true
	return ret
}

func (this *QHostInfo) OperatorAssign(d *QHostInfo) {
	C.QHostInfo_OperatorAssign(this.h, d.cPointer())
}

func (this *QHostInfo) Swap(other *QHostInfo) {
	C.QHostInfo_Swap(this.h, other.cPointer())
}

func (this *QHostInfo) HostName() string {
	var _ms C.struct_miqt_string = C.QHostInfo_HostName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QHostInfo) SetHostName(name string) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QHostInfo_SetHostName(this.h, name_ms)
}

func (this *QHostInfo) Addresses() []QHostAddress {
	var _ma C.struct_miqt_array = C.QHostInfo_Addresses(this.h)
	_ret := make([]QHostAddress, int(_ma.len))
	_outCast := (*[0xffff]*C.QHostAddress)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQHostAddress(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QHostInfo) SetAddresses(addresses []QHostAddress) {
	addresses_CArray := (*[0xffff]*C.QHostAddress)(C.malloc(C.size_t(8 * len(addresses))))
	defer C.free(unsafe.Pointer(addresses_CArray))
	for i := range addresses {
		addresses_CArray[i] = addresses[i].cPointer()
	}
	addresses_ma := C.struct_miqt_array{len: C.size_t(len(addresses)), data: unsafe.Pointer(addresses_CArray)}
	C.QHostInfo_SetAddresses(this.h, addresses_ma)
}

func (this *QHostInfo) Error() QHostInfo__HostInfoError {
	return (QHostInfo__HostInfoError)(C.QHostInfo_Error(this.h))
}

func (this *QHostInfo) SetError(error QHostInfo__HostInfoError) {
	C.QHostInfo_SetError(this.h, (C.int)(error))
}

func (this *QHostInfo) ErrorString() string {
	var _ms C.struct_miqt_string = C.QHostInfo_ErrorString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QHostInfo) SetErrorString(errorString string) {
	errorString_ms := C.struct_miqt_string{}
	errorString_ms.data = C.CString(errorString)
	errorString_ms.len = C.size_t(len(errorString))
	defer C.free(unsafe.Pointer(errorString_ms.data))
	C.QHostInfo_SetErrorString(this.h, errorString_ms)
}

func (this *QHostInfo) SetLookupId(id int) {
	C.QHostInfo_SetLookupId(this.h, (C.int)(id))
}

func (this *QHostInfo) LookupId() int {
	return (int)(C.QHostInfo_LookupId(this.h))
}

func QHostInfo_AbortHostLookup(lookupId int) {
	C.QHostInfo_AbortHostLookup((C.int)(lookupId))
}

func QHostInfo_FromName(name string) *QHostInfo {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	_goptr := newQHostInfo(C.QHostInfo_FromName(name_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QHostInfo_LocalHostName() string {
	var _ms C.struct_miqt_string = C.QHostInfo_LocalHostName()
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QHostInfo_LocalDomainName() string {
	var _ms C.struct_miqt_string = C.QHostInfo_LocalDomainName()
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QHostInfo) Delete() {
	C.QHostInfo_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QHostInfo) GoGC() {
	runtime.SetFinalizer(this, func(this *QHostInfo) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
