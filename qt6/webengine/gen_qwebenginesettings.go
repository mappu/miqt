package webengine

/*

#include "gen_qwebenginesettings.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QWebEngineSettings__FontFamily int

const (
	QWebEngineSettings__StandardFont   QWebEngineSettings__FontFamily = 0
	QWebEngineSettings__FixedFont      QWebEngineSettings__FontFamily = 1
	QWebEngineSettings__SerifFont      QWebEngineSettings__FontFamily = 2
	QWebEngineSettings__SansSerifFont  QWebEngineSettings__FontFamily = 3
	QWebEngineSettings__CursiveFont    QWebEngineSettings__FontFamily = 4
	QWebEngineSettings__FantasyFont    QWebEngineSettings__FontFamily = 5
	QWebEngineSettings__PictographFont QWebEngineSettings__FontFamily = 6
)

type QWebEngineSettings__WebAttribute int

const (
	QWebEngineSettings__AutoLoadImages                      QWebEngineSettings__WebAttribute = 0
	QWebEngineSettings__JavascriptEnabled                   QWebEngineSettings__WebAttribute = 1
	QWebEngineSettings__JavascriptCanOpenWindows            QWebEngineSettings__WebAttribute = 2
	QWebEngineSettings__JavascriptCanAccessClipboard        QWebEngineSettings__WebAttribute = 3
	QWebEngineSettings__LinksIncludedInFocusChain           QWebEngineSettings__WebAttribute = 4
	QWebEngineSettings__LocalStorageEnabled                 QWebEngineSettings__WebAttribute = 5
	QWebEngineSettings__LocalContentCanAccessRemoteUrls     QWebEngineSettings__WebAttribute = 6
	QWebEngineSettings__XSSAuditingEnabled                  QWebEngineSettings__WebAttribute = 7
	QWebEngineSettings__SpatialNavigationEnabled            QWebEngineSettings__WebAttribute = 8
	QWebEngineSettings__LocalContentCanAccessFileUrls       QWebEngineSettings__WebAttribute = 9
	QWebEngineSettings__HyperlinkAuditingEnabled            QWebEngineSettings__WebAttribute = 10
	QWebEngineSettings__ScrollAnimatorEnabled               QWebEngineSettings__WebAttribute = 11
	QWebEngineSettings__ErrorPageEnabled                    QWebEngineSettings__WebAttribute = 12
	QWebEngineSettings__PluginsEnabled                      QWebEngineSettings__WebAttribute = 13
	QWebEngineSettings__FullScreenSupportEnabled            QWebEngineSettings__WebAttribute = 14
	QWebEngineSettings__ScreenCaptureEnabled                QWebEngineSettings__WebAttribute = 15
	QWebEngineSettings__WebGLEnabled                        QWebEngineSettings__WebAttribute = 16
	QWebEngineSettings__Accelerated2dCanvasEnabled          QWebEngineSettings__WebAttribute = 17
	QWebEngineSettings__AutoLoadIconsForPage                QWebEngineSettings__WebAttribute = 18
	QWebEngineSettings__TouchIconsEnabled                   QWebEngineSettings__WebAttribute = 19
	QWebEngineSettings__FocusOnNavigationEnabled            QWebEngineSettings__WebAttribute = 20
	QWebEngineSettings__PrintElementBackgrounds             QWebEngineSettings__WebAttribute = 21
	QWebEngineSettings__AllowRunningInsecureContent         QWebEngineSettings__WebAttribute = 22
	QWebEngineSettings__AllowGeolocationOnInsecureOrigins   QWebEngineSettings__WebAttribute = 23
	QWebEngineSettings__AllowWindowActivationFromJavaScript QWebEngineSettings__WebAttribute = 24
	QWebEngineSettings__ShowScrollBars                      QWebEngineSettings__WebAttribute = 25
	QWebEngineSettings__PlaybackRequiresUserGesture         QWebEngineSettings__WebAttribute = 26
	QWebEngineSettings__WebRTCPublicInterfacesOnly          QWebEngineSettings__WebAttribute = 27
	QWebEngineSettings__JavascriptCanPaste                  QWebEngineSettings__WebAttribute = 28
	QWebEngineSettings__DnsPrefetchEnabled                  QWebEngineSettings__WebAttribute = 29
	QWebEngineSettings__PdfViewerEnabled                    QWebEngineSettings__WebAttribute = 30
	QWebEngineSettings__NavigateOnDropEnabled               QWebEngineSettings__WebAttribute = 31
)

type QWebEngineSettings__FontSize int

const (
	QWebEngineSettings__MinimumFontSize        QWebEngineSettings__FontSize = 0
	QWebEngineSettings__MinimumLogicalFontSize QWebEngineSettings__FontSize = 1
	QWebEngineSettings__DefaultFontSize        QWebEngineSettings__FontSize = 2
	QWebEngineSettings__DefaultFixedFontSize   QWebEngineSettings__FontSize = 3
)

type QWebEngineSettings__UnknownUrlSchemePolicy int

const (
	QWebEngineSettings__InheritedUnknownUrlSchemePolicy           QWebEngineSettings__UnknownUrlSchemePolicy = 0
	QWebEngineSettings__DisallowUnknownUrlSchemes                 QWebEngineSettings__UnknownUrlSchemePolicy = 1
	QWebEngineSettings__AllowUnknownUrlSchemesFromUserInteraction QWebEngineSettings__UnknownUrlSchemePolicy = 2
	QWebEngineSettings__AllowAllUnknownUrlSchemes                 QWebEngineSettings__UnknownUrlSchemePolicy = 3
)

type QWebEngineSettings struct {
	h          *C.QWebEngineSettings
	isSubclass bool
}

func (this *QWebEngineSettings) cPointer() *C.QWebEngineSettings {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWebEngineSettings) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWebEngineSettings constructs the type using only CGO pointers.
func newQWebEngineSettings(h *C.QWebEngineSettings) *QWebEngineSettings {
	if h == nil {
		return nil
	}

	return &QWebEngineSettings{h: h}
}

// UnsafeNewQWebEngineSettings constructs the type using only unsafe pointers.
func UnsafeNewQWebEngineSettings(h unsafe.Pointer) *QWebEngineSettings {
	return newQWebEngineSettings((*C.QWebEngineSettings)(h))
}

func (this *QWebEngineSettings) SetFontFamily(which QWebEngineSettings__FontFamily, family string) {
	family_ms := C.struct_miqt_string{}
	family_ms.data = C.CString(family)
	family_ms.len = C.size_t(len(family))
	defer C.free(unsafe.Pointer(family_ms.data))
	C.QWebEngineSettings_SetFontFamily(this.h, (C.int)(which), family_ms)
}

func (this *QWebEngineSettings) FontFamily(which QWebEngineSettings__FontFamily) string {
	var _ms C.struct_miqt_string = C.QWebEngineSettings_FontFamily(this.h, (C.int)(which))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebEngineSettings) ResetFontFamily(which QWebEngineSettings__FontFamily) {
	C.QWebEngineSettings_ResetFontFamily(this.h, (C.int)(which))
}

func (this *QWebEngineSettings) SetFontSize(typeVal QWebEngineSettings__FontSize, size int) {
	C.QWebEngineSettings_SetFontSize(this.h, (C.int)(typeVal), (C.int)(size))
}

func (this *QWebEngineSettings) FontSize(typeVal QWebEngineSettings__FontSize) int {
	return (int)(C.QWebEngineSettings_FontSize(this.h, (C.int)(typeVal)))
}

func (this *QWebEngineSettings) ResetFontSize(typeVal QWebEngineSettings__FontSize) {
	C.QWebEngineSettings_ResetFontSize(this.h, (C.int)(typeVal))
}

func (this *QWebEngineSettings) SetAttribute(attr QWebEngineSettings__WebAttribute, on bool) {
	C.QWebEngineSettings_SetAttribute(this.h, (C.int)(attr), (C.bool)(on))
}

func (this *QWebEngineSettings) TestAttribute(attr QWebEngineSettings__WebAttribute) bool {
	return (bool)(C.QWebEngineSettings_TestAttribute(this.h, (C.int)(attr)))
}

func (this *QWebEngineSettings) ResetAttribute(attr QWebEngineSettings__WebAttribute) {
	C.QWebEngineSettings_ResetAttribute(this.h, (C.int)(attr))
}

func (this *QWebEngineSettings) SetDefaultTextEncoding(encoding string) {
	encoding_ms := C.struct_miqt_string{}
	encoding_ms.data = C.CString(encoding)
	encoding_ms.len = C.size_t(len(encoding))
	defer C.free(unsafe.Pointer(encoding_ms.data))
	C.QWebEngineSettings_SetDefaultTextEncoding(this.h, encoding_ms)
}

func (this *QWebEngineSettings) DefaultTextEncoding() string {
	var _ms C.struct_miqt_string = C.QWebEngineSettings_DefaultTextEncoding(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebEngineSettings) UnknownUrlSchemePolicy() QWebEngineSettings__UnknownUrlSchemePolicy {
	return (QWebEngineSettings__UnknownUrlSchemePolicy)(C.QWebEngineSettings_UnknownUrlSchemePolicy(this.h))
}

func (this *QWebEngineSettings) SetUnknownUrlSchemePolicy(policy QWebEngineSettings__UnknownUrlSchemePolicy) {
	C.QWebEngineSettings_SetUnknownUrlSchemePolicy(this.h, (C.int)(policy))
}

func (this *QWebEngineSettings) ResetUnknownUrlSchemePolicy() {
	C.QWebEngineSettings_ResetUnknownUrlSchemePolicy(this.h)
}

// Delete this object from C++ memory.
func (this *QWebEngineSettings) Delete() {
	C.QWebEngineSettings_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWebEngineSettings) GoGC() {
	runtime.SetFinalizer(this, func(this *QWebEngineSettings) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
