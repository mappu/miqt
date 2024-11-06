package network

/*

#include "gen_qsslsocket.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QSslSocket__SslMode int

const (
	QSslSocket__UnencryptedMode QSslSocket__SslMode = 0
	QSslSocket__SslClientMode   QSslSocket__SslMode = 1
	QSslSocket__SslServerMode   QSslSocket__SslMode = 2
)

type QSslSocket__PeerVerifyMode int

const (
	QSslSocket__VerifyNone     QSslSocket__PeerVerifyMode = 0
	QSslSocket__QueryPeer      QSslSocket__PeerVerifyMode = 1
	QSslSocket__VerifyPeer     QSslSocket__PeerVerifyMode = 2
	QSslSocket__AutoVerifyPeer QSslSocket__PeerVerifyMode = 3
)

type QSslSocket struct {
	h *C.QSslSocket
	*QTcpSocket
}

func (this *QSslSocket) cPointer() *C.QSslSocket {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QSslSocket) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQSslSocket(h *C.QSslSocket) *QSslSocket {
	if h == nil {
		return nil
	}
	return &QSslSocket{h: h, QTcpSocket: UnsafeNewQTcpSocket(unsafe.Pointer(h))}
}

func UnsafeNewQSslSocket(h unsafe.Pointer) *QSslSocket {
	return newQSslSocket((*C.QSslSocket)(h))
}

// NewQSslSocket constructs a new QSslSocket object.
func NewQSslSocket() *QSslSocket {
	ret := C.QSslSocket_new()
	return newQSslSocket(ret)
}

// NewQSslSocket2 constructs a new QSslSocket object.
func NewQSslSocket2(parent *qt6.QObject) *QSslSocket {
	ret := C.QSslSocket_new2((*C.QObject)(parent.UnsafePointer()))
	return newQSslSocket(ret)
}

func (this *QSslSocket) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QSslSocket_MetaObject(this.h)))
}

func (this *QSslSocket) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QSslSocket_Metacast(this.h, param1_Cstring))
}

func QSslSocket_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QSslSocket_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSslSocket) Resume() {
	C.QSslSocket_Resume(this.h)
}

func (this *QSslSocket) ConnectToHostEncrypted(hostName string, port uint16) {
	hostName_ms := C.struct_miqt_string{}
	hostName_ms.data = C.CString(hostName)
	hostName_ms.len = C.size_t(len(hostName))
	defer C.free(unsafe.Pointer(hostName_ms.data))
	C.QSslSocket_ConnectToHostEncrypted(this.h, hostName_ms, (C.uint16_t)(port))
}

func (this *QSslSocket) ConnectToHostEncrypted2(hostName string, port uint16, sslPeerName string) {
	hostName_ms := C.struct_miqt_string{}
	hostName_ms.data = C.CString(hostName)
	hostName_ms.len = C.size_t(len(hostName))
	defer C.free(unsafe.Pointer(hostName_ms.data))
	sslPeerName_ms := C.struct_miqt_string{}
	sslPeerName_ms.data = C.CString(sslPeerName)
	sslPeerName_ms.len = C.size_t(len(sslPeerName))
	defer C.free(unsafe.Pointer(sslPeerName_ms.data))
	C.QSslSocket_ConnectToHostEncrypted2(this.h, hostName_ms, (C.uint16_t)(port), sslPeerName_ms)
}

func (this *QSslSocket) SetSocketDescriptor(socketDescriptor uintptr) bool {
	return (bool)(C.QSslSocket_SetSocketDescriptor(this.h, (C.intptr_t)(socketDescriptor)))
}

func (this *QSslSocket) ConnectToHost(hostName string, port uint16) {
	hostName_ms := C.struct_miqt_string{}
	hostName_ms.data = C.CString(hostName)
	hostName_ms.len = C.size_t(len(hostName))
	defer C.free(unsafe.Pointer(hostName_ms.data))
	C.QSslSocket_ConnectToHost(this.h, hostName_ms, (C.uint16_t)(port))
}

func (this *QSslSocket) DisconnectFromHost() {
	C.QSslSocket_DisconnectFromHost(this.h)
}

func (this *QSslSocket) SetSocketOption(option QAbstractSocket__SocketOption, value *qt6.QVariant) {
	C.QSslSocket_SetSocketOption(this.h, (C.int)(option), (*C.QVariant)(value.UnsafePointer()))
}

func (this *QSslSocket) SocketOption(option QAbstractSocket__SocketOption) *qt6.QVariant {
	_ret := C.QSslSocket_SocketOption(this.h, (C.int)(option))
	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSslSocket) Mode() QSslSocket__SslMode {
	return (QSslSocket__SslMode)(C.QSslSocket_Mode(this.h))
}

func (this *QSslSocket) IsEncrypted() bool {
	return (bool)(C.QSslSocket_IsEncrypted(this.h))
}

func (this *QSslSocket) Protocol() QSsl__SslProtocol {
	return (QSsl__SslProtocol)(C.QSslSocket_Protocol(this.h))
}

func (this *QSslSocket) SetProtocol(protocol QSsl__SslProtocol) {
	C.QSslSocket_SetProtocol(this.h, (C.int)(protocol))
}

func (this *QSslSocket) PeerVerifyMode() QSslSocket__PeerVerifyMode {
	return (QSslSocket__PeerVerifyMode)(C.QSslSocket_PeerVerifyMode(this.h))
}

func (this *QSslSocket) SetPeerVerifyMode(mode QSslSocket__PeerVerifyMode) {
	C.QSslSocket_SetPeerVerifyMode(this.h, (C.int)(mode))
}

func (this *QSslSocket) PeerVerifyDepth() int {
	return (int)(C.QSslSocket_PeerVerifyDepth(this.h))
}

func (this *QSslSocket) SetPeerVerifyDepth(depth int) {
	C.QSslSocket_SetPeerVerifyDepth(this.h, (C.int)(depth))
}

func (this *QSslSocket) PeerVerifyName() string {
	var _ms C.struct_miqt_string = C.QSslSocket_PeerVerifyName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSslSocket) SetPeerVerifyName(hostName string) {
	hostName_ms := C.struct_miqt_string{}
	hostName_ms.data = C.CString(hostName)
	hostName_ms.len = C.size_t(len(hostName))
	defer C.free(unsafe.Pointer(hostName_ms.data))
	C.QSslSocket_SetPeerVerifyName(this.h, hostName_ms)
}

func (this *QSslSocket) BytesAvailable() int64 {
	return (int64)(C.QSslSocket_BytesAvailable(this.h))
}

func (this *QSslSocket) BytesToWrite() int64 {
	return (int64)(C.QSslSocket_BytesToWrite(this.h))
}

func (this *QSslSocket) CanReadLine() bool {
	return (bool)(C.QSslSocket_CanReadLine(this.h))
}

func (this *QSslSocket) Close() {
	C.QSslSocket_Close(this.h)
}

func (this *QSslSocket) AtEnd() bool {
	return (bool)(C.QSslSocket_AtEnd(this.h))
}

func (this *QSslSocket) SetReadBufferSize(size int64) {
	C.QSslSocket_SetReadBufferSize(this.h, (C.longlong)(size))
}

func (this *QSslSocket) EncryptedBytesAvailable() int64 {
	return (int64)(C.QSslSocket_EncryptedBytesAvailable(this.h))
}

func (this *QSslSocket) EncryptedBytesToWrite() int64 {
	return (int64)(C.QSslSocket_EncryptedBytesToWrite(this.h))
}

func (this *QSslSocket) SslConfiguration() *QSslConfiguration {
	_ret := C.QSslSocket_SslConfiguration(this.h)
	_goptr := newQSslConfiguration(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSslSocket) SetSslConfiguration(config *QSslConfiguration) {
	C.QSslSocket_SetSslConfiguration(this.h, config.cPointer())
}

func (this *QSslSocket) SetLocalCertificateChain(localChain []QSslCertificate) {
	localChain_CArray := (*[0xffff]*C.QSslCertificate)(C.malloc(C.size_t(8 * len(localChain))))
	defer C.free(unsafe.Pointer(localChain_CArray))
	for i := range localChain {
		localChain_CArray[i] = localChain[i].cPointer()
	}
	localChain_ma := C.struct_miqt_array{len: C.size_t(len(localChain)), data: unsafe.Pointer(localChain_CArray)}
	C.QSslSocket_SetLocalCertificateChain(this.h, localChain_ma)
}

func (this *QSslSocket) LocalCertificateChain() []QSslCertificate {
	var _ma C.struct_miqt_array = C.QSslSocket_LocalCertificateChain(this.h)
	_ret := make([]QSslCertificate, int(_ma.len))
	_outCast := (*[0xffff]*C.QSslCertificate)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQSslCertificate(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QSslSocket) SetLocalCertificate(certificate *QSslCertificate) {
	C.QSslSocket_SetLocalCertificate(this.h, certificate.cPointer())
}

func (this *QSslSocket) SetLocalCertificateWithFileName(fileName string) {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	C.QSslSocket_SetLocalCertificateWithFileName(this.h, fileName_ms)
}

func (this *QSslSocket) LocalCertificate() *QSslCertificate {
	_ret := C.QSslSocket_LocalCertificate(this.h)
	_goptr := newQSslCertificate(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSslSocket) PeerCertificate() *QSslCertificate {
	_ret := C.QSslSocket_PeerCertificate(this.h)
	_goptr := newQSslCertificate(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSslSocket) PeerCertificateChain() []QSslCertificate {
	var _ma C.struct_miqt_array = C.QSslSocket_PeerCertificateChain(this.h)
	_ret := make([]QSslCertificate, int(_ma.len))
	_outCast := (*[0xffff]*C.QSslCertificate)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQSslCertificate(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QSslSocket) SessionCipher() *QSslCipher {
	_ret := C.QSslSocket_SessionCipher(this.h)
	_goptr := newQSslCipher(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSslSocket) SessionProtocol() QSsl__SslProtocol {
	return (QSsl__SslProtocol)(C.QSslSocket_SessionProtocol(this.h))
}

func (this *QSslSocket) OcspResponses() []QOcspResponse {
	var _ma C.struct_miqt_array = C.QSslSocket_OcspResponses(this.h)
	_ret := make([]QOcspResponse, int(_ma.len))
	_outCast := (*[0xffff]*C.QOcspResponse)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQOcspResponse(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QSslSocket) SetPrivateKey(key *QSslKey) {
	C.QSslSocket_SetPrivateKey(this.h, key.cPointer())
}

func (this *QSslSocket) SetPrivateKeyWithFileName(fileName string) {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	C.QSslSocket_SetPrivateKeyWithFileName(this.h, fileName_ms)
}

func (this *QSslSocket) PrivateKey() *QSslKey {
	_ret := C.QSslSocket_PrivateKey(this.h)
	_goptr := newQSslKey(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSslSocket) WaitForConnected() bool {
	return (bool)(C.QSslSocket_WaitForConnected(this.h))
}

func (this *QSslSocket) WaitForEncrypted() bool {
	return (bool)(C.QSslSocket_WaitForEncrypted(this.h))
}

func (this *QSslSocket) WaitForReadyRead() bool {
	return (bool)(C.QSslSocket_WaitForReadyRead(this.h))
}

func (this *QSslSocket) WaitForBytesWritten() bool {
	return (bool)(C.QSslSocket_WaitForBytesWritten(this.h))
}

func (this *QSslSocket) WaitForDisconnected() bool {
	return (bool)(C.QSslSocket_WaitForDisconnected(this.h))
}

func (this *QSslSocket) SslHandshakeErrors() []QSslError {
	var _ma C.struct_miqt_array = C.QSslSocket_SslHandshakeErrors(this.h)
	_ret := make([]QSslError, int(_ma.len))
	_outCast := (*[0xffff]*C.QSslError)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQSslError(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func QSslSocket_SupportsSsl() bool {
	return (bool)(C.QSslSocket_SupportsSsl())
}

func QSslSocket_SslLibraryVersionNumber() int64 {
	return (int64)(C.QSslSocket_SslLibraryVersionNumber())
}

func QSslSocket_SslLibraryVersionString() string {
	var _ms C.struct_miqt_string = C.QSslSocket_SslLibraryVersionString()
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSslSocket_SslLibraryBuildVersionNumber() int64 {
	return (int64)(C.QSslSocket_SslLibraryBuildVersionNumber())
}

func QSslSocket_SslLibraryBuildVersionString() string {
	var _ms C.struct_miqt_string = C.QSslSocket_SslLibraryBuildVersionString()
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSslSocket_AvailableBackends() []string {
	var _ma C.struct_miqt_array = C.QSslSocket_AvailableBackends()
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func QSslSocket_ActiveBackend() string {
	var _ms C.struct_miqt_string = C.QSslSocket_ActiveBackend()
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSslSocket_SetActiveBackend(backendName string) bool {
	backendName_ms := C.struct_miqt_string{}
	backendName_ms.data = C.CString(backendName)
	backendName_ms.len = C.size_t(len(backendName))
	defer C.free(unsafe.Pointer(backendName_ms.data))
	return (bool)(C.QSslSocket_SetActiveBackend(backendName_ms))
}

func QSslSocket_SupportedProtocols() []QSsl__SslProtocol {
	var _ma C.struct_miqt_array = C.QSslSocket_SupportedProtocols()
	_ret := make([]QSsl__SslProtocol, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (QSsl__SslProtocol)(_outCast[i])
	}
	return _ret
}

func QSslSocket_IsProtocolSupported(protocol QSsl__SslProtocol) bool {
	return (bool)(C.QSslSocket_IsProtocolSupported((C.int)(protocol)))
}

func QSslSocket_ImplementedClasses() []QSsl__ImplementedClass {
	var _ma C.struct_miqt_array = C.QSslSocket_ImplementedClasses()
	_ret := make([]QSsl__ImplementedClass, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (QSsl__ImplementedClass)(_outCast[i])
	}
	return _ret
}

func QSslSocket_IsClassImplemented(cl QSsl__ImplementedClass) bool {
	return (bool)(C.QSslSocket_IsClassImplemented((C.int)(cl)))
}

func QSslSocket_SupportedFeatures() []QSsl__SupportedFeature {
	var _ma C.struct_miqt_array = C.QSslSocket_SupportedFeatures()
	_ret := make([]QSsl__SupportedFeature, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (QSsl__SupportedFeature)(_outCast[i])
	}
	return _ret
}

func QSslSocket_IsFeatureSupported(feat QSsl__SupportedFeature) bool {
	return (bool)(C.QSslSocket_IsFeatureSupported((C.int)(feat)))
}

func (this *QSslSocket) IgnoreSslErrors(errors []QSslError) {
	errors_CArray := (*[0xffff]*C.QSslError)(C.malloc(C.size_t(8 * len(errors))))
	defer C.free(unsafe.Pointer(errors_CArray))
	for i := range errors {
		errors_CArray[i] = errors[i].cPointer()
	}
	errors_ma := C.struct_miqt_array{len: C.size_t(len(errors)), data: unsafe.Pointer(errors_CArray)}
	C.QSslSocket_IgnoreSslErrors(this.h, errors_ma)
}

func (this *QSslSocket) ContinueInterruptedHandshake() {
	C.QSslSocket_ContinueInterruptedHandshake(this.h)
}

func (this *QSslSocket) StartClientEncryption() {
	C.QSslSocket_StartClientEncryption(this.h)
}

func (this *QSslSocket) StartServerEncryption() {
	C.QSslSocket_StartServerEncryption(this.h)
}

func (this *QSslSocket) IgnoreSslErrors2() {
	C.QSslSocket_IgnoreSslErrors2(this.h)
}

func (this *QSslSocket) Encrypted() {
	C.QSslSocket_Encrypted(this.h)
}
func (this *QSslSocket) OnEncrypted(slot func()) {
	C.QSslSocket_connect_Encrypted(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSslSocket_Encrypted
func miqt_exec_callback_QSslSocket_Encrypted(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QSslSocket) PeerVerifyError(error *QSslError) {
	C.QSslSocket_PeerVerifyError(this.h, error.cPointer())
}
func (this *QSslSocket) OnPeerVerifyError(slot func(error *QSslError)) {
	C.QSslSocket_connect_PeerVerifyError(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSslSocket_PeerVerifyError
func miqt_exec_callback_QSslSocket_PeerVerifyError(cb C.intptr_t, error *C.QSslError) {
	gofunc, ok := cgo.Handle(cb).Value().(func(error *QSslError))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQSslError(unsafe.Pointer(error))

	gofunc(slotval1)
}

func (this *QSslSocket) SslErrors(errors []QSslError) {
	errors_CArray := (*[0xffff]*C.QSslError)(C.malloc(C.size_t(8 * len(errors))))
	defer C.free(unsafe.Pointer(errors_CArray))
	for i := range errors {
		errors_CArray[i] = errors[i].cPointer()
	}
	errors_ma := C.struct_miqt_array{len: C.size_t(len(errors)), data: unsafe.Pointer(errors_CArray)}
	C.QSslSocket_SslErrors(this.h, errors_ma)
}
func (this *QSslSocket) OnSslErrors(slot func(errors []QSslError)) {
	C.QSslSocket_connect_SslErrors(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSslSocket_SslErrors
func miqt_exec_callback_QSslSocket_SslErrors(cb C.intptr_t, errors C.struct_miqt_array) {
	gofunc, ok := cgo.Handle(cb).Value().(func(errors []QSslError))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var errors_ma C.struct_miqt_array = errors
	errors_ret := make([]QSslError, int(errors_ma.len))
	errors_outCast := (*[0xffff]*C.QSslError)(unsafe.Pointer(errors_ma.data)) // hey ya
	for i := 0; i < int(errors_ma.len); i++ {
		errors_lv_ret := errors_outCast[i]
		errors_lv_goptr := newQSslError(errors_lv_ret)
		errors_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		errors_ret[i] = *errors_lv_goptr
	}
	slotval1 := errors_ret

	gofunc(slotval1)
}

func (this *QSslSocket) ModeChanged(newMode QSslSocket__SslMode) {
	C.QSslSocket_ModeChanged(this.h, (C.int)(newMode))
}
func (this *QSslSocket) OnModeChanged(slot func(newMode QSslSocket__SslMode)) {
	C.QSslSocket_connect_ModeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSslSocket_ModeChanged
func miqt_exec_callback_QSslSocket_ModeChanged(cb C.intptr_t, newMode C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(newMode QSslSocket__SslMode))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QSslSocket__SslMode)(newMode)

	gofunc(slotval1)
}

func (this *QSslSocket) EncryptedBytesWritten(totalBytes int64) {
	C.QSslSocket_EncryptedBytesWritten(this.h, (C.longlong)(totalBytes))
}
func (this *QSslSocket) OnEncryptedBytesWritten(slot func(totalBytes int64)) {
	C.QSslSocket_connect_EncryptedBytesWritten(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSslSocket_EncryptedBytesWritten
func miqt_exec_callback_QSslSocket_EncryptedBytesWritten(cb C.intptr_t, totalBytes C.longlong) {
	gofunc, ok := cgo.Handle(cb).Value().(func(totalBytes int64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int64)(totalBytes)

	gofunc(slotval1)
}

func (this *QSslSocket) PreSharedKeyAuthenticationRequired(authenticator *QSslPreSharedKeyAuthenticator) {
	C.QSslSocket_PreSharedKeyAuthenticationRequired(this.h, authenticator.cPointer())
}
func (this *QSslSocket) OnPreSharedKeyAuthenticationRequired(slot func(authenticator *QSslPreSharedKeyAuthenticator)) {
	C.QSslSocket_connect_PreSharedKeyAuthenticationRequired(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSslSocket_PreSharedKeyAuthenticationRequired
func miqt_exec_callback_QSslSocket_PreSharedKeyAuthenticationRequired(cb C.intptr_t, authenticator *C.QSslPreSharedKeyAuthenticator) {
	gofunc, ok := cgo.Handle(cb).Value().(func(authenticator *QSslPreSharedKeyAuthenticator))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQSslPreSharedKeyAuthenticator(unsafe.Pointer(authenticator))

	gofunc(slotval1)
}

func (this *QSslSocket) NewSessionTicketReceived() {
	C.QSslSocket_NewSessionTicketReceived(this.h)
}
func (this *QSslSocket) OnNewSessionTicketReceived(slot func()) {
	C.QSslSocket_connect_NewSessionTicketReceived(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSslSocket_NewSessionTicketReceived
func miqt_exec_callback_QSslSocket_NewSessionTicketReceived(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QSslSocket) AlertSent(level QSsl__AlertLevel, typeVal QSsl__AlertType, description string) {
	description_ms := C.struct_miqt_string{}
	description_ms.data = C.CString(description)
	description_ms.len = C.size_t(len(description))
	defer C.free(unsafe.Pointer(description_ms.data))
	C.QSslSocket_AlertSent(this.h, (C.int)(level), (C.int)(typeVal), description_ms)
}
func (this *QSslSocket) OnAlertSent(slot func(level QSsl__AlertLevel, typeVal QSsl__AlertType, description string)) {
	C.QSslSocket_connect_AlertSent(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSslSocket_AlertSent
func miqt_exec_callback_QSslSocket_AlertSent(cb C.intptr_t, level C.int, typeVal C.int, description C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(level QSsl__AlertLevel, typeVal QSsl__AlertType, description string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QSsl__AlertLevel)(level)

	slotval2 := (QSsl__AlertType)(typeVal)

	var description_ms C.struct_miqt_string = description
	description_ret := C.GoStringN(description_ms.data, C.int(int64(description_ms.len)))
	C.free(unsafe.Pointer(description_ms.data))
	slotval3 := description_ret

	gofunc(slotval1, slotval2, slotval3)
}

func (this *QSslSocket) AlertReceived(level QSsl__AlertLevel, typeVal QSsl__AlertType, description string) {
	description_ms := C.struct_miqt_string{}
	description_ms.data = C.CString(description)
	description_ms.len = C.size_t(len(description))
	defer C.free(unsafe.Pointer(description_ms.data))
	C.QSslSocket_AlertReceived(this.h, (C.int)(level), (C.int)(typeVal), description_ms)
}
func (this *QSslSocket) OnAlertReceived(slot func(level QSsl__AlertLevel, typeVal QSsl__AlertType, description string)) {
	C.QSslSocket_connect_AlertReceived(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSslSocket_AlertReceived
func miqt_exec_callback_QSslSocket_AlertReceived(cb C.intptr_t, level C.int, typeVal C.int, description C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(level QSsl__AlertLevel, typeVal QSsl__AlertType, description string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QSsl__AlertLevel)(level)

	slotval2 := (QSsl__AlertType)(typeVal)

	var description_ms C.struct_miqt_string = description
	description_ret := C.GoStringN(description_ms.data, C.int(int64(description_ms.len)))
	C.free(unsafe.Pointer(description_ms.data))
	slotval3 := description_ret

	gofunc(slotval1, slotval2, slotval3)
}

func (this *QSslSocket) HandshakeInterruptedOnError(error *QSslError) {
	C.QSslSocket_HandshakeInterruptedOnError(this.h, error.cPointer())
}
func (this *QSslSocket) OnHandshakeInterruptedOnError(slot func(error *QSslError)) {
	C.QSslSocket_connect_HandshakeInterruptedOnError(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSslSocket_HandshakeInterruptedOnError
func miqt_exec_callback_QSslSocket_HandshakeInterruptedOnError(cb C.intptr_t, error *C.QSslError) {
	gofunc, ok := cgo.Handle(cb).Value().(func(error *QSslError))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQSslError(unsafe.Pointer(error))

	gofunc(slotval1)
}

func QSslSocket_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSslSocket_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSslSocket_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSslSocket_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSslSocket) ConnectToHostEncrypted3(hostName string, port uint16, mode qt6.QIODeviceBase__OpenModeFlag) {
	hostName_ms := C.struct_miqt_string{}
	hostName_ms.data = C.CString(hostName)
	hostName_ms.len = C.size_t(len(hostName))
	defer C.free(unsafe.Pointer(hostName_ms.data))
	C.QSslSocket_ConnectToHostEncrypted3(this.h, hostName_ms, (C.uint16_t)(port), (C.int)(mode))
}

func (this *QSslSocket) ConnectToHostEncrypted4(hostName string, port uint16, mode qt6.QIODeviceBase__OpenModeFlag, protocol QAbstractSocket__NetworkLayerProtocol) {
	hostName_ms := C.struct_miqt_string{}
	hostName_ms.data = C.CString(hostName)
	hostName_ms.len = C.size_t(len(hostName))
	defer C.free(unsafe.Pointer(hostName_ms.data))
	C.QSslSocket_ConnectToHostEncrypted4(this.h, hostName_ms, (C.uint16_t)(port), (C.int)(mode), (C.int)(protocol))
}

func (this *QSslSocket) ConnectToHostEncrypted42(hostName string, port uint16, sslPeerName string, mode qt6.QIODeviceBase__OpenModeFlag) {
	hostName_ms := C.struct_miqt_string{}
	hostName_ms.data = C.CString(hostName)
	hostName_ms.len = C.size_t(len(hostName))
	defer C.free(unsafe.Pointer(hostName_ms.data))
	sslPeerName_ms := C.struct_miqt_string{}
	sslPeerName_ms.data = C.CString(sslPeerName)
	sslPeerName_ms.len = C.size_t(len(sslPeerName))
	defer C.free(unsafe.Pointer(sslPeerName_ms.data))
	C.QSslSocket_ConnectToHostEncrypted42(this.h, hostName_ms, (C.uint16_t)(port), sslPeerName_ms, (C.int)(mode))
}

func (this *QSslSocket) ConnectToHostEncrypted5(hostName string, port uint16, sslPeerName string, mode qt6.QIODeviceBase__OpenModeFlag, protocol QAbstractSocket__NetworkLayerProtocol) {
	hostName_ms := C.struct_miqt_string{}
	hostName_ms.data = C.CString(hostName)
	hostName_ms.len = C.size_t(len(hostName))
	defer C.free(unsafe.Pointer(hostName_ms.data))
	sslPeerName_ms := C.struct_miqt_string{}
	sslPeerName_ms.data = C.CString(sslPeerName)
	sslPeerName_ms.len = C.size_t(len(sslPeerName))
	defer C.free(unsafe.Pointer(sslPeerName_ms.data))
	C.QSslSocket_ConnectToHostEncrypted5(this.h, hostName_ms, (C.uint16_t)(port), sslPeerName_ms, (C.int)(mode), (C.int)(protocol))
}

func (this *QSslSocket) SetSocketDescriptor2(socketDescriptor uintptr, state QAbstractSocket__SocketState) bool {
	return (bool)(C.QSslSocket_SetSocketDescriptor2(this.h, (C.intptr_t)(socketDescriptor), (C.int)(state)))
}

func (this *QSslSocket) SetSocketDescriptor3(socketDescriptor uintptr, state QAbstractSocket__SocketState, openMode qt6.QIODeviceBase__OpenModeFlag) bool {
	return (bool)(C.QSslSocket_SetSocketDescriptor3(this.h, (C.intptr_t)(socketDescriptor), (C.int)(state), (C.int)(openMode)))
}

func (this *QSslSocket) ConnectToHost3(hostName string, port uint16, openMode qt6.QIODeviceBase__OpenModeFlag) {
	hostName_ms := C.struct_miqt_string{}
	hostName_ms.data = C.CString(hostName)
	hostName_ms.len = C.size_t(len(hostName))
	defer C.free(unsafe.Pointer(hostName_ms.data))
	C.QSslSocket_ConnectToHost3(this.h, hostName_ms, (C.uint16_t)(port), (C.int)(openMode))
}

func (this *QSslSocket) ConnectToHost4(hostName string, port uint16, openMode qt6.QIODeviceBase__OpenModeFlag, protocol QAbstractSocket__NetworkLayerProtocol) {
	hostName_ms := C.struct_miqt_string{}
	hostName_ms.data = C.CString(hostName)
	hostName_ms.len = C.size_t(len(hostName))
	defer C.free(unsafe.Pointer(hostName_ms.data))
	C.QSslSocket_ConnectToHost4(this.h, hostName_ms, (C.uint16_t)(port), (C.int)(openMode), (C.int)(protocol))
}

func (this *QSslSocket) SetLocalCertificate2(fileName string, format QSsl__EncodingFormat) {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	C.QSslSocket_SetLocalCertificate2(this.h, fileName_ms, (C.int)(format))
}

func (this *QSslSocket) SetPrivateKey2(fileName string, algorithm QSsl__KeyAlgorithm) {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	C.QSslSocket_SetPrivateKey2(this.h, fileName_ms, (C.int)(algorithm))
}

func (this *QSslSocket) SetPrivateKey3(fileName string, algorithm QSsl__KeyAlgorithm, format QSsl__EncodingFormat) {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	C.QSslSocket_SetPrivateKey3(this.h, fileName_ms, (C.int)(algorithm), (C.int)(format))
}

func (this *QSslSocket) SetPrivateKey4(fileName string, algorithm QSsl__KeyAlgorithm, format QSsl__EncodingFormat, passPhrase []byte) {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	passPhrase_alias := C.struct_miqt_string{}
	passPhrase_alias.data = (*C.char)(unsafe.Pointer(&passPhrase[0]))
	passPhrase_alias.len = C.size_t(len(passPhrase))
	C.QSslSocket_SetPrivateKey4(this.h, fileName_ms, (C.int)(algorithm), (C.int)(format), passPhrase_alias)
}

func (this *QSslSocket) WaitForConnected1(msecs int) bool {
	return (bool)(C.QSslSocket_WaitForConnected1(this.h, (C.int)(msecs)))
}

func (this *QSslSocket) WaitForEncrypted1(msecs int) bool {
	return (bool)(C.QSslSocket_WaitForEncrypted1(this.h, (C.int)(msecs)))
}

func (this *QSslSocket) WaitForReadyRead1(msecs int) bool {
	return (bool)(C.QSslSocket_WaitForReadyRead1(this.h, (C.int)(msecs)))
}

func (this *QSslSocket) WaitForBytesWritten1(msecs int) bool {
	return (bool)(C.QSslSocket_WaitForBytesWritten1(this.h, (C.int)(msecs)))
}

func (this *QSslSocket) WaitForDisconnected1(msecs int) bool {
	return (bool)(C.QSslSocket_WaitForDisconnected1(this.h, (C.int)(msecs)))
}

func QSslSocket_SupportedProtocols1(backendName string) []QSsl__SslProtocol {
	backendName_ms := C.struct_miqt_string{}
	backendName_ms.data = C.CString(backendName)
	backendName_ms.len = C.size_t(len(backendName))
	defer C.free(unsafe.Pointer(backendName_ms.data))
	var _ma C.struct_miqt_array = C.QSslSocket_SupportedProtocols1(backendName_ms)
	_ret := make([]QSsl__SslProtocol, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (QSsl__SslProtocol)(_outCast[i])
	}
	return _ret
}

func QSslSocket_IsProtocolSupported2(protocol QSsl__SslProtocol, backendName string) bool {
	backendName_ms := C.struct_miqt_string{}
	backendName_ms.data = C.CString(backendName)
	backendName_ms.len = C.size_t(len(backendName))
	defer C.free(unsafe.Pointer(backendName_ms.data))
	return (bool)(C.QSslSocket_IsProtocolSupported2((C.int)(protocol), backendName_ms))
}

func QSslSocket_ImplementedClasses1(backendName string) []QSsl__ImplementedClass {
	backendName_ms := C.struct_miqt_string{}
	backendName_ms.data = C.CString(backendName)
	backendName_ms.len = C.size_t(len(backendName))
	defer C.free(unsafe.Pointer(backendName_ms.data))
	var _ma C.struct_miqt_array = C.QSslSocket_ImplementedClasses1(backendName_ms)
	_ret := make([]QSsl__ImplementedClass, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (QSsl__ImplementedClass)(_outCast[i])
	}
	return _ret
}

func QSslSocket_IsClassImplemented2(cl QSsl__ImplementedClass, backendName string) bool {
	backendName_ms := C.struct_miqt_string{}
	backendName_ms.data = C.CString(backendName)
	backendName_ms.len = C.size_t(len(backendName))
	defer C.free(unsafe.Pointer(backendName_ms.data))
	return (bool)(C.QSslSocket_IsClassImplemented2((C.int)(cl), backendName_ms))
}

func QSslSocket_SupportedFeatures1(backendName string) []QSsl__SupportedFeature {
	backendName_ms := C.struct_miqt_string{}
	backendName_ms.data = C.CString(backendName)
	backendName_ms.len = C.size_t(len(backendName))
	defer C.free(unsafe.Pointer(backendName_ms.data))
	var _ma C.struct_miqt_array = C.QSslSocket_SupportedFeatures1(backendName_ms)
	_ret := make([]QSsl__SupportedFeature, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (QSsl__SupportedFeature)(_outCast[i])
	}
	return _ret
}

func QSslSocket_IsFeatureSupported2(feat QSsl__SupportedFeature, backendName string) bool {
	backendName_ms := C.struct_miqt_string{}
	backendName_ms.data = C.CString(backendName)
	backendName_ms.len = C.size_t(len(backendName))
	defer C.free(unsafe.Pointer(backendName_ms.data))
	return (bool)(C.QSslSocket_IsFeatureSupported2((C.int)(feat), backendName_ms))
}

// Delete this object from C++ memory.
func (this *QSslSocket) Delete() {
	C.QSslSocket_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSslSocket) GoGC() {
	runtime.SetFinalizer(this, func(this *QSslSocket) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
