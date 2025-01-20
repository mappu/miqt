package network

/*

#include "gen_qsctpserver.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QSctpServer struct {
	h *C.QSctpServer
	*QTcpServer
}

func (this *QSctpServer) cPointer() *C.QSctpServer {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QSctpServer) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQSctpServer constructs the type using only CGO pointers.
func newQSctpServer(h *C.QSctpServer) *QSctpServer {
	if h == nil {
		return nil
	}
	var outptr_QTcpServer *C.QTcpServer = nil
	C.QSctpServer_virtbase(h, &outptr_QTcpServer)

	return &QSctpServer{h: h,
		QTcpServer: newQTcpServer(outptr_QTcpServer)}
}

// UnsafeNewQSctpServer constructs the type using only unsafe pointers.
func UnsafeNewQSctpServer(h unsafe.Pointer) *QSctpServer {
	return newQSctpServer((*C.QSctpServer)(h))
}

// NewQSctpServer constructs a new QSctpServer object.
func NewQSctpServer() *QSctpServer {

	return newQSctpServer(C.QSctpServer_new())
}

// NewQSctpServer2 constructs a new QSctpServer object.
func NewQSctpServer2(parent *qt6.QObject) *QSctpServer {

	return newQSctpServer(C.QSctpServer_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QSctpServer) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QSctpServer_MetaObject(this.h)))
}

func (this *QSctpServer) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QSctpServer_Metacast(this.h, param1_Cstring))
}

func QSctpServer_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QSctpServer_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSctpServer) SetMaximumChannelCount(count int) {
	C.QSctpServer_SetMaximumChannelCount(this.h, (C.int)(count))
}

func (this *QSctpServer) MaximumChannelCount() int {
	return (int)(C.QSctpServer_MaximumChannelCount(this.h))
}

func (this *QSctpServer) NextPendingDatagramConnection() *QSctpSocket {
	return newQSctpSocket(C.QSctpServer_NextPendingDatagramConnection(this.h))
}

func QSctpServer_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSctpServer_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSctpServer_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSctpServer_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSctpServer) callVirtualBase_IncomingConnection(handle uintptr) {

	C.QSctpServer_virtualbase_IncomingConnection(unsafe.Pointer(this.h), (C.intptr_t)(handle))

}
func (this *QSctpServer) OnIncomingConnection(slot func(super func(handle uintptr), handle uintptr)) {
	ok := C.QSctpServer_override_virtual_IncomingConnection(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSctpServer_IncomingConnection
func miqt_exec_callback_QSctpServer_IncomingConnection(self *C.QSctpServer, cb C.intptr_t, handle C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(handle uintptr), handle uintptr))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (uintptr)(handle)

	gofunc((&QSctpServer{h: self}).callVirtualBase_IncomingConnection, slotval1)

}

func (this *QSctpServer) callVirtualBase_HasPendingConnections() bool {

	return (bool)(C.QSctpServer_virtualbase_HasPendingConnections(unsafe.Pointer(this.h)))

}
func (this *QSctpServer) OnHasPendingConnections(slot func(super func() bool) bool) {
	ok := C.QSctpServer_override_virtual_HasPendingConnections(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSctpServer_HasPendingConnections
func miqt_exec_callback_QSctpServer_HasPendingConnections(self *C.QSctpServer, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSctpServer{h: self}).callVirtualBase_HasPendingConnections)

	return (C.bool)(virtualReturn)

}

func (this *QSctpServer) callVirtualBase_NextPendingConnection() *QTcpSocket {

	return newQTcpSocket(C.QSctpServer_virtualbase_NextPendingConnection(unsafe.Pointer(this.h)))

}
func (this *QSctpServer) OnNextPendingConnection(slot func(super func() *QTcpSocket) *QTcpSocket) {
	ok := C.QSctpServer_override_virtual_NextPendingConnection(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSctpServer_NextPendingConnection
func miqt_exec_callback_QSctpServer_NextPendingConnection(self *C.QSctpServer, cb C.intptr_t) *C.QTcpSocket {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QTcpSocket) *QTcpSocket)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSctpServer{h: self}).callVirtualBase_NextPendingConnection)

	return virtualReturn.cPointer()

}

func (this *QSctpServer) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QSctpServer_virtualbase_Event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QSctpServer) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QSctpServer_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSctpServer_Event
func miqt_exec_callback_QSctpServer_Event(self *C.QSctpServer, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QSctpServer{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSctpServer) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QSctpServer_virtualbase_EventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QSctpServer) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QSctpServer_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSctpServer_EventFilter
func miqt_exec_callback_QSctpServer_EventFilter(self *C.QSctpServer, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QSctpServer{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QSctpServer) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QSctpServer_virtualbase_TimerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QSctpServer) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QSctpServer_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSctpServer_TimerEvent
func miqt_exec_callback_QSctpServer_TimerEvent(self *C.QSctpServer, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QSctpServer{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QSctpServer) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QSctpServer_virtualbase_ChildEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QSctpServer) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QSctpServer_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSctpServer_ChildEvent
func miqt_exec_callback_QSctpServer_ChildEvent(self *C.QSctpServer, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QSctpServer{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QSctpServer) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QSctpServer_virtualbase_CustomEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QSctpServer) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QSctpServer_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSctpServer_CustomEvent
func miqt_exec_callback_QSctpServer_CustomEvent(self *C.QSctpServer, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QSctpServer{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QSctpServer) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QSctpServer_virtualbase_ConnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QSctpServer) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QSctpServer_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSctpServer_ConnectNotify
func miqt_exec_callback_QSctpServer_ConnectNotify(self *C.QSctpServer, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QSctpServer{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QSctpServer) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QSctpServer_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QSctpServer) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QSctpServer_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSctpServer_DisconnectNotify
func miqt_exec_callback_QSctpServer_DisconnectNotify(self *C.QSctpServer, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QSctpServer{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QSctpServer) Delete() {
	C.QSctpServer_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSctpServer) GoGC() {
	runtime.SetFinalizer(this, func(this *QSctpServer) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
