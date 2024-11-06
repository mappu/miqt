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
	h *C.QLocalServer
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

func newQLocalServer(h *C.QLocalServer) *QLocalServer {
	if h == nil {
		return nil
	}
	return &QLocalServer{h: h, QObject: qt6.UnsafeNewQObject(unsafe.Pointer(h))}
}

func UnsafeNewQLocalServer(h unsafe.Pointer) *QLocalServer {
	return newQLocalServer((*C.QLocalServer)(h))
}

// NewQLocalServer constructs a new QLocalServer object.
func NewQLocalServer() *QLocalServer {
	ret := C.QLocalServer_new()
	return newQLocalServer(ret)
}

// NewQLocalServer2 constructs a new QLocalServer object.
func NewQLocalServer2(parent *qt6.QObject) *QLocalServer {
	ret := C.QLocalServer_new2((*C.QObject)(parent.UnsafePointer()))
	return newQLocalServer(ret)
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
	return UnsafeNewQLocalSocket(unsafe.Pointer(C.QLocalServer_NextPendingConnection(this.h)))
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

// Delete this object from C++ memory.
func (this *QLocalServer) Delete() {
	C.QLocalServer_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QLocalServer) GoGC() {
	runtime.SetFinalizer(this, func(this *QLocalServer) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
