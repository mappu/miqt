package network

/*

#include "gen_qsctpsocket.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
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

// newQSctpSocket constructs the type using only CGO pointers.
func newQSctpSocket(h *C.QSctpSocket) *QSctpSocket {
	if h == nil {
		return nil
	}
	var outptr_QTcpSocket *C.QTcpSocket = nil
	C.QSctpSocket_virtbase(h, &outptr_QTcpSocket)

	return &QSctpSocket{h: h,
		QTcpSocket: newQTcpSocket(outptr_QTcpSocket)}
}

// UnsafeNewQSctpSocket constructs the type using only unsafe pointers.
func UnsafeNewQSctpSocket(h unsafe.Pointer) *QSctpSocket {
	return newQSctpSocket((*C.QSctpSocket)(h))
}

// NewQSctpSocket constructs a new QSctpSocket object.
func NewQSctpSocket() *QSctpSocket {

	return newQSctpSocket(C.QSctpSocket_new())
}

// NewQSctpSocket2 constructs a new QSctpSocket object.
func NewQSctpSocket2(parent *qt6.QObject) *QSctpSocket {

	return newQSctpSocket(C.QSctpSocket_new2((*C.QObject)(parent.UnsafePointer())))
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
	_goptr := newQNetworkDatagram(C.QSctpSocket_ReadDatagram(this.h))
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

func (this *QSctpSocket) callVirtualBase_Close() {

	C.QSctpSocket_virtualbase_Close(unsafe.Pointer(this.h))

}
func (this *QSctpSocket) OnClose(slot func(super func())) {
	ok := C.QSctpSocket_override_virtual_Close(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSctpSocket_Close
func miqt_exec_callback_QSctpSocket_Close(self *C.QSctpSocket, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QSctpSocket{h: self}).callVirtualBase_Close)

}

func (this *QSctpSocket) callVirtualBase_DisconnectFromHost() {

	C.QSctpSocket_virtualbase_DisconnectFromHost(unsafe.Pointer(this.h))

}
func (this *QSctpSocket) OnDisconnectFromHost(slot func(super func())) {
	ok := C.QSctpSocket_override_virtual_DisconnectFromHost(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSctpSocket_DisconnectFromHost
func miqt_exec_callback_QSctpSocket_DisconnectFromHost(self *C.QSctpSocket, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QSctpSocket{h: self}).callVirtualBase_DisconnectFromHost)

}

func (this *QSctpSocket) callVirtualBase_ReadData(data string, maxlen int64) int64 {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))

	return (int64)(C.QSctpSocket_virtualbase_ReadData(unsafe.Pointer(this.h), data_Cstring, (C.longlong)(maxlen)))

}
func (this *QSctpSocket) OnReadData(slot func(super func(data string, maxlen int64) int64, data string, maxlen int64) int64) {
	ok := C.QSctpSocket_override_virtual_ReadData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSctpSocket_ReadData
func miqt_exec_callback_QSctpSocket_ReadData(self *C.QSctpSocket, cb C.intptr_t, data *C.char, maxlen C.longlong) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(data string, maxlen int64) int64, data string, maxlen int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	data_ret := data
	slotval1 := C.GoString(data_ret)

	slotval2 := (int64)(maxlen)

	virtualReturn := gofunc((&QSctpSocket{h: self}).callVirtualBase_ReadData, slotval1, slotval2)

	return (C.longlong)(virtualReturn)

}

func (this *QSctpSocket) callVirtualBase_ReadLineData(data string, maxlen int64) int64 {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))

	return (int64)(C.QSctpSocket_virtualbase_ReadLineData(unsafe.Pointer(this.h), data_Cstring, (C.longlong)(maxlen)))

}
func (this *QSctpSocket) OnReadLineData(slot func(super func(data string, maxlen int64) int64, data string, maxlen int64) int64) {
	ok := C.QSctpSocket_override_virtual_ReadLineData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSctpSocket_ReadLineData
func miqt_exec_callback_QSctpSocket_ReadLineData(self *C.QSctpSocket, cb C.intptr_t, data *C.char, maxlen C.longlong) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(data string, maxlen int64) int64, data string, maxlen int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	data_ret := data
	slotval1 := C.GoString(data_ret)

	slotval2 := (int64)(maxlen)

	virtualReturn := gofunc((&QSctpSocket{h: self}).callVirtualBase_ReadLineData, slotval1, slotval2)

	return (C.longlong)(virtualReturn)

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
