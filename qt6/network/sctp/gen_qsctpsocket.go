package sctp

/*

#include "gen_qsctpsocket.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"github.com/mappu/miqt/qt6/network"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QSctpSocket struct {
	h *C.QSctpSocket
	*network.QTcpSocket
}

func (this *QSctpSocket) cPointer() *C.QSctpSocket {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QSctpSocket) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQSctpSocket constructs the type using only CGO pointers.
func newQSctpSocket(h *C.QSctpSocket) *QSctpSocket {
	if h == nil {
		return nil
	}
	var outptr_QTcpSocket *C.QTcpSocket = nil
	C.QSctpSocket_virtbase(h, &outptr_QTcpSocket)

	return &QSctpSocket{h: h,
		QTcpSocket: network.UnsafeNewQTcpSocket(unsafe.Pointer(outptr_QTcpSocket))}
}

// UnsafeNewQSctpSocket constructs the type using only unsafe pointers.
func UnsafeNewQSctpSocket(h unsafe.Pointer) *QSctpSocket {
	return newQSctpSocket((*C.QSctpSocket)(h))
}

// NewQSctpSocket constructs a new QSctpSocket object.
func NewQSctpSocket() *QSctpSocket {

	return newQSctpSocket(C.QSctpSocket_new())
}

// NewQSctpSocket2 constructs a new QSctpSocket object.
func NewQSctpSocket2(parent *qt6.QObject) *QSctpSocket {

	return newQSctpSocket(C.QSctpSocket_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QSctpSocket) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QSctpSocket_metaObject(this.h)))
}

func (this *QSctpSocket) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QSctpSocket_metacast(this.h, param1_Cstring))
}

func QSctpSocket_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QSctpSocket_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSctpSocket) Close() {
	C.QSctpSocket_close(this.h)
}

func (this *QSctpSocket) DisconnectFromHost() {
	C.QSctpSocket_disconnectFromHost(this.h)
}

func (this *QSctpSocket) SetMaximumChannelCount(count int) {
	C.QSctpSocket_setMaximumChannelCount(this.h, (C.int)(count))
}

func (this *QSctpSocket) MaximumChannelCount() int {
	return (int)(C.QSctpSocket_maximumChannelCount(this.h))
}

func (this *QSctpSocket) IsInDatagramMode() bool {
	return (bool)(C.QSctpSocket_isInDatagramMode(this.h))
}

func (this *QSctpSocket) ReadDatagram() *network.QNetworkDatagram {
	_goptr := network.UnsafeNewQNetworkDatagram(unsafe.Pointer(C.QSctpSocket_readDatagram(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSctpSocket) WriteDatagram(datagram *network.QNetworkDatagram) bool {
	return (bool)(C.QSctpSocket_writeDatagram(this.h, (*C.QNetworkDatagram)(datagram.UnsafePointer())))
}

func QSctpSocket_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSctpSocket_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSctpSocket_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSctpSocket_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// SetSocketState can only be called from a QSctpSocket that was directly constructed.
func (this *QSctpSocket) SetSocketState(state network.QAbstractSocket__SocketState) {

	var _dynamic_cast_ok C.bool = false
	C.QSctpSocket_protectedbase_setSocketState(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(state))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SetSocketError can only be called from a QSctpSocket that was directly constructed.
func (this *QSctpSocket) SetSocketError(socketError network.QAbstractSocket__SocketError) {

	var _dynamic_cast_ok C.bool = false
	C.QSctpSocket_protectedbase_setSocketError(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(socketError))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SetLocalPort can only be called from a QSctpSocket that was directly constructed.
func (this *QSctpSocket) SetLocalPort(port uint16) {

	var _dynamic_cast_ok C.bool = false
	C.QSctpSocket_protectedbase_setLocalPort(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.ushort)(port))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SetLocalAddress can only be called from a QSctpSocket that was directly constructed.
func (this *QSctpSocket) SetLocalAddress(address *network.QHostAddress) {

	var _dynamic_cast_ok C.bool = false
	C.QSctpSocket_protectedbase_setLocalAddress(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QHostAddress)(address.UnsafePointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SetPeerPort can only be called from a QSctpSocket that was directly constructed.
func (this *QSctpSocket) SetPeerPort(port uint16) {

	var _dynamic_cast_ok C.bool = false
	C.QSctpSocket_protectedbase_setPeerPort(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.ushort)(port))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SetPeerAddress can only be called from a QSctpSocket that was directly constructed.
func (this *QSctpSocket) SetPeerAddress(address *network.QHostAddress) {

	var _dynamic_cast_ok C.bool = false
	C.QSctpSocket_protectedbase_setPeerAddress(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QHostAddress)(address.UnsafePointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SetPeerName can only be called from a QSctpSocket that was directly constructed.
func (this *QSctpSocket) SetPeerName(name string) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))

	var _dynamic_cast_ok C.bool = false
	C.QSctpSocket_protectedbase_setPeerName(&_dynamic_cast_ok, unsafe.Pointer(this.h), name_ms)

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SetOpenMode can only be called from a QSctpSocket that was directly constructed.
func (this *QSctpSocket) SetOpenMode(openMode qt6.QIODeviceBase__OpenModeFlag) {

	var _dynamic_cast_ok C.bool = false
	C.QSctpSocket_protectedbase_setOpenMode(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(openMode))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SetErrorString can only be called from a QSctpSocket that was directly constructed.
func (this *QSctpSocket) SetErrorString(errorString string) {
	errorString_ms := C.struct_miqt_string{}
	errorString_ms.data = C.CString(errorString)
	errorString_ms.len = C.size_t(len(errorString))
	defer C.free(unsafe.Pointer(errorString_ms.data))

	var _dynamic_cast_ok C.bool = false
	C.QSctpSocket_protectedbase_setErrorString(&_dynamic_cast_ok, unsafe.Pointer(this.h), errorString_ms)

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Sender can only be called from a QSctpSocket that was directly constructed.
func (this *QSctpSocket) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QSctpSocket_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QSctpSocket that was directly constructed.
func (this *QSctpSocket) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QSctpSocket_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QSctpSocket that was directly constructed.
func (this *QSctpSocket) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QSctpSocket_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QSctpSocket that was directly constructed.
func (this *QSctpSocket) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QSctpSocket_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QSctpSocket) callVirtualBase_Close() {

	C.QSctpSocket_virtualbase_close(unsafe.Pointer(this.h))

}
func (this *QSctpSocket) OnClose(slot func(super func())) {
	ok := C.QSctpSocket_override_virtual_close(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSctpSocket_close
func miqt_exec_callback_QSctpSocket_close(self *C.QSctpSocket, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QSctpSocket{h: self}).callVirtualBase_Close)

}

func (this *QSctpSocket) callVirtualBase_DisconnectFromHost() {

	C.QSctpSocket_virtualbase_disconnectFromHost(unsafe.Pointer(this.h))

}
func (this *QSctpSocket) OnDisconnectFromHost(slot func(super func())) {
	ok := C.QSctpSocket_override_virtual_disconnectFromHost(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSctpSocket_disconnectFromHost
func miqt_exec_callback_QSctpSocket_disconnectFromHost(self *C.QSctpSocket, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QSctpSocket{h: self}).callVirtualBase_DisconnectFromHost)

}

func (this *QSctpSocket) callVirtualBase_ReadData(data string, maxlen int64) int64 {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))

	return (int64)(C.QSctpSocket_virtualbase_readData(unsafe.Pointer(this.h), data_Cstring, (C.longlong)(maxlen)))

}
func (this *QSctpSocket) OnReadData(slot func(super func(data string, maxlen int64) int64, data string, maxlen int64) int64) {
	ok := C.QSctpSocket_override_virtual_readData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSctpSocket_readData
func miqt_exec_callback_QSctpSocket_readData(self *C.QSctpSocket, cb C.intptr_t, data *C.char, maxlen C.longlong) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(data string, maxlen int64) int64, data string, maxlen int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	data_ret := data
	slotval1 := C.GoString(data_ret)

	slotval2 := (int64)(maxlen)

	virtualReturn := gofunc((&QSctpSocket{h: self}).callVirtualBase_ReadData, slotval1, slotval2)

	return (C.longlong)(virtualReturn)

}

func (this *QSctpSocket) callVirtualBase_ReadLineData(data string, maxlen int64) int64 {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))

	return (int64)(C.QSctpSocket_virtualbase_readLineData(unsafe.Pointer(this.h), data_Cstring, (C.longlong)(maxlen)))

}
func (this *QSctpSocket) OnReadLineData(slot func(super func(data string, maxlen int64) int64, data string, maxlen int64) int64) {
	ok := C.QSctpSocket_override_virtual_readLineData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSctpSocket_readLineData
func miqt_exec_callback_QSctpSocket_readLineData(self *C.QSctpSocket, cb C.intptr_t, data *C.char, maxlen C.longlong) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(data string, maxlen int64) int64, data string, maxlen int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	data_ret := data
	slotval1 := C.GoString(data_ret)

	slotval2 := (int64)(maxlen)

	virtualReturn := gofunc((&QSctpSocket{h: self}).callVirtualBase_ReadLineData, slotval1, slotval2)

	return (C.longlong)(virtualReturn)

}

func (this *QSctpSocket) callVirtualBase_Resume() {

	C.QSctpSocket_virtualbase_resume(unsafe.Pointer(this.h))

}
func (this *QSctpSocket) OnResume(slot func(super func())) {
	ok := C.QSctpSocket_override_virtual_resume(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSctpSocket_resume
func miqt_exec_callback_QSctpSocket_resume(self *C.QSctpSocket, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QSctpSocket{h: self}).callVirtualBase_Resume)

}

func (this *QSctpSocket) callVirtualBase_Bind(address *network.QHostAddress, port uint16, mode network.QAbstractSocket__BindFlag) bool {

	return (bool)(C.QSctpSocket_virtualbase_bind(unsafe.Pointer(this.h), (*C.QHostAddress)(address.UnsafePointer()), (C.ushort)(port), (C.int)(mode)))

}
func (this *QSctpSocket) OnBind(slot func(super func(address *network.QHostAddress, port uint16, mode network.QAbstractSocket__BindFlag) bool, address *network.QHostAddress, port uint16, mode network.QAbstractSocket__BindFlag) bool) {
	ok := C.QSctpSocket_override_virtual_bind(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSctpSocket_bind
func miqt_exec_callback_QSctpSocket_bind(self *C.QSctpSocket, cb C.intptr_t, address *C.QHostAddress, port C.ushort, mode C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(address *network.QHostAddress, port uint16, mode network.QAbstractSocket__BindFlag) bool, address *network.QHostAddress, port uint16, mode network.QAbstractSocket__BindFlag) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := network.UnsafeNewQHostAddress(unsafe.Pointer(address))

	slotval2 := (uint16)(port)

	slotval3 := (network.QAbstractSocket__BindFlag)(mode)

	virtualReturn := gofunc((&QSctpSocket{h: self}).callVirtualBase_Bind, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QSctpSocket) callVirtualBase_ConnectToHost(hostName string, port uint16, mode qt6.QIODeviceBase__OpenModeFlag, protocol network.QAbstractSocket__NetworkLayerProtocol) {
	hostName_ms := C.struct_miqt_string{}
	hostName_ms.data = C.CString(hostName)
	hostName_ms.len = C.size_t(len(hostName))
	defer C.free(unsafe.Pointer(hostName_ms.data))

	C.QSctpSocket_virtualbase_connectToHost(unsafe.Pointer(this.h), hostName_ms, (C.ushort)(port), (C.int)(mode), (C.int)(protocol))

}
func (this *QSctpSocket) OnConnectToHost(slot func(super func(hostName string, port uint16, mode qt6.QIODeviceBase__OpenModeFlag, protocol network.QAbstractSocket__NetworkLayerProtocol), hostName string, port uint16, mode qt6.QIODeviceBase__OpenModeFlag, protocol network.QAbstractSocket__NetworkLayerProtocol)) {
	ok := C.QSctpSocket_override_virtual_connectToHost(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSctpSocket_connectToHost
func miqt_exec_callback_QSctpSocket_connectToHost(self *C.QSctpSocket, cb C.intptr_t, hostName C.struct_miqt_string, port C.ushort, mode C.int, protocol C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(hostName string, port uint16, mode qt6.QIODeviceBase__OpenModeFlag, protocol network.QAbstractSocket__NetworkLayerProtocol), hostName string, port uint16, mode qt6.QIODeviceBase__OpenModeFlag, protocol network.QAbstractSocket__NetworkLayerProtocol))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var hostName_ms C.struct_miqt_string = hostName
	hostName_ret := C.GoStringN(hostName_ms.data, C.int(int64(hostName_ms.len)))
	C.free(unsafe.Pointer(hostName_ms.data))
	slotval1 := hostName_ret
	slotval2 := (uint16)(port)

	slotval3 := (qt6.QIODeviceBase__OpenModeFlag)(mode)

	slotval4 := (network.QAbstractSocket__NetworkLayerProtocol)(protocol)

	gofunc((&QSctpSocket{h: self}).callVirtualBase_ConnectToHost, slotval1, slotval2, slotval3, slotval4)

}

func (this *QSctpSocket) callVirtualBase_BytesAvailable() int64 {

	return (int64)(C.QSctpSocket_virtualbase_bytesAvailable(unsafe.Pointer(this.h)))

}
func (this *QSctpSocket) OnBytesAvailable(slot func(super func() int64) int64) {
	ok := C.QSctpSocket_override_virtual_bytesAvailable(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSctpSocket_bytesAvailable
func miqt_exec_callback_QSctpSocket_bytesAvailable(self *C.QSctpSocket, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSctpSocket{h: self}).callVirtualBase_BytesAvailable)

	return (C.longlong)(virtualReturn)

}

func (this *QSctpSocket) callVirtualBase_BytesToWrite() int64 {

	return (int64)(C.QSctpSocket_virtualbase_bytesToWrite(unsafe.Pointer(this.h)))

}
func (this *QSctpSocket) OnBytesToWrite(slot func(super func() int64) int64) {
	ok := C.QSctpSocket_override_virtual_bytesToWrite(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSctpSocket_bytesToWrite
func miqt_exec_callback_QSctpSocket_bytesToWrite(self *C.QSctpSocket, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSctpSocket{h: self}).callVirtualBase_BytesToWrite)

	return (C.longlong)(virtualReturn)

}

func (this *QSctpSocket) callVirtualBase_SetReadBufferSize(size int64) {

	C.QSctpSocket_virtualbase_setReadBufferSize(unsafe.Pointer(this.h), (C.longlong)(size))

}
func (this *QSctpSocket) OnSetReadBufferSize(slot func(super func(size int64), size int64)) {
	ok := C.QSctpSocket_override_virtual_setReadBufferSize(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSctpSocket_setReadBufferSize
func miqt_exec_callback_QSctpSocket_setReadBufferSize(self *C.QSctpSocket, cb C.intptr_t, size C.longlong) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(size int64), size int64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int64)(size)

	gofunc((&QSctpSocket{h: self}).callVirtualBase_SetReadBufferSize, slotval1)

}

func (this *QSctpSocket) callVirtualBase_SocketDescriptor() uintptr {

	return (uintptr)(C.QSctpSocket_virtualbase_socketDescriptor(unsafe.Pointer(this.h)))

}
func (this *QSctpSocket) OnSocketDescriptor(slot func(super func() uintptr) uintptr) {
	ok := C.QSctpSocket_override_virtual_socketDescriptor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSctpSocket_socketDescriptor
func miqt_exec_callback_QSctpSocket_socketDescriptor(self *C.QSctpSocket, cb C.intptr_t) C.intptr_t {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() uintptr) uintptr)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSctpSocket{h: self}).callVirtualBase_SocketDescriptor)

	return (C.intptr_t)(virtualReturn)

}

func (this *QSctpSocket) callVirtualBase_SetSocketDescriptor(socketDescriptor uintptr, state network.QAbstractSocket__SocketState, openMode qt6.QIODeviceBase__OpenModeFlag) bool {

	return (bool)(C.QSctpSocket_virtualbase_setSocketDescriptor(unsafe.Pointer(this.h), (C.intptr_t)(socketDescriptor), (C.int)(state), (C.int)(openMode)))

}
func (this *QSctpSocket) OnSetSocketDescriptor(slot func(super func(socketDescriptor uintptr, state network.QAbstractSocket__SocketState, openMode qt6.QIODeviceBase__OpenModeFlag) bool, socketDescriptor uintptr, state network.QAbstractSocket__SocketState, openMode qt6.QIODeviceBase__OpenModeFlag) bool) {
	ok := C.QSctpSocket_override_virtual_setSocketDescriptor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSctpSocket_setSocketDescriptor
func miqt_exec_callback_QSctpSocket_setSocketDescriptor(self *C.QSctpSocket, cb C.intptr_t, socketDescriptor C.intptr_t, state C.int, openMode C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(socketDescriptor uintptr, state network.QAbstractSocket__SocketState, openMode qt6.QIODeviceBase__OpenModeFlag) bool, socketDescriptor uintptr, state network.QAbstractSocket__SocketState, openMode qt6.QIODeviceBase__OpenModeFlag) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (uintptr)(socketDescriptor)

	slotval2 := (network.QAbstractSocket__SocketState)(state)

	slotval3 := (qt6.QIODeviceBase__OpenModeFlag)(openMode)

	virtualReturn := gofunc((&QSctpSocket{h: self}).callVirtualBase_SetSocketDescriptor, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QSctpSocket) callVirtualBase_SetSocketOption(option network.QAbstractSocket__SocketOption, value *qt6.QVariant) {

	C.QSctpSocket_virtualbase_setSocketOption(unsafe.Pointer(this.h), (C.int)(option), (*C.QVariant)(value.UnsafePointer()))

}
func (this *QSctpSocket) OnSetSocketOption(slot func(super func(option network.QAbstractSocket__SocketOption, value *qt6.QVariant), option network.QAbstractSocket__SocketOption, value *qt6.QVariant)) {
	ok := C.QSctpSocket_override_virtual_setSocketOption(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSctpSocket_setSocketOption
func miqt_exec_callback_QSctpSocket_setSocketOption(self *C.QSctpSocket, cb C.intptr_t, option C.int, value *C.QVariant) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(option network.QAbstractSocket__SocketOption, value *qt6.QVariant), option network.QAbstractSocket__SocketOption, value *qt6.QVariant))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (network.QAbstractSocket__SocketOption)(option)

	slotval2 := qt6.UnsafeNewQVariant(unsafe.Pointer(value))

	gofunc((&QSctpSocket{h: self}).callVirtualBase_SetSocketOption, slotval1, slotval2)

}

func (this *QSctpSocket) callVirtualBase_SocketOption(option network.QAbstractSocket__SocketOption) *qt6.QVariant {

	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(C.QSctpSocket_virtualbase_socketOption(unsafe.Pointer(this.h), (C.int)(option))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSctpSocket) OnSocketOption(slot func(super func(option network.QAbstractSocket__SocketOption) *qt6.QVariant, option network.QAbstractSocket__SocketOption) *qt6.QVariant) {
	ok := C.QSctpSocket_override_virtual_socketOption(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSctpSocket_socketOption
func miqt_exec_callback_QSctpSocket_socketOption(self *C.QSctpSocket, cb C.intptr_t, option C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(option network.QAbstractSocket__SocketOption) *qt6.QVariant, option network.QAbstractSocket__SocketOption) *qt6.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (network.QAbstractSocket__SocketOption)(option)

	virtualReturn := gofunc((&QSctpSocket{h: self}).callVirtualBase_SocketOption, slotval1)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}

func (this *QSctpSocket) callVirtualBase_IsSequential() bool {

	return (bool)(C.QSctpSocket_virtualbase_isSequential(unsafe.Pointer(this.h)))

}
func (this *QSctpSocket) OnIsSequential(slot func(super func() bool) bool) {
	ok := C.QSctpSocket_override_virtual_isSequential(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSctpSocket_isSequential
func miqt_exec_callback_QSctpSocket_isSequential(self *C.QSctpSocket, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSctpSocket{h: self}).callVirtualBase_IsSequential)

	return (C.bool)(virtualReturn)

}

func (this *QSctpSocket) callVirtualBase_WaitForConnected(msecs int) bool {

	return (bool)(C.QSctpSocket_virtualbase_waitForConnected(unsafe.Pointer(this.h), (C.int)(msecs)))

}
func (this *QSctpSocket) OnWaitForConnected(slot func(super func(msecs int) bool, msecs int) bool) {
	ok := C.QSctpSocket_override_virtual_waitForConnected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSctpSocket_waitForConnected
func miqt_exec_callback_QSctpSocket_waitForConnected(self *C.QSctpSocket, cb C.intptr_t, msecs C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(msecs int) bool, msecs int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(msecs)

	virtualReturn := gofunc((&QSctpSocket{h: self}).callVirtualBase_WaitForConnected, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSctpSocket) callVirtualBase_WaitForReadyRead(msecs int) bool {

	return (bool)(C.QSctpSocket_virtualbase_waitForReadyRead(unsafe.Pointer(this.h), (C.int)(msecs)))

}
func (this *QSctpSocket) OnWaitForReadyRead(slot func(super func(msecs int) bool, msecs int) bool) {
	ok := C.QSctpSocket_override_virtual_waitForReadyRead(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSctpSocket_waitForReadyRead
func miqt_exec_callback_QSctpSocket_waitForReadyRead(self *C.QSctpSocket, cb C.intptr_t, msecs C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(msecs int) bool, msecs int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(msecs)

	virtualReturn := gofunc((&QSctpSocket{h: self}).callVirtualBase_WaitForReadyRead, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSctpSocket) callVirtualBase_WaitForBytesWritten(msecs int) bool {

	return (bool)(C.QSctpSocket_virtualbase_waitForBytesWritten(unsafe.Pointer(this.h), (C.int)(msecs)))

}
func (this *QSctpSocket) OnWaitForBytesWritten(slot func(super func(msecs int) bool, msecs int) bool) {
	ok := C.QSctpSocket_override_virtual_waitForBytesWritten(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSctpSocket_waitForBytesWritten
func miqt_exec_callback_QSctpSocket_waitForBytesWritten(self *C.QSctpSocket, cb C.intptr_t, msecs C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(msecs int) bool, msecs int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(msecs)

	virtualReturn := gofunc((&QSctpSocket{h: self}).callVirtualBase_WaitForBytesWritten, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSctpSocket) callVirtualBase_WaitForDisconnected(msecs int) bool {

	return (bool)(C.QSctpSocket_virtualbase_waitForDisconnected(unsafe.Pointer(this.h), (C.int)(msecs)))

}
func (this *QSctpSocket) OnWaitForDisconnected(slot func(super func(msecs int) bool, msecs int) bool) {
	ok := C.QSctpSocket_override_virtual_waitForDisconnected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSctpSocket_waitForDisconnected
func miqt_exec_callback_QSctpSocket_waitForDisconnected(self *C.QSctpSocket, cb C.intptr_t, msecs C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(msecs int) bool, msecs int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(msecs)

	virtualReturn := gofunc((&QSctpSocket{h: self}).callVirtualBase_WaitForDisconnected, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSctpSocket) callVirtualBase_SkipData(maxSize int64) int64 {

	return (int64)(C.QSctpSocket_virtualbase_skipData(unsafe.Pointer(this.h), (C.longlong)(maxSize)))

}
func (this *QSctpSocket) OnSkipData(slot func(super func(maxSize int64) int64, maxSize int64) int64) {
	ok := C.QSctpSocket_override_virtual_skipData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSctpSocket_skipData
func miqt_exec_callback_QSctpSocket_skipData(self *C.QSctpSocket, cb C.intptr_t, maxSize C.longlong) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(maxSize int64) int64, maxSize int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int64)(maxSize)

	virtualReturn := gofunc((&QSctpSocket{h: self}).callVirtualBase_SkipData, slotval1)

	return (C.longlong)(virtualReturn)

}

func (this *QSctpSocket) callVirtualBase_WriteData(data string, lenVal int64) int64 {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))

	return (int64)(C.QSctpSocket_virtualbase_writeData(unsafe.Pointer(this.h), data_Cstring, (C.longlong)(lenVal)))

}
func (this *QSctpSocket) OnWriteData(slot func(super func(data string, lenVal int64) int64, data string, lenVal int64) int64) {
	ok := C.QSctpSocket_override_virtual_writeData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSctpSocket_writeData
func miqt_exec_callback_QSctpSocket_writeData(self *C.QSctpSocket, cb C.intptr_t, data *C.const_char, lenVal C.longlong) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(data string, lenVal int64) int64, data string, lenVal int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	data_ret := data
	slotval1 := C.GoString(data_ret)

	slotval2 := (int64)(lenVal)

	virtualReturn := gofunc((&QSctpSocket{h: self}).callVirtualBase_WriteData, slotval1, slotval2)

	return (C.longlong)(virtualReturn)

}

func (this *QSctpSocket) callVirtualBase_Open(mode qt6.QIODeviceBase__OpenModeFlag) bool {

	return (bool)(C.QSctpSocket_virtualbase_open(unsafe.Pointer(this.h), (C.int)(mode)))

}
func (this *QSctpSocket) OnOpen(slot func(super func(mode qt6.QIODeviceBase__OpenModeFlag) bool, mode qt6.QIODeviceBase__OpenModeFlag) bool) {
	ok := C.QSctpSocket_override_virtual_open(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSctpSocket_open
func miqt_exec_callback_QSctpSocket_open(self *C.QSctpSocket, cb C.intptr_t, mode C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(mode qt6.QIODeviceBase__OpenModeFlag) bool, mode qt6.QIODeviceBase__OpenModeFlag) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt6.QIODeviceBase__OpenModeFlag)(mode)

	virtualReturn := gofunc((&QSctpSocket{h: self}).callVirtualBase_Open, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSctpSocket) callVirtualBase_Pos() int64 {

	return (int64)(C.QSctpSocket_virtualbase_pos(unsafe.Pointer(this.h)))

}
func (this *QSctpSocket) OnPos(slot func(super func() int64) int64) {
	ok := C.QSctpSocket_override_virtual_pos(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSctpSocket_pos
func miqt_exec_callback_QSctpSocket_pos(self *C.QSctpSocket, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSctpSocket{h: self}).callVirtualBase_Pos)

	return (C.longlong)(virtualReturn)

}

func (this *QSctpSocket) callVirtualBase_Size() int64 {

	return (int64)(C.QSctpSocket_virtualbase_size(unsafe.Pointer(this.h)))

}
func (this *QSctpSocket) OnSize(slot func(super func() int64) int64) {
	ok := C.QSctpSocket_override_virtual_size(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSctpSocket_size
func miqt_exec_callback_QSctpSocket_size(self *C.QSctpSocket, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSctpSocket{h: self}).callVirtualBase_Size)

	return (C.longlong)(virtualReturn)

}

func (this *QSctpSocket) callVirtualBase_Seek(pos int64) bool {

	return (bool)(C.QSctpSocket_virtualbase_seek(unsafe.Pointer(this.h), (C.longlong)(pos)))

}
func (this *QSctpSocket) OnSeek(slot func(super func(pos int64) bool, pos int64) bool) {
	ok := C.QSctpSocket_override_virtual_seek(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSctpSocket_seek
func miqt_exec_callback_QSctpSocket_seek(self *C.QSctpSocket, cb C.intptr_t, pos C.longlong) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(pos int64) bool, pos int64) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int64)(pos)

	virtualReturn := gofunc((&QSctpSocket{h: self}).callVirtualBase_Seek, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSctpSocket) callVirtualBase_AtEnd() bool {

	return (bool)(C.QSctpSocket_virtualbase_atEnd(unsafe.Pointer(this.h)))

}
func (this *QSctpSocket) OnAtEnd(slot func(super func() bool) bool) {
	ok := C.QSctpSocket_override_virtual_atEnd(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSctpSocket_atEnd
func miqt_exec_callback_QSctpSocket_atEnd(self *C.QSctpSocket, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSctpSocket{h: self}).callVirtualBase_AtEnd)

	return (C.bool)(virtualReturn)

}

func (this *QSctpSocket) callVirtualBase_Reset() bool {

	return (bool)(C.QSctpSocket_virtualbase_reset(unsafe.Pointer(this.h)))

}
func (this *QSctpSocket) OnReset(slot func(super func() bool) bool) {
	ok := C.QSctpSocket_override_virtual_reset(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSctpSocket_reset
func miqt_exec_callback_QSctpSocket_reset(self *C.QSctpSocket, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSctpSocket{h: self}).callVirtualBase_Reset)

	return (C.bool)(virtualReturn)

}

func (this *QSctpSocket) callVirtualBase_CanReadLine() bool {

	return (bool)(C.QSctpSocket_virtualbase_canReadLine(unsafe.Pointer(this.h)))

}
func (this *QSctpSocket) OnCanReadLine(slot func(super func() bool) bool) {
	ok := C.QSctpSocket_override_virtual_canReadLine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSctpSocket_canReadLine
func miqt_exec_callback_QSctpSocket_canReadLine(self *C.QSctpSocket, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSctpSocket{h: self}).callVirtualBase_CanReadLine)

	return (C.bool)(virtualReturn)

}

func (this *QSctpSocket) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QSctpSocket_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QSctpSocket) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QSctpSocket_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSctpSocket_event
func miqt_exec_callback_QSctpSocket_event(self *C.QSctpSocket, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QSctpSocket{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSctpSocket) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QSctpSocket_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QSctpSocket) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QSctpSocket_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSctpSocket_eventFilter
func miqt_exec_callback_QSctpSocket_eventFilter(self *C.QSctpSocket, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QSctpSocket{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QSctpSocket) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QSctpSocket_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QSctpSocket) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QSctpSocket_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSctpSocket_timerEvent
func miqt_exec_callback_QSctpSocket_timerEvent(self *C.QSctpSocket, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QSctpSocket{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QSctpSocket) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QSctpSocket_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QSctpSocket) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QSctpSocket_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSctpSocket_childEvent
func miqt_exec_callback_QSctpSocket_childEvent(self *C.QSctpSocket, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QSctpSocket{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QSctpSocket) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QSctpSocket_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QSctpSocket) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QSctpSocket_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSctpSocket_customEvent
func miqt_exec_callback_QSctpSocket_customEvent(self *C.QSctpSocket, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QSctpSocket{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QSctpSocket) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QSctpSocket_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QSctpSocket) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QSctpSocket_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSctpSocket_connectNotify
func miqt_exec_callback_QSctpSocket_connectNotify(self *C.QSctpSocket, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QSctpSocket{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QSctpSocket) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QSctpSocket_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QSctpSocket) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QSctpSocket_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSctpSocket_disconnectNotify
func miqt_exec_callback_QSctpSocket_disconnectNotify(self *C.QSctpSocket, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QSctpSocket{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QSctpSocket) Delete() {
	C.QSctpSocket_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSctpSocket) GoGC() {
	runtime.SetFinalizer(this, func(this *QSctpSocket) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
