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

func (this *QSctpSocket) callVirtualBase_Resume() {

	C.QSctpSocket_virtualbase_Resume(unsafe.Pointer(this.h))

}
func (this *QSctpSocket) OnResume(slot func(super func())) {
	ok := C.QSctpSocket_override_virtual_Resume(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSctpSocket_Resume
func miqt_exec_callback_QSctpSocket_Resume(self *C.QSctpSocket, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QSctpSocket{h: self}).callVirtualBase_Resume)

}

func (this *QSctpSocket) callVirtualBase_Bind(address *QHostAddress, port uint16, mode QAbstractSocket__BindFlag) bool {

	return (bool)(C.QSctpSocket_virtualbase_Bind(unsafe.Pointer(this.h), address.cPointer(), (C.uint16_t)(port), (C.int)(mode)))

}
func (this *QSctpSocket) OnBind(slot func(super func(address *QHostAddress, port uint16, mode QAbstractSocket__BindFlag) bool, address *QHostAddress, port uint16, mode QAbstractSocket__BindFlag) bool) {
	ok := C.QSctpSocket_override_virtual_Bind(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSctpSocket_Bind
func miqt_exec_callback_QSctpSocket_Bind(self *C.QSctpSocket, cb C.intptr_t, address *C.QHostAddress, port C.uint16_t, mode C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(address *QHostAddress, port uint16, mode QAbstractSocket__BindFlag) bool, address *QHostAddress, port uint16, mode QAbstractSocket__BindFlag) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHostAddress(address)

	slotval2 := (uint16)(port)

	slotval3 := (QAbstractSocket__BindFlag)(mode)

	virtualReturn := gofunc((&QSctpSocket{h: self}).callVirtualBase_Bind, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QSctpSocket) callVirtualBase_ConnectToHost(hostName string, port uint16, mode qt6.QIODeviceBase__OpenModeFlag, protocol QAbstractSocket__NetworkLayerProtocol) {
	hostName_ms := C.struct_miqt_string{}
	hostName_ms.data = C.CString(hostName)
	hostName_ms.len = C.size_t(len(hostName))
	defer C.free(unsafe.Pointer(hostName_ms.data))

	C.QSctpSocket_virtualbase_ConnectToHost(unsafe.Pointer(this.h), hostName_ms, (C.uint16_t)(port), (C.int)(mode), (C.int)(protocol))

}
func (this *QSctpSocket) OnConnectToHost(slot func(super func(hostName string, port uint16, mode qt6.QIODeviceBase__OpenModeFlag, protocol QAbstractSocket__NetworkLayerProtocol), hostName string, port uint16, mode qt6.QIODeviceBase__OpenModeFlag, protocol QAbstractSocket__NetworkLayerProtocol)) {
	ok := C.QSctpSocket_override_virtual_ConnectToHost(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSctpSocket_ConnectToHost
func miqt_exec_callback_QSctpSocket_ConnectToHost(self *C.QSctpSocket, cb C.intptr_t, hostName C.struct_miqt_string, port C.uint16_t, mode C.int, protocol C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(hostName string, port uint16, mode qt6.QIODeviceBase__OpenModeFlag, protocol QAbstractSocket__NetworkLayerProtocol), hostName string, port uint16, mode qt6.QIODeviceBase__OpenModeFlag, protocol QAbstractSocket__NetworkLayerProtocol))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var hostName_ms C.struct_miqt_string = hostName
	hostName_ret := C.GoStringN(hostName_ms.data, C.int(int64(hostName_ms.len)))
	C.free(unsafe.Pointer(hostName_ms.data))
	slotval1 := hostName_ret
	slotval2 := (uint16)(port)

	slotval3 := (qt6.QIODeviceBase__OpenModeFlag)(mode)

	slotval4 := (QAbstractSocket__NetworkLayerProtocol)(protocol)

	gofunc((&QSctpSocket{h: self}).callVirtualBase_ConnectToHost, slotval1, slotval2, slotval3, slotval4)

}

func (this *QSctpSocket) callVirtualBase_BytesAvailable() int64 {

	return (int64)(C.QSctpSocket_virtualbase_BytesAvailable(unsafe.Pointer(this.h)))

}
func (this *QSctpSocket) OnBytesAvailable(slot func(super func() int64) int64) {
	ok := C.QSctpSocket_override_virtual_BytesAvailable(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSctpSocket_BytesAvailable
func miqt_exec_callback_QSctpSocket_BytesAvailable(self *C.QSctpSocket, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSctpSocket{h: self}).callVirtualBase_BytesAvailable)

	return (C.longlong)(virtualReturn)

}

func (this *QSctpSocket) callVirtualBase_BytesToWrite() int64 {

	return (int64)(C.QSctpSocket_virtualbase_BytesToWrite(unsafe.Pointer(this.h)))

}
func (this *QSctpSocket) OnBytesToWrite(slot func(super func() int64) int64) {
	ok := C.QSctpSocket_override_virtual_BytesToWrite(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSctpSocket_BytesToWrite
func miqt_exec_callback_QSctpSocket_BytesToWrite(self *C.QSctpSocket, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSctpSocket{h: self}).callVirtualBase_BytesToWrite)

	return (C.longlong)(virtualReturn)

}

func (this *QSctpSocket) callVirtualBase_SetReadBufferSize(size int64) {

	C.QSctpSocket_virtualbase_SetReadBufferSize(unsafe.Pointer(this.h), (C.longlong)(size))

}
func (this *QSctpSocket) OnSetReadBufferSize(slot func(super func(size int64), size int64)) {
	ok := C.QSctpSocket_override_virtual_SetReadBufferSize(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSctpSocket_SetReadBufferSize
func miqt_exec_callback_QSctpSocket_SetReadBufferSize(self *C.QSctpSocket, cb C.intptr_t, size C.longlong) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(size int64), size int64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int64)(size)

	gofunc((&QSctpSocket{h: self}).callVirtualBase_SetReadBufferSize, slotval1)

}

func (this *QSctpSocket) callVirtualBase_SocketDescriptor() uintptr {

	return (uintptr)(C.QSctpSocket_virtualbase_SocketDescriptor(unsafe.Pointer(this.h)))

}
func (this *QSctpSocket) OnSocketDescriptor(slot func(super func() uintptr) uintptr) {
	ok := C.QSctpSocket_override_virtual_SocketDescriptor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSctpSocket_SocketDescriptor
func miqt_exec_callback_QSctpSocket_SocketDescriptor(self *C.QSctpSocket, cb C.intptr_t) C.intptr_t {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() uintptr) uintptr)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSctpSocket{h: self}).callVirtualBase_SocketDescriptor)

	return (C.intptr_t)(virtualReturn)

}

