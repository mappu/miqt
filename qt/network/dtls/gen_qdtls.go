package dtls

/*

#include "gen_qdtls.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"github.com/mappu/miqt/qt/network"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QDtlsError byte

const (
	QDtlsError__NoError                     QDtlsError = 0
	QDtlsError__InvalidInputParameters      QDtlsError = 1
	QDtlsError__InvalidOperation            QDtlsError = 2
	QDtlsError__UnderlyingSocketError       QDtlsError = 3
	QDtlsError__RemoteClosedConnectionError QDtlsError = 4
	QDtlsError__PeerVerificationError       QDtlsError = 5
	QDtlsError__TlsInitializationError      QDtlsError = 6
	QDtlsError__TlsFatalError               QDtlsError = 7
	QDtlsError__TlsNonFatalError            QDtlsError = 8
)

type QDtls__HandshakeState int

const (
	QDtls__HandshakeNotStarted    QDtls__HandshakeState = 0
	QDtls__HandshakeInProgress    QDtls__HandshakeState = 1
	QDtls__PeerVerificationFailed QDtls__HandshakeState = 2
	QDtls__HandshakeComplete      QDtls__HandshakeState = 3
)

type QDtlsClientVerifier struct {
	h *C.QDtlsClientVerifier
	*qt.QObject
}

func (this *QDtlsClientVerifier) cPointer() *C.QDtlsClientVerifier {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QDtlsClientVerifier) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQDtlsClientVerifier constructs the type using only CGO pointers.
func newQDtlsClientVerifier(h *C.QDtlsClientVerifier) *QDtlsClientVerifier {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QDtlsClientVerifier_virtbase(h, &outptr_QObject)

	return &QDtlsClientVerifier{h: h,
		QObject: qt.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQDtlsClientVerifier constructs the type using only unsafe pointers.
func UnsafeNewQDtlsClientVerifier(h unsafe.Pointer) *QDtlsClientVerifier {
	return newQDtlsClientVerifier((*C.QDtlsClientVerifier)(h))
}

// NewQDtlsClientVerifier constructs a new QDtlsClientVerifier object.
func NewQDtlsClientVerifier() *QDtlsClientVerifier {

	return newQDtlsClientVerifier(C.QDtlsClientVerifier_new())
}

// NewQDtlsClientVerifier2 constructs a new QDtlsClientVerifier object.
func NewQDtlsClientVerifier2(parent *qt.QObject) *QDtlsClientVerifier {

	return newQDtlsClientVerifier(C.QDtlsClientVerifier_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QDtlsClientVerifier) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QDtlsClientVerifier_metaObject(this.h)))
}

func (this *QDtlsClientVerifier) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QDtlsClientVerifier_metacast(this.h, param1_Cstring))
}

func QDtlsClientVerifier_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QDtlsClientVerifier_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDtlsClientVerifier_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QDtlsClientVerifier_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDtlsClientVerifier) SetCookieGeneratorParameters(params *QDtlsClientVerifier__GeneratorParameters) bool {
	return (bool)(C.QDtlsClientVerifier_setCookieGeneratorParameters(this.h, params.cPointer()))
}

func (this *QDtlsClientVerifier) CookieGeneratorParameters() *QDtlsClientVerifier__GeneratorParameters {
	_goptr := newQDtlsClientVerifier__GeneratorParameters(C.QDtlsClientVerifier_cookieGeneratorParameters(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDtlsClientVerifier) VerifyClient(socket *network.QUdpSocket, dgram []byte, address *network.QHostAddress, port uint16) bool {
	dgram_alias := C.struct_miqt_string{}
	if len(dgram) > 0 {
		dgram_alias.data = (*C.char)(unsafe.Pointer(&dgram[0]))
	} else {
		dgram_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	dgram_alias.len = C.size_t(len(dgram))
	return (bool)(C.QDtlsClientVerifier_verifyClient(this.h, (*C.QUdpSocket)(socket.UnsafePointer()), dgram_alias, (*C.QHostAddress)(address.UnsafePointer()), (C.ushort)(port)))
}

func (this *QDtlsClientVerifier) VerifiedHello() []byte {
	var _bytearray C.struct_miqt_string = C.QDtlsClientVerifier_verifiedHello(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QDtlsClientVerifier) DtlsError() QDtlsError {
	return (QDtlsError)(C.QDtlsClientVerifier_dtlsError(this.h))
}

func (this *QDtlsClientVerifier) DtlsErrorString() string {
	var _ms C.struct_miqt_string = C.QDtlsClientVerifier_dtlsErrorString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDtlsClientVerifier_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDtlsClientVerifier_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDtlsClientVerifier_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDtlsClientVerifier_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDtlsClientVerifier_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDtlsClientVerifier_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDtlsClientVerifier_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDtlsClientVerifier_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Sender can only be called from a QDtlsClientVerifier that was directly constructed.
func (this *QDtlsClientVerifier) Sender() *qt.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt.UnsafeNewQObject(unsafe.Pointer(C.QDtlsClientVerifier_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QDtlsClientVerifier that was directly constructed.
func (this *QDtlsClientVerifier) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QDtlsClientVerifier_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QDtlsClientVerifier that was directly constructed.
func (this *QDtlsClientVerifier) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QDtlsClientVerifier_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QDtlsClientVerifier that was directly constructed.
func (this *QDtlsClientVerifier) IsSignalConnected(signal *qt.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QDtlsClientVerifier_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QDtlsClientVerifier) callVirtualBase_Event(event *qt.QEvent) bool {

	return (bool)(C.QDtlsClientVerifier_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QDtlsClientVerifier) OnEvent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	ok := C.QDtlsClientVerifier_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDtlsClientVerifier_event
func miqt_exec_callback_QDtlsClientVerifier_event(self *C.QDtlsClientVerifier, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QDtlsClientVerifier{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QDtlsClientVerifier) callVirtualBase_EventFilter(watched *qt.QObject, event *qt.QEvent) bool {

	return (bool)(C.QDtlsClientVerifier_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QDtlsClientVerifier) OnEventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	ok := C.QDtlsClientVerifier_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDtlsClientVerifier_eventFilter
func miqt_exec_callback_QDtlsClientVerifier_eventFilter(self *C.QDtlsClientVerifier, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QDtlsClientVerifier{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QDtlsClientVerifier) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.QDtlsClientVerifier_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QDtlsClientVerifier) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	ok := C.QDtlsClientVerifier_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDtlsClientVerifier_timerEvent
func miqt_exec_callback_QDtlsClientVerifier_timerEvent(self *C.QDtlsClientVerifier, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QDtlsClientVerifier{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QDtlsClientVerifier) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QDtlsClientVerifier_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QDtlsClientVerifier) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	ok := C.QDtlsClientVerifier_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDtlsClientVerifier_childEvent
func miqt_exec_callback_QDtlsClientVerifier_childEvent(self *C.QDtlsClientVerifier, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QDtlsClientVerifier{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QDtlsClientVerifier) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QDtlsClientVerifier_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QDtlsClientVerifier) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QDtlsClientVerifier_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDtlsClientVerifier_customEvent
func miqt_exec_callback_QDtlsClientVerifier_customEvent(self *C.QDtlsClientVerifier, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QDtlsClientVerifier{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QDtlsClientVerifier) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QDtlsClientVerifier_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QDtlsClientVerifier) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QDtlsClientVerifier_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDtlsClientVerifier_connectNotify
func miqt_exec_callback_QDtlsClientVerifier_connectNotify(self *C.QDtlsClientVerifier, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QDtlsClientVerifier{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QDtlsClientVerifier) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QDtlsClientVerifier_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QDtlsClientVerifier) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QDtlsClientVerifier_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDtlsClientVerifier_disconnectNotify
func miqt_exec_callback_QDtlsClientVerifier_disconnectNotify(self *C.QDtlsClientVerifier, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QDtlsClientVerifier{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QDtlsClientVerifier) Delete() {
	C.QDtlsClientVerifier_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDtlsClientVerifier) GoGC() {
	runtime.SetFinalizer(this, func(this *QDtlsClientVerifier) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QDtls struct {
	h *C.QDtls
	*qt.QObject
}

func (this *QDtls) cPointer() *C.QDtls {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QDtls) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQDtls constructs the type using only CGO pointers.
func newQDtls(h *C.QDtls) *QDtls {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QDtls_virtbase(h, &outptr_QObject)

	return &QDtls{h: h,
		QObject: qt.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQDtls constructs the type using only unsafe pointers.
func UnsafeNewQDtls(h unsafe.Pointer) *QDtls {
	return newQDtls((*C.QDtls)(h))
}

// NewQDtls constructs a new QDtls object.
func NewQDtls(mode network.QSslSocket__SslMode) *QDtls {

	return newQDtls(C.QDtls_new((C.int)(mode)))
}

// NewQDtls2 constructs a new QDtls object.
func NewQDtls2(mode network.QSslSocket__SslMode, parent *qt.QObject) *QDtls {

	return newQDtls(C.QDtls_new2((C.int)(mode), (*C.QObject)(parent.UnsafePointer())))
}

func (this *QDtls) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QDtls_metaObject(this.h)))
}

func (this *QDtls) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QDtls_metacast(this.h, param1_Cstring))
}

func QDtls_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QDtls_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDtls_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QDtls_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDtls) SetPeer(address *network.QHostAddress, port uint16) bool {
	return (bool)(C.QDtls_setPeer(this.h, (*C.QHostAddress)(address.UnsafePointer()), (C.ushort)(port)))
}

func (this *QDtls) SetPeerVerificationName(name string) bool {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	return (bool)(C.QDtls_setPeerVerificationName(this.h, name_ms))
}

func (this *QDtls) PeerAddress() *network.QHostAddress {
	_goptr := network.UnsafeNewQHostAddress(unsafe.Pointer(C.QDtls_peerAddress(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDtls) PeerPort() uint16 {
	return (uint16)(C.QDtls_peerPort(this.h))
}

func (this *QDtls) PeerVerificationName() string {
	var _ms C.struct_miqt_string = C.QDtls_peerVerificationName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDtls) SslMode() network.QSslSocket__SslMode {
	return (network.QSslSocket__SslMode)(C.QDtls_sslMode(this.h))
}

func (this *QDtls) SetMtuHint(mtuHint uint16) {
	C.QDtls_setMtuHint(this.h, (C.ushort)(mtuHint))
}

func (this *QDtls) MtuHint() uint16 {
	return (uint16)(C.QDtls_mtuHint(this.h))
}

func (this *QDtls) SetCookieGeneratorParameters(params *QDtlsClientVerifier__GeneratorParameters) bool {
	return (bool)(C.QDtls_setCookieGeneratorParameters(this.h, params.cPointer()))
}

func (this *QDtls) CookieGeneratorParameters() *QDtlsClientVerifier__GeneratorParameters {
	_goptr := newQDtlsClientVerifier__GeneratorParameters(C.QDtls_cookieGeneratorParameters(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDtls) SetDtlsConfiguration(configuration *network.QSslConfiguration) bool {
	return (bool)(C.QDtls_setDtlsConfiguration(this.h, (*C.QSslConfiguration)(configuration.UnsafePointer())))
}

func (this *QDtls) DtlsConfiguration() *network.QSslConfiguration {
	_goptr := network.UnsafeNewQSslConfiguration(unsafe.Pointer(C.QDtls_dtlsConfiguration(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDtls) HandshakeState() QDtls__HandshakeState {
	return (QDtls__HandshakeState)(C.QDtls_handshakeState(this.h))
}

func (this *QDtls) DoHandshake(socket *network.QUdpSocket) bool {
	return (bool)(C.QDtls_doHandshake(this.h, (*C.QUdpSocket)(socket.UnsafePointer())))
}

func (this *QDtls) HandleTimeout(socket *network.QUdpSocket) bool {
	return (bool)(C.QDtls_handleTimeout(this.h, (*C.QUdpSocket)(socket.UnsafePointer())))
}

func (this *QDtls) ResumeHandshake(socket *network.QUdpSocket) bool {
	return (bool)(C.QDtls_resumeHandshake(this.h, (*C.QUdpSocket)(socket.UnsafePointer())))
}

func (this *QDtls) AbortHandshake(socket *network.QUdpSocket) bool {
	return (bool)(C.QDtls_abortHandshake(this.h, (*C.QUdpSocket)(socket.UnsafePointer())))
}

func (this *QDtls) Shutdown(socket *network.QUdpSocket) bool {
	return (bool)(C.QDtls_shutdown(this.h, (*C.QUdpSocket)(socket.UnsafePointer())))
}

func (this *QDtls) IsConnectionEncrypted() bool {
	return (bool)(C.QDtls_isConnectionEncrypted(this.h))
}

func (this *QDtls) SessionCipher() *network.QSslCipher {
	_goptr := network.UnsafeNewQSslCipher(unsafe.Pointer(C.QDtls_sessionCipher(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDtls) SessionProtocol() network.QSsl__SslProtocol {
	return (network.QSsl__SslProtocol)(C.QDtls_sessionProtocol(this.h))
}

func (this *QDtls) WriteDatagramEncrypted(socket *network.QUdpSocket, dgram []byte) int64 {
	dgram_alias := C.struct_miqt_string{}
	if len(dgram) > 0 {
		dgram_alias.data = (*C.char)(unsafe.Pointer(&dgram[0]))
	} else {
		dgram_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	dgram_alias.len = C.size_t(len(dgram))
	return (int64)(C.QDtls_writeDatagramEncrypted(this.h, (*C.QUdpSocket)(socket.UnsafePointer()), dgram_alias))
}

func (this *QDtls) DecryptDatagram(socket *network.QUdpSocket, dgram []byte) []byte {
	dgram_alias := C.struct_miqt_string{}
	if len(dgram) > 0 {
		dgram_alias.data = (*C.char)(unsafe.Pointer(&dgram[0]))
	} else {
		dgram_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	dgram_alias.len = C.size_t(len(dgram))
	var _bytearray C.struct_miqt_string = C.QDtls_decryptDatagram(this.h, (*C.QUdpSocket)(socket.UnsafePointer()), dgram_alias)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QDtls) DtlsError() QDtlsError {
	return (QDtlsError)(C.QDtls_dtlsError(this.h))
}

func (this *QDtls) DtlsErrorString() string {
	var _ms C.struct_miqt_string = C.QDtls_dtlsErrorString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDtls) PeerVerificationErrors() []network.QSslError {
	var _ma C.struct_miqt_array = C.QDtls_peerVerificationErrors(this.h)
	_ret := make([]network.QSslError, int(_ma.len))
	_outCast := (*[0xffff]*C.QSslError)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_vv_goptr := network.UnsafeNewQSslError(unsafe.Pointer(_outCast[i]))
		_vv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_vv_goptr
	}
	return _ret
}

func (this *QDtls) IgnoreVerificationErrors(errorsToIgnore []network.QSslError) {
	errorsToIgnore_CArray := (*[0xffff]*C.QSslError)(C.malloc(C.size_t(8 * len(errorsToIgnore))))
	defer C.free(unsafe.Pointer(errorsToIgnore_CArray))
	for i := range errorsToIgnore {
		errorsToIgnore_CArray[i] = (*C.QSslError)(errorsToIgnore[i].UnsafePointer())
	}
	errorsToIgnore_ma := C.struct_miqt_array{len: C.size_t(len(errorsToIgnore)), data: unsafe.Pointer(errorsToIgnore_CArray)}
	C.QDtls_ignoreVerificationErrors(this.h, errorsToIgnore_ma)
}

func (this *QDtls) PskRequired(authenticator *network.QSslPreSharedKeyAuthenticator) {
	C.QDtls_pskRequired(this.h, (*C.QSslPreSharedKeyAuthenticator)(authenticator.UnsafePointer()))
}
func (this *QDtls) OnPskRequired(slot func(authenticator *network.QSslPreSharedKeyAuthenticator)) {
	C.QDtls_connect_pskRequired(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDtls_pskRequired
func miqt_exec_callback_QDtls_pskRequired(cb C.intptr_t, authenticator *C.QSslPreSharedKeyAuthenticator) {
	gofunc, ok := cgo.Handle(cb).Value().(func(authenticator *network.QSslPreSharedKeyAuthenticator))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := network.UnsafeNewQSslPreSharedKeyAuthenticator(unsafe.Pointer(authenticator))

	gofunc(slotval1)
}

func (this *QDtls) HandshakeTimeout() {
	C.QDtls_handshakeTimeout(this.h)
}
func (this *QDtls) OnHandshakeTimeout(slot func()) {
	C.QDtls_connect_handshakeTimeout(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDtls_handshakeTimeout
func miqt_exec_callback_QDtls_handshakeTimeout(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func QDtls_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDtls_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDtls_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDtls_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDtls_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDtls_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDtls_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDtls_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDtls) SetPeer2(address *network.QHostAddress, port uint16, verificationName string) bool {
	verificationName_ms := C.struct_miqt_string{}
	verificationName_ms.data = C.CString(verificationName)
	verificationName_ms.len = C.size_t(len(verificationName))
	defer C.free(unsafe.Pointer(verificationName_ms.data))
	return (bool)(C.QDtls_setPeer2(this.h, (*C.QHostAddress)(address.UnsafePointer()), (C.ushort)(port), verificationName_ms))
}

func (this *QDtls) DoHandshake2(socket *network.QUdpSocket, dgram []byte) bool {
	dgram_alias := C.struct_miqt_string{}
	if len(dgram) > 0 {
		dgram_alias.data = (*C.char)(unsafe.Pointer(&dgram[0]))
	} else {
		dgram_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	dgram_alias.len = C.size_t(len(dgram))
	return (bool)(C.QDtls_doHandshake2(this.h, (*C.QUdpSocket)(socket.UnsafePointer()), dgram_alias))
}

// Sender can only be called from a QDtls that was directly constructed.
func (this *QDtls) Sender() *qt.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt.UnsafeNewQObject(unsafe.Pointer(C.QDtls_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QDtls that was directly constructed.
func (this *QDtls) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QDtls_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QDtls that was directly constructed.
func (this *QDtls) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QDtls_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QDtls that was directly constructed.
func (this *QDtls) IsSignalConnected(signal *qt.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QDtls_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QDtls) callVirtualBase_Event(event *qt.QEvent) bool {

	return (bool)(C.QDtls_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QDtls) OnEvent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	ok := C.QDtls_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDtls_event
func miqt_exec_callback_QDtls_event(self *C.QDtls, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QDtls{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QDtls) callVirtualBase_EventFilter(watched *qt.QObject, event *qt.QEvent) bool {

	return (bool)(C.QDtls_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QDtls) OnEventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	ok := C.QDtls_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDtls_eventFilter
func miqt_exec_callback_QDtls_eventFilter(self *C.QDtls, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QDtls{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QDtls) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.QDtls_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QDtls) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	ok := C.QDtls_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDtls_timerEvent
func miqt_exec_callback_QDtls_timerEvent(self *C.QDtls, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QDtls{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QDtls) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QDtls_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QDtls) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	ok := C.QDtls_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDtls_childEvent
func miqt_exec_callback_QDtls_childEvent(self *C.QDtls, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QDtls{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QDtls) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QDtls_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QDtls) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QDtls_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDtls_customEvent
func miqt_exec_callback_QDtls_customEvent(self *C.QDtls, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QDtls{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QDtls) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QDtls_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QDtls) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QDtls_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDtls_connectNotify
func miqt_exec_callback_QDtls_connectNotify(self *C.QDtls, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QDtls{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QDtls) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QDtls_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QDtls) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QDtls_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDtls_disconnectNotify
func miqt_exec_callback_QDtls_disconnectNotify(self *C.QDtls, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QDtls{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QDtls) Delete() {
	C.QDtls_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDtls) GoGC() {
	runtime.SetFinalizer(this, func(this *QDtls) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QDtlsClientVerifier__GeneratorParameters struct {
	h *C.QDtlsClientVerifier__GeneratorParameters
}

func (this *QDtlsClientVerifier__GeneratorParameters) cPointer() *C.QDtlsClientVerifier__GeneratorParameters {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QDtlsClientVerifier__GeneratorParameters) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQDtlsClientVerifier__GeneratorParameters constructs the type using only CGO pointers.
func newQDtlsClientVerifier__GeneratorParameters(h *C.QDtlsClientVerifier__GeneratorParameters) *QDtlsClientVerifier__GeneratorParameters {
	if h == nil {
		return nil
	}

	return &QDtlsClientVerifier__GeneratorParameters{h: h}
}

// UnsafeNewQDtlsClientVerifier__GeneratorParameters constructs the type using only unsafe pointers.
func UnsafeNewQDtlsClientVerifier__GeneratorParameters(h unsafe.Pointer) *QDtlsClientVerifier__GeneratorParameters {
	return newQDtlsClientVerifier__GeneratorParameters((*C.QDtlsClientVerifier__GeneratorParameters)(h))
}

// NewQDtlsClientVerifier__GeneratorParameters constructs a new QDtlsClientVerifier::GeneratorParameters object.
func NewQDtlsClientVerifier__GeneratorParameters() *QDtlsClientVerifier__GeneratorParameters {

	return newQDtlsClientVerifier__GeneratorParameters(C.QDtlsClientVerifier__GeneratorParameters_new())
}

// NewQDtlsClientVerifier__GeneratorParameters2 constructs a new QDtlsClientVerifier::GeneratorParameters object.
func NewQDtlsClientVerifier__GeneratorParameters2(a qt.QCryptographicHash__Algorithm, s []byte) *QDtlsClientVerifier__GeneratorParameters {
	s_alias := C.struct_miqt_string{}
	if len(s) > 0 {
		s_alias.data = (*C.char)(unsafe.Pointer(&s[0]))
	} else {
		s_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	s_alias.len = C.size_t(len(s))

	return newQDtlsClientVerifier__GeneratorParameters(C.QDtlsClientVerifier__GeneratorParameters_new2((C.int)(a), s_alias))
}

// NewQDtlsClientVerifier__GeneratorParameters3 constructs a new QDtlsClientVerifier::GeneratorParameters object.
func NewQDtlsClientVerifier__GeneratorParameters3(param1 *QDtlsClientVerifier__GeneratorParameters) *QDtlsClientVerifier__GeneratorParameters {

	return newQDtlsClientVerifier__GeneratorParameters(C.QDtlsClientVerifier__GeneratorParameters_new3(param1.cPointer()))
}

func (this *QDtlsClientVerifier__GeneratorParameters) Hash() qt.QCryptographicHash__Algorithm {
	return (qt.QCryptographicHash__Algorithm)(C.QDtlsClientVerifier__GeneratorParameters_hash(this.h))
}

func (this *QDtlsClientVerifier__GeneratorParameters) SetHash(hash qt.QCryptographicHash__Algorithm) {
	C.QDtlsClientVerifier__GeneratorParameters_setHash(this.h, (C.int)(hash))
}

func (this *QDtlsClientVerifier__GeneratorParameters) Secret() []byte {
	var secret_bytearray C.struct_miqt_string = C.QDtlsClientVerifier__GeneratorParameters_secret(this.h)
	secret_ret := C.GoBytes(unsafe.Pointer(secret_bytearray.data), C.int(int64(secret_bytearray.len)))
	C.free(unsafe.Pointer(secret_bytearray.data))
	return secret_ret
}

func (this *QDtlsClientVerifier__GeneratorParameters) SetSecret(secret []byte) {
	secret_alias := C.struct_miqt_string{}
	if len(secret) > 0 {
		secret_alias.data = (*C.char)(unsafe.Pointer(&secret[0]))
	} else {
		secret_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	secret_alias.len = C.size_t(len(secret))
	C.QDtlsClientVerifier__GeneratorParameters_setSecret(this.h, secret_alias)
}

func (this *QDtlsClientVerifier__GeneratorParameters) OperatorAssign(param1 *QDtlsClientVerifier__GeneratorParameters) {
	C.QDtlsClientVerifier__GeneratorParameters_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QDtlsClientVerifier__GeneratorParameters) Delete() {
	C.QDtlsClientVerifier__GeneratorParameters_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDtlsClientVerifier__GeneratorParameters) GoGC() {
	runtime.SetFinalizer(this, func(this *QDtlsClientVerifier__GeneratorParameters) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
