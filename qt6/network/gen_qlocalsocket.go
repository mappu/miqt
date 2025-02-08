package network

/*

#include "gen_qlocalsocket.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QLocalSocket__LocalSocketError int

const (
	QLocalSocket__ConnectionRefusedError          QLocalSocket__LocalSocketError = 0
	QLocalSocket__PeerClosedError                 QLocalSocket__LocalSocketError = 1
	QLocalSocket__ServerNotFoundError             QLocalSocket__LocalSocketError = 2
	QLocalSocket__SocketAccessError               QLocalSocket__LocalSocketError = 3
	QLocalSocket__SocketResourceError             QLocalSocket__LocalSocketError = 4
	QLocalSocket__SocketTimeoutError              QLocalSocket__LocalSocketError = 5
	QLocalSocket__DatagramTooLargeError           QLocalSocket__LocalSocketError = 6
	QLocalSocket__ConnectionError                 QLocalSocket__LocalSocketError = 7
	QLocalSocket__UnsupportedSocketOperationError QLocalSocket__LocalSocketError = 10
	QLocalSocket__UnknownSocketError              QLocalSocket__LocalSocketError = -1
	QLocalSocket__OperationError                  QLocalSocket__LocalSocketError = 19
)

type QLocalSocket__LocalSocketState int

const (
	QLocalSocket__UnconnectedState QLocalSocket__LocalSocketState = 0
	QLocalSocket__ConnectingState  QLocalSocket__LocalSocketState = 2
	QLocalSocket__ConnectedState   QLocalSocket__LocalSocketState = 3
	QLocalSocket__ClosingState     QLocalSocket__LocalSocketState = 6
)

type QLocalSocket__SocketOption int

const (
	QLocalSocket__NoOptions               QLocalSocket__SocketOption = 0
	QLocalSocket__AbstractNamespaceOption QLocalSocket__SocketOption = 1
)

type QLocalSocket struct {
	h *C.QLocalSocket
	*qt6.QIODevice
}

func (this *QLocalSocket) cPointer() *C.QLocalSocket {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QLocalSocket) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQLocalSocket constructs the type using only CGO pointers.
func newQLocalSocket(h *C.QLocalSocket) *QLocalSocket {
	if h == nil {
		return nil
	}
	var outptr_QIODevice *C.QIODevice = nil
	C.QLocalSocket_virtbase(h, &outptr_QIODevice)

	return &QLocalSocket{h: h,
		QIODevice: qt6.UnsafeNewQIODevice(unsafe.Pointer(outptr_QIODevice))}
}

// UnsafeNewQLocalSocket constructs the type using only unsafe pointers.
func UnsafeNewQLocalSocket(h unsafe.Pointer) *QLocalSocket {
	return newQLocalSocket((*C.QLocalSocket)(h))
}

// NewQLocalSocket constructs a new QLocalSocket object.
func NewQLocalSocket() *QLocalSocket {

	return newQLocalSocket(C.QLocalSocket_new())
}

// NewQLocalSocket2 constructs a new QLocalSocket object.
func NewQLocalSocket2(parent *qt6.QObject) *QLocalSocket {

	return newQLocalSocket(C.QLocalSocket_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QLocalSocket) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QLocalSocket_metaObject(this.h)))
}

func (this *QLocalSocket) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QLocalSocket_metacast(this.h, param1_Cstring))
}

func QLocalSocket_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QLocalSocket_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocalSocket) ConnectToServer() {
	C.QLocalSocket_connectToServer(this.h)
}

func (this *QLocalSocket) ConnectToServerWithName(name string) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QLocalSocket_connectToServerWithName(this.h, name_ms)
}

func (this *QLocalSocket) DisconnectFromServer() {
	C.QLocalSocket_disconnectFromServer(this.h)
}

func (this *QLocalSocket) SetServerName(name string) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QLocalSocket_setServerName(this.h, name_ms)
}

func (this *QLocalSocket) ServerName() string {
	var _ms C.struct_miqt_string = C.QLocalSocket_serverName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocalSocket) FullServerName() string {
	var _ms C.struct_miqt_string = C.QLocalSocket_fullServerName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocalSocket) Abort() {
	C.QLocalSocket_abort(this.h)
}

func (this *QLocalSocket) IsSequential() bool {
	return (bool)(C.QLocalSocket_isSequential(this.h))
}

func (this *QLocalSocket) BytesAvailable() int64 {
	return (int64)(C.QLocalSocket_bytesAvailable(this.h))
}

func (this *QLocalSocket) BytesToWrite() int64 {
	return (int64)(C.QLocalSocket_bytesToWrite(this.h))
}

func (this *QLocalSocket) CanReadLine() bool {
	return (bool)(C.QLocalSocket_canReadLine(this.h))
}

func (this *QLocalSocket) Open(openMode qt6.QIODeviceBase__OpenModeFlag) bool {
	return (bool)(C.QLocalSocket_open(this.h, (C.int)(openMode)))
}

func (this *QLocalSocket) Close() {
	C.QLocalSocket_close(this.h)
}

func (this *QLocalSocket) Error() QLocalSocket__LocalSocketError {
	return (QLocalSocket__LocalSocketError)(C.QLocalSocket_error(this.h))
}

func (this *QLocalSocket) Flush() bool {
	return (bool)(C.QLocalSocket_flush(this.h))
}

func (this *QLocalSocket) IsValid() bool {
	return (bool)(C.QLocalSocket_isValid(this.h))
}

func (this *QLocalSocket) ReadBufferSize() int64 {
	return (int64)(C.QLocalSocket_readBufferSize(this.h))
}

func (this *QLocalSocket) SetReadBufferSize(size int64) {
	C.QLocalSocket_setReadBufferSize(this.h, (C.longlong)(size))
}

func (this *QLocalSocket) SetSocketDescriptor(socketDescriptor uintptr) bool {
	return (bool)(C.QLocalSocket_setSocketDescriptor(this.h, (C.intptr_t)(socketDescriptor)))
}

func (this *QLocalSocket) SocketDescriptor() uintptr {
	return (uintptr)(C.QLocalSocket_socketDescriptor(this.h))
}

func (this *QLocalSocket) SetSocketOptions(option QLocalSocket__SocketOption) {
	C.QLocalSocket_setSocketOptions(this.h, (C.int)(option))
}

func (this *QLocalSocket) SocketOptions() QLocalSocket__SocketOption {
	return (QLocalSocket__SocketOption)(C.QLocalSocket_socketOptions(this.h))
}

func (this *QLocalSocket) State() QLocalSocket__LocalSocketState {
	return (QLocalSocket__LocalSocketState)(C.QLocalSocket_state(this.h))
}

func (this *QLocalSocket) WaitForBytesWritten(msecs int) bool {
	return (bool)(C.QLocalSocket_waitForBytesWritten(this.h, (C.int)(msecs)))
}

func (this *QLocalSocket) WaitForConnected() bool {
	return (bool)(C.QLocalSocket_waitForConnected(this.h))
}

func (this *QLocalSocket) WaitForDisconnected() bool {
	return (bool)(C.QLocalSocket_waitForDisconnected(this.h))
}

func (this *QLocalSocket) WaitForReadyRead(msecs int) bool {
	return (bool)(C.QLocalSocket_waitForReadyRead(this.h, (C.int)(msecs)))
}

func (this *QLocalSocket) Connected() {
	C.QLocalSocket_connected(this.h)
}
func (this *QLocalSocket) OnConnected(slot func()) {
	C.QLocalSocket_connect_connected(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLocalSocket_connected
func miqt_exec_callback_QLocalSocket_connected(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QLocalSocket) Disconnected() {
	C.QLocalSocket_disconnected(this.h)
}
func (this *QLocalSocket) OnDisconnected(slot func()) {
	C.QLocalSocket_connect_disconnected(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLocalSocket_disconnected
func miqt_exec_callback_QLocalSocket_disconnected(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QLocalSocket) ErrorOccurred(socketError QLocalSocket__LocalSocketError) {
	C.QLocalSocket_errorOccurred(this.h, (C.int)(socketError))
}
func (this *QLocalSocket) OnErrorOccurred(slot func(socketError QLocalSocket__LocalSocketError)) {
	C.QLocalSocket_connect_errorOccurred(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLocalSocket_errorOccurred
func miqt_exec_callback_QLocalSocket_errorOccurred(cb C.intptr_t, socketError C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(socketError QLocalSocket__LocalSocketError))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QLocalSocket__LocalSocketError)(socketError)

	gofunc(slotval1)
}

func (this *QLocalSocket) StateChanged(socketState QLocalSocket__LocalSocketState) {
	C.QLocalSocket_stateChanged(this.h, (C.int)(socketState))
}
func (this *QLocalSocket) OnStateChanged(slot func(socketState QLocalSocket__LocalSocketState)) {
	C.QLocalSocket_connect_stateChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLocalSocket_stateChanged
func miqt_exec_callback_QLocalSocket_stateChanged(cb C.intptr_t, socketState C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(socketState QLocalSocket__LocalSocketState))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QLocalSocket__LocalSocketState)(socketState)

	gofunc(slotval1)
}

func QLocalSocket_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QLocalSocket_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QLocalSocket_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QLocalSocket_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocalSocket) ConnectToServer1(openMode qt6.QIODeviceBase__OpenModeFlag) {
	C.QLocalSocket_connectToServer1(this.h, (C.int)(openMode))
}

func (this *QLocalSocket) ConnectToServer2(name string, openMode qt6.QIODeviceBase__OpenModeFlag) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QLocalSocket_connectToServer2(this.h, name_ms, (C.int)(openMode))
}

func (this *QLocalSocket) SetSocketDescriptor2(socketDescriptor uintptr, socketState QLocalSocket__LocalSocketState) bool {
	return (bool)(C.QLocalSocket_setSocketDescriptor2(this.h, (C.intptr_t)(socketDescriptor), (C.int)(socketState)))
}

func (this *QLocalSocket) SetSocketDescriptor3(socketDescriptor uintptr, socketState QLocalSocket__LocalSocketState, openMode qt6.QIODeviceBase__OpenModeFlag) bool {
	return (bool)(C.QLocalSocket_setSocketDescriptor3(this.h, (C.intptr_t)(socketDescriptor), (C.int)(socketState), (C.int)(openMode)))
}

func (this *QLocalSocket) WaitForConnected1(msecs int) bool {
	return (bool)(C.QLocalSocket_waitForConnected1(this.h, (C.int)(msecs)))
}

func (this *QLocalSocket) WaitForDisconnected1(msecs int) bool {
	return (bool)(C.QLocalSocket_waitForDisconnected1(this.h, (C.int)(msecs)))
}

// SetOpenMode can only be called from a QLocalSocket that was directly constructed.
func (this *QLocalSocket) SetOpenMode(openMode qt6.QIODeviceBase__OpenModeFlag) {

	var _dynamic_cast_ok C.bool = false
	C.QLocalSocket_protectedbase_setOpenMode(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(openMode))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SetErrorString can only be called from a QLocalSocket that was directly constructed.
func (this *QLocalSocket) SetErrorString(errorString string) {
	errorString_ms := C.struct_miqt_string{}
	errorString_ms.data = C.CString(errorString)
	errorString_ms.len = C.size_t(len(errorString))
	defer C.free(unsafe.Pointer(errorString_ms.data))

	var _dynamic_cast_ok C.bool = false
	C.QLocalSocket_protectedbase_setErrorString(&_dynamic_cast_ok, unsafe.Pointer(this.h), errorString_ms)

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Sender can only be called from a QLocalSocket that was directly constructed.
func (this *QLocalSocket) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QLocalSocket_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QLocalSocket that was directly constructed.
func (this *QLocalSocket) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QLocalSocket_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QLocalSocket that was directly constructed.
func (this *QLocalSocket) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QLocalSocket_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QLocalSocket that was directly constructed.
func (this *QLocalSocket) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QLocalSocket_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QLocalSocket) callVirtualBase_IsSequential() bool {

	return (bool)(C.QLocalSocket_virtualbase_isSequential(unsafe.Pointer(this.h)))

}
func (this *QLocalSocket) OnIsSequential(slot func(super func() bool) bool) {
	ok := C.QLocalSocket_override_virtual_isSequential(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLocalSocket_isSequential
func miqt_exec_callback_QLocalSocket_isSequential(self *C.QLocalSocket, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QLocalSocket{h: self}).callVirtualBase_IsSequential)

	return (C.bool)(virtualReturn)

}

func (this *QLocalSocket) callVirtualBase_BytesAvailable() int64 {

	return (int64)(C.QLocalSocket_virtualbase_bytesAvailable(unsafe.Pointer(this.h)))

}
func (this *QLocalSocket) OnBytesAvailable(slot func(super func() int64) int64) {
	ok := C.QLocalSocket_override_virtual_bytesAvailable(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLocalSocket_bytesAvailable
func miqt_exec_callback_QLocalSocket_bytesAvailable(self *C.QLocalSocket, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QLocalSocket{h: self}).callVirtualBase_BytesAvailable)

	return (C.longlong)(virtualReturn)

}

func (this *QLocalSocket) callVirtualBase_BytesToWrite() int64 {

	return (int64)(C.QLocalSocket_virtualbase_bytesToWrite(unsafe.Pointer(this.h)))

}
func (this *QLocalSocket) OnBytesToWrite(slot func(super func() int64) int64) {
	ok := C.QLocalSocket_override_virtual_bytesToWrite(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLocalSocket_bytesToWrite
func miqt_exec_callback_QLocalSocket_bytesToWrite(self *C.QLocalSocket, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QLocalSocket{h: self}).callVirtualBase_BytesToWrite)

	return (C.longlong)(virtualReturn)

}

func (this *QLocalSocket) callVirtualBase_CanReadLine() bool {

	return (bool)(C.QLocalSocket_virtualbase_canReadLine(unsafe.Pointer(this.h)))

}
func (this *QLocalSocket) OnCanReadLine(slot func(super func() bool) bool) {
	ok := C.QLocalSocket_override_virtual_canReadLine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLocalSocket_canReadLine
func miqt_exec_callback_QLocalSocket_canReadLine(self *C.QLocalSocket, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QLocalSocket{h: self}).callVirtualBase_CanReadLine)

	return (C.bool)(virtualReturn)

}

func (this *QLocalSocket) callVirtualBase_Open(openMode qt6.QIODeviceBase__OpenModeFlag) bool {

	return (bool)(C.QLocalSocket_virtualbase_open(unsafe.Pointer(this.h), (C.int)(openMode)))

}
func (this *QLocalSocket) OnOpen(slot func(super func(openMode qt6.QIODeviceBase__OpenModeFlag) bool, openMode qt6.QIODeviceBase__OpenModeFlag) bool) {
	ok := C.QLocalSocket_override_virtual_open(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLocalSocket_open
func miqt_exec_callback_QLocalSocket_open(self *C.QLocalSocket, cb C.intptr_t, openMode C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(openMode qt6.QIODeviceBase__OpenModeFlag) bool, openMode qt6.QIODeviceBase__OpenModeFlag) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt6.QIODeviceBase__OpenModeFlag)(openMode)

	virtualReturn := gofunc((&QLocalSocket{h: self}).callVirtualBase_Open, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QLocalSocket) callVirtualBase_Close() {

	C.QLocalSocket_virtualbase_close(unsafe.Pointer(this.h))

}
func (this *QLocalSocket) OnClose(slot func(super func())) {
	ok := C.QLocalSocket_override_virtual_close(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLocalSocket_close
func miqt_exec_callback_QLocalSocket_close(self *C.QLocalSocket, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QLocalSocket{h: self}).callVirtualBase_Close)

}

func (this *QLocalSocket) callVirtualBase_WaitForBytesWritten(msecs int) bool {

	return (bool)(C.QLocalSocket_virtualbase_waitForBytesWritten(unsafe.Pointer(this.h), (C.int)(msecs)))

}
func (this *QLocalSocket) OnWaitForBytesWritten(slot func(super func(msecs int) bool, msecs int) bool) {
	ok := C.QLocalSocket_override_virtual_waitForBytesWritten(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLocalSocket_waitForBytesWritten
func miqt_exec_callback_QLocalSocket_waitForBytesWritten(self *C.QLocalSocket, cb C.intptr_t, msecs C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(msecs int) bool, msecs int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(msecs)

	virtualReturn := gofunc((&QLocalSocket{h: self}).callVirtualBase_WaitForBytesWritten, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QLocalSocket) callVirtualBase_WaitForReadyRead(msecs int) bool {

	return (bool)(C.QLocalSocket_virtualbase_waitForReadyRead(unsafe.Pointer(this.h), (C.int)(msecs)))

}
func (this *QLocalSocket) OnWaitForReadyRead(slot func(super func(msecs int) bool, msecs int) bool) {
	ok := C.QLocalSocket_override_virtual_waitForReadyRead(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLocalSocket_waitForReadyRead
func miqt_exec_callback_QLocalSocket_waitForReadyRead(self *C.QLocalSocket, cb C.intptr_t, msecs C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(msecs int) bool, msecs int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(msecs)

	virtualReturn := gofunc((&QLocalSocket{h: self}).callVirtualBase_WaitForReadyRead, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QLocalSocket) callVirtualBase_ReadData(param1 string, param2 int64) int64 {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))

	return (int64)(C.QLocalSocket_virtualbase_readData(unsafe.Pointer(this.h), param1_Cstring, (C.longlong)(param2)))

}
func (this *QLocalSocket) OnReadData(slot func(super func(param1 string, param2 int64) int64, param1 string, param2 int64) int64) {
	ok := C.QLocalSocket_override_virtual_readData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLocalSocket_readData
func miqt_exec_callback_QLocalSocket_readData(self *C.QLocalSocket, cb C.intptr_t, param1 *C.char, param2 C.longlong) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 string, param2 int64) int64, param1 string, param2 int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	param1_ret := param1
	slotval1 := C.GoString(param1_ret)

	slotval2 := (int64)(param2)

	virtualReturn := gofunc((&QLocalSocket{h: self}).callVirtualBase_ReadData, slotval1, slotval2)

	return (C.longlong)(virtualReturn)

}

func (this *QLocalSocket) callVirtualBase_ReadLineData(data string, maxSize int64) int64 {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))

	return (int64)(C.QLocalSocket_virtualbase_readLineData(unsafe.Pointer(this.h), data_Cstring, (C.longlong)(maxSize)))

}
func (this *QLocalSocket) OnReadLineData(slot func(super func(data string, maxSize int64) int64, data string, maxSize int64) int64) {
	ok := C.QLocalSocket_override_virtual_readLineData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLocalSocket_readLineData
func miqt_exec_callback_QLocalSocket_readLineData(self *C.QLocalSocket, cb C.intptr_t, data *C.char, maxSize C.longlong) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(data string, maxSize int64) int64, data string, maxSize int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	data_ret := data
	slotval1 := C.GoString(data_ret)

	slotval2 := (int64)(maxSize)

	virtualReturn := gofunc((&QLocalSocket{h: self}).callVirtualBase_ReadLineData, slotval1, slotval2)

	return (C.longlong)(virtualReturn)

}

func (this *QLocalSocket) callVirtualBase_SkipData(maxSize int64) int64 {

	return (int64)(C.QLocalSocket_virtualbase_skipData(unsafe.Pointer(this.h), (C.longlong)(maxSize)))

}
func (this *QLocalSocket) OnSkipData(slot func(super func(maxSize int64) int64, maxSize int64) int64) {
	ok := C.QLocalSocket_override_virtual_skipData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLocalSocket_skipData
func miqt_exec_callback_QLocalSocket_skipData(self *C.QLocalSocket, cb C.intptr_t, maxSize C.longlong) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(maxSize int64) int64, maxSize int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int64)(maxSize)

	virtualReturn := gofunc((&QLocalSocket{h: self}).callVirtualBase_SkipData, slotval1)

	return (C.longlong)(virtualReturn)

}

func (this *QLocalSocket) callVirtualBase_WriteData(param1 string, param2 int64) int64 {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))

	return (int64)(C.QLocalSocket_virtualbase_writeData(unsafe.Pointer(this.h), param1_Cstring, (C.longlong)(param2)))

}
func (this *QLocalSocket) OnWriteData(slot func(super func(param1 string, param2 int64) int64, param1 string, param2 int64) int64) {
	ok := C.QLocalSocket_override_virtual_writeData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLocalSocket_writeData
func miqt_exec_callback_QLocalSocket_writeData(self *C.QLocalSocket, cb C.intptr_t, param1 *C.const_char, param2 C.longlong) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 string, param2 int64) int64, param1 string, param2 int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	param1_ret := param1
	slotval1 := C.GoString(param1_ret)

	slotval2 := (int64)(param2)

	virtualReturn := gofunc((&QLocalSocket{h: self}).callVirtualBase_WriteData, slotval1, slotval2)

	return (C.longlong)(virtualReturn)

}

func (this *QLocalSocket) callVirtualBase_Pos() int64 {

	return (int64)(C.QLocalSocket_virtualbase_pos(unsafe.Pointer(this.h)))

}
func (this *QLocalSocket) OnPos(slot func(super func() int64) int64) {
	ok := C.QLocalSocket_override_virtual_pos(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLocalSocket_pos
func miqt_exec_callback_QLocalSocket_pos(self *C.QLocalSocket, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QLocalSocket{h: self}).callVirtualBase_Pos)

	return (C.longlong)(virtualReturn)

}

func (this *QLocalSocket) callVirtualBase_Size() int64 {

	return (int64)(C.QLocalSocket_virtualbase_size(unsafe.Pointer(this.h)))

}
func (this *QLocalSocket) OnSize(slot func(super func() int64) int64) {
	ok := C.QLocalSocket_override_virtual_size(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLocalSocket_size
func miqt_exec_callback_QLocalSocket_size(self *C.QLocalSocket, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QLocalSocket{h: self}).callVirtualBase_Size)

	return (C.longlong)(virtualReturn)

}

func (this *QLocalSocket) callVirtualBase_Seek(pos int64) bool {

	return (bool)(C.QLocalSocket_virtualbase_seek(unsafe.Pointer(this.h), (C.longlong)(pos)))

}
func (this *QLocalSocket) OnSeek(slot func(super func(pos int64) bool, pos int64) bool) {
	ok := C.QLocalSocket_override_virtual_seek(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLocalSocket_seek
func miqt_exec_callback_QLocalSocket_seek(self *C.QLocalSocket, cb C.intptr_t, pos C.longlong) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(pos int64) bool, pos int64) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int64)(pos)

	virtualReturn := gofunc((&QLocalSocket{h: self}).callVirtualBase_Seek, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QLocalSocket) callVirtualBase_AtEnd() bool {

	return (bool)(C.QLocalSocket_virtualbase_atEnd(unsafe.Pointer(this.h)))

}
func (this *QLocalSocket) OnAtEnd(slot func(super func() bool) bool) {
	ok := C.QLocalSocket_override_virtual_atEnd(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLocalSocket_atEnd
func miqt_exec_callback_QLocalSocket_atEnd(self *C.QLocalSocket, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QLocalSocket{h: self}).callVirtualBase_AtEnd)

	return (C.bool)(virtualReturn)

}

func (this *QLocalSocket) callVirtualBase_Reset() bool {

	return (bool)(C.QLocalSocket_virtualbase_reset(unsafe.Pointer(this.h)))

}
func (this *QLocalSocket) OnReset(slot func(super func() bool) bool) {
	ok := C.QLocalSocket_override_virtual_reset(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLocalSocket_reset
func miqt_exec_callback_QLocalSocket_reset(self *C.QLocalSocket, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QLocalSocket{h: self}).callVirtualBase_Reset)

	return (C.bool)(virtualReturn)

}

func (this *QLocalSocket) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QLocalSocket_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QLocalSocket) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QLocalSocket_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLocalSocket_event
func miqt_exec_callback_QLocalSocket_event(self *C.QLocalSocket, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QLocalSocket{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QLocalSocket) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QLocalSocket_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QLocalSocket) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QLocalSocket_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLocalSocket_eventFilter
func miqt_exec_callback_QLocalSocket_eventFilter(self *C.QLocalSocket, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QLocalSocket{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QLocalSocket) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QLocalSocket_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QLocalSocket) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QLocalSocket_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLocalSocket_timerEvent
func miqt_exec_callback_QLocalSocket_timerEvent(self *C.QLocalSocket, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QLocalSocket{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QLocalSocket) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QLocalSocket_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QLocalSocket) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QLocalSocket_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLocalSocket_childEvent
func miqt_exec_callback_QLocalSocket_childEvent(self *C.QLocalSocket, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QLocalSocket{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QLocalSocket) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QLocalSocket_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QLocalSocket) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QLocalSocket_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLocalSocket_customEvent
func miqt_exec_callback_QLocalSocket_customEvent(self *C.QLocalSocket, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QLocalSocket{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QLocalSocket) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QLocalSocket_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QLocalSocket) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QLocalSocket_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLocalSocket_connectNotify
func miqt_exec_callback_QLocalSocket_connectNotify(self *C.QLocalSocket, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QLocalSocket{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QLocalSocket) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QLocalSocket_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QLocalSocket) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QLocalSocket_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLocalSocket_disconnectNotify
func miqt_exec_callback_QLocalSocket_disconnectNotify(self *C.QLocalSocket, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QLocalSocket{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QLocalSocket) Delete() {
	C.QLocalSocket_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QLocalSocket) GoGC() {
	runtime.SetFinalizer(this, func(this *QLocalSocket) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
