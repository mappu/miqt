package network

/*

#include "gen_qsslserver.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QSslServer struct {
	h *C.QSslServer
	*QTcpServer
}

func (this *QSslServer) cPointer() *C.QSslServer {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QSslServer) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQSslServer constructs the type using only CGO pointers.
func newQSslServer(h *C.QSslServer) *QSslServer {
	if h == nil {
		return nil
	}
	var outptr_QTcpServer *C.QTcpServer = nil
	C.QSslServer_virtbase(h, &outptr_QTcpServer)

	return &QSslServer{h: h,
		QTcpServer: newQTcpServer(outptr_QTcpServer)}
}

// UnsafeNewQSslServer constructs the type using only unsafe pointers.
func UnsafeNewQSslServer(h unsafe.Pointer) *QSslServer {
	return newQSslServer((*C.QSslServer)(h))
}

// NewQSslServer constructs a new QSslServer object.
func NewQSslServer() *QSslServer {

	return newQSslServer(C.QSslServer_new())
}

// NewQSslServer2 constructs a new QSslServer object.
func NewQSslServer2(parent *qt6.QObject) *QSslServer {

	return newQSslServer(C.QSslServer_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QSslServer) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QSslServer_metaObject(this.h)))
}

func (this *QSslServer) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QSslServer_metacast(this.h, param1_Cstring))
}

func QSslServer_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QSslServer_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSslServer) SetSslConfiguration(sslConfiguration *QSslConfiguration) {
	C.QSslServer_setSslConfiguration(this.h, sslConfiguration.cPointer())
}

func (this *QSslServer) SslConfiguration() *QSslConfiguration {
	_goptr := newQSslConfiguration(C.QSslServer_sslConfiguration(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSslServer) SetHandshakeTimeout(timeout int) {
	C.QSslServer_setHandshakeTimeout(this.h, (C.int)(timeout))
}

func (this *QSslServer) HandshakeTimeout() int {
	return (int)(C.QSslServer_handshakeTimeout(this.h))
}

func (this *QSslServer) SslErrors(socket *QSslSocket, errors []QSslError) {
	errors_CArray := (*[0xffff]*C.QSslError)(C.malloc(C.size_t(8 * len(errors))))
	defer C.free(unsafe.Pointer(errors_CArray))
	for i := range errors {
		errors_CArray[i] = errors[i].cPointer()
	}
	errors_ma := C.struct_miqt_array{len: C.size_t(len(errors)), data: unsafe.Pointer(errors_CArray)}
	C.QSslServer_sslErrors(this.h, socket.cPointer(), errors_ma)
}
func (this *QSslServer) OnSslErrors(slot func(socket *QSslSocket, errors []QSslError)) {
	C.QSslServer_connect_sslErrors(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSslServer_sslErrors
func miqt_exec_callback_QSslServer_sslErrors(cb C.intptr_t, socket *C.QSslSocket, errors C.struct_miqt_array) {
	gofunc, ok := cgo.Handle(cb).Value().(func(socket *QSslSocket, errors []QSslError))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQSslSocket(socket)

	var errors_ma C.struct_miqt_array = errors
	errors_ret := make([]QSslError, int(errors_ma.len))
	errors_outCast := (*[0xffff]*C.QSslError)(unsafe.Pointer(errors_ma.data)) // hey ya
	for i := 0; i < int(errors_ma.len); i++ {
		errors_lv_goptr := newQSslError(errors_outCast[i])
		errors_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		errors_ret[i] = *errors_lv_goptr
	}
	slotval2 := errors_ret

	gofunc(slotval1, slotval2)
}

func (this *QSslServer) PeerVerifyError(socket *QSslSocket, error *QSslError) {
	C.QSslServer_peerVerifyError(this.h, socket.cPointer(), error.cPointer())
}
func (this *QSslServer) OnPeerVerifyError(slot func(socket *QSslSocket, error *QSslError)) {
	C.QSslServer_connect_peerVerifyError(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSslServer_peerVerifyError
func miqt_exec_callback_QSslServer_peerVerifyError(cb C.intptr_t, socket *C.QSslSocket, error *C.QSslError) {
	gofunc, ok := cgo.Handle(cb).Value().(func(socket *QSslSocket, error *QSslError))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQSslSocket(socket)

	slotval2 := newQSslError(error)

	gofunc(slotval1, slotval2)
}

func (this *QSslServer) ErrorOccurred(socket *QSslSocket, error QAbstractSocket__SocketError) {
	C.QSslServer_errorOccurred(this.h, socket.cPointer(), (C.int)(error))
}
func (this *QSslServer) OnErrorOccurred(slot func(socket *QSslSocket, error QAbstractSocket__SocketError)) {
	C.QSslServer_connect_errorOccurred(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSslServer_errorOccurred
func miqt_exec_callback_QSslServer_errorOccurred(cb C.intptr_t, socket *C.QSslSocket, error C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(socket *QSslSocket, error QAbstractSocket__SocketError))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQSslSocket(socket)

	slotval2 := (QAbstractSocket__SocketError)(error)

	gofunc(slotval1, slotval2)
}

func (this *QSslServer) PreSharedKeyAuthenticationRequired(socket *QSslSocket, authenticator *QSslPreSharedKeyAuthenticator) {
	C.QSslServer_preSharedKeyAuthenticationRequired(this.h, socket.cPointer(), authenticator.cPointer())
}
func (this *QSslServer) OnPreSharedKeyAuthenticationRequired(slot func(socket *QSslSocket, authenticator *QSslPreSharedKeyAuthenticator)) {
	C.QSslServer_connect_preSharedKeyAuthenticationRequired(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSslServer_preSharedKeyAuthenticationRequired
func miqt_exec_callback_QSslServer_preSharedKeyAuthenticationRequired(cb C.intptr_t, socket *C.QSslSocket, authenticator *C.QSslPreSharedKeyAuthenticator) {
	gofunc, ok := cgo.Handle(cb).Value().(func(socket *QSslSocket, authenticator *QSslPreSharedKeyAuthenticator))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQSslSocket(socket)

	slotval2 := newQSslPreSharedKeyAuthenticator(authenticator)

	gofunc(slotval1, slotval2)
}

func (this *QSslServer) AlertSent(socket *QSslSocket, level QSsl__AlertLevel, typeVal QSsl__AlertType, description string) {
	description_ms := C.struct_miqt_string{}
	description_ms.data = C.CString(description)
	description_ms.len = C.size_t(len(description))
	defer C.free(unsafe.Pointer(description_ms.data))
	C.QSslServer_alertSent(this.h, socket.cPointer(), (C.int)(level), (C.int)(typeVal), description_ms)
}
func (this *QSslServer) OnAlertSent(slot func(socket *QSslSocket, level QSsl__AlertLevel, typeVal QSsl__AlertType, description string)) {
	C.QSslServer_connect_alertSent(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSslServer_alertSent
func miqt_exec_callback_QSslServer_alertSent(cb C.intptr_t, socket *C.QSslSocket, level C.int, typeVal C.int, description C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(socket *QSslSocket, level QSsl__AlertLevel, typeVal QSsl__AlertType, description string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQSslSocket(socket)

	slotval2 := (QSsl__AlertLevel)(level)

	slotval3 := (QSsl__AlertType)(typeVal)

	var description_ms C.struct_miqt_string = description
	description_ret := C.GoStringN(description_ms.data, C.int(int64(description_ms.len)))
	C.free(unsafe.Pointer(description_ms.data))
	slotval4 := description_ret

	gofunc(slotval1, slotval2, slotval3, slotval4)
}

func (this *QSslServer) AlertReceived(socket *QSslSocket, level QSsl__AlertLevel, typeVal QSsl__AlertType, description string) {
	description_ms := C.struct_miqt_string{}
	description_ms.data = C.CString(description)
	description_ms.len = C.size_t(len(description))
	defer C.free(unsafe.Pointer(description_ms.data))
	C.QSslServer_alertReceived(this.h, socket.cPointer(), (C.int)(level), (C.int)(typeVal), description_ms)
}
func (this *QSslServer) OnAlertReceived(slot func(socket *QSslSocket, level QSsl__AlertLevel, typeVal QSsl__AlertType, description string)) {
	C.QSslServer_connect_alertReceived(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSslServer_alertReceived
func miqt_exec_callback_QSslServer_alertReceived(cb C.intptr_t, socket *C.QSslSocket, level C.int, typeVal C.int, description C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(socket *QSslSocket, level QSsl__AlertLevel, typeVal QSsl__AlertType, description string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQSslSocket(socket)

	slotval2 := (QSsl__AlertLevel)(level)

	slotval3 := (QSsl__AlertType)(typeVal)

	var description_ms C.struct_miqt_string = description
	description_ret := C.GoStringN(description_ms.data, C.int(int64(description_ms.len)))
	C.free(unsafe.Pointer(description_ms.data))
	slotval4 := description_ret

	gofunc(slotval1, slotval2, slotval3, slotval4)
}

func (this *QSslServer) HandshakeInterruptedOnError(socket *QSslSocket, error *QSslError) {
	C.QSslServer_handshakeInterruptedOnError(this.h, socket.cPointer(), error.cPointer())
}
func (this *QSslServer) OnHandshakeInterruptedOnError(slot func(socket *QSslSocket, error *QSslError)) {
	C.QSslServer_connect_handshakeInterruptedOnError(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSslServer_handshakeInterruptedOnError
func miqt_exec_callback_QSslServer_handshakeInterruptedOnError(cb C.intptr_t, socket *C.QSslSocket, error *C.QSslError) {
	gofunc, ok := cgo.Handle(cb).Value().(func(socket *QSslSocket, error *QSslError))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQSslSocket(socket)

	slotval2 := newQSslError(error)

	gofunc(slotval1, slotval2)
}

func (this *QSslServer) StartedEncryptionHandshake(socket *QSslSocket) {
	C.QSslServer_startedEncryptionHandshake(this.h, socket.cPointer())
}
func (this *QSslServer) OnStartedEncryptionHandshake(slot func(socket *QSslSocket)) {
	C.QSslServer_connect_startedEncryptionHandshake(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSslServer_startedEncryptionHandshake
func miqt_exec_callback_QSslServer_startedEncryptionHandshake(cb C.intptr_t, socket *C.QSslSocket) {
	gofunc, ok := cgo.Handle(cb).Value().(func(socket *QSslSocket))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQSslSocket(socket)

	gofunc(slotval1)
}

func QSslServer_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSslServer_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSslServer_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSslServer_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSslServer) callVirtualBase_IncomingConnection(socket uintptr) {

	C.QSslServer_virtualbase_incomingConnection(unsafe.Pointer(this.h), (C.intptr_t)(socket))

}
func (this *QSslServer) OnincomingConnection(slot func(super func(socket uintptr), socket uintptr)) {
	ok := C.QSslServer_override_virtual_incomingConnection(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSslServer_incomingConnection
func miqt_exec_callback_QSslServer_incomingConnection(self *C.QSslServer, cb C.intptr_t, socket C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(socket uintptr), socket uintptr))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (uintptr)(socket)

	gofunc((&QSslServer{h: self}).callVirtualBase_IncomingConnection, slotval1)

}

func (this *QSslServer) callVirtualBase_HasPendingConnections() bool {

	return (bool)(C.QSslServer_virtualbase_hasPendingConnections(unsafe.Pointer(this.h)))

}
func (this *QSslServer) OnhasPendingConnections(slot func(super func() bool) bool) {
	ok := C.QSslServer_override_virtual_hasPendingConnections(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSslServer_hasPendingConnections
func miqt_exec_callback_QSslServer_hasPendingConnections(self *C.QSslServer, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSslServer{h: self}).callVirtualBase_HasPendingConnections)

	return (C.bool)(virtualReturn)

}

func (this *QSslServer) callVirtualBase_NextPendingConnection() *QTcpSocket {

	return newQTcpSocket(C.QSslServer_virtualbase_nextPendingConnection(unsafe.Pointer(this.h)))

}
func (this *QSslServer) OnnextPendingConnection(slot func(super func() *QTcpSocket) *QTcpSocket) {
	ok := C.QSslServer_override_virtual_nextPendingConnection(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSslServer_nextPendingConnection
func miqt_exec_callback_QSslServer_nextPendingConnection(self *C.QSslServer, cb C.intptr_t) *C.QTcpSocket {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QTcpSocket) *QTcpSocket)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSslServer{h: self}).callVirtualBase_NextPendingConnection)

	return virtualReturn.cPointer()

}

func (this *QSslServer) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QSslServer_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QSslServer) Onevent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QSslServer_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSslServer_event
func miqt_exec_callback_QSslServer_event(self *C.QSslServer, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QSslServer{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSslServer) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QSslServer_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QSslServer) OneventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QSslServer_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSslServer_eventFilter
func miqt_exec_callback_QSslServer_eventFilter(self *C.QSslServer, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QSslServer{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QSslServer) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QSslServer_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QSslServer) OntimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QSslServer_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSslServer_timerEvent
func miqt_exec_callback_QSslServer_timerEvent(self *C.QSslServer, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QSslServer{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QSslServer) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QSslServer_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QSslServer) OnchildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QSslServer_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSslServer_childEvent
func miqt_exec_callback_QSslServer_childEvent(self *C.QSslServer, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QSslServer{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QSslServer) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QSslServer_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QSslServer) OncustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QSslServer_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSslServer_customEvent
func miqt_exec_callback_QSslServer_customEvent(self *C.QSslServer, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QSslServer{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QSslServer) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QSslServer_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QSslServer) OnconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QSslServer_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSslServer_connectNotify
func miqt_exec_callback_QSslServer_connectNotify(self *C.QSslServer, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QSslServer{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QSslServer) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QSslServer_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QSslServer) OndisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QSslServer_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSslServer_disconnectNotify
func miqt_exec_callback_QSslServer_disconnectNotify(self *C.QSslServer, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QSslServer{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QSslServer) Delete() {
	C.QSslServer_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSslServer) GoGC() {
	runtime.SetFinalizer(this, func(this *QSslServer) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
