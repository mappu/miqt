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
	h          *C.QAbstractSocket
	isSubclass bool
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

// newQAbstractSocket constructs the type using only CGO pointers.
func newQAbstractSocket(h *C.QAbstractSocket, h_QIODevice *C.QIODevice, h_QObject *C.QObject, h_QIODeviceBase *C.QIODeviceBase) *QAbstractSocket {
	if h == nil {
		return nil
	}
	return &QAbstractSocket{h: h,
		QIODevice: qt6.UnsafeNewQIODevice(unsafe.Pointer(h_QIODevice), unsafe.Pointer(h_QObject), unsafe.Pointer(h_QIODeviceBase))}
}

// UnsafeNewQAbstractSocket constructs the type using only unsafe pointers.
func UnsafeNewQAbstractSocket(h unsafe.Pointer, h_QIODevice unsafe.Pointer, h_QObject unsafe.Pointer, h_QIODeviceBase unsafe.Pointer) *QAbstractSocket {
	if h == nil {
		return nil
	}

	return &QAbstractSocket{h: (*C.QAbstractSocket)(h),
		QIODevice: qt6.UnsafeNewQIODevice(h_QIODevice, h_QObject, h_QIODeviceBase)}
}

// NewQAbstractSocket constructs a new QAbstractSocket object.
func NewQAbstractSocket(socketType QAbstractSocket__SocketType, parent *qt6.QObject) *QAbstractSocket {
	var outptr_QAbstractSocket *C.QAbstractSocket = nil
	var outptr_QIODevice *C.QIODevice = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QIODeviceBase *C.QIODeviceBase = nil

	C.QAbstractSocket_new((C.int)(socketType), (*C.QObject)(parent.UnsafePointer()), &outptr_QAbstractSocket, &outptr_QIODevice, &outptr_QObject, &outptr_QIODeviceBase)
	ret := newQAbstractSocket(outptr_QAbstractSocket, outptr_QIODevice, outptr_QObject, outptr_QIODeviceBase)
	ret.isSubclass = true
	return ret
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

func (this *QAbstractSocket) Bind(address *QHostAddress, port uint16, mode QAbstractSocket__BindFlag) bool {
	return (bool)(C.QAbstractSocket_Bind(this.h, address.cPointer(), (C.uint16_t)(port), (C.int)(mode)))
}

func (this *QAbstractSocket) Bind2() bool {
	return (bool)(C.QAbstractSocket_Bind2(this.h))
}

func (this *QAbstractSocket) ConnectToHost(hostName string, port uint16, mode qt6.QIODeviceBase__OpenModeFlag, protocol QAbstractSocket__NetworkLayerProtocol) {
	hostName_ms := C.struct_miqt_string{}
	hostName_ms.data = C.CString(hostName)
	hostName_ms.len = C.size_t(len(hostName))
	defer C.free(unsafe.Pointer(hostName_ms.data))
	C.QAbstractSocket_ConnectToHost(this.h, hostName_ms, (C.uint16_t)(port), (C.int)(mode), (C.int)(protocol))
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
	_goptr := newQHostAddress(C.QAbstractSocket_LocalAddress(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractSocket) PeerPort() uint16 {
	return (uint16)(C.QAbstractSocket_PeerPort(this.h))
}

func (this *QAbstractSocket) PeerAddress() *QHostAddress {
	_goptr := newQHostAddress(C.QAbstractSocket_PeerAddress(this.h))
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

func (this *QAbstractSocket) SetSocketDescriptor(socketDescriptor uintptr, state QAbstractSocket__SocketState, openMode qt6.QIODeviceBase__OpenModeFlag) bool {
	return (bool)(C.QAbstractSocket_SetSocketDescriptor(this.h, (C.intptr_t)(socketDescriptor), (C.int)(state), (C.int)(openMode)))
}

func (this *QAbstractSocket) SetSocketOption(option QAbstractSocket__SocketOption, value *qt6.QVariant) {
	C.QAbstractSocket_SetSocketOption(this.h, (C.int)(option), (*C.QVariant)(value.UnsafePointer()))
}

func (this *QAbstractSocket) SocketOption(option QAbstractSocket__SocketOption) *qt6.QVariant {
	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(C.QAbstractSocket_SocketOption(this.h, (C.int)(option))))
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

func (this *QAbstractSocket) WaitForConnected(msecs int) bool {
	return (bool)(C.QAbstractSocket_WaitForConnected(this.h, (C.int)(msecs)))
}

func (this *QAbstractSocket) WaitForReadyRead(msecs int) bool {
	return (bool)(C.QAbstractSocket_WaitForReadyRead(this.h, (C.int)(msecs)))
}

func (this *QAbstractSocket) WaitForBytesWritten(msecs int) bool {
	return (bool)(C.QAbstractSocket_WaitForBytesWritten(this.h, (C.int)(msecs)))
}

func (this *QAbstractSocket) WaitForDisconnected(msecs int) bool {
	return (bool)(C.QAbstractSocket_WaitForDisconnected(this.h, (C.int)(msecs)))
}

func (this *QAbstractSocket) SetProxy(networkProxy *QNetworkProxy) {
	C.QAbstractSocket_SetProxy(this.h, networkProxy.cPointer())
}

func (this *QAbstractSocket) Proxy() *QNetworkProxy {
	_goptr := newQNetworkProxy(C.QAbstractSocket_Proxy(this.h))
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
	slotval1 := newQNetworkProxy(proxy)

	slotval2 := newQAuthenticator(authenticator)

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

func (this *QAbstractSocket) Bind1(port uint16) bool {
	return (bool)(C.QAbstractSocket_Bind1(this.h, (C.uint16_t)(port)))
}

func (this *QAbstractSocket) Bind22(port uint16, mode QAbstractSocket__BindFlag) bool {
	return (bool)(C.QAbstractSocket_Bind22(this.h, (C.uint16_t)(port), (C.int)(mode)))
}

func (this *QAbstractSocket) ConnectToHost3(address *QHostAddress, port uint16, mode qt6.QIODeviceBase__OpenModeFlag) {
	C.QAbstractSocket_ConnectToHost3(this.h, address.cPointer(), (C.uint16_t)(port), (C.int)(mode))
}

func (this *QAbstractSocket) callVirtualBase_Resume() {

	C.QAbstractSocket_virtualbase_Resume(unsafe.Pointer(this.h))

}
func (this *QAbstractSocket) OnResume(slot func(super func())) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractSocket_override_virtual_Resume(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSocket_Resume
func miqt_exec_callback_QAbstractSocket_Resume(self *C.QAbstractSocket, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QAbstractSocket{h: self}).callVirtualBase_Resume)

}

func (this *QAbstractSocket) callVirtualBase_Bind(address *QHostAddress, port uint16, mode QAbstractSocket__BindFlag) bool {

	return (bool)(C.QAbstractSocket_virtualbase_Bind(unsafe.Pointer(this.h), address.cPointer(), (C.uint16_t)(port), (C.int)(mode)))

}
func (this *QAbstractSocket) OnBind(slot func(super func(address *QHostAddress, port uint16, mode QAbstractSocket__BindFlag) bool, address *QHostAddress, port uint16, mode QAbstractSocket__BindFlag) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractSocket_override_virtual_Bind(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSocket_Bind
func miqt_exec_callback_QAbstractSocket_Bind(self *C.QAbstractSocket, cb C.intptr_t, address *C.QHostAddress, port C.uint16_t, mode C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(address *QHostAddress, port uint16, mode QAbstractSocket__BindFlag) bool, address *QHostAddress, port uint16, mode QAbstractSocket__BindFlag) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHostAddress(address)

	slotval2 := (uint16)(port)

	slotval3 := (QAbstractSocket__BindFlag)(mode)

	virtualReturn := gofunc((&QAbstractSocket{h: self}).callVirtualBase_Bind, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractSocket) callVirtualBase_ConnectToHost(hostName string, port uint16, mode qt6.QIODeviceBase__OpenModeFlag, protocol QAbstractSocket__NetworkLayerProtocol) {
	hostName_ms := C.struct_miqt_string{}
	hostName_ms.data = C.CString(hostName)
	hostName_ms.len = C.size_t(len(hostName))
	defer C.free(unsafe.Pointer(hostName_ms.data))

	C.QAbstractSocket_virtualbase_ConnectToHost(unsafe.Pointer(this.h), hostName_ms, (C.uint16_t)(port), (C.int)(mode), (C.int)(protocol))

}
func (this *QAbstractSocket) OnConnectToHost(slot func(super func(hostName string, port uint16, mode qt6.QIODeviceBase__OpenModeFlag, protocol QAbstractSocket__NetworkLayerProtocol), hostName string, port uint16, mode qt6.QIODeviceBase__OpenModeFlag, protocol QAbstractSocket__NetworkLayerProtocol)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractSocket_override_virtual_ConnectToHost(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSocket_ConnectToHost
func miqt_exec_callback_QAbstractSocket_ConnectToHost(self *C.QAbstractSocket, cb C.intptr_t, hostName C.struct_miqt_string, port C.uint16_t, mode C.int, protocol C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(hostName string, port uint16, mode qt6.QIODeviceBase__OpenModeFlag, protocol QAbstractSocket__NetworkLayerProtocol), hostName string, port uint16, mode qt6.QIODeviceBase__OpenModeFlag, protocol QAbstractSocket__NetworkLayerProtocol))
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

	slotval4 := (QAbstractSocket__NetworkLayerProtocol)(protocol)

	gofunc((&QAbstractSocket{h: self}).callVirtualBase_ConnectToHost, slotval1, slotval2, slotval3, slotval4)

}

func (this *QAbstractSocket) callVirtualBase_DisconnectFromHost() {

	C.QAbstractSocket_virtualbase_DisconnectFromHost(unsafe.Pointer(this.h))

}
func (this *QAbstractSocket) OnDisconnectFromHost(slot func(super func())) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractSocket_override_virtual_DisconnectFromHost(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSocket_DisconnectFromHost
func miqt_exec_callback_QAbstractSocket_DisconnectFromHost(self *C.QAbstractSocket, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QAbstractSocket{h: self}).callVirtualBase_DisconnectFromHost)

}

func (this *QAbstractSocket) callVirtualBase_BytesAvailable() int64 {

	return (int64)(C.QAbstractSocket_virtualbase_BytesAvailable(unsafe.Pointer(this.h)))

}
func (this *QAbstractSocket) OnBytesAvailable(slot func(super func() int64) int64) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractSocket_override_virtual_BytesAvailable(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSocket_BytesAvailable
func miqt_exec_callback_QAbstractSocket_BytesAvailable(self *C.QAbstractSocket, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractSocket{h: self}).callVirtualBase_BytesAvailable)

	return (C.longlong)(virtualReturn)

}

func (this *QAbstractSocket) callVirtualBase_BytesToWrite() int64 {

	return (int64)(C.QAbstractSocket_virtualbase_BytesToWrite(unsafe.Pointer(this.h)))

}
func (this *QAbstractSocket) OnBytesToWrite(slot func(super func() int64) int64) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractSocket_override_virtual_BytesToWrite(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSocket_BytesToWrite
func miqt_exec_callback_QAbstractSocket_BytesToWrite(self *C.QAbstractSocket, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractSocket{h: self}).callVirtualBase_BytesToWrite)

	return (C.longlong)(virtualReturn)

}

func (this *QAbstractSocket) callVirtualBase_SetReadBufferSize(size int64) {

	C.QAbstractSocket_virtualbase_SetReadBufferSize(unsafe.Pointer(this.h), (C.longlong)(size))

}
func (this *QAbstractSocket) OnSetReadBufferSize(slot func(super func(size int64), size int64)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractSocket_override_virtual_SetReadBufferSize(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSocket_SetReadBufferSize
func miqt_exec_callback_QAbstractSocket_SetReadBufferSize(self *C.QAbstractSocket, cb C.intptr_t, size C.longlong) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(size int64), size int64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int64)(size)

	gofunc((&QAbstractSocket{h: self}).callVirtualBase_SetReadBufferSize, slotval1)

}

func (this *QAbstractSocket) callVirtualBase_SocketDescriptor() uintptr {

	return (uintptr)(C.QAbstractSocket_virtualbase_SocketDescriptor(unsafe.Pointer(this.h)))

}
func (this *QAbstractSocket) OnSocketDescriptor(slot func(super func() uintptr) uintptr) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractSocket_override_virtual_SocketDescriptor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSocket_SocketDescriptor
func miqt_exec_callback_QAbstractSocket_SocketDescriptor(self *C.QAbstractSocket, cb C.intptr_t) C.intptr_t {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() uintptr) uintptr)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractSocket{h: self}).callVirtualBase_SocketDescriptor)

	return (C.intptr_t)(virtualReturn)

}

