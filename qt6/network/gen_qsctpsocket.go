package network

/*

#include "gen_qsctpsocket.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"unsafe"
)

type QSctpSocket struct {
	h *C.QSctpSocket
	*QTcpSocket
}

func (this *QSctpSocket) cPointer() *C.QSctpSocket {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QSctpSocket) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQSctpSocket(h *C.QSctpSocket) *QSctpSocket {
	if h == nil {
		return nil
	}
	return &QSctpSocket{h: h, QTcpSocket: UnsafeNewQTcpSocket(unsafe.Pointer(h))}
}

func UnsafeNewQSctpSocket(h unsafe.Pointer) *QSctpSocket {
	return newQSctpSocket((*C.QSctpSocket)(h))
}

// NewQSctpSocket constructs a new QSctpSocket object.
func NewQSctpSocket() *QSctpSocket {
	ret := C.QSctpSocket_new()
	return newQSctpSocket(ret)
}

// NewQSctpSocket2 constructs a new QSctpSocket object.
func NewQSctpSocket2(parent *qt6.QObject) *QSctpSocket {
	ret := C.QSctpSocket_new2((*C.QObject)(parent.UnsafePointer()))
	return newQSctpSocket(ret)
}

func (this *QSctpSocket) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QSctpSocket_MetaObject(this.h)))
}

func (this *QSctpSocket) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QSctpSocket_Metacast(this.h, param1_Cstring))
}

func QSctpSocket_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QSctpSocket_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSctpSocket) Close() {
	C.QSctpSocket_Close(this.h)
}

func (this *QSctpSocket) DisconnectFromHost() {
	C.QSctpSocket_DisconnectFromHost(this.h)
}

func (this *QSctpSocket) SetMaximumChannelCount(count int) {
	C.QSctpSocket_SetMaximumChannelCount(this.h, (C.int)(count))
}

func (this *QSctpSocket) MaximumChannelCount() int {
	return (int)(C.QSctpSocket_MaximumChannelCount(this.h))
}

func (this *QSctpSocket) IsInDatagramMode() bool {
	return (bool)(C.QSctpSocket_IsInDatagramMode(this.h))
}

func (this *QSctpSocket) ReadDatagram() *QNetworkDatagram {
	_ret := C.QSctpSocket_ReadDatagram(this.h)
	_goptr := newQNetworkDatagram(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSctpSocket) WriteDatagram(datagram *QNetworkDatagram) bool {
	return (bool)(C.QSctpSocket_WriteDatagram(this.h, datagram.cPointer()))
}

func QSctpSocket_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSctpSocket_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSctpSocket_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSctpSocket_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QSctpSocket) Delete() {
	C.QSctpSocket_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSctpSocket) GoGC() {
	runtime.SetFinalizer(this, func(this *QSctpSocket) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
