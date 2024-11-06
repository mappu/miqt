package network

/*

#include "gen_qtcpsocket.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"unsafe"
)

type QTcpSocket struct {
	h *C.QTcpSocket
	*QAbstractSocket
}

func (this *QTcpSocket) cPointer() *C.QTcpSocket {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QTcpSocket) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQTcpSocket(h *C.QTcpSocket) *QTcpSocket {
	if h == nil {
		return nil
	}
	return &QTcpSocket{h: h, QAbstractSocket: UnsafeNewQAbstractSocket(unsafe.Pointer(h))}
}

func UnsafeNewQTcpSocket(h unsafe.Pointer) *QTcpSocket {
	return newQTcpSocket((*C.QTcpSocket)(h))
}

// NewQTcpSocket constructs a new QTcpSocket object.
func NewQTcpSocket() *QTcpSocket {
	ret := C.QTcpSocket_new()
	return newQTcpSocket(ret)
}

// NewQTcpSocket2 constructs a new QTcpSocket object.
func NewQTcpSocket2(parent *qt6.QObject) *QTcpSocket {
	ret := C.QTcpSocket_new2((*C.QObject)(parent.UnsafePointer()))
	return newQTcpSocket(ret)
}

func (this *QTcpSocket) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QTcpSocket_MetaObject(this.h)))
}

func (this *QTcpSocket) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QTcpSocket_Metacast(this.h, param1_Cstring))
}

func QTcpSocket_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QTcpSocket_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTcpSocket) Bind(addr QHostAddress__SpecialAddress) bool {
	return (bool)(C.QTcpSocket_Bind(this.h, (C.int)(addr)))
}

func QTcpSocket_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTcpSocket_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTcpSocket_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTcpSocket_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTcpSocket) Bind2(addr QHostAddress__SpecialAddress, port uint16) bool {
	return (bool)(C.QTcpSocket_Bind2(this.h, (C.int)(addr), (C.uint16_t)(port)))
}

func (this *QTcpSocket) Bind3(addr QHostAddress__SpecialAddress, port uint16, mode QAbstractSocket__BindFlag) bool {
	return (bool)(C.QTcpSocket_Bind3(this.h, (C.int)(addr), (C.uint16_t)(port), (C.int)(mode)))
}

// Delete this object from C++ memory.
func (this *QTcpSocket) Delete() {
	C.QTcpSocket_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTcpSocket) GoGC() {
	runtime.SetFinalizer(this, func(this *QTcpSocket) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
