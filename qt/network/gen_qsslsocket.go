package network

/*

#include "gen_qsslsocket.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
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

// newQSslSocket constructs the type using only CGO pointers.
func newQSslSocket(h *C.QSslSocket) *QSslSocket {
	if h == nil {
		return nil
	}
	var outptr_QTcpSocket *C.QTcpSocket = nil
	C.QSslSocket_virtbase(h, &outptr_QTcpSocket)

	return &QSslSocket{h: h,
		QTcpSocket: newQTcpSocket(outptr_QTcpSocket)}
}

// UnsafeNewQSslSocket constructs the type using only unsafe pointers.
func UnsafeNewQSslSocket(h unsafe.Pointer) *QSslSocket {
	return newQSslSocket((*C.QSslSocket)(h))
}

// NewQSslSocket constructs a new QSslSocket object.
func NewQSslSocket() *QSslSocket {

	return newQSslSocket(C.QSslSocket_new())
}

// NewQSslSocket2 constructs a new QSslSocket object.
func NewQSslSocket2(parent *qt.QObject) *QSslSocket {

	return newQSslSocket(C.QSslSocket_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QSslSocket) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QSslSocket_MetaObject(this.h)))
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

func QSslSocket_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QSslSocket_TrUtf8(s_Cstring)
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

func (this *QSslSocket) SetSocketDescriptor(socketDescriptor uintptr, state QAbstractSocket__SocketState, openMode qt.QIODevice__OpenModeFlag) bool {
	return (bool)(C.QSslSocket_SetSocketDescriptor(this.h, (C.intptr_t)(socketDescriptor), (C.int)(state), (C.int)(openMode)))
}

func (this *QSslSocket) ConnectToHost(hostName string, port uint16, openMode qt.QIODevice__OpenModeFlag, protocol QAbstractSocket__NetworkLayerProtocol) {
	hostName_ms := C.struct_miqt_string{}
	hostName_ms.data = C.CString(hostName)
	hostName_ms.len = C.size_t(len(hostName))
	defer C.free(unsafe.Pointer(hostName_ms.data))
	C.QSslSocket_ConnectToHost(this.h, hostName_ms, (C.uint16_t)(port), (C.int)(openMode), (C.int)(protocol))
}

func (this *QSslSocket) DisconnectFromHost() {
	C.QSslSocket_DisconnectFromHost(this.h)
}

func (this *QSslSocket) SetSocketOption(option QAbstractSocket__SocketOption, value *qt.QVariant) {
	C.QSslSocket_SetSocketOption(this.h, (C.int)(option), (*C.QVariant)(value.UnsafePointer()))
}

func (this *QSslSocket) SocketOption(option QAbstractSocket__SocketOption) *qt.QVariant {
	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QSslSocket_SocketOption(this.h, (C.int)(option))))
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

func (this *QSslSocket) Flush() bool {
	return (bool)(C.QSslSocket_Flush(this.h))
}

func (this *QSslSocket) Abort() {
	C.QSslSocket_Abort(this.h)
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
	_goptr := newQSslConfiguration(C.QSslSocket_SslConfiguration(this.h))
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
		_lv_goptr := newQSslCertificate(_outCast[i])
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
	_goptr := newQSslCertificate(C.QSslSocket_LocalCertificate(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSslSocket) PeerCertificate() *QSslCertificate {
	_goptr := newQSslCertificate(C.QSslSocket_PeerCertificate(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSslSocket) PeerCertificateChain() []QSslCertificate {
	var _ma C.struct_miqt_array = C.QSslSocket_PeerCertificateChain(this.h)
	_ret := make([]QSslCertificate, int(_ma.len))
	_outCast := (*[0xffff]*C.QSslCertificate)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQSslCertificate(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QSslSocket) SessionCipher() *QSslCipher {
	_goptr := newQSslCipher(C.QSslSocket_SessionCipher(this.h))
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
		_vv_goptr := newQOcspResponse(_outCast[i])
		_vv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_vv_goptr
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
	_goptr := newQSslKey(C.QSslSocket_PrivateKey(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSslSocket) Ciphers() []QSslCipher {
	var _ma C.struct_miqt_array = C.QSslSocket_Ciphers(this.h)
	_ret := make([]QSslCipher, int(_ma.len))
	_outCast := (*[0xffff]*C.QSslCipher)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQSslCipher(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QSslSocket) SetCiphers(ciphers []QSslCipher) {
	ciphers_CArray := (*[0xffff]*C.QSslCipher)(C.malloc(C.size_t(8 * len(ciphers))))
	defer C.free(unsafe.Pointer(ciphers_CArray))
	for i := range ciphers {
		ciphers_CArray[i] = ciphers[i].cPointer()
	}
	ciphers_ma := C.struct_miqt_array{len: C.size_t(len(ciphers)), data: unsafe.Pointer(ciphers_CArray)}
	C.QSslSocket_SetCiphers(this.h, ciphers_ma)
}

func (this *QSslSocket) SetCiphersWithCiphers(ciphers string) {
	ciphers_ms := C.struct_miqt_string{}
	ciphers_ms.data = C.CString(ciphers)
	ciphers_ms.len = C.size_t(len(ciphers))
	defer C.free(unsafe.Pointer(ciphers_ms.data))
	C.QSslSocket_SetCiphersWithCiphers(this.h, ciphers_ms)
}

func QSslSocket_SetDefaultCiphers(ciphers []QSslCipher) {
	ciphers_CArray := (*[0xffff]*C.QSslCipher)(C.malloc(C.size_t(8 * len(ciphers))))
	defer C.free(unsafe.Pointer(ciphers_CArray))
	for i := range ciphers {
		ciphers_CArray[i] = ciphers[i].cPointer()
	}
	ciphers_ma := C.struct_miqt_array{len: C.size_t(len(ciphers)), data: unsafe.Pointer(ciphers_CArray)}
	C.QSslSocket_SetDefaultCiphers(ciphers_ma)
}

func QSslSocket_DefaultCiphers() []QSslCipher {
	var _ma C.struct_miqt_array = C.QSslSocket_DefaultCiphers()
	_ret := make([]QSslCipher, int(_ma.len))
	_outCast := (*[0xffff]*C.QSslCipher)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQSslCipher(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func QSslSocket_SupportedCiphers() []QSslCipher {
	var _ma C.struct_miqt_array = C.QSslSocket_SupportedCiphers()
	_ret := make([]QSslCipher, int(_ma.len))
	_outCast := (*[0xffff]*C.QSslCipher)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQSslCipher(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QSslSocket) AddCaCertificates(path string) bool {
	path_ms := C.struct_miqt_string{}
	path_ms.data = C.CString(path)
	path_ms.len = C.size_t(len(path))
	defer C.free(unsafe.Pointer(path_ms.data))
	return (bool)(C.QSslSocket_AddCaCertificates(this.h, path_ms))
}

func (this *QSslSocket) AddCaCertificate(certificate *QSslCertificate) {
	C.QSslSocket_AddCaCertificate(this.h, certificate.cPointer())
}

func (this *QSslSocket) AddCaCertificatesWithCertificates(certificates []QSslCertificate) {
	certificates_CArray := (*[0xffff]*C.QSslCertificate)(C.malloc(C.size_t(8 * len(certificates))))
	defer C.free(unsafe.Pointer(certificates_CArray))
	for i := range certificates {
		certificates_CArray[i] = certificates[i].cPointer()
	}
	certificates_ma := C.struct_miqt_array{len: C.size_t(len(certificates)), data: unsafe.Pointer(certificates_CArray)}
	C.QSslSocket_AddCaCertificatesWithCertificates(this.h, certificates_ma)
}

func (this *QSslSocket) SetCaCertificates(certificates []QSslCertificate) {
	certificates_CArray := (*[0xffff]*C.QSslCertificate)(C.malloc(C.size_t(8 * len(certificates))))
	defer C.free(unsafe.Pointer(certificates_CArray))
	for i := range certificates {
		certificates_CArray[i] = certificates[i].cPointer()
	}
	certificates_ma := C.struct_miqt_array{len: C.size_t(len(certificates)), data: unsafe.Pointer(certificates_CArray)}
	C.QSslSocket_SetCaCertificates(this.h, certificates_ma)
}

func (this *QSslSocket) CaCertificates() []QSslCertificate {
	var _ma C.struct_miqt_array = C.QSslSocket_CaCertificates(this.h)
	_ret := make([]QSslCertificate, int(_ma.len))
	_outCast := (*[0xffff]*C.QSslCertificate)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQSslCertificate(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func QSslSocket_AddDefaultCaCertificates(path string) bool {
	path_ms := C.struct_miqt_string{}
	path_ms.data = C.CString(path)
	path_ms.len = C.size_t(len(path))
	defer C.free(unsafe.Pointer(path_ms.data))
	return (bool)(C.QSslSocket_AddDefaultCaCertificates(path_ms))
}

func QSslSocket_AddDefaultCaCertificate(certificate *QSslCertificate) {
	C.QSslSocket_AddDefaultCaCertificate(certificate.cPointer())
}

func QSslSocket_AddDefaultCaCertificatesWithCertificates(certificates []QSslCertificate) {
	certificates_CArray := (*[0xffff]*C.QSslCertificate)(C.malloc(C.size_t(8 * len(certificates))))
	defer C.free(unsafe.Pointer(certificates_CArray))
	for i := range certificates {
		certificates_CArray[i] = certificates[i].cPointer()
	}
	certificates_ma := C.struct_miqt_array{len: C.size_t(len(certificates)), data: unsafe.Pointer(certificates_CArray)}
	C.QSslSocket_AddDefaultCaCertificatesWithCertificates(certificates_ma)
}

func QSslSocket_SetDefaultCaCertificates(certificates []QSslCertificate) {
	certificates_CArray := (*[0xffff]*C.QSslCertificate)(C.malloc(C.size_t(8 * len(certificates))))
	defer C.free(unsafe.Pointer(certificates_CArray))
	for i := range certificates {
		certificates_CArray[i] = certificates[i].cPointer()
	}
	certificates_ma := C.struct_miqt_array{len: C.size_t(len(certificates)), data: unsafe.Pointer(certificates_CArray)}
	C.QSslSocket_SetDefaultCaCertificates(certificates_ma)
}

func QSslSocket_DefaultCaCertificates() []QSslCertificate {
	var _ma C.struct_miqt_array = C.QSslSocket_DefaultCaCertificates()
	_ret := make([]QSslCertificate, int(_ma.len))
	_outCast := (*[0xffff]*C.QSslCertificate)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQSslCertificate(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func QSslSocket_SystemCaCertificates() []QSslCertificate {
	var _ma C.struct_miqt_array = C.QSslSocket_SystemCaCertificates()
	_ret := make([]QSslCertificate, int(_ma.len))
	_outCast := (*[0xffff]*C.QSslCertificate)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQSslCertificate(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QSslSocket) WaitForConnected(msecs int) bool {
	return (bool)(C.QSslSocket_WaitForConnected(this.h, (C.int)(msecs)))
}

func (this *QSslSocket) WaitForEncrypted() bool {
	return (bool)(C.QSslSocket_WaitForEncrypted(this.h))
}

func (this *QSslSocket) WaitForReadyRead(msecs int) bool {
	return (bool)(C.QSslSocket_WaitForReadyRead(this.h, (C.int)(msecs)))
}

func (this *QSslSocket) WaitForBytesWritten(msecs int) bool {
	return (bool)(C.QSslSocket_WaitForBytesWritten(this.h, (C.int)(msecs)))
}

func (this *QSslSocket) WaitForDisconnected(msecs int) bool {
	return (bool)(C.QSslSocket_WaitForDisconnected(this.h, (C.int)(msecs)))
}

func (this *QSslSocket) SslErrors() []QSslError {
	var _ma C.struct_miqt_array = C.QSslSocket_SslErrors(this.h)
	_ret := make([]QSslError, int(_ma.len))
	_outCast := (*[0xffff]*C.QSslError)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQSslError(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QSslSocket) SslHandshakeErrors() []QSslError {
	var _ma C.struct_miqt_array = C.QSslSocket_SslHandshakeErrors(this.h)
	_ret := make([]QSslError, int(_ma.len))
	_outCast := (*[0xffff]*C.QSslError)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQSslError(_outCast[i])
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

func (this *QSslSocket) IgnoreSslErrors(errors []QSslError) {
	errors_CArray := (*[0xffff]*C.QSslError)(C.malloc(C.size_t(8 * len(errors))))
	defer C.free(unsafe.Pointer(errors_CArray))
	for i := range errors {
		errors_CArray[i] = errors[i].cPointer()
	}
	errors_ma := C.struct_miqt_array{len: C.size_t(len(errors)), data: unsafe.Pointer(errors_CArray)}
	C.QSslSocket_IgnoreSslErrors(this.h, errors_ma)
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
	slotval1 := newQSslError(error)

	gofunc(slotval1)
}

func (this *QSslSocket) SslErrorsWithErrors(errors []QSslError) {
	errors_CArray := (*[0xffff]*C.QSslError)(C.malloc(C.size_t(8 * len(errors))))
	defer C.free(unsafe.Pointer(errors_CArray))
	for i := range errors {
		errors_CArray[i] = errors[i].cPointer()
	}
	errors_ma := C.struct_miqt_array{len: C.size_t(len(errors)), data: unsafe.Pointer(errors_CArray)}
	C.QSslSocket_SslErrorsWithErrors(this.h, errors_ma)
}
func (this *QSslSocket) OnSslErrorsWithErrors(slot func(errors []QSslError)) {
	C.QSslSocket_connect_SslErrorsWithErrors(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSslSocket_SslErrorsWithErrors
func miqt_exec_callback_QSslSocket_SslErrorsWithErrors(cb C.intptr_t, errors C.struct_miqt_array) {
	gofunc, ok := cgo.Handle(cb).Value().(func(errors []QSslError))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var errors_ma C.struct_miqt_array = errors
	errors_ret := make([]QSslError, int(errors_ma.len))
	errors_outCast := (*[0xffff]*C.QSslError)(unsafe.Pointer(errors_ma.data)) // hey ya
	for i := 0; i < int(errors_ma.len); i++ {
		errors_lv_goptr := newQSslError(errors_outCast[i])
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
	slotval1 := newQSslPreSharedKeyAuthenticator(authenticator)

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

func QSslSocket_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSslSocket_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSslSocket_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSslSocket_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSslSocket) ConnectToHostEncrypted3(hostName string, port uint16, mode qt.QIODevice__OpenModeFlag) {
	hostName_ms := C.struct_miqt_string{}
	hostName_ms.data = C.CString(hostName)
	hostName_ms.len = C.size_t(len(hostName))
	defer C.free(unsafe.Pointer(hostName_ms.data))
	C.QSslSocket_ConnectToHostEncrypted3(this.h, hostName_ms, (C.uint16_t)(port), (C.int)(mode))
}

func (this *QSslSocket) ConnectToHostEncrypted4(hostName string, port uint16, mode qt.QIODevice__OpenModeFlag, protocol QAbstractSocket__NetworkLayerProtocol) {
	hostName_ms := C.struct_miqt_string{}
	hostName_ms.data = C.CString(hostName)
	hostName_ms.len = C.size_t(len(hostName))
	defer C.free(unsafe.Pointer(hostName_ms.data))
	C.QSslSocket_ConnectToHostEncrypted4(this.h, hostName_ms, (C.uint16_t)(port), (C.int)(mode), (C.int)(protocol))
}

func (this *QSslSocket) ConnectToHostEncrypted42(hostName string, port uint16, sslPeerName string, mode qt.QIODevice__OpenModeFlag) {
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

func (this *QSslSocket) ConnectToHostEncrypted5(hostName string, port uint16, sslPeerName string, mode qt.QIODevice__OpenModeFlag, protocol QAbstractSocket__NetworkLayerProtocol) {
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
	if len(passPhrase) > 0 {
		passPhrase_alias.data = (*C.char)(unsafe.Pointer(&passPhrase[0]))
	} else {
		passPhrase_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	passPhrase_alias.len = C.size_t(len(passPhrase))
	C.QSslSocket_SetPrivateKey4(this.h, fileName_ms, (C.int)(algorithm), (C.int)(format), passPhrase_alias)
}

func (this *QSslSocket) AddCaCertificates2(path string, format QSsl__EncodingFormat) bool {
	path_ms := C.struct_miqt_string{}
	path_ms.data = C.CString(path)
	path_ms.len = C.size_t(len(path))
	defer C.free(unsafe.Pointer(path_ms.data))
	return (bool)(C.QSslSocket_AddCaCertificates2(this.h, path_ms, (C.int)(format)))
}

func (this *QSslSocket) AddCaCertificates3(path string, format QSsl__EncodingFormat, syntax qt.QRegExp__PatternSyntax) bool {
	path_ms := C.struct_miqt_string{}
	path_ms.data = C.CString(path)
	path_ms.len = C.size_t(len(path))
	defer C.free(unsafe.Pointer(path_ms.data))
	return (bool)(C.QSslSocket_AddCaCertificates3(this.h, path_ms, (C.int)(format), (C.int)(syntax)))
}

func QSslSocket_AddDefaultCaCertificates2(path string, format QSsl__EncodingFormat) bool {
	path_ms := C.struct_miqt_string{}
	path_ms.data = C.CString(path)
	path_ms.len = C.size_t(len(path))
	defer C.free(unsafe.Pointer(path_ms.data))
	return (bool)(C.QSslSocket_AddDefaultCaCertificates2(path_ms, (C.int)(format)))
}

func QSslSocket_AddDefaultCaCertificates3(path string, format QSsl__EncodingFormat, syntax qt.QRegExp__PatternSyntax) bool {
	path_ms := C.struct_miqt_string{}
	path_ms.data = C.CString(path)
	path_ms.len = C.size_t(len(path))
	defer C.free(unsafe.Pointer(path_ms.data))
	return (bool)(C.QSslSocket_AddDefaultCaCertificates3(path_ms, (C.int)(format), (C.int)(syntax)))
}

func (this *QSslSocket) WaitForEncrypted1(msecs int) bool {
	return (bool)(C.QSslSocket_WaitForEncrypted1(this.h, (C.int)(msecs)))
}

func (this *QSslSocket) callVirtualBase_Resume() {

	C.QSslSocket_virtualbase_Resume(unsafe.Pointer(this.h))

}
func (this *QSslSocket) OnResume(slot func(super func())) {
	ok := C.QSslSocket_override_virtual_Resume(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSslSocket_Resume
func miqt_exec_callback_QSslSocket_Resume(self *C.QSslSocket, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QSslSocket{h: self}).callVirtualBase_Resume)

}

func (this *QSslSocket) callVirtualBase_SetSocketDescriptor(socketDescriptor uintptr, state QAbstractSocket__SocketState, openMode qt.QIODevice__OpenModeFlag) bool {

	return (bool)(C.QSslSocket_virtualbase_SetSocketDescriptor(unsafe.Pointer(this.h), (C.intptr_t)(socketDescriptor), (C.int)(state), (C.int)(openMode)))

}
func (this *QSslSocket) OnSetSocketDescriptor(slot func(super func(socketDescriptor uintptr, state QAbstractSocket__SocketState, openMode qt.QIODevice__OpenModeFlag) bool, socketDescriptor uintptr, state QAbstractSocket__SocketState, openMode qt.QIODevice__OpenModeFlag) bool) {
	ok := C.QSslSocket_override_virtual_SetSocketDescriptor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSslSocket_SetSocketDescriptor
func miqt_exec_callback_QSslSocket_SetSocketDescriptor(self *C.QSslSocket, cb C.intptr_t, socketDescriptor C.intptr_t, state C.int, openMode C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(socketDescriptor uintptr, state QAbstractSocket__SocketState, openMode qt.QIODevice__OpenModeFlag) bool, socketDescriptor uintptr, state QAbstractSocket__SocketState, openMode qt.QIODevice__OpenModeFlag) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (uintptr)(socketDescriptor)

	slotval2 := (QAbstractSocket__SocketState)(state)

	slotval3 := (qt.QIODevice__OpenModeFlag)(openMode)

	virtualReturn := gofunc((&QSslSocket{h: self}).callVirtualBase_SetSocketDescriptor, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QSslSocket) callVirtualBase_ConnectToHost(hostName string, port uint16, openMode qt.QIODevice__OpenModeFlag, protocol QAbstractSocket__NetworkLayerProtocol) {
	hostName_ms := C.struct_miqt_string{}
	hostName_ms.data = C.CString(hostName)
	hostName_ms.len = C.size_t(len(hostName))
	defer C.free(unsafe.Pointer(hostName_ms.data))

	C.QSslSocket_virtualbase_ConnectToHost(unsafe.Pointer(this.h), hostName_ms, (C.uint16_t)(port), (C.int)(openMode), (C.int)(protocol))

}
func (this *QSslSocket) OnConnectToHost(slot func(super func(hostName string, port uint16, openMode qt.QIODevice__OpenModeFlag, protocol QAbstractSocket__NetworkLayerProtocol), hostName string, port uint16, openMode qt.QIODevice__OpenModeFlag, protocol QAbstractSocket__NetworkLayerProtocol)) {
	ok := C.QSslSocket_override_virtual_ConnectToHost(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSslSocket_ConnectToHost
func miqt_exec_callback_QSslSocket_ConnectToHost(self *C.QSslSocket, cb C.intptr_t, hostName C.struct_miqt_string, port C.uint16_t, openMode C.int, protocol C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(hostName string, port uint16, openMode qt.QIODevice__OpenModeFlag, protocol QAbstractSocket__NetworkLayerProtocol), hostName string, port uint16, openMode qt.QIODevice__OpenModeFlag, protocol QAbstractSocket__NetworkLayerProtocol))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var hostName_ms C.struct_miqt_string = hostName
	hostName_ret := C.GoStringN(hostName_ms.data, C.int(int64(hostName_ms.len)))
	C.free(unsafe.Pointer(hostName_ms.data))
	slotval1 := hostName_ret
	slotval2 := (uint16)(port)

	slotval3 := (qt.QIODevice__OpenModeFlag)(openMode)

	slotval4 := (QAbstractSocket__NetworkLayerProtocol)(protocol)

	gofunc((&QSslSocket{h: self}).callVirtualBase_ConnectToHost, slotval1, slotval2, slotval3, slotval4)

}

func (this *QSslSocket) callVirtualBase_DisconnectFromHost() {

	C.QSslSocket_virtualbase_DisconnectFromHost(unsafe.Pointer(this.h))

}
func (this *QSslSocket) OnDisconnectFromHost(slot func(super func())) {
	ok := C.QSslSocket_override_virtual_DisconnectFromHost(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSslSocket_DisconnectFromHost
func miqt_exec_callback_QSslSocket_DisconnectFromHost(self *C.QSslSocket, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QSslSocket{h: self}).callVirtualBase_DisconnectFromHost)

}

func (this *QSslSocket) callVirtualBase_SetSocketOption(option QAbstractSocket__SocketOption, value *qt.QVariant) {

	C.QSslSocket_virtualbase_SetSocketOption(unsafe.Pointer(this.h), (C.int)(option), (*C.QVariant)(value.UnsafePointer()))

}
func (this *QSslSocket) OnSetSocketOption(slot func(super func(option QAbstractSocket__SocketOption, value *qt.QVariant), option QAbstractSocket__SocketOption, value *qt.QVariant)) {
	ok := C.QSslSocket_override_virtual_SetSocketOption(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSslSocket_SetSocketOption
func miqt_exec_callback_QSslSocket_SetSocketOption(self *C.QSslSocket, cb C.intptr_t, option C.int, value *C.QVariant) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(option QAbstractSocket__SocketOption, value *qt.QVariant), option QAbstractSocket__SocketOption, value *qt.QVariant))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAbstractSocket__SocketOption)(option)

	slotval2 := qt.UnsafeNewQVariant(unsafe.Pointer(value))

	gofunc((&QSslSocket{h: self}).callVirtualBase_SetSocketOption, slotval1, slotval2)

}

func (this *QSslSocket) callVirtualBase_SocketOption(option QAbstractSocket__SocketOption) *qt.QVariant {

	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QSslSocket_virtualbase_SocketOption(unsafe.Pointer(this.h), (C.int)(option))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSslSocket) OnSocketOption(slot func(super func(option QAbstractSocket__SocketOption) *qt.QVariant, option QAbstractSocket__SocketOption) *qt.QVariant) {
	ok := C.QSslSocket_override_virtual_SocketOption(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSslSocket_SocketOption
func miqt_exec_callback_QSslSocket_SocketOption(self *C.QSslSocket, cb C.intptr_t, option C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(option QAbstractSocket__SocketOption) *qt.QVariant, option QAbstractSocket__SocketOption) *qt.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAbstractSocket__SocketOption)(option)

	virtualReturn := gofunc((&QSslSocket{h: self}).callVirtualBase_SocketOption, slotval1)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}

func (this *QSslSocket) callVirtualBase_BytesAvailable() int64 {

	return (int64)(C.QSslSocket_virtualbase_BytesAvailable(unsafe.Pointer(this.h)))

}
func (this *QSslSocket) OnBytesAvailable(slot func(super func() int64) int64) {
	ok := C.QSslSocket_override_virtual_BytesAvailable(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSslSocket_BytesAvailable
func miqt_exec_callback_QSslSocket_BytesAvailable(self *C.QSslSocket, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSslSocket{h: self}).callVirtualBase_BytesAvailable)

	return (C.longlong)(virtualReturn)

}

func (this *QSslSocket) callVirtualBase_BytesToWrite() int64 {

	return (int64)(C.QSslSocket_virtualbase_BytesToWrite(unsafe.Pointer(this.h)))

}
func (this *QSslSocket) OnBytesToWrite(slot func(super func() int64) int64) {
	ok := C.QSslSocket_override_virtual_BytesToWrite(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSslSocket_BytesToWrite
func miqt_exec_callback_QSslSocket_BytesToWrite(self *C.QSslSocket, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSslSocket{h: self}).callVirtualBase_BytesToWrite)

	return (C.longlong)(virtualReturn)

}

func (this *QSslSocket) callVirtualBase_CanReadLine() bool {

	return (bool)(C.QSslSocket_virtualbase_CanReadLine(unsafe.Pointer(this.h)))

}
func (this *QSslSocket) OnCanReadLine(slot func(super func() bool) bool) {
	ok := C.QSslSocket_override_virtual_CanReadLine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSslSocket_CanReadLine
func miqt_exec_callback_QSslSocket_CanReadLine(self *C.QSslSocket, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSslSocket{h: self}).callVirtualBase_CanReadLine)

	return (C.bool)(virtualReturn)

}

func (this *QSslSocket) callVirtualBase_Close() {

	C.QSslSocket_virtualbase_Close(unsafe.Pointer(this.h))

}
func (this *QSslSocket) OnClose(slot func(super func())) {
	ok := C.QSslSocket_override_virtual_Close(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSslSocket_Close
func miqt_exec_callback_QSslSocket_Close(self *C.QSslSocket, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QSslSocket{h: self}).callVirtualBase_Close)

}

func (this *QSslSocket) callVirtualBase_AtEnd() bool {

	return (bool)(C.QSslSocket_virtualbase_AtEnd(unsafe.Pointer(this.h)))

}
func (this *QSslSocket) OnAtEnd(slot func(super func() bool) bool) {
	ok := C.QSslSocket_override_virtual_AtEnd(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSslSocket_AtEnd
func miqt_exec_callback_QSslSocket_AtEnd(self *C.QSslSocket, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSslSocket{h: self}).callVirtualBase_AtEnd)

	return (C.bool)(virtualReturn)

}

func (this *QSslSocket) callVirtualBase_SetReadBufferSize(size int64) {

	C.QSslSocket_virtualbase_SetReadBufferSize(unsafe.Pointer(this.h), (C.longlong)(size))

}
func (this *QSslSocket) OnSetReadBufferSize(slot func(super func(size int64), size int64)) {
	ok := C.QSslSocket_override_virtual_SetReadBufferSize(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSslSocket_SetReadBufferSize
func miqt_exec_callback_QSslSocket_SetReadBufferSize(self *C.QSslSocket, cb C.intptr_t, size C.longlong) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(size int64), size int64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int64)(size)

	gofunc((&QSslSocket{h: self}).callVirtualBase_SetReadBufferSize, slotval1)

}

func (this *QSslSocket) callVirtualBase_WaitForConnected(msecs int) bool {

	return (bool)(C.QSslSocket_virtualbase_WaitForConnected(unsafe.Pointer(this.h), (C.int)(msecs)))

}
func (this *QSslSocket) OnWaitForConnected(slot func(super func(msecs int) bool, msecs int) bool) {
	ok := C.QSslSocket_override_virtual_WaitForConnected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSslSocket_WaitForConnected
func miqt_exec_callback_QSslSocket_WaitForConnected(self *C.QSslSocket, cb C.intptr_t, msecs C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(msecs int) bool, msecs int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(msecs)

	virtualReturn := gofunc((&QSslSocket{h: self}).callVirtualBase_WaitForConnected, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSslSocket) callVirtualBase_WaitForReadyRead(msecs int) bool {

	return (bool)(C.QSslSocket_virtualbase_WaitForReadyRead(unsafe.Pointer(this.h), (C.int)(msecs)))

}
func (this *QSslSocket) OnWaitForReadyRead(slot func(super func(msecs int) bool, msecs int) bool) {
	ok := C.QSslSocket_override_virtual_WaitForReadyRead(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSslSocket_WaitForReadyRead
func miqt_exec_callback_QSslSocket_WaitForReadyRead(self *C.QSslSocket, cb C.intptr_t, msecs C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(msecs int) bool, msecs int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(msecs)

	virtualReturn := gofunc((&QSslSocket{h: self}).callVirtualBase_WaitForReadyRead, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSslSocket) callVirtualBase_WaitForBytesWritten(msecs int) bool {

	return (bool)(C.QSslSocket_virtualbase_WaitForBytesWritten(unsafe.Pointer(this.h), (C.int)(msecs)))

}
func (this *QSslSocket) OnWaitForBytesWritten(slot func(super func(msecs int) bool, msecs int) bool) {
	ok := C.QSslSocket_override_virtual_WaitForBytesWritten(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSslSocket_WaitForBytesWritten
func miqt_exec_callback_QSslSocket_WaitForBytesWritten(self *C.QSslSocket, cb C.intptr_t, msecs C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(msecs int) bool, msecs int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(msecs)

	virtualReturn := gofunc((&QSslSocket{h: self}).callVirtualBase_WaitForBytesWritten, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSslSocket) callVirtualBase_WaitForDisconnected(msecs int) bool {

	return (bool)(C.QSslSocket_virtualbase_WaitForDisconnected(unsafe.Pointer(this.h), (C.int)(msecs)))

}
func (this *QSslSocket) OnWaitForDisconnected(slot func(super func(msecs int) bool, msecs int) bool) {
	ok := C.QSslSocket_override_virtual_WaitForDisconnected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSslSocket_WaitForDisconnected
func miqt_exec_callback_QSslSocket_WaitForDisconnected(self *C.QSslSocket, cb C.intptr_t, msecs C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(msecs int) bool, msecs int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(msecs)

	virtualReturn := gofunc((&QSslSocket{h: self}).callVirtualBase_WaitForDisconnected, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSslSocket) callVirtualBase_ReadData(data string, maxlen int64) int64 {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))

	return (int64)(C.QSslSocket_virtualbase_ReadData(unsafe.Pointer(this.h), data_Cstring, (C.longlong)(maxlen)))

}
func (this *QSslSocket) OnReadData(slot func(super func(data string, maxlen int64) int64, data string, maxlen int64) int64) {
	ok := C.QSslSocket_override_virtual_ReadData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSslSocket_ReadData
func miqt_exec_callback_QSslSocket_ReadData(self *C.QSslSocket, cb C.intptr_t, data *C.char, maxlen C.longlong) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(data string, maxlen int64) int64, data string, maxlen int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	data_ret := data
	slotval1 := C.GoString(data_ret)

	slotval2 := (int64)(maxlen)

	virtualReturn := gofunc((&QSslSocket{h: self}).callVirtualBase_ReadData, slotval1, slotval2)

	return (C.longlong)(virtualReturn)

}

func (this *QSslSocket) callVirtualBase_WriteData(data string, lenVal int64) int64 {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))

	return (int64)(C.QSslSocket_virtualbase_WriteData(unsafe.Pointer(this.h), data_Cstring, (C.longlong)(lenVal)))

}
func (this *QSslSocket) OnWriteData(slot func(super func(data string, lenVal int64) int64, data string, lenVal int64) int64) {
	ok := C.QSslSocket_override_virtual_WriteData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSslSocket_WriteData
func miqt_exec_callback_QSslSocket_WriteData(self *C.QSslSocket, cb C.intptr_t, data *C.const_char, lenVal C.longlong) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(data string, lenVal int64) int64, data string, lenVal int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	data_ret := data
	slotval1 := C.GoString(data_ret)

	slotval2 := (int64)(lenVal)

	virtualReturn := gofunc((&QSslSocket{h: self}).callVirtualBase_WriteData, slotval1, slotval2)

	return (C.longlong)(virtualReturn)

}

func (this *QSslSocket) callVirtualBase_SocketDescriptor() uintptr {

	return (uintptr)(C.QSslSocket_virtualbase_SocketDescriptor(unsafe.Pointer(this.h)))

}
func (this *QSslSocket) OnSocketDescriptor(slot func(super func() uintptr) uintptr) {
	ok := C.QSslSocket_override_virtual_SocketDescriptor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSslSocket_SocketDescriptor
func miqt_exec_callback_QSslSocket_SocketDescriptor(self *C.QSslSocket, cb C.intptr_t) C.intptr_t {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() uintptr) uintptr)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSslSocket{h: self}).callVirtualBase_SocketDescriptor)

	return (C.intptr_t)(virtualReturn)

}

func (this *QSslSocket) callVirtualBase_IsSequential() bool {

	return (bool)(C.QSslSocket_virtualbase_IsSequential(unsafe.Pointer(this.h)))

}
func (this *QSslSocket) OnIsSequential(slot func(super func() bool) bool) {
	ok := C.QSslSocket_override_virtual_IsSequential(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSslSocket_IsSequential
func miqt_exec_callback_QSslSocket_IsSequential(self *C.QSslSocket, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSslSocket{h: self}).callVirtualBase_IsSequential)

	return (C.bool)(virtualReturn)

}

func (this *QSslSocket) callVirtualBase_ReadLineData(data string, maxlen int64) int64 {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))

	return (int64)(C.QSslSocket_virtualbase_ReadLineData(unsafe.Pointer(this.h), data_Cstring, (C.longlong)(maxlen)))

}
func (this *QSslSocket) OnReadLineData(slot func(super func(data string, maxlen int64) int64, data string, maxlen int64) int64) {
	ok := C.QSslSocket_override_virtual_ReadLineData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSslSocket_ReadLineData
func miqt_exec_callback_QSslSocket_ReadLineData(self *C.QSslSocket, cb C.intptr_t, data *C.char, maxlen C.longlong) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(data string, maxlen int64) int64, data string, maxlen int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	data_ret := data
	slotval1 := C.GoString(data_ret)

	slotval2 := (int64)(maxlen)

	virtualReturn := gofunc((&QSslSocket{h: self}).callVirtualBase_ReadLineData, slotval1, slotval2)

	return (C.longlong)(virtualReturn)

}

func (this *QSslSocket) callVirtualBase_Open(mode qt.QIODevice__OpenModeFlag) bool {

	return (bool)(C.QSslSocket_virtualbase_Open(unsafe.Pointer(this.h), (C.int)(mode)))

}
func (this *QSslSocket) OnOpen(slot func(super func(mode qt.QIODevice__OpenModeFlag) bool, mode qt.QIODevice__OpenModeFlag) bool) {
	ok := C.QSslSocket_override_virtual_Open(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSslSocket_Open
func miqt_exec_callback_QSslSocket_Open(self *C.QSslSocket, cb C.intptr_t, mode C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(mode qt.QIODevice__OpenModeFlag) bool, mode qt.QIODevice__OpenModeFlag) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt.QIODevice__OpenModeFlag)(mode)

	virtualReturn := gofunc((&QSslSocket{h: self}).callVirtualBase_Open, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSslSocket) callVirtualBase_Pos() int64 {

	return (int64)(C.QSslSocket_virtualbase_Pos(unsafe.Pointer(this.h)))

}
func (this *QSslSocket) OnPos(slot func(super func() int64) int64) {
	ok := C.QSslSocket_override_virtual_Pos(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSslSocket_Pos
func miqt_exec_callback_QSslSocket_Pos(self *C.QSslSocket, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSslSocket{h: self}).callVirtualBase_Pos)

	return (C.longlong)(virtualReturn)

}

func (this *QSslSocket) callVirtualBase_Size() int64 {

	return (int64)(C.QSslSocket_virtualbase_Size(unsafe.Pointer(this.h)))

}
func (this *QSslSocket) OnSize(slot func(super func() int64) int64) {
	ok := C.QSslSocket_override_virtual_Size(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSslSocket_Size
func miqt_exec_callback_QSslSocket_Size(self *C.QSslSocket, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSslSocket{h: self}).callVirtualBase_Size)

	return (C.longlong)(virtualReturn)

}

func (this *QSslSocket) callVirtualBase_Seek(pos int64) bool {

	return (bool)(C.QSslSocket_virtualbase_Seek(unsafe.Pointer(this.h), (C.longlong)(pos)))

}
func (this *QSslSocket) OnSeek(slot func(super func(pos int64) bool, pos int64) bool) {
	ok := C.QSslSocket_override_virtual_Seek(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSslSocket_Seek
func miqt_exec_callback_QSslSocket_Seek(self *C.QSslSocket, cb C.intptr_t, pos C.longlong) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(pos int64) bool, pos int64) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int64)(pos)

	virtualReturn := gofunc((&QSslSocket{h: self}).callVirtualBase_Seek, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSslSocket) callVirtualBase_Reset() bool {

	return (bool)(C.QSslSocket_virtualbase_Reset(unsafe.Pointer(this.h)))

}
func (this *QSslSocket) OnReset(slot func(super func() bool) bool) {
	ok := C.QSslSocket_override_virtual_Reset(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSslSocket_Reset
func miqt_exec_callback_QSslSocket_Reset(self *C.QSslSocket, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSslSocket{h: self}).callVirtualBase_Reset)

	return (C.bool)(virtualReturn)

}

func (this *QSslSocket) callVirtualBase_Event(event *qt.QEvent) bool {

	return (bool)(C.QSslSocket_virtualbase_Event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QSslSocket) OnEvent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	ok := C.QSslSocket_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSslSocket_Event
func miqt_exec_callback_QSslSocket_Event(self *C.QSslSocket, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QSslSocket{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSslSocket) callVirtualBase_EventFilter(watched *qt.QObject, event *qt.QEvent) bool {

	return (bool)(C.QSslSocket_virtualbase_EventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QSslSocket) OnEventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	ok := C.QSslSocket_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSslSocket_EventFilter
func miqt_exec_callback_QSslSocket_EventFilter(self *C.QSslSocket, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QSslSocket{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QSslSocket) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.QSslSocket_virtualbase_TimerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QSslSocket) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	ok := C.QSslSocket_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSslSocket_TimerEvent
func miqt_exec_callback_QSslSocket_TimerEvent(self *C.QSslSocket, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QSslSocket{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QSslSocket) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QSslSocket_virtualbase_ChildEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QSslSocket) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	ok := C.QSslSocket_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSslSocket_ChildEvent
func miqt_exec_callback_QSslSocket_ChildEvent(self *C.QSslSocket, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QSslSocket{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QSslSocket) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QSslSocket_virtualbase_CustomEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QSslSocket) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QSslSocket_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSslSocket_CustomEvent
func miqt_exec_callback_QSslSocket_CustomEvent(self *C.QSslSocket, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QSslSocket{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QSslSocket) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QSslSocket_virtualbase_ConnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QSslSocket) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QSslSocket_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSslSocket_ConnectNotify
func miqt_exec_callback_QSslSocket_ConnectNotify(self *C.QSslSocket, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QSslSocket{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QSslSocket) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QSslSocket_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QSslSocket) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QSslSocket_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSslSocket_DisconnectNotify
func miqt_exec_callback_QSslSocket_DisconnectNotify(self *C.QSslSocket, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QSslSocket{h: self}).callVirtualBase_DisconnectNotify, slotval1)

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
