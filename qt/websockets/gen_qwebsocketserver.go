package websockets

/*

#include "gen_qwebsocketserver.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"github.com/mappu/miqt/qt/network"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QWebSocketServer__SslMode int

const (
	QWebSocketServer__SecureMode    QWebSocketServer__SslMode = 0
	QWebSocketServer__NonSecureMode QWebSocketServer__SslMode = 1
)

type QWebSocketServer struct {
	h *C.QWebSocketServer
	*qt.QObject
}

func (this *QWebSocketServer) cPointer() *C.QWebSocketServer {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWebSocketServer) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWebSocketServer constructs the type using only CGO pointers.
func newQWebSocketServer(h *C.QWebSocketServer) *QWebSocketServer {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QWebSocketServer_virtbase(h, &outptr_QObject)

	return &QWebSocketServer{h: h,
		QObject: qt.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQWebSocketServer constructs the type using only unsafe pointers.
func UnsafeNewQWebSocketServer(h unsafe.Pointer) *QWebSocketServer {
	return newQWebSocketServer((*C.QWebSocketServer)(h))
}

// NewQWebSocketServer constructs a new QWebSocketServer object.
func NewQWebSocketServer(serverName string, secureMode QWebSocketServer__SslMode) *QWebSocketServer {
	serverName_ms := C.struct_miqt_string{}
	serverName_ms.data = C.CString(serverName)
	serverName_ms.len = C.size_t(len(serverName))
	defer C.free(unsafe.Pointer(serverName_ms.data))

	return newQWebSocketServer(C.QWebSocketServer_new(serverName_ms, (C.int)(secureMode)))
}

// NewQWebSocketServer2 constructs a new QWebSocketServer object.
func NewQWebSocketServer2(serverName string, secureMode QWebSocketServer__SslMode, parent *qt.QObject) *QWebSocketServer {
	serverName_ms := C.struct_miqt_string{}
	serverName_ms.data = C.CString(serverName)
	serverName_ms.len = C.size_t(len(serverName))
	defer C.free(unsafe.Pointer(serverName_ms.data))

	return newQWebSocketServer(C.QWebSocketServer_new2(serverName_ms, (C.int)(secureMode), (*C.QObject)(parent.UnsafePointer())))
}

func (this *QWebSocketServer) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QWebSocketServer_metaObject(this.h)))
}

func (this *QWebSocketServer) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QWebSocketServer_metacast(this.h, param1_Cstring))
}

func QWebSocketServer_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QWebSocketServer_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebSocketServer_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QWebSocketServer_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebSocketServer) Listen() bool {
	return (bool)(C.QWebSocketServer_listen(this.h))
}

func (this *QWebSocketServer) Close() {
	C.QWebSocketServer_close(this.h)
}

func (this *QWebSocketServer) IsListening() bool {
	return (bool)(C.QWebSocketServer_isListening(this.h))
}

func (this *QWebSocketServer) SetMaxPendingConnections(numConnections int) {
	C.QWebSocketServer_setMaxPendingConnections(this.h, (C.int)(numConnections))
}

func (this *QWebSocketServer) MaxPendingConnections() int {
	return (int)(C.QWebSocketServer_maxPendingConnections(this.h))
}

func (this *QWebSocketServer) SetHandshakeTimeoutWithMsec(msec int) {
	C.QWebSocketServer_setHandshakeTimeoutWithMsec(this.h, (C.int)(msec))
}

func (this *QWebSocketServer) HandshakeTimeoutMS() int {
	return (int)(C.QWebSocketServer_handshakeTimeoutMS(this.h))
}

func (this *QWebSocketServer) ServerPort() uint16 {
	return (uint16)(C.QWebSocketServer_serverPort(this.h))
}

func (this *QWebSocketServer) ServerAddress() *network.QHostAddress {
	_goptr := network.UnsafeNewQHostAddress(unsafe.Pointer(C.QWebSocketServer_serverAddress(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebSocketServer) ServerUrl() *qt.QUrl {
	_goptr := qt.UnsafeNewQUrl(unsafe.Pointer(C.QWebSocketServer_serverUrl(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebSocketServer) SecureMode() QWebSocketServer__SslMode {
	return (QWebSocketServer__SslMode)(C.QWebSocketServer_secureMode(this.h))
}

func (this *QWebSocketServer) SetSocketDescriptor(socketDescriptor int) bool {
	return (bool)(C.QWebSocketServer_setSocketDescriptor(this.h, (C.int)(socketDescriptor)))
}

func (this *QWebSocketServer) SocketDescriptor() int {
	return (int)(C.QWebSocketServer_socketDescriptor(this.h))
}

func (this *QWebSocketServer) SetNativeDescriptor(descriptor uintptr) bool {
	return (bool)(C.QWebSocketServer_setNativeDescriptor(this.h, (C.intptr_t)(descriptor)))
}

func (this *QWebSocketServer) NativeDescriptor() uintptr {
	return (uintptr)(C.QWebSocketServer_nativeDescriptor(this.h))
}

func (this *QWebSocketServer) HasPendingConnections() bool {
	return (bool)(C.QWebSocketServer_hasPendingConnections(this.h))
}

func (this *QWebSocketServer) NextPendingConnection() *QWebSocket {
	return newQWebSocket(C.QWebSocketServer_nextPendingConnection(this.h))
}

func (this *QWebSocketServer) Error() QWebSocketProtocol__CloseCode {
	return (QWebSocketProtocol__CloseCode)(C.QWebSocketServer_error(this.h))
}

func (this *QWebSocketServer) ErrorString() string {
	var _ms C.struct_miqt_string = C.QWebSocketServer_errorString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebSocketServer) PauseAccepting() {
	C.QWebSocketServer_pauseAccepting(this.h)
}

func (this *QWebSocketServer) ResumeAccepting() {
	C.QWebSocketServer_resumeAccepting(this.h)
}

func (this *QWebSocketServer) SetServerName(serverName string) {
	serverName_ms := C.struct_miqt_string{}
	serverName_ms.data = C.CString(serverName)
	serverName_ms.len = C.size_t(len(serverName))
	defer C.free(unsafe.Pointer(serverName_ms.data))
	C.QWebSocketServer_setServerName(this.h, serverName_ms)
}

func (this *QWebSocketServer) ServerName() string {
	var _ms C.struct_miqt_string = C.QWebSocketServer_serverName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebSocketServer) SetProxy(networkProxy *network.QNetworkProxy) {
	C.QWebSocketServer_setProxy(this.h, (*C.QNetworkProxy)(networkProxy.UnsafePointer()))
}

func (this *QWebSocketServer) Proxy() *network.QNetworkProxy {
	_goptr := network.UnsafeNewQNetworkProxy(unsafe.Pointer(C.QWebSocketServer_proxy(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebSocketServer) SetSslConfiguration(sslConfiguration *network.QSslConfiguration) {
	C.QWebSocketServer_setSslConfiguration(this.h, (*C.QSslConfiguration)(sslConfiguration.UnsafePointer()))
}

func (this *QWebSocketServer) SslConfiguration() *network.QSslConfiguration {
	_goptr := network.UnsafeNewQSslConfiguration(unsafe.Pointer(C.QWebSocketServer_sslConfiguration(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebSocketServer) SupportedVersions() []QWebSocketProtocol__Version {
	var _ma C.struct_miqt_array = C.QWebSocketServer_supportedVersions(this.h)
	_ret := make([]QWebSocketProtocol__Version, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (QWebSocketProtocol__Version)(_outCast[i])
	}
	return _ret
}

func (this *QWebSocketServer) HandleConnection(socket *network.QTcpSocket) {
	C.QWebSocketServer_handleConnection(this.h, (*C.QTcpSocket)(socket.UnsafePointer()))
}

func (this *QWebSocketServer) AcceptError(socketError network.QAbstractSocket__SocketError) {
	C.QWebSocketServer_acceptError(this.h, (C.int)(socketError))
}
func (this *QWebSocketServer) OnAcceptError(slot func(socketError network.QAbstractSocket__SocketError)) {
	C.QWebSocketServer_connect_acceptError(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebSocketServer_acceptError
func miqt_exec_callback_QWebSocketServer_acceptError(cb C.intptr_t, socketError C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(socketError network.QAbstractSocket__SocketError))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (network.QAbstractSocket__SocketError)(socketError)

	gofunc(slotval1)
}

func (this *QWebSocketServer) ServerError(closeCode QWebSocketProtocol__CloseCode) {
	C.QWebSocketServer_serverError(this.h, (C.int)(closeCode))
}
func (this *QWebSocketServer) OnServerError(slot func(closeCode QWebSocketProtocol__CloseCode)) {
	C.QWebSocketServer_connect_serverError(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebSocketServer_serverError
func miqt_exec_callback_QWebSocketServer_serverError(cb C.intptr_t, closeCode C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(closeCode QWebSocketProtocol__CloseCode))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QWebSocketProtocol__CloseCode)(closeCode)

	gofunc(slotval1)
}

func (this *QWebSocketServer) OriginAuthenticationRequired(pAuthenticator *QWebSocketCorsAuthenticator) {
	C.QWebSocketServer_originAuthenticationRequired(this.h, pAuthenticator.cPointer())
}
func (this *QWebSocketServer) OnOriginAuthenticationRequired(slot func(pAuthenticator *QWebSocketCorsAuthenticator)) {
	C.QWebSocketServer_connect_originAuthenticationRequired(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebSocketServer_originAuthenticationRequired
func miqt_exec_callback_QWebSocketServer_originAuthenticationRequired(cb C.intptr_t, pAuthenticator *C.QWebSocketCorsAuthenticator) {
	gofunc, ok := cgo.Handle(cb).Value().(func(pAuthenticator *QWebSocketCorsAuthenticator))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWebSocketCorsAuthenticator(pAuthenticator)

	gofunc(slotval1)
}

func (this *QWebSocketServer) NewConnection() {
	C.QWebSocketServer_newConnection(this.h)
}
func (this *QWebSocketServer) OnNewConnection(slot func()) {
	C.QWebSocketServer_connect_newConnection(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebSocketServer_newConnection
func miqt_exec_callback_QWebSocketServer_newConnection(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QWebSocketServer) PeerVerifyError(error *network.QSslError) {
	C.QWebSocketServer_peerVerifyError(this.h, (*C.QSslError)(error.UnsafePointer()))
}
func (this *QWebSocketServer) OnPeerVerifyError(slot func(error *network.QSslError)) {
	C.QWebSocketServer_connect_peerVerifyError(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebSocketServer_peerVerifyError
func miqt_exec_callback_QWebSocketServer_peerVerifyError(cb C.intptr_t, error *C.QSslError) {
	gofunc, ok := cgo.Handle(cb).Value().(func(error *network.QSslError))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := network.UnsafeNewQSslError(unsafe.Pointer(error))

	gofunc(slotval1)
}

func (this *QWebSocketServer) SslErrors(errors []network.QSslError) {
	errors_CArray := (*[0xffff]*C.QSslError)(C.malloc(C.size_t(8 * len(errors))))
	defer C.free(unsafe.Pointer(errors_CArray))
	for i := range errors {
		errors_CArray[i] = (*C.QSslError)(errors[i].UnsafePointer())
	}
	errors_ma := C.struct_miqt_array{len: C.size_t(len(errors)), data: unsafe.Pointer(errors_CArray)}
	C.QWebSocketServer_sslErrors(this.h, errors_ma)
}
func (this *QWebSocketServer) OnSslErrors(slot func(errors []network.QSslError)) {
	C.QWebSocketServer_connect_sslErrors(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebSocketServer_sslErrors
func miqt_exec_callback_QWebSocketServer_sslErrors(cb C.intptr_t, errors C.struct_miqt_array) {
	gofunc, ok := cgo.Handle(cb).Value().(func(errors []network.QSslError))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var errors_ma C.struct_miqt_array = errors
	errors_ret := make([]network.QSslError, int(errors_ma.len))
	errors_outCast := (*[0xffff]*C.QSslError)(unsafe.Pointer(errors_ma.data)) // hey ya
	for i := 0; i < int(errors_ma.len); i++ {
		errors_lv_goptr := network.UnsafeNewQSslError(unsafe.Pointer(errors_outCast[i]))
		errors_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		errors_ret[i] = *errors_lv_goptr
	}
	slotval1 := errors_ret

	gofunc(slotval1)
}

func (this *QWebSocketServer) PreSharedKeyAuthenticationRequired(authenticator *network.QSslPreSharedKeyAuthenticator) {
	C.QWebSocketServer_preSharedKeyAuthenticationRequired(this.h, (*C.QSslPreSharedKeyAuthenticator)(authenticator.UnsafePointer()))
}
func (this *QWebSocketServer) OnPreSharedKeyAuthenticationRequired(slot func(authenticator *network.QSslPreSharedKeyAuthenticator)) {
	C.QWebSocketServer_connect_preSharedKeyAuthenticationRequired(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebSocketServer_preSharedKeyAuthenticationRequired
func miqt_exec_callback_QWebSocketServer_preSharedKeyAuthenticationRequired(cb C.intptr_t, authenticator *C.QSslPreSharedKeyAuthenticator) {
	gofunc, ok := cgo.Handle(cb).Value().(func(authenticator *network.QSslPreSharedKeyAuthenticator))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := network.UnsafeNewQSslPreSharedKeyAuthenticator(unsafe.Pointer(authenticator))

	gofunc(slotval1)
}

func (this *QWebSocketServer) Closed() {
	C.QWebSocketServer_closed(this.h)
}
func (this *QWebSocketServer) OnClosed(slot func()) {
	C.QWebSocketServer_connect_closed(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebSocketServer_closed
func miqt_exec_callback_QWebSocketServer_closed(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func QWebSocketServer_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebSocketServer_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebSocketServer_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebSocketServer_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebSocketServer_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebSocketServer_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebSocketServer_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebSocketServer_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebSocketServer) ListenWithAddress(address *network.QHostAddress) bool {
	return (bool)(C.QWebSocketServer_listenWithAddress(this.h, (*C.QHostAddress)(address.UnsafePointer())))
}

func (this *QWebSocketServer) Listen2(address *network.QHostAddress, port uint16) bool {
	return (bool)(C.QWebSocketServer_listen2(this.h, (*C.QHostAddress)(address.UnsafePointer()), (C.ushort)(port)))
}

// Sender can only be called from a QWebSocketServer that was directly constructed.
func (this *QWebSocketServer) Sender() *qt.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt.UnsafeNewQObject(unsafe.Pointer(C.QWebSocketServer_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QWebSocketServer that was directly constructed.
func (this *QWebSocketServer) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QWebSocketServer_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QWebSocketServer that was directly constructed.
func (this *QWebSocketServer) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QWebSocketServer_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QWebSocketServer that was directly constructed.
func (this *QWebSocketServer) IsSignalConnected(signal *qt.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QWebSocketServer_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QWebSocketServer) callVirtualBase_NextPendingConnection() *QWebSocket {

	return newQWebSocket(C.QWebSocketServer_virtualbase_nextPendingConnection(unsafe.Pointer(this.h)))

}
func (this *QWebSocketServer) OnNextPendingConnection(slot func(super func() *QWebSocket) *QWebSocket) {
	ok := C.QWebSocketServer_override_virtual_nextPendingConnection(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebSocketServer_nextPendingConnection
func miqt_exec_callback_QWebSocketServer_nextPendingConnection(self *C.QWebSocketServer, cb C.intptr_t) *C.QWebSocket {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QWebSocket) *QWebSocket)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWebSocketServer{h: self}).callVirtualBase_NextPendingConnection)

	return virtualReturn.cPointer()

}

func (this *QWebSocketServer) callVirtualBase_Event(event *qt.QEvent) bool {

	return (bool)(C.QWebSocketServer_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QWebSocketServer) OnEvent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	ok := C.QWebSocketServer_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebSocketServer_event
func miqt_exec_callback_QWebSocketServer_event(self *C.QWebSocketServer, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QWebSocketServer{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QWebSocketServer) callVirtualBase_EventFilter(watched *qt.QObject, event *qt.QEvent) bool {

	return (bool)(C.QWebSocketServer_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QWebSocketServer) OnEventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	ok := C.QWebSocketServer_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebSocketServer_eventFilter
func miqt_exec_callback_QWebSocketServer_eventFilter(self *C.QWebSocketServer, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QWebSocketServer{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QWebSocketServer) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.QWebSocketServer_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QWebSocketServer) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	ok := C.QWebSocketServer_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebSocketServer_timerEvent
func miqt_exec_callback_QWebSocketServer_timerEvent(self *C.QWebSocketServer, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QWebSocketServer{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QWebSocketServer) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QWebSocketServer_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QWebSocketServer) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	ok := C.QWebSocketServer_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebSocketServer_childEvent
func miqt_exec_callback_QWebSocketServer_childEvent(self *C.QWebSocketServer, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QWebSocketServer{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QWebSocketServer) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QWebSocketServer_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QWebSocketServer) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QWebSocketServer_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebSocketServer_customEvent
func miqt_exec_callback_QWebSocketServer_customEvent(self *C.QWebSocketServer, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QWebSocketServer{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QWebSocketServer) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QWebSocketServer_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QWebSocketServer) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QWebSocketServer_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebSocketServer_connectNotify
func miqt_exec_callback_QWebSocketServer_connectNotify(self *C.QWebSocketServer, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QWebSocketServer{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QWebSocketServer) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QWebSocketServer_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QWebSocketServer) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QWebSocketServer_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebSocketServer_disconnectNotify
func miqt_exec_callback_QWebSocketServer_disconnectNotify(self *C.QWebSocketServer, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QWebSocketServer{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QWebSocketServer) Delete() {
	C.QWebSocketServer_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWebSocketServer) GoGC() {
	runtime.SetFinalizer(this, func(this *QWebSocketServer) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
