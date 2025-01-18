package network

/*

#include "gen_qnetworkaccessmanager.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
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

type QNetworkAccessManager__NetworkAccessibility int

const (
	QNetworkAccessManager__UnknownAccessibility QNetworkAccessManager__NetworkAccessibility = -1
	QNetworkAccessManager__NotAccessible        QNetworkAccessManager__NetworkAccessibility = 0
	QNetworkAccessManager__Accessible           QNetworkAccessManager__NetworkAccessibility = 1
)

type QNetworkAccessManager struct {
	h *C.QNetworkAccessManager
	*qt.QObject
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
		QObject: qt.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
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
func NewQNetworkAccessManager2(parent *qt.QObject) *QNetworkAccessManager {

	return newQNetworkAccessManager(C.QNetworkAccessManager_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QNetworkAccessManager) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QNetworkAccessManager_MetaObject(this.h)))
}

func (this *QNetworkAccessManager) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QNetworkAccessManager_Metacast(this.h, param1_Cstring))
}

func QNetworkAccessManager_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QNetworkAccessManager_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QNetworkAccessManager_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QNetworkAccessManager_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QNetworkAccessManager) SupportedSchemes() []string {
	var _ma C.struct_miqt_array = C.QNetworkAccessManager_SupportedSchemes(this.h)
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
	C.QNetworkAccessManager_ClearAccessCache(this.h)
}

func (this *QNetworkAccessManager) ClearConnectionCache() {
	C.QNetworkAccessManager_ClearConnectionCache(this.h)
}

func (this *QNetworkAccessManager) Proxy() *QNetworkProxy {
	_goptr := newQNetworkProxy(C.QNetworkAccessManager_Proxy(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QNetworkAccessManager) SetProxy(proxy *QNetworkProxy) {
	C.QNetworkAccessManager_SetProxy(this.h, proxy.cPointer())
}

func (this *QNetworkAccessManager) ProxyFactory() *QNetworkProxyFactory {
	return newQNetworkProxyFactory(C.QNetworkAccessManager_ProxyFactory(this.h))
}

func (this *QNetworkAccessManager) SetProxyFactory(factory *QNetworkProxyFactory) {
	C.QNetworkAccessManager_SetProxyFactory(this.h, factory.cPointer())
}

func (this *QNetworkAccessManager) Cache() *QAbstractNetworkCache {
	return newQAbstractNetworkCache(C.QNetworkAccessManager_Cache(this.h))
}

func (this *QNetworkAccessManager) SetCache(cache *QAbstractNetworkCache) {
	C.QNetworkAccessManager_SetCache(this.h, cache.cPointer())
}

func (this *QNetworkAccessManager) CookieJar() *QNetworkCookieJar {
	return newQNetworkCookieJar(C.QNetworkAccessManager_CookieJar(this.h))
}

func (this *QNetworkAccessManager) SetCookieJar(cookieJar *QNetworkCookieJar) {
	C.QNetworkAccessManager_SetCookieJar(this.h, cookieJar.cPointer())
}

func (this *QNetworkAccessManager) SetStrictTransportSecurityEnabled(enabled bool) {
	C.QNetworkAccessManager_SetStrictTransportSecurityEnabled(this.h, (C.bool)(enabled))
}

func (this *QNetworkAccessManager) IsStrictTransportSecurityEnabled() bool {
	return (bool)(C.QNetworkAccessManager_IsStrictTransportSecurityEnabled(this.h))
}

func (this *QNetworkAccessManager) EnableStrictTransportSecurityStore(enabled bool) {
	C.QNetworkAccessManager_EnableStrictTransportSecurityStore(this.h, (C.bool)(enabled))
}

func (this *QNetworkAccessManager) IsStrictTransportSecurityStoreEnabled() bool {
	return (bool)(C.QNetworkAccessManager_IsStrictTransportSecurityStoreEnabled(this.h))
}

func (this *QNetworkAccessManager) AddStrictTransportSecurityHosts(knownHosts []QHstsPolicy) {
	knownHosts_CArray := (*[0xffff]*C.QHstsPolicy)(C.malloc(C.size_t(8 * len(knownHosts))))
	defer C.free(unsafe.Pointer(knownHosts_CArray))
	for i := range knownHosts {
		knownHosts_CArray[i] = knownHosts[i].cPointer()
	}
	knownHosts_ma := C.struct_miqt_array{len: C.size_t(len(knownHosts)), data: unsafe.Pointer(knownHosts_CArray)}
	C.QNetworkAccessManager_AddStrictTransportSecurityHosts(this.h, knownHosts_ma)
}

func (this *QNetworkAccessManager) StrictTransportSecurityHosts() []QHstsPolicy {
	var _ma C.struct_miqt_array = C.QNetworkAccessManager_StrictTransportSecurityHosts(this.h)
	_ret := make([]QHstsPolicy, int(_ma.len))
	_outCast := (*[0xffff]*C.QHstsPolicy)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_vv_goptr := newQHstsPolicy(_outCast[i])
		_vv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_vv_goptr
	}
	return _ret
}

func (this *QNetworkAccessManager) Head(request *QNetworkRequest) *QNetworkReply {
	return newQNetworkReply(C.QNetworkAccessManager_Head(this.h, request.cPointer()))
}

func (this *QNetworkAccessManager) Get(request *QNetworkRequest) *QNetworkReply {
	return newQNetworkReply(C.QNetworkAccessManager_Get(this.h, request.cPointer()))
}

func (this *QNetworkAccessManager) Post(request *QNetworkRequest, data *qt.QIODevice) *QNetworkReply {
	return newQNetworkReply(C.QNetworkAccessManager_Post(this.h, request.cPointer(), (*C.QIODevice)(data.UnsafePointer())))
}

func (this *QNetworkAccessManager) Post2(request *QNetworkRequest, data []byte) *QNetworkReply {
	data_alias := C.struct_miqt_string{}
	data_alias.data = (*C.char)(unsafe.Pointer(&data[0]))
	data_alias.len = C.size_t(len(data))
	return newQNetworkReply(C.QNetworkAccessManager_Post2(this.h, request.cPointer(), data_alias))
}

func (this *QNetworkAccessManager) Put(request *QNetworkRequest, data *qt.QIODevice) *QNetworkReply {
	return newQNetworkReply(C.QNetworkAccessManager_Put(this.h, request.cPointer(), (*C.QIODevice)(data.UnsafePointer())))
}

func (this *QNetworkAccessManager) Put2(request *QNetworkRequest, data []byte) *QNetworkReply {
	data_alias := C.struct_miqt_string{}
	data_alias.data = (*C.char)(unsafe.Pointer(&data[0]))
	data_alias.len = C.size_t(len(data))
	return newQNetworkReply(C.QNetworkAccessManager_Put2(this.h, request.cPointer(), data_alias))
}

func (this *QNetworkAccessManager) DeleteResource(request *QNetworkRequest) *QNetworkReply {
	return newQNetworkReply(C.QNetworkAccessManager_DeleteResource(this.h, request.cPointer()))
}

func (this *QNetworkAccessManager) SendCustomRequest(request *QNetworkRequest, verb []byte) *QNetworkReply {
	verb_alias := C.struct_miqt_string{}
	verb_alias.data = (*C.char)(unsafe.Pointer(&verb[0]))
	verb_alias.len = C.size_t(len(verb))
	return newQNetworkReply(C.QNetworkAccessManager_SendCustomRequest(this.h, request.cPointer(), verb_alias))
}

func (this *QNetworkAccessManager) SendCustomRequest2(request *QNetworkRequest, verb []byte, data []byte) *QNetworkReply {
	verb_alias := C.struct_miqt_string{}
	verb_alias.data = (*C.char)(unsafe.Pointer(&verb[0]))
	verb_alias.len = C.size_t(len(verb))
	data_alias := C.struct_miqt_string{}
	data_alias.data = (*C.char)(unsafe.Pointer(&data[0]))
	data_alias.len = C.size_t(len(data))
	return newQNetworkReply(C.QNetworkAccessManager_SendCustomRequest2(this.h, request.cPointer(), verb_alias, data_alias))
}

func (this *QNetworkAccessManager) Post3(request *QNetworkRequest, multiPart *QHttpMultiPart) *QNetworkReply {
	return newQNetworkReply(C.QNetworkAccessManager_Post3(this.h, request.cPointer(), multiPart.cPointer()))
}

func (this *QNetworkAccessManager) Put3(request *QNetworkRequest, multiPart *QHttpMultiPart) *QNetworkReply {
	return newQNetworkReply(C.QNetworkAccessManager_Put3(this.h, request.cPointer(), multiPart.cPointer()))
}

func (this *QNetworkAccessManager) SendCustomRequest3(request *QNetworkRequest, verb []byte, multiPart *QHttpMultiPart) *QNetworkReply {
	verb_alias := C.struct_miqt_string{}
	verb_alias.data = (*C.char)(unsafe.Pointer(&verb[0]))
	verb_alias.len = C.size_t(len(verb))
	return newQNetworkReply(C.QNetworkAccessManager_SendCustomRequest3(this.h, request.cPointer(), verb_alias, multiPart.cPointer()))
}

func (this *QNetworkAccessManager) SetConfiguration(config *QNetworkConfiguration) {
	C.QNetworkAccessManager_SetConfiguration(this.h, config.cPointer())
}

func (this *QNetworkAccessManager) Configuration() *QNetworkConfiguration {
	_goptr := newQNetworkConfiguration(C.QNetworkAccessManager_Configuration(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QNetworkAccessManager) ActiveConfiguration() *QNetworkConfiguration {
	_goptr := newQNetworkConfiguration(C.QNetworkAccessManager_ActiveConfiguration(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QNetworkAccessManager) SetNetworkAccessible(accessible QNetworkAccessManager__NetworkAccessibility) {
	C.QNetworkAccessManager_SetNetworkAccessible(this.h, (C.int)(accessible))
}

func (this *QNetworkAccessManager) NetworkAccessible() QNetworkAccessManager__NetworkAccessibility {
	return (QNetworkAccessManager__NetworkAccessibility)(C.QNetworkAccessManager_NetworkAccessible(this.h))
}

func (this *QNetworkAccessManager) ConnectToHostEncrypted(hostName string) {
	hostName_ms := C.struct_miqt_string{}
	hostName_ms.data = C.CString(hostName)
	hostName_ms.len = C.size_t(len(hostName))
	defer C.free(unsafe.Pointer(hostName_ms.data))
	C.QNetworkAccessManager_ConnectToHostEncrypted(this.h, hostName_ms)
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
	C.QNetworkAccessManager_ConnectToHostEncrypted2(this.h, hostName_ms, (C.uint16_t)(port), sslConfiguration.cPointer(), peerName_ms)
}

func (this *QNetworkAccessManager) ConnectToHost(hostName string) {
	hostName_ms := C.struct_miqt_string{}
	hostName_ms.data = C.CString(hostName)
	hostName_ms.len = C.size_t(len(hostName))
	defer C.free(unsafe.Pointer(hostName_ms.data))
	C.QNetworkAccessManager_ConnectToHost(this.h, hostName_ms)
}

func (this *QNetworkAccessManager) SetRedirectPolicy(policy QNetworkRequest__RedirectPolicy) {
	C.QNetworkAccessManager_SetRedirectPolicy(this.h, (C.int)(policy))
}

func (this *QNetworkAccessManager) RedirectPolicy() QNetworkRequest__RedirectPolicy {
	return (QNetworkRequest__RedirectPolicy)(C.QNetworkAccessManager_RedirectPolicy(this.h))
}

func (this *QNetworkAccessManager) AutoDeleteReplies() bool {
	return (bool)(C.QNetworkAccessManager_AutoDeleteReplies(this.h))
}

func (this *QNetworkAccessManager) SetAutoDeleteReplies(autoDelete bool) {
	C.QNetworkAccessManager_SetAutoDeleteReplies(this.h, (C.bool)(autoDelete))
}

func (this *QNetworkAccessManager) TransferTimeout() int {
	return (int)(C.QNetworkAccessManager_TransferTimeout(this.h))
}

func (this *QNetworkAccessManager) SetTransferTimeout() {
	C.QNetworkAccessManager_SetTransferTimeout(this.h)
}

func (this *QNetworkAccessManager) ProxyAuthenticationRequired(proxy *QNetworkProxy, authenticator *QAuthenticator) {
	C.QNetworkAccessManager_ProxyAuthenticationRequired(this.h, proxy.cPointer(), authenticator.cPointer())
}
func (this *QNetworkAccessManager) OnProxyAuthenticationRequired(slot func(proxy *QNetworkProxy, authenticator *QAuthenticator)) {
	C.QNetworkAccessManager_connect_ProxyAuthenticationRequired(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QNetworkAccessManager_ProxyAuthenticationRequired
func miqt_exec_callback_QNetworkAccessManager_ProxyAuthenticationRequired(cb C.intptr_t, proxy *C.QNetworkProxy, authenticator *C.QAuthenticator) {
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
	C.QNetworkAccessManager_AuthenticationRequired(this.h, reply.cPointer(), authenticator.cPointer())
}
func (this *QNetworkAccessManager) OnAuthenticationRequired(slot func(reply *QNetworkReply, authenticator *QAuthenticator)) {
	C.QNetworkAccessManager_connect_AuthenticationRequired(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QNetworkAccessManager_AuthenticationRequired
func miqt_exec_callback_QNetworkAccessManager_AuthenticationRequired(cb C.intptr_t, reply *C.QNetworkReply, authenticator *C.QAuthenticator) {
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
	C.QNetworkAccessManager_Finished(this.h, reply.cPointer())
}
func (this *QNetworkAccessManager) OnFinished(slot func(reply *QNetworkReply)) {
	C.QNetworkAccessManager_connect_Finished(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QNetworkAccessManager_Finished
func miqt_exec_callback_QNetworkAccessManager_Finished(cb C.intptr_t, reply *C.QNetworkReply) {
	gofunc, ok := cgo.Handle(cb).Value().(func(reply *QNetworkReply))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQNetworkReply(reply)

	gofunc(slotval1)
}

func (this *QNetworkAccessManager) Encrypted(reply *QNetworkReply) {
	C.QNetworkAccessManager_Encrypted(this.h, reply.cPointer())
}
func (this *QNetworkAccessManager) OnEncrypted(slot func(reply *QNetworkReply)) {
	C.QNetworkAccessManager_connect_Encrypted(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QNetworkAccessManager_Encrypted
func miqt_exec_callback_QNetworkAccessManager_Encrypted(cb C.intptr_t, reply *C.QNetworkReply) {
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
	C.QNetworkAccessManager_SslErrors(this.h, reply.cPointer(), errors_ma)
}
func (this *QNetworkAccessManager) OnSslErrors(slot func(reply *QNetworkReply, errors []QSslError)) {
	C.QNetworkAccessManager_connect_SslErrors(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QNetworkAccessManager_SslErrors
func miqt_exec_callback_QNetworkAccessManager_SslErrors(cb C.intptr_t, reply *C.QNetworkReply, errors C.struct_miqt_array) {
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
	C.QNetworkAccessManager_PreSharedKeyAuthenticationRequired(this.h, reply.cPointer(), authenticator.cPointer())
}
func (this *QNetworkAccessManager) OnPreSharedKeyAuthenticationRequired(slot func(reply *QNetworkReply, authenticator *QSslPreSharedKeyAuthenticator)) {
	C.QNetworkAccessManager_connect_PreSharedKeyAuthenticationRequired(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QNetworkAccessManager_PreSharedKeyAuthenticationRequired
func miqt_exec_callback_QNetworkAccessManager_PreSharedKeyAuthenticationRequired(cb C.intptr_t, reply *C.QNetworkReply, authenticator *C.QSslPreSharedKeyAuthenticator) {
	gofunc, ok := cgo.Handle(cb).Value().(func(reply *QNetworkReply, authenticator *QSslPreSharedKeyAuthenticator))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQNetworkReply(reply)

	slotval2 := newQSslPreSharedKeyAuthenticator(authenticator)

	gofunc(slotval1, slotval2)
}

func (this *QNetworkAccessManager) NetworkSessionConnected() {
	C.QNetworkAccessManager_NetworkSessionConnected(this.h)
}
func (this *QNetworkAccessManager) OnNetworkSessionConnected(slot func()) {
	C.QNetworkAccessManager_connect_NetworkSessionConnected(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QNetworkAccessManager_NetworkSessionConnected
func miqt_exec_callback_QNetworkAccessManager_NetworkSessionConnected(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QNetworkAccessManager) NetworkAccessibleChanged(accessible QNetworkAccessManager__NetworkAccessibility) {
	C.QNetworkAccessManager_NetworkAccessibleChanged(this.h, (C.int)(accessible))
}
func (this *QNetworkAccessManager) OnNetworkAccessibleChanged(slot func(accessible QNetworkAccessManager__NetworkAccessibility)) {
	C.QNetworkAccessManager_connect_NetworkAccessibleChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QNetworkAccessManager_NetworkAccessibleChanged
func miqt_exec_callback_QNetworkAccessManager_NetworkAccessibleChanged(cb C.intptr_t, accessible C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(accessible QNetworkAccessManager__NetworkAccessibility))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QNetworkAccessManager__NetworkAccessibility)(accessible)

	gofunc(slotval1)
}

func QNetworkAccessManager_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QNetworkAccessManager_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QNetworkAccessManager_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QNetworkAccessManager_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QNetworkAccessManager_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QNetworkAccessManager_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QNetworkAccessManager_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QNetworkAccessManager_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QNetworkAccessManager) EnableStrictTransportSecurityStore2(enabled bool, storeDir string) {
	storeDir_ms := C.struct_miqt_string{}
	storeDir_ms.data = C.CString(storeDir)
	storeDir_ms.len = C.size_t(len(storeDir))
	defer C.free(unsafe.Pointer(storeDir_ms.data))
	C.QNetworkAccessManager_EnableStrictTransportSecurityStore2(this.h, (C.bool)(enabled), storeDir_ms)
}

func (this *QNetworkAccessManager) SendCustomRequest32(request *QNetworkRequest, verb []byte, data *qt.QIODevice) *QNetworkReply {
	verb_alias := C.struct_miqt_string{}
	verb_alias.data = (*C.char)(unsafe.Pointer(&verb[0]))
	verb_alias.len = C.size_t(len(verb))
	return newQNetworkReply(C.QNetworkAccessManager_SendCustomRequest32(this.h, request.cPointer(), verb_alias, (*C.QIODevice)(data.UnsafePointer())))
}

func (this *QNetworkAccessManager) ConnectToHostEncrypted22(hostName string, port uint16) {
	hostName_ms := C.struct_miqt_string{}
	hostName_ms.data = C.CString(hostName)
	hostName_ms.len = C.size_t(len(hostName))
	defer C.free(unsafe.Pointer(hostName_ms.data))
	C.QNetworkAccessManager_ConnectToHostEncrypted22(this.h, hostName_ms, (C.uint16_t)(port))
}

func (this *QNetworkAccessManager) ConnectToHostEncrypted3(hostName string, port uint16, sslConfiguration *QSslConfiguration) {
	hostName_ms := C.struct_miqt_string{}
	hostName_ms.data = C.CString(hostName)
	hostName_ms.len = C.size_t(len(hostName))
	defer C.free(unsafe.Pointer(hostName_ms.data))
	C.QNetworkAccessManager_ConnectToHostEncrypted3(this.h, hostName_ms, (C.uint16_t)(port), sslConfiguration.cPointer())
}

func (this *QNetworkAccessManager) ConnectToHost2(hostName string, port uint16) {
	hostName_ms := C.struct_miqt_string{}
	hostName_ms.data = C.CString(hostName)
	hostName_ms.len = C.size_t(len(hostName))
	defer C.free(unsafe.Pointer(hostName_ms.data))
	C.QNetworkAccessManager_ConnectToHost2(this.h, hostName_ms, (C.uint16_t)(port))
}

func (this *QNetworkAccessManager) SetTransferTimeout1(timeout int) {
	C.QNetworkAccessManager_SetTransferTimeout1(this.h, (C.int)(timeout))
}

func (this *QNetworkAccessManager) callVirtualBase_CreateRequest(op QNetworkAccessManager__Operation, request *QNetworkRequest, outgoingData *qt.QIODevice) *QNetworkReply {

	return newQNetworkReply(C.QNetworkAccessManager_virtualbase_CreateRequest(unsafe.Pointer(this.h), (C.int)(op), request.cPointer(), (*C.QIODevice)(outgoingData.UnsafePointer())))

}
func (this *QNetworkAccessManager) OnCreateRequest(slot func(super func(op QNetworkAccessManager__Operation, request *QNetworkRequest, outgoingData *qt.QIODevice) *QNetworkReply, op QNetworkAccessManager__Operation, request *QNetworkRequest, outgoingData *qt.QIODevice) *QNetworkReply) {
	ok := C.QNetworkAccessManager_override_virtual_CreateRequest(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNetworkAccessManager_CreateRequest
func miqt_exec_callback_QNetworkAccessManager_CreateRequest(self *C.QNetworkAccessManager, cb C.intptr_t, op C.int, request *C.QNetworkRequest, outgoingData *C.QIODevice) *C.QNetworkReply {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(op QNetworkAccessManager__Operation, request *QNetworkRequest, outgoingData *qt.QIODevice) *QNetworkReply, op QNetworkAccessManager__Operation, request *QNetworkRequest, outgoingData *qt.QIODevice) *QNetworkReply)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QNetworkAccessManager__Operation)(op)

	slotval2 := newQNetworkRequest(request)

	slotval3 := qt.UnsafeNewQIODevice(unsafe.Pointer(outgoingData))

	virtualReturn := gofunc((&QNetworkAccessManager{h: self}).callVirtualBase_CreateRequest, slotval1, slotval2, slotval3)

	return virtualReturn.cPointer()

}

func (this *QNetworkAccessManager) callVirtualBase_Event(event *qt.QEvent) bool {

	return (bool)(C.QNetworkAccessManager_virtualbase_Event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QNetworkAccessManager) OnEvent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	ok := C.QNetworkAccessManager_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNetworkAccessManager_Event
func miqt_exec_callback_QNetworkAccessManager_Event(self *C.QNetworkAccessManager, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QNetworkAccessManager{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QNetworkAccessManager) callVirtualBase_EventFilter(watched *qt.QObject, event *qt.QEvent) bool {

	return (bool)(C.QNetworkAccessManager_virtualbase_EventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QNetworkAccessManager) OnEventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	ok := C.QNetworkAccessManager_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNetworkAccessManager_EventFilter
func miqt_exec_callback_QNetworkAccessManager_EventFilter(self *C.QNetworkAccessManager, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QNetworkAccessManager{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QNetworkAccessManager) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.QNetworkAccessManager_virtualbase_TimerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QNetworkAccessManager) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	ok := C.QNetworkAccessManager_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNetworkAccessManager_TimerEvent
func miqt_exec_callback_QNetworkAccessManager_TimerEvent(self *C.QNetworkAccessManager, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QNetworkAccessManager{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QNetworkAccessManager) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QNetworkAccessManager_virtualbase_ChildEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QNetworkAccessManager) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	ok := C.QNetworkAccessManager_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNetworkAccessManager_ChildEvent
func miqt_exec_callback_QNetworkAccessManager_ChildEvent(self *C.QNetworkAccessManager, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QNetworkAccessManager{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QNetworkAccessManager) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QNetworkAccessManager_virtualbase_CustomEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QNetworkAccessManager) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QNetworkAccessManager_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNetworkAccessManager_CustomEvent
func miqt_exec_callback_QNetworkAccessManager_CustomEvent(self *C.QNetworkAccessManager, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QNetworkAccessManager{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QNetworkAccessManager) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QNetworkAccessManager_virtualbase_ConnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QNetworkAccessManager) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QNetworkAccessManager_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNetworkAccessManager_ConnectNotify
func miqt_exec_callback_QNetworkAccessManager_ConnectNotify(self *C.QNetworkAccessManager, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QNetworkAccessManager{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QNetworkAccessManager) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QNetworkAccessManager_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QNetworkAccessManager) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QNetworkAccessManager_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNetworkAccessManager_DisconnectNotify
func miqt_exec_callback_QNetworkAccessManager_DisconnectNotify(self *C.QNetworkAccessManager, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QNetworkAccessManager{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QNetworkAccessManager) Delete() {
	C.QNetworkAccessManager_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QNetworkAccessManager) GoGC() {
	runtime.SetFinalizer(this, func(this *QNetworkAccessManager) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