func (this *QAbstractSocket) callVirtualBase_SetSocketDescriptor(socketDescriptor uintptr, state QAbstractSocket__SocketState, openMode qt6.QIODeviceBase__OpenModeFlag) bool {

	return (bool)(C.QAbstractSocket_virtualbase_SetSocketDescriptor(unsafe.Pointer(this.h), (C.intptr_t)(socketDescriptor), (C.int)(state), (C.int)(openMode)))

}
func (this *QAbstractSocket) OnSetSocketDescriptor(slot func(super func(socketDescriptor uintptr, state QAbstractSocket__SocketState, openMode qt6.QIODeviceBase__OpenModeFlag) bool, socketDescriptor uintptr, state QAbstractSocket__SocketState, openMode qt6.QIODeviceBase__OpenModeFlag) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractSocket_override_virtual_SetSocketDescriptor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSocket_SetSocketDescriptor
func miqt_exec_callback_QAbstractSocket_SetSocketDescriptor(self *C.QAbstractSocket, cb C.intptr_t, socketDescriptor C.intptr_t, state C.int, openMode C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(socketDescriptor uintptr, state QAbstractSocket__SocketState, openMode qt6.QIODeviceBase__OpenModeFlag) bool, socketDescriptor uintptr, state QAbstractSocket__SocketState, openMode qt6.QIODeviceBase__OpenModeFlag) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (uintptr)(socketDescriptor)

	slotval2 := (QAbstractSocket__SocketState)(state)

	slotval3 := (qt6.QIODeviceBase__OpenModeFlag)(openMode)

	virtualReturn := gofunc((&QAbstractSocket{h: self}).callVirtualBase_SetSocketDescriptor, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractSocket) callVirtualBase_SetSocketOption(option QAbstractSocket__SocketOption, value *qt6.QVariant) {

	C.QAbstractSocket_virtualbase_SetSocketOption(unsafe.Pointer(this.h), (C.int)(option), (*C.QVariant)(value.UnsafePointer()))

}
func (this *QAbstractSocket) OnSetSocketOption(slot func(super func(option QAbstractSocket__SocketOption, value *qt6.QVariant), option QAbstractSocket__SocketOption, value *qt6.QVariant)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractSocket_override_virtual_SetSocketOption(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSocket_SetSocketOption
func miqt_exec_callback_QAbstractSocket_SetSocketOption(self *C.QAbstractSocket, cb C.intptr_t, option C.int, value *C.QVariant) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(option QAbstractSocket__SocketOption, value *qt6.QVariant), option QAbstractSocket__SocketOption, value *qt6.QVariant))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAbstractSocket__SocketOption)(option)

	slotval2 := qt6.UnsafeNewQVariant(unsafe.Pointer(value))

	gofunc((&QAbstractSocket{h: self}).callVirtualBase_SetSocketOption, slotval1, slotval2)

}

