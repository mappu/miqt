package webkit

/*

#include "gen_qwebpage.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"github.com/mappu/miqt/qt/network"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QWebPage__NavigationType int

const (
	QWebPage__NavigationTypeLinkClicked     QWebPage__NavigationType = 0
	QWebPage__NavigationTypeFormSubmitted   QWebPage__NavigationType = 1
	QWebPage__NavigationTypeBackOrForward   QWebPage__NavigationType = 2
	QWebPage__NavigationTypeReload          QWebPage__NavigationType = 3
	QWebPage__NavigationTypeFormResubmitted QWebPage__NavigationType = 4
	QWebPage__NavigationTypeOther           QWebPage__NavigationType = 5
)

type QWebPage__WebAction int

const (
	QWebPage__NoWebAction                 QWebPage__WebAction = -1
	QWebPage__OpenLink                    QWebPage__WebAction = 0
	QWebPage__OpenLinkInNewWindow         QWebPage__WebAction = 1
	QWebPage__OpenFrameInNewWindow        QWebPage__WebAction = 2
	QWebPage__DownloadLinkToDisk          QWebPage__WebAction = 3
	QWebPage__CopyLinkToClipboard         QWebPage__WebAction = 4
	QWebPage__OpenImageInNewWindow        QWebPage__WebAction = 5
	QWebPage__DownloadImageToDisk         QWebPage__WebAction = 6
	QWebPage__CopyImageToClipboard        QWebPage__WebAction = 7
	QWebPage__Back                        QWebPage__WebAction = 8
	QWebPage__Forward                     QWebPage__WebAction = 9
	QWebPage__Stop                        QWebPage__WebAction = 10
	QWebPage__Reload                      QWebPage__WebAction = 11
	QWebPage__Cut                         QWebPage__WebAction = 12
	QWebPage__Copy                        QWebPage__WebAction = 13
	QWebPage__Paste                       QWebPage__WebAction = 14
	QWebPage__Undo                        QWebPage__WebAction = 15
	QWebPage__Redo                        QWebPage__WebAction = 16
	QWebPage__MoveToNextChar              QWebPage__WebAction = 17
	QWebPage__MoveToPreviousChar          QWebPage__WebAction = 18
	QWebPage__MoveToNextWord              QWebPage__WebAction = 19
	QWebPage__MoveToPreviousWord          QWebPage__WebAction = 20
	QWebPage__MoveToNextLine              QWebPage__WebAction = 21
	QWebPage__MoveToPreviousLine          QWebPage__WebAction = 22
	QWebPage__MoveToStartOfLine           QWebPage__WebAction = 23
	QWebPage__MoveToEndOfLine             QWebPage__WebAction = 24
	QWebPage__MoveToStartOfBlock          QWebPage__WebAction = 25
	QWebPage__MoveToEndOfBlock            QWebPage__WebAction = 26
	QWebPage__MoveToStartOfDocument       QWebPage__WebAction = 27
	QWebPage__MoveToEndOfDocument         QWebPage__WebAction = 28
	QWebPage__SelectNextChar              QWebPage__WebAction = 29
	QWebPage__SelectPreviousChar          QWebPage__WebAction = 30
	QWebPage__SelectNextWord              QWebPage__WebAction = 31
	QWebPage__SelectPreviousWord          QWebPage__WebAction = 32
	QWebPage__SelectNextLine              QWebPage__WebAction = 33
	QWebPage__SelectPreviousLine          QWebPage__WebAction = 34
	QWebPage__SelectStartOfLine           QWebPage__WebAction = 35
	QWebPage__SelectEndOfLine             QWebPage__WebAction = 36
	QWebPage__SelectStartOfBlock          QWebPage__WebAction = 37
	QWebPage__SelectEndOfBlock            QWebPage__WebAction = 38
	QWebPage__SelectStartOfDocument       QWebPage__WebAction = 39
	QWebPage__SelectEndOfDocument         QWebPage__WebAction = 40
	QWebPage__DeleteStartOfWord           QWebPage__WebAction = 41
	QWebPage__DeleteEndOfWord             QWebPage__WebAction = 42
	QWebPage__SetTextDirectionDefault     QWebPage__WebAction = 43
	QWebPage__SetTextDirectionLeftToRight QWebPage__WebAction = 44
	QWebPage__SetTextDirectionRightToLeft QWebPage__WebAction = 45
	QWebPage__ToggleBold                  QWebPage__WebAction = 46
	QWebPage__ToggleItalic                QWebPage__WebAction = 47
	QWebPage__ToggleUnderline             QWebPage__WebAction = 48
	QWebPage__InspectElement              QWebPage__WebAction = 49
	QWebPage__InsertParagraphSeparator    QWebPage__WebAction = 50
	QWebPage__InsertLineSeparator         QWebPage__WebAction = 51
	QWebPage__SelectAll                   QWebPage__WebAction = 52
	QWebPage__ReloadAndBypassCache        QWebPage__WebAction = 53
	QWebPage__PasteAndMatchStyle          QWebPage__WebAction = 54
	QWebPage__RemoveFormat                QWebPage__WebAction = 55
	QWebPage__ToggleStrikethrough         QWebPage__WebAction = 56
	QWebPage__ToggleSubscript             QWebPage__WebAction = 57
	QWebPage__ToggleSuperscript           QWebPage__WebAction = 58
	QWebPage__InsertUnorderedList         QWebPage__WebAction = 59
	QWebPage__InsertOrderedList           QWebPage__WebAction = 60
	QWebPage__Indent                      QWebPage__WebAction = 61
	QWebPage__Outdent                     QWebPage__WebAction = 62
	QWebPage__AlignCenter                 QWebPage__WebAction = 63
	QWebPage__AlignJustified              QWebPage__WebAction = 64
	QWebPage__AlignLeft                   QWebPage__WebAction = 65
	QWebPage__AlignRight                  QWebPage__WebAction = 66
	QWebPage__StopScheduledPageRefresh    QWebPage__WebAction = 67
	QWebPage__CopyImageUrlToClipboard     QWebPage__WebAction = 68
	QWebPage__OpenLinkInThisWindow        QWebPage__WebAction = 69
	QWebPage__DownloadMediaToDisk         QWebPage__WebAction = 70
	QWebPage__CopyMediaUrlToClipboard     QWebPage__WebAction = 71
	QWebPage__ToggleMediaControls         QWebPage__WebAction = 72
	QWebPage__ToggleMediaLoop             QWebPage__WebAction = 73
	QWebPage__ToggleMediaPlayPause        QWebPage__WebAction = 74
	QWebPage__ToggleMediaMute             QWebPage__WebAction = 75
	QWebPage__ToggleVideoFullscreen       QWebPage__WebAction = 76
	QWebPage__RequestClose                QWebPage__WebAction = 77
	QWebPage__Unselect                    QWebPage__WebAction = 78
	QWebPage__WebActionCount              QWebPage__WebAction = 79
)

type QWebPage__FindFlag int

const (
	QWebPage__FindBackward                      QWebPage__FindFlag = 1
	QWebPage__FindCaseSensitively               QWebPage__FindFlag = 2
	QWebPage__FindWrapsAroundDocument           QWebPage__FindFlag = 4
	QWebPage__HighlightAllOccurrences           QWebPage__FindFlag = 8
	QWebPage__FindAtWordBeginningsOnly          QWebPage__FindFlag = 16
	QWebPage__TreatMedialCapitalAsWordBeginning QWebPage__FindFlag = 32
	QWebPage__FindBeginsInSelection             QWebPage__FindFlag = 64
	QWebPage__FindAtWordEndingsOnly             QWebPage__FindFlag = 128
	QWebPage__FindExactMatchOnly                QWebPage__FindFlag = 144
)

type QWebPage__LinkDelegationPolicy int

const (
	QWebPage__DontDelegateLinks     QWebPage__LinkDelegationPolicy = 0
	QWebPage__DelegateExternalLinks QWebPage__LinkDelegationPolicy = 1
	QWebPage__DelegateAllLinks      QWebPage__LinkDelegationPolicy = 2
)

type QWebPage__WebWindowType int

const (
	QWebPage__WebBrowserWindow QWebPage__WebWindowType = 0
	QWebPage__WebModalDialog   QWebPage__WebWindowType = 1
)

type QWebPage__PermissionPolicy int

const (
	QWebPage__PermissionUnknown       QWebPage__PermissionPolicy = 0
	QWebPage__PermissionGrantedByUser QWebPage__PermissionPolicy = 1
	QWebPage__PermissionDeniedByUser  QWebPage__PermissionPolicy = 2
)

type QWebPage__Feature int

const (
	QWebPage__Notifications QWebPage__Feature = 0
	QWebPage__Geolocation   QWebPage__Feature = 1
)

type QWebPage__VisibilityState int

const (
	QWebPage__VisibilityStateVisible   QWebPage__VisibilityState = 0
	QWebPage__VisibilityStateHidden    QWebPage__VisibilityState = 1
	QWebPage__VisibilityStatePrerender QWebPage__VisibilityState = 2
	QWebPage__VisibilityStateUnloaded  QWebPage__VisibilityState = 3
)

type QWebPage__MessageSource int

const (
	QWebPage__XmlMessageSource            QWebPage__MessageSource = 0
	QWebPage__JSMessageSource             QWebPage__MessageSource = 1
	QWebPage__NetworkMessageSource        QWebPage__MessageSource = 2
	QWebPage__ConsoleAPIMessageSource     QWebPage__MessageSource = 3
	QWebPage__StorageMessageSource        QWebPage__MessageSource = 4
	QWebPage__AppCacheMessageSource       QWebPage__MessageSource = 5
	QWebPage__RenderingMessageSource      QWebPage__MessageSource = 6
	QWebPage__CSSMessageSource            QWebPage__MessageSource = 7
	QWebPage__SecurityMessageSource       QWebPage__MessageSource = 8
	QWebPage__ContentBlockerMessageSource QWebPage__MessageSource = 9
	QWebPage__OtherMessageSource          QWebPage__MessageSource = 10
)

type QWebPage__MessageLevel int

const (
	QWebPage__LogMessageLevel     QWebPage__MessageLevel = 1
	QWebPage__WarningMessageLevel QWebPage__MessageLevel = 2
	QWebPage__ErrorMessageLevel   QWebPage__MessageLevel = 3
	QWebPage__DebugMessageLevel   QWebPage__MessageLevel = 4
	QWebPage__InfoMessageLevel    QWebPage__MessageLevel = 5
)

type QWebPage__Extension int

const (
	QWebPage__ChooseMultipleFilesExtension QWebPage__Extension = 0
	QWebPage__ErrorPageExtension           QWebPage__Extension = 1
)

type QWebPage__ErrorDomain int

const (
	QWebPage__QtNetwork QWebPage__ErrorDomain = 0
	QWebPage__Http      QWebPage__ErrorDomain = 1
	QWebPage__WebKit    QWebPage__ErrorDomain = 2
)

type QWebPage struct {
	h          *C.QWebPage
	isSubclass bool
	*qt.QObject
}

func (this *QWebPage) cPointer() *C.QWebPage {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWebPage) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWebPage constructs the type using only CGO pointers.
func newQWebPage(h *C.QWebPage) *QWebPage {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QWebPage_virtbase(h, &outptr_QObject)

	return &QWebPage{h: h,
		QObject: qt.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQWebPage constructs the type using only unsafe pointers.
func UnsafeNewQWebPage(h unsafe.Pointer) *QWebPage {
	return newQWebPage((*C.QWebPage)(h))
}

// NewQWebPage constructs a new QWebPage object.
func NewQWebPage() *QWebPage {

	ret := newQWebPage(C.QWebPage_new())
	ret.isSubclass = true
	return ret
}

// NewQWebPage2 constructs a new QWebPage object.
func NewQWebPage2(parent *qt.QObject) *QWebPage {

	ret := newQWebPage(C.QWebPage_new2((*C.QObject)(parent.UnsafePointer())))
	ret.isSubclass = true
	return ret
}

func (this *QWebPage) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QWebPage_MetaObject(this.h)))
}

func (this *QWebPage) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QWebPage_Metacast(this.h, param1_Cstring))
}

func QWebPage_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QWebPage_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebPage_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QWebPage_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebPage) MainFrame() *QWebFrame {
	return newQWebFrame(C.QWebPage_MainFrame(this.h))
}

func (this *QWebPage) CurrentFrame() *QWebFrame {
	return newQWebFrame(C.QWebPage_CurrentFrame(this.h))
}

func (this *QWebPage) FrameAt(pos *qt.QPoint) *QWebFrame {
	return newQWebFrame(C.QWebPage_FrameAt(this.h, (*C.QPoint)(pos.UnsafePointer())))
}

func (this *QWebPage) History() *QWebHistory {
	return newQWebHistory(C.QWebPage_History(this.h))
}

func (this *QWebPage) Settings() *QWebSettings {
	return newQWebSettings(C.QWebPage_Settings(this.h))
}

func (this *QWebPage) SetView(view *qt.QWidget) {
	C.QWebPage_SetView(this.h, (*C.QWidget)(view.UnsafePointer()))
}

func (this *QWebPage) View() *qt.QWidget {
	return qt.UnsafeNewQWidget(unsafe.Pointer(C.QWebPage_View(this.h)))
}

func (this *QWebPage) IsModified() bool {
	return (bool)(C.QWebPage_IsModified(this.h))
}

func (this *QWebPage) UndoStack() *qt.QUndoStack {
	return qt.UnsafeNewQUndoStack(unsafe.Pointer(C.QWebPage_UndoStack(this.h)))
}

func (this *QWebPage) SetNetworkAccessManager(manager *network.QNetworkAccessManager) {
	C.QWebPage_SetNetworkAccessManager(this.h, (*C.QNetworkAccessManager)(manager.UnsafePointer()))
}

func (this *QWebPage) NetworkAccessManager() *network.QNetworkAccessManager {
	return network.UnsafeNewQNetworkAccessManager(unsafe.Pointer(C.QWebPage_NetworkAccessManager(this.h)))
}

func (this *QWebPage) SetPluginFactory(factory *QWebPluginFactory) {
	C.QWebPage_SetPluginFactory(this.h, factory.cPointer())
}

func (this *QWebPage) PluginFactory() *QWebPluginFactory {
	return newQWebPluginFactory(C.QWebPage_PluginFactory(this.h))
}

func (this *QWebPage) TotalBytes() uint64 {
	return (uint64)(C.QWebPage_TotalBytes(this.h))
}

func (this *QWebPage) BytesReceived() uint64 {
	return (uint64)(C.QWebPage_BytesReceived(this.h))
}

func (this *QWebPage) VisibilityState() QWebPage__VisibilityState {
	return (QWebPage__VisibilityState)(C.QWebPage_VisibilityState(this.h))
}

func (this *QWebPage) SetVisibilityState(visibilityState QWebPage__VisibilityState) {
	C.QWebPage_SetVisibilityState(this.h, (C.int)(visibilityState))
}

func (this *QWebPage) RecentlyAudible() bool {
	return (bool)(C.QWebPage_RecentlyAudible(this.h))
}

func (this *QWebPage) HasSelection() bool {
	return (bool)(C.QWebPage_HasSelection(this.h))
}

func (this *QWebPage) SelectedText() string {
	var _ms C.struct_miqt_string = C.QWebPage_SelectedText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebPage) SelectedHtml() string {
	var _ms C.struct_miqt_string = C.QWebPage_SelectedHtml(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebPage) Action(action QWebPage__WebAction) *qt.QAction {
	return qt.UnsafeNewQAction(unsafe.Pointer(C.QWebPage_Action(this.h, (C.int)(action))))
}

func (this *QWebPage) CustomAction(action int) *qt.QAction {
	return qt.UnsafeNewQAction(unsafe.Pointer(C.QWebPage_CustomAction(this.h, (C.int)(action))))
}

func (this *QWebPage) TriggerAction(action QWebPage__WebAction, checked bool) {
	C.QWebPage_TriggerAction(this.h, (C.int)(action), (C.bool)(checked))
}

func (this *QWebPage) SetDevicePixelRatio(ratio float64) {
	C.QWebPage_SetDevicePixelRatio(this.h, (C.double)(ratio))
}

func (this *QWebPage) DevicePixelRatio() float64 {
	return (float64)(C.QWebPage_DevicePixelRatio(this.h))
}

func (this *QWebPage) ResetDevicePixelRatio() {
	C.QWebPage_ResetDevicePixelRatio(this.h)
}

func (this *QWebPage) ViewportSize() *qt.QSize {
	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QWebPage_ViewportSize(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebPage) SetViewportSize(size *qt.QSize) {
	C.QWebPage_SetViewportSize(this.h, (*C.QSize)(size.UnsafePointer()))
}

func (this *QWebPage) ViewportAttributesForSize(availableSize *qt.QSize) *QWebPage__ViewportAttributes {
	_goptr := newQWebPage__ViewportAttributes(C.QWebPage_ViewportAttributesForSize(this.h, (*C.QSize)(availableSize.UnsafePointer())))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebPage) PreferredContentsSize() *qt.QSize {
	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QWebPage_PreferredContentsSize(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebPage) SetPreferredContentsSize(size *qt.QSize) {
	C.QWebPage_SetPreferredContentsSize(this.h, (*C.QSize)(size.UnsafePointer()))
}

func (this *QWebPage) SetActualVisibleContentRect(rect *qt.QRect) {
	C.QWebPage_SetActualVisibleContentRect(this.h, (*C.QRect)(rect.UnsafePointer()))
}

func (this *QWebPage) Event(param1 *qt.QEvent) bool {
	return (bool)(C.QWebPage_Event(this.h, (*C.QEvent)(param1.UnsafePointer())))
}

func (this *QWebPage) FocusNextPrevChild(next bool) bool {
	return (bool)(C.QWebPage_FocusNextPrevChild(this.h, (C.bool)(next)))
}

func (this *QWebPage) InputMethodQuery(property qt.InputMethodQuery) *qt.QVariant {
	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QWebPage_InputMethodQuery(this.h, (C.int)(property))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebPage) FindText(subString string) bool {
	subString_ms := C.struct_miqt_string{}
	subString_ms.data = C.CString(subString)
	subString_ms.len = C.size_t(len(subString))
	defer C.free(unsafe.Pointer(subString_ms.data))
	return (bool)(C.QWebPage_FindText(this.h, subString_ms))
}

func (this *QWebPage) SetForwardUnsupportedContent(forward bool) {
	C.QWebPage_SetForwardUnsupportedContent(this.h, (C.bool)(forward))
}

func (this *QWebPage) ForwardUnsupportedContent() bool {
	return (bool)(C.QWebPage_ForwardUnsupportedContent(this.h))
}

func (this *QWebPage) SetLinkDelegationPolicy(policy QWebPage__LinkDelegationPolicy) {
	C.QWebPage_SetLinkDelegationPolicy(this.h, (C.int)(policy))
}

func (this *QWebPage) LinkDelegationPolicy() QWebPage__LinkDelegationPolicy {
	return (QWebPage__LinkDelegationPolicy)(C.QWebPage_LinkDelegationPolicy(this.h))
}

func (this *QWebPage) SetPalette(palette *qt.QPalette) {
	C.QWebPage_SetPalette(this.h, (*C.QPalette)(palette.UnsafePointer()))
}

func (this *QWebPage) Palette() *qt.QPalette {
	_goptr := qt.UnsafeNewQPalette(unsafe.Pointer(C.QWebPage_Palette(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebPage) SetContentEditable(editable bool) {
	C.QWebPage_SetContentEditable(this.h, (C.bool)(editable))
}

func (this *QWebPage) IsContentEditable() bool {
	return (bool)(C.QWebPage_IsContentEditable(this.h))
}

func (this *QWebPage) SwallowContextMenuEvent(event *qt.QContextMenuEvent) bool {
	return (bool)(C.QWebPage_SwallowContextMenuEvent(this.h, (*C.QContextMenuEvent)(event.UnsafePointer())))
}

func (this *QWebPage) UpdatePositionDependentActions(pos *qt.QPoint) {
	C.QWebPage_UpdatePositionDependentActions(this.h, (*C.QPoint)(pos.UnsafePointer()))
}

func (this *QWebPage) CreateStandardContextMenu() *qt.QMenu {
	return qt.UnsafeNewQMenu(unsafe.Pointer(C.QWebPage_CreateStandardContextMenu(this.h)))
}

func (this *QWebPage) SetFeaturePermission(frame *QWebFrame, feature QWebPage__Feature, policy QWebPage__PermissionPolicy) {
	C.QWebPage_SetFeaturePermission(this.h, frame.cPointer(), (C.int)(feature), (C.int)(policy))
}

func (this *QWebPage) SupportedContentTypes() []string {
	var _ma C.struct_miqt_array = C.QWebPage_SupportedContentTypes(this.h)
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

func (this *QWebPage) SupportsContentType(mimeType string) bool {
	mimeType_ms := C.struct_miqt_string{}
	mimeType_ms.data = C.CString(mimeType)
	mimeType_ms.len = C.size_t(len(mimeType))
	defer C.free(unsafe.Pointer(mimeType_ms.data))
	return (bool)(C.QWebPage_SupportsContentType(this.h, mimeType_ms))
}

func (this *QWebPage) Extension(extension QWebPage__Extension, option *QWebPage__ExtensionOption, output *QWebPage__ExtensionReturn) bool {
	return (bool)(C.QWebPage_Extension(this.h, (C.int)(extension), option.cPointer(), output.cPointer()))
}

func (this *QWebPage) SupportsExtension(extension QWebPage__Extension) bool {
	return (bool)(C.QWebPage_SupportsExtension(this.h, (C.int)(extension)))
}

func (this *QWebPage) ShouldInterruptJavaScript() bool {
	return (bool)(C.QWebPage_ShouldInterruptJavaScript(this.h))
}

func (this *QWebPage) LoadStarted() {
	C.QWebPage_LoadStarted(this.h)
}
func (this *QWebPage) OnLoadStarted(slot func()) {
	C.QWebPage_connect_LoadStarted(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebPage_LoadStarted
func miqt_exec_callback_QWebPage_LoadStarted(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QWebPage) LoadProgress(progress int) {
	C.QWebPage_LoadProgress(this.h, (C.int)(progress))
}
func (this *QWebPage) OnLoadProgress(slot func(progress int)) {
	C.QWebPage_connect_LoadProgress(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebPage_LoadProgress
func miqt_exec_callback_QWebPage_LoadProgress(cb C.intptr_t, progress C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(progress int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(progress)

	gofunc(slotval1)
}

func (this *QWebPage) LoadFinished(ok bool) {
	C.QWebPage_LoadFinished(this.h, (C.bool)(ok))
}
func (this *QWebPage) OnLoadFinished(slot func(ok bool)) {
	C.QWebPage_connect_LoadFinished(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebPage_LoadFinished
func miqt_exec_callback_QWebPage_LoadFinished(cb C.intptr_t, ok C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(ok bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(ok)

	gofunc(slotval1)
}

func (this *QWebPage) LinkHovered(link string, title string, textContent string) {
	link_ms := C.struct_miqt_string{}
	link_ms.data = C.CString(link)
	link_ms.len = C.size_t(len(link))
	defer C.free(unsafe.Pointer(link_ms.data))
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	textContent_ms := C.struct_miqt_string{}
	textContent_ms.data = C.CString(textContent)
	textContent_ms.len = C.size_t(len(textContent))
	defer C.free(unsafe.Pointer(textContent_ms.data))
	C.QWebPage_LinkHovered(this.h, link_ms, title_ms, textContent_ms)
}
func (this *QWebPage) OnLinkHovered(slot func(link string, title string, textContent string)) {
	C.QWebPage_connect_LinkHovered(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebPage_LinkHovered
func miqt_exec_callback_QWebPage_LinkHovered(cb C.intptr_t, link C.struct_miqt_string, title C.struct_miqt_string, textContent C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(link string, title string, textContent string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var link_ms C.struct_miqt_string = link
	link_ret := C.GoStringN(link_ms.data, C.int(int64(link_ms.len)))
	C.free(unsafe.Pointer(link_ms.data))
	slotval1 := link_ret
	var title_ms C.struct_miqt_string = title
	title_ret := C.GoStringN(title_ms.data, C.int(int64(title_ms.len)))
	C.free(unsafe.Pointer(title_ms.data))
	slotval2 := title_ret
	var textContent_ms C.struct_miqt_string = textContent
	textContent_ret := C.GoStringN(textContent_ms.data, C.int(int64(textContent_ms.len)))
	C.free(unsafe.Pointer(textContent_ms.data))
	slotval3 := textContent_ret

	gofunc(slotval1, slotval2, slotval3)
}

func (this *QWebPage) StatusBarMessage(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QWebPage_StatusBarMessage(this.h, text_ms)
}
func (this *QWebPage) OnStatusBarMessage(slot func(text string)) {
	C.QWebPage_connect_StatusBarMessage(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebPage_StatusBarMessage
func miqt_exec_callback_QWebPage_StatusBarMessage(cb C.intptr_t, text C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(text string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var text_ms C.struct_miqt_string = text
	text_ret := C.GoStringN(text_ms.data, C.int(int64(text_ms.len)))
	C.free(unsafe.Pointer(text_ms.data))
	slotval1 := text_ret

	gofunc(slotval1)
}

func (this *QWebPage) SelectionChanged() {
	C.QWebPage_SelectionChanged(this.h)
}
func (this *QWebPage) OnSelectionChanged(slot func()) {
	C.QWebPage_connect_SelectionChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebPage_SelectionChanged
func miqt_exec_callback_QWebPage_SelectionChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QWebPage) FrameCreated(frame *QWebFrame) {
	C.QWebPage_FrameCreated(this.h, frame.cPointer())
}
func (this *QWebPage) OnFrameCreated(slot func(frame *QWebFrame)) {
	C.QWebPage_connect_FrameCreated(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebPage_FrameCreated
func miqt_exec_callback_QWebPage_FrameCreated(cb C.intptr_t, frame *C.QWebFrame) {
	gofunc, ok := cgo.Handle(cb).Value().(func(frame *QWebFrame))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWebFrame(frame)

	gofunc(slotval1)
}

func (this *QWebPage) GeometryChangeRequested(geom *qt.QRect) {
	C.QWebPage_GeometryChangeRequested(this.h, (*C.QRect)(geom.UnsafePointer()))
}
func (this *QWebPage) OnGeometryChangeRequested(slot func(geom *qt.QRect)) {
	C.QWebPage_connect_GeometryChangeRequested(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebPage_GeometryChangeRequested
func miqt_exec_callback_QWebPage_GeometryChangeRequested(cb C.intptr_t, geom *C.QRect) {
	gofunc, ok := cgo.Handle(cb).Value().(func(geom *qt.QRect))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQRect(unsafe.Pointer(geom))

	gofunc(slotval1)
}

func (this *QWebPage) RepaintRequested(dirtyRect *qt.QRect) {
	C.QWebPage_RepaintRequested(this.h, (*C.QRect)(dirtyRect.UnsafePointer()))
}
func (this *QWebPage) OnRepaintRequested(slot func(dirtyRect *qt.QRect)) {
	C.QWebPage_connect_RepaintRequested(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebPage_RepaintRequested
func miqt_exec_callback_QWebPage_RepaintRequested(cb C.intptr_t, dirtyRect *C.QRect) {
	gofunc, ok := cgo.Handle(cb).Value().(func(dirtyRect *qt.QRect))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQRect(unsafe.Pointer(dirtyRect))

	gofunc(slotval1)
}

func (this *QWebPage) ScrollRequested(dx int, dy int, scrollViewRect *qt.QRect) {
	C.QWebPage_ScrollRequested(this.h, (C.int)(dx), (C.int)(dy), (*C.QRect)(scrollViewRect.UnsafePointer()))
}
func (this *QWebPage) OnScrollRequested(slot func(dx int, dy int, scrollViewRect *qt.QRect)) {
	C.QWebPage_connect_ScrollRequested(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebPage_ScrollRequested
func miqt_exec_callback_QWebPage_ScrollRequested(cb C.intptr_t, dx C.int, dy C.int, scrollViewRect *C.QRect) {
	gofunc, ok := cgo.Handle(cb).Value().(func(dx int, dy int, scrollViewRect *qt.QRect))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(dx)

	slotval2 := (int)(dy)

	slotval3 := qt.UnsafeNewQRect(unsafe.Pointer(scrollViewRect))

	gofunc(slotval1, slotval2, slotval3)
}

func (this *QWebPage) WindowCloseRequested() {
	C.QWebPage_WindowCloseRequested(this.h)
}
func (this *QWebPage) OnWindowCloseRequested(slot func()) {
	C.QWebPage_connect_WindowCloseRequested(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebPage_WindowCloseRequested
func miqt_exec_callback_QWebPage_WindowCloseRequested(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QWebPage) PrintRequested(frame *QWebFrame) {
	C.QWebPage_PrintRequested(this.h, frame.cPointer())
}
func (this *QWebPage) OnPrintRequested(slot func(frame *QWebFrame)) {
	C.QWebPage_connect_PrintRequested(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebPage_PrintRequested
func miqt_exec_callback_QWebPage_PrintRequested(cb C.intptr_t, frame *C.QWebFrame) {
	gofunc, ok := cgo.Handle(cb).Value().(func(frame *QWebFrame))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWebFrame(frame)

	gofunc(slotval1)
}

func (this *QWebPage) LinkClicked(url *qt.QUrl) {
	C.QWebPage_LinkClicked(this.h, (*C.QUrl)(url.UnsafePointer()))
}
func (this *QWebPage) OnLinkClicked(slot func(url *qt.QUrl)) {
	C.QWebPage_connect_LinkClicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebPage_LinkClicked
func miqt_exec_callback_QWebPage_LinkClicked(cb C.intptr_t, url *C.QUrl) {
	gofunc, ok := cgo.Handle(cb).Value().(func(url *qt.QUrl))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQUrl(unsafe.Pointer(url))

	gofunc(slotval1)
}

func (this *QWebPage) ToolBarVisibilityChangeRequested(visible bool) {
	C.QWebPage_ToolBarVisibilityChangeRequested(this.h, (C.bool)(visible))
}
func (this *QWebPage) OnToolBarVisibilityChangeRequested(slot func(visible bool)) {
	C.QWebPage_connect_ToolBarVisibilityChangeRequested(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebPage_ToolBarVisibilityChangeRequested
func miqt_exec_callback_QWebPage_ToolBarVisibilityChangeRequested(cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc(slotval1)
}

func (this *QWebPage) StatusBarVisibilityChangeRequested(visible bool) {
	C.QWebPage_StatusBarVisibilityChangeRequested(this.h, (C.bool)(visible))
}
func (this *QWebPage) OnStatusBarVisibilityChangeRequested(slot func(visible bool)) {
	C.QWebPage_connect_StatusBarVisibilityChangeRequested(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebPage_StatusBarVisibilityChangeRequested
func miqt_exec_callback_QWebPage_StatusBarVisibilityChangeRequested(cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc(slotval1)
}

func (this *QWebPage) MenuBarVisibilityChangeRequested(visible bool) {
	C.QWebPage_MenuBarVisibilityChangeRequested(this.h, (C.bool)(visible))
}
func (this *QWebPage) OnMenuBarVisibilityChangeRequested(slot func(visible bool)) {
	C.QWebPage_connect_MenuBarVisibilityChangeRequested(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebPage_MenuBarVisibilityChangeRequested
func miqt_exec_callback_QWebPage_MenuBarVisibilityChangeRequested(cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc(slotval1)
}

func (this *QWebPage) UnsupportedContent(reply *network.QNetworkReply) {
	C.QWebPage_UnsupportedContent(this.h, (*C.QNetworkReply)(reply.UnsafePointer()))
}
func (this *QWebPage) OnUnsupportedContent(slot func(reply *network.QNetworkReply)) {
	C.QWebPage_connect_UnsupportedContent(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebPage_UnsupportedContent
func miqt_exec_callback_QWebPage_UnsupportedContent(cb C.intptr_t, reply *C.QNetworkReply) {
	gofunc, ok := cgo.Handle(cb).Value().(func(reply *network.QNetworkReply))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := network.UnsafeNewQNetworkReply(unsafe.Pointer(reply))

	gofunc(slotval1)
}

func (this *QWebPage) DownloadRequested(request *network.QNetworkRequest) {
	C.QWebPage_DownloadRequested(this.h, (*C.QNetworkRequest)(request.UnsafePointer()))
}
func (this *QWebPage) OnDownloadRequested(slot func(request *network.QNetworkRequest)) {
	C.QWebPage_connect_DownloadRequested(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebPage_DownloadRequested
func miqt_exec_callback_QWebPage_DownloadRequested(cb C.intptr_t, request *C.QNetworkRequest) {
	gofunc, ok := cgo.Handle(cb).Value().(func(request *network.QNetworkRequest))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := network.UnsafeNewQNetworkRequest(unsafe.Pointer(request))

	gofunc(slotval1)
}

func (this *QWebPage) FocusedElementChanged(element *QWebElement) {
	C.QWebPage_FocusedElementChanged(this.h, element.cPointer())
}
func (this *QWebPage) OnFocusedElementChanged(slot func(element *QWebElement)) {
	C.QWebPage_connect_FocusedElementChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebPage_FocusedElementChanged
func miqt_exec_callback_QWebPage_FocusedElementChanged(cb C.intptr_t, element *C.QWebElement) {
	gofunc, ok := cgo.Handle(cb).Value().(func(element *QWebElement))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWebElement(element)

	gofunc(slotval1)
}

func (this *QWebPage) MicroFocusChanged() {
	C.QWebPage_MicroFocusChanged(this.h)
}
func (this *QWebPage) OnMicroFocusChanged(slot func()) {
	C.QWebPage_connect_MicroFocusChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebPage_MicroFocusChanged
func miqt_exec_callback_QWebPage_MicroFocusChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QWebPage) ContentsChanged() {
	C.QWebPage_ContentsChanged(this.h)
}
func (this *QWebPage) OnContentsChanged(slot func()) {
	C.QWebPage_connect_ContentsChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebPage_ContentsChanged
func miqt_exec_callback_QWebPage_ContentsChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QWebPage) DatabaseQuotaExceeded(frame *QWebFrame, databaseName string) {
	databaseName_ms := C.struct_miqt_string{}
	databaseName_ms.data = C.CString(databaseName)
	databaseName_ms.len = C.size_t(len(databaseName))
	defer C.free(unsafe.Pointer(databaseName_ms.data))
	C.QWebPage_DatabaseQuotaExceeded(this.h, frame.cPointer(), databaseName_ms)
}
func (this *QWebPage) OnDatabaseQuotaExceeded(slot func(frame *QWebFrame, databaseName string)) {
	C.QWebPage_connect_DatabaseQuotaExceeded(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebPage_DatabaseQuotaExceeded
func miqt_exec_callback_QWebPage_DatabaseQuotaExceeded(cb C.intptr_t, frame *C.QWebFrame, databaseName C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(frame *QWebFrame, databaseName string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWebFrame(frame)

	var databaseName_ms C.struct_miqt_string = databaseName
	databaseName_ret := C.GoStringN(databaseName_ms.data, C.int(int64(databaseName_ms.len)))
	C.free(unsafe.Pointer(databaseName_ms.data))
	slotval2 := databaseName_ret

	gofunc(slotval1, slotval2)
}

func (this *QWebPage) ApplicationCacheQuotaExceeded(origin *QWebSecurityOrigin, defaultOriginQuota uint64, totalSpaceNeeded uint64) {
	C.QWebPage_ApplicationCacheQuotaExceeded(this.h, origin.cPointer(), (C.ulonglong)(defaultOriginQuota), (C.ulonglong)(totalSpaceNeeded))
}
func (this *QWebPage) OnApplicationCacheQuotaExceeded(slot func(origin *QWebSecurityOrigin, defaultOriginQuota uint64, totalSpaceNeeded uint64)) {
	C.QWebPage_connect_ApplicationCacheQuotaExceeded(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebPage_ApplicationCacheQuotaExceeded
func miqt_exec_callback_QWebPage_ApplicationCacheQuotaExceeded(cb C.intptr_t, origin *C.QWebSecurityOrigin, defaultOriginQuota C.ulonglong, totalSpaceNeeded C.ulonglong) {
	gofunc, ok := cgo.Handle(cb).Value().(func(origin *QWebSecurityOrigin, defaultOriginQuota uint64, totalSpaceNeeded uint64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWebSecurityOrigin(origin)

	slotval2 := (uint64)(defaultOriginQuota)

	slotval3 := (uint64)(totalSpaceNeeded)

	gofunc(slotval1, slotval2, slotval3)
}

func (this *QWebPage) SaveFrameStateRequested(frame *QWebFrame, item *QWebHistoryItem) {
	C.QWebPage_SaveFrameStateRequested(this.h, frame.cPointer(), item.cPointer())
}
func (this *QWebPage) OnSaveFrameStateRequested(slot func(frame *QWebFrame, item *QWebHistoryItem)) {
	C.QWebPage_connect_SaveFrameStateRequested(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebPage_SaveFrameStateRequested
func miqt_exec_callback_QWebPage_SaveFrameStateRequested(cb C.intptr_t, frame *C.QWebFrame, item *C.QWebHistoryItem) {
	gofunc, ok := cgo.Handle(cb).Value().(func(frame *QWebFrame, item *QWebHistoryItem))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWebFrame(frame)

	slotval2 := newQWebHistoryItem(item)

	gofunc(slotval1, slotval2)
}

func (this *QWebPage) RestoreFrameStateRequested(frame *QWebFrame) {
	C.QWebPage_RestoreFrameStateRequested(this.h, frame.cPointer())
}
func (this *QWebPage) OnRestoreFrameStateRequested(slot func(frame *QWebFrame)) {
	C.QWebPage_connect_RestoreFrameStateRequested(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebPage_RestoreFrameStateRequested
func miqt_exec_callback_QWebPage_RestoreFrameStateRequested(cb C.intptr_t, frame *C.QWebFrame) {
	gofunc, ok := cgo.Handle(cb).Value().(func(frame *QWebFrame))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWebFrame(frame)

	gofunc(slotval1)
}

func (this *QWebPage) ViewportChangeRequested() {
	C.QWebPage_ViewportChangeRequested(this.h)
}
func (this *QWebPage) OnViewportChangeRequested(slot func()) {
	C.QWebPage_connect_ViewportChangeRequested(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebPage_ViewportChangeRequested
func miqt_exec_callback_QWebPage_ViewportChangeRequested(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QWebPage) FeaturePermissionRequested(frame *QWebFrame, feature QWebPage__Feature) {
	C.QWebPage_FeaturePermissionRequested(this.h, frame.cPointer(), (C.int)(feature))
}
func (this *QWebPage) OnFeaturePermissionRequested(slot func(frame *QWebFrame, feature QWebPage__Feature)) {
	C.QWebPage_connect_FeaturePermissionRequested(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebPage_FeaturePermissionRequested
func miqt_exec_callback_QWebPage_FeaturePermissionRequested(cb C.intptr_t, frame *C.QWebFrame, feature C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(frame *QWebFrame, feature QWebPage__Feature))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWebFrame(frame)

	slotval2 := (QWebPage__Feature)(feature)

	gofunc(slotval1, slotval2)
}

func (this *QWebPage) FeaturePermissionRequestCanceled(frame *QWebFrame, feature QWebPage__Feature) {
	C.QWebPage_FeaturePermissionRequestCanceled(this.h, frame.cPointer(), (C.int)(feature))
}
func (this *QWebPage) OnFeaturePermissionRequestCanceled(slot func(frame *QWebFrame, feature QWebPage__Feature)) {
	C.QWebPage_connect_FeaturePermissionRequestCanceled(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebPage_FeaturePermissionRequestCanceled
func miqt_exec_callback_QWebPage_FeaturePermissionRequestCanceled(cb C.intptr_t, frame *C.QWebFrame, feature C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(frame *QWebFrame, feature QWebPage__Feature))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWebFrame(frame)

	slotval2 := (QWebPage__Feature)(feature)

	gofunc(slotval1, slotval2)
}

func (this *QWebPage) FullScreenRequested(fullScreenRequest QWebFullScreenRequest) {
	C.QWebPage_FullScreenRequested(this.h, fullScreenRequest.cPointer())
}
func (this *QWebPage) OnFullScreenRequested(slot func(fullScreenRequest QWebFullScreenRequest)) {
	C.QWebPage_connect_FullScreenRequested(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebPage_FullScreenRequested
func miqt_exec_callback_QWebPage_FullScreenRequested(cb C.intptr_t, fullScreenRequest *C.QWebFullScreenRequest) {
	gofunc, ok := cgo.Handle(cb).Value().(func(fullScreenRequest QWebFullScreenRequest))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	fullScreenRequest_goptr := newQWebFullScreenRequest(fullScreenRequest)
	fullScreenRequest_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	slotval1 := *fullScreenRequest_goptr

	gofunc(slotval1)
}

func (this *QWebPage) ConsoleMessageReceived(source QWebPage__MessageSource, level QWebPage__MessageLevel, message string, lineNumber int, sourceID string) {
	message_ms := C.struct_miqt_string{}
	message_ms.data = C.CString(message)
	message_ms.len = C.size_t(len(message))
	defer C.free(unsafe.Pointer(message_ms.data))
	sourceID_ms := C.struct_miqt_string{}
	sourceID_ms.data = C.CString(sourceID)
	sourceID_ms.len = C.size_t(len(sourceID))
	defer C.free(unsafe.Pointer(sourceID_ms.data))
	C.QWebPage_ConsoleMessageReceived(this.h, (C.int)(source), (C.int)(level), message_ms, (C.int)(lineNumber), sourceID_ms)
}
func (this *QWebPage) OnConsoleMessageReceived(slot func(source QWebPage__MessageSource, level QWebPage__MessageLevel, message string, lineNumber int, sourceID string)) {
	C.QWebPage_connect_ConsoleMessageReceived(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebPage_ConsoleMessageReceived
func miqt_exec_callback_QWebPage_ConsoleMessageReceived(cb C.intptr_t, source C.int, level C.int, message C.struct_miqt_string, lineNumber C.int, sourceID C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(source QWebPage__MessageSource, level QWebPage__MessageLevel, message string, lineNumber int, sourceID string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QWebPage__MessageSource)(source)

	slotval2 := (QWebPage__MessageLevel)(level)

	var message_ms C.struct_miqt_string = message
	message_ret := C.GoStringN(message_ms.data, C.int(int64(message_ms.len)))
	C.free(unsafe.Pointer(message_ms.data))
	slotval3 := message_ret
	slotval4 := (int)(lineNumber)

	var sourceID_ms C.struct_miqt_string = sourceID
	sourceID_ret := C.GoStringN(sourceID_ms.data, C.int(int64(sourceID_ms.len)))
	C.free(unsafe.Pointer(sourceID_ms.data))
	slotval5 := sourceID_ret

	gofunc(slotval1, slotval2, slotval3, slotval4, slotval5)
}

func (this *QWebPage) RecentlyAudibleChanged(recentlyAudible bool) {
	C.QWebPage_RecentlyAudibleChanged(this.h, (C.bool)(recentlyAudible))
}
func (this *QWebPage) OnRecentlyAudibleChanged(slot func(recentlyAudible bool)) {
	C.QWebPage_connect_RecentlyAudibleChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebPage_RecentlyAudibleChanged
func miqt_exec_callback_QWebPage_RecentlyAudibleChanged(cb C.intptr_t, recentlyAudible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(recentlyAudible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(recentlyAudible)

	gofunc(slotval1)
}

func QWebPage_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebPage_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebPage_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebPage_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebPage_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebPage_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebPage_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebPage_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebPage) FindText2(subString string, options QWebPage__FindFlag) bool {
	subString_ms := C.struct_miqt_string{}
	subString_ms.data = C.CString(subString)
	subString_ms.len = C.size_t(len(subString))
	defer C.free(unsafe.Pointer(subString_ms.data))
	return (bool)(C.QWebPage_FindText2(this.h, subString_ms, (C.int)(options)))
}

func (this *QWebPage) callVirtualBase_TriggerAction(action QWebPage__WebAction, checked bool) {

	C.QWebPage_virtualbase_TriggerAction(unsafe.Pointer(this.h), (C.int)(action), (C.bool)(checked))

}
func (this *QWebPage) OnTriggerAction(slot func(super func(action QWebPage__WebAction, checked bool), action QWebPage__WebAction, checked bool)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWebPage_override_virtual_TriggerAction(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebPage_TriggerAction
func miqt_exec_callback_QWebPage_TriggerAction(self *C.QWebPage, cb C.intptr_t, action C.int, checked C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(action QWebPage__WebAction, checked bool), action QWebPage__WebAction, checked bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QWebPage__WebAction)(action)

	slotval2 := (bool)(checked)

	gofunc((&QWebPage{h: self}).callVirtualBase_TriggerAction, slotval1, slotval2)

}

func (this *QWebPage) callVirtualBase_Event(param1 *qt.QEvent) bool {

	return (bool)(C.QWebPage_virtualbase_Event(unsafe.Pointer(this.h), (*C.QEvent)(param1.UnsafePointer())))

}
func (this *QWebPage) OnEvent(slot func(super func(param1 *qt.QEvent) bool, param1 *qt.QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWebPage_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebPage_Event
func miqt_exec_callback_QWebPage_Event(self *C.QWebPage, cb C.intptr_t, param1 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QEvent) bool, param1 *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(param1))

	virtualReturn := gofunc((&QWebPage{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QWebPage) callVirtualBase_Extension(extension QWebPage__Extension, option *QWebPage__ExtensionOption, output *QWebPage__ExtensionReturn) bool {

	return (bool)(C.QWebPage_virtualbase_Extension(unsafe.Pointer(this.h), (C.int)(extension), option.cPointer(), output.cPointer()))

}
func (this *QWebPage) OnExtension(slot func(super func(extension QWebPage__Extension, option *QWebPage__ExtensionOption, output *QWebPage__ExtensionReturn) bool, extension QWebPage__Extension, option *QWebPage__ExtensionOption, output *QWebPage__ExtensionReturn) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWebPage_override_virtual_Extension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebPage_Extension
func miqt_exec_callback_QWebPage_Extension(self *C.QWebPage, cb C.intptr_t, extension C.int, option *C.QWebPage__ExtensionOption, output *C.QWebPage__ExtensionReturn) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(extension QWebPage__Extension, option *QWebPage__ExtensionOption, output *QWebPage__ExtensionReturn) bool, extension QWebPage__Extension, option *QWebPage__ExtensionOption, output *QWebPage__ExtensionReturn) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QWebPage__Extension)(extension)

	slotval2 := newQWebPage__ExtensionOption(option)

	slotval3 := newQWebPage__ExtensionReturn(output)

	virtualReturn := gofunc((&QWebPage{h: self}).callVirtualBase_Extension, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QWebPage) callVirtualBase_SupportsExtension(extension QWebPage__Extension) bool {

	return (bool)(C.QWebPage_virtualbase_SupportsExtension(unsafe.Pointer(this.h), (C.int)(extension)))

}
func (this *QWebPage) OnSupportsExtension(slot func(super func(extension QWebPage__Extension) bool, extension QWebPage__Extension) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWebPage_override_virtual_SupportsExtension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebPage_SupportsExtension
func miqt_exec_callback_QWebPage_SupportsExtension(self *C.QWebPage, cb C.intptr_t, extension C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(extension QWebPage__Extension) bool, extension QWebPage__Extension) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QWebPage__Extension)(extension)

	virtualReturn := gofunc((&QWebPage{h: self}).callVirtualBase_SupportsExtension, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QWebPage) callVirtualBase_ShouldInterruptJavaScript() bool {

	return (bool)(C.QWebPage_virtualbase_ShouldInterruptJavaScript(unsafe.Pointer(this.h)))

}
func (this *QWebPage) OnShouldInterruptJavaScript(slot func(super func() bool) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWebPage_override_virtual_ShouldInterruptJavaScript(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebPage_ShouldInterruptJavaScript
func miqt_exec_callback_QWebPage_ShouldInterruptJavaScript(self *C.QWebPage, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWebPage{h: self}).callVirtualBase_ShouldInterruptJavaScript)

	return (C.bool)(virtualReturn)

}

func (this *QWebPage) callVirtualBase_CreateWindow(typeVal QWebPage__WebWindowType) *QWebPage {

	return newQWebPage(C.QWebPage_virtualbase_CreateWindow(unsafe.Pointer(this.h), (C.int)(typeVal)))

}
func (this *QWebPage) OnCreateWindow(slot func(super func(typeVal QWebPage__WebWindowType) *QWebPage, typeVal QWebPage__WebWindowType) *QWebPage) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWebPage_override_virtual_CreateWindow(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebPage_CreateWindow
func miqt_exec_callback_QWebPage_CreateWindow(self *C.QWebPage, cb C.intptr_t, typeVal C.int) *C.QWebPage {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(typeVal QWebPage__WebWindowType) *QWebPage, typeVal QWebPage__WebWindowType) *QWebPage)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QWebPage__WebWindowType)(typeVal)

	virtualReturn := gofunc((&QWebPage{h: self}).callVirtualBase_CreateWindow, slotval1)

	return virtualReturn.cPointer()

}

func (this *QWebPage) callVirtualBase_CreatePlugin(classid string, url *qt.QUrl, paramNames []string, paramValues []string) *qt.QObject {
	classid_ms := C.struct_miqt_string{}
	classid_ms.data = C.CString(classid)
	classid_ms.len = C.size_t(len(classid))
	defer C.free(unsafe.Pointer(classid_ms.data))
	paramNames_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(paramNames))))
	defer C.free(unsafe.Pointer(paramNames_CArray))
	for i := range paramNames {
		paramNames_i_ms := C.struct_miqt_string{}
		paramNames_i_ms.data = C.CString(paramNames[i])
		paramNames_i_ms.len = C.size_t(len(paramNames[i]))
		defer C.free(unsafe.Pointer(paramNames_i_ms.data))
		paramNames_CArray[i] = paramNames_i_ms
	}
	paramNames_ma := C.struct_miqt_array{len: C.size_t(len(paramNames)), data: unsafe.Pointer(paramNames_CArray)}
	paramValues_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(paramValues))))
	defer C.free(unsafe.Pointer(paramValues_CArray))
	for i := range paramValues {
		paramValues_i_ms := C.struct_miqt_string{}
		paramValues_i_ms.data = C.CString(paramValues[i])
		paramValues_i_ms.len = C.size_t(len(paramValues[i]))
		defer C.free(unsafe.Pointer(paramValues_i_ms.data))
		paramValues_CArray[i] = paramValues_i_ms
	}
	paramValues_ma := C.struct_miqt_array{len: C.size_t(len(paramValues)), data: unsafe.Pointer(paramValues_CArray)}

	return qt.UnsafeNewQObject(unsafe.Pointer(C.QWebPage_virtualbase_CreatePlugin(unsafe.Pointer(this.h), classid_ms, (*C.QUrl)(url.UnsafePointer()), paramNames_ma, paramValues_ma)))

}
func (this *QWebPage) OnCreatePlugin(slot func(super func(classid string, url *qt.QUrl, paramNames []string, paramValues []string) *qt.QObject, classid string, url *qt.QUrl, paramNames []string, paramValues []string) *qt.QObject) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWebPage_override_virtual_CreatePlugin(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebPage_CreatePlugin
func miqt_exec_callback_QWebPage_CreatePlugin(self *C.QWebPage, cb C.intptr_t, classid C.struct_miqt_string, url *C.QUrl, paramNames C.struct_miqt_array, paramValues C.struct_miqt_array) *C.QObject {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(classid string, url *qt.QUrl, paramNames []string, paramValues []string) *qt.QObject, classid string, url *qt.QUrl, paramNames []string, paramValues []string) *qt.QObject)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var classid_ms C.struct_miqt_string = classid
	classid_ret := C.GoStringN(classid_ms.data, C.int(int64(classid_ms.len)))
	C.free(unsafe.Pointer(classid_ms.data))
	slotval1 := classid_ret
	slotval2 := qt.UnsafeNewQUrl(unsafe.Pointer(url))

	var paramNames_ma C.struct_miqt_array = paramNames
	paramNames_ret := make([]string, int(paramNames_ma.len))
	paramNames_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(paramNames_ma.data)) // hey ya
	for i := 0; i < int(paramNames_ma.len); i++ {
		var paramNames_lv_ms C.struct_miqt_string = paramNames_outCast[i]
		paramNames_lv_ret := C.GoStringN(paramNames_lv_ms.data, C.int(int64(paramNames_lv_ms.len)))
		C.free(unsafe.Pointer(paramNames_lv_ms.data))
		paramNames_ret[i] = paramNames_lv_ret
	}
	slotval3 := paramNames_ret

	var paramValues_ma C.struct_miqt_array = paramValues
	paramValues_ret := make([]string, int(paramValues_ma.len))
	paramValues_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(paramValues_ma.data)) // hey ya
	for i := 0; i < int(paramValues_ma.len); i++ {
		var paramValues_lv_ms C.struct_miqt_string = paramValues_outCast[i]
		paramValues_lv_ret := C.GoStringN(paramValues_lv_ms.data, C.int(int64(paramValues_lv_ms.len)))
		C.free(unsafe.Pointer(paramValues_lv_ms.data))
		paramValues_ret[i] = paramValues_lv_ret
	}
	slotval4 := paramValues_ret

	virtualReturn := gofunc((&QWebPage{h: self}).callVirtualBase_CreatePlugin, slotval1, slotval2, slotval3, slotval4)

	return (*C.QObject)(virtualReturn.UnsafePointer())

}

func (this *QWebPage) callVirtualBase_AcceptNavigationRequest(frame *QWebFrame, request *network.QNetworkRequest, typeVal QWebPage__NavigationType) bool {

	return (bool)(C.QWebPage_virtualbase_AcceptNavigationRequest(unsafe.Pointer(this.h), frame.cPointer(), (*C.QNetworkRequest)(request.UnsafePointer()), (C.int)(typeVal)))

}
func (this *QWebPage) OnAcceptNavigationRequest(slot func(super func(frame *QWebFrame, request *network.QNetworkRequest, typeVal QWebPage__NavigationType) bool, frame *QWebFrame, request *network.QNetworkRequest, typeVal QWebPage__NavigationType) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWebPage_override_virtual_AcceptNavigationRequest(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebPage_AcceptNavigationRequest
func miqt_exec_callback_QWebPage_AcceptNavigationRequest(self *C.QWebPage, cb C.intptr_t, frame *C.QWebFrame, request *C.QNetworkRequest, typeVal C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(frame *QWebFrame, request *network.QNetworkRequest, typeVal QWebPage__NavigationType) bool, frame *QWebFrame, request *network.QNetworkRequest, typeVal QWebPage__NavigationType) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWebFrame(frame)

	slotval2 := network.UnsafeNewQNetworkRequest(unsafe.Pointer(request))

	slotval3 := (QWebPage__NavigationType)(typeVal)

	virtualReturn := gofunc((&QWebPage{h: self}).callVirtualBase_AcceptNavigationRequest, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QWebPage) callVirtualBase_ChooseFile(originatingFrame *QWebFrame, oldFile string) string {
	oldFile_ms := C.struct_miqt_string{}
	oldFile_ms.data = C.CString(oldFile)
	oldFile_ms.len = C.size_t(len(oldFile))
	defer C.free(unsafe.Pointer(oldFile_ms.data))

	var _ms C.struct_miqt_string = C.QWebPage_virtualbase_ChooseFile(unsafe.Pointer(this.h), originatingFrame.cPointer(), oldFile_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}
func (this *QWebPage) OnChooseFile(slot func(super func(originatingFrame *QWebFrame, oldFile string) string, originatingFrame *QWebFrame, oldFile string) string) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWebPage_override_virtual_ChooseFile(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebPage_ChooseFile
func miqt_exec_callback_QWebPage_ChooseFile(self *C.QWebPage, cb C.intptr_t, originatingFrame *C.QWebFrame, oldFile C.struct_miqt_string) C.struct_miqt_string {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(originatingFrame *QWebFrame, oldFile string) string, originatingFrame *QWebFrame, oldFile string) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWebFrame(originatingFrame)

	var oldFile_ms C.struct_miqt_string = oldFile
	oldFile_ret := C.GoStringN(oldFile_ms.data, C.int(int64(oldFile_ms.len)))
	C.free(unsafe.Pointer(oldFile_ms.data))
	slotval2 := oldFile_ret

	virtualReturn := gofunc((&QWebPage{h: self}).callVirtualBase_ChooseFile, slotval1, slotval2)
	virtualReturn_ms := C.struct_miqt_string{}
	virtualReturn_ms.data = C.CString(virtualReturn)
	virtualReturn_ms.len = C.size_t(len(virtualReturn))
	defer C.free(unsafe.Pointer(virtualReturn_ms.data))

	return virtualReturn_ms

}

func (this *QWebPage) callVirtualBase_JavaScriptAlert(originatingFrame *QWebFrame, msg string) {
	msg_ms := C.struct_miqt_string{}
	msg_ms.data = C.CString(msg)
	msg_ms.len = C.size_t(len(msg))
	defer C.free(unsafe.Pointer(msg_ms.data))

	C.QWebPage_virtualbase_JavaScriptAlert(unsafe.Pointer(this.h), originatingFrame.cPointer(), msg_ms)

}
func (this *QWebPage) OnJavaScriptAlert(slot func(super func(originatingFrame *QWebFrame, msg string), originatingFrame *QWebFrame, msg string)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWebPage_override_virtual_JavaScriptAlert(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebPage_JavaScriptAlert
func miqt_exec_callback_QWebPage_JavaScriptAlert(self *C.QWebPage, cb C.intptr_t, originatingFrame *C.QWebFrame, msg C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(originatingFrame *QWebFrame, msg string), originatingFrame *QWebFrame, msg string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWebFrame(originatingFrame)

	var msg_ms C.struct_miqt_string = msg
	msg_ret := C.GoStringN(msg_ms.data, C.int(int64(msg_ms.len)))
	C.free(unsafe.Pointer(msg_ms.data))
	slotval2 := msg_ret

	gofunc((&QWebPage{h: self}).callVirtualBase_JavaScriptAlert, slotval1, slotval2)

}

func (this *QWebPage) callVirtualBase_JavaScriptConfirm(originatingFrame *QWebFrame, msg string) bool {
	msg_ms := C.struct_miqt_string{}
	msg_ms.data = C.CString(msg)
	msg_ms.len = C.size_t(len(msg))
	defer C.free(unsafe.Pointer(msg_ms.data))

	return (bool)(C.QWebPage_virtualbase_JavaScriptConfirm(unsafe.Pointer(this.h), originatingFrame.cPointer(), msg_ms))

}
func (this *QWebPage) OnJavaScriptConfirm(slot func(super func(originatingFrame *QWebFrame, msg string) bool, originatingFrame *QWebFrame, msg string) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWebPage_override_virtual_JavaScriptConfirm(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebPage_JavaScriptConfirm
func miqt_exec_callback_QWebPage_JavaScriptConfirm(self *C.QWebPage, cb C.intptr_t, originatingFrame *C.QWebFrame, msg C.struct_miqt_string) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(originatingFrame *QWebFrame, msg string) bool, originatingFrame *QWebFrame, msg string) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWebFrame(originatingFrame)

	var msg_ms C.struct_miqt_string = msg
	msg_ret := C.GoStringN(msg_ms.data, C.int(int64(msg_ms.len)))
	C.free(unsafe.Pointer(msg_ms.data))
	slotval2 := msg_ret

	virtualReturn := gofunc((&QWebPage{h: self}).callVirtualBase_JavaScriptConfirm, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QWebPage) callVirtualBase_JavaScriptConsoleMessage(message string, lineNumber int, sourceID string) {
	message_ms := C.struct_miqt_string{}
	message_ms.data = C.CString(message)
	message_ms.len = C.size_t(len(message))
	defer C.free(unsafe.Pointer(message_ms.data))
	sourceID_ms := C.struct_miqt_string{}
	sourceID_ms.data = C.CString(sourceID)
	sourceID_ms.len = C.size_t(len(sourceID))
	defer C.free(unsafe.Pointer(sourceID_ms.data))

	C.QWebPage_virtualbase_JavaScriptConsoleMessage(unsafe.Pointer(this.h), message_ms, (C.int)(lineNumber), sourceID_ms)

}
func (this *QWebPage) OnJavaScriptConsoleMessage(slot func(super func(message string, lineNumber int, sourceID string), message string, lineNumber int, sourceID string)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWebPage_override_virtual_JavaScriptConsoleMessage(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebPage_JavaScriptConsoleMessage
func miqt_exec_callback_QWebPage_JavaScriptConsoleMessage(self *C.QWebPage, cb C.intptr_t, message C.struct_miqt_string, lineNumber C.int, sourceID C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(message string, lineNumber int, sourceID string), message string, lineNumber int, sourceID string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var message_ms C.struct_miqt_string = message
	message_ret := C.GoStringN(message_ms.data, C.int(int64(message_ms.len)))
	C.free(unsafe.Pointer(message_ms.data))
	slotval1 := message_ret
	slotval2 := (int)(lineNumber)

	var sourceID_ms C.struct_miqt_string = sourceID
	sourceID_ret := C.GoStringN(sourceID_ms.data, C.int(int64(sourceID_ms.len)))
	C.free(unsafe.Pointer(sourceID_ms.data))
	slotval3 := sourceID_ret

	gofunc((&QWebPage{h: self}).callVirtualBase_JavaScriptConsoleMessage, slotval1, slotval2, slotval3)

}

func (this *QWebPage) callVirtualBase_UserAgentForUrl(url *qt.QUrl) string {

	var _ms C.struct_miqt_string = C.QWebPage_virtualbase_UserAgentForUrl(unsafe.Pointer(this.h), (*C.QUrl)(url.UnsafePointer()))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}
func (this *QWebPage) OnUserAgentForUrl(slot func(super func(url *qt.QUrl) string, url *qt.QUrl) string) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWebPage_override_virtual_UserAgentForUrl(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebPage_UserAgentForUrl
func miqt_exec_callback_QWebPage_UserAgentForUrl(self *C.QWebPage, cb C.intptr_t, url *C.QUrl) C.struct_miqt_string {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(url *qt.QUrl) string, url *qt.QUrl) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQUrl(unsafe.Pointer(url))

	virtualReturn := gofunc((&QWebPage{h: self}).callVirtualBase_UserAgentForUrl, slotval1)
	virtualReturn_ms := C.struct_miqt_string{}
	virtualReturn_ms.data = C.CString(virtualReturn)
	virtualReturn_ms.len = C.size_t(len(virtualReturn))
	defer C.free(unsafe.Pointer(virtualReturn_ms.data))

	return virtualReturn_ms

}

func (this *QWebPage) callVirtualBase_EventFilter(watched *qt.QObject, event *qt.QEvent) bool {

	return (bool)(C.QWebPage_virtualbase_EventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QWebPage) OnEventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWebPage_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebPage_EventFilter
func miqt_exec_callback_QWebPage_EventFilter(self *C.QWebPage, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QWebPage{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QWebPage) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.QWebPage_virtualbase_TimerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QWebPage) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWebPage_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebPage_TimerEvent
func miqt_exec_callback_QWebPage_TimerEvent(self *C.QWebPage, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QWebPage{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QWebPage) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QWebPage_virtualbase_ChildEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QWebPage) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWebPage_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebPage_ChildEvent
func miqt_exec_callback_QWebPage_ChildEvent(self *C.QWebPage, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QWebPage{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QWebPage) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QWebPage_virtualbase_CustomEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QWebPage) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWebPage_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebPage_CustomEvent
func miqt_exec_callback_QWebPage_CustomEvent(self *C.QWebPage, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QWebPage{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QWebPage) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QWebPage_virtualbase_ConnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QWebPage) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWebPage_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebPage_ConnectNotify
func miqt_exec_callback_QWebPage_ConnectNotify(self *C.QWebPage, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QWebPage{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QWebPage) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QWebPage_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QWebPage) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWebPage_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebPage_DisconnectNotify
func miqt_exec_callback_QWebPage_DisconnectNotify(self *C.QWebPage, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QWebPage{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QWebPage) Delete() {
	C.QWebPage_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWebPage) GoGC() {
	runtime.SetFinalizer(this, func(this *QWebPage) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QWebPage__ViewportAttributes struct {
	h          *C.QWebPage__ViewportAttributes
	isSubclass bool
}

func (this *QWebPage__ViewportAttributes) cPointer() *C.QWebPage__ViewportAttributes {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWebPage__ViewportAttributes) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWebPage__ViewportAttributes constructs the type using only CGO pointers.
func newQWebPage__ViewportAttributes(h *C.QWebPage__ViewportAttributes) *QWebPage__ViewportAttributes {
	if h == nil {
		return nil
	}

	return &QWebPage__ViewportAttributes{h: h}
}

// UnsafeNewQWebPage__ViewportAttributes constructs the type using only unsafe pointers.
func UnsafeNewQWebPage__ViewportAttributes(h unsafe.Pointer) *QWebPage__ViewportAttributes {
	return newQWebPage__ViewportAttributes((*C.QWebPage__ViewportAttributes)(h))
}

// NewQWebPage__ViewportAttributes constructs a new QWebPage::ViewportAttributes object.
func NewQWebPage__ViewportAttributes() *QWebPage__ViewportAttributes {

	ret := newQWebPage__ViewportAttributes(C.QWebPage__ViewportAttributes_new())
	ret.isSubclass = true
	return ret
}

// NewQWebPage__ViewportAttributes2 constructs a new QWebPage::ViewportAttributes object.
func NewQWebPage__ViewportAttributes2(other *QWebPage__ViewportAttributes) *QWebPage__ViewportAttributes {

	ret := newQWebPage__ViewportAttributes(C.QWebPage__ViewportAttributes_new2(other.cPointer()))
	ret.isSubclass = true
	return ret
}

func (this *QWebPage__ViewportAttributes) OperatorAssign(other *QWebPage__ViewportAttributes) {
	C.QWebPage__ViewportAttributes_OperatorAssign(this.h, other.cPointer())
}

func (this *QWebPage__ViewportAttributes) InitialScaleFactor() float64 {
	return (float64)(C.QWebPage__ViewportAttributes_InitialScaleFactor(this.h))
}

func (this *QWebPage__ViewportAttributes) MinimumScaleFactor() float64 {
	return (float64)(C.QWebPage__ViewportAttributes_MinimumScaleFactor(this.h))
}

func (this *QWebPage__ViewportAttributes) MaximumScaleFactor() float64 {
	return (float64)(C.QWebPage__ViewportAttributes_MaximumScaleFactor(this.h))
}

func (this *QWebPage__ViewportAttributes) DevicePixelRatio() float64 {
	return (float64)(C.QWebPage__ViewportAttributes_DevicePixelRatio(this.h))
}

func (this *QWebPage__ViewportAttributes) IsUserScalable() bool {
	return (bool)(C.QWebPage__ViewportAttributes_IsUserScalable(this.h))
}

func (this *QWebPage__ViewportAttributes) IsValid() bool {
	return (bool)(C.QWebPage__ViewportAttributes_IsValid(this.h))
}

func (this *QWebPage__ViewportAttributes) Size() *qt.QSizeF {
	_goptr := qt.UnsafeNewQSizeF(unsafe.Pointer(C.QWebPage__ViewportAttributes_Size(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QWebPage__ViewportAttributes) Delete() {
	C.QWebPage__ViewportAttributes_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWebPage__ViewportAttributes) GoGC() {
	runtime.SetFinalizer(this, func(this *QWebPage__ViewportAttributes) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QWebPage__ExtensionOption struct {
	h          *C.QWebPage__ExtensionOption
	isSubclass bool
}

func (this *QWebPage__ExtensionOption) cPointer() *C.QWebPage__ExtensionOption {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWebPage__ExtensionOption) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWebPage__ExtensionOption constructs the type using only CGO pointers.
func newQWebPage__ExtensionOption(h *C.QWebPage__ExtensionOption) *QWebPage__ExtensionOption {
	if h == nil {
		return nil
	}

	return &QWebPage__ExtensionOption{h: h}
}

// UnsafeNewQWebPage__ExtensionOption constructs the type using only unsafe pointers.
func UnsafeNewQWebPage__ExtensionOption(h unsafe.Pointer) *QWebPage__ExtensionOption {
	return newQWebPage__ExtensionOption((*C.QWebPage__ExtensionOption)(h))
}

// NewQWebPage__ExtensionOption constructs a new QWebPage::ExtensionOption object.
func NewQWebPage__ExtensionOption(param1 *QWebPage__ExtensionOption) *QWebPage__ExtensionOption {

	ret := newQWebPage__ExtensionOption(C.QWebPage__ExtensionOption_new(param1.cPointer()))
	ret.isSubclass = true
	return ret
}

// Delete this object from C++ memory.
func (this *QWebPage__ExtensionOption) Delete() {
	C.QWebPage__ExtensionOption_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWebPage__ExtensionOption) GoGC() {
	runtime.SetFinalizer(this, func(this *QWebPage__ExtensionOption) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QWebPage__ExtensionReturn struct {
	h          *C.QWebPage__ExtensionReturn
	isSubclass bool
}

func (this *QWebPage__ExtensionReturn) cPointer() *C.QWebPage__ExtensionReturn {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWebPage__ExtensionReturn) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWebPage__ExtensionReturn constructs the type using only CGO pointers.
func newQWebPage__ExtensionReturn(h *C.QWebPage__ExtensionReturn) *QWebPage__ExtensionReturn {
	if h == nil {
		return nil
	}

	return &QWebPage__ExtensionReturn{h: h}
}

// UnsafeNewQWebPage__ExtensionReturn constructs the type using only unsafe pointers.
func UnsafeNewQWebPage__ExtensionReturn(h unsafe.Pointer) *QWebPage__ExtensionReturn {
	return newQWebPage__ExtensionReturn((*C.QWebPage__ExtensionReturn)(h))
}

// NewQWebPage__ExtensionReturn constructs a new QWebPage::ExtensionReturn object.
func NewQWebPage__ExtensionReturn(param1 *QWebPage__ExtensionReturn) *QWebPage__ExtensionReturn {

	ret := newQWebPage__ExtensionReturn(C.QWebPage__ExtensionReturn_new(param1.cPointer()))
	ret.isSubclass = true
	return ret
}

// NewQWebPage__ExtensionReturn2 constructs a new QWebPage::ExtensionReturn object.
func NewQWebPage__ExtensionReturn2() *QWebPage__ExtensionReturn {

	ret := newQWebPage__ExtensionReturn(C.QWebPage__ExtensionReturn_new2())
	ret.isSubclass = true
	return ret
}

// Delete this object from C++ memory.
func (this *QWebPage__ExtensionReturn) Delete() {
	C.QWebPage__ExtensionReturn_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWebPage__ExtensionReturn) GoGC() {
	runtime.SetFinalizer(this, func(this *QWebPage__ExtensionReturn) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QWebPage__ChooseMultipleFilesExtensionOption struct {
	h          *C.QWebPage__ChooseMultipleFilesExtensionOption
	isSubclass bool
	*QWebPage__ExtensionOption
}

func (this *QWebPage__ChooseMultipleFilesExtensionOption) cPointer() *C.QWebPage__ChooseMultipleFilesExtensionOption {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWebPage__ChooseMultipleFilesExtensionOption) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWebPage__ChooseMultipleFilesExtensionOption constructs the type using only CGO pointers.
func newQWebPage__ChooseMultipleFilesExtensionOption(h *C.QWebPage__ChooseMultipleFilesExtensionOption) *QWebPage__ChooseMultipleFilesExtensionOption {
	if h == nil {
		return nil
	}
	var outptr_QWebPage__ExtensionOption *C.QWebPage__ExtensionOption = nil
	C.QWebPage__ChooseMultipleFilesExtensionOption_virtbase(h, &outptr_QWebPage__ExtensionOption)

	return &QWebPage__ChooseMultipleFilesExtensionOption{h: h,
		QWebPage__ExtensionOption: newQWebPage__ExtensionOption(outptr_QWebPage__ExtensionOption)}
}

// UnsafeNewQWebPage__ChooseMultipleFilesExtensionOption constructs the type using only unsafe pointers.
func UnsafeNewQWebPage__ChooseMultipleFilesExtensionOption(h unsafe.Pointer) *QWebPage__ChooseMultipleFilesExtensionOption {
	return newQWebPage__ChooseMultipleFilesExtensionOption((*C.QWebPage__ChooseMultipleFilesExtensionOption)(h))
}

// Delete this object from C++ memory.
func (this *QWebPage__ChooseMultipleFilesExtensionOption) Delete() {
	C.QWebPage__ChooseMultipleFilesExtensionOption_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWebPage__ChooseMultipleFilesExtensionOption) GoGC() {
	runtime.SetFinalizer(this, func(this *QWebPage__ChooseMultipleFilesExtensionOption) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QWebPage__ChooseMultipleFilesExtensionReturn struct {
	h          *C.QWebPage__ChooseMultipleFilesExtensionReturn
	isSubclass bool
	*QWebPage__ExtensionReturn
}

func (this *QWebPage__ChooseMultipleFilesExtensionReturn) cPointer() *C.QWebPage__ChooseMultipleFilesExtensionReturn {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWebPage__ChooseMultipleFilesExtensionReturn) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWebPage__ChooseMultipleFilesExtensionReturn constructs the type using only CGO pointers.
func newQWebPage__ChooseMultipleFilesExtensionReturn(h *C.QWebPage__ChooseMultipleFilesExtensionReturn) *QWebPage__ChooseMultipleFilesExtensionReturn {
	if h == nil {
		return nil
	}
	var outptr_QWebPage__ExtensionReturn *C.QWebPage__ExtensionReturn = nil
	C.QWebPage__ChooseMultipleFilesExtensionReturn_virtbase(h, &outptr_QWebPage__ExtensionReturn)

	return &QWebPage__ChooseMultipleFilesExtensionReturn{h: h,
		QWebPage__ExtensionReturn: newQWebPage__ExtensionReturn(outptr_QWebPage__ExtensionReturn)}
}

// UnsafeNewQWebPage__ChooseMultipleFilesExtensionReturn constructs the type using only unsafe pointers.
func UnsafeNewQWebPage__ChooseMultipleFilesExtensionReturn(h unsafe.Pointer) *QWebPage__ChooseMultipleFilesExtensionReturn {
	return newQWebPage__ChooseMultipleFilesExtensionReturn((*C.QWebPage__ChooseMultipleFilesExtensionReturn)(h))
}

// Delete this object from C++ memory.
func (this *QWebPage__ChooseMultipleFilesExtensionReturn) Delete() {
	C.QWebPage__ChooseMultipleFilesExtensionReturn_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWebPage__ChooseMultipleFilesExtensionReturn) GoGC() {
	runtime.SetFinalizer(this, func(this *QWebPage__ChooseMultipleFilesExtensionReturn) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QWebPage__ErrorPageExtensionOption struct {
	h          *C.QWebPage__ErrorPageExtensionOption
	isSubclass bool
	*QWebPage__ExtensionOption
}

func (this *QWebPage__ErrorPageExtensionOption) cPointer() *C.QWebPage__ErrorPageExtensionOption {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWebPage__ErrorPageExtensionOption) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWebPage__ErrorPageExtensionOption constructs the type using only CGO pointers.
func newQWebPage__ErrorPageExtensionOption(h *C.QWebPage__ErrorPageExtensionOption) *QWebPage__ErrorPageExtensionOption {
	if h == nil {
		return nil
	}
	var outptr_QWebPage__ExtensionOption *C.QWebPage__ExtensionOption = nil
	C.QWebPage__ErrorPageExtensionOption_virtbase(h, &outptr_QWebPage__ExtensionOption)

	return &QWebPage__ErrorPageExtensionOption{h: h,
		QWebPage__ExtensionOption: newQWebPage__ExtensionOption(outptr_QWebPage__ExtensionOption)}
}

// UnsafeNewQWebPage__ErrorPageExtensionOption constructs the type using only unsafe pointers.
func UnsafeNewQWebPage__ErrorPageExtensionOption(h unsafe.Pointer) *QWebPage__ErrorPageExtensionOption {
	return newQWebPage__ErrorPageExtensionOption((*C.QWebPage__ErrorPageExtensionOption)(h))
}

// NewQWebPage__ErrorPageExtensionOption constructs a new QWebPage::ErrorPageExtensionOption object.
func NewQWebPage__ErrorPageExtensionOption(param1 *QWebPage__ErrorPageExtensionOption) *QWebPage__ErrorPageExtensionOption {

	ret := newQWebPage__ErrorPageExtensionOption(C.QWebPage__ErrorPageExtensionOption_new(param1.cPointer()))
	ret.isSubclass = true
	return ret
}

func (this *QWebPage__ErrorPageExtensionOption) OperatorAssign(param1 *QWebPage__ErrorPageExtensionOption) {
	C.QWebPage__ErrorPageExtensionOption_OperatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QWebPage__ErrorPageExtensionOption) Delete() {
	C.QWebPage__ErrorPageExtensionOption_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWebPage__ErrorPageExtensionOption) GoGC() {
	runtime.SetFinalizer(this, func(this *QWebPage__ErrorPageExtensionOption) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QWebPage__ErrorPageExtensionReturn struct {
	h          *C.QWebPage__ErrorPageExtensionReturn
	isSubclass bool
	*QWebPage__ExtensionReturn
}

func (this *QWebPage__ErrorPageExtensionReturn) cPointer() *C.QWebPage__ErrorPageExtensionReturn {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWebPage__ErrorPageExtensionReturn) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWebPage__ErrorPageExtensionReturn constructs the type using only CGO pointers.
func newQWebPage__ErrorPageExtensionReturn(h *C.QWebPage__ErrorPageExtensionReturn) *QWebPage__ErrorPageExtensionReturn {
	if h == nil {
		return nil
	}
	var outptr_QWebPage__ExtensionReturn *C.QWebPage__ExtensionReturn = nil
	C.QWebPage__ErrorPageExtensionReturn_virtbase(h, &outptr_QWebPage__ExtensionReturn)

	return &QWebPage__ErrorPageExtensionReturn{h: h,
		QWebPage__ExtensionReturn: newQWebPage__ExtensionReturn(outptr_QWebPage__ExtensionReturn)}
}

// UnsafeNewQWebPage__ErrorPageExtensionReturn constructs the type using only unsafe pointers.
func UnsafeNewQWebPage__ErrorPageExtensionReturn(h unsafe.Pointer) *QWebPage__ErrorPageExtensionReturn {
	return newQWebPage__ErrorPageExtensionReturn((*C.QWebPage__ErrorPageExtensionReturn)(h))
}

// NewQWebPage__ErrorPageExtensionReturn constructs a new QWebPage::ErrorPageExtensionReturn object.
func NewQWebPage__ErrorPageExtensionReturn() *QWebPage__ErrorPageExtensionReturn {

	ret := newQWebPage__ErrorPageExtensionReturn(C.QWebPage__ErrorPageExtensionReturn_new())
	ret.isSubclass = true
	return ret
}

// NewQWebPage__ErrorPageExtensionReturn2 constructs a new QWebPage::ErrorPageExtensionReturn object.
func NewQWebPage__ErrorPageExtensionReturn2(param1 *QWebPage__ErrorPageExtensionReturn) *QWebPage__ErrorPageExtensionReturn {

	ret := newQWebPage__ErrorPageExtensionReturn(C.QWebPage__ErrorPageExtensionReturn_new2(param1.cPointer()))
	ret.isSubclass = true
	return ret
}

func (this *QWebPage__ErrorPageExtensionReturn) OperatorAssign(param1 *QWebPage__ErrorPageExtensionReturn) {
	C.QWebPage__ErrorPageExtensionReturn_OperatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QWebPage__ErrorPageExtensionReturn) Delete() {
	C.QWebPage__ErrorPageExtensionReturn_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWebPage__ErrorPageExtensionReturn) GoGC() {
	runtime.SetFinalizer(this, func(this *QWebPage__ErrorPageExtensionReturn) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
