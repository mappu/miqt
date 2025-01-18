package network

/*

#include "gen_qsslconfiguration.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"unsafe"
)

type QSslConfiguration__NextProtocolNegotiationStatus int

const (
	QSslConfiguration__NextProtocolNegotiationNone        QSslConfiguration__NextProtocolNegotiationStatus = 0
	QSslConfiguration__NextProtocolNegotiationNegotiated  QSslConfiguration__NextProtocolNegotiationStatus = 1
	QSslConfiguration__NextProtocolNegotiationUnsupported QSslConfiguration__NextProtocolNegotiationStatus = 2
)

type QSslConfiguration struct {
	h *C.QSslConfiguration
}

func (this *QSslConfiguration) cPointer() *C.QSslConfiguration {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QSslConfiguration) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQSslConfiguration constructs the type using only CGO pointers.
func newQSslConfiguration(h *C.QSslConfiguration) *QSslConfiguration {
	if h == nil {
		return nil
	}

	return &QSslConfiguration{h: h}
}

// UnsafeNewQSslConfiguration constructs the type using only unsafe pointers.
func UnsafeNewQSslConfiguration(h unsafe.Pointer) *QSslConfiguration {
	return newQSslConfiguration((*C.QSslConfiguration)(h))
}

// NewQSslConfiguration constructs a new QSslConfiguration object.
func NewQSslConfiguration() *QSslConfiguration {

	return newQSslConfiguration(C.QSslConfiguration_new())
}

// NewQSslConfiguration2 constructs a new QSslConfiguration object.
func NewQSslConfiguration2(other *QSslConfiguration) *QSslConfiguration {

	return newQSslConfiguration(C.QSslConfiguration_new2(other.cPointer()))
}

func (this *QSslConfiguration) OperatorAssign(other *QSslConfiguration) {
	C.QSslConfiguration_OperatorAssign(this.h, other.cPointer())
}

func (this *QSslConfiguration) Swap(other *QSslConfiguration) {
	C.QSslConfiguration_Swap(this.h, other.cPointer())
}

func (this *QSslConfiguration) OperatorEqual(other *QSslConfiguration) bool {
	return (bool)(C.QSslConfiguration_OperatorEqual(this.h, other.cPointer()))
}

func (this *QSslConfiguration) OperatorNotEqual(other *QSslConfiguration) bool {
	return (bool)(C.QSslConfiguration_OperatorNotEqual(this.h, other.cPointer()))
}

func (this *QSslConfiguration) IsNull() bool {
	return (bool)(C.QSslConfiguration_IsNull(this.h))
}

func (this *QSslConfiguration) Protocol() QSsl__SslProtocol {
	return (QSsl__SslProtocol)(C.QSslConfiguration_Protocol(this.h))
}

func (this *QSslConfiguration) SetProtocol(protocol QSsl__SslProtocol) {
	C.QSslConfiguration_SetProtocol(this.h, (C.int)(protocol))
}

func (this *QSslConfiguration) PeerVerifyMode() QSslSocket__PeerVerifyMode {
	return (QSslSocket__PeerVerifyMode)(C.QSslConfiguration_PeerVerifyMode(this.h))
}

func (this *QSslConfiguration) SetPeerVerifyMode(mode QSslSocket__PeerVerifyMode) {
	C.QSslConfiguration_SetPeerVerifyMode(this.h, (C.int)(mode))
}

func (this *QSslConfiguration) PeerVerifyDepth() int {
	return (int)(C.QSslConfiguration_PeerVerifyDepth(this.h))
}

func (this *QSslConfiguration) SetPeerVerifyDepth(depth int) {
	C.QSslConfiguration_SetPeerVerifyDepth(this.h, (C.int)(depth))
}

func (this *QSslConfiguration) LocalCertificateChain() []QSslCertificate {
	var _ma C.struct_miqt_array = C.QSslConfiguration_LocalCertificateChain(this.h)
	_ret := make([]QSslCertificate, int(_ma.len))
	_outCast := (*[0xffff]*C.QSslCertificate)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQSslCertificate(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QSslConfiguration) SetLocalCertificateChain(localChain []QSslCertificate) {
	localChain_CArray := (*[0xffff]*C.QSslCertificate)(C.malloc(C.size_t(8 * len(localChain))))
	defer C.free(unsafe.Pointer(localChain_CArray))
	for i := range localChain {
		localChain_CArray[i] = localChain[i].cPointer()
	}
	localChain_ma := C.struct_miqt_array{len: C.size_t(len(localChain)), data: unsafe.Pointer(localChain_CArray)}
	C.QSslConfiguration_SetLocalCertificateChain(this.h, localChain_ma)
}

func (this *QSslConfiguration) LocalCertificate() *QSslCertificate {
	_goptr := newQSslCertificate(C.QSslConfiguration_LocalCertificate(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSslConfiguration) SetLocalCertificate(certificate *QSslCertificate) {
	C.QSslConfiguration_SetLocalCertificate(this.h, certificate.cPointer())
}

func (this *QSslConfiguration) PeerCertificate() *QSslCertificate {
	_goptr := newQSslCertificate(C.QSslConfiguration_PeerCertificate(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSslConfiguration) PeerCertificateChain() []QSslCertificate {
	var _ma C.struct_miqt_array = C.QSslConfiguration_PeerCertificateChain(this.h)
	_ret := make([]QSslCertificate, int(_ma.len))
	_outCast := (*[0xffff]*C.QSslCertificate)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQSslCertificate(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QSslConfiguration) SessionCipher() *QSslCipher {
	_goptr := newQSslCipher(C.QSslConfiguration_SessionCipher(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSslConfiguration) SessionProtocol() QSsl__SslProtocol {
	return (QSsl__SslProtocol)(C.QSslConfiguration_SessionProtocol(this.h))
}

func (this *QSslConfiguration) PrivateKey() *QSslKey {
	_goptr := newQSslKey(C.QSslConfiguration_PrivateKey(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSslConfiguration) SetPrivateKey(key *QSslKey) {
	C.QSslConfiguration_SetPrivateKey(this.h, key.cPointer())
}

func (this *QSslConfiguration) Ciphers() []QSslCipher {
	var _ma C.struct_miqt_array = C.QSslConfiguration_Ciphers(this.h)
	_ret := make([]QSslCipher, int(_ma.len))
	_outCast := (*[0xffff]*C.QSslCipher)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQSslCipher(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QSslConfiguration) SetCiphers(ciphers []QSslCipher) {
	ciphers_CArray := (*[0xffff]*C.QSslCipher)(C.malloc(C.size_t(8 * len(ciphers))))
	defer C.free(unsafe.Pointer(ciphers_CArray))
	for i := range ciphers {
		ciphers_CArray[i] = ciphers[i].cPointer()
	}
	ciphers_ma := C.struct_miqt_array{len: C.size_t(len(ciphers)), data: unsafe.Pointer(ciphers_CArray)}
	C.QSslConfiguration_SetCiphers(this.h, ciphers_ma)
}

func (this *QSslConfiguration) SetCiphersWithCiphers(ciphers string) {
	ciphers_ms := C.struct_miqt_string{}
	ciphers_ms.data = C.CString(ciphers)
	ciphers_ms.len = C.size_t(len(ciphers))
	defer C.free(unsafe.Pointer(ciphers_ms.data))
	C.QSslConfiguration_SetCiphersWithCiphers(this.h, ciphers_ms)
}

func QSslConfiguration_SupportedCiphers() []QSslCipher {
	var _ma C.struct_miqt_array = C.QSslConfiguration_SupportedCiphers()
	_ret := make([]QSslCipher, int(_ma.len))
	_outCast := (*[0xffff]*C.QSslCipher)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQSslCipher(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QSslConfiguration) CaCertificates() []QSslCertificate {
	var _ma C.struct_miqt_array = C.QSslConfiguration_CaCertificates(this.h)
	_ret := make([]QSslCertificate, int(_ma.len))
	_outCast := (*[0xffff]*C.QSslCertificate)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQSslCertificate(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QSslConfiguration) SetCaCertificates(certificates []QSslCertificate) {
	certificates_CArray := (*[0xffff]*C.QSslCertificate)(C.malloc(C.size_t(8 * len(certificates))))
	defer C.free(unsafe.Pointer(certificates_CArray))
	for i := range certificates {
		certificates_CArray[i] = certificates[i].cPointer()
	}
	certificates_ma := C.struct_miqt_array{len: C.size_t(len(certificates)), data: unsafe.Pointer(certificates_CArray)}
	C.QSslConfiguration_SetCaCertificates(this.h, certificates_ma)
}

func (this *QSslConfiguration) AddCaCertificates(path string) bool {
	path_ms := C.struct_miqt_string{}
	path_ms.data = C.CString(path)
	path_ms.len = C.size_t(len(path))
	defer C.free(unsafe.Pointer(path_ms.data))
	return (bool)(C.QSslConfiguration_AddCaCertificates(this.h, path_ms))
}

func (this *QSslConfiguration) AddCaCertificate(certificate *QSslCertificate) {
	C.QSslConfiguration_AddCaCertificate(this.h, certificate.cPointer())
}

func (this *QSslConfiguration) AddCaCertificatesWithCertificates(certificates []QSslCertificate) {
	certificates_CArray := (*[0xffff]*C.QSslCertificate)(C.malloc(C.size_t(8 * len(certificates))))
	defer C.free(unsafe.Pointer(certificates_CArray))
	for i := range certificates {
		certificates_CArray[i] = certificates[i].cPointer()
	}
	certificates_ma := C.struct_miqt_array{len: C.size_t(len(certificates)), data: unsafe.Pointer(certificates_CArray)}
	C.QSslConfiguration_AddCaCertificatesWithCertificates(this.h, certificates_ma)
}

func QSslConfiguration_SystemCaCertificates() []QSslCertificate {
	var _ma C.struct_miqt_array = C.QSslConfiguration_SystemCaCertificates()
	_ret := make([]QSslCertificate, int(_ma.len))
	_outCast := (*[0xffff]*C.QSslCertificate)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQSslCertificate(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QSslConfiguration) SetSslOption(option QSsl__SslOption, on bool) {
	C.QSslConfiguration_SetSslOption(this.h, (C.int)(option), (C.bool)(on))
}

func (this *QSslConfiguration) TestSslOption(option QSsl__SslOption) bool {
	return (bool)(C.QSslConfiguration_TestSslOption(this.h, (C.int)(option)))
}

func (this *QSslConfiguration) SessionTicket() []byte {
	var _bytearray C.struct_miqt_string = C.QSslConfiguration_SessionTicket(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QSslConfiguration) SetSessionTicket(sessionTicket []byte) {
	sessionTicket_alias := C.struct_miqt_string{}
	sessionTicket_alias.data = (*C.char)(unsafe.Pointer(&sessionTicket[0]))
	sessionTicket_alias.len = C.size_t(len(sessionTicket))
	C.QSslConfiguration_SetSessionTicket(this.h, sessionTicket_alias)
}

func (this *QSslConfiguration) SessionTicketLifeTimeHint() int {
	return (int)(C.QSslConfiguration_SessionTicketLifeTimeHint(this.h))
}

func (this *QSslConfiguration) EphemeralServerKey() *QSslKey {
	_goptr := newQSslKey(C.QSslConfiguration_EphemeralServerKey(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSslConfiguration) EllipticCurves() []QSslEllipticCurve {
	var _ma C.struct_miqt_array = C.QSslConfiguration_EllipticCurves(this.h)
	_ret := make([]QSslEllipticCurve, int(_ma.len))
	_outCast := (*[0xffff]*C.QSslEllipticCurve)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQSslEllipticCurve(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QSslConfiguration) SetEllipticCurves(curves []QSslEllipticCurve) {
	curves_CArray := (*[0xffff]*C.QSslEllipticCurve)(C.malloc(C.size_t(8 * len(curves))))
	defer C.free(unsafe.Pointer(curves_CArray))
	for i := range curves {
		curves_CArray[i] = curves[i].cPointer()
	}
	curves_ma := C.struct_miqt_array{len: C.size_t(len(curves)), data: unsafe.Pointer(curves_CArray)}
	C.QSslConfiguration_SetEllipticCurves(this.h, curves_ma)
}

func QSslConfiguration_SupportedEllipticCurves() []QSslEllipticCurve {
	var _ma C.struct_miqt_array = C.QSslConfiguration_SupportedEllipticCurves()
	_ret := make([]QSslEllipticCurve, int(_ma.len))
	_outCast := (*[0xffff]*C.QSslEllipticCurve)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQSslEllipticCurve(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QSslConfiguration) PreSharedKeyIdentityHint() []byte {
	var _bytearray C.struct_miqt_string = C.QSslConfiguration_PreSharedKeyIdentityHint(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QSslConfiguration) SetPreSharedKeyIdentityHint(hint []byte) {
	hint_alias := C.struct_miqt_string{}
	hint_alias.data = (*C.char)(unsafe.Pointer(&hint[0]))
	hint_alias.len = C.size_t(len(hint))
	C.QSslConfiguration_SetPreSharedKeyIdentityHint(this.h, hint_alias)
}

func (this *QSslConfiguration) DiffieHellmanParameters() *QSslDiffieHellmanParameters {
	_goptr := newQSslDiffieHellmanParameters(C.QSslConfiguration_DiffieHellmanParameters(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSslConfiguration) SetDiffieHellmanParameters(dhparams *QSslDiffieHellmanParameters) {
	C.QSslConfiguration_SetDiffieHellmanParameters(this.h, dhparams.cPointer())
}

func (this *QSslConfiguration) SetBackendConfigurationOption(name []byte, value *qt6.QVariant) {
	name_alias := C.struct_miqt_string{}
	name_alias.data = (*C.char)(unsafe.Pointer(&name[0]))
	name_alias.len = C.size_t(len(name))
	C.QSslConfiguration_SetBackendConfigurationOption(this.h, name_alias, (*C.QVariant)(value.UnsafePointer()))
}

func (this *QSslConfiguration) SetBackendConfiguration() {
	C.QSslConfiguration_SetBackendConfiguration(this.h)
}

func QSslConfiguration_DefaultConfiguration() *QSslConfiguration {
	_goptr := newQSslConfiguration(C.QSslConfiguration_DefaultConfiguration())
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QSslConfiguration_SetDefaultConfiguration(configuration *QSslConfiguration) {
	C.QSslConfiguration_SetDefaultConfiguration(configuration.cPointer())
}

func (this *QSslConfiguration) DtlsCookieVerificationEnabled() bool {
	return (bool)(C.QSslConfiguration_DtlsCookieVerificationEnabled(this.h))
}

func (this *QSslConfiguration) SetDtlsCookieVerificationEnabled(enable bool) {
	C.QSslConfiguration_SetDtlsCookieVerificationEnabled(this.h, (C.bool)(enable))
}

func QSslConfiguration_DefaultDtlsConfiguration() *QSslConfiguration {
	_goptr := newQSslConfiguration(C.QSslConfiguration_DefaultDtlsConfiguration())
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QSslConfiguration_SetDefaultDtlsConfiguration(configuration *QSslConfiguration) {
	C.QSslConfiguration_SetDefaultDtlsConfiguration(configuration.cPointer())
}

func (this *QSslConfiguration) HandshakeMustInterruptOnError() bool {
	return (bool)(C.QSslConfiguration_HandshakeMustInterruptOnError(this.h))
}

func (this *QSslConfiguration) SetHandshakeMustInterruptOnError(interrupt bool) {
	C.QSslConfiguration_SetHandshakeMustInterruptOnError(this.h, (C.bool)(interrupt))
}

func (this *QSslConfiguration) MissingCertificateIsFatal() bool {
	return (bool)(C.QSslConfiguration_MissingCertificateIsFatal(this.h))
}

func (this *QSslConfiguration) SetMissingCertificateIsFatal(cannotRecover bool) {
	C.QSslConfiguration_SetMissingCertificateIsFatal(this.h, (C.bool)(cannotRecover))
}

func (this *QSslConfiguration) SetOcspStaplingEnabled(enable bool) {
	C.QSslConfiguration_SetOcspStaplingEnabled(this.h, (C.bool)(enable))
}

func (this *QSslConfiguration) OcspStaplingEnabled() bool {
	return (bool)(C.QSslConfiguration_OcspStaplingEnabled(this.h))
}

func (this *QSslConfiguration) SetAllowedNextProtocols(protocols [][]byte) {
	protocols_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(protocols))))
	defer C.free(unsafe.Pointer(protocols_CArray))
	for i := range protocols {
		protocols_i_alias := C.struct_miqt_string{}
		protocols_i_alias.data = (*C.char)(unsafe.Pointer(&protocols[i][0]))
		protocols_i_alias.len = C.size_t(len(protocols[i]))
		protocols_CArray[i] = protocols_i_alias
	}
	protocols_ma := C.struct_miqt_array{len: C.size_t(len(protocols)), data: unsafe.Pointer(protocols_CArray)}
	C.QSslConfiguration_SetAllowedNextProtocols(this.h, protocols_ma)
}

func (this *QSslConfiguration) AllowedNextProtocols() [][]byte {
	var _ma C.struct_miqt_array = C.QSslConfiguration_AllowedNextProtocols(this.h)
	_ret := make([][]byte, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_bytearray C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoBytes(unsafe.Pointer(_lv_bytearray.data), C.int(int64(_lv_bytearray.len)))
		C.free(unsafe.Pointer(_lv_bytearray.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func (this *QSslConfiguration) NextNegotiatedProtocol() []byte {
	var _bytearray C.struct_miqt_string = C.QSslConfiguration_NextNegotiatedProtocol(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QSslConfiguration) NextProtocolNegotiationStatus() QSslConfiguration__NextProtocolNegotiationStatus {
	return (QSslConfiguration__NextProtocolNegotiationStatus)(C.QSslConfiguration_NextProtocolNegotiationStatus(this.h))
}

func (this *QSslConfiguration) AddCaCertificates2(path string, format QSsl__EncodingFormat) bool {
	path_ms := C.struct_miqt_string{}
	path_ms.data = C.CString(path)
	path_ms.len = C.size_t(len(path))
	defer C.free(unsafe.Pointer(path_ms.data))
	return (bool)(C.QSslConfiguration_AddCaCertificates2(this.h, path_ms, (C.int)(format)))
}

func (this *QSslConfiguration) AddCaCertificates3(path string, format QSsl__EncodingFormat, syntax QSslCertificate__PatternSyntax) bool {
	path_ms := C.struct_miqt_string{}
	path_ms.data = C.CString(path)
	path_ms.len = C.size_t(len(path))
	defer C.free(unsafe.Pointer(path_ms.data))
	return (bool)(C.QSslConfiguration_AddCaCertificates3(this.h, path_ms, (C.int)(format), (C.int)(syntax)))
}

// Delete this object from C++ memory.
func (this *QSslConfiguration) Delete() {
	C.QSslConfiguration_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSslConfiguration) GoGC() {
	runtime.SetFinalizer(this, func(this *QSslConfiguration) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