func (this *QAbstractSocket) callVirtualBase_SocketOption(option QAbstractSocket__SocketOption) *qt6.QVariant {

	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(C.QAbstractSocket_virtualbase_SocketOption(unsafe.Pointer(this.h), (C.int)(option))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QAbstractSocket) OnSocketOption(slot func(super func(option QAbstractSocket__SocketOption) *qt6.QVariant, option QAbstractSocket__SocketOption) *qt6.QVariant) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractSocket_override_virtual_SocketOption(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSocket_SocketOption
func miqt_exec_callback_QAbstractSocket_SocketOption(self *C.QAbstractSocket, cb C.intptr_t, option C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(option QAbstractSocket__SocketOption) *qt6.QVariant, option QAbstractSocket__SocketOption) *qt6.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAbstractSocket__SocketOption)(option)

	virtualReturn := gofunc((&QAbstractSocket{h: self}).callVirtualBase_SocketOption, slotval1)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}

func (this *QAbstractSocket) callVirtualBase_Close() {

	C.QAbstractSocket_virtualbase_Close(unsafe.Pointer(this.h))

}
func (this *QAbstractSocket) OnClose(slot func(super func())) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractSocket_override_virtual_Close(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSocket_Close
func miqt_exec_callback_QAbstractSocket_Close(self *C.QAbstractSocket, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QAbstractSocket{h: self}).callVirtualBase_Close)

}

