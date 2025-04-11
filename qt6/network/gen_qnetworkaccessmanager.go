package network

/*

#include "gen_qnetworkaccessmanager.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QNetworkAccessManager__Operation int

const (
	QNetworkAccessManager__HeadOperation    QNetworkAccessManager__Operation = 1
	QNetworkAccessManager__GetOperation     QNetworkAccessManager__Operation = 2
	QNetworkAccessManager__PutOperation     QNetworkAccessManager__Operation = 3
	QNetworkAccessManager__PostOperation    QNetworkAccessManager__Operation = 4
	QNetworkAccessManager__DeleteOperation  QNetworkAccessManager__Operation = 5
	QNetworkAccessManager__CustomOperation  QNetworkAccessManager__Operation = 6
	QNetworkAccessManager__UnknownOperation QNetworkAccessManager__Operation = 0
)

type QNetworkAccessManager struct {
	h *C.QNetworkAccessManager
	*qt6.QObject
}

func (this *QNetworkAccessManager) cPointer() *C.QNetworkAccessManager {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QNetworkAccessManager) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQNetworkAccessManager constructs the type using only CGO pointers.
func newQNetworkAccessManager(h *C.QNetworkAccessManager) *QNetworkAccessManager {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QNetworkAccessManager_virtbase(h, &outptr_QObject)

	return &QNetworkAccessManager{h: h,
		QObject: qt6.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQNetworkAccessManager constructs the type using only unsafe pointers.
func UnsafeNewQNetworkAccessManager(h unsafe.Pointer) *QNetworkAccessManager {
	return newQNetworkAccessManager((*C.QNetworkAccessManager)(h))
}

// NewQNetworkAccessManager constructs a new QNetworkAccessManager object.
func NewQNetworkAccessManager() *QNetworkAccessManager {

	return newQNetworkAccessManager(C.QNetworkAccessManager_new())
}

// NewQNetworkAccessManager2 constructs a new QNetworkAccessManager object.
func NewQNetworkAccessManager2(parent *qt6.QObject) *QNetworkAccessManager {

	return newQNetworkAccessManager(C.QNetworkAccessManager_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QNetworkAccessManager) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QNetworkAccessManager_metaObject(this.h)))
}

func (this *QNetworkAccessManager) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QNetworkAccessManager_metacast(this.h, param1_Cstring))
}

func QNetworkAccessManager_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QNetworkAccessManager_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QNetworkAccessManager) SupportedSchemes() []string {
	var _ma C.struct_miqt_array = C.QNetworkAccessManager_supportedSchemes(this.h)
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

func (this *QNetworkAccessManager) ClearAccessCache() {
	C.QNetworkAccessManager_clearAccessCache(this.h)
}

func (this *QNetworkAccessManager) ClearConnectionCache() {
	C.QNetworkAccessManager_clearConnectionCache(this.h)
}

func (this *QNetworkAccessManager) Proxy() *QNetworkProxy {
	_goptr := newQNetworkProxy(C.QNetworkAccessManager_proxy(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QNetworkAccessManager) SetProxy(proxy *QNetworkProxy) {
	C.QNetworkAccessManager_setProxy(this.h, proxy.cPointer())
}

func (this *QNetworkAccessManager) ProxyFactory() *QNetworkProxyFactory {
	return newQNetworkProxyFactory(C.QNetworkAccessManager_proxyFactory(this.h))
}

func (this *QNetworkAccessManager) SetProxyFactory(factory *QNetworkProxyFactory) {
	C.QNetworkAccessManager_setProxyFactory(this.h, factory.cPointer())
}

func (this *QNetworkAccessManager) Cache() *QAbstractNetworkCache {
	return newQAbstractNetworkCache(C.QNetworkAccessManager_cache(this.h))
}

func (this *QNetworkAccessManager) SetCache(cache *QAbstractNetworkCache) {
	C.QNetworkAccessManager_setCache(this.h, cache.cPointer())
}

func (this *QNetworkAccessManager) CookieJar() *QNetworkCookieJar {
	return newQNetworkCookieJar(C.QNetworkAccessManager_cookieJar(this.h))
}

func (this *QNetworkAccessManager) SetCookieJar(cookieJar *QNetworkCookieJar) {
	C.QNetworkAccessManager_setCookieJar(this.h, cookieJar.cPointer())
}

func (this *QNetworkAccessManager) SetStrictTransportSecurityEnabled(enabled bool) {
	C.QNetworkAccessManager_setStrictTransportSecurityEnabled(this.h, (C.bool)(enabled))
}

func (this *QNetworkAccessManager) IsStrictTransportSecurityEnabled() bool {
	return (bool)(C.QNetworkAccessManager_isStrictTransportSecurityEnabled(this.h))
}

func (this *QNetworkAccessManager) EnableStrictTransportSecurityStore(enabled bool) {
	C.QNetworkAccessManager_enableStrictTransportSecurityStore(this.h, (C.bool)(enabled))
}

func (this *QNetworkAccessManager) IsStrictTransportSecurityStoreEnabled() bool {
	return (bool)(C.QNetworkAccessManager_isStrictTransportSecurityStoreEnabled(this.h))
}

func (this *QNetworkAccessManager) AddStrictTransportSecurityHosts(knownHosts []QHstsPolicy) {
	knownHosts_CArray := (*[0xffff]*C.QHstsPolicy)(C.malloc(C.size_t(8 * len(knownHosts))))
	defer C.free(unsafe.Pointer(knownHosts_CArray))
	for i := range knownHosts {
		knownHosts_CArray[i] = knownHosts[i].cPointer()
	}
	knownHosts_ma := C.struct_miqt_array{len: C.size_t(len(knownHosts)), data: unsafe.Pointer(knownHosts_CArray)}
	C.QNetworkAccessManager_addStrictTransportSecurityHosts(this.h, knownHosts_ma)
}

func (this *QNetworkAccessManager) StrictTransportSecurityHosts() []QHstsPolicy {
	var _ma C.struct_miqt_array = C.QNetworkAccessManager_strictTransportSecurityHosts(this.h)
	_ret := make([]QHstsPolicy, int(_ma.len))
	_outCast := (*[0xffff]*C.QHstsPolicy)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQHstsPolicy(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QNetworkAccessManager) Head(request *QNetworkRequest) *QNetworkReply {
	return newQNetworkReply(C.QNetworkAccessManager_head(this.h, request.cPointer()))
}

func (this *QNetworkAccessManager) Get(request *QNetworkRequest) *QNetworkReply {
	return newQNetworkReply(C.QNetworkAccessManager_get(this.h, request.cPointer()))
}

func (this *QNetworkAccessManager) Post(request *QNetworkRequest, data *qt6.QIODevice) *QNetworkReply {
	return newQNetworkReply(C.QNetworkAccessManager_post(this.h, request.cPointer(), (*C.QIODevice)(data.UnsafePointer())))
}

func (this *QNetworkAccessManager) Post2(request *QNetworkRequest, data []byte) *QNetworkReply {
	data_alias := C.struct_miqt_string{}
	if len(data) > 0 {
		data_alias.data = (*C.char)(unsafe.Pointer(&data[0]))
	} else {
		data_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	data_alias.len = C.size_t(len(data))
	return newQNetworkReply(C.QNetworkAccessManager_post2(this.h, request.cPointer(), data_alias))
}

func (this *QNetworkAccessManager) Put(request *QNetworkRequest, data *qt6.QIODevice) *QNetworkReply {
	return newQNetworkReply(C.QNetworkAccessManager_put(this.h, request.cPointer(), (*C.QIODevice)(data.UnsafePointer())))
}

func (this *QNetworkAccessManager) Put2(request *QNetworkRequest, data []byte) *QNetworkReply {
	data_alias := C.struct_miqt_string{}
	if len(data) > 0 {
		data_alias.data = (*C.char)(unsafe.Pointer(&data[0]))
	} else {
		data_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	data_alias.len = C.size_t(len(data))
	return newQNetworkReply(C.QNetworkAccessManager_put2(this.h, request.cPointer(), data_alias))
}

func (this *QNetworkAccessManager) DeleteResource(request *QNetworkRequest) *QNetworkReply {
	return newQNetworkReply(C.QNetworkAccessManager_deleteResource(this.h, request.cPointer()))
}

func (this *QNetworkAccessManager) SendCustomRequest(request *QNetworkRequest, verb []byte) *QNetworkReply {
	verb_alias := C.struct_miqt_string{}
	if len(verb) > 0 {
		verb_alias.data = (*C.char)(unsafe.Pointer(&verb[0]))
	} else {
		verb_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	verb_alias.len = C.size_t(len(verb))
	return newQNetworkReply(C.QNetworkAccessManager_sendCustomRequest(this.h, request.cPointer(), verb_alias))
}

func (this *QNetworkAccessManager) SendCustomRequest2(request *QNetworkRequest, verb []byte, data []byte) *QNetworkReply {
	verb_alias := C.struct_miqt_string{}
	if len(verb) > 0 {
		verb_alias.data = (*C.char)(unsafe.Pointer(&verb[0]))
	} else {
		verb_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	verb_alias.len = C.size_t(len(verb))
	data_alias := C.struct_miqt_string{}
	if len(data) > 0 {
		data_alias.data = (*C.char)(unsafe.Pointer(&data[0]))
	} else {
		data_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	data_alias.len = C.size_t(len(data))
	return newQNetworkReply(C.QNetworkAccessManager_sendCustomRequest2(this.h, request.cPointer(), verb_alias, data_alias))
}

func (this *QNetworkAccessManager) Post3(request *QNetworkRequest, multiPart *QHttpMultiPart) *QNetworkReply {
	return newQNetworkReply(C.QNetworkAccessManager_post3(this.h, request.cPointer(), multiPart.cPointer()))
}

func (this *QNetworkAccessManager) Put3(request *QNetworkRequest, multiPart *QHttpMultiPart) *QNetworkReply {
	return newQNetworkReply(C.QNetworkAccessManager_put3(this.h, request.cPointer(), multiPart.cPointer()))
}

func (this *QNetworkAccessManager) SendCustomRequest3(request *QNetworkRequest, verb []byte, multiPart *QHttpMultiPart) *QNetworkReply {
	verb_alias := C.struct_miqt_string{}
	if len(verb) > 0 {
		verb_alias.data = (*C.char)(unsafe.Pointer(&verb[0]))
	} else {
		verb_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	verb_alias.len = C.size_t(len(verb))
	return newQNetworkReply(C.QNetworkAccessManager_sendCustomRequest3(this.h, request.cPointer(), verb_alias, multiPart.cPointer()))
}

func (this *QNetworkAccessManager) ConnectToHostEncrypted(hostName string) {
	hostName_ms := C.struct_miqt_string{}
	hostName_ms.data = C.CString(hostName)
	hostName_ms.len = C.size_t(len(hostName))
	defer C.free(unsafe.Pointer(hostName_ms.data))
	C.QNetworkAccessManager_connectToHostEncrypted(this.h, hostName_ms)
}

func (this *QNetworkAccessManager) ConnectToHostEncrypted2(hostName string, port uint16, sslConfiguration *QSslConfiguration, peerName string) {
	hostName_ms := C.struct_miqt_string{}
	hostName_ms.data = C.CString(hostName)
	hostName_ms.len = C.size_t(len(hostName))
	defer C.free(unsafe.Pointer(hostName_ms.data))
	peerName_ms := C.struct_miqt_string{}
	peerName_ms.data = C.CString(peerName)
	peerName_ms.len = C.size_t(len(peerName))
	defer C.free(unsafe.Pointer(peerName_ms.data))
	C.QNetworkAccessManager_connectToHostEncrypted2(this.h, hostName_ms, (C.ushort)(port), sslConfiguration.cPointer(), peerName_ms)
}

func (this *QNetworkAccessManager) ConnectToHost(hostName string) {
	hostName_ms := C.struct_miqt_string{}
	hostName_ms.data = C.CString(hostName)
	hostName_ms.len = C.size_t(len(hostName))
	defer C.free(unsafe.Pointer(hostName_ms.data))
	C.QNetworkAccessManager_connectToHost(this.h, hostName_ms)
}

func (this *QNetworkAccessManager) SetRedirectPolicy(policy QNetworkRequest__RedirectPolicy) {
	C.QNetworkAccessManager_setRedirectPolicy(this.h, (C.int)(policy))
}

func (this *QNetworkAccessManager) RedirectPolicy() QNetworkRequest__RedirectPolicy {
	return (QNetworkRequest__RedirectPolicy)(C.QNetworkAccessManager_redirectPolicy(this.h))
}

func (this *QNetworkAccessManager) AutoDeleteReplies() bool {
	return (bool)(C.QNetworkAccessManager_autoDeleteReplies(this.h))
}

func (this *QNetworkAccessManager) SetAutoDeleteReplies(autoDelete bool) {
	C.QNetworkAccessManager_setAutoDeleteReplies(this.h, (C.bool)(autoDelete))
}

func (this *QNetworkAccessManager) TransferTimeout() int {
	return (int)(C.QNetworkAccessManager_transferTimeout(this.h))
}

func (this *QNetworkAccessManager) SetTransferTimeout() {
	C.QNetworkAccessManager_setTransferTimeout(this.h)
}

func (this *QNetworkAccessManager) ProxyAuthenticationRequired(proxy *QNetworkProxy, authenticator *QAuthenticator) {
	C.QNetworkAccessManager_proxyAuthenticationRequired(this.h, proxy.cPointer(), authenticator.cPointer())
}
func (this *QNetworkAccessManager) OnProxyAuthenticationRequired(slot func(proxy *QNetworkProxy, authenticator *QAuthenticator)) {
	C.QNetworkAccessManager_connect_proxyAuthenticationRequired(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QNetworkAccessManager_proxyAuthenticationRequired
func miqt_exec_callback_QNetworkAccessManager_proxyAuthenticationRequired(cb C.intptr_t, proxy *C.QNetworkProxy, authenticator *C.QAuthenticator) {
	gofunc, ok := cgo.Handle(cb).Value().(func(proxy *QNetworkProxy, authenticator *QAuthenticator))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQNetworkProxy(proxy)

	slotval2 := newQAuthenticator(authenticator)

	gofunc(slotval1, slotval2)
}

func (this *QNetworkAccessManager) AuthenticationRequired(reply *QNetworkReply, authenticator *QAuthenticator) {
	C.QNetworkAccessManager_authenticationRequired(this.h, reply.cPointer(), authenticator.cPointer())
}
func (this *QNetworkAccessManager) OnAuthenticationRequired(slot func(reply *QNetworkReply, authenticator *QAuthenticator)) {
	C.QNetworkAccessManager_connect_authenticationRequired(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QNetworkAccessManager_authenticationRequired
func miqt_exec_callback_QNetworkAccessManager_authenticationRequired(cb C.intptr_t, reply *C.QNetworkReply, authenticator *C.QAuthenticator) {
	gofunc, ok := cgo.Handle(cb).Value().(func(reply *QNetworkReply, authenticator *QAuthenticator))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQNetworkReply(reply)

	slotval2 := newQAuthenticator(authenticator)

	gofunc(slotval1, slotval2)
}

func (this *QNetworkAccessManager) Finished(reply *QNetworkReply) {
	C.QNetworkAccessManager_finished(this.h, reply.cPointer())
}
func (this *QNetworkAccessManager) OnFinished(slot func(reply *QNetworkReply)) {
	C.QNetworkAccessManager_connect_finished(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QNetworkAccessManager_finished
func miqt_exec_callback_QNetworkAccessManager_finished(cb C.intptr_t, reply *C.QNetworkReply) {
	gofunc, ok := cgo.Handle(cb).Value().(func(reply *QNetworkReply))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQNetworkReply(reply)

	gofunc(slotval1)
}

func (this *QNetworkAccessManager) Encrypted(reply *QNetworkReply) {
	C.QNetworkAccessManager_encrypted(this.h, reply.cPointer())
}
func (this *QNetworkAccessManager) OnEncrypted(slot func(reply *QNetworkReply)) {
	C.QNetworkAccessManager_connect_encrypted(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QNetworkAccessManager_encrypted
func miqt_exec_callback_QNetworkAccessManager_encrypted(cb C.intptr_t, reply *C.QNetworkReply) {
	gofunc, ok := cgo.Handle(cb).Value().(func(reply *QNetworkReply))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQNetworkReply(reply)

	gofunc(slotval1)
}

func (this *QNetworkAccessManager) SslErrors(reply *QNetworkReply, errors []QSslError) {
	errors_CArray := (*[0xffff]*C.QSslError)(C.malloc(C.size_t(8 * len(errors))))
	defer C.free(unsafe.Pointer(errors_CArray))
	for i := range errors {
		errors_CArray[i] = errors[i].cPointer()
	}
	errors_ma := C.struct_miqt_array{len: C.size_t(len(errors)), data: unsafe.Pointer(errors_CArray)}
	C.QNetworkAccessManager_sslErrors(this.h, reply.cPointer(), errors_ma)
}
func (this *QNetworkAccessManager) OnSslErrors(slot func(reply *QNetworkReply, errors []QSslError)) {
	C.QNetworkAccessManager_connect_sslErrors(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QNetworkAccessManager_sslErrors
func miqt_exec_callback_QNetworkAccessManager_sslErrors(cb C.intptr_t, reply *C.QNetworkReply, errors C.struct_miqt_array) {
	gofunc, ok := cgo.Handle(cb).Value().(func(reply *QNetworkReply, errors []QSslError))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQNetworkReply(reply)

	var errors_ma C.struct_miqt_array = errors
	errors_ret := make([]QSslError, int(errors_ma.len))
	errors_outCast := (*[0xffff]*C.QSslError)(unsafe.Pointer(errors_ma.data)) // hey ya
	for i := 0; i < int(errors_ma.len); i++ {
		errors_lv_goptr := newQSslError(errors_outCast[i])
		errors_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		errors_ret[i] = *errors_lv_goptr
	}
	slotval2 := errors_ret

	gofunc(slotval1, slotval2)
}

func (this *QNetworkAccessManager) PreSharedKeyAuthenticationRequired(reply *QNetworkReply, authenticator *QSslPreSharedKeyAuthenticator) {
	C.QNetworkAccessManager_preSharedKeyAuthenticationRequired(this.h, reply.cPointer(), authenticator.cPointer())
}
func (this *QNetworkAccessManager) OnPreSharedKeyAuthenticationRequired(slot func(reply *QNetworkReply, authenticator *QSslPreSharedKeyAuthenticator)) {
	C.QNetworkAccessManager_connect_preSharedKeyAuthenticationRequired(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QNetworkAccessManager_preSharedKeyAuthenticationRequired
func miqt_exec_callback_QNetworkAccessManager_preSharedKeyAuthenticationRequired(cb C.intptr_t, reply *C.QNetworkReply, authenticator *C.QSslPreSharedKeyAuthenticator) {
	gofunc, ok := cgo.Handle(cb).Value().(func(reply *QNetworkReply, authenticator *QSslPreSharedKeyAuthenticator))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQNetworkReply(reply)

	slotval2 := newQSslPreSharedKeyAuthenticator(authenticator)

	gofunc(slotval1, slotval2)
}

func QNetworkAccessManager_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QNetworkAccessManager_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QNetworkAccessManager_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QNetworkAccessManager_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QNetworkAccessManager) EnableStrictTransportSecurityStore2(enabled bool, storeDir string) {
	storeDir_ms := C.struct_miqt_string{}
	storeDir_ms.data = C.CString(storeDir)
	storeDir_ms.len = C.size_t(len(storeDir))
	defer C.free(unsafe.Pointer(storeDir_ms.data))
	C.QNetworkAccessManager_enableStrictTransportSecurityStore2(this.h, (C.bool)(enabled), storeDir_ms)
}

func (this *QNetworkAccessManager) SendCustomRequest4(request *QNetworkRequest, verb []byte, data *qt6.QIODevice) *QNetworkReply {
	verb_alias := C.struct_miqt_string{}
	if len(verb) > 0 {
		verb_alias.data = (*C.char)(unsafe.Pointer(&verb[0]))
	} else {
		verb_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	verb_alias.len = C.size_t(len(verb))
	return newQNetworkReply(C.QNetworkAccessManager_sendCustomRequest4(this.h, request.cPointer(), verb_alias, (*C.QIODevice)(data.UnsafePointer())))
}

func (this *QNetworkAccessManager) ConnectToHostEncrypted3(hostName string, port uint16) {
	hostName_ms := C.struct_miqt_string{}
	hostName_ms.data = C.CString(hostName)
	hostName_ms.len = C.size_t(len(hostName))
	defer C.free(unsafe.Pointer(hostName_ms.data))
	C.QNetworkAccessManager_connectToHostEncrypted3(this.h, hostName_ms, (C.ushort)(port))
}

func (this *QNetworkAccessManager) ConnectToHostEncrypted4(hostName string, port uint16, sslConfiguration *QSslConfiguration) {
	hostName_ms := C.struct_miqt_string{}
	hostName_ms.data = C.CString(hostName)
	hostName_ms.len = C.size_t(len(hostName))
	defer C.free(unsafe.Pointer(hostName_ms.data))
	C.QNetworkAccessManager_connectToHostEncrypted4(this.h, hostName_ms, (C.ushort)(port), sslConfiguration.cPointer())
}

func (this *QNetworkAccessManager) ConnectToHost2(hostName string, port uint16) {
	hostName_ms := C.struct_miqt_string{}
	hostName_ms.data = C.CString(hostName)
	hostName_ms.len = C.size_t(len(hostName))
	defer C.free(unsafe.Pointer(hostName_ms.data))
	C.QNetworkAccessManager_connectToHost2(this.h, hostName_ms, (C.ushort)(port))
}

func (this *QNetworkAccessManager) SetTransferTimeoutWithTimeout(timeout int) {
	C.QNetworkAccessManager_setTransferTimeoutWithTimeout(this.h, (C.int)(timeout))
}

// SupportedSchemesImplementation can only be called from a QNetworkAccessManager that was directly constructed.
func (this *QNetworkAccessManager) SupportedSchemesImplementation() []string {

	var _dynamic_cast_ok C.bool = false
	var _ma C.struct_miqt_array = C.QNetworkAccessManager_protectedbase_supportedSchemesImplementation(&_dynamic_cast_ok, unsafe.Pointer(this.h))
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	_method_ret := _ret

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a QNetworkAccessManager that was directly constructed.
func (this *QNetworkAccessManager) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QNetworkAccessManager_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QNetworkAccessManager that was directly constructed.
func (this *QNetworkAccessManager) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QNetworkAccessManager_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QNetworkAccessManager that was directly constructed.
func (this *QNetworkAccessManager) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QNetworkAccessManager_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QNetworkAccessManager that was directly constructed.
func (this *QNetworkAccessManager) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QNetworkAccessManager_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QNetworkAccessManager) callVirtualBase_SupportedSchemes() []string {

	var _ma C.struct_miqt_array = C.QNetworkAccessManager_virtualbase_supportedSchemes(unsafe.Pointer(this.h))
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
func (this *QNetworkAccessManager) OnSupportedSchemes(slot func(super func() []string) []string) {
	ok := C.QNetworkAccessManager_override_virtual_supportedSchemes(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNetworkAccessManager_supportedSchemes
func miqt_exec_callback_QNetworkAccessManager_supportedSchemes(self *C.QNetworkAccessManager, cb C.intptr_t) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() []string) []string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QNetworkAccessManager{h: self}).callVirtualBase_SupportedSchemes)
	virtualReturn_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(virtualReturn))))
	defer C.free(unsafe.Pointer(virtualReturn_CArray))
	for i := range virtualReturn {
		virtualReturn_i_ms := C.struct_miqt_string{}
		virtualReturn_i_ms.data = C.CString(virtualReturn[i])
		virtualReturn_i_ms.len = C.size_t(len(virtualReturn[i]))
		defer C.free(unsafe.Pointer(virtualReturn_i_ms.data))
		virtualReturn_CArray[i] = virtualReturn_i_ms
	}
	virtualReturn_ma := C.struct_miqt_array{len: C.size_t(len(virtualReturn)), data: unsafe.Pointer(virtualReturn_CArray)}

	return virtualReturn_ma

}

func (this *QNetworkAccessManager) callVirtualBase_CreateRequest(op QNetworkAccessManager__Operation, request *QNetworkRequest, outgoingData *qt6.QIODevice) *QNetworkReply {

	return newQNetworkReply(C.QNetworkAccessManager_virtualbase_createRequest(unsafe.Pointer(this.h), (C.int)(op), request.cPointer(), (*C.QIODevice)(outgoingData.UnsafePointer())))

}
func (this *QNetworkAccessManager) OnCreateRequest(slot func(super func(op QNetworkAccessManager__Operation, request *QNetworkRequest, outgoingData *qt6.QIODevice) *QNetworkReply, op QNetworkAccessManager__Operation, request *QNetworkRequest, outgoingData *qt6.QIODevice) *QNetworkReply) {
	ok := C.QNetworkAccessManager_override_virtual_createRequest(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNetworkAccessManager_createRequest
func miqt_exec_callback_QNetworkAccessManager_createRequest(self *C.QNetworkAccessManager, cb C.intptr_t, op C.int, request *C.QNetworkRequest, outgoingData *C.QIODevice) *C.QNetworkReply {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(op QNetworkAccessManager__Operation, request *QNetworkRequest, outgoingData *qt6.QIODevice) *QNetworkReply, op QNetworkAccessManager__Operation, request *QNetworkRequest, outgoingData *qt6.QIODevice) *QNetworkReply)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QNetworkAccessManager__Operation)(op)

	slotval2 := newQNetworkRequest(request)

	slotval3 := qt6.UnsafeNewQIODevice(unsafe.Pointer(outgoingData))

	virtualReturn := gofunc((&QNetworkAccessManager{h: self}).callVirtualBase_CreateRequest, slotval1, slotval2, slotval3)

	return virtualReturn.cPointer()

}

func (this *QNetworkAccessManager) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QNetworkAccessManager_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QNetworkAccessManager) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QNetworkAccessManager_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNetworkAccessManager_event
func miqt_exec_callback_QNetworkAccessManager_event(self *C.QNetworkAccessManager, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QNetworkAccessManager{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QNetworkAccessManager) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QNetworkAccessManager_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QNetworkAccessManager) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QNetworkAccessManager_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNetworkAccessManager_eventFilter
func miqt_exec_callback_QNetworkAccessManager_eventFilter(self *C.QNetworkAccessManager, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QNetworkAccessManager{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QNetworkAccessManager) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QNetworkAccessManager_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QNetworkAccessManager) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QNetworkAccessManager_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNetworkAccessManager_timerEvent
func miqt_exec_callback_QNetworkAccessManager_timerEvent(self *C.QNetworkAccessManager, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QNetworkAccessManager{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QNetworkAccessManager) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QNetworkAccessManager_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QNetworkAccessManager) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QNetworkAccessManager_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNetworkAccessManager_childEvent
func miqt_exec_callback_QNetworkAccessManager_childEvent(self *C.QNetworkAccessManager, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QNetworkAccessManager{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QNetworkAccessManager) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QNetworkAccessManager_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QNetworkAccessManager) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QNetworkAccessManager_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNetworkAccessManager_customEvent
func miqt_exec_callback_QNetworkAccessManager_customEvent(self *C.QNetworkAccessManager, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QNetworkAccessManager{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QNetworkAccessManager) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QNetworkAccessManager_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QNetworkAccessManager) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QNetworkAccessManager_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNetworkAccessManager_connectNotify
func miqt_exec_callback_QNetworkAccessManager_connectNotify(self *C.QNetworkAccessManager, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QNetworkAccessManager{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QNetworkAccessManager) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QNetworkAccessManager_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QNetworkAccessManager) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QNetworkAccessManager_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNetworkAccessManager_disconnectNotify
func miqt_exec_callback_QNetworkAccessManager_disconnectNotify(self *C.QNetworkAccessManager, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QNetworkAccessManager{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QNetworkAccessManager) Delete() {
	C.QNetworkAccessManager_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QNetworkAccessManager) GoGC() {
	runtime.SetFinalizer(this, func(this *QNetworkAccessManager) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
