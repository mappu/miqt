package network

/*

#include "gen_qnetworkproxy.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QNetworkProxyQuery__QueryType int

const (
	QNetworkProxyQuery__TcpSocket  QNetworkProxyQuery__QueryType = 0
	QNetworkProxyQuery__UdpSocket  QNetworkProxyQuery__QueryType = 1
	QNetworkProxyQuery__SctpSocket QNetworkProxyQuery__QueryType = 2
	QNetworkProxyQuery__TcpServer  QNetworkProxyQuery__QueryType = 100
	QNetworkProxyQuery__UrlRequest QNetworkProxyQuery__QueryType = 101
	QNetworkProxyQuery__SctpServer QNetworkProxyQuery__QueryType = 102
)

type QNetworkProxy__ProxyType int

const (
	QNetworkProxy__DefaultProxy     QNetworkProxy__ProxyType = 0
	QNetworkProxy__Socks5Proxy      QNetworkProxy__ProxyType = 1
	QNetworkProxy__NoProxy          QNetworkProxy__ProxyType = 2
	QNetworkProxy__HttpProxy        QNetworkProxy__ProxyType = 3
	QNetworkProxy__HttpCachingProxy QNetworkProxy__ProxyType = 4
	QNetworkProxy__FtpCachingProxy  QNetworkProxy__ProxyType = 5
)

type QNetworkProxy__Capability int

const (
	QNetworkProxy__TunnelingCapability      QNetworkProxy__Capability = 1
	QNetworkProxy__ListeningCapability      QNetworkProxy__Capability = 2
	QNetworkProxy__UdpTunnelingCapability   QNetworkProxy__Capability = 4
	QNetworkProxy__CachingCapability        QNetworkProxy__Capability = 8
	QNetworkProxy__HostNameLookupCapability QNetworkProxy__Capability = 16
	QNetworkProxy__SctpTunnelingCapability  QNetworkProxy__Capability = 32
	QNetworkProxy__SctpListeningCapability  QNetworkProxy__Capability = 64
)

type QNetworkProxyQuery struct {
	h          *C.QNetworkProxyQuery
	isSubclass bool
}

func (this *QNetworkProxyQuery) cPointer() *C.QNetworkProxyQuery {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QNetworkProxyQuery) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQNetworkProxyQuery constructs the type using only CGO pointers.
func newQNetworkProxyQuery(h *C.QNetworkProxyQuery) *QNetworkProxyQuery {
	if h == nil {
		return nil
	}
	return &QNetworkProxyQuery{h: h}
}

// UnsafeNewQNetworkProxyQuery constructs the type using only unsafe pointers.
func UnsafeNewQNetworkProxyQuery(h unsafe.Pointer) *QNetworkProxyQuery {
	if h == nil {
		return nil
	}

	return &QNetworkProxyQuery{h: (*C.QNetworkProxyQuery)(h)}
}

// NewQNetworkProxyQuery constructs a new QNetworkProxyQuery object.
func NewQNetworkProxyQuery() *QNetworkProxyQuery {
	var outptr_QNetworkProxyQuery *C.QNetworkProxyQuery = nil

	C.QNetworkProxyQuery_new(&outptr_QNetworkProxyQuery)
	ret := newQNetworkProxyQuery(outptr_QNetworkProxyQuery)
	ret.isSubclass = true
	return ret
}

// NewQNetworkProxyQuery2 constructs a new QNetworkProxyQuery object.
func NewQNetworkProxyQuery2(requestUrl *qt.QUrl) *QNetworkProxyQuery {
	var outptr_QNetworkProxyQuery *C.QNetworkProxyQuery = nil

	C.QNetworkProxyQuery_new2((*C.QUrl)(requestUrl.UnsafePointer()), &outptr_QNetworkProxyQuery)
	ret := newQNetworkProxyQuery(outptr_QNetworkProxyQuery)
	ret.isSubclass = true
	return ret
}

// NewQNetworkProxyQuery3 constructs a new QNetworkProxyQuery object.
func NewQNetworkProxyQuery3(hostname string, port int) *QNetworkProxyQuery {
	hostname_ms := C.struct_miqt_string{}
	hostname_ms.data = C.CString(hostname)
	hostname_ms.len = C.size_t(len(hostname))
	defer C.free(unsafe.Pointer(hostname_ms.data))
	var outptr_QNetworkProxyQuery *C.QNetworkProxyQuery = nil

	C.QNetworkProxyQuery_new3(hostname_ms, (C.int)(port), &outptr_QNetworkProxyQuery)
	ret := newQNetworkProxyQuery(outptr_QNetworkProxyQuery)
	ret.isSubclass = true
	return ret
}

// NewQNetworkProxyQuery4 constructs a new QNetworkProxyQuery object.
func NewQNetworkProxyQuery4(bindPort uint16) *QNetworkProxyQuery {
	var outptr_QNetworkProxyQuery *C.QNetworkProxyQuery = nil

	C.QNetworkProxyQuery_new4((C.uint16_t)(bindPort), &outptr_QNetworkProxyQuery)
	ret := newQNetworkProxyQuery(outptr_QNetworkProxyQuery)
	ret.isSubclass = true
	return ret
}

// NewQNetworkProxyQuery5 constructs a new QNetworkProxyQuery object.
func NewQNetworkProxyQuery5(networkConfiguration *QNetworkConfiguration, requestUrl *qt.QUrl) *QNetworkProxyQuery {
	var outptr_QNetworkProxyQuery *C.QNetworkProxyQuery = nil

	C.QNetworkProxyQuery_new5(networkConfiguration.cPointer(), (*C.QUrl)(requestUrl.UnsafePointer()), &outptr_QNetworkProxyQuery)
	ret := newQNetworkProxyQuery(outptr_QNetworkProxyQuery)
	ret.isSubclass = true
	return ret
}

// NewQNetworkProxyQuery6 constructs a new QNetworkProxyQuery object.
func NewQNetworkProxyQuery6(networkConfiguration *QNetworkConfiguration, hostname string, port int) *QNetworkProxyQuery {
	hostname_ms := C.struct_miqt_string{}
	hostname_ms.data = C.CString(hostname)
	hostname_ms.len = C.size_t(len(hostname))
	defer C.free(unsafe.Pointer(hostname_ms.data))
	var outptr_QNetworkProxyQuery *C.QNetworkProxyQuery = nil

	C.QNetworkProxyQuery_new6(networkConfiguration.cPointer(), hostname_ms, (C.int)(port), &outptr_QNetworkProxyQuery)
	ret := newQNetworkProxyQuery(outptr_QNetworkProxyQuery)
	ret.isSubclass = true
	return ret
}

// NewQNetworkProxyQuery7 constructs a new QNetworkProxyQuery object.
func NewQNetworkProxyQuery7(networkConfiguration *QNetworkConfiguration, bindPort uint16) *QNetworkProxyQuery {
	var outptr_QNetworkProxyQuery *C.QNetworkProxyQuery = nil

	C.QNetworkProxyQuery_new7(networkConfiguration.cPointer(), (C.uint16_t)(bindPort), &outptr_QNetworkProxyQuery)
	ret := newQNetworkProxyQuery(outptr_QNetworkProxyQuery)
	ret.isSubclass = true
	return ret
}

// NewQNetworkProxyQuery8 constructs a new QNetworkProxyQuery object.
func NewQNetworkProxyQuery8(other *QNetworkProxyQuery) *QNetworkProxyQuery {
	var outptr_QNetworkProxyQuery *C.QNetworkProxyQuery = nil

	C.QNetworkProxyQuery_new8(other.cPointer(), &outptr_QNetworkProxyQuery)
	ret := newQNetworkProxyQuery(outptr_QNetworkProxyQuery)
	ret.isSubclass = true
	return ret
}

// NewQNetworkProxyQuery9 constructs a new QNetworkProxyQuery object.
func NewQNetworkProxyQuery9(requestUrl *qt.QUrl, queryType QNetworkProxyQuery__QueryType) *QNetworkProxyQuery {
	var outptr_QNetworkProxyQuery *C.QNetworkProxyQuery = nil

	C.QNetworkProxyQuery_new9((*C.QUrl)(requestUrl.UnsafePointer()), (C.int)(queryType), &outptr_QNetworkProxyQuery)
	ret := newQNetworkProxyQuery(outptr_QNetworkProxyQuery)
	ret.isSubclass = true
	return ret
}

// NewQNetworkProxyQuery10 constructs a new QNetworkProxyQuery object.
func NewQNetworkProxyQuery10(hostname string, port int, protocolTag string) *QNetworkProxyQuery {
	hostname_ms := C.struct_miqt_string{}
	hostname_ms.data = C.CString(hostname)
	hostname_ms.len = C.size_t(len(hostname))
	defer C.free(unsafe.Pointer(hostname_ms.data))
	protocolTag_ms := C.struct_miqt_string{}
	protocolTag_ms.data = C.CString(protocolTag)
	protocolTag_ms.len = C.size_t(len(protocolTag))
	defer C.free(unsafe.Pointer(protocolTag_ms.data))
	var outptr_QNetworkProxyQuery *C.QNetworkProxyQuery = nil

	C.QNetworkProxyQuery_new10(hostname_ms, (C.int)(port), protocolTag_ms, &outptr_QNetworkProxyQuery)
	ret := newQNetworkProxyQuery(outptr_QNetworkProxyQuery)
	ret.isSubclass = true
	return ret
}

// NewQNetworkProxyQuery11 constructs a new QNetworkProxyQuery object.
func NewQNetworkProxyQuery11(hostname string, port int, protocolTag string, queryType QNetworkProxyQuery__QueryType) *QNetworkProxyQuery {
	hostname_ms := C.struct_miqt_string{}
	hostname_ms.data = C.CString(hostname)
	hostname_ms.len = C.size_t(len(hostname))
	defer C.free(unsafe.Pointer(hostname_ms.data))
	protocolTag_ms := C.struct_miqt_string{}
	protocolTag_ms.data = C.CString(protocolTag)
	protocolTag_ms.len = C.size_t(len(protocolTag))
	defer C.free(unsafe.Pointer(protocolTag_ms.data))
	var outptr_QNetworkProxyQuery *C.QNetworkProxyQuery = nil

	C.QNetworkProxyQuery_new11(hostname_ms, (C.int)(port), protocolTag_ms, (C.int)(queryType), &outptr_QNetworkProxyQuery)
	ret := newQNetworkProxyQuery(outptr_QNetworkProxyQuery)
	ret.isSubclass = true
	return ret
}

// NewQNetworkProxyQuery12 constructs a new QNetworkProxyQuery object.
func NewQNetworkProxyQuery12(bindPort uint16, protocolTag string) *QNetworkProxyQuery {
	protocolTag_ms := C.struct_miqt_string{}
	protocolTag_ms.data = C.CString(protocolTag)
	protocolTag_ms.len = C.size_t(len(protocolTag))
	defer C.free(unsafe.Pointer(protocolTag_ms.data))
	var outptr_QNetworkProxyQuery *C.QNetworkProxyQuery = nil

	C.QNetworkProxyQuery_new12((C.uint16_t)(bindPort), protocolTag_ms, &outptr_QNetworkProxyQuery)
	ret := newQNetworkProxyQuery(outptr_QNetworkProxyQuery)
	ret.isSubclass = true
	return ret
}

// NewQNetworkProxyQuery13 constructs a new QNetworkProxyQuery object.
func NewQNetworkProxyQuery13(bindPort uint16, protocolTag string, queryType QNetworkProxyQuery__QueryType) *QNetworkProxyQuery {
	protocolTag_ms := C.struct_miqt_string{}
	protocolTag_ms.data = C.CString(protocolTag)
	protocolTag_ms.len = C.size_t(len(protocolTag))
	defer C.free(unsafe.Pointer(protocolTag_ms.data))
	var outptr_QNetworkProxyQuery *C.QNetworkProxyQuery = nil

	C.QNetworkProxyQuery_new13((C.uint16_t)(bindPort), protocolTag_ms, (C.int)(queryType), &outptr_QNetworkProxyQuery)
	ret := newQNetworkProxyQuery(outptr_QNetworkProxyQuery)
	ret.isSubclass = true
	return ret
}

// NewQNetworkProxyQuery14 constructs a new QNetworkProxyQuery object.
func NewQNetworkProxyQuery14(networkConfiguration *QNetworkConfiguration, requestUrl *qt.QUrl, queryType QNetworkProxyQuery__QueryType) *QNetworkProxyQuery {
	var outptr_QNetworkProxyQuery *C.QNetworkProxyQuery = nil

	C.QNetworkProxyQuery_new14(networkConfiguration.cPointer(), (*C.QUrl)(requestUrl.UnsafePointer()), (C.int)(queryType), &outptr_QNetworkProxyQuery)
	ret := newQNetworkProxyQuery(outptr_QNetworkProxyQuery)
	ret.isSubclass = true
	return ret
}

// NewQNetworkProxyQuery15 constructs a new QNetworkProxyQuery object.
func NewQNetworkProxyQuery15(networkConfiguration *QNetworkConfiguration, hostname string, port int, protocolTag string) *QNetworkProxyQuery {
	hostname_ms := C.struct_miqt_string{}
	hostname_ms.data = C.CString(hostname)
	hostname_ms.len = C.size_t(len(hostname))
	defer C.free(unsafe.Pointer(hostname_ms.data))
	protocolTag_ms := C.struct_miqt_string{}
	protocolTag_ms.data = C.CString(protocolTag)
	protocolTag_ms.len = C.size_t(len(protocolTag))
	defer C.free(unsafe.Pointer(protocolTag_ms.data))
	var outptr_QNetworkProxyQuery *C.QNetworkProxyQuery = nil

	C.QNetworkProxyQuery_new15(networkConfiguration.cPointer(), hostname_ms, (C.int)(port), protocolTag_ms, &outptr_QNetworkProxyQuery)
	ret := newQNetworkProxyQuery(outptr_QNetworkProxyQuery)
	ret.isSubclass = true
	return ret
}

// NewQNetworkProxyQuery16 constructs a new QNetworkProxyQuery object.
func NewQNetworkProxyQuery16(networkConfiguration *QNetworkConfiguration, hostname string, port int, protocolTag string, queryType QNetworkProxyQuery__QueryType) *QNetworkProxyQuery {
	hostname_ms := C.struct_miqt_string{}
	hostname_ms.data = C.CString(hostname)
	hostname_ms.len = C.size_t(len(hostname))
	defer C.free(unsafe.Pointer(hostname_ms.data))
	protocolTag_ms := C.struct_miqt_string{}
	protocolTag_ms.data = C.CString(protocolTag)
	protocolTag_ms.len = C.size_t(len(protocolTag))
	defer C.free(unsafe.Pointer(protocolTag_ms.data))
	var outptr_QNetworkProxyQuery *C.QNetworkProxyQuery = nil

	C.QNetworkProxyQuery_new16(networkConfiguration.cPointer(), hostname_ms, (C.int)(port), protocolTag_ms, (C.int)(queryType), &outptr_QNetworkProxyQuery)
	ret := newQNetworkProxyQuery(outptr_QNetworkProxyQuery)
	ret.isSubclass = true
	return ret
}

// NewQNetworkProxyQuery17 constructs a new QNetworkProxyQuery object.
func NewQNetworkProxyQuery17(networkConfiguration *QNetworkConfiguration, bindPort uint16, protocolTag string) *QNetworkProxyQuery {
	protocolTag_ms := C.struct_miqt_string{}
	protocolTag_ms.data = C.CString(protocolTag)
	protocolTag_ms.len = C.size_t(len(protocolTag))
	defer C.free(unsafe.Pointer(protocolTag_ms.data))
	var outptr_QNetworkProxyQuery *C.QNetworkProxyQuery = nil

	C.QNetworkProxyQuery_new17(networkConfiguration.cPointer(), (C.uint16_t)(bindPort), protocolTag_ms, &outptr_QNetworkProxyQuery)
	ret := newQNetworkProxyQuery(outptr_QNetworkProxyQuery)
	ret.isSubclass = true
	return ret
}

// NewQNetworkProxyQuery18 constructs a new QNetworkProxyQuery object.
func NewQNetworkProxyQuery18(networkConfiguration *QNetworkConfiguration, bindPort uint16, protocolTag string, queryType QNetworkProxyQuery__QueryType) *QNetworkProxyQuery {
	protocolTag_ms := C.struct_miqt_string{}
	protocolTag_ms.data = C.CString(protocolTag)
	protocolTag_ms.len = C.size_t(len(protocolTag))
	defer C.free(unsafe.Pointer(protocolTag_ms.data))
	var outptr_QNetworkProxyQuery *C.QNetworkProxyQuery = nil

	C.QNetworkProxyQuery_new18(networkConfiguration.cPointer(), (C.uint16_t)(bindPort), protocolTag_ms, (C.int)(queryType), &outptr_QNetworkProxyQuery)
	ret := newQNetworkProxyQuery(outptr_QNetworkProxyQuery)
	ret.isSubclass = true
	return ret
}

func (this *QNetworkProxyQuery) OperatorAssign(other *QNetworkProxyQuery) {
	C.QNetworkProxyQuery_OperatorAssign(this.h, other.cPointer())
}

func (this *QNetworkProxyQuery) Swap(other *QNetworkProxyQuery) {
	C.QNetworkProxyQuery_Swap(this.h, other.cPointer())
}

func (this *QNetworkProxyQuery) OperatorEqual(other *QNetworkProxyQuery) bool {
	return (bool)(C.QNetworkProxyQuery_OperatorEqual(this.h, other.cPointer()))
}

func (this *QNetworkProxyQuery) OperatorNotEqual(other *QNetworkProxyQuery) bool {
	return (bool)(C.QNetworkProxyQuery_OperatorNotEqual(this.h, other.cPointer()))
}

func (this *QNetworkProxyQuery) QueryType() QNetworkProxyQuery__QueryType {
	return (QNetworkProxyQuery__QueryType)(C.QNetworkProxyQuery_QueryType(this.h))
}

func (this *QNetworkProxyQuery) SetQueryType(typeVal QNetworkProxyQuery__QueryType) {
	C.QNetworkProxyQuery_SetQueryType(this.h, (C.int)(typeVal))
}

func (this *QNetworkProxyQuery) PeerPort() int {
	return (int)(C.QNetworkProxyQuery_PeerPort(this.h))
}

func (this *QNetworkProxyQuery) SetPeerPort(port int) {
	C.QNetworkProxyQuery_SetPeerPort(this.h, (C.int)(port))
}

func (this *QNetworkProxyQuery) PeerHostName() string {
	var _ms C.struct_miqt_string = C.QNetworkProxyQuery_PeerHostName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QNetworkProxyQuery) SetPeerHostName(hostname string) {
	hostname_ms := C.struct_miqt_string{}
	hostname_ms.data = C.CString(hostname)
	hostname_ms.len = C.size_t(len(hostname))
	defer C.free(unsafe.Pointer(hostname_ms.data))
	C.QNetworkProxyQuery_SetPeerHostName(this.h, hostname_ms)
}

func (this *QNetworkProxyQuery) LocalPort() int {
	return (int)(C.QNetworkProxyQuery_LocalPort(this.h))
}

func (this *QNetworkProxyQuery) SetLocalPort(port int) {
	C.QNetworkProxyQuery_SetLocalPort(this.h, (C.int)(port))
}

func (this *QNetworkProxyQuery) ProtocolTag() string {
	var _ms C.struct_miqt_string = C.QNetworkProxyQuery_ProtocolTag(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QNetworkProxyQuery) SetProtocolTag(protocolTag string) {
	protocolTag_ms := C.struct_miqt_string{}
	protocolTag_ms.data = C.CString(protocolTag)
	protocolTag_ms.len = C.size_t(len(protocolTag))
	defer C.free(unsafe.Pointer(protocolTag_ms.data))
	C.QNetworkProxyQuery_SetProtocolTag(this.h, protocolTag_ms)
}

func (this *QNetworkProxyQuery) Url() *qt.QUrl {
	_ret := C.QNetworkProxyQuery_Url(this.h)
	_goptr := qt.UnsafeNewQUrl(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QNetworkProxyQuery) SetUrl(url *qt.QUrl) {
	C.QNetworkProxyQuery_SetUrl(this.h, (*C.QUrl)(url.UnsafePointer()))
}

func (this *QNetworkProxyQuery) NetworkConfiguration() *QNetworkConfiguration {
	_ret := C.QNetworkProxyQuery_NetworkConfiguration(this.h)
	_goptr := newQNetworkConfiguration(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QNetworkProxyQuery) SetNetworkConfiguration(networkConfiguration *QNetworkConfiguration) {
	C.QNetworkProxyQuery_SetNetworkConfiguration(this.h, networkConfiguration.cPointer())
}

// Delete this object from C++ memory.
func (this *QNetworkProxyQuery) Delete() {
	C.QNetworkProxyQuery_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QNetworkProxyQuery) GoGC() {
	runtime.SetFinalizer(this, func(this *QNetworkProxyQuery) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QNetworkProxy struct {
	h          *C.QNetworkProxy
	isSubclass bool
}

func (this *QNetworkProxy) cPointer() *C.QNetworkProxy {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QNetworkProxy) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQNetworkProxy constructs the type using only CGO pointers.
func newQNetworkProxy(h *C.QNetworkProxy) *QNetworkProxy {
	if h == nil {
		return nil
	}
	return &QNetworkProxy{h: h}
}

// UnsafeNewQNetworkProxy constructs the type using only unsafe pointers.
func UnsafeNewQNetworkProxy(h unsafe.Pointer) *QNetworkProxy {
	if h == nil {
		return nil
	}

	return &QNetworkProxy{h: (*C.QNetworkProxy)(h)}
}

// NewQNetworkProxy constructs a new QNetworkProxy object.
func NewQNetworkProxy() *QNetworkProxy {
	var outptr_QNetworkProxy *C.QNetworkProxy = nil

	C.QNetworkProxy_new(&outptr_QNetworkProxy)
	ret := newQNetworkProxy(outptr_QNetworkProxy)
	ret.isSubclass = true
	return ret
}

// NewQNetworkProxy2 constructs a new QNetworkProxy object.
func NewQNetworkProxy2(typeVal QNetworkProxy__ProxyType) *QNetworkProxy {
	var outptr_QNetworkProxy *C.QNetworkProxy = nil

	C.QNetworkProxy_new2((C.int)(typeVal), &outptr_QNetworkProxy)
	ret := newQNetworkProxy(outptr_QNetworkProxy)
	ret.isSubclass = true
	return ret
}

// NewQNetworkProxy3 constructs a new QNetworkProxy object.
func NewQNetworkProxy3(other *QNetworkProxy) *QNetworkProxy {
	var outptr_QNetworkProxy *C.QNetworkProxy = nil

	C.QNetworkProxy_new3(other.cPointer(), &outptr_QNetworkProxy)
	ret := newQNetworkProxy(outptr_QNetworkProxy)
	ret.isSubclass = true
	return ret
}

// NewQNetworkProxy4 constructs a new QNetworkProxy object.
func NewQNetworkProxy4(typeVal QNetworkProxy__ProxyType, hostName string) *QNetworkProxy {
	hostName_ms := C.struct_miqt_string{}
	hostName_ms.data = C.CString(hostName)
	hostName_ms.len = C.size_t(len(hostName))
	defer C.free(unsafe.Pointer(hostName_ms.data))
	var outptr_QNetworkProxy *C.QNetworkProxy = nil

	C.QNetworkProxy_new4((C.int)(typeVal), hostName_ms, &outptr_QNetworkProxy)
	ret := newQNetworkProxy(outptr_QNetworkProxy)
	ret.isSubclass = true
	return ret
}

// NewQNetworkProxy5 constructs a new QNetworkProxy object.
func NewQNetworkProxy5(typeVal QNetworkProxy__ProxyType, hostName string, port uint16) *QNetworkProxy {
	hostName_ms := C.struct_miqt_string{}
	hostName_ms.data = C.CString(hostName)
	hostName_ms.len = C.size_t(len(hostName))
	defer C.free(unsafe.Pointer(hostName_ms.data))
	var outptr_QNetworkProxy *C.QNetworkProxy = nil

	C.QNetworkProxy_new5((C.int)(typeVal), hostName_ms, (C.uint16_t)(port), &outptr_QNetworkProxy)
	ret := newQNetworkProxy(outptr_QNetworkProxy)
	ret.isSubclass = true
	return ret
}

// NewQNetworkProxy6 constructs a new QNetworkProxy object.
func NewQNetworkProxy6(typeVal QNetworkProxy__ProxyType, hostName string, port uint16, user string) *QNetworkProxy {
	hostName_ms := C.struct_miqt_string{}
	hostName_ms.data = C.CString(hostName)
	hostName_ms.len = C.size_t(len(hostName))
	defer C.free(unsafe.Pointer(hostName_ms.data))
	user_ms := C.struct_miqt_string{}
	user_ms.data = C.CString(user)
	user_ms.len = C.size_t(len(user))
	defer C.free(unsafe.Pointer(user_ms.data))
	var outptr_QNetworkProxy *C.QNetworkProxy = nil

	C.QNetworkProxy_new6((C.int)(typeVal), hostName_ms, (C.uint16_t)(port), user_ms, &outptr_QNetworkProxy)
	ret := newQNetworkProxy(outptr_QNetworkProxy)
	ret.isSubclass = true
	return ret
}

// NewQNetworkProxy7 constructs a new QNetworkProxy object.
func NewQNetworkProxy7(typeVal QNetworkProxy__ProxyType, hostName string, port uint16, user string, password string) *QNetworkProxy {
	hostName_ms := C.struct_miqt_string{}
	hostName_ms.data = C.CString(hostName)
	hostName_ms.len = C.size_t(len(hostName))
	defer C.free(unsafe.Pointer(hostName_ms.data))
	user_ms := C.struct_miqt_string{}
	user_ms.data = C.CString(user)
	user_ms.len = C.size_t(len(user))
	defer C.free(unsafe.Pointer(user_ms.data))
	password_ms := C.struct_miqt_string{}
	password_ms.data = C.CString(password)
	password_ms.len = C.size_t(len(password))
	defer C.free(unsafe.Pointer(password_ms.data))
	var outptr_QNetworkProxy *C.QNetworkProxy = nil

	C.QNetworkProxy_new7((C.int)(typeVal), hostName_ms, (C.uint16_t)(port), user_ms, password_ms, &outptr_QNetworkProxy)
	ret := newQNetworkProxy(outptr_QNetworkProxy)
	ret.isSubclass = true
	return ret
}

func (this *QNetworkProxy) OperatorAssign(other *QNetworkProxy) {
	C.QNetworkProxy_OperatorAssign(this.h, other.cPointer())
}

func (this *QNetworkProxy) Swap(other *QNetworkProxy) {
	C.QNetworkProxy_Swap(this.h, other.cPointer())
}

func (this *QNetworkProxy) OperatorEqual(other *QNetworkProxy) bool {
	return (bool)(C.QNetworkProxy_OperatorEqual(this.h, other.cPointer()))
}

func (this *QNetworkProxy) OperatorNotEqual(other *QNetworkProxy) bool {
	return (bool)(C.QNetworkProxy_OperatorNotEqual(this.h, other.cPointer()))
}

func (this *QNetworkProxy) SetType(typeVal QNetworkProxy__ProxyType) {
	C.QNetworkProxy_SetType(this.h, (C.int)(typeVal))
}

func (this *QNetworkProxy) Type() QNetworkProxy__ProxyType {
	return (QNetworkProxy__ProxyType)(C.QNetworkProxy_Type(this.h))
}

func (this *QNetworkProxy) SetCapabilities(capab QNetworkProxy__Capability) {
	C.QNetworkProxy_SetCapabilities(this.h, (C.int)(capab))
}

func (this *QNetworkProxy) Capabilities() QNetworkProxy__Capability {
	return (QNetworkProxy__Capability)(C.QNetworkProxy_Capabilities(this.h))
}

func (this *QNetworkProxy) IsCachingProxy() bool {
	return (bool)(C.QNetworkProxy_IsCachingProxy(this.h))
}

func (this *QNetworkProxy) IsTransparentProxy() bool {
	return (bool)(C.QNetworkProxy_IsTransparentProxy(this.h))
}

func (this *QNetworkProxy) SetUser(userName string) {
	userName_ms := C.struct_miqt_string{}
	userName_ms.data = C.CString(userName)
	userName_ms.len = C.size_t(len(userName))
	defer C.free(unsafe.Pointer(userName_ms.data))
	C.QNetworkProxy_SetUser(this.h, userName_ms)
}

func (this *QNetworkProxy) User() string {
	var _ms C.struct_miqt_string = C.QNetworkProxy_User(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QNetworkProxy) SetPassword(password string) {
	password_ms := C.struct_miqt_string{}
	password_ms.data = C.CString(password)
	password_ms.len = C.size_t(len(password))
	defer C.free(unsafe.Pointer(password_ms.data))
	C.QNetworkProxy_SetPassword(this.h, password_ms)
}

func (this *QNetworkProxy) Password() string {
	var _ms C.struct_miqt_string = C.QNetworkProxy_Password(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QNetworkProxy) SetHostName(hostName string) {
	hostName_ms := C.struct_miqt_string{}
	hostName_ms.data = C.CString(hostName)
	hostName_ms.len = C.size_t(len(hostName))
	defer C.free(unsafe.Pointer(hostName_ms.data))
	C.QNetworkProxy_SetHostName(this.h, hostName_ms)
}

func (this *QNetworkProxy) HostName() string {
	var _ms C.struct_miqt_string = C.QNetworkProxy_HostName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QNetworkProxy) SetPort(port uint16) {
	C.QNetworkProxy_SetPort(this.h, (C.uint16_t)(port))
}

func (this *QNetworkProxy) Port() uint16 {
	return (uint16)(C.QNetworkProxy_Port(this.h))
}

func QNetworkProxy_SetApplicationProxy(proxy *QNetworkProxy) {
	C.QNetworkProxy_SetApplicationProxy(proxy.cPointer())
}

func QNetworkProxy_ApplicationProxy() *QNetworkProxy {
	_ret := C.QNetworkProxy_ApplicationProxy()
	_goptr := newQNetworkProxy(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QNetworkProxy) Header(header QNetworkRequest__KnownHeaders) *qt.QVariant {
	_ret := C.QNetworkProxy_Header(this.h, (C.int)(header))
	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QNetworkProxy) SetHeader(header QNetworkRequest__KnownHeaders, value *qt.QVariant) {
	C.QNetworkProxy_SetHeader(this.h, (C.int)(header), (*C.QVariant)(value.UnsafePointer()))
}

func (this *QNetworkProxy) HasRawHeader(headerName []byte) bool {
	headerName_alias := C.struct_miqt_string{}
	headerName_alias.data = (*C.char)(unsafe.Pointer(&headerName[0]))
	headerName_alias.len = C.size_t(len(headerName))
	return (bool)(C.QNetworkProxy_HasRawHeader(this.h, headerName_alias))
}

func (this *QNetworkProxy) RawHeaderList() [][]byte {
	var _ma C.struct_miqt_array = C.QNetworkProxy_RawHeaderList(this.h)
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

func (this *QNetworkProxy) RawHeader(headerName []byte) []byte {
	headerName_alias := C.struct_miqt_string{}
	headerName_alias.data = (*C.char)(unsafe.Pointer(&headerName[0]))
	headerName_alias.len = C.size_t(len(headerName))
	var _bytearray C.struct_miqt_string = C.QNetworkProxy_RawHeader(this.h, headerName_alias)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QNetworkProxy) SetRawHeader(headerName []byte, value []byte) {
	headerName_alias := C.struct_miqt_string{}
	headerName_alias.data = (*C.char)(unsafe.Pointer(&headerName[0]))
	headerName_alias.len = C.size_t(len(headerName))
	value_alias := C.struct_miqt_string{}
	value_alias.data = (*C.char)(unsafe.Pointer(&value[0]))
	value_alias.len = C.size_t(len(value))
	C.QNetworkProxy_SetRawHeader(this.h, headerName_alias, value_alias)
}

// Delete this object from C++ memory.
func (this *QNetworkProxy) Delete() {
	C.QNetworkProxy_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QNetworkProxy) GoGC() {
	runtime.SetFinalizer(this, func(this *QNetworkProxy) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QNetworkProxyFactory struct {
	h          *C.QNetworkProxyFactory
	isSubclass bool
}

func (this *QNetworkProxyFactory) cPointer() *C.QNetworkProxyFactory {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QNetworkProxyFactory) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQNetworkProxyFactory constructs the type using only CGO pointers.
func newQNetworkProxyFactory(h *C.QNetworkProxyFactory) *QNetworkProxyFactory {
	if h == nil {
		return nil
	}
	return &QNetworkProxyFactory{h: h}
}

// UnsafeNewQNetworkProxyFactory constructs the type using only unsafe pointers.
func UnsafeNewQNetworkProxyFactory(h unsafe.Pointer) *QNetworkProxyFactory {
	if h == nil {
		return nil
	}

	return &QNetworkProxyFactory{h: (*C.QNetworkProxyFactory)(h)}
}

// NewQNetworkProxyFactory constructs a new QNetworkProxyFactory object.
func NewQNetworkProxyFactory() *QNetworkProxyFactory {
	var outptr_QNetworkProxyFactory *C.QNetworkProxyFactory = nil

	C.QNetworkProxyFactory_new(&outptr_QNetworkProxyFactory)
	ret := newQNetworkProxyFactory(outptr_QNetworkProxyFactory)
	ret.isSubclass = true
	return ret
}

func (this *QNetworkProxyFactory) QueryProxy(query *QNetworkProxyQuery) []QNetworkProxy {
	var _ma C.struct_miqt_array = C.QNetworkProxyFactory_QueryProxy(this.h, query.cPointer())
	_ret := make([]QNetworkProxy, int(_ma.len))
	_outCast := (*[0xffff]*C.QNetworkProxy)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQNetworkProxy(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func QNetworkProxyFactory_UsesSystemConfiguration() bool {
	return (bool)(C.QNetworkProxyFactory_UsesSystemConfiguration())
}

func QNetworkProxyFactory_SetUseSystemConfiguration(enable bool) {
	C.QNetworkProxyFactory_SetUseSystemConfiguration((C.bool)(enable))
}

func QNetworkProxyFactory_SetApplicationProxyFactory(factory *QNetworkProxyFactory) {
	C.QNetworkProxyFactory_SetApplicationProxyFactory(factory.cPointer())
}

func QNetworkProxyFactory_ProxyForQuery(query *QNetworkProxyQuery) []QNetworkProxy {
	var _ma C.struct_miqt_array = C.QNetworkProxyFactory_ProxyForQuery(query.cPointer())
	_ret := make([]QNetworkProxy, int(_ma.len))
	_outCast := (*[0xffff]*C.QNetworkProxy)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQNetworkProxy(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func QNetworkProxyFactory_SystemProxyForQuery() []QNetworkProxy {
	var _ma C.struct_miqt_array = C.QNetworkProxyFactory_SystemProxyForQuery()
	_ret := make([]QNetworkProxy, int(_ma.len))
	_outCast := (*[0xffff]*C.QNetworkProxy)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQNetworkProxy(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QNetworkProxyFactory) OperatorAssign(param1 *QNetworkProxyFactory) {
	C.QNetworkProxyFactory_OperatorAssign(this.h, param1.cPointer())
}

func QNetworkProxyFactory_SystemProxyForQuery1(query *QNetworkProxyQuery) []QNetworkProxy {
	var _ma C.struct_miqt_array = C.QNetworkProxyFactory_SystemProxyForQuery1(query.cPointer())
	_ret := make([]QNetworkProxy, int(_ma.len))
	_outCast := (*[0xffff]*C.QNetworkProxy)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQNetworkProxy(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}
func (this *QNetworkProxyFactory) OnQueryProxy(slot func(query *QNetworkProxyQuery) []QNetworkProxy) {
	C.QNetworkProxyFactory_override_virtual_QueryProxy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QNetworkProxyFactory_QueryProxy
func miqt_exec_callback_QNetworkProxyFactory_QueryProxy(self *C.QNetworkProxyFactory, cb C.intptr_t, query *C.QNetworkProxyQuery) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func(query *QNetworkProxyQuery) []QNetworkProxy)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQNetworkProxyQuery(unsafe.Pointer(query))

	virtualReturn := gofunc(slotval1)
	virtualReturn_CArray := (*[0xffff]*C.QNetworkProxy)(C.malloc(C.size_t(8 * len(virtualReturn))))
	defer C.free(unsafe.Pointer(virtualReturn_CArray))
	for i := range virtualReturn {
		virtualReturn_CArray[i] = virtualReturn[i].cPointer()
	}
	virtualReturn_ma := C.struct_miqt_array{len: C.size_t(len(virtualReturn)), data: unsafe.Pointer(virtualReturn_CArray)}

	return virtualReturn_ma

}

// Delete this object from C++ memory.
func (this *QNetworkProxyFactory) Delete() {
	C.QNetworkProxyFactory_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QNetworkProxyFactory) GoGC() {
	runtime.SetFinalizer(this, func(this *QNetworkProxyFactory) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
