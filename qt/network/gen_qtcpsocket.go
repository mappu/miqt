package network

/*

#include "gen_qtcpsocket.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QTcpSocket struct {
	h          *C.QTcpSocket
	isSubclass bool
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

// newQTcpSocket constructs the type using only CGO pointers.
func newQTcpSocket(h *C.QTcpSocket, h_QAbstractSocket *C.QAbstractSocket, h_QIODevice *C.QIODevice, h_QObject *C.QObject) *QTcpSocket {
	if h == nil {
		return nil
	}
	return &QTcpSocket{h: h,
		QAbstractSocket: newQAbstractSocket(h_QAbstractSocket, h_QIODevice, h_QObject)}
}

// UnsafeNewQTcpSocket constructs the type using only unsafe pointers.
func UnsafeNewQTcpSocket(h unsafe.Pointer, h_QAbstractSocket unsafe.Pointer, h_QIODevice unsafe.Pointer, h_QObject unsafe.Pointer) *QTcpSocket {
	if h == nil {
		return nil
	}

	return &QTcpSocket{h: (*C.QTcpSocket)(h),
		QAbstractSocket: UnsafeNewQAbstractSocket(h_QAbstractSocket, h_QIODevice, h_QObject)}
}

// NewQTcpSocket constructs a new QTcpSocket object.
func NewQTcpSocket() *QTcpSocket {
	var outptr_QTcpSocket *C.QTcpSocket = nil
	var outptr_QAbstractSocket *C.QAbstractSocket = nil
	var outptr_QIODevice *C.QIODevice = nil
	var outptr_QObject *C.QObject = nil

	C.QTcpSocket_new(&outptr_QTcpSocket, &outptr_QAbstractSocket, &outptr_QIODevice, &outptr_QObject)
	ret := newQTcpSocket(outptr_QTcpSocket, outptr_QAbstractSocket, outptr_QIODevice, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQTcpSocket2 constructs a new QTcpSocket object.
func NewQTcpSocket2(parent *qt.QObject) *QTcpSocket {
	var outptr_QTcpSocket *C.QTcpSocket = nil
	var outptr_QAbstractSocket *C.QAbstractSocket = nil
	var outptr_QIODevice *C.QIODevice = nil
	var outptr_QObject *C.QObject = nil

	C.QTcpSocket_new2((*C.QObject)(parent.UnsafePointer()), &outptr_QTcpSocket, &outptr_QAbstractSocket, &outptr_QIODevice, &outptr_QObject)
	ret := newQTcpSocket(outptr_QTcpSocket, outptr_QAbstractSocket, outptr_QIODevice, outptr_QObject)
	ret.isSubclass = true
	return ret
}

func (this *QTcpSocket) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QTcpSocket_MetaObject(this.h)))
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

func QTcpSocket_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QTcpSocket_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
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

func QTcpSocket_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTcpSocket_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTcpSocket_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTcpSocket_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTcpSocket) callVirtualBase_Resume() {

	C.QTcpSocket_virtualbase_Resume(unsafe.Pointer(this.h))

}
func (this *QTcpSocket) OnResume(slot func(super func())) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTcpSocket_override_virtual_Resume(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTcpSocket_Resume
func miqt_exec_callback_QTcpSocket_Resume(self *C.QTcpSocket, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QTcpSocket{h: self}).callVirtualBase_Resume)

}

func (this *QTcpSocket) callVirtualBase_ConnectToHost(hostName string, port uint16, mode qt.QIODevice__OpenModeFlag, protocol QAbstractSocket__NetworkLayerProtocol) {
	hostName_ms := C.struct_miqt_string{}
	hostName_ms.data = C.CString(hostName)
	hostName_ms.len = C.size_t(len(hostName))
	defer C.free(unsafe.Pointer(hostName_ms.data))

	C.QTcpSocket_virtualbase_ConnectToHost(unsafe.Pointer(this.h), hostName_ms, (C.uint16_t)(port), (C.int)(mode), (C.int)(protocol))

}
func (this *QTcpSocket) OnConnectToHost(slot func(super func(hostName string, port uint16, mode qt.QIODevice__OpenModeFlag, protocol QAbstractSocket__NetworkLayerProtocol), hostName string, port uint16, mode qt.QIODevice__OpenModeFlag, protocol QAbstractSocket__NetworkLayerProtocol)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTcpSocket_override_virtual_ConnectToHost(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTcpSocket_ConnectToHost
func miqt_exec_callback_QTcpSocket_ConnectToHost(self *C.QTcpSocket, cb C.intptr_t, hostName C.struct_miqt_string, port C.uint16_t, mode C.int, protocol C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(hostName string, port uint16, mode qt.QIODevice__OpenModeFlag, protocol QAbstractSocket__NetworkLayerProtocol), hostName string, port uint16, mode qt.QIODevice__OpenModeFlag, protocol QAbstractSocket__NetworkLayerProtocol))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var hostName_ms C.struct_miqt_string = hostName
	hostName_ret := C.GoStringN(hostName_ms.data, C.int(int64(hostName_ms.len)))
	C.free(unsafe.Pointer(hostName_ms.data))
	slotval1 := hostName_ret
	slotval2 := (uint16)(port)

	slotval3 := (qt.QIODevice__OpenModeFlag)(mode)

	slotval4 := (QAbstractSocket__NetworkLayerProtocol)(protocol)

	gofunc((&QTcpSocket{h: self}).callVirtualBase_ConnectToHost, slotval1, slotval2, slotval3, slotval4)

}

func (this *QTcpSocket) callVirtualBase_DisconnectFromHost() {

	C.QTcpSocket_virtualbase_DisconnectFromHost(unsafe.Pointer(this.h))

}
func (this *QTcpSocket) OnDisconnectFromHost(slot func(super func())) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTcpSocket_override_virtual_DisconnectFromHost(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTcpSocket_DisconnectFromHost
func miqt_exec_callback_QTcpSocket_DisconnectFromHost(self *C.QTcpSocket, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QTcpSocket{h: self}).callVirtualBase_DisconnectFromHost)

}

func (this *QTcpSocket) callVirtualBase_BytesAvailable() int64 {

	return (int64)(C.QTcpSocket_virtualbase_BytesAvailable(unsafe.Pointer(this.h)))

}
func (this *QTcpSocket) OnBytesAvailable(slot func(super func() int64) int64) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTcpSocket_override_virtual_BytesAvailable(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTcpSocket_BytesAvailable
func miqt_exec_callback_QTcpSocket_BytesAvailable(self *C.QTcpSocket, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTcpSocket{h: self}).callVirtualBase_BytesAvailable)

	return (C.longlong)(virtualReturn)

}

func (this *QTcpSocket) callVirtualBase_BytesToWrite() int64 {

	return (int64)(C.QTcpSocket_virtualbase_BytesToWrite(unsafe.Pointer(this.h)))

}
func (this *QTcpSocket) OnBytesToWrite(slot func(super func() int64) int64) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTcpSocket_override_virtual_BytesToWrite(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTcpSocket_BytesToWrite
func miqt_exec_callback_QTcpSocket_BytesToWrite(self *C.QTcpSocket, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTcpSocket{h: self}).callVirtualBase_BytesToWrite)

	return (C.longlong)(virtualReturn)

}

func (this *QTcpSocket) callVirtualBase_CanReadLine() bool {

	return (bool)(C.QTcpSocket_virtualbase_CanReadLine(unsafe.Pointer(this.h)))

}
func (this *QTcpSocket) OnCanReadLine(slot func(super func() bool) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTcpSocket_override_virtual_CanReadLine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTcpSocket_CanReadLine
func miqt_exec_callback_QTcpSocket_CanReadLine(self *C.QTcpSocket, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTcpSocket{h: self}).callVirtualBase_CanReadLine)

	return (C.bool)(virtualReturn)

}

func (this *QTcpSocket) callVirtualBase_SetReadBufferSize(size int64) {

	C.QTcpSocket_virtualbase_SetReadBufferSize(unsafe.Pointer(this.h), (C.longlong)(size))

}
func (this *QTcpSocket) OnSetReadBufferSize(slot func(super func(size int64), size int64)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTcpSocket_override_virtual_SetReadBufferSize(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTcpSocket_SetReadBufferSize
func miqt_exec_callback_QTcpSocket_SetReadBufferSize(self *C.QTcpSocket, cb C.intptr_t, size C.longlong) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(size int64), size int64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int64)(size)

	gofunc((&QTcpSocket{h: self}).callVirtualBase_SetReadBufferSize, slotval1)

}

func (this *QTcpSocket) callVirtualBase_SocketDescriptor() uintptr {

	return (uintptr)(C.QTcpSocket_virtualbase_SocketDescriptor(unsafe.Pointer(this.h)))

}
func (this *QTcpSocket) OnSocketDescriptor(slot func(super func() uintptr) uintptr) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTcpSocket_override_virtual_SocketDescriptor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTcpSocket_SocketDescriptor
func miqt_exec_callback_QTcpSocket_SocketDescriptor(self *C.QTcpSocket, cb C.intptr_t) C.intptr_t {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() uintptr) uintptr)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTcpSocket{h: self}).callVirtualBase_SocketDescriptor)

	return (C.intptr_t)(virtualReturn)

}

func (this *QTcpSocket) callVirtualBase_SetSocketDescriptor(socketDescriptor uintptr, state QAbstractSocket__SocketState, openMode qt.QIODevice__OpenModeFlag) bool {

	return (bool)(C.QTcpSocket_virtualbase_SetSocketDescriptor(unsafe.Pointer(this.h), (C.intptr_t)(socketDescriptor), (C.int)(state), (C.int)(openMode)))

}
func (this *QTcpSocket) OnSetSocketDescriptor(slot func(super func(socketDescriptor uintptr, state QAbstractSocket__SocketState, openMode qt.QIODevice__OpenModeFlag) bool, socketDescriptor uintptr, state QAbstractSocket__SocketState, openMode qt.QIODevice__OpenModeFlag) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTcpSocket_override_virtual_SetSocketDescriptor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTcpSocket_SetSocketDescriptor
func miqt_exec_callback_QTcpSocket_SetSocketDescriptor(self *C.QTcpSocket, cb C.intptr_t, socketDescriptor C.intptr_t, state C.int, openMode C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(socketDescriptor uintptr, state QAbstractSocket__SocketState, openMode qt.QIODevice__OpenModeFlag) bool, socketDescriptor uintptr, state QAbstractSocket__SocketState, openMode qt.QIODevice__OpenModeFlag) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (uintptr)(socketDescriptor)

	slotval2 := (QAbstractSocket__SocketState)(state)

	slotval3 := (qt.QIODevice__OpenModeFlag)(openMode)

	virtualReturn := gofunc((&QTcpSocket{h: self}).callVirtualBase_SetSocketDescriptor, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QTcpSocket) callVirtualBase_SetSocketOption(option QAbstractSocket__SocketOption, value *qt.QVariant) {

	C.QTcpSocket_virtualbase_SetSocketOption(unsafe.Pointer(this.h), (C.int)(option), (*C.QVariant)(value.UnsafePointer()))

}
func (this *QTcpSocket) OnSetSocketOption(slot func(super func(option QAbstractSocket__SocketOption, value *qt.QVariant), option QAbstractSocket__SocketOption, value *qt.QVariant)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTcpSocket_override_virtual_SetSocketOption(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTcpSocket_SetSocketOption
func miqt_exec_callback_QTcpSocket_SetSocketOption(self *C.QTcpSocket, cb C.intptr_t, option C.int, value *C.QVariant) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(option QAbstractSocket__SocketOption, value *qt.QVariant), option QAbstractSocket__SocketOption, value *qt.QVariant))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAbstractSocket__SocketOption)(option)

	slotval2 := qt.UnsafeNewQVariant(unsafe.Pointer(value))

	gofunc((&QTcpSocket{h: self}).callVirtualBase_SetSocketOption, slotval1, slotval2)

}

func (this *QTcpSocket) callVirtualBase_SocketOption(option QAbstractSocket__SocketOption) *qt.QVariant {

	_ret := C.QTcpSocket_virtualbase_SocketOption(unsafe.Pointer(this.h), (C.int)(option))
	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTcpSocket) OnSocketOption(slot func(super func(option QAbstractSocket__SocketOption) *qt.QVariant, option QAbstractSocket__SocketOption) *qt.QVariant) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTcpSocket_override_virtual_SocketOption(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTcpSocket_SocketOption
func miqt_exec_callback_QTcpSocket_SocketOption(self *C.QTcpSocket, cb C.intptr_t, option C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(option QAbstractSocket__SocketOption) *qt.QVariant, option QAbstractSocket__SocketOption) *qt.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAbstractSocket__SocketOption)(option)

	virtualReturn := gofunc((&QTcpSocket{h: self}).callVirtualBase_SocketOption, slotval1)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}

func (this *QTcpSocket) callVirtualBase_Close() {

	C.QTcpSocket_virtualbase_Close(unsafe.Pointer(this.h))

}
func (this *QTcpSocket) OnClose(slot func(super func())) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTcpSocket_override_virtual_Close(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTcpSocket_Close
func miqt_exec_callback_QTcpSocket_Close(self *C.QTcpSocket, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QTcpSocket{h: self}).callVirtualBase_Close)

}

func (this *QTcpSocket) callVirtualBase_IsSequential() bool {

	return (bool)(C.QTcpSocket_virtualbase_IsSequential(unsafe.Pointer(this.h)))

}
func (this *QTcpSocket) OnIsSequential(slot func(super func() bool) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTcpSocket_override_virtual_IsSequential(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTcpSocket_IsSequential
func miqt_exec_callback_QTcpSocket_IsSequential(self *C.QTcpSocket, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTcpSocket{h: self}).callVirtualBase_IsSequential)

	return (C.bool)(virtualReturn)

}

func (this *QTcpSocket) callVirtualBase_AtEnd() bool {

	return (bool)(C.QTcpSocket_virtualbase_AtEnd(unsafe.Pointer(this.h)))

}
func (this *QTcpSocket) OnAtEnd(slot func(super func() bool) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTcpSocket_override_virtual_AtEnd(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTcpSocket_AtEnd
func miqt_exec_callback_QTcpSocket_AtEnd(self *C.QTcpSocket, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTcpSocket{h: self}).callVirtualBase_AtEnd)

	return (C.bool)(virtualReturn)

}

func (this *QTcpSocket) callVirtualBase_WaitForConnected(msecs int) bool {

	return (bool)(C.QTcpSocket_virtualbase_WaitForConnected(unsafe.Pointer(this.h), (C.int)(msecs)))

}
func (this *QTcpSocket) OnWaitForConnected(slot func(super func(msecs int) bool, msecs int) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTcpSocket_override_virtual_WaitForConnected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTcpSocket_WaitForConnected
func miqt_exec_callback_QTcpSocket_WaitForConnected(self *C.QTcpSocket, cb C.intptr_t, msecs C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(msecs int) bool, msecs int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(msecs)

	virtualReturn := gofunc((&QTcpSocket{h: self}).callVirtualBase_WaitForConnected, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QTcpSocket) callVirtualBase_WaitForReadyRead(msecs int) bool {

	return (bool)(C.QTcpSocket_virtualbase_WaitForReadyRead(unsafe.Pointer(this.h), (C.int)(msecs)))

}
func (this *QTcpSocket) OnWaitForReadyRead(slot func(super func(msecs int) bool, msecs int) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTcpSocket_override_virtual_WaitForReadyRead(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTcpSocket_WaitForReadyRead
func miqt_exec_callback_QTcpSocket_WaitForReadyRead(self *C.QTcpSocket, cb C.intptr_t, msecs C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(msecs int) bool, msecs int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(msecs)

	virtualReturn := gofunc((&QTcpSocket{h: self}).callVirtualBase_WaitForReadyRead, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QTcpSocket) callVirtualBase_WaitForBytesWritten(msecs int) bool {

	return (bool)(C.QTcpSocket_virtualbase_WaitForBytesWritten(unsafe.Pointer(this.h), (C.int)(msecs)))

}
func (this *QTcpSocket) OnWaitForBytesWritten(slot func(super func(msecs int) bool, msecs int) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTcpSocket_override_virtual_WaitForBytesWritten(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTcpSocket_WaitForBytesWritten
func miqt_exec_callback_QTcpSocket_WaitForBytesWritten(self *C.QTcpSocket, cb C.intptr_t, msecs C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(msecs int) bool, msecs int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(msecs)

	virtualReturn := gofunc((&QTcpSocket{h: self}).callVirtualBase_WaitForBytesWritten, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QTcpSocket) callVirtualBase_WaitForDisconnected(msecs int) bool {

	return (bool)(C.QTcpSocket_virtualbase_WaitForDisconnected(unsafe.Pointer(this.h), (C.int)(msecs)))

}
func (this *QTcpSocket) OnWaitForDisconnected(slot func(super func(msecs int) bool, msecs int) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTcpSocket_override_virtual_WaitForDisconnected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTcpSocket_WaitForDisconnected
func miqt_exec_callback_QTcpSocket_WaitForDisconnected(self *C.QTcpSocket, cb C.intptr_t, msecs C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(msecs int) bool, msecs int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(msecs)

	virtualReturn := gofunc((&QTcpSocket{h: self}).callVirtualBase_WaitForDisconnected, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QTcpSocket) callVirtualBase_ReadData(data string, maxlen int64) int64 {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))

	return (int64)(C.QTcpSocket_virtualbase_ReadData(unsafe.Pointer(this.h), data_Cstring, (C.longlong)(maxlen)))

}
func (this *QTcpSocket) OnReadData(slot func(super func(data string, maxlen int64) int64, data string, maxlen int64) int64) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTcpSocket_override_virtual_ReadData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTcpSocket_ReadData
func miqt_exec_callback_QTcpSocket_ReadData(self *C.QTcpSocket, cb C.intptr_t, data *C.char, maxlen C.longlong) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(data string, maxlen int64) int64, data string, maxlen int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	data_ret := data
	slotval1 := C.GoString(data_ret)

	slotval2 := (int64)(maxlen)

	virtualReturn := gofunc((&QTcpSocket{h: self}).callVirtualBase_ReadData, slotval1, slotval2)

	return (C.longlong)(virtualReturn)

}

func (this *QTcpSocket) callVirtualBase_ReadLineData(data string, maxlen int64) int64 {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))

	return (int64)(C.QTcpSocket_virtualbase_ReadLineData(unsafe.Pointer(this.h), data_Cstring, (C.longlong)(maxlen)))

}
func (this *QTcpSocket) OnReadLineData(slot func(super func(data string, maxlen int64) int64, data string, maxlen int64) int64) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTcpSocket_override_virtual_ReadLineData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTcpSocket_ReadLineData
func miqt_exec_callback_QTcpSocket_ReadLineData(self *C.QTcpSocket, cb C.intptr_t, data *C.char, maxlen C.longlong) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(data string, maxlen int64) int64, data string, maxlen int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	data_ret := data
	slotval1 := C.GoString(data_ret)

	slotval2 := (int64)(maxlen)

	virtualReturn := gofunc((&QTcpSocket{h: self}).callVirtualBase_ReadLineData, slotval1, slotval2)

	return (C.longlong)(virtualReturn)

}

func (this *QTcpSocket) callVirtualBase_WriteData(data string, lenVal int64) int64 {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))

	return (int64)(C.QTcpSocket_virtualbase_WriteData(unsafe.Pointer(this.h), data_Cstring, (C.longlong)(lenVal)))

}
func (this *QTcpSocket) OnWriteData(slot func(super func(data string, lenVal int64) int64, data string, lenVal int64) int64) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTcpSocket_override_virtual_WriteData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTcpSocket_WriteData
func miqt_exec_callback_QTcpSocket_WriteData(self *C.QTcpSocket, cb C.intptr_t, data *C.const_char, lenVal C.longlong) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(data string, lenVal int64) int64, data string, lenVal int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	data_ret := data
	slotval1 := C.GoString(data_ret)

	slotval2 := (int64)(lenVal)

	virtualReturn := gofunc((&QTcpSocket{h: self}).callVirtualBase_WriteData, slotval1, slotval2)

	return (C.longlong)(virtualReturn)

}

// Delete this object from C++ memory.
func (this *QTcpSocket) Delete() {
	C.QTcpSocket_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTcpSocket) GoGC() {
	runtime.SetFinalizer(this, func(this *QTcpSocket) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
