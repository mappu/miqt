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
	h          *C.QSctpServer
	isSubclass bool
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
func newQSctpServer(h *C.QSctpServer, h_QTcpServer *C.QTcpServer, h_QObject *C.QObject) *QSctpServer {
	if h == nil {
		return nil
	}
	return &QSctpServer{h: h,
		QTcpServer: newQTcpServer(h_QTcpServer, h_QObject)}
}

// UnsafeNewQSctpServer constructs the type using only unsafe pointers.
func UnsafeNewQSctpServer(h unsafe.Pointer, h_QTcpServer unsafe.Pointer, h_QObject unsafe.Pointer) *QSctpServer {
	if h == nil {
		return nil
	}

	return &QSctpServer{h: (*C.QSctpServer)(h),
		QTcpServer: UnsafeNewQTcpServer(h_QTcpServer, h_QObject)}
}

// NewQSctpServer constructs a new QSctpServer object.
func NewQSctpServer() *QSctpServer {
	var outptr_QSctpServer *C.QSctpServer = nil
	var outptr_QTcpServer *C.QTcpServer = nil
	var outptr_QObject *C.QObject = nil

	C.QSctpServer_new(&outptr_QSctpServer, &outptr_QTcpServer, &outptr_QObject)
	ret := newQSctpServer(outptr_QSctpServer, outptr_QTcpServer, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQSctpServer2 constructs a new QSctpServer object.
func NewQSctpServer2(parent *qt6.QObject) *QSctpServer {
	var outptr_QSctpServer *C.QSctpServer = nil
	var outptr_QTcpServer *C.QTcpServer = nil
	var outptr_QObject *C.QObject = nil

	C.QSctpServer_new2((*C.QObject)(parent.UnsafePointer()), &outptr_QSctpServer, &outptr_QTcpServer, &outptr_QObject)
	ret := newQSctpServer(outptr_QSctpServer, outptr_QTcpServer, outptr_QObject)
	ret.isSubclass = true
	return ret
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
	return UnsafeNewQSctpSocket(unsafe.Pointer(C.QSctpServer_NextPendingDatagramConnection(this.h)), nil, nil, nil, nil, nil)
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
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSctpServer_override_virtual_IncomingConnection(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
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
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSctpServer_override_virtual_HasPendingConnections(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
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

	return UnsafeNewQTcpSocket(unsafe.Pointer(C.QSctpServer_virtualbase_NextPendingConnection(unsafe.Pointer(this.h))), nil, nil, nil, nil)
}
func (this *QSctpServer) OnNextPendingConnection(slot func(super func() *QTcpSocket) *QTcpSocket) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QSctpServer_override_virtual_NextPendingConnection(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
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

// Delete this object from C++ memory.
func (this *QSctpServer) Delete() {
	C.QSctpServer_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSctpServer) GoGC() {
	runtime.SetFinalizer(this, func(this *QSctpServer) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
