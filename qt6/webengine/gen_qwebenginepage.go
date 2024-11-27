package webengine

/*

#include "gen_qwebenginepage.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"github.com/mappu/miqt/qt6/network"
	"github.com/mappu/miqt/qt6/webchannel"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QWebEnginePage__WebAction int

const (
	QWebEnginePage__NoWebAction                QWebEnginePage__WebAction = -1
	QWebEnginePage__Back                       QWebEnginePage__WebAction = 0
	QWebEnginePage__Forward                    QWebEnginePage__WebAction = 1
	QWebEnginePage__Stop                       QWebEnginePage__WebAction = 2
	QWebEnginePage__Reload                     QWebEnginePage__WebAction = 3
	QWebEnginePage__Cut                        QWebEnginePage__WebAction = 4
	QWebEnginePage__Copy                       QWebEnginePage__WebAction = 5
	QWebEnginePage__Paste                      QWebEnginePage__WebAction = 6
	QWebEnginePage__Undo                       QWebEnginePage__WebAction = 7
	QWebEnginePage__Redo                       QWebEnginePage__WebAction = 8
	QWebEnginePage__SelectAll                  QWebEnginePage__WebAction = 9
	QWebEnginePage__ReloadAndBypassCache       QWebEnginePage__WebAction = 10
	QWebEnginePage__PasteAndMatchStyle         QWebEnginePage__WebAction = 11
	QWebEnginePage__OpenLinkInThisWindow       QWebEnginePage__WebAction = 12
	QWebEnginePage__OpenLinkInNewWindow        QWebEnginePage__WebAction = 13
	QWebEnginePage__OpenLinkInNewTab           QWebEnginePage__WebAction = 14
	QWebEnginePage__CopyLinkToClipboard        QWebEnginePage__WebAction = 15
	QWebEnginePage__DownloadLinkToDisk         QWebEnginePage__WebAction = 16
	QWebEnginePage__CopyImageToClipboard       QWebEnginePage__WebAction = 17
	QWebEnginePage__CopyImageUrlToClipboard    QWebEnginePage__WebAction = 18
	QWebEnginePage__DownloadImageToDisk        QWebEnginePage__WebAction = 19
	QWebEnginePage__CopyMediaUrlToClipboard    QWebEnginePage__WebAction = 20
	QWebEnginePage__ToggleMediaControls        QWebEnginePage__WebAction = 21
	QWebEnginePage__ToggleMediaLoop            QWebEnginePage__WebAction = 22
	QWebEnginePage__ToggleMediaPlayPause       QWebEnginePage__WebAction = 23
	QWebEnginePage__ToggleMediaMute            QWebEnginePage__WebAction = 24
	QWebEnginePage__DownloadMediaToDisk        QWebEnginePage__WebAction = 25
	QWebEnginePage__InspectElement             QWebEnginePage__WebAction = 26
	QWebEnginePage__ExitFullScreen             QWebEnginePage__WebAction = 27
	QWebEnginePage__RequestClose               QWebEnginePage__WebAction = 28
	QWebEnginePage__Unselect                   QWebEnginePage__WebAction = 29
	QWebEnginePage__SavePage                   QWebEnginePage__WebAction = 30
	QWebEnginePage__OpenLinkInNewBackgroundTab QWebEnginePage__WebAction = 31
	QWebEnginePage__ViewSource                 QWebEnginePage__WebAction = 32
	QWebEnginePage__ToggleBold                 QWebEnginePage__WebAction = 33
	QWebEnginePage__ToggleItalic               QWebEnginePage__WebAction = 34
	QWebEnginePage__ToggleUnderline            QWebEnginePage__WebAction = 35
	QWebEnginePage__ToggleStrikethrough        QWebEnginePage__WebAction = 36
	QWebEnginePage__AlignLeft                  QWebEnginePage__WebAction = 37
	QWebEnginePage__AlignCenter                QWebEnginePage__WebAction = 38
	QWebEnginePage__AlignRight                 QWebEnginePage__WebAction = 39
	QWebEnginePage__AlignJustified             QWebEnginePage__WebAction = 40
	QWebEnginePage__Indent                     QWebEnginePage__WebAction = 41
	QWebEnginePage__Outdent                    QWebEnginePage__WebAction = 42
	QWebEnginePage__InsertOrderedList          QWebEnginePage__WebAction = 43
	QWebEnginePage__InsertUnorderedList        QWebEnginePage__WebAction = 44
	QWebEnginePage__WebActionCount             QWebEnginePage__WebAction = 45
)

type QWebEnginePage__FindFlag int

const (
	QWebEnginePage__FindBackward        QWebEnginePage__FindFlag = 1
	QWebEnginePage__FindCaseSensitively QWebEnginePage__FindFlag = 2
)

type QWebEnginePage__WebWindowType int

const (
	QWebEnginePage__WebBrowserWindow        QWebEnginePage__WebWindowType = 0
	QWebEnginePage__WebBrowserTab           QWebEnginePage__WebWindowType = 1
	QWebEnginePage__WebDialog               QWebEnginePage__WebWindowType = 2
	QWebEnginePage__WebBrowserBackgroundTab QWebEnginePage__WebWindowType = 3
)

type QWebEnginePage__PermissionPolicy int

const (
	QWebEnginePage__PermissionUnknown       QWebEnginePage__PermissionPolicy = 0
	QWebEnginePage__PermissionGrantedByUser QWebEnginePage__PermissionPolicy = 1
	QWebEnginePage__PermissionDeniedByUser  QWebEnginePage__PermissionPolicy = 2
)

type QWebEnginePage__NavigationType int

const (
	QWebEnginePage__NavigationTypeLinkClicked   QWebEnginePage__NavigationType = 0
	QWebEnginePage__NavigationTypeTyped         QWebEnginePage__NavigationType = 1
	QWebEnginePage__NavigationTypeFormSubmitted QWebEnginePage__NavigationType = 2
	QWebEnginePage__NavigationTypeBackForward   QWebEnginePage__NavigationType = 3
	QWebEnginePage__NavigationTypeReload        QWebEnginePage__NavigationType = 4
	QWebEnginePage__NavigationTypeOther         QWebEnginePage__NavigationType = 5
	QWebEnginePage__NavigationTypeRedirect      QWebEnginePage__NavigationType = 6
)

type QWebEnginePage__Feature int

const (
	QWebEnginePage__Notifications            QWebEnginePage__Feature = 0
	QWebEnginePage__Geolocation              QWebEnginePage__Feature = 1
	QWebEnginePage__MediaAudioCapture        QWebEnginePage__Feature = 2
	QWebEnginePage__MediaVideoCapture        QWebEnginePage__Feature = 3
	QWebEnginePage__MediaAudioVideoCapture   QWebEnginePage__Feature = 4
	QWebEnginePage__MouseLock                QWebEnginePage__Feature = 5
	QWebEnginePage__DesktopVideoCapture      QWebEnginePage__Feature = 6
	QWebEnginePage__DesktopAudioVideoCapture QWebEnginePage__Feature = 7
)

type QWebEnginePage__FileSelectionMode int

const (
	QWebEnginePage__FileSelectOpen         QWebEnginePage__FileSelectionMode = 0
	QWebEnginePage__FileSelectOpenMultiple QWebEnginePage__FileSelectionMode = 1
	QWebEnginePage__FileSelectUploadFolder QWebEnginePage__FileSelectionMode = 2
	QWebEnginePage__FileSelectSave         QWebEnginePage__FileSelectionMode = 3
)

type QWebEnginePage__JavaScriptConsoleMessageLevel int

const (
	QWebEnginePage__InfoMessageLevel    QWebEnginePage__JavaScriptConsoleMessageLevel = 0
	QWebEnginePage__WarningMessageLevel QWebEnginePage__JavaScriptConsoleMessageLevel = 1
	QWebEnginePage__ErrorMessageLevel   QWebEnginePage__JavaScriptConsoleMessageLevel = 2
)

type QWebEnginePage__RenderProcessTerminationStatus int

const (
	QWebEnginePage__NormalTerminationStatus   QWebEnginePage__RenderProcessTerminationStatus = 0
	QWebEnginePage__AbnormalTerminationStatus QWebEnginePage__RenderProcessTerminationStatus = 1
	QWebEnginePage__CrashedTerminationStatus  QWebEnginePage__RenderProcessTerminationStatus = 2
	QWebEnginePage__KilledTerminationStatus   QWebEnginePage__RenderProcessTerminationStatus = 3
)

type QWebEnginePage__LifecycleState int

const (
	QWebEnginePage__Active    QWebEnginePage__LifecycleState = 0
	QWebEnginePage__Frozen    QWebEnginePage__LifecycleState = 1
	QWebEnginePage__Discarded QWebEnginePage__LifecycleState = 2
)

type QWebEnginePage struct {
	h          *C.QWebEnginePage
	isSubclass bool
	*qt6.QObject
}

func (this *QWebEnginePage) cPointer() *C.QWebEnginePage {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWebEnginePage) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWebEnginePage constructs the type using only CGO pointers.
func newQWebEnginePage(h *C.QWebEnginePage, h_QObject *C.QObject) *QWebEnginePage {
	if h == nil {
		return nil
	}
	return &QWebEnginePage{h: h,
		QObject: qt6.UnsafeNewQObject(unsafe.Pointer(h_QObject))}
}

// UnsafeNewQWebEnginePage constructs the type using only unsafe pointers.
func UnsafeNewQWebEnginePage(h unsafe.Pointer, h_QObject unsafe.Pointer) *QWebEnginePage {
	if h == nil {
		return nil
	}

	return &QWebEnginePage{h: (*C.QWebEnginePage)(h),
		QObject: qt6.UnsafeNewQObject(h_QObject)}
}

// NewQWebEnginePage constructs a new QWebEnginePage object.
func NewQWebEnginePage() *QWebEnginePage {
	var outptr_QWebEnginePage *C.QWebEnginePage = nil
	var outptr_QObject *C.QObject = nil

	C.QWebEnginePage_new(&outptr_QWebEnginePage, &outptr_QObject)
	ret := newQWebEnginePage(outptr_QWebEnginePage, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQWebEnginePage2 constructs a new QWebEnginePage object.
func NewQWebEnginePage2(profile *QWebEngineProfile) *QWebEnginePage {
	var outptr_QWebEnginePage *C.QWebEnginePage = nil
	var outptr_QObject *C.QObject = nil

	C.QWebEnginePage_new2(profile.cPointer(), &outptr_QWebEnginePage, &outptr_QObject)
	ret := newQWebEnginePage(outptr_QWebEnginePage, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQWebEnginePage3 constructs a new QWebEnginePage object.
func NewQWebEnginePage3(parent *qt6.QObject) *QWebEnginePage {
	var outptr_QWebEnginePage *C.QWebEnginePage = nil
	var outptr_QObject *C.QObject = nil

	C.QWebEnginePage_new3((*C.QObject)(parent.UnsafePointer()), &outptr_QWebEnginePage, &outptr_QObject)
	ret := newQWebEnginePage(outptr_QWebEnginePage, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQWebEnginePage4 constructs a new QWebEnginePage object.
func NewQWebEnginePage4(profile *QWebEngineProfile, parent *qt6.QObject) *QWebEnginePage {
	var outptr_QWebEnginePage *C.QWebEnginePage = nil
	var outptr_QObject *C.QObject = nil

	C.QWebEnginePage_new4(profile.cPointer(), (*C.QObject)(parent.UnsafePointer()), &outptr_QWebEnginePage, &outptr_QObject)
	ret := newQWebEnginePage(outptr_QWebEnginePage, outptr_QObject)
	ret.isSubclass = true
	return ret
}

func (this *QWebEnginePage) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QWebEnginePage_MetaObject(this.h)))
}

func (this *QWebEnginePage) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QWebEnginePage_Metacast(this.h, param1_Cstring))
}

func QWebEnginePage_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QWebEnginePage_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebEnginePage) History() *QWebEngineHistory {
	return UnsafeNewQWebEngineHistory(unsafe.Pointer(C.QWebEnginePage_History(this.h)), nil)
}

func (this *QWebEnginePage) HasSelection() bool {
	return (bool)(C.QWebEnginePage_HasSelection(this.h))
}

func (this *QWebEnginePage) SelectedText() string {
	var _ms C.struct_miqt_string = C.QWebEnginePage_SelectedText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebEnginePage) Profile() *QWebEngineProfile {
	return UnsafeNewQWebEngineProfile(unsafe.Pointer(C.QWebEnginePage_Profile(this.h)), nil)
}

func (this *QWebEnginePage) Action(action QWebEnginePage__WebAction) *qt6.QAction {
	return qt6.UnsafeNewQAction(unsafe.Pointer(C.QWebEnginePage_Action(this.h, (C.int)(action))), nil)
}

func (this *QWebEnginePage) TriggerAction(action QWebEnginePage__WebAction, checked bool) {
	C.QWebEnginePage_TriggerAction(this.h, (C.int)(action), (C.bool)(checked))
}

func (this *QWebEnginePage) ReplaceMisspelledWord(replacement string) {
	replacement_ms := C.struct_miqt_string{}
	replacement_ms.data = C.CString(replacement)
	replacement_ms.len = C.size_t(len(replacement))
	defer C.free(unsafe.Pointer(replacement_ms.data))
	C.QWebEnginePage_ReplaceMisspelledWord(this.h, replacement_ms)
}

func (this *QWebEnginePage) Event(param1 *qt6.QEvent) bool {
	return (bool)(C.QWebEnginePage_Event(this.h, (*C.QEvent)(param1.UnsafePointer())))
}

func (this *QWebEnginePage) SetFeaturePermission(securityOrigin *qt6.QUrl, feature QWebEnginePage__Feature, policy QWebEnginePage__PermissionPolicy) {
	C.QWebEnginePage_SetFeaturePermission(this.h, (*C.QUrl)(securityOrigin.UnsafePointer()), (C.int)(feature), (C.int)(policy))
}

func (this *QWebEnginePage) IsLoading() bool {
	return (bool)(C.QWebEnginePage_IsLoading(this.h))
}

func (this *QWebEnginePage) Load(url *qt6.QUrl) {
	C.QWebEnginePage_Load(this.h, (*C.QUrl)(url.UnsafePointer()))
}

func (this *QWebEnginePage) LoadWithRequest(request *QWebEngineHttpRequest) {
	C.QWebEnginePage_LoadWithRequest(this.h, request.cPointer())
}

func (this *QWebEnginePage) Download(url *qt6.QUrl) {
	C.QWebEnginePage_Download(this.h, (*C.QUrl)(url.UnsafePointer()))
}

func (this *QWebEnginePage) SetHtml(html string) {
	html_ms := C.struct_miqt_string{}
	html_ms.data = C.CString(html)
	html_ms.len = C.size_t(len(html))
	defer C.free(unsafe.Pointer(html_ms.data))
	C.QWebEnginePage_SetHtml(this.h, html_ms)
}

func (this *QWebEnginePage) SetContent(data []byte) {
	data_alias := C.struct_miqt_string{}
	data_alias.data = (*C.char)(unsafe.Pointer(&data[0]))
	data_alias.len = C.size_t(len(data))
	C.QWebEnginePage_SetContent(this.h, data_alias)
}

func (this *QWebEnginePage) Title() string {
	var _ms C.struct_miqt_string = C.QWebEnginePage_Title(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebEnginePage) SetUrl(url *qt6.QUrl) {
	C.QWebEnginePage_SetUrl(this.h, (*C.QUrl)(url.UnsafePointer()))
}

func (this *QWebEnginePage) Url() *qt6.QUrl {
	_ret := C.QWebEnginePage_Url(this.h)
	_goptr := qt6.UnsafeNewQUrl(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebEnginePage) RequestedUrl() *qt6.QUrl {
	_ret := C.QWebEnginePage_RequestedUrl(this.h)
	_goptr := qt6.UnsafeNewQUrl(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebEnginePage) IconUrl() *qt6.QUrl {
	_ret := C.QWebEnginePage_IconUrl(this.h)
	_goptr := qt6.UnsafeNewQUrl(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebEnginePage) Icon() *qt6.QIcon {
	_ret := C.QWebEnginePage_Icon(this.h)
	_goptr := qt6.UnsafeNewQIcon(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebEnginePage) ZoomFactor() float64 {
	return (float64)(C.QWebEnginePage_ZoomFactor(this.h))
}

func (this *QWebEnginePage) SetZoomFactor(factor float64) {
	C.QWebEnginePage_SetZoomFactor(this.h, (C.double)(factor))
}

func (this *QWebEnginePage) ScrollPosition() *qt6.QPointF {
	_ret := C.QWebEnginePage_ScrollPosition(this.h)
	_goptr := qt6.UnsafeNewQPointF(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebEnginePage) ContentsSize() *qt6.QSizeF {
	_ret := C.QWebEnginePage_ContentsSize(this.h)
	_goptr := qt6.UnsafeNewQSizeF(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebEnginePage) Scripts() *QWebEngineScriptCollection {
	return UnsafeNewQWebEngineScriptCollection(unsafe.Pointer(C.QWebEnginePage_Scripts(this.h)))
}

func (this *QWebEnginePage) Settings() *QWebEngineSettings {
	return UnsafeNewQWebEngineSettings(unsafe.Pointer(C.QWebEnginePage_Settings(this.h)))
}

func (this *QWebEnginePage) WebChannel() *webchannel.QWebChannel {
	return webchannel.UnsafeNewQWebChannel(unsafe.Pointer(C.QWebEnginePage_WebChannel(this.h)), nil)
}

func (this *QWebEnginePage) SetWebChannel(param1 *webchannel.QWebChannel) {
	C.QWebEnginePage_SetWebChannel(this.h, (*C.QWebChannel)(param1.UnsafePointer()))
}

func (this *QWebEnginePage) BackgroundColor() *qt6.QColor {
	_ret := C.QWebEnginePage_BackgroundColor(this.h)
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebEnginePage) SetBackgroundColor(color *qt6.QColor) {
	C.QWebEnginePage_SetBackgroundColor(this.h, (*C.QColor)(color.UnsafePointer()))
}

func (this *QWebEnginePage) Save(filePath string) {
	filePath_ms := C.struct_miqt_string{}
	filePath_ms.data = C.CString(filePath)
	filePath_ms.len = C.size_t(len(filePath))
	defer C.free(unsafe.Pointer(filePath_ms.data))
	C.QWebEnginePage_Save(this.h, filePath_ms)
}

func (this *QWebEnginePage) IsAudioMuted() bool {
	return (bool)(C.QWebEnginePage_IsAudioMuted(this.h))
}

func (this *QWebEnginePage) SetAudioMuted(muted bool) {
	C.QWebEnginePage_SetAudioMuted(this.h, (C.bool)(muted))
}

func (this *QWebEnginePage) RecentlyAudible() bool {
	return (bool)(C.QWebEnginePage_RecentlyAudible(this.h))
}

func (this *QWebEnginePage) RenderProcessPid() int64 {
	return (int64)(C.QWebEnginePage_RenderProcessPid(this.h))
}

func (this *QWebEnginePage) PrintToPdf(filePath string) {
	filePath_ms := C.struct_miqt_string{}
	filePath_ms.data = C.CString(filePath)
	filePath_ms.len = C.size_t(len(filePath))
	defer C.free(unsafe.Pointer(filePath_ms.data))
	C.QWebEnginePage_PrintToPdf(this.h, filePath_ms)
}

func (this *QWebEnginePage) SetInspectedPage(page *QWebEnginePage) {
	C.QWebEnginePage_SetInspectedPage(this.h, page.cPointer())
}

func (this *QWebEnginePage) InspectedPage() *QWebEnginePage {
	return UnsafeNewQWebEnginePage(unsafe.Pointer(C.QWebEnginePage_InspectedPage(this.h)), nil)
}

func (this *QWebEnginePage) SetDevToolsPage(page *QWebEnginePage) {
	C.QWebEnginePage_SetDevToolsPage(this.h, page.cPointer())
}

func (this *QWebEnginePage) DevToolsPage() *QWebEnginePage {
	return UnsafeNewQWebEnginePage(unsafe.Pointer(C.QWebEnginePage_DevToolsPage(this.h)), nil)
}

func (this *QWebEnginePage) SetUrlRequestInterceptor(interceptor *QWebEngineUrlRequestInterceptor) {
	C.QWebEnginePage_SetUrlRequestInterceptor(this.h, interceptor.cPointer())
}

func (this *QWebEnginePage) LifecycleState() QWebEnginePage__LifecycleState {
	return (QWebEnginePage__LifecycleState)(C.QWebEnginePage_LifecycleState(this.h))
}

func (this *QWebEnginePage) SetLifecycleState(state QWebEnginePage__LifecycleState) {
	C.QWebEnginePage_SetLifecycleState(this.h, (C.int)(state))
}

func (this *QWebEnginePage) RecommendedState() QWebEnginePage__LifecycleState {
	return (QWebEnginePage__LifecycleState)(C.QWebEnginePage_RecommendedState(this.h))
}

func (this *QWebEnginePage) IsVisible() bool {
	return (bool)(C.QWebEnginePage_IsVisible(this.h))
}

func (this *QWebEnginePage) SetVisible(visible bool) {
	C.QWebEnginePage_SetVisible(this.h, (C.bool)(visible))
}

func (this *QWebEnginePage) AcceptAsNewWindow(request *QWebEngineNewWindowRequest) {
	C.QWebEnginePage_AcceptAsNewWindow(this.h, request.cPointer())
}

func (this *QWebEnginePage) LoadStarted() {
	C.QWebEnginePage_LoadStarted(this.h)
}
func (this *QWebEnginePage) OnLoadStarted(slot func()) {
	C.QWebEnginePage_connect_LoadStarted(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebEnginePage_LoadStarted
func miqt_exec_callback_QWebEnginePage_LoadStarted(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QWebEnginePage) LoadProgress(progress int) {
	C.QWebEnginePage_LoadProgress(this.h, (C.int)(progress))
}
func (this *QWebEnginePage) OnLoadProgress(slot func(progress int)) {
	C.QWebEnginePage_connect_LoadProgress(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebEnginePage_LoadProgress
func miqt_exec_callback_QWebEnginePage_LoadProgress(cb C.intptr_t, progress C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(progress int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(progress)

	gofunc(slotval1)
}

func (this *QWebEnginePage) LoadFinished(ok bool) {
	C.QWebEnginePage_LoadFinished(this.h, (C.bool)(ok))
}
func (this *QWebEnginePage) OnLoadFinished(slot func(ok bool)) {
	C.QWebEnginePage_connect_LoadFinished(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebEnginePage_LoadFinished
func miqt_exec_callback_QWebEnginePage_LoadFinished(cb C.intptr_t, ok C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(ok bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(ok)

	gofunc(slotval1)
}

func (this *QWebEnginePage) LoadingChanged(loadingInfo *QWebEngineLoadingInfo) {
	C.QWebEnginePage_LoadingChanged(this.h, loadingInfo.cPointer())
}
func (this *QWebEnginePage) OnLoadingChanged(slot func(loadingInfo *QWebEngineLoadingInfo)) {
	C.QWebEnginePage_connect_LoadingChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebEnginePage_LoadingChanged
func miqt_exec_callback_QWebEnginePage_LoadingChanged(cb C.intptr_t, loadingInfo *C.QWebEngineLoadingInfo) {
	gofunc, ok := cgo.Handle(cb).Value().(func(loadingInfo *QWebEngineLoadingInfo))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQWebEngineLoadingInfo(unsafe.Pointer(loadingInfo))

	gofunc(slotval1)
}

func (this *QWebEnginePage) LinkHovered(url string) {
	url_ms := C.struct_miqt_string{}
	url_ms.data = C.CString(url)
	url_ms.len = C.size_t(len(url))
	defer C.free(unsafe.Pointer(url_ms.data))
	C.QWebEnginePage_LinkHovered(this.h, url_ms)
}
func (this *QWebEnginePage) OnLinkHovered(slot func(url string)) {
	C.QWebEnginePage_connect_LinkHovered(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebEnginePage_LinkHovered
func miqt_exec_callback_QWebEnginePage_LinkHovered(cb C.intptr_t, url C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(url string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var url_ms C.struct_miqt_string = url
	url_ret := C.GoStringN(url_ms.data, C.int(int64(url_ms.len)))
	C.free(unsafe.Pointer(url_ms.data))
	slotval1 := url_ret

	gofunc(slotval1)
}

func (this *QWebEnginePage) SelectionChanged() {
	C.QWebEnginePage_SelectionChanged(this.h)
}
func (this *QWebEnginePage) OnSelectionChanged(slot func()) {
	C.QWebEnginePage_connect_SelectionChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebEnginePage_SelectionChanged
func miqt_exec_callback_QWebEnginePage_SelectionChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QWebEnginePage) GeometryChangeRequested(geom *qt6.QRect) {
	C.QWebEnginePage_GeometryChangeRequested(this.h, (*C.QRect)(geom.UnsafePointer()))
}
func (this *QWebEnginePage) OnGeometryChangeRequested(slot func(geom *qt6.QRect)) {
	C.QWebEnginePage_connect_GeometryChangeRequested(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebEnginePage_GeometryChangeRequested
func miqt_exec_callback_QWebEnginePage_GeometryChangeRequested(cb C.intptr_t, geom *C.QRect) {
	gofunc, ok := cgo.Handle(cb).Value().(func(geom *qt6.QRect))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQRect(unsafe.Pointer(geom))

	gofunc(slotval1)
}

func (this *QWebEnginePage) WindowCloseRequested() {
	C.QWebEnginePage_WindowCloseRequested(this.h)
}
func (this *QWebEnginePage) OnWindowCloseRequested(slot func()) {
	C.QWebEnginePage_connect_WindowCloseRequested(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebEnginePage_WindowCloseRequested
func miqt_exec_callback_QWebEnginePage_WindowCloseRequested(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QWebEnginePage) FeaturePermissionRequested(securityOrigin *qt6.QUrl, feature QWebEnginePage__Feature) {
	C.QWebEnginePage_FeaturePermissionRequested(this.h, (*C.QUrl)(securityOrigin.UnsafePointer()), (C.int)(feature))
}
func (this *QWebEnginePage) OnFeaturePermissionRequested(slot func(securityOrigin *qt6.QUrl, feature QWebEnginePage__Feature)) {
	C.QWebEnginePage_connect_FeaturePermissionRequested(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebEnginePage_FeaturePermissionRequested
func miqt_exec_callback_QWebEnginePage_FeaturePermissionRequested(cb C.intptr_t, securityOrigin *C.QUrl, feature C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(securityOrigin *qt6.QUrl, feature QWebEnginePage__Feature))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQUrl(unsafe.Pointer(securityOrigin))
	slotval2 := (QWebEnginePage__Feature)(feature)

	gofunc(slotval1, slotval2)
}

func (this *QWebEnginePage) FeaturePermissionRequestCanceled(securityOrigin *qt6.QUrl, feature QWebEnginePage__Feature) {
	C.QWebEnginePage_FeaturePermissionRequestCanceled(this.h, (*C.QUrl)(securityOrigin.UnsafePointer()), (C.int)(feature))
}
func (this *QWebEnginePage) OnFeaturePermissionRequestCanceled(slot func(securityOrigin *qt6.QUrl, feature QWebEnginePage__Feature)) {
	C.QWebEnginePage_connect_FeaturePermissionRequestCanceled(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebEnginePage_FeaturePermissionRequestCanceled
func miqt_exec_callback_QWebEnginePage_FeaturePermissionRequestCanceled(cb C.intptr_t, securityOrigin *C.QUrl, feature C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(securityOrigin *qt6.QUrl, feature QWebEnginePage__Feature))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQUrl(unsafe.Pointer(securityOrigin))
	slotval2 := (QWebEnginePage__Feature)(feature)

	gofunc(slotval1, slotval2)
}

func (this *QWebEnginePage) FullScreenRequested(fullScreenRequest QWebEngineFullScreenRequest) {
	C.QWebEnginePage_FullScreenRequested(this.h, fullScreenRequest.cPointer())
}
func (this *QWebEnginePage) OnFullScreenRequested(slot func(fullScreenRequest QWebEngineFullScreenRequest)) {
	C.QWebEnginePage_connect_FullScreenRequested(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebEnginePage_FullScreenRequested
func miqt_exec_callback_QWebEnginePage_FullScreenRequested(cb C.intptr_t, fullScreenRequest *C.QWebEngineFullScreenRequest) {
	gofunc, ok := cgo.Handle(cb).Value().(func(fullScreenRequest QWebEngineFullScreenRequest))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	fullScreenRequest_ret := fullScreenRequest
	fullScreenRequest_goptr := newQWebEngineFullScreenRequest(fullScreenRequest_ret)
	fullScreenRequest_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	slotval1 := *fullScreenRequest_goptr

	gofunc(slotval1)
}

func (this *QWebEnginePage) QuotaRequested(quotaRequest QWebEngineQuotaRequest) {
	C.QWebEnginePage_QuotaRequested(this.h, quotaRequest.cPointer())
}
func (this *QWebEnginePage) OnQuotaRequested(slot func(quotaRequest QWebEngineQuotaRequest)) {
	C.QWebEnginePage_connect_QuotaRequested(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebEnginePage_QuotaRequested
func miqt_exec_callback_QWebEnginePage_QuotaRequested(cb C.intptr_t, quotaRequest *C.QWebEngineQuotaRequest) {
	gofunc, ok := cgo.Handle(cb).Value().(func(quotaRequest QWebEngineQuotaRequest))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	quotaRequest_ret := quotaRequest
	quotaRequest_goptr := newQWebEngineQuotaRequest(quotaRequest_ret)
	quotaRequest_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	slotval1 := *quotaRequest_goptr

	gofunc(slotval1)
}

func (this *QWebEnginePage) RegisterProtocolHandlerRequested(request QWebEngineRegisterProtocolHandlerRequest) {
	C.QWebEnginePage_RegisterProtocolHandlerRequested(this.h, request.cPointer())
}
func (this *QWebEnginePage) OnRegisterProtocolHandlerRequested(slot func(request QWebEngineRegisterProtocolHandlerRequest)) {
	C.QWebEnginePage_connect_RegisterProtocolHandlerRequested(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebEnginePage_RegisterProtocolHandlerRequested
func miqt_exec_callback_QWebEnginePage_RegisterProtocolHandlerRequested(cb C.intptr_t, request *C.QWebEngineRegisterProtocolHandlerRequest) {
	gofunc, ok := cgo.Handle(cb).Value().(func(request QWebEngineRegisterProtocolHandlerRequest))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	request_ret := request
	request_goptr := newQWebEngineRegisterProtocolHandlerRequest(request_ret)
	request_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	slotval1 := *request_goptr

	gofunc(slotval1)
}

func (this *QWebEnginePage) FileSystemAccessRequested(request QWebEngineFileSystemAccessRequest) {
	C.QWebEnginePage_FileSystemAccessRequested(this.h, request.cPointer())
}
func (this *QWebEnginePage) OnFileSystemAccessRequested(slot func(request QWebEngineFileSystemAccessRequest)) {
	C.QWebEnginePage_connect_FileSystemAccessRequested(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebEnginePage_FileSystemAccessRequested
func miqt_exec_callback_QWebEnginePage_FileSystemAccessRequested(cb C.intptr_t, request *C.QWebEngineFileSystemAccessRequest) {
	gofunc, ok := cgo.Handle(cb).Value().(func(request QWebEngineFileSystemAccessRequest))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	request_ret := request
	request_goptr := newQWebEngineFileSystemAccessRequest(request_ret)
	request_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	slotval1 := *request_goptr

	gofunc(slotval1)
}

func (this *QWebEnginePage) SelectClientCertificate(clientCertSelection QWebEngineClientCertificateSelection) {
	C.QWebEnginePage_SelectClientCertificate(this.h, clientCertSelection.cPointer())
}
func (this *QWebEnginePage) OnSelectClientCertificate(slot func(clientCertSelection QWebEngineClientCertificateSelection)) {
	C.QWebEnginePage_connect_SelectClientCertificate(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebEnginePage_SelectClientCertificate
func miqt_exec_callback_QWebEnginePage_SelectClientCertificate(cb C.intptr_t, clientCertSelection *C.QWebEngineClientCertificateSelection) {
	gofunc, ok := cgo.Handle(cb).Value().(func(clientCertSelection QWebEngineClientCertificateSelection))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	clientCertSelection_ret := clientCertSelection
	clientCertSelection_goptr := newQWebEngineClientCertificateSelection(clientCertSelection_ret)
	clientCertSelection_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	slotval1 := *clientCertSelection_goptr

	gofunc(slotval1)
}

func (this *QWebEnginePage) AuthenticationRequired(requestUrl *qt6.QUrl, authenticator *network.QAuthenticator) {
	C.QWebEnginePage_AuthenticationRequired(this.h, (*C.QUrl)(requestUrl.UnsafePointer()), (*C.QAuthenticator)(authenticator.UnsafePointer()))
}
func (this *QWebEnginePage) OnAuthenticationRequired(slot func(requestUrl *qt6.QUrl, authenticator *network.QAuthenticator)) {
	C.QWebEnginePage_connect_AuthenticationRequired(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebEnginePage_AuthenticationRequired
func miqt_exec_callback_QWebEnginePage_AuthenticationRequired(cb C.intptr_t, requestUrl *C.QUrl, authenticator *C.QAuthenticator) {
	gofunc, ok := cgo.Handle(cb).Value().(func(requestUrl *qt6.QUrl, authenticator *network.QAuthenticator))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQUrl(unsafe.Pointer(requestUrl))
	slotval2 := network.UnsafeNewQAuthenticator(unsafe.Pointer(authenticator))

	gofunc(slotval1, slotval2)
}

func (this *QWebEnginePage) ProxyAuthenticationRequired(requestUrl *qt6.QUrl, authenticator *network.QAuthenticator, proxyHost string) {
	proxyHost_ms := C.struct_miqt_string{}
	proxyHost_ms.data = C.CString(proxyHost)
	proxyHost_ms.len = C.size_t(len(proxyHost))
	defer C.free(unsafe.Pointer(proxyHost_ms.data))
	C.QWebEnginePage_ProxyAuthenticationRequired(this.h, (*C.QUrl)(requestUrl.UnsafePointer()), (*C.QAuthenticator)(authenticator.UnsafePointer()), proxyHost_ms)
}
func (this *QWebEnginePage) OnProxyAuthenticationRequired(slot func(requestUrl *qt6.QUrl, authenticator *network.QAuthenticator, proxyHost string)) {
	C.QWebEnginePage_connect_ProxyAuthenticationRequired(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebEnginePage_ProxyAuthenticationRequired
func miqt_exec_callback_QWebEnginePage_ProxyAuthenticationRequired(cb C.intptr_t, requestUrl *C.QUrl, authenticator *C.QAuthenticator, proxyHost C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(requestUrl *qt6.QUrl, authenticator *network.QAuthenticator, proxyHost string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQUrl(unsafe.Pointer(requestUrl))
	slotval2 := network.UnsafeNewQAuthenticator(unsafe.Pointer(authenticator))
	var proxyHost_ms C.struct_miqt_string = proxyHost
	proxyHost_ret := C.GoStringN(proxyHost_ms.data, C.int(int64(proxyHost_ms.len)))
	C.free(unsafe.Pointer(proxyHost_ms.data))
	slotval3 := proxyHost_ret

	gofunc(slotval1, slotval2, slotval3)
}

func (this *QWebEnginePage) RenderProcessTerminated(terminationStatus QWebEnginePage__RenderProcessTerminationStatus, exitCode int) {
	C.QWebEnginePage_RenderProcessTerminated(this.h, (C.int)(terminationStatus), (C.int)(exitCode))
}
func (this *QWebEnginePage) OnRenderProcessTerminated(slot func(terminationStatus QWebEnginePage__RenderProcessTerminationStatus, exitCode int)) {
	C.QWebEnginePage_connect_RenderProcessTerminated(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebEnginePage_RenderProcessTerminated
func miqt_exec_callback_QWebEnginePage_RenderProcessTerminated(cb C.intptr_t, terminationStatus C.int, exitCode C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(terminationStatus QWebEnginePage__RenderProcessTerminationStatus, exitCode int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QWebEnginePage__RenderProcessTerminationStatus)(terminationStatus)

	slotval2 := (int)(exitCode)

	gofunc(slotval1, slotval2)
}

func (this *QWebEnginePage) CertificateError(certificateError *QWebEngineCertificateError) {
	C.QWebEnginePage_CertificateError(this.h, certificateError.cPointer())
}
func (this *QWebEnginePage) OnCertificateError(slot func(certificateError *QWebEngineCertificateError)) {
	C.QWebEnginePage_connect_CertificateError(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebEnginePage_CertificateError
func miqt_exec_callback_QWebEnginePage_CertificateError(cb C.intptr_t, certificateError *C.QWebEngineCertificateError) {
	gofunc, ok := cgo.Handle(cb).Value().(func(certificateError *QWebEngineCertificateError))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQWebEngineCertificateError(unsafe.Pointer(certificateError))

	gofunc(slotval1)
}

func (this *QWebEnginePage) NavigationRequested(request *QWebEngineNavigationRequest) {
	C.QWebEnginePage_NavigationRequested(this.h, request.cPointer())
}
func (this *QWebEnginePage) OnNavigationRequested(slot func(request *QWebEngineNavigationRequest)) {
	C.QWebEnginePage_connect_NavigationRequested(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebEnginePage_NavigationRequested
func miqt_exec_callback_QWebEnginePage_NavigationRequested(cb C.intptr_t, request *C.QWebEngineNavigationRequest) {
	gofunc, ok := cgo.Handle(cb).Value().(func(request *QWebEngineNavigationRequest))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQWebEngineNavigationRequest(unsafe.Pointer(request), nil)

	gofunc(slotval1)
}

func (this *QWebEnginePage) NewWindowRequested(request *QWebEngineNewWindowRequest) {
	C.QWebEnginePage_NewWindowRequested(this.h, request.cPointer())
}
func (this *QWebEnginePage) OnNewWindowRequested(slot func(request *QWebEngineNewWindowRequest)) {
	C.QWebEnginePage_connect_NewWindowRequested(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebEnginePage_NewWindowRequested
func miqt_exec_callback_QWebEnginePage_NewWindowRequested(cb C.intptr_t, request *C.QWebEngineNewWindowRequest) {
	gofunc, ok := cgo.Handle(cb).Value().(func(request *QWebEngineNewWindowRequest))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQWebEngineNewWindowRequest(unsafe.Pointer(request), nil)

	gofunc(slotval1)
}

func (this *QWebEnginePage) TitleChanged(title string) {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	C.QWebEnginePage_TitleChanged(this.h, title_ms)
}
func (this *QWebEnginePage) OnTitleChanged(slot func(title string)) {
	C.QWebEnginePage_connect_TitleChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebEnginePage_TitleChanged
func miqt_exec_callback_QWebEnginePage_TitleChanged(cb C.intptr_t, title C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(title string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var title_ms C.struct_miqt_string = title
	title_ret := C.GoStringN(title_ms.data, C.int(int64(title_ms.len)))
	C.free(unsafe.Pointer(title_ms.data))
	slotval1 := title_ret

	gofunc(slotval1)
}

func (this *QWebEnginePage) UrlChanged(url *qt6.QUrl) {
	C.QWebEnginePage_UrlChanged(this.h, (*C.QUrl)(url.UnsafePointer()))
}
func (this *QWebEnginePage) OnUrlChanged(slot func(url *qt6.QUrl)) {
	C.QWebEnginePage_connect_UrlChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebEnginePage_UrlChanged
func miqt_exec_callback_QWebEnginePage_UrlChanged(cb C.intptr_t, url *C.QUrl) {
	gofunc, ok := cgo.Handle(cb).Value().(func(url *qt6.QUrl))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQUrl(unsafe.Pointer(url))

	gofunc(slotval1)
}

func (this *QWebEnginePage) IconUrlChanged(url *qt6.QUrl) {
	C.QWebEnginePage_IconUrlChanged(this.h, (*C.QUrl)(url.UnsafePointer()))
}
func (this *QWebEnginePage) OnIconUrlChanged(slot func(url *qt6.QUrl)) {
	C.QWebEnginePage_connect_IconUrlChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebEnginePage_IconUrlChanged
func miqt_exec_callback_QWebEnginePage_IconUrlChanged(cb C.intptr_t, url *C.QUrl) {
	gofunc, ok := cgo.Handle(cb).Value().(func(url *qt6.QUrl))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQUrl(unsafe.Pointer(url))

	gofunc(slotval1)
}

func (this *QWebEnginePage) IconChanged(icon *qt6.QIcon) {
	C.QWebEnginePage_IconChanged(this.h, (*C.QIcon)(icon.UnsafePointer()))
}
func (this *QWebEnginePage) OnIconChanged(slot func(icon *qt6.QIcon)) {
	C.QWebEnginePage_connect_IconChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebEnginePage_IconChanged
func miqt_exec_callback_QWebEnginePage_IconChanged(cb C.intptr_t, icon *C.QIcon) {
	gofunc, ok := cgo.Handle(cb).Value().(func(icon *qt6.QIcon))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQIcon(unsafe.Pointer(icon))

	gofunc(slotval1)
}

func (this *QWebEnginePage) ScrollPositionChanged(position *qt6.QPointF) {
	C.QWebEnginePage_ScrollPositionChanged(this.h, (*C.QPointF)(position.UnsafePointer()))
}
func (this *QWebEnginePage) OnScrollPositionChanged(slot func(position *qt6.QPointF)) {
	C.QWebEnginePage_connect_ScrollPositionChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebEnginePage_ScrollPositionChanged
func miqt_exec_callback_QWebEnginePage_ScrollPositionChanged(cb C.intptr_t, position *C.QPointF) {
	gofunc, ok := cgo.Handle(cb).Value().(func(position *qt6.QPointF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPointF(unsafe.Pointer(position))

	gofunc(slotval1)
}

func (this *QWebEnginePage) ContentsSizeChanged(size *qt6.QSizeF) {
	C.QWebEnginePage_ContentsSizeChanged(this.h, (*C.QSizeF)(size.UnsafePointer()))
}
func (this *QWebEnginePage) OnContentsSizeChanged(slot func(size *qt6.QSizeF)) {
	C.QWebEnginePage_connect_ContentsSizeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebEnginePage_ContentsSizeChanged
func miqt_exec_callback_QWebEnginePage_ContentsSizeChanged(cb C.intptr_t, size *C.QSizeF) {
	gofunc, ok := cgo.Handle(cb).Value().(func(size *qt6.QSizeF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQSizeF(unsafe.Pointer(size))

	gofunc(slotval1)
}

func (this *QWebEnginePage) AudioMutedChanged(muted bool) {
	C.QWebEnginePage_AudioMutedChanged(this.h, (C.bool)(muted))
}
func (this *QWebEnginePage) OnAudioMutedChanged(slot func(muted bool)) {
	C.QWebEnginePage_connect_AudioMutedChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebEnginePage_AudioMutedChanged
func miqt_exec_callback_QWebEnginePage_AudioMutedChanged(cb C.intptr_t, muted C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(muted bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(muted)

	gofunc(slotval1)
}

func (this *QWebEnginePage) RecentlyAudibleChanged(recentlyAudible bool) {
	C.QWebEnginePage_RecentlyAudibleChanged(this.h, (C.bool)(recentlyAudible))
}
func (this *QWebEnginePage) OnRecentlyAudibleChanged(slot func(recentlyAudible bool)) {
	C.QWebEnginePage_connect_RecentlyAudibleChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebEnginePage_RecentlyAudibleChanged
func miqt_exec_callback_QWebEnginePage_RecentlyAudibleChanged(cb C.intptr_t, recentlyAudible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(recentlyAudible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(recentlyAudible)

	gofunc(slotval1)
}

func (this *QWebEnginePage) RenderProcessPidChanged(pid int64) {
	C.QWebEnginePage_RenderProcessPidChanged(this.h, (C.longlong)(pid))
}
func (this *QWebEnginePage) OnRenderProcessPidChanged(slot func(pid int64)) {
	C.QWebEnginePage_connect_RenderProcessPidChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebEnginePage_RenderProcessPidChanged
func miqt_exec_callback_QWebEnginePage_RenderProcessPidChanged(cb C.intptr_t, pid C.longlong) {
	gofunc, ok := cgo.Handle(cb).Value().(func(pid int64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int64)(pid)

	gofunc(slotval1)
}

func (this *QWebEnginePage) PdfPrintingFinished(filePath string, success bool) {
	filePath_ms := C.struct_miqt_string{}
	filePath_ms.data = C.CString(filePath)
	filePath_ms.len = C.size_t(len(filePath))
	defer C.free(unsafe.Pointer(filePath_ms.data))
	C.QWebEnginePage_PdfPrintingFinished(this.h, filePath_ms, (C.bool)(success))
}
func (this *QWebEnginePage) OnPdfPrintingFinished(slot func(filePath string, success bool)) {
	C.QWebEnginePage_connect_PdfPrintingFinished(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebEnginePage_PdfPrintingFinished
func miqt_exec_callback_QWebEnginePage_PdfPrintingFinished(cb C.intptr_t, filePath C.struct_miqt_string, success C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(filePath string, success bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var filePath_ms C.struct_miqt_string = filePath
	filePath_ret := C.GoStringN(filePath_ms.data, C.int(int64(filePath_ms.len)))
	C.free(unsafe.Pointer(filePath_ms.data))
	slotval1 := filePath_ret
	slotval2 := (bool)(success)

	gofunc(slotval1, slotval2)
}

func (this *QWebEnginePage) PrintRequested() {
	C.QWebEnginePage_PrintRequested(this.h)
}
func (this *QWebEnginePage) OnPrintRequested(slot func()) {
	C.QWebEnginePage_connect_PrintRequested(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebEnginePage_PrintRequested
func miqt_exec_callback_QWebEnginePage_PrintRequested(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QWebEnginePage) VisibleChanged(visible bool) {
	C.QWebEnginePage_VisibleChanged(this.h, (C.bool)(visible))
}
func (this *QWebEnginePage) OnVisibleChanged(slot func(visible bool)) {
	C.QWebEnginePage_connect_VisibleChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebEnginePage_VisibleChanged
func miqt_exec_callback_QWebEnginePage_VisibleChanged(cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc(slotval1)
}

func (this *QWebEnginePage) LifecycleStateChanged(state QWebEnginePage__LifecycleState) {
	C.QWebEnginePage_LifecycleStateChanged(this.h, (C.int)(state))
}
func (this *QWebEnginePage) OnLifecycleStateChanged(slot func(state QWebEnginePage__LifecycleState)) {
	C.QWebEnginePage_connect_LifecycleStateChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebEnginePage_LifecycleStateChanged
func miqt_exec_callback_QWebEnginePage_LifecycleStateChanged(cb C.intptr_t, state C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(state QWebEnginePage__LifecycleState))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QWebEnginePage__LifecycleState)(state)

	gofunc(slotval1)
}

func (this *QWebEnginePage) RecommendedStateChanged(state QWebEnginePage__LifecycleState) {
	C.QWebEnginePage_RecommendedStateChanged(this.h, (C.int)(state))
}
func (this *QWebEnginePage) OnRecommendedStateChanged(slot func(state QWebEnginePage__LifecycleState)) {
	C.QWebEnginePage_connect_RecommendedStateChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebEnginePage_RecommendedStateChanged
func miqt_exec_callback_QWebEnginePage_RecommendedStateChanged(cb C.intptr_t, state C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(state QWebEnginePage__LifecycleState))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QWebEnginePage__LifecycleState)(state)

	gofunc(slotval1)
}

func (this *QWebEnginePage) FindTextFinished(result *QWebEngineFindTextResult) {
	C.QWebEnginePage_FindTextFinished(this.h, result.cPointer())
}
func (this *QWebEnginePage) OnFindTextFinished(slot func(result *QWebEngineFindTextResult)) {
	C.QWebEnginePage_connect_FindTextFinished(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebEnginePage_FindTextFinished
func miqt_exec_callback_QWebEnginePage_FindTextFinished(cb C.intptr_t, result *C.QWebEngineFindTextResult) {
	gofunc, ok := cgo.Handle(cb).Value().(func(result *QWebEngineFindTextResult))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQWebEngineFindTextResult(unsafe.Pointer(result))

	gofunc(slotval1)
}

func (this *QWebEnginePage) QAboutToDelete() {
	C.QWebEnginePage_QAboutToDelete(this.h)
}
func (this *QWebEnginePage) OnQAboutToDelete(slot func()) {
	C.QWebEnginePage_connect_QAboutToDelete(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebEnginePage_QAboutToDelete
func miqt_exec_callback_QWebEnginePage_QAboutToDelete(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func QWebEnginePage_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebEnginePage_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebEnginePage_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebEnginePage_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebEnginePage) Download2(url *qt6.QUrl, filename string) {
	filename_ms := C.struct_miqt_string{}
	filename_ms.data = C.CString(filename)
	filename_ms.len = C.size_t(len(filename))
	defer C.free(unsafe.Pointer(filename_ms.data))
	C.QWebEnginePage_Download2(this.h, (*C.QUrl)(url.UnsafePointer()), filename_ms)
}

func (this *QWebEnginePage) SetHtml2(html string, baseUrl *qt6.QUrl) {
	html_ms := C.struct_miqt_string{}
	html_ms.data = C.CString(html)
	html_ms.len = C.size_t(len(html))
	defer C.free(unsafe.Pointer(html_ms.data))
	C.QWebEnginePage_SetHtml2(this.h, html_ms, (*C.QUrl)(baseUrl.UnsafePointer()))
}

func (this *QWebEnginePage) SetContent2(data []byte, mimeType string) {
	data_alias := C.struct_miqt_string{}
	data_alias.data = (*C.char)(unsafe.Pointer(&data[0]))
	data_alias.len = C.size_t(len(data))
	mimeType_ms := C.struct_miqt_string{}
	mimeType_ms.data = C.CString(mimeType)
	mimeType_ms.len = C.size_t(len(mimeType))
	defer C.free(unsafe.Pointer(mimeType_ms.data))
	C.QWebEnginePage_SetContent2(this.h, data_alias, mimeType_ms)
}

func (this *QWebEnginePage) SetContent3(data []byte, mimeType string, baseUrl *qt6.QUrl) {
	data_alias := C.struct_miqt_string{}
	data_alias.data = (*C.char)(unsafe.Pointer(&data[0]))
	data_alias.len = C.size_t(len(data))
	mimeType_ms := C.struct_miqt_string{}
	mimeType_ms.data = C.CString(mimeType)
	mimeType_ms.len = C.size_t(len(mimeType))
	defer C.free(unsafe.Pointer(mimeType_ms.data))
	C.QWebEnginePage_SetContent3(this.h, data_alias, mimeType_ms, (*C.QUrl)(baseUrl.UnsafePointer()))
}

func (this *QWebEnginePage) SetWebChannel2(param1 *webchannel.QWebChannel, worldId uint) {
	C.QWebEnginePage_SetWebChannel2(this.h, (*C.QWebChannel)(param1.UnsafePointer()), (C.uint)(worldId))
}

func (this *QWebEnginePage) Save2(filePath string, format QWebEngineDownloadRequest__SavePageFormat) {
	filePath_ms := C.struct_miqt_string{}
	filePath_ms.data = C.CString(filePath)
	filePath_ms.len = C.size_t(len(filePath))
	defer C.free(unsafe.Pointer(filePath_ms.data))
	C.QWebEnginePage_Save2(this.h, filePath_ms, (C.int)(format))
}

func (this *QWebEnginePage) PrintToPdf2(filePath string, layout *qt6.QPageLayout) {
	filePath_ms := C.struct_miqt_string{}
	filePath_ms.data = C.CString(filePath)
	filePath_ms.len = C.size_t(len(filePath))
	defer C.free(unsafe.Pointer(filePath_ms.data))
	C.QWebEnginePage_PrintToPdf2(this.h, filePath_ms, (*C.QPageLayout)(layout.UnsafePointer()))
}

func (this *QWebEnginePage) PrintToPdf3(filePath string, layout *qt6.QPageLayout, ranges *qt6.QPageRanges) {
	filePath_ms := C.struct_miqt_string{}
	filePath_ms.data = C.CString(filePath)
	filePath_ms.len = C.size_t(len(filePath))
	defer C.free(unsafe.Pointer(filePath_ms.data))
	C.QWebEnginePage_PrintToPdf3(this.h, filePath_ms, (*C.QPageLayout)(layout.UnsafePointer()), (*C.QPageRanges)(ranges.UnsafePointer()))
}

func (this *QWebEnginePage) callVirtualBase_TriggerAction(action QWebEnginePage__WebAction, checked bool) {

	C.QWebEnginePage_virtualbase_TriggerAction(unsafe.Pointer(this.h), (C.int)(action), (C.bool)(checked))

}
func (this *QWebEnginePage) OnTriggerAction(slot func(super func(action QWebEnginePage__WebAction, checked bool), action QWebEnginePage__WebAction, checked bool)) {
	C.QWebEnginePage_override_virtual_TriggerAction(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebEnginePage_TriggerAction
func miqt_exec_callback_QWebEnginePage_TriggerAction(self *C.QWebEnginePage, cb C.intptr_t, action C.int, checked C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(action QWebEnginePage__WebAction, checked bool), action QWebEnginePage__WebAction, checked bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QWebEnginePage__WebAction)(action)

	slotval2 := (bool)(checked)

	gofunc((&QWebEnginePage{h: self}).callVirtualBase_TriggerAction, slotval1, slotval2)

}

func (this *QWebEnginePage) callVirtualBase_Event(param1 *qt6.QEvent) bool {

	return (bool)(C.QWebEnginePage_virtualbase_Event(unsafe.Pointer(this.h), (*C.QEvent)(param1.UnsafePointer())))

}
func (this *QWebEnginePage) OnEvent(slot func(super func(param1 *qt6.QEvent) bool, param1 *qt6.QEvent) bool) {
	C.QWebEnginePage_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebEnginePage_Event
func miqt_exec_callback_QWebEnginePage_Event(self *C.QWebEnginePage, cb C.intptr_t, param1 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QEvent) bool, param1 *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(param1))

	virtualReturn := gofunc((&QWebEnginePage{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QWebEnginePage) callVirtualBase_CreateWindow(typeVal QWebEnginePage__WebWindowType) *QWebEnginePage {

	return UnsafeNewQWebEnginePage(unsafe.Pointer(C.QWebEnginePage_virtualbase_CreateWindow(unsafe.Pointer(this.h), (C.int)(typeVal))), nil)
}
func (this *QWebEnginePage) OnCreateWindow(slot func(super func(typeVal QWebEnginePage__WebWindowType) *QWebEnginePage, typeVal QWebEnginePage__WebWindowType) *QWebEnginePage) {
	C.QWebEnginePage_override_virtual_CreateWindow(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebEnginePage_CreateWindow
func miqt_exec_callback_QWebEnginePage_CreateWindow(self *C.QWebEnginePage, cb C.intptr_t, typeVal C.int) *C.QWebEnginePage {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(typeVal QWebEnginePage__WebWindowType) *QWebEnginePage, typeVal QWebEnginePage__WebWindowType) *QWebEnginePage)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QWebEnginePage__WebWindowType)(typeVal)

	virtualReturn := gofunc((&QWebEnginePage{h: self}).callVirtualBase_CreateWindow, slotval1)

	return virtualReturn.cPointer()

}

func (this *QWebEnginePage) callVirtualBase_ChooseFiles(mode QWebEnginePage__FileSelectionMode, oldFiles []string, acceptedMimeTypes []string) []string {
	oldFiles_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(oldFiles))))
	defer C.free(unsafe.Pointer(oldFiles_CArray))
	for i := range oldFiles {
		oldFiles_i_ms := C.struct_miqt_string{}
		oldFiles_i_ms.data = C.CString(oldFiles[i])
		oldFiles_i_ms.len = C.size_t(len(oldFiles[i]))
		defer C.free(unsafe.Pointer(oldFiles_i_ms.data))
		oldFiles_CArray[i] = oldFiles_i_ms
	}
	oldFiles_ma := C.struct_miqt_array{len: C.size_t(len(oldFiles)), data: unsafe.Pointer(oldFiles_CArray)}
	acceptedMimeTypes_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(acceptedMimeTypes))))
	defer C.free(unsafe.Pointer(acceptedMimeTypes_CArray))
	for i := range acceptedMimeTypes {
		acceptedMimeTypes_i_ms := C.struct_miqt_string{}
		acceptedMimeTypes_i_ms.data = C.CString(acceptedMimeTypes[i])
		acceptedMimeTypes_i_ms.len = C.size_t(len(acceptedMimeTypes[i]))
		defer C.free(unsafe.Pointer(acceptedMimeTypes_i_ms.data))
		acceptedMimeTypes_CArray[i] = acceptedMimeTypes_i_ms
	}
	acceptedMimeTypes_ma := C.struct_miqt_array{len: C.size_t(len(acceptedMimeTypes)), data: unsafe.Pointer(acceptedMimeTypes_CArray)}

	var _ma C.struct_miqt_array = C.QWebEnginePage_virtualbase_ChooseFiles(unsafe.Pointer(this.h), (C.int)(mode), oldFiles_ma, acceptedMimeTypes_ma)
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
func (this *QWebEnginePage) OnChooseFiles(slot func(super func(mode QWebEnginePage__FileSelectionMode, oldFiles []string, acceptedMimeTypes []string) []string, mode QWebEnginePage__FileSelectionMode, oldFiles []string, acceptedMimeTypes []string) []string) {
	C.QWebEnginePage_override_virtual_ChooseFiles(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebEnginePage_ChooseFiles
func miqt_exec_callback_QWebEnginePage_ChooseFiles(self *C.QWebEnginePage, cb C.intptr_t, mode C.int, oldFiles C.struct_miqt_array, acceptedMimeTypes C.struct_miqt_array) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(mode QWebEnginePage__FileSelectionMode, oldFiles []string, acceptedMimeTypes []string) []string, mode QWebEnginePage__FileSelectionMode, oldFiles []string, acceptedMimeTypes []string) []string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QWebEnginePage__FileSelectionMode)(mode)

	var oldFiles_ma C.struct_miqt_array = oldFiles
	oldFiles_ret := make([]string, int(oldFiles_ma.len))
	oldFiles_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(oldFiles_ma.data)) // hey ya
	for i := 0; i < int(oldFiles_ma.len); i++ {
		var oldFiles_lv_ms C.struct_miqt_string = oldFiles_outCast[i]
		oldFiles_lv_ret := C.GoStringN(oldFiles_lv_ms.data, C.int(int64(oldFiles_lv_ms.len)))
		C.free(unsafe.Pointer(oldFiles_lv_ms.data))
		oldFiles_ret[i] = oldFiles_lv_ret
	}
	slotval2 := oldFiles_ret

	var acceptedMimeTypes_ma C.struct_miqt_array = acceptedMimeTypes
	acceptedMimeTypes_ret := make([]string, int(acceptedMimeTypes_ma.len))
	acceptedMimeTypes_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(acceptedMimeTypes_ma.data)) // hey ya
	for i := 0; i < int(acceptedMimeTypes_ma.len); i++ {
		var acceptedMimeTypes_lv_ms C.struct_miqt_string = acceptedMimeTypes_outCast[i]
		acceptedMimeTypes_lv_ret := C.GoStringN(acceptedMimeTypes_lv_ms.data, C.int(int64(acceptedMimeTypes_lv_ms.len)))
		C.free(unsafe.Pointer(acceptedMimeTypes_lv_ms.data))
		acceptedMimeTypes_ret[i] = acceptedMimeTypes_lv_ret
	}
	slotval3 := acceptedMimeTypes_ret

	virtualReturn := gofunc((&QWebEnginePage{h: self}).callVirtualBase_ChooseFiles, slotval1, slotval2, slotval3)
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

func (this *QWebEnginePage) callVirtualBase_JavaScriptAlert(securityOrigin *qt6.QUrl, msg string) {
	msg_ms := C.struct_miqt_string{}
	msg_ms.data = C.CString(msg)
	msg_ms.len = C.size_t(len(msg))
	defer C.free(unsafe.Pointer(msg_ms.data))

	C.QWebEnginePage_virtualbase_JavaScriptAlert(unsafe.Pointer(this.h), (*C.QUrl)(securityOrigin.UnsafePointer()), msg_ms)

}
func (this *QWebEnginePage) OnJavaScriptAlert(slot func(super func(securityOrigin *qt6.QUrl, msg string), securityOrigin *qt6.QUrl, msg string)) {
	C.QWebEnginePage_override_virtual_JavaScriptAlert(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebEnginePage_JavaScriptAlert
func miqt_exec_callback_QWebEnginePage_JavaScriptAlert(self *C.QWebEnginePage, cb C.intptr_t, securityOrigin *C.QUrl, msg C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(securityOrigin *qt6.QUrl, msg string), securityOrigin *qt6.QUrl, msg string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQUrl(unsafe.Pointer(securityOrigin))
	var msg_ms C.struct_miqt_string = msg
	msg_ret := C.GoStringN(msg_ms.data, C.int(int64(msg_ms.len)))
	C.free(unsafe.Pointer(msg_ms.data))
	slotval2 := msg_ret

	gofunc((&QWebEnginePage{h: self}).callVirtualBase_JavaScriptAlert, slotval1, slotval2)

}

func (this *QWebEnginePage) callVirtualBase_JavaScriptConfirm(securityOrigin *qt6.QUrl, msg string) bool {
	msg_ms := C.struct_miqt_string{}
	msg_ms.data = C.CString(msg)
	msg_ms.len = C.size_t(len(msg))
	defer C.free(unsafe.Pointer(msg_ms.data))

	return (bool)(C.QWebEnginePage_virtualbase_JavaScriptConfirm(unsafe.Pointer(this.h), (*C.QUrl)(securityOrigin.UnsafePointer()), msg_ms))

}
func (this *QWebEnginePage) OnJavaScriptConfirm(slot func(super func(securityOrigin *qt6.QUrl, msg string) bool, securityOrigin *qt6.QUrl, msg string) bool) {
	C.QWebEnginePage_override_virtual_JavaScriptConfirm(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebEnginePage_JavaScriptConfirm
func miqt_exec_callback_QWebEnginePage_JavaScriptConfirm(self *C.QWebEnginePage, cb C.intptr_t, securityOrigin *C.QUrl, msg C.struct_miqt_string) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(securityOrigin *qt6.QUrl, msg string) bool, securityOrigin *qt6.QUrl, msg string) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQUrl(unsafe.Pointer(securityOrigin))
	var msg_ms C.struct_miqt_string = msg
	msg_ret := C.GoStringN(msg_ms.data, C.int(int64(msg_ms.len)))
	C.free(unsafe.Pointer(msg_ms.data))
	slotval2 := msg_ret

	virtualReturn := gofunc((&QWebEnginePage{h: self}).callVirtualBase_JavaScriptConfirm, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QWebEnginePage) callVirtualBase_JavaScriptConsoleMessage(level QWebEnginePage__JavaScriptConsoleMessageLevel, message string, lineNumber int, sourceID string) {
	message_ms := C.struct_miqt_string{}
	message_ms.data = C.CString(message)
	message_ms.len = C.size_t(len(message))
	defer C.free(unsafe.Pointer(message_ms.data))
	sourceID_ms := C.struct_miqt_string{}
	sourceID_ms.data = C.CString(sourceID)
	sourceID_ms.len = C.size_t(len(sourceID))
	defer C.free(unsafe.Pointer(sourceID_ms.data))

	C.QWebEnginePage_virtualbase_JavaScriptConsoleMessage(unsafe.Pointer(this.h), (C.int)(level), message_ms, (C.int)(lineNumber), sourceID_ms)

}
func (this *QWebEnginePage) OnJavaScriptConsoleMessage(slot func(super func(level QWebEnginePage__JavaScriptConsoleMessageLevel, message string, lineNumber int, sourceID string), level QWebEnginePage__JavaScriptConsoleMessageLevel, message string, lineNumber int, sourceID string)) {
	C.QWebEnginePage_override_virtual_JavaScriptConsoleMessage(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebEnginePage_JavaScriptConsoleMessage
func miqt_exec_callback_QWebEnginePage_JavaScriptConsoleMessage(self *C.QWebEnginePage, cb C.intptr_t, level C.int, message C.struct_miqt_string, lineNumber C.int, sourceID C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(level QWebEnginePage__JavaScriptConsoleMessageLevel, message string, lineNumber int, sourceID string), level QWebEnginePage__JavaScriptConsoleMessageLevel, message string, lineNumber int, sourceID string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QWebEnginePage__JavaScriptConsoleMessageLevel)(level)

	var message_ms C.struct_miqt_string = message
	message_ret := C.GoStringN(message_ms.data, C.int(int64(message_ms.len)))
	C.free(unsafe.Pointer(message_ms.data))
	slotval2 := message_ret
	slotval3 := (int)(lineNumber)

	var sourceID_ms C.struct_miqt_string = sourceID
	sourceID_ret := C.GoStringN(sourceID_ms.data, C.int(int64(sourceID_ms.len)))
	C.free(unsafe.Pointer(sourceID_ms.data))
	slotval4 := sourceID_ret

	gofunc((&QWebEnginePage{h: self}).callVirtualBase_JavaScriptConsoleMessage, slotval1, slotval2, slotval3, slotval4)

}

func (this *QWebEnginePage) callVirtualBase_AcceptNavigationRequest(url *qt6.QUrl, typeVal QWebEnginePage__NavigationType, isMainFrame bool) bool {

	return (bool)(C.QWebEnginePage_virtualbase_AcceptNavigationRequest(unsafe.Pointer(this.h), (*C.QUrl)(url.UnsafePointer()), (C.int)(typeVal), (C.bool)(isMainFrame)))

}
func (this *QWebEnginePage) OnAcceptNavigationRequest(slot func(super func(url *qt6.QUrl, typeVal QWebEnginePage__NavigationType, isMainFrame bool) bool, url *qt6.QUrl, typeVal QWebEnginePage__NavigationType, isMainFrame bool) bool) {
	C.QWebEnginePage_override_virtual_AcceptNavigationRequest(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebEnginePage_AcceptNavigationRequest
func miqt_exec_callback_QWebEnginePage_AcceptNavigationRequest(self *C.QWebEnginePage, cb C.intptr_t, url *C.QUrl, typeVal C.int, isMainFrame C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(url *qt6.QUrl, typeVal QWebEnginePage__NavigationType, isMainFrame bool) bool, url *qt6.QUrl, typeVal QWebEnginePage__NavigationType, isMainFrame bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQUrl(unsafe.Pointer(url))
	slotval2 := (QWebEnginePage__NavigationType)(typeVal)

	slotval3 := (bool)(isMainFrame)

	virtualReturn := gofunc((&QWebEnginePage{h: self}).callVirtualBase_AcceptNavigationRequest, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QWebEnginePage) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QWebEnginePage_virtualbase_EventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QWebEnginePage) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	C.QWebEnginePage_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebEnginePage_EventFilter
func miqt_exec_callback_QWebEnginePage_EventFilter(self *C.QWebEnginePage, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))
	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QWebEnginePage{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QWebEnginePage) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QWebEnginePage_virtualbase_TimerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QWebEnginePage) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	C.QWebEnginePage_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebEnginePage_TimerEvent
func miqt_exec_callback_QWebEnginePage_TimerEvent(self *C.QWebEnginePage, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event), nil)

	gofunc((&QWebEnginePage{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QWebEnginePage) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QWebEnginePage_virtualbase_ChildEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QWebEnginePage) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	C.QWebEnginePage_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebEnginePage_ChildEvent
func miqt_exec_callback_QWebEnginePage_ChildEvent(self *C.QWebEnginePage, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event), nil)

	gofunc((&QWebEnginePage{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QWebEnginePage) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QWebEnginePage_virtualbase_CustomEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QWebEnginePage) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	C.QWebEnginePage_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebEnginePage_CustomEvent
func miqt_exec_callback_QWebEnginePage_CustomEvent(self *C.QWebEnginePage, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QWebEnginePage{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QWebEnginePage) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QWebEnginePage_virtualbase_ConnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QWebEnginePage) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	C.QWebEnginePage_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebEnginePage_ConnectNotify
func miqt_exec_callback_QWebEnginePage_ConnectNotify(self *C.QWebEnginePage, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QWebEnginePage{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QWebEnginePage) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QWebEnginePage_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QWebEnginePage) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	C.QWebEnginePage_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebEnginePage_DisconnectNotify
func miqt_exec_callback_QWebEnginePage_DisconnectNotify(self *C.QWebEnginePage, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QWebEnginePage{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QWebEnginePage) Delete() {
	C.QWebEnginePage_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWebEnginePage) GoGC() {
	runtime.SetFinalizer(this, func(this *QWebEnginePage) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