func (this *QSctpSocket) callVirtualBase_SetSocketDescriptor(socketDescriptor uintptr, state QAbstractSocket__SocketState, openMode qt6.QIODeviceBase__OpenModeFlag) bool {

	return (bool)(C.QSctpSocket_virtualbase_SetSocketDescriptor(unsafe.Pointer(this.h), (C.intptr_t)(socketDescriptor), (C.int)(state), (C.int)(openMode)))

}
func (this *QSctpSocket) OnSetSocketDescriptor(slot func(super func(socketDescriptor uintptr, state QAbstractSocket__SocketState, openMode qt6.QIODeviceBase__OpenModeFlag) bool, socketDescriptor uintptr, state QAbstractSocket__SocketState, openMode qt6.QIODeviceBase__OpenModeFlag) bool) {
	ok := C.QSctpSocket_override_virtual_SetSocketDescriptor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSctpSocket_SetSocketDescriptor
func miqt_exec_callback_QSctpSocket_SetSocketDescriptor(self *C.QSctpSocket, cb C.intptr_t, socketDescriptor C.intptr_t, state C.int, openMode C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(socketDescriptor uintptr, state QAbstractSocket__SocketState, openMode qt6.QIODeviceBase__OpenModeFlag) bool, socketDescriptor uintptr, state QAbstractSocket__SocketState, openMode qt6.QIODeviceBase__OpenModeFlag) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (uintptr)(socketDescriptor)

	slotval2 := (QAbstractSocket__SocketState)(state)

	slotval3 := (qt6.QIODeviceBase__OpenModeFlag)(openMode)

	virtualReturn := gofunc((&QSctpSocket{h: self}).callVirtualBase_SetSocketDescriptor, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QSctpSocket) callVirtualBase_SetSocketOption(option QAbstractSocket__SocketOption, value *qt6.QVariant) {

	C.QSctpSocket_virtualbase_SetSocketOption(unsafe.Pointer(this.h), (C.int)(option), (*C.QVariant)(value.UnsafePointer()))

}
func (this *QSctpSocket) OnSetSocketOption(slot func(super func(option QAbstractSocket__SocketOption, value *qt6.QVariant), option QAbstractSocket__SocketOption, value *qt6.QVariant)) {
	ok := C.QSctpSocket_override_virtual_SetSocketOption(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSctpSocket_SetSocketOption
func miqt_exec_callback_QSctpSocket_SetSocketOption(self *C.QSctpSocket, cb C.intptr_t, option C.int, value *C.QVariant) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(option QAbstractSocket__SocketOption, value *qt6.QVariant), option QAbstractSocket__SocketOption, value *qt6.QVariant))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAbstractSocket__SocketOption)(option)

	slotval2 := qt6.UnsafeNewQVariant(unsafe.Pointer(value))

	gofunc((&QSctpSocket{h: self}).callVirtualBase_SetSocketOption, slotval1, slotval2)

}

