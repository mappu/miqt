package network

/*

#include "gen_qsctpserver.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
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

func newQSctpServer(h *C.QSctpServer) *QSctpServer {
	if h == nil {
		return nil
	}
	return &QSctpServer{h: h, QTcpServer: UnsafeNewQTcpServer(unsafe.Pointer(h))}
}

func UnsafeNewQSctpServer(h unsafe.Pointer) *QSctpServer {
	return newQSctpServer((*C.QSctpServer)(h))
}

// NewQSctpServer constructs a new QSctpServer object.
func NewQSctpServer() *QSctpServer {
	ret := C.QSctpServer_new()
	return newQSctpServer(ret)
}

// NewQSctpServer2 constructs a new QSctpServer object.
func NewQSctpServer2(parent *qt6.QObject) *QSctpServer {
	ret := C.QSctpServer_new2((*C.QObject)(parent.UnsafePointer()))
	return newQSctpServer(ret)
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
	return UnsafeNewQSctpSocket(unsafe.Pointer(C.QSctpServer_NextPendingDatagramConnection(this.h)))
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
