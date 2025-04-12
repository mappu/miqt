package webkit

/*

#include "gen_qwebsettings.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"unsafe"
)

type QWebSettings__FontFamily int

const (
	QWebSettings__StandardFont  QWebSettings__FontFamily = 0
	QWebSettings__FixedFont     QWebSettings__FontFamily = 1
	QWebSettings__SerifFont     QWebSettings__FontFamily = 2
	QWebSettings__SansSerifFont QWebSettings__FontFamily = 3
	QWebSettings__CursiveFont   QWebSettings__FontFamily = 4
	QWebSettings__FantasyFont   QWebSettings__FontFamily = 5
)

type QWebSettings__WebAttribute int

const (
	QWebSettings__AutoLoadImages                    QWebSettings__WebAttribute = 0
	QWebSettings__JavascriptEnabled                 QWebSettings__WebAttribute = 1
	QWebSettings__JavaEnabled                       QWebSettings__WebAttribute = 2
	QWebSettings__PluginsEnabled                    QWebSettings__WebAttribute = 3
	QWebSettings__PrivateBrowsingEnabled            QWebSettings__WebAttribute = 4
	QWebSettings__JavascriptCanOpenWindows          QWebSettings__WebAttribute = 5
	QWebSettings__JavascriptCanAccessClipboard      QWebSettings__WebAttribute = 6
	QWebSettings__DeveloperExtrasEnabled            QWebSettings__WebAttribute = 7
	QWebSettings__LinksIncludedInFocusChain         QWebSettings__WebAttribute = 8
	QWebSettings__ZoomTextOnly                      QWebSettings__WebAttribute = 9
	QWebSettings__PrintElementBackgrounds           QWebSettings__WebAttribute = 10
	QWebSettings__OfflineStorageDatabaseEnabled     QWebSettings__WebAttribute = 11
	QWebSettings__OfflineWebApplicationCacheEnabled QWebSettings__WebAttribute = 12
	QWebSettings__LocalStorageEnabled               QWebSettings__WebAttribute = 13
	QWebSettings__LocalStorageDatabaseEnabled       QWebSettings__WebAttribute = 13
	QWebSettings__LocalContentCanAccessRemoteUrls   QWebSettings__WebAttribute = 14
	QWebSettings__DnsPrefetchEnabled                QWebSettings__WebAttribute = 15
	QWebSettings__XSSAuditingEnabled                QWebSettings__WebAttribute = 16
	QWebSettings__AcceleratedCompositingEnabled     QWebSettings__WebAttribute = 17
	QWebSettings__SpatialNavigationEnabled          QWebSettings__WebAttribute = 18
	QWebSettings__LocalContentCanAccessFileUrls     QWebSettings__WebAttribute = 19
	QWebSettings__TiledBackingStoreEnabled          QWebSettings__WebAttribute = 20
	QWebSettings__FrameFlatteningEnabled            QWebSettings__WebAttribute = 21
	QWebSettings__SiteSpecificQuirksEnabled         QWebSettings__WebAttribute = 22
	QWebSettings__JavascriptCanCloseWindows         QWebSettings__WebAttribute = 23
	QWebSettings__WebGLEnabled                      QWebSettings__WebAttribute = 24
	QWebSettings__CSSRegionsEnabled                 QWebSettings__WebAttribute = 25
	QWebSettings__HyperlinkAuditingEnabled          QWebSettings__WebAttribute = 26
	QWebSettings__CSSGridLayoutEnabled              QWebSettings__WebAttribute = 27
	QWebSettings__ScrollAnimatorEnabled             QWebSettings__WebAttribute = 28
	QWebSettings__CaretBrowsingEnabled              QWebSettings__WebAttribute = 29
	QWebSettings__NotificationsEnabled              QWebSettings__WebAttribute = 30
	QWebSettings__WebAudioEnabled                   QWebSettings__WebAttribute = 31
	QWebSettings__Accelerated2dCanvasEnabled        QWebSettings__WebAttribute = 32
	QWebSettings__MediaSourceEnabled                QWebSettings__WebAttribute = 33
	QWebSettings__MediaEnabled                      QWebSettings__WebAttribute = 34
	QWebSettings__WebSecurityEnabled                QWebSettings__WebAttribute = 35
	QWebSettings__FullScreenSupportEnabled          QWebSettings__WebAttribute = 36
	QWebSettings__ImagesEnabled                     QWebSettings__WebAttribute = 37
	QWebSettings__AllowRunningInsecureContent       QWebSettings__WebAttribute = 38
	QWebSettings__ErrorPageEnabled                  QWebSettings__WebAttribute = 39
)

type QWebSettings__WebGraphic int

const (
	QWebSettings__MissingImageGraphic              QWebSettings__WebGraphic = 0
	QWebSettings__MissingPluginGraphic             QWebSettings__WebGraphic = 1
	QWebSettings__DefaultFrameIconGraphic          QWebSettings__WebGraphic = 2
	QWebSettings__TextAreaSizeGripCornerGraphic    QWebSettings__WebGraphic = 3
	QWebSettings__DeleteButtonGraphic              QWebSettings__WebGraphic = 4
	QWebSettings__InputSpeechButtonGraphic         QWebSettings__WebGraphic = 5
	QWebSettings__SearchCancelButtonGraphic        QWebSettings__WebGraphic = 6
	QWebSettings__SearchCancelButtonPressedGraphic QWebSettings__WebGraphic = 7
)

type QWebSettings__FontSize int

const (
	QWebSettings__MinimumFontSize        QWebSettings__FontSize = 0
	QWebSettings__MinimumLogicalFontSize QWebSettings__FontSize = 1
	QWebSettings__DefaultFontSize        QWebSettings__FontSize = 2
	QWebSettings__DefaultFixedFontSize   QWebSettings__FontSize = 3
)

type QWebSettings__ThirdPartyCookiePolicy int

const (
	QWebSettings__AlwaysAllowThirdPartyCookies       QWebSettings__ThirdPartyCookiePolicy = 0
	QWebSettings__AlwaysBlockThirdPartyCookies       QWebSettings__ThirdPartyCookiePolicy = 1
	QWebSettings__AllowThirdPartyWithExistingCookies QWebSettings__ThirdPartyCookiePolicy = 2
)

type QWebSettings struct {
	h *C.QWebSettings
}

func (this *QWebSettings) cPointer() *C.QWebSettings {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWebSettings) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWebSettings constructs the type using only CGO pointers.
func newQWebSettings(h *C.QWebSettings) *QWebSettings {
	if h == nil {
		return nil
	}

	return &QWebSettings{h: h}
}

// UnsafeNewQWebSettings constructs the type using only unsafe pointers.
func UnsafeNewQWebSettings(h unsafe.Pointer) *QWebSettings {
	return newQWebSettings((*C.QWebSettings)(h))
}

func QWebSettings_GlobalSettings() *QWebSettings {
	return newQWebSettings(C.QWebSettings_globalSettings())
}

func (this *QWebSettings) SetFontFamily(which QWebSettings__FontFamily, family string) {
	family_ms := C.struct_miqt_string{}
	family_ms.data = C.CString(family)
	family_ms.len = C.size_t(len(family))
	defer C.free(unsafe.Pointer(family_ms.data))
	C.QWebSettings_setFontFamily(this.h, (C.int)(which), family_ms)
}

func (this *QWebSettings) FontFamily(which QWebSettings__FontFamily) string {
	var _ms C.struct_miqt_string = C.QWebSettings_fontFamily(this.h, (C.int)(which))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebSettings) ResetFontFamily(which QWebSettings__FontFamily) {
	C.QWebSettings_resetFontFamily(this.h, (C.int)(which))
}

func (this *QWebSettings) SetFontSize(typeVal QWebSettings__FontSize, size int) {
	C.QWebSettings_setFontSize(this.h, (C.int)(typeVal), (C.int)(size))
}

func (this *QWebSettings) FontSize(typeVal QWebSettings__FontSize) int {
	return (int)(C.QWebSettings_fontSize(this.h, (C.int)(typeVal)))
}

func (this *QWebSettings) ResetFontSize(typeVal QWebSettings__FontSize) {
	C.QWebSettings_resetFontSize(this.h, (C.int)(typeVal))
}

func (this *QWebSettings) SetAttribute(attr QWebSettings__WebAttribute, on bool) {
	C.QWebSettings_setAttribute(this.h, (C.int)(attr), (C.bool)(on))
}

func (this *QWebSettings) TestAttribute(attr QWebSettings__WebAttribute) bool {
	return (bool)(C.QWebSettings_testAttribute(this.h, (C.int)(attr)))
}

func (this *QWebSettings) ResetAttribute(attr QWebSettings__WebAttribute) {
	C.QWebSettings_resetAttribute(this.h, (C.int)(attr))
}

func (this *QWebSettings) SetUserStyleSheetUrl(location *qt.QUrl) {
	C.QWebSettings_setUserStyleSheetUrl(this.h, (*C.QUrl)(location.UnsafePointer()))
}

func (this *QWebSettings) UserStyleSheetUrl() *qt.QUrl {
	_goptr := qt.UnsafeNewQUrl(unsafe.Pointer(C.QWebSettings_userStyleSheetUrl(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebSettings) SetDefaultTextEncoding(encoding string) {
	encoding_ms := C.struct_miqt_string{}
	encoding_ms.data = C.CString(encoding)
	encoding_ms.len = C.size_t(len(encoding))
	defer C.free(unsafe.Pointer(encoding_ms.data))
	C.QWebSettings_setDefaultTextEncoding(this.h, encoding_ms)
}

func (this *QWebSettings) DefaultTextEncoding() string {
	var _ms C.struct_miqt_string = C.QWebSettings_defaultTextEncoding(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebSettings_SetIconDatabasePath(location string) {
	location_ms := C.struct_miqt_string{}
	location_ms.data = C.CString(location)
	location_ms.len = C.size_t(len(location))
	defer C.free(unsafe.Pointer(location_ms.data))
	C.QWebSettings_setIconDatabasePath(location_ms)
}

func QWebSettings_IconDatabasePath() string {
	var _ms C.struct_miqt_string = C.QWebSettings_iconDatabasePath()
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebSettings_ClearIconDatabase() {
	C.QWebSettings_clearIconDatabase()
}

func QWebSettings_IconForUrl(url *qt.QUrl) *qt.QIcon {
	_goptr := qt.UnsafeNewQIcon(unsafe.Pointer(C.QWebSettings_iconForUrl((*C.QUrl)(url.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QWebSettings_SetPluginSearchPaths(paths []string) {
	paths_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(paths))))
	defer C.free(unsafe.Pointer(paths_CArray))
	for i := range paths {
		paths_i_ms := C.struct_miqt_string{}
		paths_i_ms.data = C.CString(paths[i])
		paths_i_ms.len = C.size_t(len(paths[i]))
		defer C.free(unsafe.Pointer(paths_i_ms.data))
		paths_CArray[i] = paths_i_ms
	}
	paths_ma := C.struct_miqt_array{len: C.size_t(len(paths)), data: unsafe.Pointer(paths_CArray)}
	C.QWebSettings_setPluginSearchPaths(paths_ma)
}

func QWebSettings_PluginSearchPaths() []string {
	var _ma C.struct_miqt_array = C.QWebSettings_pluginSearchPaths()
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

func QWebSettings_SetWebGraphic(typeVal QWebSettings__WebGraphic, graphic *qt.QPixmap) {
	C.QWebSettings_setWebGraphic((C.int)(typeVal), (*C.QPixmap)(graphic.UnsafePointer()))
}

func QWebSettings_WebGraphic(typeVal QWebSettings__WebGraphic) *qt.QPixmap {
	_goptr := qt.UnsafeNewQPixmap(unsafe.Pointer(C.QWebSettings_webGraphic((C.int)(typeVal))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QWebSettings_SetMaximumPagesInCache(pages int) {
	C.QWebSettings_setMaximumPagesInCache((C.int)(pages))
}

func QWebSettings_MaximumPagesInCache() int {
	return (int)(C.QWebSettings_maximumPagesInCache())
}

func QWebSettings_SetObjectCacheCapacities(cacheMinDeadCapacity int, cacheMaxDead int, totalCapacity int) {
	C.QWebSettings_setObjectCacheCapacities((C.int)(cacheMinDeadCapacity), (C.int)(cacheMaxDead), (C.int)(totalCapacity))
}

func QWebSettings_SetOfflineStoragePath(path string) {
	path_ms := C.struct_miqt_string{}
	path_ms.data = C.CString(path)
	path_ms.len = C.size_t(len(path))
	defer C.free(unsafe.Pointer(path_ms.data))
	C.QWebSettings_setOfflineStoragePath(path_ms)
}

func QWebSettings_OfflineStoragePath() string {
	var _ms C.struct_miqt_string = C.QWebSettings_offlineStoragePath()
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebSettings_SetOfflineStorageDefaultQuota(maximumSize int64) {
	C.QWebSettings_setOfflineStorageDefaultQuota((C.longlong)(maximumSize))
}

func QWebSettings_OfflineStorageDefaultQuota() int64 {
	return (int64)(C.QWebSettings_offlineStorageDefaultQuota())
}

func QWebSettings_SetOfflineWebApplicationCachePath(path string) {
	path_ms := C.struct_miqt_string{}
	path_ms.data = C.CString(path)
	path_ms.len = C.size_t(len(path))
	defer C.free(unsafe.Pointer(path_ms.data))
	C.QWebSettings_setOfflineWebApplicationCachePath(path_ms)
}

func QWebSettings_OfflineWebApplicationCachePath() string {
	var _ms C.struct_miqt_string = C.QWebSettings_offlineWebApplicationCachePath()
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebSettings_SetOfflineWebApplicationCacheQuota(maximumSize int64) {
	C.QWebSettings_setOfflineWebApplicationCacheQuota((C.longlong)(maximumSize))
}

func QWebSettings_OfflineWebApplicationCacheQuota() int64 {
	return (int64)(C.QWebSettings_offlineWebApplicationCacheQuota())
}

func (this *QWebSettings) SetLocalStoragePath(path string) {
	path_ms := C.struct_miqt_string{}
	path_ms.data = C.CString(path)
	path_ms.len = C.size_t(len(path))
	defer C.free(unsafe.Pointer(path_ms.data))
	C.QWebSettings_setLocalStoragePath(this.h, path_ms)
}

func (this *QWebSettings) LocalStoragePath() string {
	var _ms C.struct_miqt_string = C.QWebSettings_localStoragePath(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebSettings_ClearMemoryCaches() {
	C.QWebSettings_clearMemoryCaches()
}

func QWebSettings_EnablePersistentStorage() {
	C.QWebSettings_enablePersistentStorage()
}

func (this *QWebSettings) SetThirdPartyCookiePolicy(thirdPartyCookiePolicy QWebSettings__ThirdPartyCookiePolicy) {
	C.QWebSettings_setThirdPartyCookiePolicy(this.h, (C.int)(thirdPartyCookiePolicy))
}

func (this *QWebSettings) ThirdPartyCookiePolicy() QWebSettings__ThirdPartyCookiePolicy {
	return (QWebSettings__ThirdPartyCookiePolicy)(C.QWebSettings_thirdPartyCookiePolicy(this.h))
}

func (this *QWebSettings) SetCSSMediaType(cSSMediaType string) {
	cSSMediaType_ms := C.struct_miqt_string{}
	cSSMediaType_ms.data = C.CString(cSSMediaType)
	cSSMediaType_ms.len = C.size_t(len(cSSMediaType))
	defer C.free(unsafe.Pointer(cSSMediaType_ms.data))
	C.QWebSettings_setCSSMediaType(this.h, cSSMediaType_ms)
}

func (this *QWebSettings) CssMediaType() string {
	var _ms C.struct_miqt_string = C.QWebSettings_cssMediaType(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebSettings_EnablePersistentStorageWithPath(path string) {
	path_ms := C.struct_miqt_string{}
	path_ms.data = C.CString(path)
	path_ms.len = C.size_t(len(path))
	defer C.free(unsafe.Pointer(path_ms.data))
	C.QWebSettings_enablePersistentStorageWithPath(path_ms)
}
