package network

/*

#include "gen_qabstractsocket.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QAbstractSocket__SocketType int

const (
	QAbstractSocket__TcpSocket         QAbstractSocket__SocketType = 0
	QAbstractSocket__UdpSocket         QAbstractSocket__SocketType = 1
	QAbstractSocket__SctpSocket        QAbstractSocket__SocketType = 2
	QAbstractSocket__UnknownSocketType QAbstractSocket__SocketType = -1
)

type QAbstractSocket__NetworkLayerProtocol int

const (
	QAbstractSocket__IPv4Protocol                QAbstractSocket__NetworkLayerProtocol = 0
	QAbstractSocket__IPv6Protocol                QAbstractSocket__NetworkLayerProtocol = 1
	QAbstractSocket__AnyIPProtocol               QAbstractSocket__NetworkLayerProtocol = 2
	QAbstractSocket__UnknownNetworkLayerProtocol QAbstractSocket__NetworkLayerProtocol = -1
)

type QAbstractSocket__SocketError int

const (
	QAbstractSocket__ConnectionRefusedError           QAbstractSocket__SocketError = 0
	QAbstractSocket__RemoteHostClosedError            QAbstractSocket__SocketError = 1
	QAbstractSocket__HostNotFoundError                QAbstractSocket__SocketError = 2
	QAbstractSocket__SocketAccessError                QAbstractSocket__SocketError = 3
	QAbstractSocket__SocketResourceError              QAbstractSocket__SocketError = 4
	QAbstractSocket__SocketTimeoutError               QAbstractSocket__SocketError = 5
	QAbstractSocket__DatagramTooLargeError            QAbstractSocket__SocketError = 6
	QAbstractSocket__NetworkError                     QAbstractSocket__SocketError = 7
	QAbstractSocket__AddressInUseError                QAbstractSocket__SocketError = 8
	QAbstractSocket__SocketAddressNotAvailableError   QAbstractSocket__SocketError = 9
	QAbstractSocket__UnsupportedSocketOperationError  QAbstractSocket__SocketError = 10
	QAbstractSocket__UnfinishedSocketOperationError   QAbstractSocket__SocketError = 11
	QAbstractSocket__ProxyAuthenticationRequiredError QAbstractSocket__SocketError = 12
	QAbstractSocket__SslHandshakeFailedError          QAbstractSocket__SocketError = 13
	QAbstractSocket__ProxyConnectionRefusedError      QAbstractSocket__SocketError = 14
	QAbstractSocket__ProxyConnectionClosedError       QAbstractSocket__SocketError = 15
	QAbstractSocket__ProxyConnectionTimeoutError      QAbstractSocket__SocketError = 16
	QAbstractSocket__ProxyNotFoundError               QAbstractSocket__SocketError = 17
	QAbstractSocket__ProxyProtocolError               QAbstractSocket__SocketError = 18
	QAbstractSocket__OperationError                   QAbstractSocket__SocketError = 19
	QAbstractSocket__SslInternalError                 QAbstractSocket__SocketError = 20
	QAbstractSocket__SslInvalidUserDataError          QAbstractSocket__SocketError = 21
	QAbstractSocket__TemporaryError                   QAbstractSocket__SocketError = 22
	QAbstractSocket__UnknownSocketError               QAbstractSocket__SocketError = -1
)

type QAbstractSocket__SocketState int

const (
	QAbstractSocket__UnconnectedState QAbstractSocket__SocketState = 0
	QAbstractSocket__HostLookupState  QAbstractSocket__SocketState = 1
	QAbstractSocket__ConnectingState  QAbstractSocket__SocketState = 2
	QAbstractSocket__ConnectedState   QAbstractSocket__SocketState = 3
	QAbstractSocket__BoundState       QAbstractSocket__SocketState = 4
	QAbstractSocket__ListeningState   QAbstractSocket__SocketState = 5
	QAbstractSocket__ClosingState     QAbstractSocket__SocketState = 6
)

type QAbstractSocket__SocketOption int

const (
	QAbstractSocket__LowDelayOption                QAbstractSocket__SocketOption = 0
	QAbstractSocket__KeepAliveOption               QAbstractSocket__SocketOption = 1
	QAbstractSocket__MulticastTtlOption            QAbstractSocket__SocketOption = 2
	QAbstractSocket__MulticastLoopbackOption       QAbstractSocket__SocketOption = 3
	QAbstractSocket__TypeOfServiceOption           QAbstractSocket__SocketOption = 4
	QAbstractSocket__SendBufferSizeSocketOption    QAbstractSocket__SocketOption = 5
	QAbstractSocket__ReceiveBufferSizeSocketOption QAbstractSocket__SocketOption = 6
	QAbstractSocket__PathMtuSocketOption           QAbstractSocket__SocketOption = 7
)

type QAbstractSocket__BindFlag int

const (
	QAbstractSocket__DefaultForPlatform QAbstractSocket__BindFlag = 0
	QAbstractSocket__ShareAddress       QAbstractSocket__BindFlag = 1
	QAbstractSocket__DontShareAddress   QAbstractSocket__BindFlag = 2
	QAbstractSocket__ReuseAddressHint   QAbstractSocket__BindFlag = 4
)

type QAbstractSocket__PauseMode int

const (
	QAbstractSocket__PauseNever       QAbstractSocket__PauseMode = 0
	QAbstractSocket__PauseOnSslErrors QAbstractSocket__PauseMode = 1
)

type QAbstractSocket struct {
	h *C.QAbstractSocket
	*qt.QIODevice
}

func (this *QAbstractSocket) cPointer() *C.QAbstractSocket {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAbstractSocket) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAbstractSocket constructs the type using only CGO pointers.
func newQAbstractSocket(h *C.QAbstractSocket) *QAbstractSocket {
	if h == nil {
		return nil
	}
	var outptr_QIODevice *C.QIODevice = nil
	C.QAbstractSocket_virtbase(h, &outptr_QIODevice)

	return &QAbstractSocket{h: h,
		QIODevice: qt.UnsafeNewQIODevice(unsafe.Pointer(outptr_QIODevice))}
}

// UnsafeNewQAbstractSocket constructs the type using only unsafe pointers.
func UnsafeNewQAbstractSocket(h unsafe.Pointer) *QAbstractSocket {
	return newQAbstractSocket((*C.QAbstractSocket)(h))
}

// NewQAbstractSocket constructs a new QAbstractSocket object.
func NewQAbstractSocket(socketType QAbstractSocket__SocketType, parent *qt.QObject) *QAbstractSocket {

	return newQAbstractSocket(C.QAbstractSocket_new((C.int)(socketType), (*C.QObject)(parent.UnsafePointer())))
}

func (this *QAbstractSocket) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QAbstractSocket_metaObject(this.h)))
}

func (this *QAbstractSocket) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QAbstractSocket_metacast(this.h, param1_Cstring))
}

func QAbstractSocket_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractSocket_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractSocket_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractSocket_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAbstractSocket) Resume() {
	C.QAbstractSocket_resume(this.h)
}

func (this *QAbstractSocket) PauseMode() QAbstractSocket__PauseMode {
	return (QAbstractSocket__PauseMode)(C.QAbstractSocket_pauseMode(this.h))
}

func (this *QAbstractSocket) SetPauseMode(pauseMode QAbstractSocket__PauseMode) {
	C.QAbstractSocket_setPauseMode(this.h, (C.int)(pauseMode))
}

func (this *QAbstractSocket) Bind(address *QHostAddress) bool {
	return (bool)(C.QAbstractSocket_bind(this.h, address.cPointer()))
}

func (this *QAbstractSocket) Bind2() bool {
	return (bool)(C.QAbstractSocket_bind2(this.h))
}

func (this *QAbstractSocket) ConnectToHost(hostName string, port uint16, mode qt.QIODevice__OpenModeFlag, protocol QAbstractSocket__NetworkLayerProtocol) {
	hostName_ms := C.struct_miqt_string{}
	hostName_ms.data = C.CString(hostName)
	hostName_ms.len = C.size_t(len(hostName))
	defer C.free(unsafe.Pointer(hostName_ms.data))
	C.QAbstractSocket_connectToHost(this.h, hostName_ms, (C.uint16_t)(port), (C.int)(mode), (C.int)(protocol))
}

func (this *QAbstractSocket) ConnectToHost2(address *QHostAddress, port uint16, mode qt.QIODevice__OpenModeFlag) {
	C.QAbstractSocket_connectToHost2(this.h, address.cPointer(), (C.uint16_t)(port), (C.int)(mode))
}

func (this *QAbstractSocket) DisconnectFromHost() {
	C.QAbstractSocket_disconnectFromHost(this.h)
}

func (this *QAbstractSocket) IsValid() bool {
	return (bool)(C.QAbstractSocket_isValid(this.h))
}

func (this *QAbstractSocket) BytesAvailable() int64 {
	return (int64)(C.QAbstractSocket_bytesAvailable(this.h))
}

func (this *QAbstractSocket) BytesToWrite() int64 {
	return (int64)(C.QAbstractSocket_bytesToWrite(this.h))
}

func (this *QAbstractSocket) CanReadLine() bool {
	return (bool)(C.QAbstractSocket_canReadLine(this.h))
}

func (this *QAbstractSocket) LocalPort() uint16 {
	return (uint16)(C.QAbstractSocket_localPort(this.h))
}

func (this *QAbstractSocket) LocalAddress() *QHostAddress {
	_goptr := newQHostAddress(C.QAbstractSocket_localAddress(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractSocket) PeerPort() uint16 {
	return (uint16)(C.QAbstractSocket_peerPort(this.h))
}

func (this *QAbstractSocket) PeerAddress() *QHostAddress {
	_goptr := newQHostAddress(C.QAbstractSocket_peerAddress(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractSocket) PeerName() string {
	var _ms C.struct_miqt_string = C.QAbstractSocket_peerName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAbstractSocket) ReadBufferSize() int64 {
	return (int64)(C.QAbstractSocket_readBufferSize(this.h))
}

func (this *QAbstractSocket) SetReadBufferSize(size int64) {
	C.QAbstractSocket_setReadBufferSize(this.h, (C.longlong)(size))
}

func (this *QAbstractSocket) Abort() {
	C.QAbstractSocket_abort(this.h)
}

func (this *QAbstractSocket) SocketDescriptor() uintptr {
	return (uintptr)(C.QAbstractSocket_socketDescriptor(this.h))
}

func (this *QAbstractSocket) SetSocketDescriptor(socketDescriptor uintptr, state QAbstractSocket__SocketState, openMode qt.QIODevice__OpenModeFlag) bool {
	return (bool)(C.QAbstractSocket_setSocketDescriptor(this.h, (C.intptr_t)(socketDescriptor), (C.int)(state), (C.int)(openMode)))
}

func (this *QAbstractSocket) SetSocketOption(option QAbstractSocket__SocketOption, value *qt.QVariant) {
	C.QAbstractSocket_setSocketOption(this.h, (C.int)(option), (*C.QVariant)(value.UnsafePointer()))
}

func (this *QAbstractSocket) SocketOption(option QAbstractSocket__SocketOption) *qt.QVariant {
	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QAbstractSocket_socketOption(this.h, (C.int)(option))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractSocket) SocketType() QAbstractSocket__SocketType {
	return (QAbstractSocket__SocketType)(C.QAbstractSocket_socketType(this.h))
}

func (this *QAbstractSocket) State() QAbstractSocket__SocketState {
	return (QAbstractSocket__SocketState)(C.QAbstractSocket_state(this.h))
}

func (this *QAbstractSocket) Error() QAbstractSocket__SocketError {
	return (QAbstractSocket__SocketError)(C.QAbstractSocket_error(this.h))
}

func (this *QAbstractSocket) Close() {
	C.QAbstractSocket_close(this.h)
}

func (this *QAbstractSocket) IsSequential() bool {
	return (bool)(C.QAbstractSocket_isSequential(this.h))
}

func (this *QAbstractSocket) AtEnd() bool {
	return (bool)(C.QAbstractSocket_atEnd(this.h))
}

func (this *QAbstractSocket) Flush() bool {
	return (bool)(C.QAbstractSocket_flush(this.h))
}

func (this *QAbstractSocket) WaitForConnected(msecs int) bool {
	return (bool)(C.QAbstractSocket_waitForConnected(this.h, (C.int)(msecs)))
}

func (this *QAbstractSocket) WaitForReadyRead(msecs int) bool {
	return (bool)(C.QAbstractSocket_waitForReadyRead(this.h, (C.int)(msecs)))
}

func (this *QAbstractSocket) WaitForBytesWritten(msecs int) bool {
	return (bool)(C.QAbstractSocket_waitForBytesWritten(this.h, (C.int)(msecs)))
}

func (this *QAbstractSocket) WaitForDisconnected(msecs int) bool {
	return (bool)(C.QAbstractSocket_waitForDisconnected(this.h, (C.int)(msecs)))
}

func (this *QAbstractSocket) SetProxy(networkProxy *QNetworkProxy) {
	C.QAbstractSocket_setProxy(this.h, networkProxy.cPointer())
}

func (this *QAbstractSocket) Proxy() *QNetworkProxy {
	_goptr := newQNetworkProxy(C.QAbstractSocket_proxy(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractSocket) ProtocolTag() string {
	var _ms C.struct_miqt_string = C.QAbstractSocket_protocolTag(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAbstractSocket) SetProtocolTag(tag string) {
	tag_ms := C.struct_miqt_string{}
	tag_ms.data = C.CString(tag)
	tag_ms.len = C.size_t(len(tag))
	defer C.free(unsafe.Pointer(tag_ms.data))
	C.QAbstractSocket_setProtocolTag(this.h, tag_ms)
}

func (this *QAbstractSocket) HostFound() {
	C.QAbstractSocket_hostFound(this.h)
}
func (this *QAbstractSocket) OnHostFound(slot func()) {
	C.QAbstractSocket_connect_hostFound(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSocket_hostFound
func miqt_exec_callback_QAbstractSocket_hostFound(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QAbstractSocket) Connected() {
	C.QAbstractSocket_connected(this.h)
}
func (this *QAbstractSocket) OnConnected(slot func()) {
	C.QAbstractSocket_connect_connected(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSocket_connected
func miqt_exec_callback_QAbstractSocket_connected(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QAbstractSocket) Disconnected() {
	C.QAbstractSocket_disconnected(this.h)
}
func (this *QAbstractSocket) OnDisconnected(slot func()) {
	C.QAbstractSocket_connect_disconnected(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSocket_disconnected
func miqt_exec_callback_QAbstractSocket_disconnected(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QAbstractSocket) StateChanged(param1 QAbstractSocket__SocketState) {
	C.QAbstractSocket_stateChanged(this.h, (C.int)(param1))
}
func (this *QAbstractSocket) OnStateChanged(slot func(param1 QAbstractSocket__SocketState)) {
	C.QAbstractSocket_connect_stateChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSocket_stateChanged
func miqt_exec_callback_QAbstractSocket_stateChanged(cb C.intptr_t, param1 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 QAbstractSocket__SocketState))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAbstractSocket__SocketState)(param1)

	gofunc(slotval1)
}

func (this *QAbstractSocket) ErrorWithQAbstractSocketSocketError(param1 QAbstractSocket__SocketError) {
	C.QAbstractSocket_errorWithQAbstractSocketSocketError(this.h, (C.int)(param1))
}
func (this *QAbstractSocket) OnErrorWithQAbstractSocketSocketError(slot func(param1 QAbstractSocket__SocketError)) {
	C.QAbstractSocket_connect_errorWithQAbstractSocketSocketError(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSocket_errorWithQAbstractSocketSocketError
func miqt_exec_callback_QAbstractSocket_errorWithQAbstractSocketSocketError(cb C.intptr_t, param1 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 QAbstractSocket__SocketError))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAbstractSocket__SocketError)(param1)

	gofunc(slotval1)
}

func (this *QAbstractSocket) ErrorOccurred(param1 QAbstractSocket__SocketError) {
	C.QAbstractSocket_errorOccurred(this.h, (C.int)(param1))
}
func (this *QAbstractSocket) OnErrorOccurred(slot func(param1 QAbstractSocket__SocketError)) {
	C.QAbstractSocket_connect_errorOccurred(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSocket_errorOccurred
func miqt_exec_callback_QAbstractSocket_errorOccurred(cb C.intptr_t, param1 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 QAbstractSocket__SocketError))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAbstractSocket__SocketError)(param1)

	gofunc(slotval1)
}

func (this *QAbstractSocket) ProxyAuthenticationRequired(proxy *QNetworkProxy, authenticator *QAuthenticator) {
	C.QAbstractSocket_proxyAuthenticationRequired(this.h, proxy.cPointer(), authenticator.cPointer())
}
func (this *QAbstractSocket) OnProxyAuthenticationRequired(slot func(proxy *QNetworkProxy, authenticator *QAuthenticator)) {
	C.QAbstractSocket_connect_proxyAuthenticationRequired(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSocket_proxyAuthenticationRequired
func miqt_exec_callback_QAbstractSocket_proxyAuthenticationRequired(cb C.intptr_t, proxy *C.QNetworkProxy, authenticator *C.QAuthenticator) {
	gofunc, ok := cgo.Handle(cb).Value().(func(proxy *QNetworkProxy, authenticator *QAuthenticator))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQNetworkProxy(proxy)

	slotval2 := newQAuthenticator(authenticator)

	gofunc(slotval1, slotval2)
}

func QAbstractSocket_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractSocket_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractSocket_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractSocket_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractSocket_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractSocket_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractSocket_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractSocket_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAbstractSocket) Bind22(address *QHostAddress, port uint16) bool {
	return (bool)(C.QAbstractSocket_bind22(this.h, address.cPointer(), (C.uint16_t)(port)))
}

func (this *QAbstractSocket) Bind3(address *QHostAddress, port uint16, mode QAbstractSocket__BindFlag) bool {
	return (bool)(C.QAbstractSocket_bind3(this.h, address.cPointer(), (C.uint16_t)(port), (C.int)(mode)))
}

func (this *QAbstractSocket) Bind1(port uint16) bool {
	return (bool)(C.QAbstractSocket_bind1(this.h, (C.uint16_t)(port)))
}

func (this *QAbstractSocket) Bind23(port uint16, mode QAbstractSocket__BindFlag) bool {
	return (bool)(C.QAbstractSocket_bind23(this.h, (C.uint16_t)(port), (C.int)(mode)))
}

// SetSocketState can only be called from a QAbstractSocket that was directly constructed.
func (this *QAbstractSocket) SetSocketState(state QAbstractSocket__SocketState) {

	var _dynamic_cast_ok C.bool = false
	C.QAbstractSocket_protectedbase_setSocketState(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(state))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SetSocketError can only be called from a QAbstractSocket that was directly constructed.
func (this *QAbstractSocket) SetSocketError(socketError QAbstractSocket__SocketError) {

	var _dynamic_cast_ok C.bool = false
	C.QAbstractSocket_protectedbase_setSocketError(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(socketError))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SetLocalPort can only be called from a QAbstractSocket that was directly constructed.
func (this *QAbstractSocket) SetLocalPort(port uint16) {

	var _dynamic_cast_ok C.bool = false
	C.QAbstractSocket_protectedbase_setLocalPort(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.uint16_t)(port))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SetLocalAddress can only be called from a QAbstractSocket that was directly constructed.
func (this *QAbstractSocket) SetLocalAddress(address *QHostAddress) {

	var _dynamic_cast_ok C.bool = false
	C.QAbstractSocket_protectedbase_setLocalAddress(&_dynamic_cast_ok, unsafe.Pointer(this.h), address.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SetPeerPort can only be called from a QAbstractSocket that was directly constructed.
func (this *QAbstractSocket) SetPeerPort(port uint16) {

	var _dynamic_cast_ok C.bool = false
	C.QAbstractSocket_protectedbase_setPeerPort(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.uint16_t)(port))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SetPeerAddress can only be called from a QAbstractSocket that was directly constructed.
func (this *QAbstractSocket) SetPeerAddress(address *QHostAddress) {

	var _dynamic_cast_ok C.bool = false
	C.QAbstractSocket_protectedbase_setPeerAddress(&_dynamic_cast_ok, unsafe.Pointer(this.h), address.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SetPeerName can only be called from a QAbstractSocket that was directly constructed.
func (this *QAbstractSocket) SetPeerName(name string) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))

	var _dynamic_cast_ok C.bool = false
	C.QAbstractSocket_protectedbase_setPeerName(&_dynamic_cast_ok, unsafe.Pointer(this.h), name_ms)

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SetOpenMode can only be called from a QAbstractSocket that was directly constructed.
func (this *QAbstractSocket) SetOpenMode(openMode qt.QIODevice__OpenModeFlag) {

	var _dynamic_cast_ok C.bool = false
	C.QAbstractSocket_protectedbase_setOpenMode(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(openMode))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SetErrorString can only be called from a QAbstractSocket that was directly constructed.
func (this *QAbstractSocket) SetErrorString(errorString string) {
	errorString_ms := C.struct_miqt_string{}
	errorString_ms.data = C.CString(errorString)
	errorString_ms.len = C.size_t(len(errorString))
	defer C.free(unsafe.Pointer(errorString_ms.data))

	var _dynamic_cast_ok C.bool = false
	C.QAbstractSocket_protectedbase_setErrorString(&_dynamic_cast_ok, unsafe.Pointer(this.h), errorString_ms)

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Sender can only be called from a QAbstractSocket that was directly constructed.
func (this *QAbstractSocket) Sender() *qt.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt.UnsafeNewQObject(unsafe.Pointer(C.QAbstractSocket_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QAbstractSocket that was directly constructed.
func (this *QAbstractSocket) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QAbstractSocket_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QAbstractSocket that was directly constructed.
func (this *QAbstractSocket) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QAbstractSocket_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QAbstractSocket that was directly constructed.
func (this *QAbstractSocket) IsSignalConnected(signal *qt.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QAbstractSocket_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QAbstractSocket) callVirtualBase_Resume() {

	C.QAbstractSocket_virtualbase_resume(unsafe.Pointer(this.h))

}
func (this *QAbstractSocket) OnResume(slot func(super func())) {
	ok := C.QAbstractSocket_override_virtual_resume(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSocket_resume
func miqt_exec_callback_QAbstractSocket_resume(self *C.QAbstractSocket, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QAbstractSocket{h: self}).callVirtualBase_Resume)

}

func (this *QAbstractSocket) callVirtualBase_ConnectToHost(hostName string, port uint16, mode qt.QIODevice__OpenModeFlag, protocol QAbstractSocket__NetworkLayerProtocol) {
	hostName_ms := C.struct_miqt_string{}
	hostName_ms.data = C.CString(hostName)
	hostName_ms.len = C.size_t(len(hostName))
	defer C.free(unsafe.Pointer(hostName_ms.data))

	C.QAbstractSocket_virtualbase_connectToHost(unsafe.Pointer(this.h), hostName_ms, (C.uint16_t)(port), (C.int)(mode), (C.int)(protocol))

}
func (this *QAbstractSocket) OnConnectToHost(slot func(super func(hostName string, port uint16, mode qt.QIODevice__OpenModeFlag, protocol QAbstractSocket__NetworkLayerProtocol), hostName string, port uint16, mode qt.QIODevice__OpenModeFlag, protocol QAbstractSocket__NetworkLayerProtocol)) {
	ok := C.QAbstractSocket_override_virtual_connectToHost(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSocket_connectToHost
func miqt_exec_callback_QAbstractSocket_connectToHost(self *C.QAbstractSocket, cb C.intptr_t, hostName C.struct_miqt_string, port C.uint16_t, mode C.int, protocol C.int) {
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

	gofunc((&QAbstractSocket{h: self}).callVirtualBase_ConnectToHost, slotval1, slotval2, slotval3, slotval4)

}

func (this *QAbstractSocket) callVirtualBase_ConnectToHost2(address *QHostAddress, port uint16, mode qt.QIODevice__OpenModeFlag) {

	C.QAbstractSocket_virtualbase_connectToHost2(unsafe.Pointer(this.h), address.cPointer(), (C.uint16_t)(port), (C.int)(mode))

}
func (this *QAbstractSocket) OnConnectToHost2(slot func(super func(address *QHostAddress, port uint16, mode qt.QIODevice__OpenModeFlag), address *QHostAddress, port uint16, mode qt.QIODevice__OpenModeFlag)) {
	ok := C.QAbstractSocket_override_virtual_connectToHost2(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSocket_connectToHost2
func miqt_exec_callback_QAbstractSocket_connectToHost2(self *C.QAbstractSocket, cb C.intptr_t, address *C.QHostAddress, port C.uint16_t, mode C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(address *QHostAddress, port uint16, mode qt.QIODevice__OpenModeFlag), address *QHostAddress, port uint16, mode qt.QIODevice__OpenModeFlag))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHostAddress(address)

	slotval2 := (uint16)(port)

	slotval3 := (qt.QIODevice__OpenModeFlag)(mode)

	gofunc((&QAbstractSocket{h: self}).callVirtualBase_ConnectToHost2, slotval1, slotval2, slotval3)

}

func (this *QAbstractSocket) callVirtualBase_DisconnectFromHost() {

	C.QAbstractSocket_virtualbase_disconnectFromHost(unsafe.Pointer(this.h))

}
func (this *QAbstractSocket) OnDisconnectFromHost(slot func(super func())) {
	ok := C.QAbstractSocket_override_virtual_disconnectFromHost(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSocket_disconnectFromHost
func miqt_exec_callback_QAbstractSocket_disconnectFromHost(self *C.QAbstractSocket, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QAbstractSocket{h: self}).callVirtualBase_DisconnectFromHost)

}

func (this *QAbstractSocket) callVirtualBase_BytesAvailable() int64 {

	return (int64)(C.QAbstractSocket_virtualbase_bytesAvailable(unsafe.Pointer(this.h)))

}
func (this *QAbstractSocket) OnBytesAvailable(slot func(super func() int64) int64) {
	ok := C.QAbstractSocket_override_virtual_bytesAvailable(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSocket_bytesAvailable
func miqt_exec_callback_QAbstractSocket_bytesAvailable(self *C.QAbstractSocket, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractSocket{h: self}).callVirtualBase_BytesAvailable)

	return (C.longlong)(virtualReturn)

}

func (this *QAbstractSocket) callVirtualBase_BytesToWrite() int64 {

	return (int64)(C.QAbstractSocket_virtualbase_bytesToWrite(unsafe.Pointer(this.h)))

}
func (this *QAbstractSocket) OnBytesToWrite(slot func(super func() int64) int64) {
	ok := C.QAbstractSocket_override_virtual_bytesToWrite(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSocket_bytesToWrite
func miqt_exec_callback_QAbstractSocket_bytesToWrite(self *C.QAbstractSocket, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractSocket{h: self}).callVirtualBase_BytesToWrite)

	return (C.longlong)(virtualReturn)

}

func (this *QAbstractSocket) callVirtualBase_CanReadLine() bool {

	return (bool)(C.QAbstractSocket_virtualbase_canReadLine(unsafe.Pointer(this.h)))

}
func (this *QAbstractSocket) OnCanReadLine(slot func(super func() bool) bool) {
	ok := C.QAbstractSocket_override_virtual_canReadLine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSocket_canReadLine
func miqt_exec_callback_QAbstractSocket_canReadLine(self *C.QAbstractSocket, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractSocket{h: self}).callVirtualBase_CanReadLine)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractSocket) callVirtualBase_SetReadBufferSize(size int64) {

	C.QAbstractSocket_virtualbase_setReadBufferSize(unsafe.Pointer(this.h), (C.longlong)(size))

}
func (this *QAbstractSocket) OnSetReadBufferSize(slot func(super func(size int64), size int64)) {
	ok := C.QAbstractSocket_override_virtual_setReadBufferSize(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSocket_setReadBufferSize
func miqt_exec_callback_QAbstractSocket_setReadBufferSize(self *C.QAbstractSocket, cb C.intptr_t, size C.longlong) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(size int64), size int64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int64)(size)

	gofunc((&QAbstractSocket{h: self}).callVirtualBase_SetReadBufferSize, slotval1)

}

func (this *QAbstractSocket) callVirtualBase_SocketDescriptor() uintptr {

	return (uintptr)(C.QAbstractSocket_virtualbase_socketDescriptor(unsafe.Pointer(this.h)))

}
func (this *QAbstractSocket) OnSocketDescriptor(slot func(super func() uintptr) uintptr) {
	ok := C.QAbstractSocket_override_virtual_socketDescriptor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSocket_socketDescriptor
func miqt_exec_callback_QAbstractSocket_socketDescriptor(self *C.QAbstractSocket, cb C.intptr_t) C.intptr_t {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() uintptr) uintptr)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractSocket{h: self}).callVirtualBase_SocketDescriptor)

	return (C.intptr_t)(virtualReturn)

}

func (this *QAbstractSocket) callVirtualBase_SetSocketDescriptor(socketDescriptor uintptr, state QAbstractSocket__SocketState, openMode qt.QIODevice__OpenModeFlag) bool {

	return (bool)(C.QAbstractSocket_virtualbase_setSocketDescriptor(unsafe.Pointer(this.h), (C.intptr_t)(socketDescriptor), (C.int)(state), (C.int)(openMode)))

}
func (this *QAbstractSocket) OnSetSocketDescriptor(slot func(super func(socketDescriptor uintptr, state QAbstractSocket__SocketState, openMode qt.QIODevice__OpenModeFlag) bool, socketDescriptor uintptr, state QAbstractSocket__SocketState, openMode qt.QIODevice__OpenModeFlag) bool) {
	ok := C.QAbstractSocket_override_virtual_setSocketDescriptor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSocket_setSocketDescriptor
func miqt_exec_callback_QAbstractSocket_setSocketDescriptor(self *C.QAbstractSocket, cb C.intptr_t, socketDescriptor C.intptr_t, state C.int, openMode C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(socketDescriptor uintptr, state QAbstractSocket__SocketState, openMode qt.QIODevice__OpenModeFlag) bool, socketDescriptor uintptr, state QAbstractSocket__SocketState, openMode qt.QIODevice__OpenModeFlag) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (uintptr)(socketDescriptor)

	slotval2 := (QAbstractSocket__SocketState)(state)

	slotval3 := (qt.QIODevice__OpenModeFlag)(openMode)

	virtualReturn := gofunc((&QAbstractSocket{h: self}).callVirtualBase_SetSocketDescriptor, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractSocket) callVirtualBase_SetSocketOption(option QAbstractSocket__SocketOption, value *qt.QVariant) {

	C.QAbstractSocket_virtualbase_setSocketOption(unsafe.Pointer(this.h), (C.int)(option), (*C.QVariant)(value.UnsafePointer()))

}
func (this *QAbstractSocket) OnSetSocketOption(slot func(super func(option QAbstractSocket__SocketOption, value *qt.QVariant), option QAbstractSocket__SocketOption, value *qt.QVariant)) {
	ok := C.QAbstractSocket_override_virtual_setSocketOption(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSocket_setSocketOption
func miqt_exec_callback_QAbstractSocket_setSocketOption(self *C.QAbstractSocket, cb C.intptr_t, option C.int, value *C.QVariant) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(option QAbstractSocket__SocketOption, value *qt.QVariant), option QAbstractSocket__SocketOption, value *qt.QVariant))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAbstractSocket__SocketOption)(option)

	slotval2 := qt.UnsafeNewQVariant(unsafe.Pointer(value))

	gofunc((&QAbstractSocket{h: self}).callVirtualBase_SetSocketOption, slotval1, slotval2)

}

func (this *QAbstractSocket) callVirtualBase_SocketOption(option QAbstractSocket__SocketOption) *qt.QVariant {

	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QAbstractSocket_virtualbase_socketOption(unsafe.Pointer(this.h), (C.int)(option))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QAbstractSocket) OnSocketOption(slot func(super func(option QAbstractSocket__SocketOption) *qt.QVariant, option QAbstractSocket__SocketOption) *qt.QVariant) {
	ok := C.QAbstractSocket_override_virtual_socketOption(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSocket_socketOption
func miqt_exec_callback_QAbstractSocket_socketOption(self *C.QAbstractSocket, cb C.intptr_t, option C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(option QAbstractSocket__SocketOption) *qt.QVariant, option QAbstractSocket__SocketOption) *qt.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAbstractSocket__SocketOption)(option)

	virtualReturn := gofunc((&QAbstractSocket{h: self}).callVirtualBase_SocketOption, slotval1)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}

func (this *QAbstractSocket) callVirtualBase_Close() {

	C.QAbstractSocket_virtualbase_close(unsafe.Pointer(this.h))

}
func (this *QAbstractSocket) OnClose(slot func(super func())) {
	ok := C.QAbstractSocket_override_virtual_close(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSocket_close
func miqt_exec_callback_QAbstractSocket_close(self *C.QAbstractSocket, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QAbstractSocket{h: self}).callVirtualBase_Close)

}

func (this *QAbstractSocket) callVirtualBase_IsSequential() bool {

	return (bool)(C.QAbstractSocket_virtualbase_isSequential(unsafe.Pointer(this.h)))

}
func (this *QAbstractSocket) OnIsSequential(slot func(super func() bool) bool) {
	ok := C.QAbstractSocket_override_virtual_isSequential(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSocket_isSequential
func miqt_exec_callback_QAbstractSocket_isSequential(self *C.QAbstractSocket, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractSocket{h: self}).callVirtualBase_IsSequential)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractSocket) callVirtualBase_AtEnd() bool {

	return (bool)(C.QAbstractSocket_virtualbase_atEnd(unsafe.Pointer(this.h)))

}
func (this *QAbstractSocket) OnAtEnd(slot func(super func() bool) bool) {
	ok := C.QAbstractSocket_override_virtual_atEnd(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSocket_atEnd
func miqt_exec_callback_QAbstractSocket_atEnd(self *C.QAbstractSocket, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractSocket{h: self}).callVirtualBase_AtEnd)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractSocket) callVirtualBase_WaitForConnected(msecs int) bool {

	return (bool)(C.QAbstractSocket_virtualbase_waitForConnected(unsafe.Pointer(this.h), (C.int)(msecs)))

}
func (this *QAbstractSocket) OnWaitForConnected(slot func(super func(msecs int) bool, msecs int) bool) {
	ok := C.QAbstractSocket_override_virtual_waitForConnected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSocket_waitForConnected
func miqt_exec_callback_QAbstractSocket_waitForConnected(self *C.QAbstractSocket, cb C.intptr_t, msecs C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(msecs int) bool, msecs int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(msecs)

	virtualReturn := gofunc((&QAbstractSocket{h: self}).callVirtualBase_WaitForConnected, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractSocket) callVirtualBase_WaitForReadyRead(msecs int) bool {

	return (bool)(C.QAbstractSocket_virtualbase_waitForReadyRead(unsafe.Pointer(this.h), (C.int)(msecs)))

}
func (this *QAbstractSocket) OnWaitForReadyRead(slot func(super func(msecs int) bool, msecs int) bool) {
	ok := C.QAbstractSocket_override_virtual_waitForReadyRead(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSocket_waitForReadyRead
func miqt_exec_callback_QAbstractSocket_waitForReadyRead(self *C.QAbstractSocket, cb C.intptr_t, msecs C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(msecs int) bool, msecs int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(msecs)

	virtualReturn := gofunc((&QAbstractSocket{h: self}).callVirtualBase_WaitForReadyRead, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractSocket) callVirtualBase_WaitForBytesWritten(msecs int) bool {

	return (bool)(C.QAbstractSocket_virtualbase_waitForBytesWritten(unsafe.Pointer(this.h), (C.int)(msecs)))

}
func (this *QAbstractSocket) OnWaitForBytesWritten(slot func(super func(msecs int) bool, msecs int) bool) {
	ok := C.QAbstractSocket_override_virtual_waitForBytesWritten(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSocket_waitForBytesWritten
func miqt_exec_callback_QAbstractSocket_waitForBytesWritten(self *C.QAbstractSocket, cb C.intptr_t, msecs C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(msecs int) bool, msecs int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(msecs)

	virtualReturn := gofunc((&QAbstractSocket{h: self}).callVirtualBase_WaitForBytesWritten, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractSocket) callVirtualBase_WaitForDisconnected(msecs int) bool {

	return (bool)(C.QAbstractSocket_virtualbase_waitForDisconnected(unsafe.Pointer(this.h), (C.int)(msecs)))

}
func (this *QAbstractSocket) OnWaitForDisconnected(slot func(super func(msecs int) bool, msecs int) bool) {
	ok := C.QAbstractSocket_override_virtual_waitForDisconnected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSocket_waitForDisconnected
func miqt_exec_callback_QAbstractSocket_waitForDisconnected(self *C.QAbstractSocket, cb C.intptr_t, msecs C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(msecs int) bool, msecs int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(msecs)

	virtualReturn := gofunc((&QAbstractSocket{h: self}).callVirtualBase_WaitForDisconnected, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractSocket) callVirtualBase_ReadData(data string, maxlen int64) int64 {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))

	return (int64)(C.QAbstractSocket_virtualbase_readData(unsafe.Pointer(this.h), data_Cstring, (C.longlong)(maxlen)))

}
func (this *QAbstractSocket) OnReadData(slot func(super func(data string, maxlen int64) int64, data string, maxlen int64) int64) {
	ok := C.QAbstractSocket_override_virtual_readData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSocket_readData
func miqt_exec_callback_QAbstractSocket_readData(self *C.QAbstractSocket, cb C.intptr_t, data *C.char, maxlen C.longlong) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(data string, maxlen int64) int64, data string, maxlen int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	data_ret := data
	slotval1 := C.GoString(data_ret)

	slotval2 := (int64)(maxlen)

	virtualReturn := gofunc((&QAbstractSocket{h: self}).callVirtualBase_ReadData, slotval1, slotval2)

	return (C.longlong)(virtualReturn)

}

func (this *QAbstractSocket) callVirtualBase_ReadLineData(data string, maxlen int64) int64 {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))

	return (int64)(C.QAbstractSocket_virtualbase_readLineData(unsafe.Pointer(this.h), data_Cstring, (C.longlong)(maxlen)))

}
func (this *QAbstractSocket) OnReadLineData(slot func(super func(data string, maxlen int64) int64, data string, maxlen int64) int64) {
	ok := C.QAbstractSocket_override_virtual_readLineData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSocket_readLineData
func miqt_exec_callback_QAbstractSocket_readLineData(self *C.QAbstractSocket, cb C.intptr_t, data *C.char, maxlen C.longlong) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(data string, maxlen int64) int64, data string, maxlen int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	data_ret := data
	slotval1 := C.GoString(data_ret)

	slotval2 := (int64)(maxlen)

	virtualReturn := gofunc((&QAbstractSocket{h: self}).callVirtualBase_ReadLineData, slotval1, slotval2)

	return (C.longlong)(virtualReturn)

}

func (this *QAbstractSocket) callVirtualBase_WriteData(data string, lenVal int64) int64 {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))

	return (int64)(C.QAbstractSocket_virtualbase_writeData(unsafe.Pointer(this.h), data_Cstring, (C.longlong)(lenVal)))

}
func (this *QAbstractSocket) OnWriteData(slot func(super func(data string, lenVal int64) int64, data string, lenVal int64) int64) {
	ok := C.QAbstractSocket_override_virtual_writeData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSocket_writeData
func miqt_exec_callback_QAbstractSocket_writeData(self *C.QAbstractSocket, cb C.intptr_t, data *C.const_char, lenVal C.longlong) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(data string, lenVal int64) int64, data string, lenVal int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	data_ret := data
	slotval1 := C.GoString(data_ret)

	slotval2 := (int64)(lenVal)

	virtualReturn := gofunc((&QAbstractSocket{h: self}).callVirtualBase_WriteData, slotval1, slotval2)

	return (C.longlong)(virtualReturn)

}

func (this *QAbstractSocket) callVirtualBase_Open(mode qt.QIODevice__OpenModeFlag) bool {

	return (bool)(C.QAbstractSocket_virtualbase_open(unsafe.Pointer(this.h), (C.int)(mode)))

}
func (this *QAbstractSocket) OnOpen(slot func(super func(mode qt.QIODevice__OpenModeFlag) bool, mode qt.QIODevice__OpenModeFlag) bool) {
	ok := C.QAbstractSocket_override_virtual_open(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSocket_open
func miqt_exec_callback_QAbstractSocket_open(self *C.QAbstractSocket, cb C.intptr_t, mode C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(mode qt.QIODevice__OpenModeFlag) bool, mode qt.QIODevice__OpenModeFlag) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt.QIODevice__OpenModeFlag)(mode)

	virtualReturn := gofunc((&QAbstractSocket{h: self}).callVirtualBase_Open, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractSocket) callVirtualBase_Pos() int64 {

	return (int64)(C.QAbstractSocket_virtualbase_pos(unsafe.Pointer(this.h)))

}
func (this *QAbstractSocket) OnPos(slot func(super func() int64) int64) {
	ok := C.QAbstractSocket_override_virtual_pos(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSocket_pos
func miqt_exec_callback_QAbstractSocket_pos(self *C.QAbstractSocket, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractSocket{h: self}).callVirtualBase_Pos)

	return (C.longlong)(virtualReturn)

}

func (this *QAbstractSocket) callVirtualBase_Size() int64 {

	return (int64)(C.QAbstractSocket_virtualbase_size(unsafe.Pointer(this.h)))

}
func (this *QAbstractSocket) OnSize(slot func(super func() int64) int64) {
	ok := C.QAbstractSocket_override_virtual_size(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSocket_size
func miqt_exec_callback_QAbstractSocket_size(self *C.QAbstractSocket, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractSocket{h: self}).callVirtualBase_Size)

	return (C.longlong)(virtualReturn)

}

func (this *QAbstractSocket) callVirtualBase_Seek(pos int64) bool {

	return (bool)(C.QAbstractSocket_virtualbase_seek(unsafe.Pointer(this.h), (C.longlong)(pos)))

}
func (this *QAbstractSocket) OnSeek(slot func(super func(pos int64) bool, pos int64) bool) {
	ok := C.QAbstractSocket_override_virtual_seek(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSocket_seek
func miqt_exec_callback_QAbstractSocket_seek(self *C.QAbstractSocket, cb C.intptr_t, pos C.longlong) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(pos int64) bool, pos int64) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int64)(pos)

	virtualReturn := gofunc((&QAbstractSocket{h: self}).callVirtualBase_Seek, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractSocket) callVirtualBase_Reset() bool {

	return (bool)(C.QAbstractSocket_virtualbase_reset(unsafe.Pointer(this.h)))

}
func (this *QAbstractSocket) OnReset(slot func(super func() bool) bool) {
	ok := C.QAbstractSocket_override_virtual_reset(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSocket_reset
func miqt_exec_callback_QAbstractSocket_reset(self *C.QAbstractSocket, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractSocket{h: self}).callVirtualBase_Reset)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractSocket) callVirtualBase_Event(event *qt.QEvent) bool {

	return (bool)(C.QAbstractSocket_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QAbstractSocket) OnEvent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	ok := C.QAbstractSocket_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSocket_event
func miqt_exec_callback_QAbstractSocket_event(self *C.QAbstractSocket, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QAbstractSocket{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractSocket) callVirtualBase_EventFilter(watched *qt.QObject, event *qt.QEvent) bool {

	return (bool)(C.QAbstractSocket_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QAbstractSocket) OnEventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	ok := C.QAbstractSocket_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSocket_eventFilter
func miqt_exec_callback_QAbstractSocket_eventFilter(self *C.QAbstractSocket, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QAbstractSocket{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractSocket) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.QAbstractSocket_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QAbstractSocket) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	ok := C.QAbstractSocket_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSocket_timerEvent
func miqt_exec_callback_QAbstractSocket_timerEvent(self *C.QAbstractSocket, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QAbstractSocket{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QAbstractSocket) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QAbstractSocket_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QAbstractSocket) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	ok := C.QAbstractSocket_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSocket_childEvent
func miqt_exec_callback_QAbstractSocket_childEvent(self *C.QAbstractSocket, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QAbstractSocket{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QAbstractSocket) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QAbstractSocket_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QAbstractSocket) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QAbstractSocket_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSocket_customEvent
func miqt_exec_callback_QAbstractSocket_customEvent(self *C.QAbstractSocket, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QAbstractSocket{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QAbstractSocket) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QAbstractSocket_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QAbstractSocket) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QAbstractSocket_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSocket_connectNotify
func miqt_exec_callback_QAbstractSocket_connectNotify(self *C.QAbstractSocket, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QAbstractSocket{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QAbstractSocket) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QAbstractSocket_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QAbstractSocket) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QAbstractSocket_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSocket_disconnectNotify
func miqt_exec_callback_QAbstractSocket_disconnectNotify(self *C.QAbstractSocket, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QAbstractSocket{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QAbstractSocket) Delete() {
	C.QAbstractSocket_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAbstractSocket) GoGC() {
	runtime.SetFinalizer(this, func(this *QAbstractSocket) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
