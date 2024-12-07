package webkit

/*

#include "gen_qwebview.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"github.com/mappu/miqt/qt/network"
	"github.com/mappu/miqt/qt/printsupport"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QWebView struct {
	h          *C.QWebView
	isSubclass bool
	*qt.QWidget
}

func (this *QWebView) cPointer() *C.QWebView {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWebView) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWebView constructs the type using only CGO pointers.
func newQWebView(h *C.QWebView, h_QWidget *C.QWidget, h_QObject *C.QObject, h_QPaintDevice *C.QPaintDevice) *QWebView {
	if h == nil {
		return nil
	}
	return &QWebView{h: h,
		QWidget: qt.UnsafeNewQWidget(unsafe.Pointer(h_QWidget), unsafe.Pointer(h_QObject), unsafe.Pointer(h_QPaintDevice))}
}

// UnsafeNewQWebView constructs the type using only unsafe pointers.
func UnsafeNewQWebView(h unsafe.Pointer, h_QWidget unsafe.Pointer, h_QObject unsafe.Pointer, h_QPaintDevice unsafe.Pointer) *QWebView {
	if h == nil {
		return nil
	}

	return &QWebView{h: (*C.QWebView)(h),
		QWidget: qt.UnsafeNewQWidget(h_QWidget, h_QObject, h_QPaintDevice)}
}

// NewQWebView constructs a new QWebView object.
func NewQWebView(parent *qt.QWidget) *QWebView {
	var outptr_QWebView *C.QWebView = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QWebView_new((*C.QWidget)(parent.UnsafePointer()), &outptr_QWebView, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQWebView(outptr_QWebView, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

// NewQWebView2 constructs a new QWebView object.
func NewQWebView2() *QWebView {
	var outptr_QWebView *C.QWebView = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QWebView_new2(&outptr_QWebView, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQWebView(outptr_QWebView, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

func (this *QWebView) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QWebView_MetaObject(this.h)))
}

func (this *QWebView) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QWebView_Metacast(this.h, param1_Cstring))
}

func QWebView_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QWebView_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebView_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QWebView_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebView) Page() *QWebPage {
	return UnsafeNewQWebPage(unsafe.Pointer(C.QWebView_Page(this.h)), nil)
}

func (this *QWebView) SetPage(page *QWebPage) {
	C.QWebView_SetPage(this.h, page.cPointer())
}

func (this *QWebView) Load(url *qt.QUrl) {
	C.QWebView_Load(this.h, (*C.QUrl)(url.UnsafePointer()))
}

func (this *QWebView) LoadWithRequest(request *network.QNetworkRequest) {
	C.QWebView_LoadWithRequest(this.h, (*C.QNetworkRequest)(request.UnsafePointer()))
}

func (this *QWebView) SetHtml(html string) {
	html_ms := C.struct_miqt_string{}
	html_ms.data = C.CString(html)
	html_ms.len = C.size_t(len(html))
	defer C.free(unsafe.Pointer(html_ms.data))
	C.QWebView_SetHtml(this.h, html_ms)
}

func (this *QWebView) SetContent(data []byte) {
	data_alias := C.struct_miqt_string{}
	data_alias.data = (*C.char)(unsafe.Pointer(&data[0]))
	data_alias.len = C.size_t(len(data))
	C.QWebView_SetContent(this.h, data_alias)
}

func (this *QWebView) History() *QWebHistory {
	return UnsafeNewQWebHistory(unsafe.Pointer(C.QWebView_History(this.h)))
}

func (this *QWebView) Settings() *QWebSettings {
	return UnsafeNewQWebSettings(unsafe.Pointer(C.QWebView_Settings(this.h)))
}

func (this *QWebView) Title() string {
	var _ms C.struct_miqt_string = C.QWebView_Title(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebView) SetUrl(url *qt.QUrl) {
	C.QWebView_SetUrl(this.h, (*C.QUrl)(url.UnsafePointer()))
}

func (this *QWebView) Url() *qt.QUrl {
	_ret := C.QWebView_Url(this.h)
	_goptr := qt.UnsafeNewQUrl(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebView) Icon() *qt.QIcon {
	_ret := C.QWebView_Icon(this.h)
	_goptr := qt.UnsafeNewQIcon(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebView) HasSelection() bool {
	return (bool)(C.QWebView_HasSelection(this.h))
}

func (this *QWebView) SelectedText() string {
	var _ms C.struct_miqt_string = C.QWebView_SelectedText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebView) SelectedHtml() string {
	var _ms C.struct_miqt_string = C.QWebView_SelectedHtml(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebView) PageAction(action QWebPage__WebAction) *qt.QAction {
	return qt.UnsafeNewQAction(unsafe.Pointer(C.QWebView_PageAction(this.h, (C.int)(action))), nil)
}

func (this *QWebView) TriggerPageAction(action QWebPage__WebAction) {
	C.QWebView_TriggerPageAction(this.h, (C.int)(action))
}

func (this *QWebView) IsModified() bool {
	return (bool)(C.QWebView_IsModified(this.h))
}

func (this *QWebView) InputMethodQuery(property qt.InputMethodQuery) *qt.QVariant {
	_ret := C.QWebView_InputMethodQuery(this.h, (C.int)(property))
	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebView) SizeHint() *qt.QSize {
	_ret := C.QWebView_SizeHint(this.h)
	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebView) ZoomFactor() float64 {
	return (float64)(C.QWebView_ZoomFactor(this.h))
}

func (this *QWebView) SetZoomFactor(factor float64) {
	C.QWebView_SetZoomFactor(this.h, (C.double)(factor))
}

func (this *QWebView) SetTextSizeMultiplier(factor float64) {
	C.QWebView_SetTextSizeMultiplier(this.h, (C.double)(factor))
}

func (this *QWebView) TextSizeMultiplier() float64 {
	return (float64)(C.QWebView_TextSizeMultiplier(this.h))
}

func (this *QWebView) RenderHints() qt.QPainter__RenderHint {
	return (qt.QPainter__RenderHint)(C.QWebView_RenderHints(this.h))
}

func (this *QWebView) SetRenderHints(hints qt.QPainter__RenderHint) {
	C.QWebView_SetRenderHints(this.h, (C.int)(hints))
}

func (this *QWebView) SetRenderHint(hint qt.QPainter__RenderHint) {
	C.QWebView_SetRenderHint(this.h, (C.int)(hint))
}

func (this *QWebView) FindText(subString string) bool {
	subString_ms := C.struct_miqt_string{}
	subString_ms.data = C.CString(subString)
	subString_ms.len = C.size_t(len(subString))
	defer C.free(unsafe.Pointer(subString_ms.data))
	return (bool)(C.QWebView_FindText(this.h, subString_ms))
}

func (this *QWebView) Event(param1 *qt.QEvent) bool {
	return (bool)(C.QWebView_Event(this.h, (*C.QEvent)(param1.UnsafePointer())))
}

func (this *QWebView) Stop() {
	C.QWebView_Stop(this.h)
}

func (this *QWebView) Back() {
	C.QWebView_Back(this.h)
}

func (this *QWebView) Forward() {
	C.QWebView_Forward(this.h)
}

func (this *QWebView) Reload() {
	C.QWebView_Reload(this.h)
}

func (this *QWebView) Print(param1 *printsupport.QPrinter) {
	C.QWebView_Print(this.h, (*C.QPrinter)(param1.UnsafePointer()))
}

func (this *QWebView) LoadStarted() {
	C.QWebView_LoadStarted(this.h)
}
func (this *QWebView) OnLoadStarted(slot func()) {
	C.QWebView_connect_LoadStarted(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebView_LoadStarted
func miqt_exec_callback_QWebView_LoadStarted(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QWebView) LoadProgress(progress int) {
	C.QWebView_LoadProgress(this.h, (C.int)(progress))
}
func (this *QWebView) OnLoadProgress(slot func(progress int)) {
	C.QWebView_connect_LoadProgress(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebView_LoadProgress
func miqt_exec_callback_QWebView_LoadProgress(cb C.intptr_t, progress C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(progress int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(progress)

	gofunc(slotval1)
}

func (this *QWebView) LoadFinished(param1 bool) {
	C.QWebView_LoadFinished(this.h, (C.bool)(param1))
}
func (this *QWebView) OnLoadFinished(slot func(param1 bool)) {
	C.QWebView_connect_LoadFinished(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebView_LoadFinished
func miqt_exec_callback_QWebView_LoadFinished(cb C.intptr_t, param1 C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(param1)

	gofunc(slotval1)
}

func (this *QWebView) TitleChanged(title string) {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	C.QWebView_TitleChanged(this.h, title_ms)
}
func (this *QWebView) OnTitleChanged(slot func(title string)) {
	C.QWebView_connect_TitleChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebView_TitleChanged
func miqt_exec_callback_QWebView_TitleChanged(cb C.intptr_t, title C.struct_miqt_string) {
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

func (this *QWebView) StatusBarMessage(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QWebView_StatusBarMessage(this.h, text_ms)
}
func (this *QWebView) OnStatusBarMessage(slot func(text string)) {
	C.QWebView_connect_StatusBarMessage(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebView_StatusBarMessage
func miqt_exec_callback_QWebView_StatusBarMessage(cb C.intptr_t, text C.struct_miqt_string) {
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

func (this *QWebView) LinkClicked(param1 *qt.QUrl) {
	C.QWebView_LinkClicked(this.h, (*C.QUrl)(param1.UnsafePointer()))
}
func (this *QWebView) OnLinkClicked(slot func(param1 *qt.QUrl)) {
	C.QWebView_connect_LinkClicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebView_LinkClicked
func miqt_exec_callback_QWebView_LinkClicked(cb C.intptr_t, param1 *C.QUrl) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 *qt.QUrl))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQUrl(unsafe.Pointer(param1))

	gofunc(slotval1)
}

func (this *QWebView) SelectionChanged() {
	C.QWebView_SelectionChanged(this.h)
}
func (this *QWebView) OnSelectionChanged(slot func()) {
	C.QWebView_connect_SelectionChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebView_SelectionChanged
func miqt_exec_callback_QWebView_SelectionChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QWebView) IconChanged() {
	C.QWebView_IconChanged(this.h)
}
func (this *QWebView) OnIconChanged(slot func()) {
	C.QWebView_connect_IconChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebView_IconChanged
func miqt_exec_callback_QWebView_IconChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QWebView) UrlChanged(param1 *qt.QUrl) {
	C.QWebView_UrlChanged(this.h, (*C.QUrl)(param1.UnsafePointer()))
}
func (this *QWebView) OnUrlChanged(slot func(param1 *qt.QUrl)) {
	C.QWebView_connect_UrlChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebView_UrlChanged
func miqt_exec_callback_QWebView_UrlChanged(cb C.intptr_t, param1 *C.QUrl) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 *qt.QUrl))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQUrl(unsafe.Pointer(param1))

	gofunc(slotval1)
}

func QWebView_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebView_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebView_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebView_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebView_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebView_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebView_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebView_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebView) Load2(request *network.QNetworkRequest, operation network.QNetworkAccessManager__Operation) {
	C.QWebView_Load2(this.h, (*C.QNetworkRequest)(request.UnsafePointer()), (C.int)(operation))
}

func (this *QWebView) Load3(request *network.QNetworkRequest, operation network.QNetworkAccessManager__Operation, body []byte) {
	body_alias := C.struct_miqt_string{}
	body_alias.data = (*C.char)(unsafe.Pointer(&body[0]))
	body_alias.len = C.size_t(len(body))
	C.QWebView_Load3(this.h, (*C.QNetworkRequest)(request.UnsafePointer()), (C.int)(operation), body_alias)
}

func (this *QWebView) SetHtml2(html string, baseUrl *qt.QUrl) {
	html_ms := C.struct_miqt_string{}
	html_ms.data = C.CString(html)
	html_ms.len = C.size_t(len(html))
	defer C.free(unsafe.Pointer(html_ms.data))
	C.QWebView_SetHtml2(this.h, html_ms, (*C.QUrl)(baseUrl.UnsafePointer()))
}

func (this *QWebView) SetContent2(data []byte, mimeType string) {
	data_alias := C.struct_miqt_string{}
	data_alias.data = (*C.char)(unsafe.Pointer(&data[0]))
	data_alias.len = C.size_t(len(data))
	mimeType_ms := C.struct_miqt_string{}
	mimeType_ms.data = C.CString(mimeType)
	mimeType_ms.len = C.size_t(len(mimeType))
	defer C.free(unsafe.Pointer(mimeType_ms.data))
	C.QWebView_SetContent2(this.h, data_alias, mimeType_ms)
}

func (this *QWebView) SetContent3(data []byte, mimeType string, baseUrl *qt.QUrl) {
	data_alias := C.struct_miqt_string{}
	data_alias.data = (*C.char)(unsafe.Pointer(&data[0]))
	data_alias.len = C.size_t(len(data))
	mimeType_ms := C.struct_miqt_string{}
	mimeType_ms.data = C.CString(mimeType)
	mimeType_ms.len = C.size_t(len(mimeType))
	defer C.free(unsafe.Pointer(mimeType_ms.data))
	C.QWebView_SetContent3(this.h, data_alias, mimeType_ms, (*C.QUrl)(baseUrl.UnsafePointer()))
}

func (this *QWebView) TriggerPageAction2(action QWebPage__WebAction, checked bool) {
	C.QWebView_TriggerPageAction2(this.h, (C.int)(action), (C.bool)(checked))
}

func (this *QWebView) SetRenderHint2(hint qt.QPainter__RenderHint, enabled bool) {
	C.QWebView_SetRenderHint2(this.h, (C.int)(hint), (C.bool)(enabled))
}

func (this *QWebView) FindText2(subString string, options QWebPage__FindFlag) bool {
	subString_ms := C.struct_miqt_string{}
	subString_ms.data = C.CString(subString)
	subString_ms.len = C.size_t(len(subString))
	defer C.free(unsafe.Pointer(subString_ms.data))
	return (bool)(C.QWebView_FindText2(this.h, subString_ms, (C.int)(options)))
}

func (this *QWebView) callVirtualBase_InputMethodQuery(property qt.InputMethodQuery) *qt.QVariant {

	_ret := C.QWebView_virtualbase_InputMethodQuery(unsafe.Pointer(this.h), (C.int)(property))
	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QWebView) OnInputMethodQuery(slot func(super func(property qt.InputMethodQuery) *qt.QVariant, property qt.InputMethodQuery) *qt.QVariant) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWebView_override_virtual_InputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebView_InputMethodQuery
func miqt_exec_callback_QWebView_InputMethodQuery(self *C.QWebView, cb C.intptr_t, property C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(property qt.InputMethodQuery) *qt.QVariant, property qt.InputMethodQuery) *qt.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt.InputMethodQuery)(property)

	virtualReturn := gofunc((&QWebView{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}

func (this *QWebView) callVirtualBase_SizeHint() *qt.QSize {

	_ret := C.QWebView_virtualbase_SizeHint(unsafe.Pointer(this.h))
	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QWebView) OnSizeHint(slot func(super func() *qt.QSize) *qt.QSize) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWebView_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebView_SizeHint
func miqt_exec_callback_QWebView_SizeHint(self *C.QWebView, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QSize) *qt.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWebView{h: self}).callVirtualBase_SizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QWebView) callVirtualBase_Event(param1 *qt.QEvent) bool {

	return (bool)(C.QWebView_virtualbase_Event(unsafe.Pointer(this.h), (*C.QEvent)(param1.UnsafePointer())))

}
func (this *QWebView) OnEvent(slot func(super func(param1 *qt.QEvent) bool, param1 *qt.QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWebView_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebView_Event
func miqt_exec_callback_QWebView_Event(self *C.QWebView, cb C.intptr_t, param1 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QEvent) bool, param1 *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(param1))

	virtualReturn := gofunc((&QWebView{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QWebView) callVirtualBase_ResizeEvent(param1 *qt.QResizeEvent) {

	C.QWebView_virtualbase_ResizeEvent(unsafe.Pointer(this.h), (*C.QResizeEvent)(param1.UnsafePointer()))

}
func (this *QWebView) OnResizeEvent(slot func(super func(param1 *qt.QResizeEvent), param1 *qt.QResizeEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWebView_override_virtual_ResizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebView_ResizeEvent
func miqt_exec_callback_QWebView_ResizeEvent(self *C.QWebView, cb C.intptr_t, param1 *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QResizeEvent), param1 *qt.QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQResizeEvent(unsafe.Pointer(param1), nil)

	gofunc((&QWebView{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QWebView) callVirtualBase_PaintEvent(param1 *qt.QPaintEvent) {

	C.QWebView_virtualbase_PaintEvent(unsafe.Pointer(this.h), (*C.QPaintEvent)(param1.UnsafePointer()))

}
func (this *QWebView) OnPaintEvent(slot func(super func(param1 *qt.QPaintEvent), param1 *qt.QPaintEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWebView_override_virtual_PaintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebView_PaintEvent
func miqt_exec_callback_QWebView_PaintEvent(self *C.QWebView, cb C.intptr_t, param1 *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPaintEvent), param1 *qt.QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPaintEvent(unsafe.Pointer(param1), nil)

	gofunc((&QWebView{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QWebView) callVirtualBase_CreateWindow(typeVal QWebPage__WebWindowType) *QWebView {

	return UnsafeNewQWebView(unsafe.Pointer(C.QWebView_virtualbase_CreateWindow(unsafe.Pointer(this.h), (C.int)(typeVal))), nil, nil, nil)
}
func (this *QWebView) OnCreateWindow(slot func(super func(typeVal QWebPage__WebWindowType) *QWebView, typeVal QWebPage__WebWindowType) *QWebView) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWebView_override_virtual_CreateWindow(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebView_CreateWindow
func miqt_exec_callback_QWebView_CreateWindow(self *C.QWebView, cb C.intptr_t, typeVal C.int) *C.QWebView {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(typeVal QWebPage__WebWindowType) *QWebView, typeVal QWebPage__WebWindowType) *QWebView)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QWebPage__WebWindowType)(typeVal)

	virtualReturn := gofunc((&QWebView{h: self}).callVirtualBase_CreateWindow, slotval1)

	return virtualReturn.cPointer()

}

func (this *QWebView) callVirtualBase_ChangeEvent(param1 *qt.QEvent) {

	C.QWebView_virtualbase_ChangeEvent(unsafe.Pointer(this.h), (*C.QEvent)(param1.UnsafePointer()))

}
func (this *QWebView) OnChangeEvent(slot func(super func(param1 *qt.QEvent), param1 *qt.QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWebView_override_virtual_ChangeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebView_ChangeEvent
func miqt_exec_callback_QWebView_ChangeEvent(self *C.QWebView, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QEvent), param1 *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(param1))

	gofunc((&QWebView{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QWebView) callVirtualBase_MouseMoveEvent(param1 *qt.QMouseEvent) {

	C.QWebView_virtualbase_MouseMoveEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(param1.UnsafePointer()))

}
func (this *QWebView) OnMouseMoveEvent(slot func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWebView_override_virtual_MouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebView_MouseMoveEvent
func miqt_exec_callback_QWebView_MouseMoveEvent(self *C.QWebView, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(param1), nil, nil)

	gofunc((&QWebView{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QWebView) callVirtualBase_MousePressEvent(param1 *qt.QMouseEvent) {

	C.QWebView_virtualbase_MousePressEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(param1.UnsafePointer()))

}
func (this *QWebView) OnMousePressEvent(slot func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWebView_override_virtual_MousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebView_MousePressEvent
func miqt_exec_callback_QWebView_MousePressEvent(self *C.QWebView, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(param1), nil, nil)

	gofunc((&QWebView{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QWebView) callVirtualBase_MouseDoubleClickEvent(param1 *qt.QMouseEvent) {

	C.QWebView_virtualbase_MouseDoubleClickEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(param1.UnsafePointer()))

}
func (this *QWebView) OnMouseDoubleClickEvent(slot func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWebView_override_virtual_MouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebView_MouseDoubleClickEvent
func miqt_exec_callback_QWebView_MouseDoubleClickEvent(self *C.QWebView, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(param1), nil, nil)

	gofunc((&QWebView{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QWebView) callVirtualBase_MouseReleaseEvent(param1 *qt.QMouseEvent) {

	C.QWebView_virtualbase_MouseReleaseEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(param1.UnsafePointer()))

}
func (this *QWebView) OnMouseReleaseEvent(slot func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWebView_override_virtual_MouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebView_MouseReleaseEvent
func miqt_exec_callback_QWebView_MouseReleaseEvent(self *C.QWebView, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(param1), nil, nil)

	gofunc((&QWebView{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QWebView) callVirtualBase_ContextMenuEvent(param1 *qt.QContextMenuEvent) {

	C.QWebView_virtualbase_ContextMenuEvent(unsafe.Pointer(this.h), (*C.QContextMenuEvent)(param1.UnsafePointer()))

}
func (this *QWebView) OnContextMenuEvent(slot func(super func(param1 *qt.QContextMenuEvent), param1 *qt.QContextMenuEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWebView_override_virtual_ContextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebView_ContextMenuEvent
func miqt_exec_callback_QWebView_ContextMenuEvent(self *C.QWebView, cb C.intptr_t, param1 *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QContextMenuEvent), param1 *qt.QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQContextMenuEvent(unsafe.Pointer(param1), nil, nil)

	gofunc((&QWebView{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QWebView) callVirtualBase_WheelEvent(param1 *qt.QWheelEvent) {

	C.QWebView_virtualbase_WheelEvent(unsafe.Pointer(this.h), (*C.QWheelEvent)(param1.UnsafePointer()))

}
func (this *QWebView) OnWheelEvent(slot func(super func(param1 *qt.QWheelEvent), param1 *qt.QWheelEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWebView_override_virtual_WheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebView_WheelEvent
func miqt_exec_callback_QWebView_WheelEvent(self *C.QWebView, cb C.intptr_t, param1 *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QWheelEvent), param1 *qt.QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQWheelEvent(unsafe.Pointer(param1), nil, nil)

	gofunc((&QWebView{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QWebView) callVirtualBase_KeyPressEvent(param1 *qt.QKeyEvent) {

	C.QWebView_virtualbase_KeyPressEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(param1.UnsafePointer()))

}
func (this *QWebView) OnKeyPressEvent(slot func(super func(param1 *qt.QKeyEvent), param1 *qt.QKeyEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWebView_override_virtual_KeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebView_KeyPressEvent
func miqt_exec_callback_QWebView_KeyPressEvent(self *C.QWebView, cb C.intptr_t, param1 *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QKeyEvent), param1 *qt.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQKeyEvent(unsafe.Pointer(param1), nil, nil)

	gofunc((&QWebView{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QWebView) callVirtualBase_KeyReleaseEvent(param1 *qt.QKeyEvent) {

	C.QWebView_virtualbase_KeyReleaseEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(param1.UnsafePointer()))

}
func (this *QWebView) OnKeyReleaseEvent(slot func(super func(param1 *qt.QKeyEvent), param1 *qt.QKeyEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWebView_override_virtual_KeyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebView_KeyReleaseEvent
func miqt_exec_callback_QWebView_KeyReleaseEvent(self *C.QWebView, cb C.intptr_t, param1 *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QKeyEvent), param1 *qt.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQKeyEvent(unsafe.Pointer(param1), nil, nil)

	gofunc((&QWebView{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QWebView) callVirtualBase_DragEnterEvent(param1 *qt.QDragEnterEvent) {

	C.QWebView_virtualbase_DragEnterEvent(unsafe.Pointer(this.h), (*C.QDragEnterEvent)(param1.UnsafePointer()))

}
func (this *QWebView) OnDragEnterEvent(slot func(super func(param1 *qt.QDragEnterEvent), param1 *qt.QDragEnterEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWebView_override_virtual_DragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebView_DragEnterEvent
func miqt_exec_callback_QWebView_DragEnterEvent(self *C.QWebView, cb C.intptr_t, param1 *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QDragEnterEvent), param1 *qt.QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDragEnterEvent(unsafe.Pointer(param1), nil, nil, nil)

	gofunc((&QWebView{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QWebView) callVirtualBase_DragLeaveEvent(param1 *qt.QDragLeaveEvent) {

	C.QWebView_virtualbase_DragLeaveEvent(unsafe.Pointer(this.h), (*C.QDragLeaveEvent)(param1.UnsafePointer()))

}
func (this *QWebView) OnDragLeaveEvent(slot func(super func(param1 *qt.QDragLeaveEvent), param1 *qt.QDragLeaveEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWebView_override_virtual_DragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebView_DragLeaveEvent
func miqt_exec_callback_QWebView_DragLeaveEvent(self *C.QWebView, cb C.intptr_t, param1 *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QDragLeaveEvent), param1 *qt.QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDragLeaveEvent(unsafe.Pointer(param1), nil)

	gofunc((&QWebView{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QWebView) callVirtualBase_DragMoveEvent(param1 *qt.QDragMoveEvent) {

	C.QWebView_virtualbase_DragMoveEvent(unsafe.Pointer(this.h), (*C.QDragMoveEvent)(param1.UnsafePointer()))

}
func (this *QWebView) OnDragMoveEvent(slot func(super func(param1 *qt.QDragMoveEvent), param1 *qt.QDragMoveEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWebView_override_virtual_DragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebView_DragMoveEvent
func miqt_exec_callback_QWebView_DragMoveEvent(self *C.QWebView, cb C.intptr_t, param1 *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QDragMoveEvent), param1 *qt.QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDragMoveEvent(unsafe.Pointer(param1), nil, nil)

	gofunc((&QWebView{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QWebView) callVirtualBase_DropEvent(param1 *qt.QDropEvent) {

	C.QWebView_virtualbase_DropEvent(unsafe.Pointer(this.h), (*C.QDropEvent)(param1.UnsafePointer()))

}
func (this *QWebView) OnDropEvent(slot func(super func(param1 *qt.QDropEvent), param1 *qt.QDropEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWebView_override_virtual_DropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebView_DropEvent
func miqt_exec_callback_QWebView_DropEvent(self *C.QWebView, cb C.intptr_t, param1 *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QDropEvent), param1 *qt.QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDropEvent(unsafe.Pointer(param1), nil)

	gofunc((&QWebView{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QWebView) callVirtualBase_FocusInEvent(param1 *qt.QFocusEvent) {

	C.QWebView_virtualbase_FocusInEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(param1.UnsafePointer()))

}
func (this *QWebView) OnFocusInEvent(slot func(super func(param1 *qt.QFocusEvent), param1 *qt.QFocusEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWebView_override_virtual_FocusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebView_FocusInEvent
func miqt_exec_callback_QWebView_FocusInEvent(self *C.QWebView, cb C.intptr_t, param1 *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QFocusEvent), param1 *qt.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFocusEvent(unsafe.Pointer(param1), nil)

	gofunc((&QWebView{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QWebView) callVirtualBase_FocusOutEvent(param1 *qt.QFocusEvent) {

	C.QWebView_virtualbase_FocusOutEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(param1.UnsafePointer()))

}
func (this *QWebView) OnFocusOutEvent(slot func(super func(param1 *qt.QFocusEvent), param1 *qt.QFocusEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWebView_override_virtual_FocusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebView_FocusOutEvent
func miqt_exec_callback_QWebView_FocusOutEvent(self *C.QWebView, cb C.intptr_t, param1 *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QFocusEvent), param1 *qt.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFocusEvent(unsafe.Pointer(param1), nil)

	gofunc((&QWebView{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QWebView) callVirtualBase_InputMethodEvent(param1 *qt.QInputMethodEvent) {

	C.QWebView_virtualbase_InputMethodEvent(unsafe.Pointer(this.h), (*C.QInputMethodEvent)(param1.UnsafePointer()))

}
func (this *QWebView) OnInputMethodEvent(slot func(super func(param1 *qt.QInputMethodEvent), param1 *qt.QInputMethodEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWebView_override_virtual_InputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebView_InputMethodEvent
func miqt_exec_callback_QWebView_InputMethodEvent(self *C.QWebView, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QInputMethodEvent), param1 *qt.QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQInputMethodEvent(unsafe.Pointer(param1), nil)

	gofunc((&QWebView{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QWebView) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QWebView_virtualbase_FocusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QWebView) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWebView_override_virtual_FocusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebView_FocusNextPrevChild
func miqt_exec_callback_QWebView_FocusNextPrevChild(self *C.QWebView, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QWebView{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QWebView) callVirtualBase_DevType() int {

	return (int)(C.QWebView_virtualbase_DevType(unsafe.Pointer(this.h)))

}
func (this *QWebView) OnDevType(slot func(super func() int) int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWebView_override_virtual_DevType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebView_DevType
func miqt_exec_callback_QWebView_DevType(self *C.QWebView, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWebView{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QWebView) callVirtualBase_SetVisible(visible bool) {

	C.QWebView_virtualbase_SetVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QWebView) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWebView_override_virtual_SetVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebView_SetVisible
func miqt_exec_callback_QWebView_SetVisible(self *C.QWebView, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QWebView{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QWebView) callVirtualBase_MinimumSizeHint() *qt.QSize {

	_ret := C.QWebView_virtualbase_MinimumSizeHint(unsafe.Pointer(this.h))
	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QWebView) OnMinimumSizeHint(slot func(super func() *qt.QSize) *qt.QSize) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWebView_override_virtual_MinimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebView_MinimumSizeHint
func miqt_exec_callback_QWebView_MinimumSizeHint(self *C.QWebView, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QSize) *qt.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWebView{h: self}).callVirtualBase_MinimumSizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QWebView) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QWebView_virtualbase_HeightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QWebView) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWebView_override_virtual_HeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebView_HeightForWidth
func miqt_exec_callback_QWebView_HeightForWidth(self *C.QWebView, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QWebView{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QWebView) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QWebView_virtualbase_HasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QWebView) OnHasHeightForWidth(slot func(super func() bool) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWebView_override_virtual_HasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebView_HasHeightForWidth
func miqt_exec_callback_QWebView_HasHeightForWidth(self *C.QWebView, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWebView{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QWebView) callVirtualBase_PaintEngine() *qt.QPaintEngine {

	return qt.UnsafeNewQPaintEngine(unsafe.Pointer(C.QWebView_virtualbase_PaintEngine(unsafe.Pointer(this.h))))
}
func (this *QWebView) OnPaintEngine(slot func(super func() *qt.QPaintEngine) *qt.QPaintEngine) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWebView_override_virtual_PaintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebView_PaintEngine
func miqt_exec_callback_QWebView_PaintEngine(self *C.QWebView, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QPaintEngine) *qt.QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWebView{h: self}).callVirtualBase_PaintEngine)

	return (*C.QPaintEngine)(virtualReturn.UnsafePointer())

}

func (this *QWebView) callVirtualBase_EnterEvent(event *qt.QEvent) {

	C.QWebView_virtualbase_EnterEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QWebView) OnEnterEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWebView_override_virtual_EnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebView_EnterEvent
func miqt_exec_callback_QWebView_EnterEvent(self *C.QWebView, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QWebView{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QWebView) callVirtualBase_LeaveEvent(event *qt.QEvent) {

	C.QWebView_virtualbase_LeaveEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QWebView) OnLeaveEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWebView_override_virtual_LeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebView_LeaveEvent
func miqt_exec_callback_QWebView_LeaveEvent(self *C.QWebView, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QWebView{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QWebView) callVirtualBase_MoveEvent(event *qt.QMoveEvent) {

	C.QWebView_virtualbase_MoveEvent(unsafe.Pointer(this.h), (*C.QMoveEvent)(event.UnsafePointer()))

}
func (this *QWebView) OnMoveEvent(slot func(super func(event *qt.QMoveEvent), event *qt.QMoveEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWebView_override_virtual_MoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebView_MoveEvent
func miqt_exec_callback_QWebView_MoveEvent(self *C.QWebView, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMoveEvent), event *qt.QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMoveEvent(unsafe.Pointer(event), nil)

	gofunc((&QWebView{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QWebView) callVirtualBase_CloseEvent(event *qt.QCloseEvent) {

	C.QWebView_virtualbase_CloseEvent(unsafe.Pointer(this.h), (*C.QCloseEvent)(event.UnsafePointer()))

}
func (this *QWebView) OnCloseEvent(slot func(super func(event *qt.QCloseEvent), event *qt.QCloseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWebView_override_virtual_CloseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebView_CloseEvent
func miqt_exec_callback_QWebView_CloseEvent(self *C.QWebView, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QCloseEvent), event *qt.QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQCloseEvent(unsafe.Pointer(event), nil)

	gofunc((&QWebView{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QWebView) callVirtualBase_TabletEvent(event *qt.QTabletEvent) {

	C.QWebView_virtualbase_TabletEvent(unsafe.Pointer(this.h), (*C.QTabletEvent)(event.UnsafePointer()))

}
func (this *QWebView) OnTabletEvent(slot func(super func(event *qt.QTabletEvent), event *qt.QTabletEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWebView_override_virtual_TabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebView_TabletEvent
func miqt_exec_callback_QWebView_TabletEvent(self *C.QWebView, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTabletEvent), event *qt.QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTabletEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QWebView{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QWebView) callVirtualBase_ActionEvent(event *qt.QActionEvent) {

	C.QWebView_virtualbase_ActionEvent(unsafe.Pointer(this.h), (*C.QActionEvent)(event.UnsafePointer()))

}
func (this *QWebView) OnActionEvent(slot func(super func(event *qt.QActionEvent), event *qt.QActionEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWebView_override_virtual_ActionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebView_ActionEvent
func miqt_exec_callback_QWebView_ActionEvent(self *C.QWebView, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QActionEvent), event *qt.QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQActionEvent(unsafe.Pointer(event), nil)

	gofunc((&QWebView{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QWebView) callVirtualBase_ShowEvent(event *qt.QShowEvent) {

	C.QWebView_virtualbase_ShowEvent(unsafe.Pointer(this.h), (*C.QShowEvent)(event.UnsafePointer()))

}
func (this *QWebView) OnShowEvent(slot func(super func(event *qt.QShowEvent), event *qt.QShowEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWebView_override_virtual_ShowEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebView_ShowEvent
func miqt_exec_callback_QWebView_ShowEvent(self *C.QWebView, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QShowEvent), event *qt.QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQShowEvent(unsafe.Pointer(event), nil)

	gofunc((&QWebView{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QWebView) callVirtualBase_HideEvent(event *qt.QHideEvent) {

	C.QWebView_virtualbase_HideEvent(unsafe.Pointer(this.h), (*C.QHideEvent)(event.UnsafePointer()))

}
func (this *QWebView) OnHideEvent(slot func(super func(event *qt.QHideEvent), event *qt.QHideEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWebView_override_virtual_HideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebView_HideEvent
func miqt_exec_callback_QWebView_HideEvent(self *C.QWebView, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QHideEvent), event *qt.QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQHideEvent(unsafe.Pointer(event), nil)

	gofunc((&QWebView{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QWebView) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *int64) bool {
	eventType_alias := C.struct_miqt_string{}
	eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QWebView_virtualbase_NativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.long)(unsafe.Pointer(result))))

}
func (this *QWebView) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWebView_override_virtual_NativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebView_NativeEvent
func miqt_exec_callback_QWebView_NativeEvent(self *C.QWebView, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.long) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var eventType_bytearray C.struct_miqt_string = eventType
	eventType_ret := C.GoBytes(unsafe.Pointer(eventType_bytearray.data), C.int(int64(eventType_bytearray.len)))
	C.free(unsafe.Pointer(eventType_bytearray.data))
	slotval1 := eventType_ret
	slotval2 := (unsafe.Pointer)(message)

	slotval3 := (*int64)(unsafe.Pointer(result))

	virtualReturn := gofunc((&QWebView{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QWebView) callVirtualBase_Metric(param1 qt.QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QWebView_virtualbase_Metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QWebView) OnMetric(slot func(super func(param1 qt.QPaintDevice__PaintDeviceMetric) int, param1 qt.QPaintDevice__PaintDeviceMetric) int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWebView_override_virtual_Metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebView_Metric
func miqt_exec_callback_QWebView_Metric(self *C.QWebView, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 qt.QPaintDevice__PaintDeviceMetric) int, param1 qt.QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt.QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QWebView{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QWebView) callVirtualBase_InitPainter(painter *qt.QPainter) {

	C.QWebView_virtualbase_InitPainter(unsafe.Pointer(this.h), (*C.QPainter)(painter.UnsafePointer()))

}
func (this *QWebView) OnInitPainter(slot func(super func(painter *qt.QPainter), painter *qt.QPainter)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWebView_override_virtual_InitPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebView_InitPainter
func miqt_exec_callback_QWebView_InitPainter(self *C.QWebView, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *qt.QPainter), painter *qt.QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(painter))

	gofunc((&QWebView{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QWebView) callVirtualBase_Redirected(offset *qt.QPoint) *qt.QPaintDevice {

	return qt.UnsafeNewQPaintDevice(unsafe.Pointer(C.QWebView_virtualbase_Redirected(unsafe.Pointer(this.h), (*C.QPoint)(offset.UnsafePointer()))))
}
func (this *QWebView) OnRedirected(slot func(super func(offset *qt.QPoint) *qt.QPaintDevice, offset *qt.QPoint) *qt.QPaintDevice) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWebView_override_virtual_Redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebView_Redirected
func miqt_exec_callback_QWebView_Redirected(self *C.QWebView, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *qt.QPoint) *qt.QPaintDevice, offset *qt.QPoint) *qt.QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPoint(unsafe.Pointer(offset))

	virtualReturn := gofunc((&QWebView{h: self}).callVirtualBase_Redirected, slotval1)

	return (*C.QPaintDevice)(virtualReturn.UnsafePointer())

}

func (this *QWebView) callVirtualBase_SharedPainter() *qt.QPainter {

	return qt.UnsafeNewQPainter(unsafe.Pointer(C.QWebView_virtualbase_SharedPainter(unsafe.Pointer(this.h))))
}
func (this *QWebView) OnSharedPainter(slot func(super func() *qt.QPainter) *qt.QPainter) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWebView_override_virtual_SharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebView_SharedPainter
func miqt_exec_callback_QWebView_SharedPainter(self *C.QWebView, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QPainter) *qt.QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWebView{h: self}).callVirtualBase_SharedPainter)

	return (*C.QPainter)(virtualReturn.UnsafePointer())

}

// Delete this object from C++ memory.
func (this *QWebView) Delete() {
	C.QWebView_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWebView) GoGC() {
	runtime.SetFinalizer(this, func(this *QWebView) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
