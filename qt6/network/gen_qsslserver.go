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
	h          *C.QSslServer
	isSubclass bool
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

	ret := newQSslServer(C.QSslServer_new())
	ret.isSubclass = true
	return ret
}

// NewQSslServer2 constructs a new QSslServer object.
func NewQSslServer2(parent *qt6.QObject) *QSslServer {

	ret := newQSslServer(C.QSslServer_new2((*C.QObject)(parent.UnsafePointer())))
	ret.isSubclass = true
	return ret
}

func (this *QSslServer) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QSslServer_MetaObject(this.h)))
}

func (this *QSslServer) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QSslServer_Metacast(this.h, param1_Cstring))
}

func QSslServer_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QSslServer_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSslServer) SetSslConfiguration(sslConfiguration *QSslConfiguration) {
	C.QSslServer_SetSslConfiguration(this.h, sslConfiguration.cPointer())
}

func (this *QSslServer) SslConfiguration() *QSslConfiguration {
	_goptr := newQSslConfiguration(C.QSslServer_SslConfiguration(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSslServer) SetHandshakeTimeout(timeout int) {
	C.QSslServer_SetHandshakeTimeout(this.h, (C.int)(timeout))
}

func (this *QSslServer) HandshakeTimeout() int {
	return (int)(C.QSslServer_HandshakeTimeout(this.h))
}

func (this *QSslServer) SslErrors(socket *QSslSocket, errors []QSslError) {
	errors_CArray := (*[0xffff]*C.QSslError)(C.malloc(C.size_t(8 * len(errors))))
	defer C.free(unsafe.Pointer(errors_CArray))
	for i := range errors {
		errors_CArray[i] = errors[i].cPointer()
	}
	errors_ma := C.struct_miqt_array{len: C.size_t(len(errors)), data: unsafe.Pointer(errors_CArray)}
	C.QSslServer_SslErrors(this.h, socket.cPointer(), errors_ma)
}
func (this *QSslServer) OnSslErrors(slot func(socket *QSslSocket, errors []QSslError)) {
	C.QSslServer_connect_SslErrors(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSslServer_SslErrors
func miqt_exec_callback_QSslServer_SslErrors(cb C.intptr_t, socket *C.QSslSocket, errors C.struct_miqt_array) {
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
	C.QSslServer_PeerVerifyError(this.h, socket.cPointer(), error.cPointer())
}
func (this *QSslServer) OnPeerVerifyError(slot func(socket *QSslSocket, error *QSslError)) {
	C.QSslServer_connect_PeerVerifyError(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSslServer_PeerVerifyError
func miqt_exec_callback_QSslServer_PeerVerifyError(cb C.intptr_t, socket *C.QSslSocket, error *C.QSslError) {
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
	C.QSslServer_ErrorOccurred(this.h, socket.cPointer(), (C.int)(error))
}
func (this *QSslServer) OnErrorOccurred(slot func(socket *QSslSocket, error QAbstractSocket__SocketError)) {
	C.QSslServer_connect_ErrorOccurred(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSslServer_ErrorOccurred
func miqt_exec_callback_QSslServer_ErrorOccurred(cb C.intptr_t, socket *C.QSslSocket, error C.int) {
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
	C.QSslServer_PreSharedKeyAuthenticationRequired(this.h, socket.cPointer(), authenticator.cPointer())
}
func (this *QSslServer) OnPreSharedKeyAuthenticationRequired(slot func(socket *QSslSocket, authenticator *QSslPreSharedKeyAuthenticator)) {
	C.QSslServer_connect_PreSharedKeyAuthenticationRequired(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSslServer_PreSharedKeyAuthenticationRequired
func miqt_exec_callback_QSslServer_PreSharedKeyAuthenticationRequired(cb C.intptr_t, socket *C.QSslSocket, authenticator *C.QSslPreSharedKeyAuthenticator) {
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
	C.QSslServer_AlertSent(this.h, socket.cPointer(), (C.int)(level), (C.int)(typeVal), description_ms)
}
func (this *QSslServer) OnAlertSent(slot func(socket *QSslSocket, level QSsl__AlertLevel, typeVal QSsl__AlertType, description string)) {
	C.QSslServer_connect_AlertSent(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSslServer_AlertSent
func miqt_exec_callback_QSslServer_AlertSent(cb C.intptr_t, socket *C.QSslSocket, level C.int, typeVal C.int, description C.struct_miqt_string) {
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
	C.QSslServer_AlertReceived(this.h, socket.cPointer(), (C.int)(level), (C.int)(typeVal), description_ms)
}
func (this *QSslServer) OnAlertReceived(slot func(socket *QSslSocket, level QSsl__AlertLevel, typeVal QSsl__AlertType, description string)) {
	C.QSslServer_connect_AlertReceived(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSslServer_AlertReceived
func miqt_exec_callback_QSslServer_AlertReceived(cb C.intptr_t, socket *C.QSslSocket, level C.int, typeVal C.int, description C.struct_miqt_string) {
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
	C.QSslServer_HandshakeInterruptedOnError(this.h, socket.cPointer(), error.cPointer())
}
func (this *QSslServer) OnHandshakeInterruptedOnError(slot func(socket *QSslSocket, error *QSslError)) {
	C.QSslServer_connect_HandshakeInterruptedOnError(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSslServer_HandshakeInterruptedOnError
func miqt_exec_callback_QSslServer_HandshakeInterruptedOnError(cb C.intptr_t, socket *C.QSslSocket, error *C.QSslError) {
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
	C.QSslServer_StartedEncryptionHandshake(this.h, socket.cPointer())
}
func (this *QSslServer) OnStartedEncryptionHandshake(slot func(socket *QSslSocket)) {
	C.QSslServer_connect_StartedEncryptionHandshake(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSslServer_StartedEncryptionHandshake
func miqt_exec_callback_QSslServer_StartedEncryptionHandshake(cb C.intptr_t, socket *C.QSslSocket) {
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
	var _ms C.struct_miqt_string = C.QSslServer_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSslServer_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSslServer_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSslServer) callVirtualBase_IncomingConnection(socket uintptr) {

	C.QSslServer_virtualbase_IncomingConnection(unsafe.Pointer(this.h), (C.intptr_t)(socket))

}
func (this *QSslServer) OnIncomingConnection(slot func(super func(socket uintptr), socket uintptr)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSslServer_override_virtual_IncomingConnection(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSslServer_IncomingConnection
func miqt_exec_callback_QSslServer_IncomingConnection(self *C.QSslServer, cb C.intptr_t, socket C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(socket uintptr), socket uintptr))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (uintptr)(socket)

	gofunc((&QSslServer{h: self}).callVirtualBase_IncomingConnection, slotval1)

}

func (this *QSslServer) callVirtualBase_HasPendingConnections() bool {

	return (bool)(C.QSslServer_virtualbase_HasPendingConnections(unsafe.Pointer(this.h)))

}
func (this *QSslServer) OnHasPendingConnections(slot func(super func() bool) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSslServer_override_virtual_HasPendingConnections(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSslServer_HasPendingConnections
func miqt_exec_callback_QSslServer_HasPendingConnections(self *C.QSslServer, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSslServer{h: self}).callVirtualBase_HasPendingConnections)

	return (C.bool)(virtualReturn)

}

func (this *QSslServer) callVirtualBase_NextPendingConnection() *QTcpSocket {

	return newQTcpSocket(C.QSslServer_virtualbase_NextPendingConnection(unsafe.Pointer(this.h)))

}
func (this *QSslServer) OnNextPendingConnection(slot func(super func() *QTcpSocket) *QTcpSocket) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSslServer_override_virtual_NextPendingConnection(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSslServer_NextPendingConnection
func miqt_exec_callback_QSslServer_NextPendingConnection(self *C.QSslServer, cb C.intptr_t) *C.QTcpSocket {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QTcpSocket) *QTcpSocket)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSslServer{h: self}).callVirtualBase_NextPendingConnection)

	return virtualReturn.cPointer()

}

// Delete this object from C++ memory.
func (this *QSslServer) Delete() {
	C.QSslServer_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSslServer) GoGC() {
	runtime.SetFinalizer(this, func(this *QSslServer) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