func (this *QSctpSocket) callVirtualBase_SocketOption(option QAbstractSocket__SocketOption) *qt6.QVariant {

	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(C.QSctpSocket_virtualbase_SocketOption(unsafe.Pointer(this.h), (C.int)(option))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSctpSocket) OnSocketOption(slot func(super func(option QAbstractSocket__SocketOption) *qt6.QVariant, option QAbstractSocket__SocketOption) *qt6.QVariant) {
	ok := C.QSctpSocket_override_virtual_SocketOption(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSctpSocket_SocketOption
func miqt_exec_callback_QSctpSocket_SocketOption(self *C.QSctpSocket, cb C.intptr_t, option C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(option QAbstractSocket__SocketOption) *qt6.QVariant, option QAbstractSocket__SocketOption) *qt6.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAbstractSocket__SocketOption)(option)

	virtualReturn := gofunc((&QSctpSocket{h: self}).callVirtualBase_SocketOption, slotval1)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}

func (this *QSctpSocket) callVirtualBase_IsSequential() bool {

	return (bool)(C.QSctpSocket_virtualbase_IsSequential(unsafe.Pointer(this.h)))

}
func (this *QSctpSocket) OnIsSequential(slot func(super func() bool) bool) {
	ok := C.QSctpSocket_override_virtual_IsSequential(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSctpSocket_IsSequential
func miqt_exec_callback_QSctpSocket_IsSequential(self *C.QSctpSocket, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSctpSocket{h: self}).callVirtualBase_IsSequential)

	return (C.bool)(virtualReturn)

}

func (this *QSctpSocket) callVirtualBase_WaitForConnected(msecs int) bool {

	return (bool)(C.QSctpSocket_virtualbase_WaitForConnected(unsafe.Pointer(this.h), (C.int)(msecs)))

}
func (this *QSctpSocket) OnWaitForConnected(slot func(super func(msecs int) bool, msecs int) bool) {
	ok := C.QSctpSocket_override_virtual_WaitForConnected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSctpSocket_WaitForConnected
func miqt_exec_callback_QSctpSocket_WaitForConnected(self *C.QSctpSocket, cb C.intptr_t, msecs C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(msecs int) bool, msecs int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(msecs)

	virtualReturn := gofunc((&QSctpSocket{h: self}).callVirtualBase_WaitForConnected, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSctpSocket) callVirtualBase_WaitForReadyRead(msecs int) bool {

	return (bool)(C.QSctpSocket_virtualbase_WaitForReadyRead(unsafe.Pointer(this.h), (C.int)(msecs)))

}
func (this *QSctpSocket) OnWaitForReadyRead(slot func(super func(msecs int) bool, msecs int) bool) {
	ok := C.QSctpSocket_override_virtual_WaitForReadyRead(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSctpSocket_WaitForReadyRead
func miqt_exec_callback_QSctpSocket_WaitForReadyRead(self *C.QSctpSocket, cb C.intptr_t, msecs C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(msecs int) bool, msecs int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(msecs)

	virtualReturn := gofunc((&QSctpSocket{h: self}).callVirtualBase_WaitForReadyRead, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSctpSocket) callVirtualBase_WaitForBytesWritten(msecs int) bool {

	return (bool)(C.QSctpSocket_virtualbase_WaitForBytesWritten(unsafe.Pointer(this.h), (C.int)(msecs)))

}
func (this *QSctpSocket) OnWaitForBytesWritten(slot func(super func(msecs int) bool, msecs int) bool) {
	ok := C.QSctpSocket_override_virtual_WaitForBytesWritten(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSctpSocket_WaitForBytesWritten
func miqt_exec_callback_QSctpSocket_WaitForBytesWritten(self *C.QSctpSocket, cb C.intptr_t, msecs C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(msecs int) bool, msecs int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(msecs)

	virtualReturn := gofunc((&QSctpSocket{h: self}).callVirtualBase_WaitForBytesWritten, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSctpSocket) callVirtualBase_WaitForDisconnected(msecs int) bool {

	return (bool)(C.QSctpSocket_virtualbase_WaitForDisconnected(unsafe.Pointer(this.h), (C.int)(msecs)))

}
func (this *QSctpSocket) OnWaitForDisconnected(slot func(super func(msecs int) bool, msecs int) bool) {
	ok := C.QSctpSocket_override_virtual_WaitForDisconnected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSctpSocket_WaitForDisconnected
func miqt_exec_callback_QSctpSocket_WaitForDisconnected(self *C.QSctpSocket, cb C.intptr_t, msecs C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(msecs int) bool, msecs int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(msecs)

	virtualReturn := gofunc((&QSctpSocket{h: self}).callVirtualBase_WaitForDisconnected, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSctpSocket) callVirtualBase_SkipData(maxSize int64) int64 {

	return (int64)(C.QSctpSocket_virtualbase_SkipData(unsafe.Pointer(this.h), (C.longlong)(maxSize)))

}
func (this *QSctpSocket) OnSkipData(slot func(super func(maxSize int64) int64, maxSize int64) int64) {
	ok := C.QSctpSocket_override_virtual_SkipData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSctpSocket_SkipData
func miqt_exec_callback_QSctpSocket_SkipData(self *C.QSctpSocket, cb C.intptr_t, maxSize C.longlong) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(maxSize int64) int64, maxSize int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int64)(maxSize)

	virtualReturn := gofunc((&QSctpSocket{h: self}).callVirtualBase_SkipData, slotval1)

	return (C.longlong)(virtualReturn)

}

func (this *QSctpSocket) callVirtualBase_WriteData(data string, lenVal int64) int64 {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))

	return (int64)(C.QSctpSocket_virtualbase_WriteData(unsafe.Pointer(this.h), data_Cstring, (C.longlong)(lenVal)))

}
func (this *QSctpSocket) OnWriteData(slot func(super func(data string, lenVal int64) int64, data string, lenVal int64) int64) {
	ok := C.QSctpSocket_override_virtual_WriteData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSctpSocket_WriteData
func miqt_exec_callback_QSctpSocket_WriteData(self *C.QSctpSocket, cb C.intptr_t, data *C.const_char, lenVal C.longlong) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(data string, lenVal int64) int64, data string, lenVal int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	data_ret := data
	slotval1 := C.GoString(data_ret)

	slotval2 := (int64)(lenVal)

	virtualReturn := gofunc((&QSctpSocket{h: self}).callVirtualBase_WriteData, slotval1, slotval2)

	return (C.longlong)(virtualReturn)

}

func (this *QSctpSocket) callVirtualBase_Open(mode qt6.QIODeviceBase__OpenModeFlag) bool {

	return (bool)(C.QSctpSocket_virtualbase_Open(unsafe.Pointer(this.h), (C.int)(mode)))

}
func (this *QSctpSocket) OnOpen(slot func(super func(mode qt6.QIODeviceBase__OpenModeFlag) bool, mode qt6.QIODeviceBase__OpenModeFlag) bool) {
	ok := C.QSctpSocket_override_virtual_Open(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSctpSocket_Open
func miqt_exec_callback_QSctpSocket_Open(self *C.QSctpSocket, cb C.intptr_t, mode C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(mode qt6.QIODeviceBase__OpenModeFlag) bool, mode qt6.QIODeviceBase__OpenModeFlag) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt6.QIODeviceBase__OpenModeFlag)(mode)

	virtualReturn := gofunc((&QSctpSocket{h: self}).callVirtualBase_Open, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSctpSocket) callVirtualBase_Pos() int64 {

	return (int64)(C.QSctpSocket_virtualbase_Pos(unsafe.Pointer(this.h)))

}
func (this *QSctpSocket) OnPos(slot func(super func() int64) int64) {
	ok := C.QSctpSocket_override_virtual_Pos(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSctpSocket_Pos
func miqt_exec_callback_QSctpSocket_Pos(self *C.QSctpSocket, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSctpSocket{h: self}).callVirtualBase_Pos)

	return (C.longlong)(virtualReturn)

}

func (this *QSctpSocket) callVirtualBase_Size() int64 {

	return (int64)(C.QSctpSocket_virtualbase_Size(unsafe.Pointer(this.h)))

}
func (this *QSctpSocket) OnSize(slot func(super func() int64) int64) {
	ok := C.QSctpSocket_override_virtual_Size(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSctpSocket_Size
func miqt_exec_callback_QSctpSocket_Size(self *C.QSctpSocket, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSctpSocket{h: self}).callVirtualBase_Size)

	return (C.longlong)(virtualReturn)

}

func (this *QSctpSocket) callVirtualBase_Seek(pos int64) bool {

	return (bool)(C.QSctpSocket_virtualbase_Seek(unsafe.Pointer(this.h), (C.longlong)(pos)))

}
func (this *QSctpSocket) OnSeek(slot func(super func(pos int64) bool, pos int64) bool) {
	ok := C.QSctpSocket_override_virtual_Seek(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSctpSocket_Seek
func miqt_exec_callback_QSctpSocket_Seek(self *C.QSctpSocket, cb C.intptr_t, pos C.longlong) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(pos int64) bool, pos int64) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int64)(pos)

	virtualReturn := gofunc((&QSctpSocket{h: self}).callVirtualBase_Seek, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSctpSocket) callVirtualBase_AtEnd() bool {

	return (bool)(C.QSctpSocket_virtualbase_AtEnd(unsafe.Pointer(this.h)))

}
func (this *QSctpSocket) OnAtEnd(slot func(super func() bool) bool) {
	ok := C.QSctpSocket_override_virtual_AtEnd(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSctpSocket_AtEnd
func miqt_exec_callback_QSctpSocket_AtEnd(self *C.QSctpSocket, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSctpSocket{h: self}).callVirtualBase_AtEnd)

	return (C.bool)(virtualReturn)

}

func (this *QSctpSocket) callVirtualBase_Reset() bool {

	return (bool)(C.QSctpSocket_virtualbase_Reset(unsafe.Pointer(this.h)))

}
func (this *QSctpSocket) OnReset(slot func(super func() bool) bool) {
	ok := C.QSctpSocket_override_virtual_Reset(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSctpSocket_Reset
func miqt_exec_callback_QSctpSocket_Reset(self *C.QSctpSocket, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSctpSocket{h: self}).callVirtualBase_Reset)

	return (C.bool)(virtualReturn)

}

func (this *QSctpSocket) callVirtualBase_CanReadLine() bool {

	return (bool)(C.QSctpSocket_virtualbase_CanReadLine(unsafe.Pointer(this.h)))

}
func (this *QSctpSocket) OnCanReadLine(slot func(super func() bool) bool) {
	ok := C.QSctpSocket_override_virtual_CanReadLine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSctpSocket_CanReadLine
func miqt_exec_callback_QSctpSocket_CanReadLine(self *C.QSctpSocket, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSctpSocket{h: self}).callVirtualBase_CanReadLine)

	return (C.bool)(virtualReturn)

}

func (this *QSctpSocket) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QSctpSocket_virtualbase_Event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QSctpSocket) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QSctpSocket_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSctpSocket_Event
func miqt_exec_callback_QSctpSocket_Event(self *C.QSctpSocket, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QSctpSocket{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSctpSocket) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QSctpSocket_virtualbase_EventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QSctpSocket) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QSctpSocket_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSctpSocket_EventFilter
func miqt_exec_callback_QSctpSocket_EventFilter(self *C.QSctpSocket, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QSctpSocket{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QSctpSocket) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QSctpSocket_virtualbase_TimerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QSctpSocket) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QSctpSocket_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSctpSocket_TimerEvent
func miqt_exec_callback_QSctpSocket_TimerEvent(self *C.QSctpSocket, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QSctpSocket{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QSctpSocket) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QSctpSocket_virtualbase_ChildEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QSctpSocket) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QSctpSocket_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSctpSocket_ChildEvent
func miqt_exec_callback_QSctpSocket_ChildEvent(self *C.QSctpSocket, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QSctpSocket{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QSctpSocket) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QSctpSocket_virtualbase_CustomEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QSctpSocket) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QSctpSocket_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSctpSocket_CustomEvent
func miqt_exec_callback_QSctpSocket_CustomEvent(self *C.QSctpSocket, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QSctpSocket{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QSctpSocket) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QSctpSocket_virtualbase_ConnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QSctpSocket) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QSctpSocket_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSctpSocket_ConnectNotify
func miqt_exec_callback_QSctpSocket_ConnectNotify(self *C.QSctpSocket, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QSctpSocket{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QSctpSocket) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QSctpSocket_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QSctpSocket) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QSctpSocket_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSctpSocket_DisconnectNotify
func miqt_exec_callback_QSctpSocket_DisconnectNotify(self *C.QSctpSocket, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QSctpSocket{h: self}).callVirtualBase_DisconnectNotify, slotval1)

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
