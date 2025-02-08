package network

/*

#include "gen_qtcpserver.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QTcpServer struct {
	h *C.QTcpServer
	*qt.QObject
}

func (this *QTcpServer) cPointer() *C.QTcpServer {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QTcpServer) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQTcpServer constructs the type using only CGO pointers.
func newQTcpServer(h *C.QTcpServer) *QTcpServer {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QTcpServer_virtbase(h, &outptr_QObject)

	return &QTcpServer{h: h,
		QObject: qt.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQTcpServer constructs the type using only unsafe pointers.
func UnsafeNewQTcpServer(h unsafe.Pointer) *QTcpServer {
	return newQTcpServer((*C.QTcpServer)(h))
}

// NewQTcpServer constructs a new QTcpServer object.
func NewQTcpServer() *QTcpServer {

	return newQTcpServer(C.QTcpServer_new())
}

// NewQTcpServer2 constructs a new QTcpServer object.
func NewQTcpServer2(parent *qt.QObject) *QTcpServer {

	return newQTcpServer(C.QTcpServer_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QTcpServer) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QTcpServer_metaObject(this.h)))
}

func (this *QTcpServer) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QTcpServer_metacast(this.h, param1_Cstring))
}

func QTcpServer_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QTcpServer_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTcpServer_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QTcpServer_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTcpServer) Listen() bool {
	return (bool)(C.QTcpServer_listen(this.h))
}

func (this *QTcpServer) Close() {
	C.QTcpServer_close(this.h)
}

func (this *QTcpServer) IsListening() bool {
	return (bool)(C.QTcpServer_isListening(this.h))
}

func (this *QTcpServer) SetMaxPendingConnections(numConnections int) {
	C.QTcpServer_setMaxPendingConnections(this.h, (C.int)(numConnections))
}

func (this *QTcpServer) MaxPendingConnections() int {
	return (int)(C.QTcpServer_maxPendingConnections(this.h))
}

func (this *QTcpServer) ServerPort() uint16 {
	return (uint16)(C.QTcpServer_serverPort(this.h))
}

func (this *QTcpServer) ServerAddress() *QHostAddress {
	_goptr := newQHostAddress(C.QTcpServer_serverAddress(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTcpServer) SocketDescriptor() uintptr {
	return (uintptr)(C.QTcpServer_socketDescriptor(this.h))
}

func (this *QTcpServer) SetSocketDescriptor(socketDescriptor uintptr) bool {
	return (bool)(C.QTcpServer_setSocketDescriptor(this.h, (C.intptr_t)(socketDescriptor)))
}

func (this *QTcpServer) WaitForNewConnection() bool {
	return (bool)(C.QTcpServer_waitForNewConnection(this.h))
}

func (this *QTcpServer) HasPendingConnections() bool {
	return (bool)(C.QTcpServer_hasPendingConnections(this.h))
}

func (this *QTcpServer) NextPendingConnection() *QTcpSocket {
	return newQTcpSocket(C.QTcpServer_nextPendingConnection(this.h))
}

func (this *QTcpServer) ServerError() QAbstractSocket__SocketError {
	return (QAbstractSocket__SocketError)(C.QTcpServer_serverError(this.h))
}

func (this *QTcpServer) ErrorString() string {
	var _ms C.struct_miqt_string = C.QTcpServer_errorString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTcpServer) PauseAccepting() {
	C.QTcpServer_pauseAccepting(this.h)
}

func (this *QTcpServer) ResumeAccepting() {
	C.QTcpServer_resumeAccepting(this.h)
}

func (this *QTcpServer) SetProxy(networkProxy *QNetworkProxy) {
	C.QTcpServer_setProxy(this.h, networkProxy.cPointer())
}

func (this *QTcpServer) Proxy() *QNetworkProxy {
	_goptr := newQNetworkProxy(C.QTcpServer_proxy(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTcpServer) NewConnection() {
	C.QTcpServer_newConnection(this.h)
}
func (this *QTcpServer) OnNewConnection(slot func()) {
	C.QTcpServer_connect_newConnection(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTcpServer_newConnection
func miqt_exec_callback_QTcpServer_newConnection(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QTcpServer) AcceptError(socketError QAbstractSocket__SocketError) {
	C.QTcpServer_acceptError(this.h, (C.int)(socketError))
}
func (this *QTcpServer) OnAcceptError(slot func(socketError QAbstractSocket__SocketError)) {
	C.QTcpServer_connect_acceptError(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTcpServer_acceptError
func miqt_exec_callback_QTcpServer_acceptError(cb C.intptr_t, socketError C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(socketError QAbstractSocket__SocketError))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAbstractSocket__SocketError)(socketError)

	gofunc(slotval1)
}

func QTcpServer_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTcpServer_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTcpServer_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTcpServer_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTcpServer_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTcpServer_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTcpServer_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTcpServer_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTcpServer) Listen1(address *QHostAddress) bool {
	return (bool)(C.QTcpServer_listen1(this.h, address.cPointer()))
}

func (this *QTcpServer) Listen2(address *QHostAddress, port uint16) bool {
	return (bool)(C.QTcpServer_listen2(this.h, address.cPointer(), (C.uint16_t)(port)))
}

func (this *QTcpServer) WaitForNewConnection1(msec int) bool {
	return (bool)(C.QTcpServer_waitForNewConnection1(this.h, (C.int)(msec)))
}

func (this *QTcpServer) WaitForNewConnection2(msec int, timedOut *bool) bool {
	return (bool)(C.QTcpServer_waitForNewConnection2(this.h, (C.int)(msec), (*C.bool)(unsafe.Pointer(timedOut))))
}

// AddPendingConnection can only be called from a QTcpServer that was directly constructed.
func (this *QTcpServer) AddPendingConnection(socket *QTcpSocket) {

	var _dynamic_cast_ok C.bool = false
	C.QTcpServer_protectedbase_addPendingConnection(&_dynamic_cast_ok, unsafe.Pointer(this.h), socket.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Sender can only be called from a QTcpServer that was directly constructed.
func (this *QTcpServer) Sender() *qt.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt.UnsafeNewQObject(unsafe.Pointer(C.QTcpServer_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QTcpServer that was directly constructed.
func (this *QTcpServer) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QTcpServer_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QTcpServer that was directly constructed.
func (this *QTcpServer) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QTcpServer_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QTcpServer that was directly constructed.
func (this *QTcpServer) IsSignalConnected(signal *qt.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QTcpServer_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QTcpServer) callVirtualBase_HasPendingConnections() bool {

	return (bool)(C.QTcpServer_virtualbase_hasPendingConnections(unsafe.Pointer(this.h)))

}
func (this *QTcpServer) OnHasPendingConnections(slot func(super func() bool) bool) {
	ok := C.QTcpServer_override_virtual_hasPendingConnections(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTcpServer_hasPendingConnections
func miqt_exec_callback_QTcpServer_hasPendingConnections(self *C.QTcpServer, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTcpServer{h: self}).callVirtualBase_HasPendingConnections)

	return (C.bool)(virtualReturn)

}

func (this *QTcpServer) callVirtualBase_NextPendingConnection() *QTcpSocket {

	return newQTcpSocket(C.QTcpServer_virtualbase_nextPendingConnection(unsafe.Pointer(this.h)))

}
func (this *QTcpServer) OnNextPendingConnection(slot func(super func() *QTcpSocket) *QTcpSocket) {
	ok := C.QTcpServer_override_virtual_nextPendingConnection(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTcpServer_nextPendingConnection
func miqt_exec_callback_QTcpServer_nextPendingConnection(self *C.QTcpServer, cb C.intptr_t) *C.QTcpSocket {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QTcpSocket) *QTcpSocket)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTcpServer{h: self}).callVirtualBase_NextPendingConnection)

	return virtualReturn.cPointer()

}

func (this *QTcpServer) callVirtualBase_IncomingConnection(handle uintptr) {

	C.QTcpServer_virtualbase_incomingConnection(unsafe.Pointer(this.h), (C.intptr_t)(handle))

}
func (this *QTcpServer) OnIncomingConnection(slot func(super func(handle uintptr), handle uintptr)) {
	ok := C.QTcpServer_override_virtual_incomingConnection(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTcpServer_incomingConnection
func miqt_exec_callback_QTcpServer_incomingConnection(self *C.QTcpServer, cb C.intptr_t, handle C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(handle uintptr), handle uintptr))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (uintptr)(handle)

	gofunc((&QTcpServer{h: self}).callVirtualBase_IncomingConnection, slotval1)

}

func (this *QTcpServer) callVirtualBase_Event(event *qt.QEvent) bool {

	return (bool)(C.QTcpServer_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QTcpServer) OnEvent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	ok := C.QTcpServer_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTcpServer_event
func miqt_exec_callback_QTcpServer_event(self *C.QTcpServer, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QTcpServer{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QTcpServer) callVirtualBase_EventFilter(watched *qt.QObject, event *qt.QEvent) bool {

	return (bool)(C.QTcpServer_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QTcpServer) OnEventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	ok := C.QTcpServer_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTcpServer_eventFilter
func miqt_exec_callback_QTcpServer_eventFilter(self *C.QTcpServer, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QTcpServer{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QTcpServer) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.QTcpServer_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QTcpServer) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	ok := C.QTcpServer_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTcpServer_timerEvent
func miqt_exec_callback_QTcpServer_timerEvent(self *C.QTcpServer, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QTcpServer{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QTcpServer) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QTcpServer_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QTcpServer) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	ok := C.QTcpServer_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTcpServer_childEvent
func miqt_exec_callback_QTcpServer_childEvent(self *C.QTcpServer, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QTcpServer{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QTcpServer) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QTcpServer_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QTcpServer) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QTcpServer_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTcpServer_customEvent
func miqt_exec_callback_QTcpServer_customEvent(self *C.QTcpServer, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QTcpServer{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QTcpServer) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QTcpServer_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QTcpServer) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QTcpServer_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTcpServer_connectNotify
func miqt_exec_callback_QTcpServer_connectNotify(self *C.QTcpServer, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QTcpServer{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QTcpServer) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QTcpServer_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QTcpServer) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QTcpServer_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTcpServer_disconnectNotify
func miqt_exec_callback_QTcpServer_disconnectNotify(self *C.QTcpServer, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QTcpServer{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QTcpServer) Delete() {
	C.QTcpServer_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTcpServer) GoGC() {
	runtime.SetFinalizer(this, func(this *QTcpServer) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
