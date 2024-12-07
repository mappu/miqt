package network

/*

#include "gen_qlocalserver.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QLocalServer__SocketOption int

const (
	QLocalServer__NoOptions               QLocalServer__SocketOption = 0
	QLocalServer__UserAccessOption        QLocalServer__SocketOption = 1
	QLocalServer__GroupAccessOption       QLocalServer__SocketOption = 2
	QLocalServer__OtherAccessOption       QLocalServer__SocketOption = 4
	QLocalServer__WorldAccessOption       QLocalServer__SocketOption = 7
	QLocalServer__AbstractNamespaceOption QLocalServer__SocketOption = 8
)

type QLocalServer struct {
	h          *C.QLocalServer
	isSubclass bool
	*qt6.QObject
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
func newQLocalServer(h *C.QLocalServer, h_QObject *C.QObject) *QLocalServer {
	if h == nil {
		return nil
	}
	return &QLocalServer{h: h,
		QObject: qt6.UnsafeNewQObject(unsafe.Pointer(h_QObject))}
}

// UnsafeNewQLocalServer constructs the type using only unsafe pointers.
func UnsafeNewQLocalServer(h unsafe.Pointer, h_QObject unsafe.Pointer) *QLocalServer {
	if h == nil {
		return nil
	}

	return &QLocalServer{h: (*C.QLocalServer)(h),
		QObject: qt6.UnsafeNewQObject(h_QObject)}
}

// NewQLocalServer constructs a new QLocalServer object.
func NewQLocalServer() *QLocalServer {
	var outptr_QLocalServer *C.QLocalServer = nil
	var outptr_QObject *C.QObject = nil

	C.QLocalServer_new(&outptr_QLocalServer, &outptr_QObject)
	ret := newQLocalServer(outptr_QLocalServer, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQLocalServer2 constructs a new QLocalServer object.
func NewQLocalServer2(parent *qt6.QObject) *QLocalServer {
	var outptr_QLocalServer *C.QLocalServer = nil
	var outptr_QObject *C.QObject = nil

	C.QLocalServer_new2((*C.QObject)(parent.UnsafePointer()), &outptr_QLocalServer, &outptr_QObject)
	ret := newQLocalServer(outptr_QLocalServer, outptr_QObject)
	ret.isSubclass = true
	return ret
}

func (this *QLocalServer) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QLocalServer_MetaObject(this.h)))
}

func (this *QLocalServer) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QLocalServer_Metacast(this.h, param1_Cstring))
}

func QLocalServer_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QLocalServer_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocalServer) NewConnection() {
	C.QLocalServer_NewConnection(this.h)
}
func (this *QLocalServer) OnNewConnection(slot func()) {
	C.QLocalServer_connect_NewConnection(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLocalServer_NewConnection
func miqt_exec_callback_QLocalServer_NewConnection(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QLocalServer) Close() {
	C.QLocalServer_Close(this.h)
}

func (this *QLocalServer) ErrorString() string {
	var _ms C.struct_miqt_string = C.QLocalServer_ErrorString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocalServer) HasPendingConnections() bool {
	return (bool)(C.QLocalServer_HasPendingConnections(this.h))
}

func (this *QLocalServer) IsListening() bool {
	return (bool)(C.QLocalServer_IsListening(this.h))
}

func (this *QLocalServer) Listen(name string) bool {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	return (bool)(C.QLocalServer_Listen(this.h, name_ms))
}

func (this *QLocalServer) ListenWithSocketDescriptor(socketDescriptor uintptr) bool {
	return (bool)(C.QLocalServer_ListenWithSocketDescriptor(this.h, (C.intptr_t)(socketDescriptor)))
}

func (this *QLocalServer) MaxPendingConnections() int {
	return (int)(C.QLocalServer_MaxPendingConnections(this.h))
}

func (this *QLocalServer) NextPendingConnection() *QLocalSocket {
	return UnsafeNewQLocalSocket(unsafe.Pointer(C.QLocalServer_NextPendingConnection(this.h)), nil, nil, nil)
}

func (this *QLocalServer) ServerName() string {
	var _ms C.struct_miqt_string = C.QLocalServer_ServerName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocalServer) FullServerName() string {
	var _ms C.struct_miqt_string = C.QLocalServer_FullServerName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QLocalServer_RemoveServer(name string) bool {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	return (bool)(C.QLocalServer_RemoveServer(name_ms))
}

func (this *QLocalServer) ServerError() QAbstractSocket__SocketError {
	return (QAbstractSocket__SocketError)(C.QLocalServer_ServerError(this.h))
}

func (this *QLocalServer) SetMaxPendingConnections(numConnections int) {
	C.QLocalServer_SetMaxPendingConnections(this.h, (C.int)(numConnections))
}

func (this *QLocalServer) WaitForNewConnection() bool {
	return (bool)(C.QLocalServer_WaitForNewConnection(this.h))
}

func (this *QLocalServer) SetListenBacklogSize(size int) {
	C.QLocalServer_SetListenBacklogSize(this.h, (C.int)(size))
}

func (this *QLocalServer) ListenBacklogSize() int {
	return (int)(C.QLocalServer_ListenBacklogSize(this.h))
}

func (this *QLocalServer) SetSocketOptions(options QLocalServer__SocketOption) {
	C.QLocalServer_SetSocketOptions(this.h, (C.int)(options))
}

func (this *QLocalServer) SocketOptions() QLocalServer__SocketOption {
	return (QLocalServer__SocketOption)(C.QLocalServer_SocketOptions(this.h))
}

func (this *QLocalServer) SocketDescriptor() uintptr {
	return (uintptr)(C.QLocalServer_SocketDescriptor(this.h))
}

func QLocalServer_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QLocalServer_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QLocalServer_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QLocalServer_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocalServer) WaitForNewConnection1(msec int) bool {
	return (bool)(C.QLocalServer_WaitForNewConnection1(this.h, (C.int)(msec)))
}

func (this *QLocalServer) WaitForNewConnection2(msec int, timedOut *bool) bool {
	return (bool)(C.QLocalServer_WaitForNewConnection2(this.h, (C.int)(msec), (*C.bool)(unsafe.Pointer(timedOut))))
}

func (this *QLocalServer) callVirtualBase_HasPendingConnections() bool {

	return (bool)(C.QLocalServer_virtualbase_HasPendingConnections(unsafe.Pointer(this.h)))

}
func (this *QLocalServer) OnHasPendingConnections(slot func(super func() bool) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLocalServer_override_virtual_HasPendingConnections(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLocalServer_HasPendingConnections
func miqt_exec_callback_QLocalServer_HasPendingConnections(self *C.QLocalServer, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QLocalServer{h: self}).callVirtualBase_HasPendingConnections)

	return (C.bool)(virtualReturn)

}

func (this *QLocalServer) callVirtualBase_NextPendingConnection() *QLocalSocket {

	return UnsafeNewQLocalSocket(unsafe.Pointer(C.QLocalServer_virtualbase_NextPendingConnection(unsafe.Pointer(this.h))), nil, nil, nil)
}
func (this *QLocalServer) OnNextPendingConnection(slot func(super func() *QLocalSocket) *QLocalSocket) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLocalServer_override_virtual_NextPendingConnection(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLocalServer_NextPendingConnection
func miqt_exec_callback_QLocalServer_NextPendingConnection(self *C.QLocalServer, cb C.intptr_t) *C.QLocalSocket {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QLocalSocket) *QLocalSocket)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QLocalServer{h: self}).callVirtualBase_NextPendingConnection)

	return virtualReturn.cPointer()

}

func (this *QLocalServer) callVirtualBase_IncomingConnection(socketDescriptor uintptr) {

	C.QLocalServer_virtualbase_IncomingConnection(unsafe.Pointer(this.h), (C.uintptr_t)(socketDescriptor))

}
func (this *QLocalServer) OnIncomingConnection(slot func(super func(socketDescriptor uintptr), socketDescriptor uintptr)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLocalServer_override_virtual_IncomingConnection(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLocalServer_IncomingConnection
func miqt_exec_callback_QLocalServer_IncomingConnection(self *C.QLocalServer, cb C.intptr_t, socketDescriptor C.uintptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(socketDescriptor uintptr), socketDescriptor uintptr))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (uintptr)(socketDescriptor)

	gofunc((&QLocalServer{h: self}).callVirtualBase_IncomingConnection, slotval1)

}

func (this *QLocalServer) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QLocalServer_virtualbase_Event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QLocalServer) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLocalServer_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLocalServer_Event
func miqt_exec_callback_QLocalServer_Event(self *C.QLocalServer, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QLocalServer{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QLocalServer) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QLocalServer_virtualbase_EventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QLocalServer) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLocalServer_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLocalServer_EventFilter
func miqt_exec_callback_QLocalServer_EventFilter(self *C.QLocalServer, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))
	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QLocalServer{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QLocalServer) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QLocalServer_virtualbase_TimerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QLocalServer) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLocalServer_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLocalServer_TimerEvent
func miqt_exec_callback_QLocalServer_TimerEvent(self *C.QLocalServer, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event), nil)

	gofunc((&QLocalServer{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QLocalServer) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QLocalServer_virtualbase_ChildEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QLocalServer) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLocalServer_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLocalServer_ChildEvent
func miqt_exec_callback_QLocalServer_ChildEvent(self *C.QLocalServer, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event), nil)

	gofunc((&QLocalServer{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QLocalServer) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QLocalServer_virtualbase_CustomEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QLocalServer) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLocalServer_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLocalServer_CustomEvent
func miqt_exec_callback_QLocalServer_CustomEvent(self *C.QLocalServer, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QLocalServer{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QLocalServer) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QLocalServer_virtualbase_ConnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QLocalServer) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLocalServer_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLocalServer_ConnectNotify
func miqt_exec_callback_QLocalServer_ConnectNotify(self *C.QLocalServer, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QLocalServer{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QLocalServer) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QLocalServer_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QLocalServer) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLocalServer_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLocalServer_DisconnectNotify
func miqt_exec_callback_QLocalServer_DisconnectNotify(self *C.QLocalServer, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QLocalServer{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QLocalServer) Delete() {
	C.QLocalServer_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QLocalServer) GoGC() {
	runtime.SetFinalizer(this, func(this *QLocalServer) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
