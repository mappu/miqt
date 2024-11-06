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

func newQTcpServer(h *C.QTcpServer) *QTcpServer {
	if h == nil {
		return nil
	}
	return &QTcpServer{h: h, QObject: qt.UnsafeNewQObject(unsafe.Pointer(h))}
}

func UnsafeNewQTcpServer(h unsafe.Pointer) *QTcpServer {
	return newQTcpServer((*C.QTcpServer)(h))
}

// NewQTcpServer constructs a new QTcpServer object.
func NewQTcpServer() *QTcpServer {
	ret := C.QTcpServer_new()
	return newQTcpServer(ret)
}

// NewQTcpServer2 constructs a new QTcpServer object.
func NewQTcpServer2(parent *qt.QObject) *QTcpServer {
	ret := C.QTcpServer_new2((*C.QObject)(parent.UnsafePointer()))
	return newQTcpServer(ret)
}

func (this *QTcpServer) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QTcpServer_MetaObject(this.h)))
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

func QTcpServer_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QTcpServer_TrUtf8(s_Cstring)
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

func (this *QTcpServer) ServerPort() uint16 {
	return (uint16)(C.QTcpServer_ServerPort(this.h))
}

func (this *QTcpServer) ServerAddress() *QHostAddress {
	_ret := C.QTcpServer_ServerAddress(this.h)
	_goptr := newQHostAddress(_ret)
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
	return UnsafeNewQTcpSocket(unsafe.Pointer(C.QTcpServer_NextPendingConnection(this.h)))
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
	_ret := C.QTcpServer_Proxy(this.h)
	_goptr := newQNetworkProxy(_ret)
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

func QTcpServer_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTcpServer_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTcpServer_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTcpServer_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
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
