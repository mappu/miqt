package network

/*

#include "gen_qtcpsocket.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QTcpSocket struct {
	h *C.QTcpSocket
	*QAbstractSocket
}

func (this *QTcpSocket) cPointer() *C.QTcpSocket {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QTcpSocket) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQTcpSocket constructs the type using only CGO pointers.
func newQTcpSocket(h *C.QTcpSocket) *QTcpSocket {
	if h == nil {
		return nil
	}
	var outptr_QAbstractSocket *C.QAbstractSocket = nil
	C.QTcpSocket_virtbase(h, &outptr_QAbstractSocket)

	return &QTcpSocket{h: h,
		QAbstractSocket: newQAbstractSocket(outptr_QAbstractSocket)}
}

// UnsafeNewQTcpSocket constructs the type using only unsafe pointers.
func UnsafeNewQTcpSocket(h unsafe.Pointer) *QTcpSocket {
	return newQTcpSocket((*C.QTcpSocket)(h))
}

// NewQTcpSocket constructs a new QTcpSocket object.
func NewQTcpSocket() *QTcpSocket {

	return newQTcpSocket(C.QTcpSocket_new())
}

// NewQTcpSocket2 constructs a new QTcpSocket object.
func NewQTcpSocket2(parent *qt.QObject) *QTcpSocket {

	return newQTcpSocket(C.QTcpSocket_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QTcpSocket) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QTcpSocket_metaObject(this.h)))
}

func (this *QTcpSocket) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QTcpSocket_metacast(this.h, param1_Cstring))
}

func QTcpSocket_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QTcpSocket_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTcpSocket_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QTcpSocket_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTcpSocket_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTcpSocket_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTcpSocket_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTcpSocket_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTcpSocket_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTcpSocket_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTcpSocket_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTcpSocket_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// SetSocketState can only be called from a QTcpSocket that was directly constructed.
func (this *QTcpSocket) SetSocketState(state QAbstractSocket__SocketState) {

	var _dynamic_cast_ok C.bool = false
	C.QTcpSocket_protectedbase_setSocketState(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(state))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SetSocketError can only be called from a QTcpSocket that was directly constructed.
func (this *QTcpSocket) SetSocketError(socketError QAbstractSocket__SocketError) {

	var _dynamic_cast_ok C.bool = false
	C.QTcpSocket_protectedbase_setSocketError(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(socketError))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SetLocalPort can only be called from a QTcpSocket that was directly constructed.
func (this *QTcpSocket) SetLocalPort(port uint16) {

	var _dynamic_cast_ok C.bool = false
	C.QTcpSocket_protectedbase_setLocalPort(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.ushort)(port))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SetLocalAddress can only be called from a QTcpSocket that was directly constructed.
func (this *QTcpSocket) SetLocalAddress(address *QHostAddress) {

	var _dynamic_cast_ok C.bool = false
	C.QTcpSocket_protectedbase_setLocalAddress(&_dynamic_cast_ok, unsafe.Pointer(this.h), address.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SetPeerPort can only be called from a QTcpSocket that was directly constructed.
func (this *QTcpSocket) SetPeerPort(port uint16) {

	var _dynamic_cast_ok C.bool = false
	C.QTcpSocket_protectedbase_setPeerPort(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.ushort)(port))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SetPeerAddress can only be called from a QTcpSocket that was directly constructed.
func (this *QTcpSocket) SetPeerAddress(address *QHostAddress) {

	var _dynamic_cast_ok C.bool = false
	C.QTcpSocket_protectedbase_setPeerAddress(&_dynamic_cast_ok, unsafe.Pointer(this.h), address.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SetPeerName can only be called from a QTcpSocket that was directly constructed.
func (this *QTcpSocket) SetPeerName(name string) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))

	var _dynamic_cast_ok C.bool = false
	C.QTcpSocket_protectedbase_setPeerName(&_dynamic_cast_ok, unsafe.Pointer(this.h), name_ms)

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SetOpenMode can only be called from a QTcpSocket that was directly constructed.
func (this *QTcpSocket) SetOpenMode(openMode qt.QIODevice__OpenModeFlag) {

	var _dynamic_cast_ok C.bool = false
	C.QTcpSocket_protectedbase_setOpenMode(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(openMode))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SetErrorString can only be called from a QTcpSocket that was directly constructed.
func (this *QTcpSocket) SetErrorString(errorString string) {
	errorString_ms := C.struct_miqt_string{}
	errorString_ms.data = C.CString(errorString)
	errorString_ms.len = C.size_t(len(errorString))
	defer C.free(unsafe.Pointer(errorString_ms.data))

	var _dynamic_cast_ok C.bool = false
	C.QTcpSocket_protectedbase_setErrorString(&_dynamic_cast_ok, unsafe.Pointer(this.h), errorString_ms)

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Sender can only be called from a QTcpSocket that was directly constructed.
func (this *QTcpSocket) Sender() *qt.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt.UnsafeNewQObject(unsafe.Pointer(C.QTcpSocket_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QTcpSocket that was directly constructed.
func (this *QTcpSocket) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QTcpSocket_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QTcpSocket that was directly constructed.
func (this *QTcpSocket) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QTcpSocket_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QTcpSocket that was directly constructed.
func (this *QTcpSocket) IsSignalConnected(signal *qt.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QTcpSocket_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QTcpSocket) callVirtualBase_Resume() {

	C.QTcpSocket_virtualbase_resume(unsafe.Pointer(this.h))

}
func (this *QTcpSocket) OnResume(slot func(super func())) {
	ok := C.QTcpSocket_override_virtual_resume(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTcpSocket_resume
func miqt_exec_callback_QTcpSocket_resume(self *C.QTcpSocket, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QTcpSocket{h: self}).callVirtualBase_Resume)

}

func (this *QTcpSocket) callVirtualBase_ConnectToHost(hostName string, port uint16, mode qt.QIODevice__OpenModeFlag, protocol QAbstractSocket__NetworkLayerProtocol) {
	hostName_ms := C.struct_miqt_string{}
	hostName_ms.data = C.CString(hostName)
	hostName_ms.len = C.size_t(len(hostName))
	defer C.free(unsafe.Pointer(hostName_ms.data))

	C.QTcpSocket_virtualbase_connectToHost(unsafe.Pointer(this.h), hostName_ms, (C.ushort)(port), (C.int)(mode), (C.int)(protocol))

}
func (this *QTcpSocket) OnConnectToHost(slot func(super func(hostName string, port uint16, mode qt.QIODevice__OpenModeFlag, protocol QAbstractSocket__NetworkLayerProtocol), hostName string, port uint16, mode qt.QIODevice__OpenModeFlag, protocol QAbstractSocket__NetworkLayerProtocol)) {
	ok := C.QTcpSocket_override_virtual_connectToHost(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTcpSocket_connectToHost
func miqt_exec_callback_QTcpSocket_connectToHost(self *C.QTcpSocket, cb C.intptr_t, hostName C.struct_miqt_string, port C.ushort, mode C.int, protocol C.int) {
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

	gofunc((&QTcpSocket{h: self}).callVirtualBase_ConnectToHost, slotval1, slotval2, slotval3, slotval4)

}

func (this *QTcpSocket) callVirtualBase_DisconnectFromHost() {

	C.QTcpSocket_virtualbase_disconnectFromHost(unsafe.Pointer(this.h))

}
func (this *QTcpSocket) OnDisconnectFromHost(slot func(super func())) {
	ok := C.QTcpSocket_override_virtual_disconnectFromHost(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTcpSocket_disconnectFromHost
func miqt_exec_callback_QTcpSocket_disconnectFromHost(self *C.QTcpSocket, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QTcpSocket{h: self}).callVirtualBase_DisconnectFromHost)

}

func (this *QTcpSocket) callVirtualBase_BytesAvailable() int64 {

	return (int64)(C.QTcpSocket_virtualbase_bytesAvailable(unsafe.Pointer(this.h)))

}
func (this *QTcpSocket) OnBytesAvailable(slot func(super func() int64) int64) {
	ok := C.QTcpSocket_override_virtual_bytesAvailable(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTcpSocket_bytesAvailable
func miqt_exec_callback_QTcpSocket_bytesAvailable(self *C.QTcpSocket, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTcpSocket{h: self}).callVirtualBase_BytesAvailable)

	return (C.longlong)(virtualReturn)

}

func (this *QTcpSocket) callVirtualBase_BytesToWrite() int64 {

	return (int64)(C.QTcpSocket_virtualbase_bytesToWrite(unsafe.Pointer(this.h)))

}
func (this *QTcpSocket) OnBytesToWrite(slot func(super func() int64) int64) {
	ok := C.QTcpSocket_override_virtual_bytesToWrite(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTcpSocket_bytesToWrite
func miqt_exec_callback_QTcpSocket_bytesToWrite(self *C.QTcpSocket, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTcpSocket{h: self}).callVirtualBase_BytesToWrite)

	return (C.longlong)(virtualReturn)

}

func (this *QTcpSocket) callVirtualBase_CanReadLine() bool {

	return (bool)(C.QTcpSocket_virtualbase_canReadLine(unsafe.Pointer(this.h)))

}
func (this *QTcpSocket) OnCanReadLine(slot func(super func() bool) bool) {
	ok := C.QTcpSocket_override_virtual_canReadLine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTcpSocket_canReadLine
func miqt_exec_callback_QTcpSocket_canReadLine(self *C.QTcpSocket, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTcpSocket{h: self}).callVirtualBase_CanReadLine)

	return (C.bool)(virtualReturn)

}

func (this *QTcpSocket) callVirtualBase_SetReadBufferSize(size int64) {

	C.QTcpSocket_virtualbase_setReadBufferSize(unsafe.Pointer(this.h), (C.longlong)(size))

}
func (this *QTcpSocket) OnSetReadBufferSize(slot func(super func(size int64), size int64)) {
	ok := C.QTcpSocket_override_virtual_setReadBufferSize(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTcpSocket_setReadBufferSize
func miqt_exec_callback_QTcpSocket_setReadBufferSize(self *C.QTcpSocket, cb C.intptr_t, size C.longlong) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(size int64), size int64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int64)(size)

	gofunc((&QTcpSocket{h: self}).callVirtualBase_SetReadBufferSize, slotval1)

}

func (this *QTcpSocket) callVirtualBase_SocketDescriptor() uintptr {

	return (uintptr)(C.QTcpSocket_virtualbase_socketDescriptor(unsafe.Pointer(this.h)))

}
func (this *QTcpSocket) OnSocketDescriptor(slot func(super func() uintptr) uintptr) {
	ok := C.QTcpSocket_override_virtual_socketDescriptor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTcpSocket_socketDescriptor
func miqt_exec_callback_QTcpSocket_socketDescriptor(self *C.QTcpSocket, cb C.intptr_t) C.intptr_t {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() uintptr) uintptr)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTcpSocket{h: self}).callVirtualBase_SocketDescriptor)

	return (C.intptr_t)(virtualReturn)

}

func (this *QTcpSocket) callVirtualBase_SetSocketDescriptor(socketDescriptor uintptr, state QAbstractSocket__SocketState, openMode qt.QIODevice__OpenModeFlag) bool {

	return (bool)(C.QTcpSocket_virtualbase_setSocketDescriptor(unsafe.Pointer(this.h), (C.intptr_t)(socketDescriptor), (C.int)(state), (C.int)(openMode)))

}
func (this *QTcpSocket) OnSetSocketDescriptor(slot func(super func(socketDescriptor uintptr, state QAbstractSocket__SocketState, openMode qt.QIODevice__OpenModeFlag) bool, socketDescriptor uintptr, state QAbstractSocket__SocketState, openMode qt.QIODevice__OpenModeFlag) bool) {
	ok := C.QTcpSocket_override_virtual_setSocketDescriptor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTcpSocket_setSocketDescriptor
func miqt_exec_callback_QTcpSocket_setSocketDescriptor(self *C.QTcpSocket, cb C.intptr_t, socketDescriptor C.intptr_t, state C.int, openMode C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(socketDescriptor uintptr, state QAbstractSocket__SocketState, openMode qt.QIODevice__OpenModeFlag) bool, socketDescriptor uintptr, state QAbstractSocket__SocketState, openMode qt.QIODevice__OpenModeFlag) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (uintptr)(socketDescriptor)

	slotval2 := (QAbstractSocket__SocketState)(state)

	slotval3 := (qt.QIODevice__OpenModeFlag)(openMode)

	virtualReturn := gofunc((&QTcpSocket{h: self}).callVirtualBase_SetSocketDescriptor, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QTcpSocket) callVirtualBase_SetSocketOption(option QAbstractSocket__SocketOption, value *qt.QVariant) {

	C.QTcpSocket_virtualbase_setSocketOption(unsafe.Pointer(this.h), (C.int)(option), (*C.QVariant)(value.UnsafePointer()))

}
func (this *QTcpSocket) OnSetSocketOption(slot func(super func(option QAbstractSocket__SocketOption, value *qt.QVariant), option QAbstractSocket__SocketOption, value *qt.QVariant)) {
	ok := C.QTcpSocket_override_virtual_setSocketOption(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTcpSocket_setSocketOption
func miqt_exec_callback_QTcpSocket_setSocketOption(self *C.QTcpSocket, cb C.intptr_t, option C.int, value *C.QVariant) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(option QAbstractSocket__SocketOption, value *qt.QVariant), option QAbstractSocket__SocketOption, value *qt.QVariant))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAbstractSocket__SocketOption)(option)

	slotval2 := qt.UnsafeNewQVariant(unsafe.Pointer(value))

	gofunc((&QTcpSocket{h: self}).callVirtualBase_SetSocketOption, slotval1, slotval2)

}

func (this *QTcpSocket) callVirtualBase_SocketOption(option QAbstractSocket__SocketOption) *qt.QVariant {

	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QTcpSocket_virtualbase_socketOption(unsafe.Pointer(this.h), (C.int)(option))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTcpSocket) OnSocketOption(slot func(super func(option QAbstractSocket__SocketOption) *qt.QVariant, option QAbstractSocket__SocketOption) *qt.QVariant) {
	ok := C.QTcpSocket_override_virtual_socketOption(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTcpSocket_socketOption
func miqt_exec_callback_QTcpSocket_socketOption(self *C.QTcpSocket, cb C.intptr_t, option C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(option QAbstractSocket__SocketOption) *qt.QVariant, option QAbstractSocket__SocketOption) *qt.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAbstractSocket__SocketOption)(option)

	virtualReturn := gofunc((&QTcpSocket{h: self}).callVirtualBase_SocketOption, slotval1)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}

func (this *QTcpSocket) callVirtualBase_Close() {

	C.QTcpSocket_virtualbase_close(unsafe.Pointer(this.h))

}
func (this *QTcpSocket) OnClose(slot func(super func())) {
	ok := C.QTcpSocket_override_virtual_close(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTcpSocket_close
func miqt_exec_callback_QTcpSocket_close(self *C.QTcpSocket, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QTcpSocket{h: self}).callVirtualBase_Close)

}

func (this *QTcpSocket) callVirtualBase_IsSequential() bool {

	return (bool)(C.QTcpSocket_virtualbase_isSequential(unsafe.Pointer(this.h)))

}
func (this *QTcpSocket) OnIsSequential(slot func(super func() bool) bool) {
	ok := C.QTcpSocket_override_virtual_isSequential(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTcpSocket_isSequential
func miqt_exec_callback_QTcpSocket_isSequential(self *C.QTcpSocket, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTcpSocket{h: self}).callVirtualBase_IsSequential)

	return (C.bool)(virtualReturn)

}

func (this *QTcpSocket) callVirtualBase_AtEnd() bool {

	return (bool)(C.QTcpSocket_virtualbase_atEnd(unsafe.Pointer(this.h)))

}
func (this *QTcpSocket) OnAtEnd(slot func(super func() bool) bool) {
	ok := C.QTcpSocket_override_virtual_atEnd(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTcpSocket_atEnd
func miqt_exec_callback_QTcpSocket_atEnd(self *C.QTcpSocket, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTcpSocket{h: self}).callVirtualBase_AtEnd)

	return (C.bool)(virtualReturn)

}

func (this *QTcpSocket) callVirtualBase_WaitForConnected(msecs int) bool {

	return (bool)(C.QTcpSocket_virtualbase_waitForConnected(unsafe.Pointer(this.h), (C.int)(msecs)))

}
func (this *QTcpSocket) OnWaitForConnected(slot func(super func(msecs int) bool, msecs int) bool) {
	ok := C.QTcpSocket_override_virtual_waitForConnected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTcpSocket_waitForConnected
func miqt_exec_callback_QTcpSocket_waitForConnected(self *C.QTcpSocket, cb C.intptr_t, msecs C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(msecs int) bool, msecs int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(msecs)

	virtualReturn := gofunc((&QTcpSocket{h: self}).callVirtualBase_WaitForConnected, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QTcpSocket) callVirtualBase_WaitForReadyRead(msecs int) bool {

	return (bool)(C.QTcpSocket_virtualbase_waitForReadyRead(unsafe.Pointer(this.h), (C.int)(msecs)))

}
func (this *QTcpSocket) OnWaitForReadyRead(slot func(super func(msecs int) bool, msecs int) bool) {
	ok := C.QTcpSocket_override_virtual_waitForReadyRead(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTcpSocket_waitForReadyRead
func miqt_exec_callback_QTcpSocket_waitForReadyRead(self *C.QTcpSocket, cb C.intptr_t, msecs C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(msecs int) bool, msecs int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(msecs)

	virtualReturn := gofunc((&QTcpSocket{h: self}).callVirtualBase_WaitForReadyRead, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QTcpSocket) callVirtualBase_WaitForBytesWritten(msecs int) bool {

	return (bool)(C.QTcpSocket_virtualbase_waitForBytesWritten(unsafe.Pointer(this.h), (C.int)(msecs)))

}
func (this *QTcpSocket) OnWaitForBytesWritten(slot func(super func(msecs int) bool, msecs int) bool) {
	ok := C.QTcpSocket_override_virtual_waitForBytesWritten(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTcpSocket_waitForBytesWritten
func miqt_exec_callback_QTcpSocket_waitForBytesWritten(self *C.QTcpSocket, cb C.intptr_t, msecs C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(msecs int) bool, msecs int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(msecs)

	virtualReturn := gofunc((&QTcpSocket{h: self}).callVirtualBase_WaitForBytesWritten, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QTcpSocket) callVirtualBase_WaitForDisconnected(msecs int) bool {

	return (bool)(C.QTcpSocket_virtualbase_waitForDisconnected(unsafe.Pointer(this.h), (C.int)(msecs)))

}
func (this *QTcpSocket) OnWaitForDisconnected(slot func(super func(msecs int) bool, msecs int) bool) {
	ok := C.QTcpSocket_override_virtual_waitForDisconnected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTcpSocket_waitForDisconnected
func miqt_exec_callback_QTcpSocket_waitForDisconnected(self *C.QTcpSocket, cb C.intptr_t, msecs C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(msecs int) bool, msecs int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(msecs)

	virtualReturn := gofunc((&QTcpSocket{h: self}).callVirtualBase_WaitForDisconnected, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QTcpSocket) callVirtualBase_ReadData(data string, maxlen int64) int64 {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))

	return (int64)(C.QTcpSocket_virtualbase_readData(unsafe.Pointer(this.h), data_Cstring, (C.longlong)(maxlen)))

}
func (this *QTcpSocket) OnReadData(slot func(super func(data string, maxlen int64) int64, data string, maxlen int64) int64) {
	ok := C.QTcpSocket_override_virtual_readData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTcpSocket_readData
func miqt_exec_callback_QTcpSocket_readData(self *C.QTcpSocket, cb C.intptr_t, data *C.char, maxlen C.longlong) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(data string, maxlen int64) int64, data string, maxlen int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	data_ret := data
	slotval1 := C.GoString(data_ret)

	slotval2 := (int64)(maxlen)

	virtualReturn := gofunc((&QTcpSocket{h: self}).callVirtualBase_ReadData, slotval1, slotval2)

	return (C.longlong)(virtualReturn)

}

func (this *QTcpSocket) callVirtualBase_ReadLineData(data string, maxlen int64) int64 {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))

	return (int64)(C.QTcpSocket_virtualbase_readLineData(unsafe.Pointer(this.h), data_Cstring, (C.longlong)(maxlen)))

}
func (this *QTcpSocket) OnReadLineData(slot func(super func(data string, maxlen int64) int64, data string, maxlen int64) int64) {
	ok := C.QTcpSocket_override_virtual_readLineData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTcpSocket_readLineData
func miqt_exec_callback_QTcpSocket_readLineData(self *C.QTcpSocket, cb C.intptr_t, data *C.char, maxlen C.longlong) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(data string, maxlen int64) int64, data string, maxlen int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	data_ret := data
	slotval1 := C.GoString(data_ret)

	slotval2 := (int64)(maxlen)

	virtualReturn := gofunc((&QTcpSocket{h: self}).callVirtualBase_ReadLineData, slotval1, slotval2)

	return (C.longlong)(virtualReturn)

}

func (this *QTcpSocket) callVirtualBase_WriteData(data string, lenVal int64) int64 {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))

	return (int64)(C.QTcpSocket_virtualbase_writeData(unsafe.Pointer(this.h), data_Cstring, (C.longlong)(lenVal)))

}
func (this *QTcpSocket) OnWriteData(slot func(super func(data string, lenVal int64) int64, data string, lenVal int64) int64) {
	ok := C.QTcpSocket_override_virtual_writeData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTcpSocket_writeData
func miqt_exec_callback_QTcpSocket_writeData(self *C.QTcpSocket, cb C.intptr_t, data *C.const_char, lenVal C.longlong) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(data string, lenVal int64) int64, data string, lenVal int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	data_ret := data
	slotval1 := C.GoString(data_ret)

	slotval2 := (int64)(lenVal)

	virtualReturn := gofunc((&QTcpSocket{h: self}).callVirtualBase_WriteData, slotval1, slotval2)

	return (C.longlong)(virtualReturn)

}

func (this *QTcpSocket) callVirtualBase_Open(mode qt.QIODevice__OpenModeFlag) bool {

	return (bool)(C.QTcpSocket_virtualbase_open(unsafe.Pointer(this.h), (C.int)(mode)))

}
func (this *QTcpSocket) OnOpen(slot func(super func(mode qt.QIODevice__OpenModeFlag) bool, mode qt.QIODevice__OpenModeFlag) bool) {
	ok := C.QTcpSocket_override_virtual_open(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTcpSocket_open
func miqt_exec_callback_QTcpSocket_open(self *C.QTcpSocket, cb C.intptr_t, mode C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(mode qt.QIODevice__OpenModeFlag) bool, mode qt.QIODevice__OpenModeFlag) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt.QIODevice__OpenModeFlag)(mode)

	virtualReturn := gofunc((&QTcpSocket{h: self}).callVirtualBase_Open, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QTcpSocket) callVirtualBase_Pos() int64 {

	return (int64)(C.QTcpSocket_virtualbase_pos(unsafe.Pointer(this.h)))

}
func (this *QTcpSocket) OnPos(slot func(super func() int64) int64) {
	ok := C.QTcpSocket_override_virtual_pos(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTcpSocket_pos
func miqt_exec_callback_QTcpSocket_pos(self *C.QTcpSocket, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTcpSocket{h: self}).callVirtualBase_Pos)

	return (C.longlong)(virtualReturn)

}

func (this *QTcpSocket) callVirtualBase_Size() int64 {

	return (int64)(C.QTcpSocket_virtualbase_size(unsafe.Pointer(this.h)))

}
func (this *QTcpSocket) OnSize(slot func(super func() int64) int64) {
	ok := C.QTcpSocket_override_virtual_size(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTcpSocket_size
func miqt_exec_callback_QTcpSocket_size(self *C.QTcpSocket, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTcpSocket{h: self}).callVirtualBase_Size)

	return (C.longlong)(virtualReturn)

}

func (this *QTcpSocket) callVirtualBase_Seek(pos int64) bool {

	return (bool)(C.QTcpSocket_virtualbase_seek(unsafe.Pointer(this.h), (C.longlong)(pos)))

}
func (this *QTcpSocket) OnSeek(slot func(super func(pos int64) bool, pos int64) bool) {
	ok := C.QTcpSocket_override_virtual_seek(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTcpSocket_seek
func miqt_exec_callback_QTcpSocket_seek(self *C.QTcpSocket, cb C.intptr_t, pos C.longlong) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(pos int64) bool, pos int64) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int64)(pos)

	virtualReturn := gofunc((&QTcpSocket{h: self}).callVirtualBase_Seek, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QTcpSocket) callVirtualBase_Reset() bool {

	return (bool)(C.QTcpSocket_virtualbase_reset(unsafe.Pointer(this.h)))

}
func (this *QTcpSocket) OnReset(slot func(super func() bool) bool) {
	ok := C.QTcpSocket_override_virtual_reset(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTcpSocket_reset
func miqt_exec_callback_QTcpSocket_reset(self *C.QTcpSocket, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTcpSocket{h: self}).callVirtualBase_Reset)

	return (C.bool)(virtualReturn)

}

func (this *QTcpSocket) callVirtualBase_Event(event *qt.QEvent) bool {

	return (bool)(C.QTcpSocket_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QTcpSocket) OnEvent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	ok := C.QTcpSocket_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTcpSocket_event
func miqt_exec_callback_QTcpSocket_event(self *C.QTcpSocket, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QTcpSocket{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QTcpSocket) callVirtualBase_EventFilter(watched *qt.QObject, event *qt.QEvent) bool {

	return (bool)(C.QTcpSocket_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QTcpSocket) OnEventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	ok := C.QTcpSocket_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTcpSocket_eventFilter
func miqt_exec_callback_QTcpSocket_eventFilter(self *C.QTcpSocket, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QTcpSocket{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QTcpSocket) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.QTcpSocket_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QTcpSocket) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	ok := C.QTcpSocket_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTcpSocket_timerEvent
func miqt_exec_callback_QTcpSocket_timerEvent(self *C.QTcpSocket, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QTcpSocket{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QTcpSocket) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QTcpSocket_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QTcpSocket) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	ok := C.QTcpSocket_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTcpSocket_childEvent
func miqt_exec_callback_QTcpSocket_childEvent(self *C.QTcpSocket, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QTcpSocket{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QTcpSocket) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QTcpSocket_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QTcpSocket) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QTcpSocket_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTcpSocket_customEvent
func miqt_exec_callback_QTcpSocket_customEvent(self *C.QTcpSocket, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QTcpSocket{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QTcpSocket) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QTcpSocket_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QTcpSocket) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QTcpSocket_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTcpSocket_connectNotify
func miqt_exec_callback_QTcpSocket_connectNotify(self *C.QTcpSocket, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QTcpSocket{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QTcpSocket) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QTcpSocket_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QTcpSocket) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QTcpSocket_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTcpSocket_disconnectNotify
func miqt_exec_callback_QTcpSocket_disconnectNotify(self *C.QTcpSocket, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QTcpSocket{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QTcpSocket) Delete() {
	C.QTcpSocket_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTcpSocket) GoGC() {
	runtime.SetFinalizer(this, func(this *QTcpSocket) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
