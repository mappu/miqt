package network

/*

#include "gen_qudpsocket.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
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
func NewQUdpSocket2(parent *qt6.QObject) *QUdpSocket {

	return newQUdpSocket(C.QUdpSocket_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QUdpSocket) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QUdpSocket_metaObject(this.h)))
}

func (this *QUdpSocket) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QUdpSocket_metacast(this.h, param1_Cstring))
}

func QUdpSocket_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QUdpSocket_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QUdpSocket) Bind(addr QHostAddress__SpecialAddress) bool {
	return (bool)(C.QUdpSocket_bind(this.h, (C.int)(addr)))
}

func (this *QUdpSocket) JoinMulticastGroup(groupAddress *QHostAddress) bool {
	return (bool)(C.QUdpSocket_joinMulticastGroup(this.h, groupAddress.cPointer()))
}

func (this *QUdpSocket) JoinMulticastGroup2(groupAddress *QHostAddress, iface *QNetworkInterface) bool {
	return (bool)(C.QUdpSocket_joinMulticastGroup2(this.h, groupAddress.cPointer(), iface.cPointer()))
}

func (this *QUdpSocket) LeaveMulticastGroup(groupAddress *QHostAddress) bool {
	return (bool)(C.QUdpSocket_leaveMulticastGroup(this.h, groupAddress.cPointer()))
}

func (this *QUdpSocket) LeaveMulticastGroup2(groupAddress *QHostAddress, iface *QNetworkInterface) bool {
	return (bool)(C.QUdpSocket_leaveMulticastGroup2(this.h, groupAddress.cPointer(), iface.cPointer()))
}

func (this *QUdpSocket) MulticastInterface() *QNetworkInterface {
	_goptr := newQNetworkInterface(C.QUdpSocket_multicastInterface(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QUdpSocket) SetMulticastInterface(iface *QNetworkInterface) {
	C.QUdpSocket_setMulticastInterface(this.h, iface.cPointer())
}

func (this *QUdpSocket) HasPendingDatagrams() bool {
	return (bool)(C.QUdpSocket_hasPendingDatagrams(this.h))
}

func (this *QUdpSocket) PendingDatagramSize() int64 {
	return (int64)(C.QUdpSocket_pendingDatagramSize(this.h))
}

func (this *QUdpSocket) ReceiveDatagram() *QNetworkDatagram {
	_goptr := newQNetworkDatagram(C.QUdpSocket_receiveDatagram(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QUdpSocket) ReadDatagram(data string, maxlen int64) int64 {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))
	return (int64)(C.QUdpSocket_readDatagram(this.h, data_Cstring, (C.longlong)(maxlen)))
}

func (this *QUdpSocket) WriteDatagram(datagram *QNetworkDatagram) int64 {
	return (int64)(C.QUdpSocket_writeDatagram(this.h, datagram.cPointer()))
}

func (this *QUdpSocket) WriteDatagram2(data string, lenVal int64, host *QHostAddress, port uint16) int64 {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))
	return (int64)(C.QUdpSocket_writeDatagram2(this.h, data_Cstring, (C.longlong)(lenVal), host.cPointer(), (C.uint16_t)(port)))
}

func (this *QUdpSocket) WriteDatagram3(datagram []byte, host *QHostAddress, port uint16) int64 {
	datagram_alias := C.struct_miqt_string{}
	if len(datagram) > 0 {
		datagram_alias.data = (*C.char)(unsafe.Pointer(&datagram[0]))
	} else {
		datagram_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	datagram_alias.len = C.size_t(len(datagram))
	return (int64)(C.QUdpSocket_writeDatagram3(this.h, datagram_alias, host.cPointer(), (C.uint16_t)(port)))
}

func QUdpSocket_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QUdpSocket_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QUdpSocket_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QUdpSocket_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QUdpSocket) Bind2(addr QHostAddress__SpecialAddress, port uint16) bool {
	return (bool)(C.QUdpSocket_bind2(this.h, (C.int)(addr), (C.uint16_t)(port)))
}

func (this *QUdpSocket) Bind3(addr QHostAddress__SpecialAddress, port uint16, mode QAbstractSocket__BindFlag) bool {
	return (bool)(C.QUdpSocket_bind3(this.h, (C.int)(addr), (C.uint16_t)(port), (C.int)(mode)))
}

func (this *QUdpSocket) ReceiveDatagram1(maxSize int64) *QNetworkDatagram {
	_goptr := newQNetworkDatagram(C.QUdpSocket_receiveDatagram1(this.h, (C.longlong)(maxSize)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QUdpSocket) ReadDatagram3(data string, maxlen int64, host *QHostAddress) int64 {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))
	return (int64)(C.QUdpSocket_readDatagram3(this.h, data_Cstring, (C.longlong)(maxlen), host.cPointer()))
}

func (this *QUdpSocket) ReadDatagram4(data string, maxlen int64, host *QHostAddress, port *uint16) int64 {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))
	return (int64)(C.QUdpSocket_readDatagram4(this.h, data_Cstring, (C.longlong)(maxlen), host.cPointer(), (*C.uint16_t)(unsafe.Pointer(port))))
}

func (this *QUdpSocket) callVirtualBase_Resume() {

	C.QUdpSocket_virtualbase_resume(unsafe.Pointer(this.h))

}
func (this *QUdpSocket) OnResume(slot func(super func())) {
	ok := C.QUdpSocket_override_virtual_resume(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUdpSocket_resume
func miqt_exec_callback_QUdpSocket_resume(self *C.QUdpSocket, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QUdpSocket{h: self}).callVirtualBase_Resume)

}

func (this *QUdpSocket) callVirtualBase_Bind(address *QHostAddress, port uint16, mode QAbstractSocket__BindFlag) bool {

	return (bool)(C.QUdpSocket_virtualbase_bind(unsafe.Pointer(this.h), address.cPointer(), (C.uint16_t)(port), (C.int)(mode)))

}
func (this *QUdpSocket) OnBind(slot func(super func(address *QHostAddress, port uint16, mode QAbstractSocket__BindFlag) bool, address *QHostAddress, port uint16, mode QAbstractSocket__BindFlag) bool) {
	ok := C.QUdpSocket_override_virtual_bind(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUdpSocket_bind
func miqt_exec_callback_QUdpSocket_bind(self *C.QUdpSocket, cb C.intptr_t, address *C.QHostAddress, port C.uint16_t, mode C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(address *QHostAddress, port uint16, mode QAbstractSocket__BindFlag) bool, address *QHostAddress, port uint16, mode QAbstractSocket__BindFlag) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHostAddress(address)

	slotval2 := (uint16)(port)

	slotval3 := (QAbstractSocket__BindFlag)(mode)

	virtualReturn := gofunc((&QUdpSocket{h: self}).callVirtualBase_Bind, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QUdpSocket) callVirtualBase_ConnectToHost(hostName string, port uint16, mode qt6.QIODeviceBase__OpenModeFlag, protocol QAbstractSocket__NetworkLayerProtocol) {
	hostName_ms := C.struct_miqt_string{}
	hostName_ms.data = C.CString(hostName)
	hostName_ms.len = C.size_t(len(hostName))
	defer C.free(unsafe.Pointer(hostName_ms.data))

	C.QUdpSocket_virtualbase_connectToHost(unsafe.Pointer(this.h), hostName_ms, (C.uint16_t)(port), (C.int)(mode), (C.int)(protocol))

}
func (this *QUdpSocket) OnConnectToHost(slot func(super func(hostName string, port uint16, mode qt6.QIODeviceBase__OpenModeFlag, protocol QAbstractSocket__NetworkLayerProtocol), hostName string, port uint16, mode qt6.QIODeviceBase__OpenModeFlag, protocol QAbstractSocket__NetworkLayerProtocol)) {
	ok := C.QUdpSocket_override_virtual_connectToHost(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUdpSocket_connectToHost
func miqt_exec_callback_QUdpSocket_connectToHost(self *C.QUdpSocket, cb C.intptr_t, hostName C.struct_miqt_string, port C.uint16_t, mode C.int, protocol C.int) {
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

	gofunc((&QUdpSocket{h: self}).callVirtualBase_ConnectToHost, slotval1, slotval2, slotval3, slotval4)

}

func (this *QUdpSocket) callVirtualBase_DisconnectFromHost() {

	C.QUdpSocket_virtualbase_disconnectFromHost(unsafe.Pointer(this.h))

}
func (this *QUdpSocket) OnDisconnectFromHost(slot func(super func())) {
	ok := C.QUdpSocket_override_virtual_disconnectFromHost(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUdpSocket_disconnectFromHost
func miqt_exec_callback_QUdpSocket_disconnectFromHost(self *C.QUdpSocket, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QUdpSocket{h: self}).callVirtualBase_DisconnectFromHost)

}

func (this *QUdpSocket) callVirtualBase_BytesAvailable() int64 {

	return (int64)(C.QUdpSocket_virtualbase_bytesAvailable(unsafe.Pointer(this.h)))

}
func (this *QUdpSocket) OnBytesAvailable(slot func(super func() int64) int64) {
	ok := C.QUdpSocket_override_virtual_bytesAvailable(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUdpSocket_bytesAvailable
func miqt_exec_callback_QUdpSocket_bytesAvailable(self *C.QUdpSocket, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QUdpSocket{h: self}).callVirtualBase_BytesAvailable)

	return (C.longlong)(virtualReturn)

}

func (this *QUdpSocket) callVirtualBase_BytesToWrite() int64 {

	return (int64)(C.QUdpSocket_virtualbase_bytesToWrite(unsafe.Pointer(this.h)))

}
func (this *QUdpSocket) OnBytesToWrite(slot func(super func() int64) int64) {
	ok := C.QUdpSocket_override_virtual_bytesToWrite(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUdpSocket_bytesToWrite
func miqt_exec_callback_QUdpSocket_bytesToWrite(self *C.QUdpSocket, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QUdpSocket{h: self}).callVirtualBase_BytesToWrite)

	return (C.longlong)(virtualReturn)

}

func (this *QUdpSocket) callVirtualBase_SetReadBufferSize(size int64) {

	C.QUdpSocket_virtualbase_setReadBufferSize(unsafe.Pointer(this.h), (C.longlong)(size))

}
func (this *QUdpSocket) OnSetReadBufferSize(slot func(super func(size int64), size int64)) {
	ok := C.QUdpSocket_override_virtual_setReadBufferSize(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUdpSocket_setReadBufferSize
func miqt_exec_callback_QUdpSocket_setReadBufferSize(self *C.QUdpSocket, cb C.intptr_t, size C.longlong) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(size int64), size int64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int64)(size)

	gofunc((&QUdpSocket{h: self}).callVirtualBase_SetReadBufferSize, slotval1)

}

func (this *QUdpSocket) callVirtualBase_SocketDescriptor() uintptr {

	return (uintptr)(C.QUdpSocket_virtualbase_socketDescriptor(unsafe.Pointer(this.h)))

}
func (this *QUdpSocket) OnSocketDescriptor(slot func(super func() uintptr) uintptr) {
	ok := C.QUdpSocket_override_virtual_socketDescriptor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUdpSocket_socketDescriptor
func miqt_exec_callback_QUdpSocket_socketDescriptor(self *C.QUdpSocket, cb C.intptr_t) C.intptr_t {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() uintptr) uintptr)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QUdpSocket{h: self}).callVirtualBase_SocketDescriptor)

	return (C.intptr_t)(virtualReturn)

}

func (this *QUdpSocket) callVirtualBase_SetSocketDescriptor(socketDescriptor uintptr, state QAbstractSocket__SocketState, openMode qt6.QIODeviceBase__OpenModeFlag) bool {

	return (bool)(C.QUdpSocket_virtualbase_setSocketDescriptor(unsafe.Pointer(this.h), (C.intptr_t)(socketDescriptor), (C.int)(state), (C.int)(openMode)))

}
func (this *QUdpSocket) OnSetSocketDescriptor(slot func(super func(socketDescriptor uintptr, state QAbstractSocket__SocketState, openMode qt6.QIODeviceBase__OpenModeFlag) bool, socketDescriptor uintptr, state QAbstractSocket__SocketState, openMode qt6.QIODeviceBase__OpenModeFlag) bool) {
	ok := C.QUdpSocket_override_virtual_setSocketDescriptor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUdpSocket_setSocketDescriptor
func miqt_exec_callback_QUdpSocket_setSocketDescriptor(self *C.QUdpSocket, cb C.intptr_t, socketDescriptor C.intptr_t, state C.int, openMode C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(socketDescriptor uintptr, state QAbstractSocket__SocketState, openMode qt6.QIODeviceBase__OpenModeFlag) bool, socketDescriptor uintptr, state QAbstractSocket__SocketState, openMode qt6.QIODeviceBase__OpenModeFlag) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (uintptr)(socketDescriptor)

	slotval2 := (QAbstractSocket__SocketState)(state)

	slotval3 := (qt6.QIODeviceBase__OpenModeFlag)(openMode)

	virtualReturn := gofunc((&QUdpSocket{h: self}).callVirtualBase_SetSocketDescriptor, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QUdpSocket) callVirtualBase_SetSocketOption(option QAbstractSocket__SocketOption, value *qt6.QVariant) {

	C.QUdpSocket_virtualbase_setSocketOption(unsafe.Pointer(this.h), (C.int)(option), (*C.QVariant)(value.UnsafePointer()))

}
func (this *QUdpSocket) OnSetSocketOption(slot func(super func(option QAbstractSocket__SocketOption, value *qt6.QVariant), option QAbstractSocket__SocketOption, value *qt6.QVariant)) {
	ok := C.QUdpSocket_override_virtual_setSocketOption(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUdpSocket_setSocketOption
func miqt_exec_callback_QUdpSocket_setSocketOption(self *C.QUdpSocket, cb C.intptr_t, option C.int, value *C.QVariant) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(option QAbstractSocket__SocketOption, value *qt6.QVariant), option QAbstractSocket__SocketOption, value *qt6.QVariant))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAbstractSocket__SocketOption)(option)

	slotval2 := qt6.UnsafeNewQVariant(unsafe.Pointer(value))

	gofunc((&QUdpSocket{h: self}).callVirtualBase_SetSocketOption, slotval1, slotval2)

}

func (this *QUdpSocket) callVirtualBase_SocketOption(option QAbstractSocket__SocketOption) *qt6.QVariant {

	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(C.QUdpSocket_virtualbase_socketOption(unsafe.Pointer(this.h), (C.int)(option))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QUdpSocket) OnSocketOption(slot func(super func(option QAbstractSocket__SocketOption) *qt6.QVariant, option QAbstractSocket__SocketOption) *qt6.QVariant) {
	ok := C.QUdpSocket_override_virtual_socketOption(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUdpSocket_socketOption
func miqt_exec_callback_QUdpSocket_socketOption(self *C.QUdpSocket, cb C.intptr_t, option C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(option QAbstractSocket__SocketOption) *qt6.QVariant, option QAbstractSocket__SocketOption) *qt6.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAbstractSocket__SocketOption)(option)

	virtualReturn := gofunc((&QUdpSocket{h: self}).callVirtualBase_SocketOption, slotval1)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}

func (this *QUdpSocket) callVirtualBase_Close() {

	C.QUdpSocket_virtualbase_close(unsafe.Pointer(this.h))

}
func (this *QUdpSocket) OnClose(slot func(super func())) {
	ok := C.QUdpSocket_override_virtual_close(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUdpSocket_close
func miqt_exec_callback_QUdpSocket_close(self *C.QUdpSocket, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QUdpSocket{h: self}).callVirtualBase_Close)

}

func (this *QUdpSocket) callVirtualBase_IsSequential() bool {

	return (bool)(C.QUdpSocket_virtualbase_isSequential(unsafe.Pointer(this.h)))

}
func (this *QUdpSocket) OnIsSequential(slot func(super func() bool) bool) {
	ok := C.QUdpSocket_override_virtual_isSequential(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUdpSocket_isSequential
func miqt_exec_callback_QUdpSocket_isSequential(self *C.QUdpSocket, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QUdpSocket{h: self}).callVirtualBase_IsSequential)

	return (C.bool)(virtualReturn)

}

func (this *QUdpSocket) callVirtualBase_WaitForConnected(msecs int) bool {

	return (bool)(C.QUdpSocket_virtualbase_waitForConnected(unsafe.Pointer(this.h), (C.int)(msecs)))

}
func (this *QUdpSocket) OnWaitForConnected(slot func(super func(msecs int) bool, msecs int) bool) {
	ok := C.QUdpSocket_override_virtual_waitForConnected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUdpSocket_waitForConnected
func miqt_exec_callback_QUdpSocket_waitForConnected(self *C.QUdpSocket, cb C.intptr_t, msecs C.int) C.bool {
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

	return (bool)(C.QUdpSocket_virtualbase_waitForReadyRead(unsafe.Pointer(this.h), (C.int)(msecs)))

}
func (this *QUdpSocket) OnWaitForReadyRead(slot func(super func(msecs int) bool, msecs int) bool) {
	ok := C.QUdpSocket_override_virtual_waitForReadyRead(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUdpSocket_waitForReadyRead
func miqt_exec_callback_QUdpSocket_waitForReadyRead(self *C.QUdpSocket, cb C.intptr_t, msecs C.int) C.bool {
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

	return (bool)(C.QUdpSocket_virtualbase_waitForBytesWritten(unsafe.Pointer(this.h), (C.int)(msecs)))

}
func (this *QUdpSocket) OnWaitForBytesWritten(slot func(super func(msecs int) bool, msecs int) bool) {
	ok := C.QUdpSocket_override_virtual_waitForBytesWritten(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUdpSocket_waitForBytesWritten
func miqt_exec_callback_QUdpSocket_waitForBytesWritten(self *C.QUdpSocket, cb C.intptr_t, msecs C.int) C.bool {
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

	return (bool)(C.QUdpSocket_virtualbase_waitForDisconnected(unsafe.Pointer(this.h), (C.int)(msecs)))

}
func (this *QUdpSocket) OnWaitForDisconnected(slot func(super func(msecs int) bool, msecs int) bool) {
	ok := C.QUdpSocket_override_virtual_waitForDisconnected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUdpSocket_waitForDisconnected
func miqt_exec_callback_QUdpSocket_waitForDisconnected(self *C.QUdpSocket, cb C.intptr_t, msecs C.int) C.bool {
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

	return (int64)(C.QUdpSocket_virtualbase_readData(unsafe.Pointer(this.h), data_Cstring, (C.longlong)(maxlen)))

}
func (this *QUdpSocket) OnReadData(slot func(super func(data string, maxlen int64) int64, data string, maxlen int64) int64) {
	ok := C.QUdpSocket_override_virtual_readData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUdpSocket_readData
func miqt_exec_callback_QUdpSocket_readData(self *C.QUdpSocket, cb C.intptr_t, data *C.char, maxlen C.longlong) C.longlong {
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

	return (int64)(C.QUdpSocket_virtualbase_readLineData(unsafe.Pointer(this.h), data_Cstring, (C.longlong)(maxlen)))

}
func (this *QUdpSocket) OnReadLineData(slot func(super func(data string, maxlen int64) int64, data string, maxlen int64) int64) {
	ok := C.QUdpSocket_override_virtual_readLineData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUdpSocket_readLineData
func miqt_exec_callback_QUdpSocket_readLineData(self *C.QUdpSocket, cb C.intptr_t, data *C.char, maxlen C.longlong) C.longlong {
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

func (this *QUdpSocket) callVirtualBase_SkipData(maxSize int64) int64 {

	return (int64)(C.QUdpSocket_virtualbase_skipData(unsafe.Pointer(this.h), (C.longlong)(maxSize)))

}
func (this *QUdpSocket) OnSkipData(slot func(super func(maxSize int64) int64, maxSize int64) int64) {
	ok := C.QUdpSocket_override_virtual_skipData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUdpSocket_skipData
func miqt_exec_callback_QUdpSocket_skipData(self *C.QUdpSocket, cb C.intptr_t, maxSize C.longlong) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(maxSize int64) int64, maxSize int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int64)(maxSize)

	virtualReturn := gofunc((&QUdpSocket{h: self}).callVirtualBase_SkipData, slotval1)

	return (C.longlong)(virtualReturn)

}

func (this *QUdpSocket) callVirtualBase_WriteData(data string, lenVal int64) int64 {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))

	return (int64)(C.QUdpSocket_virtualbase_writeData(unsafe.Pointer(this.h), data_Cstring, (C.longlong)(lenVal)))

}
func (this *QUdpSocket) OnWriteData(slot func(super func(data string, lenVal int64) int64, data string, lenVal int64) int64) {
	ok := C.QUdpSocket_override_virtual_writeData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUdpSocket_writeData
func miqt_exec_callback_QUdpSocket_writeData(self *C.QUdpSocket, cb C.intptr_t, data *C.const_char, lenVal C.longlong) C.longlong {
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

func (this *QUdpSocket) callVirtualBase_Open(mode qt6.QIODeviceBase__OpenModeFlag) bool {

	return (bool)(C.QUdpSocket_virtualbase_open(unsafe.Pointer(this.h), (C.int)(mode)))

}
func (this *QUdpSocket) OnOpen(slot func(super func(mode qt6.QIODeviceBase__OpenModeFlag) bool, mode qt6.QIODeviceBase__OpenModeFlag) bool) {
	ok := C.QUdpSocket_override_virtual_open(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUdpSocket_open
func miqt_exec_callback_QUdpSocket_open(self *C.QUdpSocket, cb C.intptr_t, mode C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(mode qt6.QIODeviceBase__OpenModeFlag) bool, mode qt6.QIODeviceBase__OpenModeFlag) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt6.QIODeviceBase__OpenModeFlag)(mode)

	virtualReturn := gofunc((&QUdpSocket{h: self}).callVirtualBase_Open, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QUdpSocket) callVirtualBase_Pos() int64 {

	return (int64)(C.QUdpSocket_virtualbase_pos(unsafe.Pointer(this.h)))

}
func (this *QUdpSocket) OnPos(slot func(super func() int64) int64) {
	ok := C.QUdpSocket_override_virtual_pos(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUdpSocket_pos
func miqt_exec_callback_QUdpSocket_pos(self *C.QUdpSocket, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QUdpSocket{h: self}).callVirtualBase_Pos)

	return (C.longlong)(virtualReturn)

}

func (this *QUdpSocket) callVirtualBase_Size() int64 {

	return (int64)(C.QUdpSocket_virtualbase_size(unsafe.Pointer(this.h)))

}
func (this *QUdpSocket) OnSize(slot func(super func() int64) int64) {
	ok := C.QUdpSocket_override_virtual_size(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUdpSocket_size
func miqt_exec_callback_QUdpSocket_size(self *C.QUdpSocket, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QUdpSocket{h: self}).callVirtualBase_Size)

	return (C.longlong)(virtualReturn)

}

func (this *QUdpSocket) callVirtualBase_Seek(pos int64) bool {

	return (bool)(C.QUdpSocket_virtualbase_seek(unsafe.Pointer(this.h), (C.longlong)(pos)))

}
func (this *QUdpSocket) OnSeek(slot func(super func(pos int64) bool, pos int64) bool) {
	ok := C.QUdpSocket_override_virtual_seek(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUdpSocket_seek
func miqt_exec_callback_QUdpSocket_seek(self *C.QUdpSocket, cb C.intptr_t, pos C.longlong) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(pos int64) bool, pos int64) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int64)(pos)

	virtualReturn := gofunc((&QUdpSocket{h: self}).callVirtualBase_Seek, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QUdpSocket) callVirtualBase_AtEnd() bool {

	return (bool)(C.QUdpSocket_virtualbase_atEnd(unsafe.Pointer(this.h)))

}
func (this *QUdpSocket) OnAtEnd(slot func(super func() bool) bool) {
	ok := C.QUdpSocket_override_virtual_atEnd(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUdpSocket_atEnd
func miqt_exec_callback_QUdpSocket_atEnd(self *C.QUdpSocket, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QUdpSocket{h: self}).callVirtualBase_AtEnd)

	return (C.bool)(virtualReturn)

}

func (this *QUdpSocket) callVirtualBase_Reset() bool {

	return (bool)(C.QUdpSocket_virtualbase_reset(unsafe.Pointer(this.h)))

}
func (this *QUdpSocket) OnReset(slot func(super func() bool) bool) {
	ok := C.QUdpSocket_override_virtual_reset(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUdpSocket_reset
func miqt_exec_callback_QUdpSocket_reset(self *C.QUdpSocket, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QUdpSocket{h: self}).callVirtualBase_Reset)

	return (C.bool)(virtualReturn)

}

func (this *QUdpSocket) callVirtualBase_CanReadLine() bool {

	return (bool)(C.QUdpSocket_virtualbase_canReadLine(unsafe.Pointer(this.h)))

}
func (this *QUdpSocket) OnCanReadLine(slot func(super func() bool) bool) {
	ok := C.QUdpSocket_override_virtual_canReadLine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUdpSocket_canReadLine
func miqt_exec_callback_QUdpSocket_canReadLine(self *C.QUdpSocket, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QUdpSocket{h: self}).callVirtualBase_CanReadLine)

	return (C.bool)(virtualReturn)

}

func (this *QUdpSocket) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QUdpSocket_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QUdpSocket) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QUdpSocket_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUdpSocket_event
func miqt_exec_callback_QUdpSocket_event(self *C.QUdpSocket, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QUdpSocket{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QUdpSocket) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QUdpSocket_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QUdpSocket) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QUdpSocket_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUdpSocket_eventFilter
func miqt_exec_callback_QUdpSocket_eventFilter(self *C.QUdpSocket, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QUdpSocket{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QUdpSocket) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QUdpSocket_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QUdpSocket) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QUdpSocket_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUdpSocket_timerEvent
func miqt_exec_callback_QUdpSocket_timerEvent(self *C.QUdpSocket, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QUdpSocket{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QUdpSocket) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QUdpSocket_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QUdpSocket) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QUdpSocket_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUdpSocket_childEvent
func miqt_exec_callback_QUdpSocket_childEvent(self *C.QUdpSocket, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QUdpSocket{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QUdpSocket) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QUdpSocket_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QUdpSocket) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QUdpSocket_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUdpSocket_customEvent
func miqt_exec_callback_QUdpSocket_customEvent(self *C.QUdpSocket, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QUdpSocket{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QUdpSocket) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QUdpSocket_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QUdpSocket) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QUdpSocket_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUdpSocket_connectNotify
func miqt_exec_callback_QUdpSocket_connectNotify(self *C.QUdpSocket, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QUdpSocket{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QUdpSocket) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QUdpSocket_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QUdpSocket) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QUdpSocket_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUdpSocket_disconnectNotify
func miqt_exec_callback_QUdpSocket_disconnectNotify(self *C.QUdpSocket, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QUdpSocket{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QUdpSocket) Delete() {
	C.QUdpSocket_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QUdpSocket) GoGC() {
	runtime.SetFinalizer(this, func(this *QUdpSocket) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
