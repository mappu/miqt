package network

/*

#include "gen_qudpsocket.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
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

// newQUdpSocket constructs the type using only CGO pointers.
func newQUdpSocket(h *C.QUdpSocket) *QUdpSocket {
	if h == nil {
		return nil
	}
	var outptr_QAbstractSocket *C.QAbstractSocket = nil
	C.QUdpSocket_virtbase(h, &outptr_QAbstractSocket)

	return &QUdpSocket{h: h,
		QAbstractSocket: newQAbstractSocket(outptr_QAbstractSocket)}
}

// UnsafeNewQUdpSocket constructs the type using only unsafe pointers.
func UnsafeNewQUdpSocket(h unsafe.Pointer) *QUdpSocket {
	return newQUdpSocket((*C.QUdpSocket)(h))
}

// NewQUdpSocket constructs a new QUdpSocket object.
func NewQUdpSocket() *QUdpSocket {

	return newQUdpSocket(C.QUdpSocket_new())
}

// NewQUdpSocket2 constructs a new QUdpSocket object.
func NewQUdpSocket2(parent *qt.QObject) *QUdpSocket {

	return newQUdpSocket(C.QUdpSocket_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QUdpSocket) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QUdpSocket_metaObject(this.h)))
}

func (this *QUdpSocket) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QUdpSocket_metacast(this.h, param1_Cstring))
}

func QUdpSocket_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QUdpSocket_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QUdpSocket_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QUdpSocket_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QUdpSocket) JoinMulticastGroup(groupAddress *QHostAddress) bool {
	return (bool)(C.QUdpSocket_joinMulticastGroup(this.h, groupAddress.cPointer()))
}

func (this *QUdpSocket) JoinMulticastGroup2(groupAddress *QHostAddress, iface *QNetworkInterface) bool {
	return (bool)(C.QUdpSocket_joinMulticastGroup2(this.h, groupAddress.cPointer(), iface.cPointer()))
}

func (this *QUdpSocket) LeaveMulticastGroup(groupAddress *QHostAddress) bool {
	return (bool)(C.QUdpSocket_leaveMulticastGroup(this.h, groupAddress.cPointer()))
}

func (this *QUdpSocket) LeaveMulticastGroup2(groupAddress *QHostAddress, iface *QNetworkInterface) bool {
	return (bool)(C.QUdpSocket_leaveMulticastGroup2(this.h, groupAddress.cPointer(), iface.cPointer()))
}

func (this *QUdpSocket) MulticastInterface() *QNetworkInterface {
	_goptr := newQNetworkInterface(C.QUdpSocket_multicastInterface(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QUdpSocket) SetMulticastInterface(iface *QNetworkInterface) {
	C.QUdpSocket_setMulticastInterface(this.h, iface.cPointer())
}

func (this *QUdpSocket) HasPendingDatagrams() bool {
	return (bool)(C.QUdpSocket_hasPendingDatagrams(this.h))
}

func (this *QUdpSocket) PendingDatagramSize() int64 {
	return (int64)(C.QUdpSocket_pendingDatagramSize(this.h))
}

func (this *QUdpSocket) ReceiveDatagram() *QNetworkDatagram {
	_goptr := newQNetworkDatagram(C.QUdpSocket_receiveDatagram(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QUdpSocket) ReadDatagram(data string, maxlen int64) int64 {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))
	return (int64)(C.QUdpSocket_readDatagram(this.h, data_Cstring, (C.longlong)(maxlen)))
}

func (this *QUdpSocket) WriteDatagram(datagram *QNetworkDatagram) int64 {
	return (int64)(C.QUdpSocket_writeDatagram(this.h, datagram.cPointer()))
}

func (this *QUdpSocket) WriteDatagram2(data string, lenVal int64, host *QHostAddress, port uint16) int64 {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))
	return (int64)(C.QUdpSocket_writeDatagram2(this.h, data_Cstring, (C.longlong)(lenVal), host.cPointer(), (C.uint16_t)(port)))
}

func (this *QUdpSocket) WriteDatagram3(datagram []byte, host *QHostAddress, port uint16) int64 {
	datagram_alias := C.struct_miqt_string{}
	if len(datagram) > 0 {
		datagram_alias.data = (*C.char)(unsafe.Pointer(&datagram[0]))
	} else {
		datagram_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	datagram_alias.len = C.size_t(len(datagram))
	return (int64)(C.QUdpSocket_writeDatagram3(this.h, datagram_alias, host.cPointer(), (C.uint16_t)(port)))
}

func QUdpSocket_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QUdpSocket_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QUdpSocket_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QUdpSocket_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QUdpSocket_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QUdpSocket_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QUdpSocket_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QUdpSocket_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QUdpSocket) ReceiveDatagramWithMaxSize(maxSize int64) *QNetworkDatagram {
	_goptr := newQNetworkDatagram(C.QUdpSocket_receiveDatagramWithMaxSize(this.h, (C.longlong)(maxSize)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QUdpSocket) ReadDatagram2(data string, maxlen int64, host *QHostAddress) int64 {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))
	return (int64)(C.QUdpSocket_readDatagram2(this.h, data_Cstring, (C.longlong)(maxlen), host.cPointer()))
}

func (this *QUdpSocket) ReadDatagram3(data string, maxlen int64, host *QHostAddress, port *uint16) int64 {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))
	return (int64)(C.QUdpSocket_readDatagram3(this.h, data_Cstring, (C.longlong)(maxlen), host.cPointer(), (*C.uint16_t)(unsafe.Pointer(port))))
}

// SetSocketState can only be called from a QUdpSocket that was directly constructed.
func (this *QUdpSocket) SetSocketState(state QAbstractSocket__SocketState) {

	var _dynamic_cast_ok C.bool = false
	C.QUdpSocket_protectedbase_setSocketState(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(state))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SetSocketError can only be called from a QUdpSocket that was directly constructed.
func (this *QUdpSocket) SetSocketError(socketError QAbstractSocket__SocketError) {

	var _dynamic_cast_ok C.bool = false
	C.QUdpSocket_protectedbase_setSocketError(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(socketError))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SetLocalPort can only be called from a QUdpSocket that was directly constructed.
func (this *QUdpSocket) SetLocalPort(port uint16) {

	var _dynamic_cast_ok C.bool = false
	C.QUdpSocket_protectedbase_setLocalPort(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.uint16_t)(port))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SetLocalAddress can only be called from a QUdpSocket that was directly constructed.
func (this *QUdpSocket) SetLocalAddress(address *QHostAddress) {

	var _dynamic_cast_ok C.bool = false
	C.QUdpSocket_protectedbase_setLocalAddress(&_dynamic_cast_ok, unsafe.Pointer(this.h), address.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SetPeerPort can only be called from a QUdpSocket that was directly constructed.
func (this *QUdpSocket) SetPeerPort(port uint16) {

	var _dynamic_cast_ok C.bool = false
	C.QUdpSocket_protectedbase_setPeerPort(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.uint16_t)(port))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SetPeerAddress can only be called from a QUdpSocket that was directly constructed.
func (this *QUdpSocket) SetPeerAddress(address *QHostAddress) {

	var _dynamic_cast_ok C.bool = false
	C.QUdpSocket_protectedbase_setPeerAddress(&_dynamic_cast_ok, unsafe.Pointer(this.h), address.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SetPeerName can only be called from a QUdpSocket that was directly constructed.
func (this *QUdpSocket) SetPeerName(name string) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))

	var _dynamic_cast_ok C.bool = false
	C.QUdpSocket_protectedbase_setPeerName(&_dynamic_cast_ok, unsafe.Pointer(this.h), name_ms)

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SetOpenMode can only be called from a QUdpSocket that was directly constructed.
func (this *QUdpSocket) SetOpenMode(openMode qt.QIODevice__OpenModeFlag) {

	var _dynamic_cast_ok C.bool = false
	C.QUdpSocket_protectedbase_setOpenMode(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(openMode))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SetErrorString can only be called from a QUdpSocket that was directly constructed.
func (this *QUdpSocket) SetErrorString(errorString string) {
	errorString_ms := C.struct_miqt_string{}
	errorString_ms.data = C.CString(errorString)
	errorString_ms.len = C.size_t(len(errorString))
	defer C.free(unsafe.Pointer(errorString_ms.data))

	var _dynamic_cast_ok C.bool = false
	C.QUdpSocket_protectedbase_setErrorString(&_dynamic_cast_ok, unsafe.Pointer(this.h), errorString_ms)

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Sender can only be called from a QUdpSocket that was directly constructed.
func (this *QUdpSocket) Sender() *qt.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt.UnsafeNewQObject(unsafe.Pointer(C.QUdpSocket_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QUdpSocket that was directly constructed.
func (this *QUdpSocket) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QUdpSocket_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QUdpSocket that was directly constructed.
func (this *QUdpSocket) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QUdpSocket_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QUdpSocket that was directly constructed.
func (this *QUdpSocket) IsSignalConnected(signal *qt.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QUdpSocket_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QUdpSocket) callVirtualBase_Resume() {

	C.QUdpSocket_virtualbase_resume(unsafe.Pointer(this.h))

}
func (this *QUdpSocket) OnResume(slot func(super func())) {
	ok := C.QUdpSocket_override_virtual_resume(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUdpSocket_resume
func miqt_exec_callback_QUdpSocket_resume(self *C.QUdpSocket, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QUdpSocket{h: self}).callVirtualBase_Resume)

}

func (this *QUdpSocket) callVirtualBase_ConnectToHost(hostName string, port uint16, mode qt.QIODevice__OpenModeFlag, protocol QAbstractSocket__NetworkLayerProtocol) {
	hostName_ms := C.struct_miqt_string{}
	hostName_ms.data = C.CString(hostName)
	hostName_ms.len = C.size_t(len(hostName))
	defer C.free(unsafe.Pointer(hostName_ms.data))

	C.QUdpSocket_virtualbase_connectToHost(unsafe.Pointer(this.h), hostName_ms, (C.uint16_t)(port), (C.int)(mode), (C.int)(protocol))

}
func (this *QUdpSocket) OnConnectToHost(slot func(super func(hostName string, port uint16, mode qt.QIODevice__OpenModeFlag, protocol QAbstractSocket__NetworkLayerProtocol), hostName string, port uint16, mode qt.QIODevice__OpenModeFlag, protocol QAbstractSocket__NetworkLayerProtocol)) {
	ok := C.QUdpSocket_override_virtual_connectToHost(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUdpSocket_connectToHost
func miqt_exec_callback_QUdpSocket_connectToHost(self *C.QUdpSocket, cb C.intptr_t, hostName C.struct_miqt_string, port C.uint16_t, mode C.int, protocol C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(hostName string, port uint16, mode qt.QIODevice__OpenModeFlag, protocol QAbstractSocket__NetworkLayerProtocol), hostName string, port uint16, mode qt.QIODevice__OpenModeFlag, protocol QAbstractSocket__NetworkLayerProtocol))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var hostName_ms C.struct_miqt_string = hostName
	hostName_ret := C.GoStringN(hostName_ms.data, C.int(int64(hostName_ms.len)))
	C.free(unsafe.Pointer(hostName_ms.data))
	slotval1 := hostName_ret
	slotval2 := (uint16)(port)

	slotval3 := (qt.QIODevice__OpenModeFlag)(mode)

	slotval4 := (QAbstractSocket__NetworkLayerProtocol)(protocol)

	gofunc((&QUdpSocket{h: self}).callVirtualBase_ConnectToHost, slotval1, slotval2, slotval3, slotval4)

}

func (this *QUdpSocket) callVirtualBase_DisconnectFromHost() {

	C.QUdpSocket_virtualbase_disconnectFromHost(unsafe.Pointer(this.h))

}
func (this *QUdpSocket) OnDisconnectFromHost(slot func(super func())) {
	ok := C.QUdpSocket_override_virtual_disconnectFromHost(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUdpSocket_disconnectFromHost
func miqt_exec_callback_QUdpSocket_disconnectFromHost(self *C.QUdpSocket, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QUdpSocket{h: self}).callVirtualBase_DisconnectFromHost)

}

func (this *QUdpSocket) callVirtualBase_BytesAvailable() int64 {

	return (int64)(C.QUdpSocket_virtualbase_bytesAvailable(unsafe.Pointer(this.h)))

}
func (this *QUdpSocket) OnBytesAvailable(slot func(super func() int64) int64) {
	ok := C.QUdpSocket_override_virtual_bytesAvailable(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUdpSocket_bytesAvailable
func miqt_exec_callback_QUdpSocket_bytesAvailable(self *C.QUdpSocket, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QUdpSocket{h: self}).callVirtualBase_BytesAvailable)

	return (C.longlong)(virtualReturn)

}

func (this *QUdpSocket) callVirtualBase_BytesToWrite() int64 {

	return (int64)(C.QUdpSocket_virtualbase_bytesToWrite(unsafe.Pointer(this.h)))

}
func (this *QUdpSocket) OnBytesToWrite(slot func(super func() int64) int64) {
	ok := C.QUdpSocket_override_virtual_bytesToWrite(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUdpSocket_bytesToWrite
func miqt_exec_callback_QUdpSocket_bytesToWrite(self *C.QUdpSocket, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QUdpSocket{h: self}).callVirtualBase_BytesToWrite)

	return (C.longlong)(virtualReturn)

}

func (this *QUdpSocket) callVirtualBase_CanReadLine() bool {

	return (bool)(C.QUdpSocket_virtualbase_canReadLine(unsafe.Pointer(this.h)))

}
func (this *QUdpSocket) OnCanReadLine(slot func(super func() bool) bool) {
	ok := C.QUdpSocket_override_virtual_canReadLine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUdpSocket_canReadLine
func miqt_exec_callback_QUdpSocket_canReadLine(self *C.QUdpSocket, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QUdpSocket{h: self}).callVirtualBase_CanReadLine)

	return (C.bool)(virtualReturn)

}

func (this *QUdpSocket) callVirtualBase_SetReadBufferSize(size int64) {

	C.QUdpSocket_virtualbase_setReadBufferSize(unsafe.Pointer(this.h), (C.longlong)(size))

}
func (this *QUdpSocket) OnSetReadBufferSize(slot func(super func(size int64), size int64)) {
	ok := C.QUdpSocket_override_virtual_setReadBufferSize(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUdpSocket_setReadBufferSize
func miqt_exec_callback_QUdpSocket_setReadBufferSize(self *C.QUdpSocket, cb C.intptr_t, size C.longlong) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(size int64), size int64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int64)(size)

	gofunc((&QUdpSocket{h: self}).callVirtualBase_SetReadBufferSize, slotval1)

}

func (this *QUdpSocket) callVirtualBase_SocketDescriptor() uintptr {

	return (uintptr)(C.QUdpSocket_virtualbase_socketDescriptor(unsafe.Pointer(this.h)))

}
func (this *QUdpSocket) OnSocketDescriptor(slot func(super func() uintptr) uintptr) {
	ok := C.QUdpSocket_override_virtual_socketDescriptor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUdpSocket_socketDescriptor
func miqt_exec_callback_QUdpSocket_socketDescriptor(self *C.QUdpSocket, cb C.intptr_t) C.intptr_t {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() uintptr) uintptr)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QUdpSocket{h: self}).callVirtualBase_SocketDescriptor)

	return (C.intptr_t)(virtualReturn)

}

func (this *QUdpSocket) callVirtualBase_SetSocketDescriptor(socketDescriptor uintptr, state QAbstractSocket__SocketState, openMode qt.QIODevice__OpenModeFlag) bool {

	return (bool)(C.QUdpSocket_virtualbase_setSocketDescriptor(unsafe.Pointer(this.h), (C.intptr_t)(socketDescriptor), (C.int)(state), (C.int)(openMode)))

}
func (this *QUdpSocket) OnSetSocketDescriptor(slot func(super func(socketDescriptor uintptr, state QAbstractSocket__SocketState, openMode qt.QIODevice__OpenModeFlag) bool, socketDescriptor uintptr, state QAbstractSocket__SocketState, openMode qt.QIODevice__OpenModeFlag) bool) {
	ok := C.QUdpSocket_override_virtual_setSocketDescriptor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUdpSocket_setSocketDescriptor
func miqt_exec_callback_QUdpSocket_setSocketDescriptor(self *C.QUdpSocket, cb C.intptr_t, socketDescriptor C.intptr_t, state C.int, openMode C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(socketDescriptor uintptr, state QAbstractSocket__SocketState, openMode qt.QIODevice__OpenModeFlag) bool, socketDescriptor uintptr, state QAbstractSocket__SocketState, openMode qt.QIODevice__OpenModeFlag) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (uintptr)(socketDescriptor)

	slotval2 := (QAbstractSocket__SocketState)(state)

	slotval3 := (qt.QIODevice__OpenModeFlag)(openMode)

	virtualReturn := gofunc((&QUdpSocket{h: self}).callVirtualBase_SetSocketDescriptor, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QUdpSocket) callVirtualBase_SetSocketOption(option QAbstractSocket__SocketOption, value *qt.QVariant) {

	C.QUdpSocket_virtualbase_setSocketOption(unsafe.Pointer(this.h), (C.int)(option), (*C.QVariant)(value.UnsafePointer()))

}
func (this *QUdpSocket) OnSetSocketOption(slot func(super func(option QAbstractSocket__SocketOption, value *qt.QVariant), option QAbstractSocket__SocketOption, value *qt.QVariant)) {
	ok := C.QUdpSocket_override_virtual_setSocketOption(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUdpSocket_setSocketOption
func miqt_exec_callback_QUdpSocket_setSocketOption(self *C.QUdpSocket, cb C.intptr_t, option C.int, value *C.QVariant) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(option QAbstractSocket__SocketOption, value *qt.QVariant), option QAbstractSocket__SocketOption, value *qt.QVariant))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAbstractSocket__SocketOption)(option)

	slotval2 := qt.UnsafeNewQVariant(unsafe.Pointer(value))

	gofunc((&QUdpSocket{h: self}).callVirtualBase_SetSocketOption, slotval1, slotval2)

}

func (this *QUdpSocket) callVirtualBase_SocketOption(option QAbstractSocket__SocketOption) *qt.QVariant {

	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QUdpSocket_virtualbase_socketOption(unsafe.Pointer(this.h), (C.int)(option))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QUdpSocket) OnSocketOption(slot func(super func(option QAbstractSocket__SocketOption) *qt.QVariant, option QAbstractSocket__SocketOption) *qt.QVariant) {
	ok := C.QUdpSocket_override_virtual_socketOption(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUdpSocket_socketOption
func miqt_exec_callback_QUdpSocket_socketOption(self *C.QUdpSocket, cb C.intptr_t, option C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(option QAbstractSocket__SocketOption) *qt.QVariant, option QAbstractSocket__SocketOption) *qt.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAbstractSocket__SocketOption)(option)

	virtualReturn := gofunc((&QUdpSocket{h: self}).callVirtualBase_SocketOption, slotval1)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}

func (this *QUdpSocket) callVirtualBase_Close() {

	C.QUdpSocket_virtualbase_close(unsafe.Pointer(this.h))

}
func (this *QUdpSocket) OnClose(slot func(super func())) {
	ok := C.QUdpSocket_override_virtual_close(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUdpSocket_close
func miqt_exec_callback_QUdpSocket_close(self *C.QUdpSocket, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QUdpSocket{h: self}).callVirtualBase_Close)

}

func (this *QUdpSocket) callVirtualBase_IsSequential() bool {

	return (bool)(C.QUdpSocket_virtualbase_isSequential(unsafe.Pointer(this.h)))

}
func (this *QUdpSocket) OnIsSequential(slot func(super func() bool) bool) {
	ok := C.QUdpSocket_override_virtual_isSequential(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUdpSocket_isSequential
func miqt_exec_callback_QUdpSocket_isSequential(self *C.QUdpSocket, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QUdpSocket{h: self}).callVirtualBase_IsSequential)

	return (C.bool)(virtualReturn)

}

func (this *QUdpSocket) callVirtualBase_AtEnd() bool {

	return (bool)(C.QUdpSocket_virtualbase_atEnd(unsafe.Pointer(this.h)))

}
func (this *QUdpSocket) OnAtEnd(slot func(super func() bool) bool) {
	ok := C.QUdpSocket_override_virtual_atEnd(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUdpSocket_atEnd
func miqt_exec_callback_QUdpSocket_atEnd(self *C.QUdpSocket, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QUdpSocket{h: self}).callVirtualBase_AtEnd)

	return (C.bool)(virtualReturn)

}

func (this *QUdpSocket) callVirtualBase_WaitForConnected(msecs int) bool {

	return (bool)(C.QUdpSocket_virtualbase_waitForConnected(unsafe.Pointer(this.h), (C.int)(msecs)))

}
func (this *QUdpSocket) OnWaitForConnected(slot func(super func(msecs int) bool, msecs int) bool) {
	ok := C.QUdpSocket_override_virtual_waitForConnected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUdpSocket_waitForConnected
func miqt_exec_callback_QUdpSocket_waitForConnected(self *C.QUdpSocket, cb C.intptr_t, msecs C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(msecs int) bool, msecs int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(msecs)

	virtualReturn := gofunc((&QUdpSocket{h: self}).callVirtualBase_WaitForConnected, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QUdpSocket) callVirtualBase_WaitForReadyRead(msecs int) bool {

	return (bool)(C.QUdpSocket_virtualbase_waitForReadyRead(unsafe.Pointer(this.h), (C.int)(msecs)))

}
func (this *QUdpSocket) OnWaitForReadyRead(slot func(super func(msecs int) bool, msecs int) bool) {
	ok := C.QUdpSocket_override_virtual_waitForReadyRead(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUdpSocket_waitForReadyRead
func miqt_exec_callback_QUdpSocket_waitForReadyRead(self *C.QUdpSocket, cb C.intptr_t, msecs C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(msecs int) bool, msecs int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(msecs)

	virtualReturn := gofunc((&QUdpSocket{h: self}).callVirtualBase_WaitForReadyRead, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QUdpSocket) callVirtualBase_WaitForBytesWritten(msecs int) bool {

	return (bool)(C.QUdpSocket_virtualbase_waitForBytesWritten(unsafe.Pointer(this.h), (C.int)(msecs)))

}
func (this *QUdpSocket) OnWaitForBytesWritten(slot func(super func(msecs int) bool, msecs int) bool) {
	ok := C.QUdpSocket_override_virtual_waitForBytesWritten(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUdpSocket_waitForBytesWritten
func miqt_exec_callback_QUdpSocket_waitForBytesWritten(self *C.QUdpSocket, cb C.intptr_t, msecs C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(msecs int) bool, msecs int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(msecs)

	virtualReturn := gofunc((&QUdpSocket{h: self}).callVirtualBase_WaitForBytesWritten, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QUdpSocket) callVirtualBase_WaitForDisconnected(msecs int) bool {

	return (bool)(C.QUdpSocket_virtualbase_waitForDisconnected(unsafe.Pointer(this.h), (C.int)(msecs)))

}
func (this *QUdpSocket) OnWaitForDisconnected(slot func(super func(msecs int) bool, msecs int) bool) {
	ok := C.QUdpSocket_override_virtual_waitForDisconnected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUdpSocket_waitForDisconnected
func miqt_exec_callback_QUdpSocket_waitForDisconnected(self *C.QUdpSocket, cb C.intptr_t, msecs C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(msecs int) bool, msecs int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(msecs)

	virtualReturn := gofunc((&QUdpSocket{h: self}).callVirtualBase_WaitForDisconnected, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QUdpSocket) callVirtualBase_ReadData(data string, maxlen int64) int64 {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))

	return (int64)(C.QUdpSocket_virtualbase_readData(unsafe.Pointer(this.h), data_Cstring, (C.longlong)(maxlen)))

}
func (this *QUdpSocket) OnReadData(slot func(super func(data string, maxlen int64) int64, data string, maxlen int64) int64) {
	ok := C.QUdpSocket_override_virtual_readData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUdpSocket_readData
func miqt_exec_callback_QUdpSocket_readData(self *C.QUdpSocket, cb C.intptr_t, data *C.char, maxlen C.longlong) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(data string, maxlen int64) int64, data string, maxlen int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	data_ret := data
	slotval1 := C.GoString(data_ret)

	slotval2 := (int64)(maxlen)

	virtualReturn := gofunc((&QUdpSocket{h: self}).callVirtualBase_ReadData, slotval1, slotval2)

	return (C.longlong)(virtualReturn)

}

func (this *QUdpSocket) callVirtualBase_ReadLineData(data string, maxlen int64) int64 {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))

	return (int64)(C.QUdpSocket_virtualbase_readLineData(unsafe.Pointer(this.h), data_Cstring, (C.longlong)(maxlen)))

}
func (this *QUdpSocket) OnReadLineData(slot func(super func(data string, maxlen int64) int64, data string, maxlen int64) int64) {
	ok := C.QUdpSocket_override_virtual_readLineData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUdpSocket_readLineData
func miqt_exec_callback_QUdpSocket_readLineData(self *C.QUdpSocket, cb C.intptr_t, data *C.char, maxlen C.longlong) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(data string, maxlen int64) int64, data string, maxlen int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	data_ret := data
	slotval1 := C.GoString(data_ret)

	slotval2 := (int64)(maxlen)

	virtualReturn := gofunc((&QUdpSocket{h: self}).callVirtualBase_ReadLineData, slotval1, slotval2)

	return (C.longlong)(virtualReturn)

}

func (this *QUdpSocket) callVirtualBase_WriteData(data string, lenVal int64) int64 {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))

	return (int64)(C.QUdpSocket_virtualbase_writeData(unsafe.Pointer(this.h), data_Cstring, (C.longlong)(lenVal)))

}
func (this *QUdpSocket) OnWriteData(slot func(super func(data string, lenVal int64) int64, data string, lenVal int64) int64) {
	ok := C.QUdpSocket_override_virtual_writeData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUdpSocket_writeData
func miqt_exec_callback_QUdpSocket_writeData(self *C.QUdpSocket, cb C.intptr_t, data *C.const_char, lenVal C.longlong) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(data string, lenVal int64) int64, data string, lenVal int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	data_ret := data
	slotval1 := C.GoString(data_ret)

	slotval2 := (int64)(lenVal)

	virtualReturn := gofunc((&QUdpSocket{h: self}).callVirtualBase_WriteData, slotval1, slotval2)

	return (C.longlong)(virtualReturn)

}

func (this *QUdpSocket) callVirtualBase_Open(mode qt.QIODevice__OpenModeFlag) bool {

	return (bool)(C.QUdpSocket_virtualbase_open(unsafe.Pointer(this.h), (C.int)(mode)))

}
func (this *QUdpSocket) OnOpen(slot func(super func(mode qt.QIODevice__OpenModeFlag) bool, mode qt.QIODevice__OpenModeFlag) bool) {
	ok := C.QUdpSocket_override_virtual_open(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUdpSocket_open
func miqt_exec_callback_QUdpSocket_open(self *C.QUdpSocket, cb C.intptr_t, mode C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(mode qt.QIODevice__OpenModeFlag) bool, mode qt.QIODevice__OpenModeFlag) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt.QIODevice__OpenModeFlag)(mode)

	virtualReturn := gofunc((&QUdpSocket{h: self}).callVirtualBase_Open, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QUdpSocket) callVirtualBase_Pos() int64 {

	return (int64)(C.QUdpSocket_virtualbase_pos(unsafe.Pointer(this.h)))

}
func (this *QUdpSocket) OnPos(slot func(super func() int64) int64) {
	ok := C.QUdpSocket_override_virtual_pos(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUdpSocket_pos
func miqt_exec_callback_QUdpSocket_pos(self *C.QUdpSocket, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QUdpSocket{h: self}).callVirtualBase_Pos)

	return (C.longlong)(virtualReturn)

}

func (this *QUdpSocket) callVirtualBase_Size() int64 {

	return (int64)(C.QUdpSocket_virtualbase_size(unsafe.Pointer(this.h)))

}
func (this *QUdpSocket) OnSize(slot func(super func() int64) int64) {
	ok := C.QUdpSocket_override_virtual_size(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUdpSocket_size
func miqt_exec_callback_QUdpSocket_size(self *C.QUdpSocket, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QUdpSocket{h: self}).callVirtualBase_Size)

	return (C.longlong)(virtualReturn)

}

func (this *QUdpSocket) callVirtualBase_Seek(pos int64) bool {

	return (bool)(C.QUdpSocket_virtualbase_seek(unsafe.Pointer(this.h), (C.longlong)(pos)))

}
func (this *QUdpSocket) OnSeek(slot func(super func(pos int64) bool, pos int64) bool) {
	ok := C.QUdpSocket_override_virtual_seek(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUdpSocket_seek
func miqt_exec_callback_QUdpSocket_seek(self *C.QUdpSocket, cb C.intptr_t, pos C.longlong) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(pos int64) bool, pos int64) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int64)(pos)

	virtualReturn := gofunc((&QUdpSocket{h: self}).callVirtualBase_Seek, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QUdpSocket) callVirtualBase_Reset() bool {

	return (bool)(C.QUdpSocket_virtualbase_reset(unsafe.Pointer(this.h)))

}
func (this *QUdpSocket) OnReset(slot func(super func() bool) bool) {
	ok := C.QUdpSocket_override_virtual_reset(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUdpSocket_reset
func miqt_exec_callback_QUdpSocket_reset(self *C.QUdpSocket, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QUdpSocket{h: self}).callVirtualBase_Reset)

	return (C.bool)(virtualReturn)

}

func (this *QUdpSocket) callVirtualBase_Event(event *qt.QEvent) bool {

	return (bool)(C.QUdpSocket_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QUdpSocket) OnEvent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	ok := C.QUdpSocket_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUdpSocket_event
func miqt_exec_callback_QUdpSocket_event(self *C.QUdpSocket, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QUdpSocket{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QUdpSocket) callVirtualBase_EventFilter(watched *qt.QObject, event *qt.QEvent) bool {

	return (bool)(C.QUdpSocket_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QUdpSocket) OnEventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	ok := C.QUdpSocket_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUdpSocket_eventFilter
func miqt_exec_callback_QUdpSocket_eventFilter(self *C.QUdpSocket, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QUdpSocket{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QUdpSocket) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.QUdpSocket_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QUdpSocket) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	ok := C.QUdpSocket_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUdpSocket_timerEvent
func miqt_exec_callback_QUdpSocket_timerEvent(self *C.QUdpSocket, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QUdpSocket{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QUdpSocket) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QUdpSocket_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QUdpSocket) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	ok := C.QUdpSocket_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUdpSocket_childEvent
func miqt_exec_callback_QUdpSocket_childEvent(self *C.QUdpSocket, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QUdpSocket{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QUdpSocket) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QUdpSocket_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QUdpSocket) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QUdpSocket_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUdpSocket_customEvent
func miqt_exec_callback_QUdpSocket_customEvent(self *C.QUdpSocket, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QUdpSocket{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QUdpSocket) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QUdpSocket_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QUdpSocket) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QUdpSocket_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUdpSocket_connectNotify
func miqt_exec_callback_QUdpSocket_connectNotify(self *C.QUdpSocket, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QUdpSocket{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QUdpSocket) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QUdpSocket_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QUdpSocket) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QUdpSocket_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUdpSocket_disconnectNotify
func miqt_exec_callback_QUdpSocket_disconnectNotify(self *C.QUdpSocket, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QUdpSocket{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QUdpSocket) Delete() {
	C.QUdpSocket_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QUdpSocket) GoGC() {
	runtime.SetFinalizer(this, func(this *QUdpSocket) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
