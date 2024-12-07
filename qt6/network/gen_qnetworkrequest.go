package network

/*

#include "gen_qnetworkrequest.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"unsafe"
)

type QNetworkRequest__KnownHeaders int

const (
	QNetworkRequest__ContentTypeHeader        QNetworkRequest__KnownHeaders = 0
	QNetworkRequest__ContentLengthHeader      QNetworkRequest__KnownHeaders = 1
	QNetworkRequest__LocationHeader           QNetworkRequest__KnownHeaders = 2
	QNetworkRequest__LastModifiedHeader       QNetworkRequest__KnownHeaders = 3
	QNetworkRequest__CookieHeader             QNetworkRequest__KnownHeaders = 4
	QNetworkRequest__SetCookieHeader          QNetworkRequest__KnownHeaders = 5
	QNetworkRequest__ContentDispositionHeader QNetworkRequest__KnownHeaders = 6
	QNetworkRequest__UserAgentHeader          QNetworkRequest__KnownHeaders = 7
	QNetworkRequest__ServerHeader             QNetworkRequest__KnownHeaders = 8
	QNetworkRequest__IfModifiedSinceHeader    QNetworkRequest__KnownHeaders = 9
	QNetworkRequest__ETagHeader               QNetworkRequest__KnownHeaders = 10
	QNetworkRequest__IfMatchHeader            QNetworkRequest__KnownHeaders = 11
	QNetworkRequest__IfNoneMatchHeader        QNetworkRequest__KnownHeaders = 12
)

type QNetworkRequest__Attribute int

const (
	QNetworkRequest__HttpStatusCodeAttribute                      QNetworkRequest__Attribute = 0
	QNetworkRequest__HttpReasonPhraseAttribute                    QNetworkRequest__Attribute = 1
	QNetworkRequest__RedirectionTargetAttribute                   QNetworkRequest__Attribute = 2
	QNetworkRequest__ConnectionEncryptedAttribute                 QNetworkRequest__Attribute = 3
	QNetworkRequest__CacheLoadControlAttribute                    QNetworkRequest__Attribute = 4
	QNetworkRequest__CacheSaveControlAttribute                    QNetworkRequest__Attribute = 5
	QNetworkRequest__SourceIsFromCacheAttribute                   QNetworkRequest__Attribute = 6
	QNetworkRequest__DoNotBufferUploadDataAttribute               QNetworkRequest__Attribute = 7
	QNetworkRequest__HttpPipeliningAllowedAttribute               QNetworkRequest__Attribute = 8
	QNetworkRequest__HttpPipeliningWasUsedAttribute               QNetworkRequest__Attribute = 9
	QNetworkRequest__CustomVerbAttribute                          QNetworkRequest__Attribute = 10
	QNetworkRequest__CookieLoadControlAttribute                   QNetworkRequest__Attribute = 11
	QNetworkRequest__AuthenticationReuseAttribute                 QNetworkRequest__Attribute = 12
	QNetworkRequest__CookieSaveControlAttribute                   QNetworkRequest__Attribute = 13
	QNetworkRequest__MaximumDownloadBufferSizeAttribute           QNetworkRequest__Attribute = 14
	QNetworkRequest__DownloadBufferAttribute                      QNetworkRequest__Attribute = 15
	QNetworkRequest__SynchronousRequestAttribute                  QNetworkRequest__Attribute = 16
	QNetworkRequest__BackgroundRequestAttribute                   QNetworkRequest__Attribute = 17
	QNetworkRequest__EmitAllUploadProgressSignalsAttribute        QNetworkRequest__Attribute = 18
	QNetworkRequest__Http2AllowedAttribute                        QNetworkRequest__Attribute = 19
	QNetworkRequest__Http2WasUsedAttribute                        QNetworkRequest__Attribute = 20
	QNetworkRequest__OriginalContentLengthAttribute               QNetworkRequest__Attribute = 21
	QNetworkRequest__RedirectPolicyAttribute                      QNetworkRequest__Attribute = 22
	QNetworkRequest__Http2DirectAttribute                         QNetworkRequest__Attribute = 23
	QNetworkRequest__ResourceTypeAttribute                        QNetworkRequest__Attribute = 24
	QNetworkRequest__AutoDeleteReplyOnFinishAttribute             QNetworkRequest__Attribute = 25
	QNetworkRequest__ConnectionCacheExpiryTimeoutSecondsAttribute QNetworkRequest__Attribute = 26
	QNetworkRequest__Http2CleartextAllowedAttribute               QNetworkRequest__Attribute = 27
	QNetworkRequest__User                                         QNetworkRequest__Attribute = 1000
	QNetworkRequest__UserMax                                      QNetworkRequest__Attribute = 32767
)

type QNetworkRequest__CacheLoadControl int

const (
	QNetworkRequest__AlwaysNetwork QNetworkRequest__CacheLoadControl = 0
	QNetworkRequest__PreferNetwork QNetworkRequest__CacheLoadControl = 1
	QNetworkRequest__PreferCache   QNetworkRequest__CacheLoadControl = 2
	QNetworkRequest__AlwaysCache   QNetworkRequest__CacheLoadControl = 3
)

type QNetworkRequest__LoadControl int

const (
	QNetworkRequest__Automatic QNetworkRequest__LoadControl = 0
	QNetworkRequest__Manual    QNetworkRequest__LoadControl = 1
)

type QNetworkRequest__Priority int

const (
	QNetworkRequest__HighPriority   QNetworkRequest__Priority = 1
	QNetworkRequest__NormalPriority QNetworkRequest__Priority = 3
	QNetworkRequest__LowPriority    QNetworkRequest__Priority = 5
)

type QNetworkRequest__RedirectPolicy int

const (
	QNetworkRequest__ManualRedirectPolicy       QNetworkRequest__RedirectPolicy = 0
	QNetworkRequest__NoLessSafeRedirectPolicy   QNetworkRequest__RedirectPolicy = 1
	QNetworkRequest__SameOriginRedirectPolicy   QNetworkRequest__RedirectPolicy = 2
	QNetworkRequest__UserVerifiedRedirectPolicy QNetworkRequest__RedirectPolicy = 3
)

type QNetworkRequest__TransferTimeoutConstant int

const (
	QNetworkRequest__DefaultTransferTimeoutConstant QNetworkRequest__TransferTimeoutConstant = 30000
)

type QNetworkRequest struct {
	h          *C.QNetworkRequest
	isSubclass bool
}

func (this *QNetworkRequest) cPointer() *C.QNetworkRequest {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QNetworkRequest) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQNetworkRequest constructs the type using only CGO pointers.
func newQNetworkRequest(h *C.QNetworkRequest) *QNetworkRequest {
	if h == nil {
		return nil
	}
	return &QNetworkRequest{h: h}
}

// UnsafeNewQNetworkRequest constructs the type using only unsafe pointers.
func UnsafeNewQNetworkRequest(h unsafe.Pointer) *QNetworkRequest {
	if h == nil {
		return nil
	}

	return &QNetworkRequest{h: (*C.QNetworkRequest)(h)}
}

// NewQNetworkRequest constructs a new QNetworkRequest object.
func NewQNetworkRequest() *QNetworkRequest {
	var outptr_QNetworkRequest *C.QNetworkRequest = nil

	C.QNetworkRequest_new(&outptr_QNetworkRequest)
	ret := newQNetworkRequest(outptr_QNetworkRequest)
	ret.isSubclass = true
	return ret
}

// NewQNetworkRequest2 constructs a new QNetworkRequest object.
func NewQNetworkRequest2(url *qt6.QUrl) *QNetworkRequest {
	var outptr_QNetworkRequest *C.QNetworkRequest = nil

	C.QNetworkRequest_new2((*C.QUrl)(url.UnsafePointer()), &outptr_QNetworkRequest)
	ret := newQNetworkRequest(outptr_QNetworkRequest)
	ret.isSubclass = true
	return ret
}

// NewQNetworkRequest3 constructs a new QNetworkRequest object.
func NewQNetworkRequest3(other *QNetworkRequest) *QNetworkRequest {
	var outptr_QNetworkRequest *C.QNetworkRequest = nil

	C.QNetworkRequest_new3(other.cPointer(), &outptr_QNetworkRequest)
	ret := newQNetworkRequest(outptr_QNetworkRequest)
	ret.isSubclass = true
	return ret
}

func (this *QNetworkRequest) OperatorAssign(other *QNetworkRequest) {
	C.QNetworkRequest_OperatorAssign(this.h, other.cPointer())
}

func (this *QNetworkRequest) Swap(other *QNetworkRequest) {
	C.QNetworkRequest_Swap(this.h, other.cPointer())
}

func (this *QNetworkRequest) OperatorEqual(other *QNetworkRequest) bool {
	return (bool)(C.QNetworkRequest_OperatorEqual(this.h, other.cPointer()))
}

func (this *QNetworkRequest) OperatorNotEqual(other *QNetworkRequest) bool {
	return (bool)(C.QNetworkRequest_OperatorNotEqual(this.h, other.cPointer()))
}

func (this *QNetworkRequest) Url() *qt6.QUrl {
	_goptr := qt6.UnsafeNewQUrl(unsafe.Pointer(C.QNetworkRequest_Url(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QNetworkRequest) SetUrl(url *qt6.QUrl) {
	C.QNetworkRequest_SetUrl(this.h, (*C.QUrl)(url.UnsafePointer()))
}

func (this *QNetworkRequest) Header(header QNetworkRequest__KnownHeaders) *qt6.QVariant {
	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(C.QNetworkRequest_Header(this.h, (C.int)(header))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QNetworkRequest) SetHeader(header QNetworkRequest__KnownHeaders, value *qt6.QVariant) {
	C.QNetworkRequest_SetHeader(this.h, (C.int)(header), (*C.QVariant)(value.UnsafePointer()))
}

func (this *QNetworkRequest) HasRawHeader(headerName []byte) bool {
	headerName_alias := C.struct_miqt_string{}
	headerName_alias.data = (*C.char)(unsafe.Pointer(&headerName[0]))
	headerName_alias.len = C.size_t(len(headerName))
	return (bool)(C.QNetworkRequest_HasRawHeader(this.h, headerName_alias))
}

func (this *QNetworkRequest) RawHeaderList() [][]byte {
	var _ma C.struct_miqt_array = C.QNetworkRequest_RawHeaderList(this.h)
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

func (this *QNetworkRequest) RawHeader(headerName []byte) []byte {
	headerName_alias := C.struct_miqt_string{}
	headerName_alias.data = (*C.char)(unsafe.Pointer(&headerName[0]))
	headerName_alias.len = C.size_t(len(headerName))
	var _bytearray C.struct_miqt_string = C.QNetworkRequest_RawHeader(this.h, headerName_alias)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QNetworkRequest) SetRawHeader(headerName []byte, value []byte) {
	headerName_alias := C.struct_miqt_string{}
	headerName_alias.data = (*C.char)(unsafe.Pointer(&headerName[0]))
	headerName_alias.len = C.size_t(len(headerName))
	value_alias := C.struct_miqt_string{}
	value_alias.data = (*C.char)(unsafe.Pointer(&value[0]))
	value_alias.len = C.size_t(len(value))
	C.QNetworkRequest_SetRawHeader(this.h, headerName_alias, value_alias)
}

func (this *QNetworkRequest) Attribute(code QNetworkRequest__Attribute) *qt6.QVariant {
	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(C.QNetworkRequest_Attribute(this.h, (C.int)(code))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QNetworkRequest) SetAttribute(code QNetworkRequest__Attribute, value *qt6.QVariant) {
	C.QNetworkRequest_SetAttribute(this.h, (C.int)(code), (*C.QVariant)(value.UnsafePointer()))
}

func (this *QNetworkRequest) SslConfiguration() *QSslConfiguration {
	_goptr := newQSslConfiguration(C.QNetworkRequest_SslConfiguration(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QNetworkRequest) SetSslConfiguration(configuration *QSslConfiguration) {
	C.QNetworkRequest_SetSslConfiguration(this.h, configuration.cPointer())
}

func (this *QNetworkRequest) SetOriginatingObject(object *qt6.QObject) {
	C.QNetworkRequest_SetOriginatingObject(this.h, (*C.QObject)(object.UnsafePointer()))
}

func (this *QNetworkRequest) OriginatingObject() *qt6.QObject {
	return qt6.UnsafeNewQObject(unsafe.Pointer(C.QNetworkRequest_OriginatingObject(this.h)))
}

func (this *QNetworkRequest) Priority() QNetworkRequest__Priority {
	return (QNetworkRequest__Priority)(C.QNetworkRequest_Priority(this.h))
}

func (this *QNetworkRequest) SetPriority(priority QNetworkRequest__Priority) {
	C.QNetworkRequest_SetPriority(this.h, (C.int)(priority))
}

func (this *QNetworkRequest) MaximumRedirectsAllowed() int {
	return (int)(C.QNetworkRequest_MaximumRedirectsAllowed(this.h))
}

func (this *QNetworkRequest) SetMaximumRedirectsAllowed(maximumRedirectsAllowed int) {
	C.QNetworkRequest_SetMaximumRedirectsAllowed(this.h, (C.int)(maximumRedirectsAllowed))
}

func (this *QNetworkRequest) PeerVerifyName() string {
	var _ms C.struct_miqt_string = C.QNetworkRequest_PeerVerifyName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QNetworkRequest) SetPeerVerifyName(peerName string) {
	peerName_ms := C.struct_miqt_string{}
	peerName_ms.data = C.CString(peerName)
	peerName_ms.len = C.size_t(len(peerName))
	defer C.free(unsafe.Pointer(peerName_ms.data))
	C.QNetworkRequest_SetPeerVerifyName(this.h, peerName_ms)
}

func (this *QNetworkRequest) Http2Configuration() *QHttp2Configuration {
	_goptr := newQHttp2Configuration(C.QNetworkRequest_Http2Configuration(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QNetworkRequest) SetHttp2Configuration(configuration *QHttp2Configuration) {
	C.QNetworkRequest_SetHttp2Configuration(this.h, configuration.cPointer())
}

func (this *QNetworkRequest) DecompressedSafetyCheckThreshold() int64 {
	return (int64)(C.QNetworkRequest_DecompressedSafetyCheckThreshold(this.h))
}

func (this *QNetworkRequest) SetDecompressedSafetyCheckThreshold(threshold int64) {
	C.QNetworkRequest_SetDecompressedSafetyCheckThreshold(this.h, (C.longlong)(threshold))
}

func (this *QNetworkRequest) TransferTimeout() int {
	return (int)(C.QNetworkRequest_TransferTimeout(this.h))
}

func (this *QNetworkRequest) SetTransferTimeout() {
	C.QNetworkRequest_SetTransferTimeout(this.h)
}

func (this *QNetworkRequest) Attribute2(code QNetworkRequest__Attribute, defaultValue *qt6.QVariant) *qt6.QVariant {
	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(C.QNetworkRequest_Attribute2(this.h, (C.int)(code), (*C.QVariant)(defaultValue.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QNetworkRequest) SetTransferTimeout1(timeout int) {
	C.QNetworkRequest_SetTransferTimeout1(this.h, (C.int)(timeout))
}

// Delete this object from C++ memory.
func (this *QNetworkRequest) Delete() {
	C.QNetworkRequest_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QNetworkRequest) GoGC() {
	runtime.SetFinalizer(this, func(this *QNetworkRequest) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
