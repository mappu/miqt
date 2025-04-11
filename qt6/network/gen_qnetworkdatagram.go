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
	h *C.QNetworkDatagram
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

	return newQNetworkDatagram(C.QNetworkDatagram_new3(other.cPointer()))
}

// NewQNetworkDatagram4 constructs a new QNetworkDatagram object.
func NewQNetworkDatagram4(data []byte, destinationAddress *QHostAddress) *QNetworkDatagram {
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
	C.QNetworkDatagram_operatorAssign(this.h, other.cPointer())
}

func (this *QNetworkDatagram) Swap(other *QNetworkDatagram) {
	C.QNetworkDatagram_swap(this.h, other.cPointer())
}

func (this *QNetworkDatagram) Clear() {
	C.QNetworkDatagram_clear(this.h)
}

func (this *QNetworkDatagram) IsValid() bool {
	return (bool)(C.QNetworkDatagram_isValid(this.h))
}

func (this *QNetworkDatagram) IsNull() bool {
	return (bool)(C.QNetworkDatagram_isNull(this.h))
}

func (this *QNetworkDatagram) InterfaceIndex() uint {
	return (uint)(C.QNetworkDatagram_interfaceIndex(this.h))
}

func (this *QNetworkDatagram) SetInterfaceIndex(index uint) {
	C.QNetworkDatagram_setInterfaceIndex(this.h, (C.uint)(index))
}

func (this *QNetworkDatagram) SenderAddress() *QHostAddress {
	_goptr := newQHostAddress(C.QNetworkDatagram_senderAddress(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QNetworkDatagram) DestinationAddress() *QHostAddress {
	_goptr := newQHostAddress(C.QNetworkDatagram_destinationAddress(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QNetworkDatagram) SenderPort() int {
	return (int)(C.QNetworkDatagram_senderPort(this.h))
}

func (this *QNetworkDatagram) DestinationPort() int {
	return (int)(C.QNetworkDatagram_destinationPort(this.h))
}

func (this *QNetworkDatagram) SetSender(address *QHostAddress) {
	C.QNetworkDatagram_setSender(this.h, address.cPointer())
}

func (this *QNetworkDatagram) SetDestination(address *QHostAddress, port uint16) {
	C.QNetworkDatagram_setDestination(this.h, address.cPointer(), (C.ushort)(port))
}

func (this *QNetworkDatagram) HopLimit() int {
	return (int)(C.QNetworkDatagram_hopLimit(this.h))
}

func (this *QNetworkDatagram) SetHopLimit(count int) {
	C.QNetworkDatagram_setHopLimit(this.h, (C.int)(count))
}

func (this *QNetworkDatagram) Data() []byte {
	var _bytearray C.struct_miqt_string = C.QNetworkDatagram_data(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QNetworkDatagram) SetData(data []byte) {
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
	C.QNetworkDatagram_setSender2(this.h, address.cPointer(), (C.ushort)(port))
}

// Delete this object from C++ memory.
func (this *QNetworkDatagram) Delete() {
	C.QNetworkDatagram_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QNetworkDatagram) GoGC() {
	runtime.SetFinalizer(this, func(this *QNetworkDatagram) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
