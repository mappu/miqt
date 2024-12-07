package webengine

/*

#include "gen_qwebengineurlrequestinfo.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"unsafe"
)

type QWebEngineUrlRequestInfo__ResourceType int

const (
	QWebEngineUrlRequestInfo__ResourceTypeMainFrame                  QWebEngineUrlRequestInfo__ResourceType = 0
	QWebEngineUrlRequestInfo__ResourceTypeSubFrame                   QWebEngineUrlRequestInfo__ResourceType = 1
	QWebEngineUrlRequestInfo__ResourceTypeStylesheet                 QWebEngineUrlRequestInfo__ResourceType = 2
	QWebEngineUrlRequestInfo__ResourceTypeScript                     QWebEngineUrlRequestInfo__ResourceType = 3
	QWebEngineUrlRequestInfo__ResourceTypeImage                      QWebEngineUrlRequestInfo__ResourceType = 4
	QWebEngineUrlRequestInfo__ResourceTypeFontResource               QWebEngineUrlRequestInfo__ResourceType = 5
	QWebEngineUrlRequestInfo__ResourceTypeSubResource                QWebEngineUrlRequestInfo__ResourceType = 6
	QWebEngineUrlRequestInfo__ResourceTypeObject                     QWebEngineUrlRequestInfo__ResourceType = 7
	QWebEngineUrlRequestInfo__ResourceTypeMedia                      QWebEngineUrlRequestInfo__ResourceType = 8
	QWebEngineUrlRequestInfo__ResourceTypeWorker                     QWebEngineUrlRequestInfo__ResourceType = 9
	QWebEngineUrlRequestInfo__ResourceTypeSharedWorker               QWebEngineUrlRequestInfo__ResourceType = 10
	QWebEngineUrlRequestInfo__ResourceTypePrefetch                   QWebEngineUrlRequestInfo__ResourceType = 11
	QWebEngineUrlRequestInfo__ResourceTypeFavicon                    QWebEngineUrlRequestInfo__ResourceType = 12
	QWebEngineUrlRequestInfo__ResourceTypeXhr                        QWebEngineUrlRequestInfo__ResourceType = 13
	QWebEngineUrlRequestInfo__ResourceTypePing                       QWebEngineUrlRequestInfo__ResourceType = 14
	QWebEngineUrlRequestInfo__ResourceTypeServiceWorker              QWebEngineUrlRequestInfo__ResourceType = 15
	QWebEngineUrlRequestInfo__ResourceTypeCspReport                  QWebEngineUrlRequestInfo__ResourceType = 16
	QWebEngineUrlRequestInfo__ResourceTypePluginResource             QWebEngineUrlRequestInfo__ResourceType = 17
	QWebEngineUrlRequestInfo__ResourceTypeNavigationPreloadMainFrame QWebEngineUrlRequestInfo__ResourceType = 19
	QWebEngineUrlRequestInfo__ResourceTypeNavigationPreloadSubFrame  QWebEngineUrlRequestInfo__ResourceType = 20
	QWebEngineUrlRequestInfo__ResourceTypeLast                       QWebEngineUrlRequestInfo__ResourceType = 20
	QWebEngineUrlRequestInfo__ResourceTypeWebSocket                  QWebEngineUrlRequestInfo__ResourceType = 254
	QWebEngineUrlRequestInfo__ResourceTypeUnknown                    QWebEngineUrlRequestInfo__ResourceType = 255
)

type QWebEngineUrlRequestInfo__NavigationType int

const (
	QWebEngineUrlRequestInfo__NavigationTypeLink          QWebEngineUrlRequestInfo__NavigationType = 0
	QWebEngineUrlRequestInfo__NavigationTypeTyped         QWebEngineUrlRequestInfo__NavigationType = 1
	QWebEngineUrlRequestInfo__NavigationTypeFormSubmitted QWebEngineUrlRequestInfo__NavigationType = 2
	QWebEngineUrlRequestInfo__NavigationTypeBackForward   QWebEngineUrlRequestInfo__NavigationType = 3
	QWebEngineUrlRequestInfo__NavigationTypeReload        QWebEngineUrlRequestInfo__NavigationType = 4
	QWebEngineUrlRequestInfo__NavigationTypeOther         QWebEngineUrlRequestInfo__NavigationType = 5
	QWebEngineUrlRequestInfo__NavigationTypeRedirect      QWebEngineUrlRequestInfo__NavigationType = 6
)

type QWebEngineUrlRequestInfo struct {
	h          *C.QWebEngineUrlRequestInfo
	isSubclass bool
}

func (this *QWebEngineUrlRequestInfo) cPointer() *C.QWebEngineUrlRequestInfo {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWebEngineUrlRequestInfo) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWebEngineUrlRequestInfo constructs the type using only CGO pointers.
func newQWebEngineUrlRequestInfo(h *C.QWebEngineUrlRequestInfo) *QWebEngineUrlRequestInfo {
	if h == nil {
		return nil
	}

	return &QWebEngineUrlRequestInfo{h: h}
}

// UnsafeNewQWebEngineUrlRequestInfo constructs the type using only unsafe pointers.
func UnsafeNewQWebEngineUrlRequestInfo(h unsafe.Pointer) *QWebEngineUrlRequestInfo {
	return newQWebEngineUrlRequestInfo((*C.QWebEngineUrlRequestInfo)(h))
}

func (this *QWebEngineUrlRequestInfo) ResourceType() QWebEngineUrlRequestInfo__ResourceType {
	return (QWebEngineUrlRequestInfo__ResourceType)(C.QWebEngineUrlRequestInfo_ResourceType(this.h))
}

func (this *QWebEngineUrlRequestInfo) NavigationType() QWebEngineUrlRequestInfo__NavigationType {
	return (QWebEngineUrlRequestInfo__NavigationType)(C.QWebEngineUrlRequestInfo_NavigationType(this.h))
}

func (this *QWebEngineUrlRequestInfo) RequestUrl() *qt6.QUrl {
	_goptr := qt6.UnsafeNewQUrl(unsafe.Pointer(C.QWebEngineUrlRequestInfo_RequestUrl(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebEngineUrlRequestInfo) FirstPartyUrl() *qt6.QUrl {
	_goptr := qt6.UnsafeNewQUrl(unsafe.Pointer(C.QWebEngineUrlRequestInfo_FirstPartyUrl(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebEngineUrlRequestInfo) Initiator() *qt6.QUrl {
	_goptr := qt6.UnsafeNewQUrl(unsafe.Pointer(C.QWebEngineUrlRequestInfo_Initiator(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebEngineUrlRequestInfo) RequestMethod() []byte {
	var _bytearray C.struct_miqt_string = C.QWebEngineUrlRequestInfo_RequestMethod(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QWebEngineUrlRequestInfo) Changed() bool {
	return (bool)(C.QWebEngineUrlRequestInfo_Changed(this.h))
}

func (this *QWebEngineUrlRequestInfo) Block(shouldBlock bool) {
	C.QWebEngineUrlRequestInfo_Block(this.h, (C.bool)(shouldBlock))
}

func (this *QWebEngineUrlRequestInfo) Redirect(url *qt6.QUrl) {
	C.QWebEngineUrlRequestInfo_Redirect(this.h, (*C.QUrl)(url.UnsafePointer()))
}

func (this *QWebEngineUrlRequestInfo) SetHttpHeader(name []byte, value []byte) {
	name_alias := C.struct_miqt_string{}
	name_alias.data = (*C.char)(unsafe.Pointer(&name[0]))
	name_alias.len = C.size_t(len(name))
	value_alias := C.struct_miqt_string{}
	value_alias.data = (*C.char)(unsafe.Pointer(&value[0]))
	value_alias.len = C.size_t(len(value))
	C.QWebEngineUrlRequestInfo_SetHttpHeader(this.h, name_alias, value_alias)
}
