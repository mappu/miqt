package network

/*

#include "gen_qabstractsocket.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
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
	*qt6.QIODevice
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

func newQAbstractSocket(h *C.QAbstractSocket) *QAbstractSocket {
	if h == nil {
		return nil
	}
	return &QAbstractSocket{h: h, QIODevice: qt6.UnsafeNewQIODevice(unsafe.Pointer(h))}
}

func UnsafeNewQAbstractSocket(h unsafe.Pointer) *QAbstractSocket {
	return newQAbstractSocket((*C.QAbstractSocket)(h))
}

// NewQAbstractSocket constructs a new QAbstractSocket object.
func NewQAbstractSocket(socketType QAbstractSocket__SocketType, parent *qt6.QObject) *QAbstractSocket {
	ret := C.QAbstractSocket_new((C.int)(socketType), (*C.QObject)(parent.UnsafePointer()))
	return newQAbstractSocket(ret)
}

func (this *QAbstractSocket) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QAbstractSocket_MetaObject(this.h)))
}

func (this *QAbstractSocket) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QAbstractSocket_Metacast(this.h, param1_Cstring))
}

func QAbstractSocket_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractSocket_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAbstractSocket) Resume() {
	C.QAbstractSocket_Resume(this.h)
}

func (this *QAbstractSocket) PauseMode() QAbstractSocket__PauseMode {
	return (QAbstractSocket__PauseMode)(C.QAbstractSocket_PauseMode(this.h))
}

func (this *QAbstractSocket) SetPauseMode(pauseMode QAbstractSocket__PauseMode) {
	C.QAbstractSocket_SetPauseMode(this.h, (C.int)(pauseMode))
}

func (this *QAbstractSocket) Bind(address *QHostAddress) bool {
	return (bool)(C.QAbstractSocket_Bind(this.h, address.cPointer()))
}

func (this *QAbstractSocket) Bind2() bool {
	return (bool)(C.QAbstractSocket_Bind2(this.h))
}

func (this *QAbstractSocket) ConnectToHost(hostName string, port uint16) {
	hostName_ms := C.struct_miqt_string{}
	hostName_ms.data = C.CString(hostName)
	hostName_ms.len = C.size_t(len(hostName))
	defer C.free(unsafe.Pointer(hostName_ms.data))
	C.QAbstractSocket_ConnectToHost(this.h, hostName_ms, (C.uint16_t)(port))
}

func (this *QAbstractSocket) ConnectToHost2(address *QHostAddress, port uint16) {
	C.QAbstractSocket_ConnectToHost2(this.h, address.cPointer(), (C.uint16_t)(port))
}

func (this *QAbstractSocket) DisconnectFromHost() {
	C.QAbstractSocket_DisconnectFromHost(this.h)
}

func (this *QAbstractSocket) IsValid() bool {
	return (bool)(C.QAbstractSocket_IsValid(this.h))
}

func (this *QAbstractSocket) BytesAvailable() int64 {
	return (int64)(C.QAbstractSocket_BytesAvailable(this.h))
}

func (this *QAbstractSocket) BytesToWrite() int64 {
	return (int64)(C.QAbstractSocket_BytesToWrite(this.h))
}

func (this *QAbstractSocket) LocalPort() uint16 {
	return (uint16)(C.QAbstractSocket_LocalPort(this.h))
}

func (this *QAbstractSocket) LocalAddress() *QHostAddress {
	_ret := C.QAbstractSocket_LocalAddress(this.h)
	_goptr := newQHostAddress(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractSocket) PeerPort() uint16 {
	return (uint16)(C.QAbstractSocket_PeerPort(this.h))
}

func (this *QAbstractSocket) PeerAddress() *QHostAddress {
	_ret := C.QAbstractSocket_PeerAddress(this.h)
	_goptr := newQHostAddress(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractSocket) PeerName() string {
	var _ms C.struct_miqt_string = C.QAbstractSocket_PeerName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAbstractSocket) ReadBufferSize() int64 {
	return (int64)(C.QAbstractSocket_ReadBufferSize(this.h))
}

func (this *QAbstractSocket) SetReadBufferSize(size int64) {
	C.QAbstractSocket_SetReadBufferSize(this.h, (C.longlong)(size))
}

func (this *QAbstractSocket) Abort() {
	C.QAbstractSocket_Abort(this.h)
}

func (this *QAbstractSocket) SocketDescriptor() uintptr {
	return (uintptr)(C.QAbstractSocket_SocketDescriptor(this.h))
}

func (this *QAbstractSocket) SetSocketDescriptor(socketDescriptor uintptr) bool {
	return (bool)(C.QAbstractSocket_SetSocketDescriptor(this.h, (C.intptr_t)(socketDescriptor)))
}

func (this *QAbstractSocket) SetSocketOption(option QAbstractSocket__SocketOption, value *qt6.QVariant) {
	C.QAbstractSocket_SetSocketOption(this.h, (C.int)(option), (*C.QVariant)(value.UnsafePointer()))
}

func (this *QAbstractSocket) SocketOption(option QAbstractSocket__SocketOption) *qt6.QVariant {
	_ret := C.QAbstractSocket_SocketOption(this.h, (C.int)(option))
	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractSocket) SocketType() QAbstractSocket__SocketType {
	return (QAbstractSocket__SocketType)(C.QAbstractSocket_SocketType(this.h))
}

func (this *QAbstractSocket) State() QAbstractSocket__SocketState {
	return (QAbstractSocket__SocketState)(C.QAbstractSocket_State(this.h))
}

func (this *QAbstractSocket) Error() QAbstractSocket__SocketError {
	return (QAbstractSocket__SocketError)(C.QAbstractSocket_Error(this.h))
}

func (this *QAbstractSocket) Close() {
	C.QAbstractSocket_Close(this.h)
}

func (this *QAbstractSocket) IsSequential() bool {
	return (bool)(C.QAbstractSocket_IsSequential(this.h))
}

func (this *QAbstractSocket) Flush() bool {
	return (bool)(C.QAbstractSocket_Flush(this.h))
}

func (this *QAbstractSocket) WaitForConnected() bool {
	return (bool)(C.QAbstractSocket_WaitForConnected(this.h))
}

func (this *QAbstractSocket) WaitForReadyRead() bool {
	return (bool)(C.QAbstractSocket_WaitForReadyRead(this.h))
}

func (this *QAbstractSocket) WaitForBytesWritten() bool {
	return (bool)(C.QAbstractSocket_WaitForBytesWritten(this.h))
}

func (this *QAbstractSocket) WaitForDisconnected() bool {
	return (bool)(C.QAbstractSocket_WaitForDisconnected(this.h))
}

func (this *QAbstractSocket) SetProxy(networkProxy *QNetworkProxy) {
	C.QAbstractSocket_SetProxy(this.h, networkProxy.cPointer())
}

func (this *QAbstractSocket) Proxy() *QNetworkProxy {
	_ret := C.QAbstractSocket_Proxy(this.h)
	_goptr := newQNetworkProxy(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractSocket) ProtocolTag() string {
	var _ms C.struct_miqt_string = C.QAbstractSocket_ProtocolTag(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAbstractSocket) SetProtocolTag(tag string) {
	tag_ms := C.struct_miqt_string{}
	tag_ms.data = C.CString(tag)
	tag_ms.len = C.size_t(len(tag))
	defer C.free(unsafe.Pointer(tag_ms.data))
	C.QAbstractSocket_SetProtocolTag(this.h, tag_ms)
}

func (this *QAbstractSocket) HostFound() {
	C.QAbstractSocket_HostFound(this.h)
}
func (this *QAbstractSocket) OnHostFound(slot func()) {
	C.QAbstractSocket_connect_HostFound(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSocket_HostFound
func miqt_exec_callback_QAbstractSocket_HostFound(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QAbstractSocket) Connected() {
	C.QAbstractSocket_Connected(this.h)
}
func (this *QAbstractSocket) OnConnected(slot func()) {
	C.QAbstractSocket_connect_Connected(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSocket_Connected
func miqt_exec_callback_QAbstractSocket_Connected(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QAbstractSocket) Disconnected() {
	C.QAbstractSocket_Disconnected(this.h)
}
func (this *QAbstractSocket) OnDisconnected(slot func()) {
	C.QAbstractSocket_connect_Disconnected(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSocket_Disconnected
func miqt_exec_callback_QAbstractSocket_Disconnected(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QAbstractSocket) StateChanged(param1 QAbstractSocket__SocketState) {
	C.QAbstractSocket_StateChanged(this.h, (C.int)(param1))
}
func (this *QAbstractSocket) OnStateChanged(slot func(param1 QAbstractSocket__SocketState)) {
	C.QAbstractSocket_connect_StateChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSocket_StateChanged
func miqt_exec_callback_QAbstractSocket_StateChanged(cb C.intptr_t, param1 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 QAbstractSocket__SocketState))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAbstractSocket__SocketState)(param1)

	gofunc(slotval1)
}

func (this *QAbstractSocket) ErrorOccurred(param1 QAbstractSocket__SocketError) {
	C.QAbstractSocket_ErrorOccurred(this.h, (C.int)(param1))
}
func (this *QAbstractSocket) OnErrorOccurred(slot func(param1 QAbstractSocket__SocketError)) {
	C.QAbstractSocket_connect_ErrorOccurred(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSocket_ErrorOccurred
func miqt_exec_callback_QAbstractSocket_ErrorOccurred(cb C.intptr_t, param1 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 QAbstractSocket__SocketError))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAbstractSocket__SocketError)(param1)

	gofunc(slotval1)
}

func (this *QAbstractSocket) ProxyAuthenticationRequired(proxy *QNetworkProxy, authenticator *QAuthenticator) {
	C.QAbstractSocket_ProxyAuthenticationRequired(this.h, proxy.cPointer(), authenticator.cPointer())
}
func (this *QAbstractSocket) OnProxyAuthenticationRequired(slot func(proxy *QNetworkProxy, authenticator *QAuthenticator)) {
	C.QAbstractSocket_connect_ProxyAuthenticationRequired(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSocket_ProxyAuthenticationRequired
func miqt_exec_callback_QAbstractSocket_ProxyAuthenticationRequired(cb C.intptr_t, proxy *C.QNetworkProxy, authenticator *C.QAuthenticator) {
	gofunc, ok := cgo.Handle(cb).Value().(func(proxy *QNetworkProxy, authenticator *QAuthenticator))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQNetworkProxy(unsafe.Pointer(proxy))
	slotval2 := UnsafeNewQAuthenticator(unsafe.Pointer(authenticator))

	gofunc(slotval1, slotval2)
}

func QAbstractSocket_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractSocket_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractSocket_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractSocket_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAbstractSocket) Bind22(address *QHostAddress, port uint16) bool {
	return (bool)(C.QAbstractSocket_Bind22(this.h, address.cPointer(), (C.uint16_t)(port)))
}

func (this *QAbstractSocket) Bind3(address *QHostAddress, port uint16, mode QAbstractSocket__BindFlag) bool {
	return (bool)(C.QAbstractSocket_Bind3(this.h, address.cPointer(), (C.uint16_t)(port), (C.int)(mode)))
}

func (this *QAbstractSocket) Bind1(port uint16) bool {
	return (bool)(C.QAbstractSocket_Bind1(this.h, (C.uint16_t)(port)))
}

func (this *QAbstractSocket) Bind23(port uint16, mode QAbstractSocket__BindFlag) bool {
	return (bool)(C.QAbstractSocket_Bind23(this.h, (C.uint16_t)(port), (C.int)(mode)))
}

func (this *QAbstractSocket) ConnectToHost3(hostName string, port uint16, mode qt6.QIODeviceBase__OpenModeFlag) {
	hostName_ms := C.struct_miqt_string{}
	hostName_ms.data = C.CString(hostName)
	hostName_ms.len = C.size_t(len(hostName))
	defer C.free(unsafe.Pointer(hostName_ms.data))
	C.QAbstractSocket_ConnectToHost3(this.h, hostName_ms, (C.uint16_t)(port), (C.int)(mode))
}

func (this *QAbstractSocket) ConnectToHost4(hostName string, port uint16, mode qt6.QIODeviceBase__OpenModeFlag, protocol QAbstractSocket__NetworkLayerProtocol) {
	hostName_ms := C.struct_miqt_string{}
	hostName_ms.data = C.CString(hostName)
	hostName_ms.len = C.size_t(len(hostName))
	defer C.free(unsafe.Pointer(hostName_ms.data))
	C.QAbstractSocket_ConnectToHost4(this.h, hostName_ms, (C.uint16_t)(port), (C.int)(mode), (C.int)(protocol))
}

func (this *QAbstractSocket) ConnectToHost32(address *QHostAddress, port uint16, mode qt6.QIODeviceBase__OpenModeFlag) {
	C.QAbstractSocket_ConnectToHost32(this.h, address.cPointer(), (C.uint16_t)(port), (C.int)(mode))
}

func (this *QAbstractSocket) SetSocketDescriptor2(socketDescriptor uintptr, state QAbstractSocket__SocketState) bool {
	return (bool)(C.QAbstractSocket_SetSocketDescriptor2(this.h, (C.intptr_t)(socketDescriptor), (C.int)(state)))
}

func (this *QAbstractSocket) SetSocketDescriptor3(socketDescriptor uintptr, state QAbstractSocket__SocketState, openMode qt6.QIODeviceBase__OpenModeFlag) bool {
	return (bool)(C.QAbstractSocket_SetSocketDescriptor3(this.h, (C.intptr_t)(socketDescriptor), (C.int)(state), (C.int)(openMode)))
}

func (this *QAbstractSocket) WaitForConnected1(msecs int) bool {
	return (bool)(C.QAbstractSocket_WaitForConnected1(this.h, (C.int)(msecs)))
}

func (this *QAbstractSocket) WaitForReadyRead1(msecs int) bool {
	return (bool)(C.QAbstractSocket_WaitForReadyRead1(this.h, (C.int)(msecs)))
}

func (this *QAbstractSocket) WaitForBytesWritten1(msecs int) bool {
	return (bool)(C.QAbstractSocket_WaitForBytesWritten1(this.h, (C.int)(msecs)))
}

func (this *QAbstractSocket) WaitForDisconnected1(msecs int) bool {
	return (bool)(C.QAbstractSocket_WaitForDisconnected1(this.h, (C.int)(msecs)))
}

// Delete this object from C++ memory.
func (this *QAbstractSocket) Delete() {
	C.QAbstractSocket_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAbstractSocket) GoGC() {
	runtime.SetFinalizer(this, func(this *QAbstractSocket) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
