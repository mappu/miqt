package network

/*

#include "gen_qudpsocket.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QUdpSocket struct {
	h *C.QUdpSocket
	*QAbstractSocket
}

func (this *QUdpSocket) cPointer() *C.QUdpSocket {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QUdpSocket) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQUdpSocket constructs the type using only CGO pointers.
func newQUdpSocket(h *C.QUdpSocket) *QUdpSocket {
	if h == nil {
		return nil
	}
	var outptr_QAbstractSocket *C.QAbstractSocket = nil
	C.QUdpSocket_virtbase(h, &outptr_QAbstractSocket)

	return &QUdpSocket{h: h,
		QAbstractSocket: newQAbstractSocket(outptr_QAbstractSocket)}
}

// UnsafeNewQUdpSocket constructs the type using only unsafe pointers.
func UnsafeNewQUdpSocket(h unsafe.Pointer) *QUdpSocket {
	return newQUdpSocket((*C.QUdpSocket)(h))
}

// NewQUdpSocket constructs a new QUdpSocket object.
func NewQUdpSocket() *QUdpSocket {

	return newQUdpSocket(C.QUdpSocket_new())
}

// NewQUdpSocket2 constructs a new QUdpSocket object.
func NewQUdpSocket2(parent *qt.QObject) *QUdpSocket {

	return newQUdpSocket(C.QUdpSocket_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QUdpSocket) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QUdpSocket_MetaObject(this.h)))
}

func (this *QUdpSocket) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QUdpSocket_Metacast(this.h, param1_Cstring))
}

func QUdpSocket_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QUdpSocket_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QUdpSocket_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QUdpSocket_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QUdpSocket) JoinMulticastGroup(groupAddress *QHostAddress) bool {
	return (bool)(C.QUdpSocket_JoinMulticastGroup(this.h, groupAddress.cPointer()))
}

func (this *QUdpSocket) JoinMulticastGroup2(groupAddress *QHostAddress, iface *QNetworkInterface) bool {
	return (bool)(C.QUdpSocket_JoinMulticastGroup2(this.h, groupAddress.cPointer(), iface.cPointer()))
}

func (this *QUdpSocket) LeaveMulticastGroup(groupAddress *QHostAddress) bool {
	return (bool)(C.QUdpSocket_LeaveMulticastGroup(this.h, groupAddress.cPointer()))
}

func (this *QUdpSocket) LeaveMulticastGroup2(groupAddress *QHostAddress, iface *QNetworkInterface) bool {
	return (bool)(C.QUdpSocket_LeaveMulticastGroup2(this.h, groupAddress.cPointer(), iface.cPointer()))
}

func (this *QUdpSocket) MulticastInterface() *QNetworkInterface {
	_goptr := newQNetworkInterface(C.QUdpSocket_MulticastInterface(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QUdpSocket) SetMulticastInterface(iface *QNetworkInterface) {
	C.QUdpSocket_SetMulticastInterface(this.h, iface.cPointer())
}

func (this *QUdpSocket) HasPendingDatagrams() bool {
	return (bool)(C.QUdpSocket_HasPendingDatagrams(this.h))
}

func (this *QUdpSocket) PendingDatagramSize() int64 {
	return (int64)(C.QUdpSocket_PendingDatagramSize(this.h))
}

func (this *QUdpSocket) ReceiveDatagram() *QNetworkDatagram {
	_goptr := newQNetworkDatagram(C.QUdpSocket_ReceiveDatagram(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QUdpSocket) ReadDatagram(data string, maxlen int64) int64 {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))
	return (int64)(C.QUdpSocket_ReadDatagram(this.h, data_Cstring, (C.longlong)(maxlen)))
}

func (this *QUdpSocket) WriteDatagram(datagram *QNetworkDatagram) int64 {
	return (int64)(C.QUdpSocket_WriteDatagram(this.h, datagram.cPointer()))
}

func (this *QUdpSocket) WriteDatagram2(data string, lenVal int64, host *QHostAddress, port uint16) int64 {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))
	return (int64)(C.QUdpSocket_WriteDatagram2(this.h, data_Cstring, (C.longlong)(lenVal), host.cPointer(), (C.uint16_t)(port)))
}

func (this *QUdpSocket) WriteDatagram3(datagram []byte, host *QHostAddress, port uint16) int64 {
	datagram_alias := C.struct_miqt_string{}
	datagram_alias.data = (*C.char)(unsafe.Pointer(&datagram[0]))
	datagram_alias.len = C.size_t(len(datagram))
	return (int64)(C.QUdpSocket_WriteDatagram3(this.h, datagram_alias, host.cPointer(), (C.uint16_t)(port)))
}

func QUdpSocket_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QUdpSocket_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QUdpSocket_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QUdpSocket_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QUdpSocket_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QUdpSocket_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QUdpSocket_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QUdpSocket_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QUdpSocket) ReceiveDatagram1(maxSize int64) *QNetworkDatagram {
	_goptr := newQNetworkDatagram(C.QUdpSocket_ReceiveDatagram1(this.h, (C.longlong)(maxSize)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QUdpSocket) ReadDatagram3(data string, maxlen int64, host *QHostAddress) int64 {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))
	return (int64)(C.QUdpSocket_ReadDatagram3(this.h, data_Cstring, (C.longlong)(maxlen), host.cPointer()))
}

func (this *QUdpSocket) ReadDatagram4(data string, maxlen int64, host *QHostAddress, port *uint16) int64 {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))
	return (int64)(C.QUdpSocket_ReadDatagram4(this.h, data_Cstring, (C.longlong)(maxlen), host.cPointer(), (*C.uint16_t)(unsafe.Pointer(port))))
}

func (this *QUdpSocket) callVirtualBase_Resume() {

	C.QUdpSocket_virtualbase_Resume(unsafe.Pointer(this.h))

}
func (this *QUdpSocket) OnResume(slot func(super func())) {
	ok := C.QUdpSocket_override_virtual_Resume(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUdpSocket_Resume
func miqt_exec_callback_QUdpSocket_Resume(self *C.QUdpSocket, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QUdpSocket{h: self}).callVirtualBase_Resume)

}

func (this *QUdpSocket) callVirtualBase_ConnectToHost(hostName string, port uint16, mode qt.QIODevice__OpenModeFlag, protocol QAbstractSocket__NetworkLayerProtocol) {
	hostName_ms := C.struct_miqt_string{}
	hostName_ms.data = C.CString(hostName)
	hostName_ms.len = C.size_t(len(hostName))
	defer C.free(unsafe.Pointer(hostName_ms.data))

	C.QUdpSocket_virtualbase_ConnectToHost(unsafe.Pointer(this.h), hostName_ms, (C.uint16_t)(port), (C.int)(mode), (C.int)(protocol))

}
func (this *QUdpSocket) OnConnectToHost(slot func(super func(hostName string, port uint16, mode qt.QIODevice__OpenModeFlag, protocol QAbstractSocket__NetworkLayerProtocol), hostName string, port uint16, mode qt.QIODevice__OpenModeFlag, protocol QAbstractSocket__NetworkLayerProtocol)) {
	ok := C.QUdpSocket_override_virtual_ConnectToHost(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUdpSocket_ConnectToHost
func miqt_exec_callback_QUdpSocket_ConnectToHost(self *C.QUdpSocket, cb C.intptr_t, hostName C.struct_miqt_string, port C.uint16_t, mode C.int, protocol C.int) {
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

	gofunc((&QUdpSocket{h: self}).callVirtualBase_ConnectToHost, slotval1, slotval2, slotval3, slotval4)

}

func (this *QUdpSocket) callVirtualBase_DisconnectFromHost() {

	C.QUdpSocket_virtualbase_DisconnectFromHost(unsafe.Pointer(this.h))

}
func (this *QUdpSocket) OnDisconnectFromHost(slot func(super func())) {
	ok := C.QUdpSocket_override_virtual_DisconnectFromHost(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUdpSocket_DisconnectFromHost
func miqt_exec_callback_QUdpSocket_DisconnectFromHost(self *C.QUdpSocket, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QUdpSocket{h: self}).callVirtualBase_DisconnectFromHost)

}

func (this *QUdpSocket) callVirtualBase_BytesAvailable() int64 {

	return (int64)(C.QUdpSocket_virtualbase_BytesAvailable(unsafe.Pointer(this.h)))

}
func (this *QUdpSocket) OnBytesAvailable(slot func(super func() int64) int64) {
	ok := C.QUdpSocket_override_virtual_BytesAvailable(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUdpSocket_BytesAvailable
func miqt_exec_callback_QUdpSocket_BytesAvailable(self *C.QUdpSocket, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QUdpSocket{h: self}).callVirtualBase_BytesAvailable)

	return (C.longlong)(virtualReturn)

}

func (this *QUdpSocket) callVirtualBase_BytesToWrite() int64 {

	return (int64)(C.QUdpSocket_virtualbase_BytesToWrite(unsafe.Pointer(this.h)))

}
func (this *QUdpSocket) OnBytesToWrite(slot func(super func() int64) int64) {
	ok := C.QUdpSocket_override_virtual_BytesToWrite(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUdpSocket_BytesToWrite
func miqt_exec_callback_QUdpSocket_BytesToWrite(self *C.QUdpSocket, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QUdpSocket{h: self}).callVirtualBase_BytesToWrite)

	return (C.longlong)(virtualReturn)

}

func (this *QUdpSocket) callVirtualBase_CanReadLine() bool {

	return (bool)(C.QUdpSocket_virtualbase_CanReadLine(unsafe.Pointer(this.h)))

}
func (this *QUdpSocket) OnCanReadLine(slot func(super func() bool) bool) {
	ok := C.QUdpSocket_override_virtual_CanReadLine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUdpSocket_CanReadLine
func miqt_exec_callback_QUdpSocket_CanReadLine(self *C.QUdpSocket, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QUdpSocket{h: self}).callVirtualBase_CanReadLine)

	return (C.bool)(virtualReturn)

}

func (this *QUdpSocket) callVirtualBase_SetReadBufferSize(size int64) {

	C.QUdpSocket_virtualbase_SetReadBufferSize(unsafe.Pointer(this.h), (C.longlong)(size))

}
func (this *QUdpSocket) OnSetReadBufferSize(slot func(super func(size int64), size int64)) {
	ok := C.QUdpSocket_override_virtual_SetReadBufferSize(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUdpSocket_SetReadBufferSize
func miqt_exec_callback_QUdpSocket_SetReadBufferSize(self *C.QUdpSocket, cb C.intptr_t, size C.longlong) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(size int64), size int64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int64)(size)

	gofunc((&QUdpSocket{h: self}).callVirtualBase_SetReadBufferSize, slotval1)

}

func (this *QUdpSocket) callVirtualBase_SocketDescriptor() uintptr {

	return (uintptr)(C.QUdpSocket_virtualbase_SocketDescriptor(unsafe.Pointer(this.h)))

}
func (this *QUdpSocket) OnSocketDescriptor(slot func(super func() uintptr) uintptr) {
	ok := C.QUdpSocket_override_virtual_SocketDescriptor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUdpSocket_SocketDescriptor
func miqt_exec_callback_QUdpSocket_SocketDescriptor(self *C.QUdpSocket, cb C.intptr_t) C.intptr_t {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() uintptr) uintptr)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QUdpSocket{h: self}).callVirtualBase_SocketDescriptor)

	return (C.intptr_t)(virtualReturn)

}

func (this *QUdpSocket) callVirtualBase_SetSocketDescriptor(socketDescriptor uintptr, state QAbstractSocket__SocketState, openMode qt.QIODevice__OpenModeFlag) bool {

	return (bool)(C.QUdpSocket_virtualbase_SetSocketDescriptor(unsafe.Pointer(this.h), (C.intptr_t)(socketDescriptor), (C.int)(state), (C.int)(openMode)))

}
func (this *QUdpSocket) OnSetSocketDescriptor(slot func(super func(socketDescriptor uintptr, state QAbstractSocket__SocketState, openMode qt.QIODevice__OpenModeFlag) bool, socketDescriptor uintptr, state QAbstractSocket__SocketState, openMode qt.QIODevice__OpenModeFlag) bool) {
	ok := C.QUdpSocket_override_virtual_SetSocketDescriptor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUdpSocket_SetSocketDescriptor
func miqt_exec_callback_QUdpSocket_SetSocketDescriptor(self *C.QUdpSocket, cb C.intptr_t, socketDescriptor C.intptr_t, state C.int, openMode C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(socketDescriptor uintptr, state QAbstractSocket__SocketState, openMode qt.QIODevice__OpenModeFlag) bool, socketDescriptor uintptr, state QAbstractSocket__SocketState, openMode qt.QIODevice__OpenModeFlag) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (uintptr)(socketDescriptor)

	slotval2 := (QAbstractSocket__SocketState)(state)

	slotval3 := (qt.QIODevice__OpenModeFlag)(openMode)

	virtualReturn := gofunc((&QUdpSocket{h: self}).callVirtualBase_SetSocketDescriptor, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QUdpSocket) callVirtualBase_SetSocketOption(option QAbstractSocket__SocketOption, value *qt.QVariant) {

	C.QUdpSocket_virtualbase_SetSocketOption(unsafe.Pointer(this.h), (C.int)(option), (*C.QVariant)(value.UnsafePointer()))

}
func (this *QUdpSocket) OnSetSocketOption(slot func(super func(option QAbstractSocket__SocketOption, value *qt.QVariant), option QAbstractSocket__SocketOption, value *qt.QVariant)) {
	ok := C.QUdpSocket_override_virtual_SetSocketOption(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUdpSocket_SetSocketOption
func miqt_exec_callback_QUdpSocket_SetSocketOption(self *C.QUdpSocket, cb C.intptr_t, option C.int, value *C.QVariant) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(option QAbstractSocket__SocketOption, value *qt.QVariant), option QAbstractSocket__SocketOption, value *qt.QVariant))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAbstractSocket__SocketOption)(option)

	slotval2 := qt.UnsafeNewQVariant(unsafe.Pointer(value))

	gofunc((&QUdpSocket{h: self}).callVirtualBase_SetSocketOption, slotval1, slotval2)

}

func (this *QUdpSocket) callVirtualBase_SocketOption(option QAbstractSocket__SocketOption) *qt.QVariant {

	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QUdpSocket_virtualbase_SocketOption(unsafe.Pointer(this.h), (C.int)(option))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QUdpSocket) OnSocketOption(slot func(super func(option QAbstractSocket__SocketOption) *qt.QVariant, option QAbstractSocket__SocketOption) *qt.QVariant) {
	ok := C.QUdpSocket_override_virtual_SocketOption(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUdpSocket_SocketOption
func miqt_exec_callback_QUdpSocket_SocketOption(self *C.QUdpSocket, cb C.intptr_t, option C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(option QAbstractSocket__SocketOption) *qt.QVariant, option QAbstractSocket__SocketOption) *qt.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAbstractSocket__SocketOption)(option)

	virtualReturn := gofunc((&QUdpSocket{h: self}).callVirtualBase_SocketOption, slotval1)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}

func (this *QUdpSocket) callVirtualBase_Close() {

	C.QUdpSocket_virtualbase_Close(unsafe.Pointer(this.h))

}
func (this *QUdpSocket) OnClose(slot func(super func())) {
	ok := C.QUdpSocket_override_virtual_Close(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUdpSocket_Close
func miqt_exec_callback_QUdpSocket_Close(self *C.QUdpSocket, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QUdpSocket{h: self}).callVirtualBase_Close)

}

func (this *QUdpSocket) callVirtualBase_IsSequential() bool {

	return (bool)(C.QUdpSocket_virtualbase_IsSequential(unsafe.Pointer(this.h)))

}
func (this *QUdpSocket) OnIsSequential(slot func(super func() bool) bool) {
	ok := C.QUdpSocket_override_virtual_IsSequential(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUdpSocket_IsSequential
func miqt_exec_callback_QUdpSocket_IsSequential(self *C.QUdpSocket, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QUdpSocket{h: self}).callVirtualBase_IsSequential)

	return (C.bool)(virtualReturn)

}

func (this *QUdpSocket) callVirtualBase_AtEnd() bool {

	return (bool)(C.QUdpSocket_virtualbase_AtEnd(unsafe.Pointer(this.h)))

}
func (this *QUdpSocket) OnAtEnd(slot func(super func() bool) bool) {
	ok := C.QUdpSocket_override_virtual_AtEnd(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUdpSocket_AtEnd
func miqt_exec_callback_QUdpSocket_AtEnd(self *C.QUdpSocket, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QUdpSocket{h: self}).callVirtualBase_AtEnd)

	return (C.bool)(virtualReturn)

}

func (this *QUdpSocket) callVirtualBase_WaitForConnected(msecs int) bool {

	return (bool)(C.QUdpSocket_virtualbase_WaitForConnected(unsafe.Pointer(this.h), (C.int)(msecs)))

}
func (this *QUdpSocket) OnWaitForConnected(slot func(super func(msecs int) bool, msecs int) bool) {
	ok := C.QUdpSocket_override_virtual_WaitForConnected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUdpSocket_WaitForConnected
func miqt_exec_callback_QUdpSocket_WaitForConnected(self *C.QUdpSocket, cb C.intptr_t, msecs C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(msecs int) bool, msecs int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(msecs)

	virtualReturn := gofunc((&QUdpSocket{h: self}).callVirtualBase_WaitForConnected, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QUdpSocket) callVirtualBase_WaitForReadyRead(msecs int) bool {

	return (bool)(C.QUdpSocket_virtualbase_WaitForReadyRead(unsafe.Pointer(this.h), (C.int)(msecs)))

}
func (this *QUdpSocket) OnWaitForReadyRead(slot func(super func(msecs int) bool, msecs int) bool) {
	ok := C.QUdpSocket_override_virtual_WaitForReadyRead(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUdpSocket_WaitForReadyRead
func miqt_exec_callback_QUdpSocket_WaitForReadyRead(self *C.QUdpSocket, cb C.intptr_t, msecs C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(msecs int) bool, msecs int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(msecs)

	virtualReturn := gofunc((&QUdpSocket{h: self}).callVirtualBase_WaitForReadyRead, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QUdpSocket) callVirtualBase_WaitForBytesWritten(msecs int) bool {

	return (bool)(C.QUdpSocket_virtualbase_WaitForBytesWritten(unsafe.Pointer(this.h), (C.int)(msecs)))

}
func (this *QUdpSocket) OnWaitForBytesWritten(slot func(super func(msecs int) bool, msecs int) bool) {
	ok := C.QUdpSocket_override_virtual_WaitForBytesWritten(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUdpSocket_WaitForBytesWritten
func miqt_exec_callback_QUdpSocket_WaitForBytesWritten(self *C.QUdpSocket, cb C.intptr_t, msecs C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(msecs int) bool, msecs int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(msecs)

	virtualReturn := gofunc((&QUdpSocket{h: self}).callVirtualBase_WaitForBytesWritten, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QUdpSocket) callVirtualBase_WaitForDisconnected(msecs int) bool {

	return (bool)(C.QUdpSocket_virtualbase_WaitForDisconnected(unsafe.Pointer(this.h), (C.int)(msecs)))

}
func (this *QUdpSocket) OnWaitForDisconnected(slot func(super func(msecs int) bool, msecs int) bool) {
	ok := C.QUdpSocket_override_virtual_WaitForDisconnected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUdpSocket_WaitForDisconnected
func miqt_exec_callback_QUdpSocket_WaitForDisconnected(self *C.QUdpSocket, cb C.intptr_t, msecs C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(msecs int) bool, msecs int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(msecs)

	virtualReturn := gofunc((&QUdpSocket{h: self}).callVirtualBase_WaitForDisconnected, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QUdpSocket) callVirtualBase_ReadData(data string, maxlen int64) int64 {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))

	return (int64)(C.QUdpSocket_virtualbase_ReadData(unsafe.Pointer(this.h), data_Cstring, (C.longlong)(maxlen)))

}
func (this *QUdpSocket) OnReadData(slot func(super func(data string, maxlen int64) int64, data string, maxlen int64) int64) {
	ok := C.QUdpSocket_override_virtual_ReadData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUdpSocket_ReadData
func miqt_exec_callback_QUdpSocket_ReadData(self *C.QUdpSocket, cb C.intptr_t, data *C.char, maxlen C.longlong) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(data string, maxlen int64) int64, data string, maxlen int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	data_ret := data
	slotval1 := C.GoString(data_ret)

	slotval2 := (int64)(maxlen)

	virtualReturn := gofunc((&QUdpSocket{h: self}).callVirtualBase_ReadData, slotval1, slotval2)

	return (C.longlong)(virtualReturn)

}

func (this *QUdpSocket) callVirtualBase_ReadLineData(data string, maxlen int64) int64 {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))

	return (int64)(C.QUdpSocket_virtualbase_ReadLineData(unsafe.Pointer(this.h), data_Cstring, (C.longlong)(maxlen)))

}
func (this *QUdpSocket) OnReadLineData(slot func(super func(data string, maxlen int64) int64, data string, maxlen int64) int64) {
	ok := C.QUdpSocket_override_virtual_ReadLineData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUdpSocket_ReadLineData
func miqt_exec_callback_QUdpSocket_ReadLineData(self *C.QUdpSocket, cb C.intptr_t, data *C.char, maxlen C.longlong) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(data string, maxlen int64) int64, data string, maxlen int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	data_ret := data
	slotval1 := C.GoString(data_ret)

	slotval2 := (int64)(maxlen)

	virtualReturn := gofunc((&QUdpSocket{h: self}).callVirtualBase_ReadLineData, slotval1, slotval2)

	return (C.longlong)(virtualReturn)

}

func (this *QUdpSocket) callVirtualBase_WriteData(data string, lenVal int64) int64 {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))

	return (int64)(C.QUdpSocket_virtualbase_WriteData(unsafe.Pointer(this.h), data_Cstring, (C.longlong)(lenVal)))

}
func (this *QUdpSocket) OnWriteData(slot func(super func(data string, lenVal int64) int64, data string, lenVal int64) int64) {
	ok := C.QUdpSocket_override_virtual_WriteData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUdpSocket_WriteData
func miqt_exec_callback_QUdpSocket_WriteData(self *C.QUdpSocket, cb C.intptr_t, data *C.const_char, lenVal C.longlong) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(data string, lenVal int64) int64, data string, lenVal int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	data_ret := data
	slotval1 := C.GoString(data_ret)

	slotval2 := (int64)(lenVal)

	virtualReturn := gofunc((&QUdpSocket{h: self}).callVirtualBase_WriteData, slotval1, slotval2)

	return (C.longlong)(virtualReturn)

}

// Delete this object from C++ memory.
func (this *QUdpSocket) Delete() {
	C.QUdpSocket_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QUdpSocket) GoGC() {
	runtime.SetFinalizer(this, func(this *QUdpSocket) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
