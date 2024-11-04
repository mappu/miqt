package network

/*

#include "gen_qudpsocket.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QUdpSocket struct {
	h *C.QUdpSocket
	*QAbstractSocket
}

func (this *QUdpSocket) cPointer() *C.QUdpSocket {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QUdpSocket) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQUdpSocket(h *C.QUdpSocket) *QUdpSocket {
	if h == nil {
		return nil
	}
	return &QUdpSocket{h: h, QAbstractSocket: UnsafeNewQAbstractSocket(unsafe.Pointer(h))}
}

func UnsafeNewQUdpSocket(h unsafe.Pointer) *QUdpSocket {
	return newQUdpSocket((*C.QUdpSocket)(h))
}

// NewQUdpSocket constructs a new QUdpSocket object.
func NewQUdpSocket() *QUdpSocket {
	ret := C.QUdpSocket_new()
	return newQUdpSocket(ret)
}

// NewQUdpSocket2 constructs a new QUdpSocket object.
func NewQUdpSocket2(parent *qt.QObject) *QUdpSocket {
	ret := C.QUdpSocket_new2((*C.QObject)(parent.UnsafePointer()))
	return newQUdpSocket(ret)
}

func (this *QUdpSocket) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QUdpSocket_MetaObject(this.h)))
}

func (this *QUdpSocket) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QUdpSocket_Metacast(this.h, param1_Cstring))
}

func QUdpSocket_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QUdpSocket_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QUdpSocket_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QUdpSocket_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QUdpSocket) JoinMulticastGroup(groupAddress *QHostAddress) bool {
	return (bool)(C.QUdpSocket_JoinMulticastGroup(this.h, groupAddress.cPointer()))
}

func (this *QUdpSocket) JoinMulticastGroup2(groupAddress *QHostAddress, iface *QNetworkInterface) bool {
	return (bool)(C.QUdpSocket_JoinMulticastGroup2(this.h, groupAddress.cPointer(), iface.cPointer()))
}

func (this *QUdpSocket) LeaveMulticastGroup(groupAddress *QHostAddress) bool {
	return (bool)(C.QUdpSocket_LeaveMulticastGroup(this.h, groupAddress.cPointer()))
}

func (this *QUdpSocket) LeaveMulticastGroup2(groupAddress *QHostAddress, iface *QNetworkInterface) bool {
	return (bool)(C.QUdpSocket_LeaveMulticastGroup2(this.h, groupAddress.cPointer(), iface.cPointer()))
}

func (this *QUdpSocket) MulticastInterface() *QNetworkInterface {
	_ret := C.QUdpSocket_MulticastInterface(this.h)
	_goptr := newQNetworkInterface(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QUdpSocket) SetMulticastInterface(iface *QNetworkInterface) {
	C.QUdpSocket_SetMulticastInterface(this.h, iface.cPointer())
}

func (this *QUdpSocket) HasPendingDatagrams() bool {
	return (bool)(C.QUdpSocket_HasPendingDatagrams(this.h))
}

func (this *QUdpSocket) PendingDatagramSize() int64 {
	return (int64)(C.QUdpSocket_PendingDatagramSize(this.h))
}

func (this *QUdpSocket) ReceiveDatagram() *QNetworkDatagram {
	_ret := C.QUdpSocket_ReceiveDatagram(this.h)
	_goptr := newQNetworkDatagram(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QUdpSocket) ReadDatagram(data string, maxlen int64) int64 {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))
	return (int64)(C.QUdpSocket_ReadDatagram(this.h, data_Cstring, (C.longlong)(maxlen)))
}

func (this *QUdpSocket) WriteDatagram(datagram *QNetworkDatagram) int64 {
	return (int64)(C.QUdpSocket_WriteDatagram(this.h, datagram.cPointer()))
}

func (this *QUdpSocket) WriteDatagram2(data string, lenVal int64, host *QHostAddress, port uint16) int64 {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))
	return (int64)(C.QUdpSocket_WriteDatagram2(this.h, data_Cstring, (C.longlong)(lenVal), host.cPointer(), (C.uint16_t)(port)))
}

func (this *QUdpSocket) WriteDatagram3(datagram []byte, host *QHostAddress, port uint16) int64 {
	datagram_alias := C.struct_miqt_string{}
	datagram_alias.data = (*C.char)(unsafe.Pointer(&datagram[0]))
	datagram_alias.len = C.size_t(len(datagram))
	return (int64)(C.QUdpSocket_WriteDatagram3(this.h, datagram_alias, host.cPointer(), (C.uint16_t)(port)))
}

func QUdpSocket_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QUdpSocket_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QUdpSocket_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QUdpSocket_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QUdpSocket_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QUdpSocket_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QUdpSocket_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QUdpSocket_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QUdpSocket) ReceiveDatagram1(maxSize int64) *QNetworkDatagram {
	_ret := C.QUdpSocket_ReceiveDatagram1(this.h, (C.longlong)(maxSize))
	_goptr := newQNetworkDatagram(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QUdpSocket) ReadDatagram3(data string, maxlen int64, host *QHostAddress) int64 {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))
	return (int64)(C.QUdpSocket_ReadDatagram3(this.h, data_Cstring, (C.longlong)(maxlen), host.cPointer()))
}

func (this *QUdpSocket) ReadDatagram4(data string, maxlen int64, host *QHostAddress, port *uint16) int64 {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))
	return (int64)(C.QUdpSocket_ReadDatagram4(this.h, data_Cstring, (C.longlong)(maxlen), host.cPointer(), (*C.uint16_t)(unsafe.Pointer(port))))
}

// Delete this object from C++ memory.
func (this *QUdpSocket) Delete() {
	C.QUdpSocket_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QUdpSocket) GoGC() {
	runtime.SetFinalizer(this, func(this *QUdpSocket) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
