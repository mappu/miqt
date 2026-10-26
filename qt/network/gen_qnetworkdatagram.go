package network

/*

#include "gen_qnetworkdatagram.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QNetworkDatagram struct {
	h  *C.QNetworkDatagram
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QNetworkDatagram) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QNetworkDatagram) cPointer() *C.QNetworkDatagram {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QNetworkDatagram) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQNetworkDatagram constructs the type using only CGO pointers.
func newQNetworkDatagram(h *C.QNetworkDatagram) *QNetworkDatagram {
	if h == nil {
		return nil
	}

	return &QNetworkDatagram{h: h}
}

// UnsafeNewQNetworkDatagram constructs the type using only unsafe pointers.
func UnsafeNewQNetworkDatagram(h unsafe.Pointer) *QNetworkDatagram {
	return newQNetworkDatagram((*C.QNetworkDatagram)(h))
}

// NewQNetworkDatagram constructs a new QNetworkDatagram object.
func NewQNetworkDatagram() *QNetworkDatagram {

	return newQNetworkDatagram(C.QNetworkDatagram_new())
}

// NewQNetworkDatagram2 constructs a new QNetworkDatagram object.
func NewQNetworkDatagram2(data []byte) *QNetworkDatagram {
	data_alias := C.struct_miqt_string{}
	if len(data) > 0 {
		data_alias.data = (*C.char)(unsafe.Pointer(&data[0]))
	} else {
		data_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	data_alias.len = C.size_t(len(data))

	return newQNetworkDatagram(C.QNetworkDatagram_new2(data_alias))
}

// NewQNetworkDatagram3 constructs a new QNetworkDatagram object.
func NewQNetworkDatagram3(other *QNetworkDatagram) *QNetworkDatagram {
	defer runtime.KeepAlive(other)

	return newQNetworkDatagram(C.QNetworkDatagram_new3(other.cPointer()))
}

// NewQNetworkDatagram4 constructs a new QNetworkDatagram object.
func NewQNetworkDatagram4(data []byte, destinationAddress *QHostAddress) *QNetworkDatagram {
	defer runtime.KeepAlive(destinationAddress)
	data_alias := C.struct_miqt_string{}
	if len(data) > 0 {
		data_alias.data = (*C.char)(unsafe.Pointer(&data[0]))
	} else {
		data_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	data_alias.len = C.size_t(len(data))

	return newQNetworkDatagram(C.QNetworkDatagram_new4(data_alias, destinationAddress.cPointer()))
}

// NewQNetworkDatagram5 constructs a new QNetworkDatagram object.
func NewQNetworkDatagram5(data []byte, destinationAddress *QHostAddress, port uint16) *QNetworkDatagram {
	defer runtime.KeepAlive(destinationAddress)
	data_alias := C.struct_miqt_string{}
	if len(data) > 0 {
		data_alias.data = (*C.char)(unsafe.Pointer(&data[0]))
	} else {
		data_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	data_alias.len = C.size_t(len(data))

	return newQNetworkDatagram(C.QNetworkDatagram_new5(data_alias, destinationAddress.cPointer(), (C.ushort)(port)))
}

func (this *QNetworkDatagram) OperatorAssign(other *QNetworkDatagram) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QNetworkDatagram_operatorAssign(this.h, other.cPointer())
}

func (this *QNetworkDatagram) Swap(other *QNetworkDatagram) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QNetworkDatagram_swap(this.h, other.cPointer())
}

func (this *QNetworkDatagram) Clear() {
	defer runtime.KeepAlive(this)
	C.QNetworkDatagram_clear(this.h)
}

func (this *QNetworkDatagram) IsValid() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QNetworkDatagram_isValid(this.h))
}

func (this *QNetworkDatagram) IsNull() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QNetworkDatagram_isNull(this.h))
}

func (this *QNetworkDatagram) InterfaceIndex() uint {
	defer runtime.KeepAlive(this)
	return (uint)(C.QNetworkDatagram_interfaceIndex(this.h))
}

func (this *QNetworkDatagram) SetInterfaceIndex(index uint) {
	defer runtime.KeepAlive(this)
	C.QNetworkDatagram_setInterfaceIndex(this.h, (C.uint)(index))
}

func (this *QNetworkDatagram) SenderAddress() *QHostAddress {
	defer runtime.KeepAlive(this)
	_goptr := newQHostAddress(C.QNetworkDatagram_senderAddress(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QNetworkDatagram) DestinationAddress() *QHostAddress {
	defer runtime.KeepAlive(this)
	_goptr := newQHostAddress(C.QNetworkDatagram_destinationAddress(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QNetworkDatagram) SenderPort() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QNetworkDatagram_senderPort(this.h))
}

func (this *QNetworkDatagram) DestinationPort() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QNetworkDatagram_destinationPort(this.h))
}

func (this *QNetworkDatagram) SetSender(address *QHostAddress) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(address)
	C.QNetworkDatagram_setSender(this.h, address.cPointer())
}

func (this *QNetworkDatagram) SetDestination(address *QHostAddress, port uint16) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(address)
	C.QNetworkDatagram_setDestination(this.h, address.cPointer(), (C.ushort)(port))
}

func (this *QNetworkDatagram) HopLimit() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QNetworkDatagram_hopLimit(this.h))
}

func (this *QNetworkDatagram) SetHopLimit(count int) {
	defer runtime.KeepAlive(this)
	C.QNetworkDatagram_setHopLimit(this.h, (C.int)(count))
}

func (this *QNetworkDatagram) Data() []byte {
	defer runtime.KeepAlive(this)
	var _bytearray C.struct_miqt_string = C.QNetworkDatagram_data(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QNetworkDatagram) SetData(data []byte) {
	defer runtime.KeepAlive(this)
	data_alias := C.struct_miqt_string{}
	if len(data) > 0 {
		data_alias.data = (*C.char)(unsafe.Pointer(&data[0]))
	} else {
		data_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	data_alias.len = C.size_t(len(data))
	C.QNetworkDatagram_setData(this.h, data_alias)
}

func (this *QNetworkDatagram) MakeReply(payload []byte) *QNetworkDatagram {
	defer runtime.KeepAlive(this)
	payload_alias := C.struct_miqt_string{}
	if len(payload) > 0 {
		payload_alias.data = (*C.char)(unsafe.Pointer(&payload[0]))
	} else {
		payload_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	payload_alias.len = C.size_t(len(payload))
	_goptr := newQNetworkDatagram(C.QNetworkDatagram_makeReply(this.h, payload_alias))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QNetworkDatagram) SetSender2(address *QHostAddress, port uint16) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(address)
	C.QNetworkDatagram_setSender2(this.h, address.cPointer(), (C.ushort)(port))
}

// Delete this object from C++ memory.
func (this *QNetworkDatagram) Delete() {
	C.QNetworkDatagram_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QNetworkDatagram) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QNetworkDatagram_delete((*C.QNetworkDatagram)(gc[0]))
	})
	this.miqtSetGC(gc)
}
