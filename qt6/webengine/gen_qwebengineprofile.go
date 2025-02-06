package webengine

/*

#include "gen_qwebengineprofile.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QWebEngineProfile__HttpCacheType int

const (
	QWebEngineProfile__MemoryHttpCache QWebEngineProfile__HttpCacheType = 0
	QWebEngineProfile__DiskHttpCache   QWebEngineProfile__HttpCacheType = 1
	QWebEngineProfile__NoCache         QWebEngineProfile__HttpCacheType = 2
)

type QWebEngineProfile__PersistentCookiesPolicy int

const (
	QWebEngineProfile__NoPersistentCookies    QWebEngineProfile__PersistentCookiesPolicy = 0
	QWebEngineProfile__AllowPersistentCookies QWebEngineProfile__PersistentCookiesPolicy = 1
	QWebEngineProfile__ForcePersistentCookies QWebEngineProfile__PersistentCookiesPolicy = 2
)

type QWebEngineProfile struct {
	h *C.QWebEngineProfile
	*qt6.QObject
}

func (this *QWebEngineProfile) cPointer() *C.QWebEngineProfile {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWebEngineProfile) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWebEngineProfile constructs the type using only CGO pointers.
func newQWebEngineProfile(h *C.QWebEngineProfile) *QWebEngineProfile {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QWebEngineProfile_virtbase(h, &outptr_QObject)

	return &QWebEngineProfile{h: h,
		QObject: qt6.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQWebEngineProfile constructs the type using only unsafe pointers.
func UnsafeNewQWebEngineProfile(h unsafe.Pointer) *QWebEngineProfile {
	return newQWebEngineProfile((*C.QWebEngineProfile)(h))
}

// NewQWebEngineProfile constructs a new QWebEngineProfile object.
func NewQWebEngineProfile() *QWebEngineProfile {

	return newQWebEngineProfile(C.QWebEngineProfile_new())
}

// NewQWebEngineProfile2 constructs a new QWebEngineProfile object.
func NewQWebEngineProfile2(name string) *QWebEngineProfile {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))

	return newQWebEngineProfile(C.QWebEngineProfile_new2(name_ms))
}

// NewQWebEngineProfile3 constructs a new QWebEngineProfile object.
func NewQWebEngineProfile3(parent *qt6.QObject) *QWebEngineProfile {

	return newQWebEngineProfile(C.QWebEngineProfile_new3((*C.QObject)(parent.UnsafePointer())))
}

// NewQWebEngineProfile4 constructs a new QWebEngineProfile object.
func NewQWebEngineProfile4(name string, parent *qt6.QObject) *QWebEngineProfile {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))

	return newQWebEngineProfile(C.QWebEngineProfile_new4(name_ms, (*C.QObject)(parent.UnsafePointer())))
}

func (this *QWebEngineProfile) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QWebEngineProfile_metaObject(this.h)))
}

func (this *QWebEngineProfile) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QWebEngineProfile_metacast(this.h, param1_Cstring))
}

func QWebEngineProfile_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QWebEngineProfile_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebEngineProfile) StorageName() string {
	var _ms C.struct_miqt_string = C.QWebEngineProfile_storageName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebEngineProfile) IsOffTheRecord() bool {
	return (bool)(C.QWebEngineProfile_isOffTheRecord(this.h))
}

func (this *QWebEngineProfile) PersistentStoragePath() string {
	var _ms C.struct_miqt_string = C.QWebEngineProfile_persistentStoragePath(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebEngineProfile) SetPersistentStoragePath(path string) {
	path_ms := C.struct_miqt_string{}
	path_ms.data = C.CString(path)
	path_ms.len = C.size_t(len(path))
	defer C.free(unsafe.Pointer(path_ms.data))
	C.QWebEngineProfile_setPersistentStoragePath(this.h, path_ms)
}

func (this *QWebEngineProfile) CachePath() string {
	var _ms C.struct_miqt_string = C.QWebEngineProfile_cachePath(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebEngineProfile) SetCachePath(path string) {
	path_ms := C.struct_miqt_string{}
	path_ms.data = C.CString(path)
	path_ms.len = C.size_t(len(path))
	defer C.free(unsafe.Pointer(path_ms.data))
	C.QWebEngineProfile_setCachePath(this.h, path_ms)
}

func (this *QWebEngineProfile) HttpUserAgent() string {
	var _ms C.struct_miqt_string = C.QWebEngineProfile_httpUserAgent(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebEngineProfile) SetHttpUserAgent(userAgent string) {
	userAgent_ms := C.struct_miqt_string{}
	userAgent_ms.data = C.CString(userAgent)
	userAgent_ms.len = C.size_t(len(userAgent))
	defer C.free(unsafe.Pointer(userAgent_ms.data))
	C.QWebEngineProfile_setHttpUserAgent(this.h, userAgent_ms)
}

func (this *QWebEngineProfile) HttpCacheType() QWebEngineProfile__HttpCacheType {
	return (QWebEngineProfile__HttpCacheType)(C.QWebEngineProfile_httpCacheType(this.h))
}

func (this *QWebEngineProfile) SetHttpCacheType(httpCacheType QWebEngineProfile__HttpCacheType) {
	C.QWebEngineProfile_setHttpCacheType(this.h, (C.int)(httpCacheType))
}

func (this *QWebEngineProfile) SetHttpAcceptLanguage(httpAcceptLanguage string) {
	httpAcceptLanguage_ms := C.struct_miqt_string{}
	httpAcceptLanguage_ms.data = C.CString(httpAcceptLanguage)
	httpAcceptLanguage_ms.len = C.size_t(len(httpAcceptLanguage))
	defer C.free(unsafe.Pointer(httpAcceptLanguage_ms.data))
	C.QWebEngineProfile_setHttpAcceptLanguage(this.h, httpAcceptLanguage_ms)
}

func (this *QWebEngineProfile) HttpAcceptLanguage() string {
	var _ms C.struct_miqt_string = C.QWebEngineProfile_httpAcceptLanguage(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebEngineProfile) PersistentCookiesPolicy() QWebEngineProfile__PersistentCookiesPolicy {
	return (QWebEngineProfile__PersistentCookiesPolicy)(C.QWebEngineProfile_persistentCookiesPolicy(this.h))
}

func (this *QWebEngineProfile) SetPersistentCookiesPolicy(persistentCookiesPolicy QWebEngineProfile__PersistentCookiesPolicy) {
	C.QWebEngineProfile_setPersistentCookiesPolicy(this.h, (C.int)(persistentCookiesPolicy))
}

func (this *QWebEngineProfile) HttpCacheMaximumSize() int {
	return (int)(C.QWebEngineProfile_httpCacheMaximumSize(this.h))
}

func (this *QWebEngineProfile) SetHttpCacheMaximumSize(maxSize int) {
	C.QWebEngineProfile_setHttpCacheMaximumSize(this.h, (C.int)(maxSize))
}

func (this *QWebEngineProfile) CookieStore() *QWebEngineCookieStore {
	return newQWebEngineCookieStore(C.QWebEngineProfile_cookieStore(this.h))
}

func (this *QWebEngineProfile) SetUrlRequestInterceptor(interceptor *QWebEngineUrlRequestInterceptor) {
	C.QWebEngineProfile_setUrlRequestInterceptor(this.h, interceptor.cPointer())
}

func (this *QWebEngineProfile) ClearAllVisitedLinks() {
	C.QWebEngineProfile_clearAllVisitedLinks(this.h)
}

func (this *QWebEngineProfile) ClearVisitedLinks(urls []qt6.QUrl) {
	urls_CArray := (*[0xffff]*C.QUrl)(C.malloc(C.size_t(8 * len(urls))))
	defer C.free(unsafe.Pointer(urls_CArray))
	for i := range urls {
		urls_CArray[i] = (*C.QUrl)(urls[i].UnsafePointer())
	}
	urls_ma := C.struct_miqt_array{len: C.size_t(len(urls)), data: unsafe.Pointer(urls_CArray)}
	C.QWebEngineProfile_clearVisitedLinks(this.h, urls_ma)
}

func (this *QWebEngineProfile) VisitedLinksContainsUrl(url *qt6.QUrl) bool {
	return (bool)(C.QWebEngineProfile_visitedLinksContainsUrl(this.h, (*C.QUrl)(url.UnsafePointer())))
}

func (this *QWebEngineProfile) Settings() *QWebEngineSettings {
	return newQWebEngineSettings(C.QWebEngineProfile_settings(this.h))
}

func (this *QWebEngineProfile) Scripts() *QWebEngineScriptCollection {
	return newQWebEngineScriptCollection(C.QWebEngineProfile_scripts(this.h))
}

func (this *QWebEngineProfile) UrlSchemeHandler(param1 []byte) *QWebEngineUrlSchemeHandler {
	param1_alias := C.struct_miqt_string{}
	if len(param1) > 0 {
		param1_alias.data = (*C.char)(unsafe.Pointer(&param1[0]))
	} else {
		param1_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	param1_alias.len = C.size_t(len(param1))
	return newQWebEngineUrlSchemeHandler(C.QWebEngineProfile_urlSchemeHandler(this.h, param1_alias))
}

func (this *QWebEngineProfile) InstallUrlSchemeHandler(scheme []byte, param2 *QWebEngineUrlSchemeHandler) {
	scheme_alias := C.struct_miqt_string{}
	if len(scheme) > 0 {
		scheme_alias.data = (*C.char)(unsafe.Pointer(&scheme[0]))
	} else {
		scheme_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	scheme_alias.len = C.size_t(len(scheme))
	C.QWebEngineProfile_installUrlSchemeHandler(this.h, scheme_alias, param2.cPointer())
}

func (this *QWebEngineProfile) RemoveUrlScheme(scheme []byte) {
	scheme_alias := C.struct_miqt_string{}
	if len(scheme) > 0 {
		scheme_alias.data = (*C.char)(unsafe.Pointer(&scheme[0]))
	} else {
		scheme_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	scheme_alias.len = C.size_t(len(scheme))
	C.QWebEngineProfile_removeUrlScheme(this.h, scheme_alias)
}

func (this *QWebEngineProfile) RemoveUrlSchemeHandler(param1 *QWebEngineUrlSchemeHandler) {
	C.QWebEngineProfile_removeUrlSchemeHandler(this.h, param1.cPointer())
}

func (this *QWebEngineProfile) RemoveAllUrlSchemeHandlers() {
	C.QWebEngineProfile_removeAllUrlSchemeHandlers(this.h)
}

func (this *QWebEngineProfile) ClearHttpCache() {
	C.QWebEngineProfile_clearHttpCache(this.h)
}

func (this *QWebEngineProfile) SetSpellCheckLanguages(languages []string) {
	languages_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(languages))))
	defer C.free(unsafe.Pointer(languages_CArray))
	for i := range languages {
		languages_i_ms := C.struct_miqt_string{}
		languages_i_ms.data = C.CString(languages[i])
		languages_i_ms.len = C.size_t(len(languages[i]))
		defer C.free(unsafe.Pointer(languages_i_ms.data))
		languages_CArray[i] = languages_i_ms
	}
	languages_ma := C.struct_miqt_array{len: C.size_t(len(languages)), data: unsafe.Pointer(languages_CArray)}
	C.QWebEngineProfile_setSpellCheckLanguages(this.h, languages_ma)
}

func (this *QWebEngineProfile) SpellCheckLanguages() []string {
	var _ma C.struct_miqt_array = C.QWebEngineProfile_spellCheckLanguages(this.h)
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

func (this *QWebEngineProfile) SetSpellCheckEnabled(enabled bool) {
	C.QWebEngineProfile_setSpellCheckEnabled(this.h, (C.bool)(enabled))
}

func (this *QWebEngineProfile) IsSpellCheckEnabled() bool {
	return (bool)(C.QWebEngineProfile_isSpellCheckEnabled(this.h))
}

func (this *QWebEngineProfile) DownloadPath() string {
	var _ms C.struct_miqt_string = C.QWebEngineProfile_downloadPath(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebEngineProfile) SetDownloadPath(path string) {
	path_ms := C.struct_miqt_string{}
	path_ms.data = C.CString(path)
	path_ms.len = C.size_t(len(path))
	defer C.free(unsafe.Pointer(path_ms.data))
	C.QWebEngineProfile_setDownloadPath(this.h, path_ms)
}

func (this *QWebEngineProfile) ClientCertificateStore() *QWebEngineClientCertificateStore {
	return newQWebEngineClientCertificateStore(C.QWebEngineProfile_clientCertificateStore(this.h))
}

func QWebEngineProfile_DefaultProfile() *QWebEngineProfile {
	return newQWebEngineProfile(C.QWebEngineProfile_defaultProfile())
}

func (this *QWebEngineProfile) DownloadRequested(download *QWebEngineDownloadRequest) {
	C.QWebEngineProfile_downloadRequested(this.h, download.cPointer())
}
func (this *QWebEngineProfile) OnDownloadRequested(slot func(download *QWebEngineDownloadRequest)) {
	C.QWebEngineProfile_connect_downloadRequested(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebEngineProfile_downloadRequested
func miqt_exec_callback_QWebEngineProfile_downloadRequested(cb C.intptr_t, download *C.QWebEngineDownloadRequest) {
	gofunc, ok := cgo.Handle(cb).Value().(func(download *QWebEngineDownloadRequest))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWebEngineDownloadRequest(download)

	gofunc(slotval1)
}

func QWebEngineProfile_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebEngineProfile_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebEngineProfile_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebEngineProfile_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Sender can only be called from a QWebEngineProfile that was directly constructed.
func (this *QWebEngineProfile) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QWebEngineProfile_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QWebEngineProfile that was directly constructed.
func (this *QWebEngineProfile) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QWebEngineProfile_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QWebEngineProfile that was directly constructed.
func (this *QWebEngineProfile) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QWebEngineProfile_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QWebEngineProfile that was directly constructed.
func (this *QWebEngineProfile) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QWebEngineProfile_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QWebEngineProfile) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QWebEngineProfile_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QWebEngineProfile) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QWebEngineProfile_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineProfile_event
func miqt_exec_callback_QWebEngineProfile_event(self *C.QWebEngineProfile, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QWebEngineProfile{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QWebEngineProfile) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QWebEngineProfile_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QWebEngineProfile) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QWebEngineProfile_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineProfile_eventFilter
func miqt_exec_callback_QWebEngineProfile_eventFilter(self *C.QWebEngineProfile, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QWebEngineProfile{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QWebEngineProfile) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QWebEngineProfile_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QWebEngineProfile) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QWebEngineProfile_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineProfile_timerEvent
func miqt_exec_callback_QWebEngineProfile_timerEvent(self *C.QWebEngineProfile, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QWebEngineProfile{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QWebEngineProfile) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QWebEngineProfile_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QWebEngineProfile) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QWebEngineProfile_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineProfile_childEvent
func miqt_exec_callback_QWebEngineProfile_childEvent(self *C.QWebEngineProfile, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QWebEngineProfile{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QWebEngineProfile) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QWebEngineProfile_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QWebEngineProfile) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QWebEngineProfile_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineProfile_customEvent
func miqt_exec_callback_QWebEngineProfile_customEvent(self *C.QWebEngineProfile, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QWebEngineProfile{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QWebEngineProfile) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QWebEngineProfile_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QWebEngineProfile) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QWebEngineProfile_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineProfile_connectNotify
func miqt_exec_callback_QWebEngineProfile_connectNotify(self *C.QWebEngineProfile, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QWebEngineProfile{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QWebEngineProfile) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QWebEngineProfile_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QWebEngineProfile) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QWebEngineProfile_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineProfile_disconnectNotify
func miqt_exec_callback_QWebEngineProfile_disconnectNotify(self *C.QWebEngineProfile, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QWebEngineProfile{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QWebEngineProfile) Delete() {
	C.QWebEngineProfile_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWebEngineProfile) GoGC() {
	runtime.SetFinalizer(this, func(this *QWebEngineProfile) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