func (this *QAbstractSocket) callVirtualBase_IsSequential() bool {

	return (bool)(C.QAbstractSocket_virtualbase_IsSequential(unsafe.Pointer(this.h)))

}
func (this *QAbstractSocket) OnIsSequential(slot func(super func() bool) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractSocket_override_virtual_IsSequential(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSocket_IsSequential
func miqt_exec_callback_QAbstractSocket_IsSequential(self *C.QAbstractSocket, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractSocket{h: self}).callVirtualBase_IsSequential)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractSocket) callVirtualBase_WaitForConnected(msecs int) bool {

	return (bool)(C.QAbstractSocket_virtualbase_WaitForConnected(unsafe.Pointer(this.h), (C.int)(msecs)))

}
func (this *QAbstractSocket) OnWaitForConnected(slot func(super func(msecs int) bool, msecs int) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractSocket_override_virtual_WaitForConnected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSocket_WaitForConnected
func miqt_exec_callback_QAbstractSocket_WaitForConnected(self *C.QAbstractSocket, cb C.intptr_t, msecs C.int) C.bool {
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

	return (bool)(C.QAbstractSocket_virtualbase_WaitForReadyRead(unsafe.Pointer(this.h), (C.int)(msecs)))

}
func (this *QAbstractSocket) OnWaitForReadyRead(slot func(super func(msecs int) bool, msecs int) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractSocket_override_virtual_WaitForReadyRead(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSocket_WaitForReadyRead
func miqt_exec_callback_QAbstractSocket_WaitForReadyRead(self *C.QAbstractSocket, cb C.intptr_t, msecs C.int) C.bool {
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

	return (bool)(C.QAbstractSocket_virtualbase_WaitForBytesWritten(unsafe.Pointer(this.h), (C.int)(msecs)))

}
func (this *QAbstractSocket) OnWaitForBytesWritten(slot func(super func(msecs int) bool, msecs int) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractSocket_override_virtual_WaitForBytesWritten(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSocket_WaitForBytesWritten
func miqt_exec_callback_QAbstractSocket_WaitForBytesWritten(self *C.QAbstractSocket, cb C.intptr_t, msecs C.int) C.bool {
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

	return (bool)(C.QAbstractSocket_virtualbase_WaitForDisconnected(unsafe.Pointer(this.h), (C.int)(msecs)))

}
func (this *QAbstractSocket) OnWaitForDisconnected(slot func(super func(msecs int) bool, msecs int) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractSocket_override_virtual_WaitForDisconnected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSocket_WaitForDisconnected
func miqt_exec_callback_QAbstractSocket_WaitForDisconnected(self *C.QAbstractSocket, cb C.intptr_t, msecs C.int) C.bool {
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

	return (int64)(C.QAbstractSocket_virtualbase_ReadData(unsafe.Pointer(this.h), data_Cstring, (C.longlong)(maxlen)))

}
func (this *QAbstractSocket) OnReadData(slot func(super func(data string, maxlen int64) int64, data string, maxlen int64) int64) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractSocket_override_virtual_ReadData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSocket_ReadData
func miqt_exec_callback_QAbstractSocket_ReadData(self *C.QAbstractSocket, cb C.intptr_t, data *C.char, maxlen C.longlong) C.longlong {
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

	return (int64)(C.QAbstractSocket_virtualbase_ReadLineData(unsafe.Pointer(this.h), data_Cstring, (C.longlong)(maxlen)))

}
func (this *QAbstractSocket) OnReadLineData(slot func(super func(data string, maxlen int64) int64, data string, maxlen int64) int64) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractSocket_override_virtual_ReadLineData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSocket_ReadLineData
func miqt_exec_callback_QAbstractSocket_ReadLineData(self *C.QAbstractSocket, cb C.intptr_t, data *C.char, maxlen C.longlong) C.longlong {
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

func (this *QAbstractSocket) callVirtualBase_SkipData(maxSize int64) int64 {

	return (int64)(C.QAbstractSocket_virtualbase_SkipData(unsafe.Pointer(this.h), (C.longlong)(maxSize)))

}
func (this *QAbstractSocket) OnSkipData(slot func(super func(maxSize int64) int64, maxSize int64) int64) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractSocket_override_virtual_SkipData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSocket_SkipData
func miqt_exec_callback_QAbstractSocket_SkipData(self *C.QAbstractSocket, cb C.intptr_t, maxSize C.longlong) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(maxSize int64) int64, maxSize int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int64)(maxSize)

	virtualReturn := gofunc((&QAbstractSocket{h: self}).callVirtualBase_SkipData, slotval1)

	return (C.longlong)(virtualReturn)

}

func (this *QAbstractSocket) callVirtualBase_WriteData(data string, lenVal int64) int64 {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))

	return (int64)(C.QAbstractSocket_virtualbase_WriteData(unsafe.Pointer(this.h), data_Cstring, (C.longlong)(lenVal)))

}
func (this *QAbstractSocket) OnWriteData(slot func(super func(data string, lenVal int64) int64, data string, lenVal int64) int64) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractSocket_override_virtual_WriteData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSocket_WriteData
func miqt_exec_callback_QAbstractSocket_WriteData(self *C.QAbstractSocket, cb C.intptr_t, data *C.const_char, lenVal C.longlong) C.longlong {
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

func (this *QAbstractSocket) callVirtualBase_Open(mode qt6.QIODeviceBase__OpenModeFlag) bool {

	return (bool)(C.QAbstractSocket_virtualbase_Open(unsafe.Pointer(this.h), (C.int)(mode)))

}
func (this *QAbstractSocket) OnOpen(slot func(super func(mode qt6.QIODeviceBase__OpenModeFlag) bool, mode qt6.QIODeviceBase__OpenModeFlag) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractSocket_override_virtual_Open(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSocket_Open
func miqt_exec_callback_QAbstractSocket_Open(self *C.QAbstractSocket, cb C.intptr_t, mode C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(mode qt6.QIODeviceBase__OpenModeFlag) bool, mode qt6.QIODeviceBase__OpenModeFlag) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt6.QIODeviceBase__OpenModeFlag)(mode)

	virtualReturn := gofunc((&QAbstractSocket{h: self}).callVirtualBase_Open, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractSocket) callVirtualBase_Pos() int64 {

	return (int64)(C.QAbstractSocket_virtualbase_Pos(unsafe.Pointer(this.h)))

}
func (this *QAbstractSocket) OnPos(slot func(super func() int64) int64) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractSocket_override_virtual_Pos(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSocket_Pos
func miqt_exec_callback_QAbstractSocket_Pos(self *C.QAbstractSocket, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractSocket{h: self}).callVirtualBase_Pos)

	return (C.longlong)(virtualReturn)

}

func (this *QAbstractSocket) callVirtualBase_Size() int64 {

	return (int64)(C.QAbstractSocket_virtualbase_Size(unsafe.Pointer(this.h)))

}
func (this *QAbstractSocket) OnSize(slot func(super func() int64) int64) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractSocket_override_virtual_Size(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSocket_Size
func miqt_exec_callback_QAbstractSocket_Size(self *C.QAbstractSocket, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractSocket{h: self}).callVirtualBase_Size)

	return (C.longlong)(virtualReturn)

}

func (this *QAbstractSocket) callVirtualBase_Seek(pos int64) bool {

	return (bool)(C.QAbstractSocket_virtualbase_Seek(unsafe.Pointer(this.h), (C.longlong)(pos)))

}
func (this *QAbstractSocket) OnSeek(slot func(super func(pos int64) bool, pos int64) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractSocket_override_virtual_Seek(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSocket_Seek
func miqt_exec_callback_QAbstractSocket_Seek(self *C.QAbstractSocket, cb C.intptr_t, pos C.longlong) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(pos int64) bool, pos int64) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int64)(pos)

	virtualReturn := gofunc((&QAbstractSocket{h: self}).callVirtualBase_Seek, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractSocket) callVirtualBase_AtEnd() bool {

	return (bool)(C.QAbstractSocket_virtualbase_AtEnd(unsafe.Pointer(this.h)))

}
func (this *QAbstractSocket) OnAtEnd(slot func(super func() bool) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractSocket_override_virtual_AtEnd(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSocket_AtEnd
func miqt_exec_callback_QAbstractSocket_AtEnd(self *C.QAbstractSocket, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractSocket{h: self}).callVirtualBase_AtEnd)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractSocket) callVirtualBase_Reset() bool {

	return (bool)(C.QAbstractSocket_virtualbase_Reset(unsafe.Pointer(this.h)))

}
func (this *QAbstractSocket) OnReset(slot func(super func() bool) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractSocket_override_virtual_Reset(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSocket_Reset
func miqt_exec_callback_QAbstractSocket_Reset(self *C.QAbstractSocket, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractSocket{h: self}).callVirtualBase_Reset)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractSocket) callVirtualBase_CanReadLine() bool {

	return (bool)(C.QAbstractSocket_virtualbase_CanReadLine(unsafe.Pointer(this.h)))

}
func (this *QAbstractSocket) OnCanReadLine(slot func(super func() bool) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractSocket_override_virtual_CanReadLine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSocket_CanReadLine
func miqt_exec_callback_QAbstractSocket_CanReadLine(self *C.QAbstractSocket, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractSocket{h: self}).callVirtualBase_CanReadLine)

	return (C.bool)(virtualReturn)

}

// Delete this object from C++ memory.
func (this *QAbstractSocket) Delete() {
	C.QAbstractSocket_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAbstractSocket) GoGC() {
	runtime.SetFinalizer(this, func(this *QAbstractSocket) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
