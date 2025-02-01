package network

/*

#include "gen_qdtls.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
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
	*qt6.QObject
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
		QObject: qt6.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
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
func NewQDtlsClientVerifier2(parent *qt6.QObject) *QDtlsClientVerifier {

	return newQDtlsClientVerifier(C.QDtlsClientVerifier_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QDtlsClientVerifier) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QDtlsClientVerifier_metaObject(this.h)))
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

func (this *QDtlsClientVerifier) SetCookieGeneratorParameters(params *QDtlsClientVerifier__GeneratorParameters) bool {
	return (bool)(C.QDtlsClientVerifier_setCookieGeneratorParameters(this.h, params.cPointer()))
}

func (this *QDtlsClientVerifier) CookieGeneratorParameters() *QDtlsClientVerifier__GeneratorParameters {
	_goptr := newQDtlsClientVerifier__GeneratorParameters(C.QDtlsClientVerifier_cookieGeneratorParameters(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDtlsClientVerifier) VerifyClient(socket *QUdpSocket, dgram []byte, address *QHostAddress, port uint16) bool {
	dgram_alias := C.struct_miqt_string{}
	if len(dgram) > 0 {
		dgram_alias.data = (*C.char)(unsafe.Pointer(&dgram[0]))
	} else {
		dgram_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	dgram_alias.len = C.size_t(len(dgram))
	return (bool)(C.QDtlsClientVerifier_verifyClient(this.h, socket.cPointer(), dgram_alias, address.cPointer(), (C.uint16_t)(port)))
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

func (this *QDtlsClientVerifier) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QDtlsClientVerifier_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QDtlsClientVerifier) Onevent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QDtlsClientVerifier_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDtlsClientVerifier_event
func miqt_exec_callback_QDtlsClientVerifier_event(self *C.QDtlsClientVerifier, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QDtlsClientVerifier{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QDtlsClientVerifier) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QDtlsClientVerifier_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QDtlsClientVerifier) OneventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QDtlsClientVerifier_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDtlsClientVerifier_eventFilter
func miqt_exec_callback_QDtlsClientVerifier_eventFilter(self *C.QDtlsClientVerifier, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QDtlsClientVerifier{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QDtlsClientVerifier) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QDtlsClientVerifier_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QDtlsClientVerifier) OntimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QDtlsClientVerifier_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDtlsClientVerifier_timerEvent
func miqt_exec_callback_QDtlsClientVerifier_timerEvent(self *C.QDtlsClientVerifier, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QDtlsClientVerifier{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QDtlsClientVerifier) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QDtlsClientVerifier_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QDtlsClientVerifier) OnchildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QDtlsClientVerifier_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDtlsClientVerifier_childEvent
func miqt_exec_callback_QDtlsClientVerifier_childEvent(self *C.QDtlsClientVerifier, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QDtlsClientVerifier{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QDtlsClientVerifier) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QDtlsClientVerifier_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QDtlsClientVerifier) OncustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QDtlsClientVerifier_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDtlsClientVerifier_customEvent
func miqt_exec_callback_QDtlsClientVerifier_customEvent(self *C.QDtlsClientVerifier, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QDtlsClientVerifier{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QDtlsClientVerifier) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QDtlsClientVerifier_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QDtlsClientVerifier) OnconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QDtlsClientVerifier_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDtlsClientVerifier_connectNotify
func miqt_exec_callback_QDtlsClientVerifier_connectNotify(self *C.QDtlsClientVerifier, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QDtlsClientVerifier{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QDtlsClientVerifier) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QDtlsClientVerifier_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QDtlsClientVerifier) OndisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QDtlsClientVerifier_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDtlsClientVerifier_disconnectNotify
func miqt_exec_callback_QDtlsClientVerifier_disconnectNotify(self *C.QDtlsClientVerifier, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

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
	*qt6.QObject
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
		QObject: qt6.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQDtls constructs the type using only unsafe pointers.
func UnsafeNewQDtls(h unsafe.Pointer) *QDtls {
	return newQDtls((*C.QDtls)(h))
}

// NewQDtls constructs a new QDtls object.
func NewQDtls(mode QSslSocket__SslMode) *QDtls {

	return newQDtls(C.QDtls_new((C.int)(mode)))
}

// NewQDtls2 constructs a new QDtls object.
func NewQDtls2(mode QSslSocket__SslMode, parent *qt6.QObject) *QDtls {

	return newQDtls(C.QDtls_new2((C.int)(mode), (*C.QObject)(parent.UnsafePointer())))
}

func (this *QDtls) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QDtls_metaObject(this.h)))
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

func (this *QDtls) SetPeer(address *QHostAddress, port uint16) bool {
	return (bool)(C.QDtls_setPeer(this.h, address.cPointer(), (C.uint16_t)(port)))
}

func (this *QDtls) SetPeerVerificationName(name string) bool {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	return (bool)(C.QDtls_setPeerVerificationName(this.h, name_ms))
}

func (this *QDtls) PeerAddress() *QHostAddress {
	_goptr := newQHostAddress(C.QDtls_peerAddress(this.h))
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

func (this *QDtls) SslMode() QSslSocket__SslMode {
	return (QSslSocket__SslMode)(C.QDtls_sslMode(this.h))
}

func (this *QDtls) SetMtuHint(mtuHint uint16) {
	C.QDtls_setMtuHint(this.h, (C.uint16_t)(mtuHint))
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

func (this *QDtls) SetDtlsConfiguration(configuration *QSslConfiguration) bool {
	return (bool)(C.QDtls_setDtlsConfiguration(this.h, configuration.cPointer()))
}

func (this *QDtls) DtlsConfiguration() *QSslConfiguration {
	_goptr := newQSslConfiguration(C.QDtls_dtlsConfiguration(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDtls) HandshakeState() QDtls__HandshakeState {
	return (QDtls__HandshakeState)(C.QDtls_handshakeState(this.h))
}

func (this *QDtls) DoHandshake(socket *QUdpSocket) bool {
	return (bool)(C.QDtls_doHandshake(this.h, socket.cPointer()))
}

func (this *QDtls) HandleTimeout(socket *QUdpSocket) bool {
	return (bool)(C.QDtls_handleTimeout(this.h, socket.cPointer()))
}

func (this *QDtls) ResumeHandshake(socket *QUdpSocket) bool {
	return (bool)(C.QDtls_resumeHandshake(this.h, socket.cPointer()))
}

func (this *QDtls) AbortHandshake(socket *QUdpSocket) bool {
	return (bool)(C.QDtls_abortHandshake(this.h, socket.cPointer()))
}

func (this *QDtls) Shutdown(socket *QUdpSocket) bool {
	return (bool)(C.QDtls_shutdown(this.h, socket.cPointer()))
}

func (this *QDtls) IsConnectionEncrypted() bool {
	return (bool)(C.QDtls_isConnectionEncrypted(this.h))
}

func (this *QDtls) SessionCipher() *QSslCipher {
	_goptr := newQSslCipher(C.QDtls_sessionCipher(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDtls) SessionProtocol() QSsl__SslProtocol {
	return (QSsl__SslProtocol)(C.QDtls_sessionProtocol(this.h))
}

func (this *QDtls) WriteDatagramEncrypted(socket *QUdpSocket, dgram []byte) int64 {
	dgram_alias := C.struct_miqt_string{}
	if len(dgram) > 0 {
		dgram_alias.data = (*C.char)(unsafe.Pointer(&dgram[0]))
	} else {
		dgram_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	dgram_alias.len = C.size_t(len(dgram))
	return (int64)(C.QDtls_writeDatagramEncrypted(this.h, socket.cPointer(), dgram_alias))
}

func (this *QDtls) DecryptDatagram(socket *QUdpSocket, dgram []byte) []byte {
	dgram_alias := C.struct_miqt_string{}
	if len(dgram) > 0 {
		dgram_alias.data = (*C.char)(unsafe.Pointer(&dgram[0]))
	} else {
		dgram_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	dgram_alias.len = C.size_t(len(dgram))
	var _bytearray C.struct_miqt_string = C.QDtls_decryptDatagram(this.h, socket.cPointer(), dgram_alias)
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

func (this *QDtls) PeerVerificationErrors() []QSslError {
	var _ma C.struct_miqt_array = C.QDtls_peerVerificationErrors(this.h)
	_ret := make([]QSslError, int(_ma.len))
	_outCast := (*[0xffff]*C.QSslError)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQSslError(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QDtls) IgnoreVerificationErrors(errorsToIgnore []QSslError) {
	errorsToIgnore_CArray := (*[0xffff]*C.QSslError)(C.malloc(C.size_t(8 * len(errorsToIgnore))))
	defer C.free(unsafe.Pointer(errorsToIgnore_CArray))
	for i := range errorsToIgnore {
		errorsToIgnore_CArray[i] = errorsToIgnore[i].cPointer()
	}
	errorsToIgnore_ma := C.struct_miqt_array{len: C.size_t(len(errorsToIgnore)), data: unsafe.Pointer(errorsToIgnore_CArray)}
	C.QDtls_ignoreVerificationErrors(this.h, errorsToIgnore_ma)
}

func (this *QDtls) PskRequired(authenticator *QSslPreSharedKeyAuthenticator) {
	C.QDtls_pskRequired(this.h, authenticator.cPointer())
}
func (this *QDtls) OnPskRequired(slot func(authenticator *QSslPreSharedKeyAuthenticator)) {
	C.QDtls_connect_pskRequired(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDtls_pskRequired
func miqt_exec_callback_QDtls_pskRequired(cb C.intptr_t, authenticator *C.QSslPreSharedKeyAuthenticator) {
	gofunc, ok := cgo.Handle(cb).Value().(func(authenticator *QSslPreSharedKeyAuthenticator))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQSslPreSharedKeyAuthenticator(authenticator)

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

func (this *QDtls) SetPeer3(address *QHostAddress, port uint16, verificationName string) bool {
	verificationName_ms := C.struct_miqt_string{}
	verificationName_ms.data = C.CString(verificationName)
	verificationName_ms.len = C.size_t(len(verificationName))
	defer C.free(unsafe.Pointer(verificationName_ms.data))
	return (bool)(C.QDtls_setPeer3(this.h, address.cPointer(), (C.uint16_t)(port), verificationName_ms))
}

func (this *QDtls) DoHandshake2(socket *QUdpSocket, dgram []byte) bool {
	dgram_alias := C.struct_miqt_string{}
	if len(dgram) > 0 {
		dgram_alias.data = (*C.char)(unsafe.Pointer(&dgram[0]))
	} else {
		dgram_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	dgram_alias.len = C.size_t(len(dgram))
	return (bool)(C.QDtls_doHandshake2(this.h, socket.cPointer(), dgram_alias))
}

func (this *QDtls) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QDtls_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QDtls) Onevent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QDtls_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDtls_event
func miqt_exec_callback_QDtls_event(self *C.QDtls, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QDtls{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QDtls) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QDtls_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QDtls) OneventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QDtls_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDtls_eventFilter
func miqt_exec_callback_QDtls_eventFilter(self *C.QDtls, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QDtls{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QDtls) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QDtls_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QDtls) OntimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QDtls_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDtls_timerEvent
func miqt_exec_callback_QDtls_timerEvent(self *C.QDtls, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QDtls{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QDtls) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QDtls_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QDtls) OnchildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QDtls_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDtls_childEvent
func miqt_exec_callback_QDtls_childEvent(self *C.QDtls, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QDtls{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QDtls) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QDtls_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QDtls) OncustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QDtls_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDtls_customEvent
func miqt_exec_callback_QDtls_customEvent(self *C.QDtls, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QDtls{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QDtls) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QDtls_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QDtls) OnconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QDtls_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDtls_connectNotify
func miqt_exec_callback_QDtls_connectNotify(self *C.QDtls, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QDtls{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QDtls) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QDtls_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QDtls) OndisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QDtls_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDtls_disconnectNotify
func miqt_exec_callback_QDtls_disconnectNotify(self *C.QDtls, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

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
func NewQDtlsClientVerifier__GeneratorParameters2(a qt6.QCryptographicHash__Algorithm, s []byte) *QDtlsClientVerifier__GeneratorParameters {
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
