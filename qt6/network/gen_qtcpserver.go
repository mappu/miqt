package network

/*

#include "gen_qtcpserver.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QTcpServer struct {
	h *C.QTcpServer
	*qt6.QObject
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
		QObject: qt6.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
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
func NewQTcpServer2(parent *qt6.QObject) *QTcpServer {

	return newQTcpServer(C.QTcpServer_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QTcpServer) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QTcpServer_MetaObject(this.h)))
}

func (this *QTcpServer) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QTcpServer_Metacast(this.h, param1_Cstring))
}

func QTcpServer_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QTcpServer_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTcpServer) Listen() bool {
	return (bool)(C.QTcpServer_Listen(this.h))
}

func (this *QTcpServer) Close() {
	C.QTcpServer_Close(this.h)
}

func (this *QTcpServer) IsListening() bool {
	return (bool)(C.QTcpServer_IsListening(this.h))
}

func (this *QTcpServer) SetMaxPendingConnections(numConnections int) {
	C.QTcpServer_SetMaxPendingConnections(this.h, (C.int)(numConnections))
}

func (this *QTcpServer) MaxPendingConnections() int {
	return (int)(C.QTcpServer_MaxPendingConnections(this.h))
}

func (this *QTcpServer) SetListenBacklogSize(size int) {
	C.QTcpServer_SetListenBacklogSize(this.h, (C.int)(size))
}

func (this *QTcpServer) ListenBacklogSize() int {
	return (int)(C.QTcpServer_ListenBacklogSize(this.h))
}

func (this *QTcpServer) ServerPort() uint16 {
	return (uint16)(C.QTcpServer_ServerPort(this.h))
}

func (this *QTcpServer) ServerAddress() *QHostAddress {
	_goptr := newQHostAddress(C.QTcpServer_ServerAddress(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTcpServer) SocketDescriptor() uintptr {
	return (uintptr)(C.QTcpServer_SocketDescriptor(this.h))
}

func (this *QTcpServer) SetSocketDescriptor(socketDescriptor uintptr) bool {
	return (bool)(C.QTcpServer_SetSocketDescriptor(this.h, (C.intptr_t)(socketDescriptor)))
}

func (this *QTcpServer) WaitForNewConnection() bool {
	return (bool)(C.QTcpServer_WaitForNewConnection(this.h))
}

func (this *QTcpServer) HasPendingConnections() bool {
	return (bool)(C.QTcpServer_HasPendingConnections(this.h))
}

func (this *QTcpServer) NextPendingConnection() *QTcpSocket {
	return newQTcpSocket(C.QTcpServer_NextPendingConnection(this.h))
}

func (this *QTcpServer) ServerError() QAbstractSocket__SocketError {
	return (QAbstractSocket__SocketError)(C.QTcpServer_ServerError(this.h))
}

func (this *QTcpServer) ErrorString() string {
	var _ms C.struct_miqt_string = C.QTcpServer_ErrorString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTcpServer) PauseAccepting() {
	C.QTcpServer_PauseAccepting(this.h)
}

func (this *QTcpServer) ResumeAccepting() {
	C.QTcpServer_ResumeAccepting(this.h)
}

func (this *QTcpServer) SetProxy(networkProxy *QNetworkProxy) {
	C.QTcpServer_SetProxy(this.h, networkProxy.cPointer())
}

func (this *QTcpServer) Proxy() *QNetworkProxy {
	_goptr := newQNetworkProxy(C.QTcpServer_Proxy(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTcpServer) NewConnection() {
	C.QTcpServer_NewConnection(this.h)
}
func (this *QTcpServer) OnNewConnection(slot func()) {
	C.QTcpServer_connect_NewConnection(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTcpServer_NewConnection
func miqt_exec_callback_QTcpServer_NewConnection(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QTcpServer) AcceptError(socketError QAbstractSocket__SocketError) {
	C.QTcpServer_AcceptError(this.h, (C.int)(socketError))
}
func (this *QTcpServer) OnAcceptError(slot func(socketError QAbstractSocket__SocketError)) {
	C.QTcpServer_connect_AcceptError(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTcpServer_AcceptError
func miqt_exec_callback_QTcpServer_AcceptError(cb C.intptr_t, socketError C.int) {
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
	var _ms C.struct_miqt_string = C.QTcpServer_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTcpServer_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTcpServer_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTcpServer) Listen1(address *QHostAddress) bool {
	return (bool)(C.QTcpServer_Listen1(this.h, address.cPointer()))
}

func (this *QTcpServer) Listen2(address *QHostAddress, port uint16) bool {
	return (bool)(C.QTcpServer_Listen2(this.h, address.cPointer(), (C.uint16_t)(port)))
}

func (this *QTcpServer) WaitForNewConnection1(msec int) bool {
	return (bool)(C.QTcpServer_WaitForNewConnection1(this.h, (C.int)(msec)))
}

func (this *QTcpServer) WaitForNewConnection2(msec int, timedOut *bool) bool {
	return (bool)(C.QTcpServer_WaitForNewConnection2(this.h, (C.int)(msec), (*C.bool)(unsafe.Pointer(timedOut))))
}

func (this *QTcpServer) callVirtualBase_HasPendingConnections() bool {

	return (bool)(C.QTcpServer_virtualbase_HasPendingConnections(unsafe.Pointer(this.h)))

}
func (this *QTcpServer) OnHasPendingConnections(slot func(super func() bool) bool) {
	ok := C.QTcpServer_override_virtual_HasPendingConnections(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTcpServer_HasPendingConnections
func miqt_exec_callback_QTcpServer_HasPendingConnections(self *C.QTcpServer, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTcpServer{h: self}).callVirtualBase_HasPendingConnections)

	return (C.bool)(virtualReturn)

}

func (this *QTcpServer) callVirtualBase_NextPendingConnection() *QTcpSocket {

	return newQTcpSocket(C.QTcpServer_virtualbase_NextPendingConnection(unsafe.Pointer(this.h)))

}
func (this *QTcpServer) OnNextPendingConnection(slot func(super func() *QTcpSocket) *QTcpSocket) {
	ok := C.QTcpServer_override_virtual_NextPendingConnection(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTcpServer_NextPendingConnection
func miqt_exec_callback_QTcpServer_NextPendingConnection(self *C.QTcpServer, cb C.intptr_t) *C.QTcpSocket {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QTcpSocket) *QTcpSocket)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTcpServer{h: self}).callVirtualBase_NextPendingConnection)

	return virtualReturn.cPointer()

}

func (this *QTcpServer) callVirtualBase_IncomingConnection(handle uintptr) {

	C.QTcpServer_virtualbase_IncomingConnection(unsafe.Pointer(this.h), (C.intptr_t)(handle))

}
func (this *QTcpServer) OnIncomingConnection(slot func(super func(handle uintptr), handle uintptr)) {
	ok := C.QTcpServer_override_virtual_IncomingConnection(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTcpServer_IncomingConnection
func miqt_exec_callback_QTcpServer_IncomingConnection(self *C.QTcpServer, cb C.intptr_t, handle C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(handle uintptr), handle uintptr))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (uintptr)(handle)

	gofunc((&QTcpServer{h: self}).callVirtualBase_IncomingConnection, slotval1)

}

func (this *QTcpServer) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QTcpServer_virtualbase_Event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QTcpServer) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QTcpServer_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTcpServer_Event
func miqt_exec_callback_QTcpServer_Event(self *C.QTcpServer, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QTcpServer{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QTcpServer) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QTcpServer_virtualbase_EventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QTcpServer) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QTcpServer_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTcpServer_EventFilter
func miqt_exec_callback_QTcpServer_EventFilter(self *C.QTcpServer, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QTcpServer{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QTcpServer) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QTcpServer_virtualbase_TimerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QTcpServer) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QTcpServer_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTcpServer_TimerEvent
func miqt_exec_callback_QTcpServer_TimerEvent(self *C.QTcpServer, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QTcpServer{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QTcpServer) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QTcpServer_virtualbase_ChildEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QTcpServer) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QTcpServer_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTcpServer_ChildEvent
func miqt_exec_callback_QTcpServer_ChildEvent(self *C.QTcpServer, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QTcpServer{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QTcpServer) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QTcpServer_virtualbase_CustomEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QTcpServer) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QTcpServer_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTcpServer_CustomEvent
func miqt_exec_callback_QTcpServer_CustomEvent(self *C.QTcpServer, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QTcpServer{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QTcpServer) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QTcpServer_virtualbase_ConnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QTcpServer) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QTcpServer_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTcpServer_ConnectNotify
func miqt_exec_callback_QTcpServer_ConnectNotify(self *C.QTcpServer, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QTcpServer{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QTcpServer) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QTcpServer_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QTcpServer) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QTcpServer_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTcpServer_DisconnectNotify
func miqt_exec_callback_QTcpServer_DisconnectNotify(self *C.QTcpServer, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QTcpServer{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QTcpServer) Delete() {
	C.QTcpServer_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTcpServer) GoGC() {
	runtime.SetFinalizer(this, func(this *QTcpServer) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
