package websockets

/*

#include "gen_qwebsocket.h"
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

type QWebSocket struct {
	h *C.QWebSocket
	*qt6.QObject
}

func (this *QWebSocket) cPointer() *C.QWebSocket {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWebSocket) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWebSocket constructs the type using only CGO pointers.
func newQWebSocket(h *C.QWebSocket) *QWebSocket {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QWebSocket_virtbase(h, &outptr_QObject)

	return &QWebSocket{h: h,
		QObject: qt6.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQWebSocket constructs the type using only unsafe pointers.
func UnsafeNewQWebSocket(h unsafe.Pointer) *QWebSocket {
	return newQWebSocket((*C.QWebSocket)(h))
}

// NewQWebSocket constructs a new QWebSocket object.
func NewQWebSocket() *QWebSocket {

	return newQWebSocket(C.QWebSocket_new())
}

// NewQWebSocket2 constructs a new QWebSocket object.
func NewQWebSocket2(origin string) *QWebSocket {
	origin_ms := C.struct_miqt_string{}
	origin_ms.data = C.CString(origin)
	origin_ms.len = C.size_t(len(origin))
	defer C.free(unsafe.Pointer(origin_ms.data))

	return newQWebSocket(C.QWebSocket_new2(origin_ms))
}

// NewQWebSocket3 constructs a new QWebSocket object.
func NewQWebSocket3(origin string, version QWebSocketProtocol__Version) *QWebSocket {
	origin_ms := C.struct_miqt_string{}
	origin_ms.data = C.CString(origin)
	origin_ms.len = C.size_t(len(origin))
	defer C.free(unsafe.Pointer(origin_ms.data))

	return newQWebSocket(C.QWebSocket_new3(origin_ms, (C.int)(version)))
}

// NewQWebSocket4 constructs a new QWebSocket object.
func NewQWebSocket4(origin string, version QWebSocketProtocol__Version, parent *qt6.QObject) *QWebSocket {
	origin_ms := C.struct_miqt_string{}
	origin_ms.data = C.CString(origin)
	origin_ms.len = C.size_t(len(origin))
	defer C.free(unsafe.Pointer(origin_ms.data))

	return newQWebSocket(C.QWebSocket_new4(origin_ms, (C.int)(version), (*C.QObject)(parent.UnsafePointer())))
}

func (this *QWebSocket) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QWebSocket_metaObject(this.h)))
}

func (this *QWebSocket) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QWebSocket_metacast(this.h, param1_Cstring))
}

func QWebSocket_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QWebSocket_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebSocket) Abort() {
	C.QWebSocket_abort(this.h)
}

func (this *QWebSocket) Error() network.QAbstractSocket__SocketError {
	return (network.QAbstractSocket__SocketError)(C.QWebSocket_error(this.h))
}

func (this *QWebSocket) ErrorString() string {
	var _ms C.struct_miqt_string = C.QWebSocket_errorString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebSocket) Flush() bool {
	return (bool)(C.QWebSocket_flush(this.h))
}

func (this *QWebSocket) IsValid() bool {
	return (bool)(C.QWebSocket_isValid(this.h))
}

func (this *QWebSocket) LocalAddress() *network.QHostAddress {
	_goptr := network.UnsafeNewQHostAddress(unsafe.Pointer(C.QWebSocket_localAddress(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebSocket) LocalPort() uint16 {
	return (uint16)(C.QWebSocket_localPort(this.h))
}

func (this *QWebSocket) PauseMode() network.QAbstractSocket__PauseMode {
	return (network.QAbstractSocket__PauseMode)(C.QWebSocket_pauseMode(this.h))
}

func (this *QWebSocket) PeerAddress() *network.QHostAddress {
	_goptr := network.UnsafeNewQHostAddress(unsafe.Pointer(C.QWebSocket_peerAddress(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebSocket) PeerName() string {
	var _ms C.struct_miqt_string = C.QWebSocket_peerName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebSocket) PeerPort() uint16 {
	return (uint16)(C.QWebSocket_peerPort(this.h))
}

func (this *QWebSocket) Proxy() *network.QNetworkProxy {
	_goptr := network.UnsafeNewQNetworkProxy(unsafe.Pointer(C.QWebSocket_proxy(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebSocket) SetProxy(networkProxy *network.QNetworkProxy) {
	C.QWebSocket_setProxy(this.h, (*C.QNetworkProxy)(networkProxy.UnsafePointer()))
}

func (this *QWebSocket) SetMaskGenerator(maskGenerator *QMaskGenerator) {
	C.QWebSocket_setMaskGenerator(this.h, maskGenerator.cPointer())
}

func (this *QWebSocket) MaskGenerator() *QMaskGenerator {
	return newQMaskGenerator(C.QWebSocket_maskGenerator(this.h))
}

func (this *QWebSocket) ReadBufferSize() int64 {
	return (int64)(C.QWebSocket_readBufferSize(this.h))
}

func (this *QWebSocket) SetReadBufferSize(size int64) {
	C.QWebSocket_setReadBufferSize(this.h, (C.longlong)(size))
}

func (this *QWebSocket) Resume() {
	C.QWebSocket_resume(this.h)
}

func (this *QWebSocket) SetPauseMode(pauseMode network.QAbstractSocket__PauseMode) {
	C.QWebSocket_setPauseMode(this.h, (C.int)(pauseMode))
}

func (this *QWebSocket) State() network.QAbstractSocket__SocketState {
	return (network.QAbstractSocket__SocketState)(C.QWebSocket_state(this.h))
}

func (this *QWebSocket) Version() QWebSocketProtocol__Version {
	return (QWebSocketProtocol__Version)(C.QWebSocket_version(this.h))
}

func (this *QWebSocket) ResourceName() string {
	var _ms C.struct_miqt_string = C.QWebSocket_resourceName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebSocket) RequestUrl() *qt6.QUrl {
	_goptr := qt6.UnsafeNewQUrl(unsafe.Pointer(C.QWebSocket_requestUrl(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebSocket) Request() *network.QNetworkRequest {
	_goptr := network.UnsafeNewQNetworkRequest(unsafe.Pointer(C.QWebSocket_request(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebSocket) HandshakeOptions() *QWebSocketHandshakeOptions {
	_goptr := newQWebSocketHandshakeOptions(C.QWebSocket_handshakeOptions(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebSocket) Origin() string {
	var _ms C.struct_miqt_string = C.QWebSocket_origin(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebSocket) Subprotocol() string {
	var _ms C.struct_miqt_string = C.QWebSocket_subprotocol(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebSocket) CloseCode() QWebSocketProtocol__CloseCode {
	return (QWebSocketProtocol__CloseCode)(C.QWebSocket_closeCode(this.h))
}

func (this *QWebSocket) CloseReason() string {
	var _ms C.struct_miqt_string = C.QWebSocket_closeReason(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebSocket) SendTextMessage(message string) int64 {
	message_ms := C.struct_miqt_string{}
	message_ms.data = C.CString(message)
	message_ms.len = C.size_t(len(message))
	defer C.free(unsafe.Pointer(message_ms.data))
	return (int64)(C.QWebSocket_sendTextMessage(this.h, message_ms))
}

func (this *QWebSocket) SendBinaryMessage(data []byte) int64 {
	data_alias := C.struct_miqt_string{}
	if len(data) > 0 {
		data_alias.data = (*C.char)(unsafe.Pointer(&data[0]))
	} else {
		data_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	data_alias.len = C.size_t(len(data))
	return (int64)(C.QWebSocket_sendBinaryMessage(this.h, data_alias))
}

func (this *QWebSocket) IgnoreSslErrors(errors []network.QSslError) {
	errors_CArray := (*[0xffff]*C.QSslError)(C.malloc(C.size_t(8 * len(errors))))
	defer C.free(unsafe.Pointer(errors_CArray))
	for i := range errors {
		errors_CArray[i] = (*C.QSslError)(errors[i].UnsafePointer())
	}
	errors_ma := C.struct_miqt_array{len: C.size_t(len(errors)), data: unsafe.Pointer(errors_CArray)}
	C.QWebSocket_ignoreSslErrors(this.h, errors_ma)
}

func (this *QWebSocket) ContinueInterruptedHandshake() {
	C.QWebSocket_continueInterruptedHandshake(this.h)
}

func (this *QWebSocket) SetSslConfiguration(sslConfiguration *network.QSslConfiguration) {
	C.QWebSocket_setSslConfiguration(this.h, (*C.QSslConfiguration)(sslConfiguration.UnsafePointer()))
}

func (this *QWebSocket) SslConfiguration() *network.QSslConfiguration {
	_goptr := network.UnsafeNewQSslConfiguration(unsafe.Pointer(C.QWebSocket_sslConfiguration(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebSocket) BytesToWrite() int64 {
	return (int64)(C.QWebSocket_bytesToWrite(this.h))
}

func (this *QWebSocket) SetMaxAllowedIncomingFrameSize(maxAllowedIncomingFrameSize uint64) {
	C.QWebSocket_setMaxAllowedIncomingFrameSize(this.h, (C.ulonglong)(maxAllowedIncomingFrameSize))
}

func (this *QWebSocket) MaxAllowedIncomingFrameSize() uint64 {
	return (uint64)(C.QWebSocket_maxAllowedIncomingFrameSize(this.h))
}

func (this *QWebSocket) SetMaxAllowedIncomingMessageSize(maxAllowedIncomingMessageSize uint64) {
	C.QWebSocket_setMaxAllowedIncomingMessageSize(this.h, (C.ulonglong)(maxAllowedIncomingMessageSize))
}

func (this *QWebSocket) MaxAllowedIncomingMessageSize() uint64 {
	return (uint64)(C.QWebSocket_maxAllowedIncomingMessageSize(this.h))
}

func QWebSocket_MaxIncomingMessageSize() uint64 {
	return (uint64)(C.QWebSocket_maxIncomingMessageSize())
}

func QWebSocket_MaxIncomingFrameSize() uint64 {
	return (uint64)(C.QWebSocket_maxIncomingFrameSize())
}

func (this *QWebSocket) SetOutgoingFrameSize(outgoingFrameSize uint64) {
	C.QWebSocket_setOutgoingFrameSize(this.h, (C.ulonglong)(outgoingFrameSize))
}

func (this *QWebSocket) OutgoingFrameSize() uint64 {
	return (uint64)(C.QWebSocket_outgoingFrameSize(this.h))
}

func QWebSocket_MaxOutgoingFrameSize() uint64 {
	return (uint64)(C.QWebSocket_maxOutgoingFrameSize())
}

func (this *QWebSocket) Close() {
	C.QWebSocket_close(this.h)
}

func (this *QWebSocket) Open(url *qt6.QUrl) {
	C.QWebSocket_open(this.h, (*C.QUrl)(url.UnsafePointer()))
}

func (this *QWebSocket) OpenWithRequest(request *network.QNetworkRequest) {
	C.QWebSocket_openWithRequest(this.h, (*C.QNetworkRequest)(request.UnsafePointer()))
}

func (this *QWebSocket) Open2(url *qt6.QUrl, options *QWebSocketHandshakeOptions) {
	C.QWebSocket_open2(this.h, (*C.QUrl)(url.UnsafePointer()), options.cPointer())
}

func (this *QWebSocket) Open3(request *network.QNetworkRequest, options *QWebSocketHandshakeOptions) {
	C.QWebSocket_open3(this.h, (*C.QNetworkRequest)(request.UnsafePointer()), options.cPointer())
}

func (this *QWebSocket) Ping() {
	C.QWebSocket_ping(this.h)
}

func (this *QWebSocket) IgnoreSslErrors2() {
	C.QWebSocket_ignoreSslErrors2(this.h)
}

func (this *QWebSocket) AboutToClose() {
	C.QWebSocket_aboutToClose(this.h)
}
func (this *QWebSocket) OnAboutToClose(slot func()) {
	C.QWebSocket_connect_aboutToClose(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebSocket_aboutToClose
func miqt_exec_callback_QWebSocket_aboutToClose(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QWebSocket) Connected() {
	C.QWebSocket_connected(this.h)
}
func (this *QWebSocket) OnConnected(slot func()) {
	C.QWebSocket_connect_connected(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebSocket_connected
func miqt_exec_callback_QWebSocket_connected(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QWebSocket) Disconnected() {
	C.QWebSocket_disconnected(this.h)
}
func (this *QWebSocket) OnDisconnected(slot func()) {
	C.QWebSocket_connect_disconnected(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebSocket_disconnected
func miqt_exec_callback_QWebSocket_disconnected(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QWebSocket) StateChanged(state network.QAbstractSocket__SocketState) {
	C.QWebSocket_stateChanged(this.h, (C.int)(state))
}
func (this *QWebSocket) OnStateChanged(slot func(state network.QAbstractSocket__SocketState)) {
	C.QWebSocket_connect_stateChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebSocket_stateChanged
func miqt_exec_callback_QWebSocket_stateChanged(cb C.intptr_t, state C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(state network.QAbstractSocket__SocketState))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (network.QAbstractSocket__SocketState)(state)

	gofunc(slotval1)
}

func (this *QWebSocket) ProxyAuthenticationRequired(proxy *network.QNetworkProxy, pAuthenticator *network.QAuthenticator) {
	C.QWebSocket_proxyAuthenticationRequired(this.h, (*C.QNetworkProxy)(proxy.UnsafePointer()), (*C.QAuthenticator)(pAuthenticator.UnsafePointer()))
}
func (this *QWebSocket) OnProxyAuthenticationRequired(slot func(proxy *network.QNetworkProxy, pAuthenticator *network.QAuthenticator)) {
	C.QWebSocket_connect_proxyAuthenticationRequired(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebSocket_proxyAuthenticationRequired
func miqt_exec_callback_QWebSocket_proxyAuthenticationRequired(cb C.intptr_t, proxy *C.QNetworkProxy, pAuthenticator *C.QAuthenticator) {
	gofunc, ok := cgo.Handle(cb).Value().(func(proxy *network.QNetworkProxy, pAuthenticator *network.QAuthenticator))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := network.UnsafeNewQNetworkProxy(unsafe.Pointer(proxy))

	slotval2 := network.UnsafeNewQAuthenticator(unsafe.Pointer(pAuthenticator))

	gofunc(slotval1, slotval2)
}

func (this *QWebSocket) ReadChannelFinished() {
	C.QWebSocket_readChannelFinished(this.h)
}
func (this *QWebSocket) OnReadChannelFinished(slot func()) {
	C.QWebSocket_connect_readChannelFinished(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebSocket_readChannelFinished
func miqt_exec_callback_QWebSocket_readChannelFinished(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QWebSocket) TextFrameReceived(frame string, isLastFrame bool) {
	frame_ms := C.struct_miqt_string{}
	frame_ms.data = C.CString(frame)
	frame_ms.len = C.size_t(len(frame))
	defer C.free(unsafe.Pointer(frame_ms.data))
	C.QWebSocket_textFrameReceived(this.h, frame_ms, (C.bool)(isLastFrame))
}
func (this *QWebSocket) OnTextFrameReceived(slot func(frame string, isLastFrame bool)) {
	C.QWebSocket_connect_textFrameReceived(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebSocket_textFrameReceived
func miqt_exec_callback_QWebSocket_textFrameReceived(cb C.intptr_t, frame C.struct_miqt_string, isLastFrame C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(frame string, isLastFrame bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var frame_ms C.struct_miqt_string = frame
	frame_ret := C.GoStringN(frame_ms.data, C.int(int64(frame_ms.len)))
	C.free(unsafe.Pointer(frame_ms.data))
	slotval1 := frame_ret
	slotval2 := (bool)(isLastFrame)

	gofunc(slotval1, slotval2)
}

func (this *QWebSocket) BinaryFrameReceived(frame []byte, isLastFrame bool) {
	frame_alias := C.struct_miqt_string{}
	if len(frame) > 0 {
		frame_alias.data = (*C.char)(unsafe.Pointer(&frame[0]))
	} else {
		frame_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	frame_alias.len = C.size_t(len(frame))
	C.QWebSocket_binaryFrameReceived(this.h, frame_alias, (C.bool)(isLastFrame))
}
func (this *QWebSocket) OnBinaryFrameReceived(slot func(frame []byte, isLastFrame bool)) {
	C.QWebSocket_connect_binaryFrameReceived(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebSocket_binaryFrameReceived
func miqt_exec_callback_QWebSocket_binaryFrameReceived(cb C.intptr_t, frame C.struct_miqt_string, isLastFrame C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(frame []byte, isLastFrame bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var frame_bytearray C.struct_miqt_string = frame
	frame_ret := C.GoBytes(unsafe.Pointer(frame_bytearray.data), C.int(int64(frame_bytearray.len)))
	C.free(unsafe.Pointer(frame_bytearray.data))
	slotval1 := frame_ret
	slotval2 := (bool)(isLastFrame)

	gofunc(slotval1, slotval2)
}

func (this *QWebSocket) TextMessageReceived(message string) {
	message_ms := C.struct_miqt_string{}
	message_ms.data = C.CString(message)
	message_ms.len = C.size_t(len(message))
	defer C.free(unsafe.Pointer(message_ms.data))
	C.QWebSocket_textMessageReceived(this.h, message_ms)
}
func (this *QWebSocket) OnTextMessageReceived(slot func(message string)) {
	C.QWebSocket_connect_textMessageReceived(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebSocket_textMessageReceived
func miqt_exec_callback_QWebSocket_textMessageReceived(cb C.intptr_t, message C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(message string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var message_ms C.struct_miqt_string = message
	message_ret := C.GoStringN(message_ms.data, C.int(int64(message_ms.len)))
	C.free(unsafe.Pointer(message_ms.data))
	slotval1 := message_ret

	gofunc(slotval1)
}

func (this *QWebSocket) BinaryMessageReceived(message []byte) {
	message_alias := C.struct_miqt_string{}
	if len(message) > 0 {
		message_alias.data = (*C.char)(unsafe.Pointer(&message[0]))
	} else {
		message_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	message_alias.len = C.size_t(len(message))
	C.QWebSocket_binaryMessageReceived(this.h, message_alias)
}
func (this *QWebSocket) OnBinaryMessageReceived(slot func(message []byte)) {
	C.QWebSocket_connect_binaryMessageReceived(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebSocket_binaryMessageReceived
func miqt_exec_callback_QWebSocket_binaryMessageReceived(cb C.intptr_t, message C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(message []byte))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var message_bytearray C.struct_miqt_string = message
	message_ret := C.GoBytes(unsafe.Pointer(message_bytearray.data), C.int(int64(message_bytearray.len)))
	C.free(unsafe.Pointer(message_bytearray.data))
	slotval1 := message_ret

	gofunc(slotval1)
}

func (this *QWebSocket) ErrorWithError(error network.QAbstractSocket__SocketError) {
	C.QWebSocket_errorWithError(this.h, (C.int)(error))
}
func (this *QWebSocket) OnErrorWithError(slot func(error network.QAbstractSocket__SocketError)) {
	C.QWebSocket_connect_errorWithError(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebSocket_errorWithError
func miqt_exec_callback_QWebSocket_errorWithError(cb C.intptr_t, error C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(error network.QAbstractSocket__SocketError))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (network.QAbstractSocket__SocketError)(error)

	gofunc(slotval1)
}

func (this *QWebSocket) Pong(elapsedTime uint64, payload []byte) {
	payload_alias := C.struct_miqt_string{}
	if len(payload) > 0 {
		payload_alias.data = (*C.char)(unsafe.Pointer(&payload[0]))
	} else {
		payload_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	payload_alias.len = C.size_t(len(payload))
	C.QWebSocket_pong(this.h, (C.ulonglong)(elapsedTime), payload_alias)
}
func (this *QWebSocket) OnPong(slot func(elapsedTime uint64, payload []byte)) {
	C.QWebSocket_connect_pong(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebSocket_pong
func miqt_exec_callback_QWebSocket_pong(cb C.intptr_t, elapsedTime C.ulonglong, payload C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(elapsedTime uint64, payload []byte))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (uint64)(elapsedTime)

	var payload_bytearray C.struct_miqt_string = payload
	payload_ret := C.GoBytes(unsafe.Pointer(payload_bytearray.data), C.int(int64(payload_bytearray.len)))
	C.free(unsafe.Pointer(payload_bytearray.data))
	slotval2 := payload_ret

	gofunc(slotval1, slotval2)
}

func (this *QWebSocket) BytesWritten(bytes int64) {
	C.QWebSocket_bytesWritten(this.h, (C.longlong)(bytes))
}
func (this *QWebSocket) OnBytesWritten(slot func(bytes int64)) {
	C.QWebSocket_connect_bytesWritten(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebSocket_bytesWritten
func miqt_exec_callback_QWebSocket_bytesWritten(cb C.intptr_t, bytes C.longlong) {
	gofunc, ok := cgo.Handle(cb).Value().(func(bytes int64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int64)(bytes)

	gofunc(slotval1)
}

func (this *QWebSocket) PeerVerifyError(error *network.QSslError) {
	C.QWebSocket_peerVerifyError(this.h, (*C.QSslError)(error.UnsafePointer()))
}
func (this *QWebSocket) OnPeerVerifyError(slot func(error *network.QSslError)) {
	C.QWebSocket_connect_peerVerifyError(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebSocket_peerVerifyError
func miqt_exec_callback_QWebSocket_peerVerifyError(cb C.intptr_t, error *C.QSslError) {
	gofunc, ok := cgo.Handle(cb).Value().(func(error *network.QSslError))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := network.UnsafeNewQSslError(unsafe.Pointer(error))

	gofunc(slotval1)
}

func (this *QWebSocket) SslErrors(errors []network.QSslError) {
	errors_CArray := (*[0xffff]*C.QSslError)(C.malloc(C.size_t(8 * len(errors))))
	defer C.free(unsafe.Pointer(errors_CArray))
	for i := range errors {
		errors_CArray[i] = (*C.QSslError)(errors[i].UnsafePointer())
	}
	errors_ma := C.struct_miqt_array{len: C.size_t(len(errors)), data: unsafe.Pointer(errors_CArray)}
	C.QWebSocket_sslErrors(this.h, errors_ma)
}
func (this *QWebSocket) OnSslErrors(slot func(errors []network.QSslError)) {
	C.QWebSocket_connect_sslErrors(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebSocket_sslErrors
func miqt_exec_callback_QWebSocket_sslErrors(cb C.intptr_t, errors C.struct_miqt_array) {
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

func (this *QWebSocket) PreSharedKeyAuthenticationRequired(authenticator *network.QSslPreSharedKeyAuthenticator) {
	C.QWebSocket_preSharedKeyAuthenticationRequired(this.h, (*C.QSslPreSharedKeyAuthenticator)(authenticator.UnsafePointer()))
}
func (this *QWebSocket) OnPreSharedKeyAuthenticationRequired(slot func(authenticator *network.QSslPreSharedKeyAuthenticator)) {
	C.QWebSocket_connect_preSharedKeyAuthenticationRequired(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebSocket_preSharedKeyAuthenticationRequired
func miqt_exec_callback_QWebSocket_preSharedKeyAuthenticationRequired(cb C.intptr_t, authenticator *C.QSslPreSharedKeyAuthenticator) {
	gofunc, ok := cgo.Handle(cb).Value().(func(authenticator *network.QSslPreSharedKeyAuthenticator))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := network.UnsafeNewQSslPreSharedKeyAuthenticator(unsafe.Pointer(authenticator))

	gofunc(slotval1)
}

func (this *QWebSocket) AlertSent(level network.QSsl__AlertLevel, typeVal network.QSsl__AlertType, description string) {
	description_ms := C.struct_miqt_string{}
	description_ms.data = C.CString(description)
	description_ms.len = C.size_t(len(description))
	defer C.free(unsafe.Pointer(description_ms.data))
	C.QWebSocket_alertSent(this.h, (C.int)(level), (C.int)(typeVal), description_ms)
}
func (this *QWebSocket) OnAlertSent(slot func(level network.QSsl__AlertLevel, typeVal network.QSsl__AlertType, description string)) {
	C.QWebSocket_connect_alertSent(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebSocket_alertSent
func miqt_exec_callback_QWebSocket_alertSent(cb C.intptr_t, level C.int, typeVal C.int, description C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(level network.QSsl__AlertLevel, typeVal network.QSsl__AlertType, description string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (network.QSsl__AlertLevel)(level)

	slotval2 := (network.QSsl__AlertType)(typeVal)

	var description_ms C.struct_miqt_string = description
	description_ret := C.GoStringN(description_ms.data, C.int(int64(description_ms.len)))
	C.free(unsafe.Pointer(description_ms.data))
	slotval3 := description_ret

	gofunc(slotval1, slotval2, slotval3)
}

func (this *QWebSocket) AlertReceived(level network.QSsl__AlertLevel, typeVal network.QSsl__AlertType, description string) {
	description_ms := C.struct_miqt_string{}
	description_ms.data = C.CString(description)
	description_ms.len = C.size_t(len(description))
	defer C.free(unsafe.Pointer(description_ms.data))
	C.QWebSocket_alertReceived(this.h, (C.int)(level), (C.int)(typeVal), description_ms)
}
func (this *QWebSocket) OnAlertReceived(slot func(level network.QSsl__AlertLevel, typeVal network.QSsl__AlertType, description string)) {
	C.QWebSocket_connect_alertReceived(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebSocket_alertReceived
func miqt_exec_callback_QWebSocket_alertReceived(cb C.intptr_t, level C.int, typeVal C.int, description C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(level network.QSsl__AlertLevel, typeVal network.QSsl__AlertType, description string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (network.QSsl__AlertLevel)(level)

	slotval2 := (network.QSsl__AlertType)(typeVal)

	var description_ms C.struct_miqt_string = description
	description_ret := C.GoStringN(description_ms.data, C.int(int64(description_ms.len)))
	C.free(unsafe.Pointer(description_ms.data))
	slotval3 := description_ret

	gofunc(slotval1, slotval2, slotval3)
}

func (this *QWebSocket) HandshakeInterruptedOnError(error *network.QSslError) {
	C.QWebSocket_handshakeInterruptedOnError(this.h, (*C.QSslError)(error.UnsafePointer()))
}
func (this *QWebSocket) OnHandshakeInterruptedOnError(slot func(error *network.QSslError)) {
	C.QWebSocket_connect_handshakeInterruptedOnError(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebSocket_handshakeInterruptedOnError
func miqt_exec_callback_QWebSocket_handshakeInterruptedOnError(cb C.intptr_t, error *C.QSslError) {
	gofunc, ok := cgo.Handle(cb).Value().(func(error *network.QSslError))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := network.UnsafeNewQSslError(unsafe.Pointer(error))

	gofunc(slotval1)
}

func QWebSocket_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebSocket_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebSocket_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebSocket_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebSocket) CloseWithCloseCode(closeCode QWebSocketProtocol__CloseCode) {
	C.QWebSocket_closeWithCloseCode(this.h, (C.int)(closeCode))
}

func (this *QWebSocket) Close2(closeCode QWebSocketProtocol__CloseCode, reason string) {
	reason_ms := C.struct_miqt_string{}
	reason_ms.data = C.CString(reason)
	reason_ms.len = C.size_t(len(reason))
	defer C.free(unsafe.Pointer(reason_ms.data))
	C.QWebSocket_close2(this.h, (C.int)(closeCode), reason_ms)
}

func (this *QWebSocket) PingWithPayload(payload []byte) {
	payload_alias := C.struct_miqt_string{}
	if len(payload) > 0 {
		payload_alias.data = (*C.char)(unsafe.Pointer(&payload[0]))
	} else {
		payload_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	payload_alias.len = C.size_t(len(payload))
	C.QWebSocket_pingWithPayload(this.h, payload_alias)
}

// Sender can only be called from a QWebSocket that was directly constructed.
func (this *QWebSocket) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QWebSocket_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QWebSocket that was directly constructed.
func (this *QWebSocket) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QWebSocket_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QWebSocket that was directly constructed.
func (this *QWebSocket) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QWebSocket_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QWebSocket that was directly constructed.
func (this *QWebSocket) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QWebSocket_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QWebSocket) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QWebSocket_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QWebSocket) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QWebSocket_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebSocket_event
func miqt_exec_callback_QWebSocket_event(self *C.QWebSocket, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QWebSocket{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QWebSocket) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QWebSocket_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QWebSocket) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QWebSocket_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebSocket_eventFilter
func miqt_exec_callback_QWebSocket_eventFilter(self *C.QWebSocket, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QWebSocket{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QWebSocket) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QWebSocket_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QWebSocket) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QWebSocket_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebSocket_timerEvent
func miqt_exec_callback_QWebSocket_timerEvent(self *C.QWebSocket, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QWebSocket{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QWebSocket) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QWebSocket_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QWebSocket) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QWebSocket_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebSocket_childEvent
func miqt_exec_callback_QWebSocket_childEvent(self *C.QWebSocket, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QWebSocket{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QWebSocket) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QWebSocket_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QWebSocket) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QWebSocket_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebSocket_customEvent
func miqt_exec_callback_QWebSocket_customEvent(self *C.QWebSocket, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QWebSocket{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QWebSocket) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QWebSocket_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QWebSocket) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QWebSocket_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebSocket_connectNotify
func miqt_exec_callback_QWebSocket_connectNotify(self *C.QWebSocket, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QWebSocket{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QWebSocket) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QWebSocket_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QWebSocket) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QWebSocket_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebSocket_disconnectNotify
func miqt_exec_callback_QWebSocket_disconnectNotify(self *C.QWebSocket, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QWebSocket{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QWebSocket) Delete() {
	C.QWebSocket_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWebSocket) GoGC() {
	runtime.SetFinalizer(this, func(this *QWebSocket) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
