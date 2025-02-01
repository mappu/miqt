package network

/*

#include "gen_qlocalserver.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QLocalServer__SocketOption int

const (
	QLocalServer__NoOptions         QLocalServer__SocketOption = 0
	QLocalServer__UserAccessOption  QLocalServer__SocketOption = 1
	QLocalServer__GroupAccessOption QLocalServer__SocketOption = 2
	QLocalServer__OtherAccessOption QLocalServer__SocketOption = 4
	QLocalServer__WorldAccessOption QLocalServer__SocketOption = 7
)

type QLocalServer struct {
	h *C.QLocalServer
	*qt.QObject
}

func (this *QLocalServer) cPointer() *C.QLocalServer {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QLocalServer) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQLocalServer constructs the type using only CGO pointers.
func newQLocalServer(h *C.QLocalServer) *QLocalServer {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QLocalServer_virtbase(h, &outptr_QObject)

	return &QLocalServer{h: h,
		QObject: qt.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQLocalServer constructs the type using only unsafe pointers.
func UnsafeNewQLocalServer(h unsafe.Pointer) *QLocalServer {
	return newQLocalServer((*C.QLocalServer)(h))
}

// NewQLocalServer constructs a new QLocalServer object.
func NewQLocalServer() *QLocalServer {

	return newQLocalServer(C.QLocalServer_new())
}

// NewQLocalServer2 constructs a new QLocalServer object.
func NewQLocalServer2(parent *qt.QObject) *QLocalServer {

	return newQLocalServer(C.QLocalServer_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QLocalServer) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QLocalServer_metaObject(this.h)))
}

func (this *QLocalServer) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QLocalServer_metacast(this.h, param1_Cstring))
}

func QLocalServer_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QLocalServer_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QLocalServer_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QLocalServer_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocalServer) NewConnection() {
	C.QLocalServer_newConnection(this.h)
}
func (this *QLocalServer) OnNewConnection(slot func()) {
	C.QLocalServer_connect_newConnection(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLocalServer_newConnection
func miqt_exec_callback_QLocalServer_newConnection(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QLocalServer) Close() {
	C.QLocalServer_close(this.h)
}

func (this *QLocalServer) ErrorString() string {
	var _ms C.struct_miqt_string = C.QLocalServer_errorString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocalServer) HasPendingConnections() bool {
	return (bool)(C.QLocalServer_hasPendingConnections(this.h))
}

func (this *QLocalServer) IsListening() bool {
	return (bool)(C.QLocalServer_isListening(this.h))
}

func (this *QLocalServer) Listen(name string) bool {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	return (bool)(C.QLocalServer_listen(this.h, name_ms))
}

func (this *QLocalServer) ListenWithSocketDescriptor(socketDescriptor uintptr) bool {
	return (bool)(C.QLocalServer_listenWithSocketDescriptor(this.h, (C.intptr_t)(socketDescriptor)))
}

func (this *QLocalServer) MaxPendingConnections() int {
	return (int)(C.QLocalServer_maxPendingConnections(this.h))
}

func (this *QLocalServer) NextPendingConnection() *QLocalSocket {
	return newQLocalSocket(C.QLocalServer_nextPendingConnection(this.h))
}

func (this *QLocalServer) ServerName() string {
	var _ms C.struct_miqt_string = C.QLocalServer_serverName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocalServer) FullServerName() string {
	var _ms C.struct_miqt_string = C.QLocalServer_fullServerName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QLocalServer_RemoveServer(name string) bool {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	return (bool)(C.QLocalServer_removeServer(name_ms))
}

func (this *QLocalServer) ServerError() QAbstractSocket__SocketError {
	return (QAbstractSocket__SocketError)(C.QLocalServer_serverError(this.h))
}

func (this *QLocalServer) SetMaxPendingConnections(numConnections int) {
	C.QLocalServer_setMaxPendingConnections(this.h, (C.int)(numConnections))
}

func (this *QLocalServer) WaitForNewConnection() bool {
	return (bool)(C.QLocalServer_waitForNewConnection(this.h))
}

func (this *QLocalServer) SetSocketOptions(options QLocalServer__SocketOption) {
	C.QLocalServer_setSocketOptions(this.h, (C.int)(options))
}

func (this *QLocalServer) SocketOptions() QLocalServer__SocketOption {
	return (QLocalServer__SocketOption)(C.QLocalServer_socketOptions(this.h))
}

func (this *QLocalServer) SocketDescriptor() uintptr {
	return (uintptr)(C.QLocalServer_socketDescriptor(this.h))
}

func QLocalServer_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QLocalServer_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QLocalServer_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QLocalServer_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QLocalServer_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QLocalServer_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QLocalServer_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QLocalServer_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocalServer) WaitForNewConnection1(msec int) bool {
	return (bool)(C.QLocalServer_waitForNewConnection1(this.h, (C.int)(msec)))
}

func (this *QLocalServer) WaitForNewConnection2(msec int, timedOut *bool) bool {
	return (bool)(C.QLocalServer_waitForNewConnection2(this.h, (C.int)(msec), (*C.bool)(unsafe.Pointer(timedOut))))
}

func (this *QLocalServer) callVirtualBase_HasPendingConnections() bool {

	return (bool)(C.QLocalServer_virtualbase_hasPendingConnections(unsafe.Pointer(this.h)))

}
func (this *QLocalServer) OnHasPendingConnections(slot func(super func() bool) bool) {
	ok := C.QLocalServer_override_virtual_hasPendingConnections(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLocalServer_hasPendingConnections
func miqt_exec_callback_QLocalServer_hasPendingConnections(self *C.QLocalServer, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QLocalServer{h: self}).callVirtualBase_HasPendingConnections)

	return (C.bool)(virtualReturn)

}

func (this *QLocalServer) callVirtualBase_NextPendingConnection() *QLocalSocket {

	return newQLocalSocket(C.QLocalServer_virtualbase_nextPendingConnection(unsafe.Pointer(this.h)))

}
func (this *QLocalServer) OnNextPendingConnection(slot func(super func() *QLocalSocket) *QLocalSocket) {
	ok := C.QLocalServer_override_virtual_nextPendingConnection(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLocalServer_nextPendingConnection
func miqt_exec_callback_QLocalServer_nextPendingConnection(self *C.QLocalServer, cb C.intptr_t) *C.QLocalSocket {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QLocalSocket) *QLocalSocket)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QLocalServer{h: self}).callVirtualBase_NextPendingConnection)

	return virtualReturn.cPointer()

}

func (this *QLocalServer) callVirtualBase_IncomingConnection(socketDescriptor uintptr) {

	C.QLocalServer_virtualbase_incomingConnection(unsafe.Pointer(this.h), (C.uintptr_t)(socketDescriptor))

}
func (this *QLocalServer) OnIncomingConnection(slot func(super func(socketDescriptor uintptr), socketDescriptor uintptr)) {
	ok := C.QLocalServer_override_virtual_incomingConnection(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLocalServer_incomingConnection
func miqt_exec_callback_QLocalServer_incomingConnection(self *C.QLocalServer, cb C.intptr_t, socketDescriptor C.uintptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(socketDescriptor uintptr), socketDescriptor uintptr))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (uintptr)(socketDescriptor)

	gofunc((&QLocalServer{h: self}).callVirtualBase_IncomingConnection, slotval1)

}

func (this *QLocalServer) callVirtualBase_Event(event *qt.QEvent) bool {

	return (bool)(C.QLocalServer_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QLocalServer) OnEvent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	ok := C.QLocalServer_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLocalServer_event
func miqt_exec_callback_QLocalServer_event(self *C.QLocalServer, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QLocalServer{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QLocalServer) callVirtualBase_EventFilter(watched *qt.QObject, event *qt.QEvent) bool {

	return (bool)(C.QLocalServer_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QLocalServer) OnEventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	ok := C.QLocalServer_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLocalServer_eventFilter
func miqt_exec_callback_QLocalServer_eventFilter(self *C.QLocalServer, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QLocalServer{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QLocalServer) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.QLocalServer_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QLocalServer) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	ok := C.QLocalServer_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLocalServer_timerEvent
func miqt_exec_callback_QLocalServer_timerEvent(self *C.QLocalServer, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QLocalServer{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QLocalServer) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QLocalServer_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QLocalServer) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	ok := C.QLocalServer_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLocalServer_childEvent
func miqt_exec_callback_QLocalServer_childEvent(self *C.QLocalServer, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QLocalServer{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QLocalServer) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QLocalServer_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QLocalServer) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QLocalServer_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLocalServer_customEvent
func miqt_exec_callback_QLocalServer_customEvent(self *C.QLocalServer, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QLocalServer{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QLocalServer) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QLocalServer_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QLocalServer) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QLocalServer_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLocalServer_connectNotify
func miqt_exec_callback_QLocalServer_connectNotify(self *C.QLocalServer, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QLocalServer{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QLocalServer) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QLocalServer_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QLocalServer) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QLocalServer_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLocalServer_disconnectNotify
func miqt_exec_callback_QLocalServer_disconnectNotify(self *C.QLocalServer, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QLocalServer{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QLocalServer) Delete() {
	C.QLocalServer_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QLocalServer) GoGC() {
	runtime.SetFinalizer(this, func(this *QLocalServer) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
