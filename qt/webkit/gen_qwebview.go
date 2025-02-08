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
	h *C.QWebView
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
func newQWebView(h *C.QWebView) *QWebView {
	if h == nil {
		return nil
	}
	var outptr_QWidget *C.QWidget = nil
	C.QWebView_virtbase(h, &outptr_QWidget)

	return &QWebView{h: h,
		QWidget: qt.UnsafeNewQWidget(unsafe.Pointer(outptr_QWidget))}
}

// UnsafeNewQWebView constructs the type using only unsafe pointers.
func UnsafeNewQWebView(h unsafe.Pointer) *QWebView {
	return newQWebView((*C.QWebView)(h))
}

// NewQWebView constructs a new QWebView object.
func NewQWebView(parent *qt.QWidget) *QWebView {

	return newQWebView(C.QWebView_new((*C.QWidget)(parent.UnsafePointer())))
}

// NewQWebView2 constructs a new QWebView object.
func NewQWebView2() *QWebView {

	return newQWebView(C.QWebView_new2())
}

func (this *QWebView) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QWebView_metaObject(this.h)))
}

func (this *QWebView) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QWebView_metacast(this.h, param1_Cstring))
}

func QWebView_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QWebView_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebView_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QWebView_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebView) Page() *QWebPage {
	return newQWebPage(C.QWebView_page(this.h))
}

func (this *QWebView) SetPage(page *QWebPage) {
	C.QWebView_setPage(this.h, page.cPointer())
}

func (this *QWebView) Load(url *qt.QUrl) {
	C.QWebView_load(this.h, (*C.QUrl)(url.UnsafePointer()))
}

func (this *QWebView) LoadWithRequest(request *network.QNetworkRequest) {
	C.QWebView_loadWithRequest(this.h, (*C.QNetworkRequest)(request.UnsafePointer()))
}

func (this *QWebView) SetHtml(html string) {
	html_ms := C.struct_miqt_string{}
	html_ms.data = C.CString(html)
	html_ms.len = C.size_t(len(html))
	defer C.free(unsafe.Pointer(html_ms.data))
	C.QWebView_setHtml(this.h, html_ms)
}

func (this *QWebView) SetContent(data []byte) {
	data_alias := C.struct_miqt_string{}
	if len(data) > 0 {
		data_alias.data = (*C.char)(unsafe.Pointer(&data[0]))
	} else {
		data_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	data_alias.len = C.size_t(len(data))
	C.QWebView_setContent(this.h, data_alias)
}

func (this *QWebView) History() *QWebHistory {
	return newQWebHistory(C.QWebView_history(this.h))
}

func (this *QWebView) Settings() *QWebSettings {
	return newQWebSettings(C.QWebView_settings(this.h))
}

func (this *QWebView) Title() string {
	var _ms C.struct_miqt_string = C.QWebView_title(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebView) SetUrl(url *qt.QUrl) {
	C.QWebView_setUrl(this.h, (*C.QUrl)(url.UnsafePointer()))
}

func (this *QWebView) Url() *qt.QUrl {
	_goptr := qt.UnsafeNewQUrl(unsafe.Pointer(C.QWebView_url(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebView) Icon() *qt.QIcon {
	_goptr := qt.UnsafeNewQIcon(unsafe.Pointer(C.QWebView_icon(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebView) HasSelection() bool {
	return (bool)(C.QWebView_hasSelection(this.h))
}

func (this *QWebView) SelectedText() string {
	var _ms C.struct_miqt_string = C.QWebView_selectedText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebView) SelectedHtml() string {
	var _ms C.struct_miqt_string = C.QWebView_selectedHtml(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebView) PageAction(action QWebPage__WebAction) *qt.QAction {
	return qt.UnsafeNewQAction(unsafe.Pointer(C.QWebView_pageAction(this.h, (C.int)(action))))
}

func (this *QWebView) TriggerPageAction(action QWebPage__WebAction) {
	C.QWebView_triggerPageAction(this.h, (C.int)(action))
}

func (this *QWebView) IsModified() bool {
	return (bool)(C.QWebView_isModified(this.h))
}

func (this *QWebView) InputMethodQuery(property qt.InputMethodQuery) *qt.QVariant {
	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QWebView_inputMethodQuery(this.h, (C.int)(property))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebView) SizeHint() *qt.QSize {
	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QWebView_sizeHint(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebView) ZoomFactor() float64 {
	return (float64)(C.QWebView_zoomFactor(this.h))
}

func (this *QWebView) SetZoomFactor(factor float64) {
	C.QWebView_setZoomFactor(this.h, (C.double)(factor))
}

func (this *QWebView) SetTextSizeMultiplier(factor float64) {
	C.QWebView_setTextSizeMultiplier(this.h, (C.double)(factor))
}

func (this *QWebView) TextSizeMultiplier() float64 {
	return (float64)(C.QWebView_textSizeMultiplier(this.h))
}

func (this *QWebView) RenderHints() qt.QPainter__RenderHint {
	return (qt.QPainter__RenderHint)(C.QWebView_renderHints(this.h))
}

func (this *QWebView) SetRenderHints(hints qt.QPainter__RenderHint) {
	C.QWebView_setRenderHints(this.h, (C.int)(hints))
}

func (this *QWebView) SetRenderHint(hint qt.QPainter__RenderHint) {
	C.QWebView_setRenderHint(this.h, (C.int)(hint))
}

func (this *QWebView) FindText(subString string) bool {
	subString_ms := C.struct_miqt_string{}
	subString_ms.data = C.CString(subString)
	subString_ms.len = C.size_t(len(subString))
	defer C.free(unsafe.Pointer(subString_ms.data))
	return (bool)(C.QWebView_findText(this.h, subString_ms))
}

func (this *QWebView) Event(param1 *qt.QEvent) bool {
	return (bool)(C.QWebView_event(this.h, (*C.QEvent)(param1.UnsafePointer())))
}

func (this *QWebView) Stop() {
	C.QWebView_stop(this.h)
}

func (this *QWebView) Back() {
	C.QWebView_back(this.h)
}

func (this *QWebView) Forward() {
	C.QWebView_forward(this.h)
}

func (this *QWebView) Reload() {
	C.QWebView_reload(this.h)
}

func (this *QWebView) Print(param1 *printsupport.QPrinter) {
	C.QWebView_print(this.h, (*C.QPrinter)(param1.UnsafePointer()))
}

func (this *QWebView) LoadStarted() {
	C.QWebView_loadStarted(this.h)
}
func (this *QWebView) OnLoadStarted(slot func()) {
	C.QWebView_connect_loadStarted(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebView_loadStarted
func miqt_exec_callback_QWebView_loadStarted(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QWebView) LoadProgress(progress int) {
	C.QWebView_loadProgress(this.h, (C.int)(progress))
}
func (this *QWebView) OnLoadProgress(slot func(progress int)) {
	C.QWebView_connect_loadProgress(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebView_loadProgress
func miqt_exec_callback_QWebView_loadProgress(cb C.intptr_t, progress C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(progress int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(progress)

	gofunc(slotval1)
}

func (this *QWebView) LoadFinished(param1 bool) {
	C.QWebView_loadFinished(this.h, (C.bool)(param1))
}
func (this *QWebView) OnLoadFinished(slot func(param1 bool)) {
	C.QWebView_connect_loadFinished(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebView_loadFinished
func miqt_exec_callback_QWebView_loadFinished(cb C.intptr_t, param1 C.bool) {
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
	C.QWebView_titleChanged(this.h, title_ms)
}
func (this *QWebView) OnTitleChanged(slot func(title string)) {
	C.QWebView_connect_titleChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebView_titleChanged
func miqt_exec_callback_QWebView_titleChanged(cb C.intptr_t, title C.struct_miqt_string) {
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
	C.QWebView_statusBarMessage(this.h, text_ms)
}
func (this *QWebView) OnStatusBarMessage(slot func(text string)) {
	C.QWebView_connect_statusBarMessage(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebView_statusBarMessage
func miqt_exec_callback_QWebView_statusBarMessage(cb C.intptr_t, text C.struct_miqt_string) {
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
	C.QWebView_linkClicked(this.h, (*C.QUrl)(param1.UnsafePointer()))
}
func (this *QWebView) OnLinkClicked(slot func(param1 *qt.QUrl)) {
	C.QWebView_connect_linkClicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebView_linkClicked
func miqt_exec_callback_QWebView_linkClicked(cb C.intptr_t, param1 *C.QUrl) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 *qt.QUrl))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQUrl(unsafe.Pointer(param1))

	gofunc(slotval1)
}

func (this *QWebView) SelectionChanged() {
	C.QWebView_selectionChanged(this.h)
}
func (this *QWebView) OnSelectionChanged(slot func()) {
	C.QWebView_connect_selectionChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebView_selectionChanged
func miqt_exec_callback_QWebView_selectionChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QWebView) IconChanged() {
	C.QWebView_iconChanged(this.h)
}
func (this *QWebView) OnIconChanged(slot func()) {
	C.QWebView_connect_iconChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebView_iconChanged
func miqt_exec_callback_QWebView_iconChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QWebView) UrlChanged(param1 *qt.QUrl) {
	C.QWebView_urlChanged(this.h, (*C.QUrl)(param1.UnsafePointer()))
}
func (this *QWebView) OnUrlChanged(slot func(param1 *qt.QUrl)) {
	C.QWebView_connect_urlChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebView_urlChanged
func miqt_exec_callback_QWebView_urlChanged(cb C.intptr_t, param1 *C.QUrl) {
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
	var _ms C.struct_miqt_string = C.QWebView_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebView_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebView_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebView_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebView_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebView_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebView_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebView) Load2(request *network.QNetworkRequest, operation network.QNetworkAccessManager__Operation) {
	C.QWebView_load2(this.h, (*C.QNetworkRequest)(request.UnsafePointer()), (C.int)(operation))
}

func (this *QWebView) Load3(request *network.QNetworkRequest, operation network.QNetworkAccessManager__Operation, body []byte) {
	body_alias := C.struct_miqt_string{}
	if len(body) > 0 {
		body_alias.data = (*C.char)(unsafe.Pointer(&body[0]))
	} else {
		body_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	body_alias.len = C.size_t(len(body))
	C.QWebView_load3(this.h, (*C.QNetworkRequest)(request.UnsafePointer()), (C.int)(operation), body_alias)
}

func (this *QWebView) SetHtml2(html string, baseUrl *qt.QUrl) {
	html_ms := C.struct_miqt_string{}
	html_ms.data = C.CString(html)
	html_ms.len = C.size_t(len(html))
	defer C.free(unsafe.Pointer(html_ms.data))
	C.QWebView_setHtml2(this.h, html_ms, (*C.QUrl)(baseUrl.UnsafePointer()))
}

func (this *QWebView) SetContent2(data []byte, mimeType string) {
	data_alias := C.struct_miqt_string{}
	if len(data) > 0 {
		data_alias.data = (*C.char)(unsafe.Pointer(&data[0]))
	} else {
		data_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	data_alias.len = C.size_t(len(data))
	mimeType_ms := C.struct_miqt_string{}
	mimeType_ms.data = C.CString(mimeType)
	mimeType_ms.len = C.size_t(len(mimeType))
	defer C.free(unsafe.Pointer(mimeType_ms.data))
	C.QWebView_setContent2(this.h, data_alias, mimeType_ms)
}

func (this *QWebView) SetContent3(data []byte, mimeType string, baseUrl *qt.QUrl) {
	data_alias := C.struct_miqt_string{}
	if len(data) > 0 {
		data_alias.data = (*C.char)(unsafe.Pointer(&data[0]))
	} else {
		data_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	data_alias.len = C.size_t(len(data))
	mimeType_ms := C.struct_miqt_string{}
	mimeType_ms.data = C.CString(mimeType)
	mimeType_ms.len = C.size_t(len(mimeType))
	defer C.free(unsafe.Pointer(mimeType_ms.data))
	C.QWebView_setContent3(this.h, data_alias, mimeType_ms, (*C.QUrl)(baseUrl.UnsafePointer()))
}

func (this *QWebView) TriggerPageAction2(action QWebPage__WebAction, checked bool) {
	C.QWebView_triggerPageAction2(this.h, (C.int)(action), (C.bool)(checked))
}

func (this *QWebView) SetRenderHint2(hint qt.QPainter__RenderHint, enabled bool) {
	C.QWebView_setRenderHint2(this.h, (C.int)(hint), (C.bool)(enabled))
}

func (this *QWebView) FindText2(subString string, options QWebPage__FindFlag) bool {
	subString_ms := C.struct_miqt_string{}
	subString_ms.data = C.CString(subString)
	subString_ms.len = C.size_t(len(subString))
	defer C.free(unsafe.Pointer(subString_ms.data))
	return (bool)(C.QWebView_findText2(this.h, subString_ms, (C.int)(options)))
}

// UpdateMicroFocus can only be called from a QWebView that was directly constructed.
func (this *QWebView) UpdateMicroFocus() {

	var _dynamic_cast_ok C.bool = false
	C.QWebView_protectedbase_updateMicroFocus(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Create can only be called from a QWebView that was directly constructed.
func (this *QWebView) Create() {

	var _dynamic_cast_ok C.bool = false
	C.QWebView_protectedbase_create(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Destroy can only be called from a QWebView that was directly constructed.
func (this *QWebView) Destroy() {

	var _dynamic_cast_ok C.bool = false
	C.QWebView_protectedbase_destroy(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// FocusNextChild can only be called from a QWebView that was directly constructed.
func (this *QWebView) FocusNextChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QWebView_protectedbase_focusNextChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// FocusPreviousChild can only be called from a QWebView that was directly constructed.
func (this *QWebView) FocusPreviousChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QWebView_protectedbase_focusPreviousChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a QWebView that was directly constructed.
func (this *QWebView) Sender() *qt.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt.UnsafeNewQObject(unsafe.Pointer(C.QWebView_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QWebView that was directly constructed.
func (this *QWebView) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QWebView_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QWebView that was directly constructed.
func (this *QWebView) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QWebView_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QWebView that was directly constructed.
func (this *QWebView) IsSignalConnected(signal *qt.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QWebView_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QWebView) callVirtualBase_InputMethodQuery(property qt.InputMethodQuery) *qt.QVariant {

	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QWebView_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(property))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QWebView) OnInputMethodQuery(slot func(super func(property qt.InputMethodQuery) *qt.QVariant, property qt.InputMethodQuery) *qt.QVariant) {
	ok := C.QWebView_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebView_inputMethodQuery
func miqt_exec_callback_QWebView_inputMethodQuery(self *C.QWebView, cb C.intptr_t, property C.int) *C.QVariant {
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

	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QWebView_virtualbase_sizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QWebView) OnSizeHint(slot func(super func() *qt.QSize) *qt.QSize) {
	ok := C.QWebView_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebView_sizeHint
func miqt_exec_callback_QWebView_sizeHint(self *C.QWebView, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QSize) *qt.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWebView{h: self}).callVirtualBase_SizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QWebView) callVirtualBase_Event(param1 *qt.QEvent) bool {

	return (bool)(C.QWebView_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(param1.UnsafePointer())))

}
func (this *QWebView) OnEvent(slot func(super func(param1 *qt.QEvent) bool, param1 *qt.QEvent) bool) {
	ok := C.QWebView_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebView_event
func miqt_exec_callback_QWebView_event(self *C.QWebView, cb C.intptr_t, param1 *C.QEvent) C.bool {
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

	C.QWebView_virtualbase_resizeEvent(unsafe.Pointer(this.h), (*C.QResizeEvent)(param1.UnsafePointer()))

}
func (this *QWebView) OnResizeEvent(slot func(super func(param1 *qt.QResizeEvent), param1 *qt.QResizeEvent)) {
	ok := C.QWebView_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebView_resizeEvent
func miqt_exec_callback_QWebView_resizeEvent(self *C.QWebView, cb C.intptr_t, param1 *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QResizeEvent), param1 *qt.QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQResizeEvent(unsafe.Pointer(param1))

	gofunc((&QWebView{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QWebView) callVirtualBase_PaintEvent(param1 *qt.QPaintEvent) {

	C.QWebView_virtualbase_paintEvent(unsafe.Pointer(this.h), (*C.QPaintEvent)(param1.UnsafePointer()))

}
func (this *QWebView) OnPaintEvent(slot func(super func(param1 *qt.QPaintEvent), param1 *qt.QPaintEvent)) {
	ok := C.QWebView_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebView_paintEvent
func miqt_exec_callback_QWebView_paintEvent(self *C.QWebView, cb C.intptr_t, param1 *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPaintEvent), param1 *qt.QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPaintEvent(unsafe.Pointer(param1))

	gofunc((&QWebView{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QWebView) callVirtualBase_CreateWindow(typeVal QWebPage__WebWindowType) *QWebView {

	return newQWebView(C.QWebView_virtualbase_createWindow(unsafe.Pointer(this.h), (C.int)(typeVal)))

}
func (this *QWebView) OnCreateWindow(slot func(super func(typeVal QWebPage__WebWindowType) *QWebView, typeVal QWebPage__WebWindowType) *QWebView) {
	ok := C.QWebView_override_virtual_createWindow(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebView_createWindow
func miqt_exec_callback_QWebView_createWindow(self *C.QWebView, cb C.intptr_t, typeVal C.int) *C.QWebView {
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

	C.QWebView_virtualbase_changeEvent(unsafe.Pointer(this.h), (*C.QEvent)(param1.UnsafePointer()))

}
func (this *QWebView) OnChangeEvent(slot func(super func(param1 *qt.QEvent), param1 *qt.QEvent)) {
	ok := C.QWebView_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebView_changeEvent
func miqt_exec_callback_QWebView_changeEvent(self *C.QWebView, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QEvent), param1 *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(param1))

	gofunc((&QWebView{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QWebView) callVirtualBase_MouseMoveEvent(param1 *qt.QMouseEvent) {

	C.QWebView_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(param1.UnsafePointer()))

}
func (this *QWebView) OnMouseMoveEvent(slot func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent)) {
	ok := C.QWebView_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebView_mouseMoveEvent
func miqt_exec_callback_QWebView_mouseMoveEvent(self *C.QWebView, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(param1))

	gofunc((&QWebView{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QWebView) callVirtualBase_MousePressEvent(param1 *qt.QMouseEvent) {

	C.QWebView_virtualbase_mousePressEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(param1.UnsafePointer()))

}
func (this *QWebView) OnMousePressEvent(slot func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent)) {
	ok := C.QWebView_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebView_mousePressEvent
func miqt_exec_callback_QWebView_mousePressEvent(self *C.QWebView, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(param1))

	gofunc((&QWebView{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QWebView) callVirtualBase_MouseDoubleClickEvent(param1 *qt.QMouseEvent) {

	C.QWebView_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(param1.UnsafePointer()))

}
func (this *QWebView) OnMouseDoubleClickEvent(slot func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent)) {
	ok := C.QWebView_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebView_mouseDoubleClickEvent
func miqt_exec_callback_QWebView_mouseDoubleClickEvent(self *C.QWebView, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(param1))

	gofunc((&QWebView{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QWebView) callVirtualBase_MouseReleaseEvent(param1 *qt.QMouseEvent) {

	C.QWebView_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(param1.UnsafePointer()))

}
func (this *QWebView) OnMouseReleaseEvent(slot func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent)) {
	ok := C.QWebView_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebView_mouseReleaseEvent
func miqt_exec_callback_QWebView_mouseReleaseEvent(self *C.QWebView, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(param1))

	gofunc((&QWebView{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QWebView) callVirtualBase_ContextMenuEvent(param1 *qt.QContextMenuEvent) {

	C.QWebView_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), (*C.QContextMenuEvent)(param1.UnsafePointer()))

}
func (this *QWebView) OnContextMenuEvent(slot func(super func(param1 *qt.QContextMenuEvent), param1 *qt.QContextMenuEvent)) {
	ok := C.QWebView_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebView_contextMenuEvent
func miqt_exec_callback_QWebView_contextMenuEvent(self *C.QWebView, cb C.intptr_t, param1 *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QContextMenuEvent), param1 *qt.QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQContextMenuEvent(unsafe.Pointer(param1))

	gofunc((&QWebView{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QWebView) callVirtualBase_WheelEvent(param1 *qt.QWheelEvent) {

	C.QWebView_virtualbase_wheelEvent(unsafe.Pointer(this.h), (*C.QWheelEvent)(param1.UnsafePointer()))

}
func (this *QWebView) OnWheelEvent(slot func(super func(param1 *qt.QWheelEvent), param1 *qt.QWheelEvent)) {
	ok := C.QWebView_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebView_wheelEvent
func miqt_exec_callback_QWebView_wheelEvent(self *C.QWebView, cb C.intptr_t, param1 *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QWheelEvent), param1 *qt.QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQWheelEvent(unsafe.Pointer(param1))

	gofunc((&QWebView{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QWebView) callVirtualBase_KeyPressEvent(param1 *qt.QKeyEvent) {

	C.QWebView_virtualbase_keyPressEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(param1.UnsafePointer()))

}
func (this *QWebView) OnKeyPressEvent(slot func(super func(param1 *qt.QKeyEvent), param1 *qt.QKeyEvent)) {
	ok := C.QWebView_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebView_keyPressEvent
func miqt_exec_callback_QWebView_keyPressEvent(self *C.QWebView, cb C.intptr_t, param1 *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QKeyEvent), param1 *qt.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQKeyEvent(unsafe.Pointer(param1))

	gofunc((&QWebView{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QWebView) callVirtualBase_KeyReleaseEvent(param1 *qt.QKeyEvent) {

	C.QWebView_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(param1.UnsafePointer()))

}
func (this *QWebView) OnKeyReleaseEvent(slot func(super func(param1 *qt.QKeyEvent), param1 *qt.QKeyEvent)) {
	ok := C.QWebView_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebView_keyReleaseEvent
func miqt_exec_callback_QWebView_keyReleaseEvent(self *C.QWebView, cb C.intptr_t, param1 *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QKeyEvent), param1 *qt.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQKeyEvent(unsafe.Pointer(param1))

	gofunc((&QWebView{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QWebView) callVirtualBase_DragEnterEvent(param1 *qt.QDragEnterEvent) {

	C.QWebView_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), (*C.QDragEnterEvent)(param1.UnsafePointer()))

}
func (this *QWebView) OnDragEnterEvent(slot func(super func(param1 *qt.QDragEnterEvent), param1 *qt.QDragEnterEvent)) {
	ok := C.QWebView_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebView_dragEnterEvent
func miqt_exec_callback_QWebView_dragEnterEvent(self *C.QWebView, cb C.intptr_t, param1 *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QDragEnterEvent), param1 *qt.QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDragEnterEvent(unsafe.Pointer(param1))

	gofunc((&QWebView{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QWebView) callVirtualBase_DragLeaveEvent(param1 *qt.QDragLeaveEvent) {

	C.QWebView_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), (*C.QDragLeaveEvent)(param1.UnsafePointer()))

}
func (this *QWebView) OnDragLeaveEvent(slot func(super func(param1 *qt.QDragLeaveEvent), param1 *qt.QDragLeaveEvent)) {
	ok := C.QWebView_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebView_dragLeaveEvent
func miqt_exec_callback_QWebView_dragLeaveEvent(self *C.QWebView, cb C.intptr_t, param1 *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QDragLeaveEvent), param1 *qt.QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDragLeaveEvent(unsafe.Pointer(param1))

	gofunc((&QWebView{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QWebView) callVirtualBase_DragMoveEvent(param1 *qt.QDragMoveEvent) {

	C.QWebView_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), (*C.QDragMoveEvent)(param1.UnsafePointer()))

}
func (this *QWebView) OnDragMoveEvent(slot func(super func(param1 *qt.QDragMoveEvent), param1 *qt.QDragMoveEvent)) {
	ok := C.QWebView_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebView_dragMoveEvent
func miqt_exec_callback_QWebView_dragMoveEvent(self *C.QWebView, cb C.intptr_t, param1 *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QDragMoveEvent), param1 *qt.QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDragMoveEvent(unsafe.Pointer(param1))

	gofunc((&QWebView{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QWebView) callVirtualBase_DropEvent(param1 *qt.QDropEvent) {

	C.QWebView_virtualbase_dropEvent(unsafe.Pointer(this.h), (*C.QDropEvent)(param1.UnsafePointer()))

}
func (this *QWebView) OnDropEvent(slot func(super func(param1 *qt.QDropEvent), param1 *qt.QDropEvent)) {
	ok := C.QWebView_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebView_dropEvent
func miqt_exec_callback_QWebView_dropEvent(self *C.QWebView, cb C.intptr_t, param1 *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QDropEvent), param1 *qt.QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDropEvent(unsafe.Pointer(param1))

	gofunc((&QWebView{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QWebView) callVirtualBase_FocusInEvent(param1 *qt.QFocusEvent) {

	C.QWebView_virtualbase_focusInEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(param1.UnsafePointer()))

}
func (this *QWebView) OnFocusInEvent(slot func(super func(param1 *qt.QFocusEvent), param1 *qt.QFocusEvent)) {
	ok := C.QWebView_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebView_focusInEvent
func miqt_exec_callback_QWebView_focusInEvent(self *C.QWebView, cb C.intptr_t, param1 *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QFocusEvent), param1 *qt.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFocusEvent(unsafe.Pointer(param1))

	gofunc((&QWebView{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QWebView) callVirtualBase_FocusOutEvent(param1 *qt.QFocusEvent) {

	C.QWebView_virtualbase_focusOutEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(param1.UnsafePointer()))

}
func (this *QWebView) OnFocusOutEvent(slot func(super func(param1 *qt.QFocusEvent), param1 *qt.QFocusEvent)) {
	ok := C.QWebView_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebView_focusOutEvent
func miqt_exec_callback_QWebView_focusOutEvent(self *C.QWebView, cb C.intptr_t, param1 *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QFocusEvent), param1 *qt.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFocusEvent(unsafe.Pointer(param1))

	gofunc((&QWebView{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QWebView) callVirtualBase_InputMethodEvent(param1 *qt.QInputMethodEvent) {

	C.QWebView_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), (*C.QInputMethodEvent)(param1.UnsafePointer()))

}
func (this *QWebView) OnInputMethodEvent(slot func(super func(param1 *qt.QInputMethodEvent), param1 *qt.QInputMethodEvent)) {
	ok := C.QWebView_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebView_inputMethodEvent
func miqt_exec_callback_QWebView_inputMethodEvent(self *C.QWebView, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QInputMethodEvent), param1 *qt.QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQInputMethodEvent(unsafe.Pointer(param1))

	gofunc((&QWebView{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QWebView) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QWebView_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QWebView) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QWebView_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebView_focusNextPrevChild
func miqt_exec_callback_QWebView_focusNextPrevChild(self *C.QWebView, cb C.intptr_t, next C.bool) C.bool {
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

	return (int)(C.QWebView_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QWebView) OnDevType(slot func(super func() int) int) {
	ok := C.QWebView_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebView_devType
func miqt_exec_callback_QWebView_devType(self *C.QWebView, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWebView{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QWebView) callVirtualBase_SetVisible(visible bool) {

	C.QWebView_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QWebView) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QWebView_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebView_setVisible
func miqt_exec_callback_QWebView_setVisible(self *C.QWebView, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QWebView{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QWebView) callVirtualBase_MinimumSizeHint() *qt.QSize {

	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QWebView_virtualbase_minimumSizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QWebView) OnMinimumSizeHint(slot func(super func() *qt.QSize) *qt.QSize) {
	ok := C.QWebView_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebView_minimumSizeHint
func miqt_exec_callback_QWebView_minimumSizeHint(self *C.QWebView, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QSize) *qt.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWebView{h: self}).callVirtualBase_MinimumSizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QWebView) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QWebView_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QWebView) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QWebView_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebView_heightForWidth
func miqt_exec_callback_QWebView_heightForWidth(self *C.QWebView, cb C.intptr_t, param1 C.int) C.int {
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

	return (bool)(C.QWebView_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QWebView) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QWebView_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebView_hasHeightForWidth
func miqt_exec_callback_QWebView_hasHeightForWidth(self *C.QWebView, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWebView{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QWebView) callVirtualBase_PaintEngine() *qt.QPaintEngine {

	return qt.UnsafeNewQPaintEngine(unsafe.Pointer(C.QWebView_virtualbase_paintEngine(unsafe.Pointer(this.h))))

}
func (this *QWebView) OnPaintEngine(slot func(super func() *qt.QPaintEngine) *qt.QPaintEngine) {
	ok := C.QWebView_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebView_paintEngine
func miqt_exec_callback_QWebView_paintEngine(self *C.QWebView, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QPaintEngine) *qt.QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWebView{h: self}).callVirtualBase_PaintEngine)

	return (*C.QPaintEngine)(virtualReturn.UnsafePointer())

}

func (this *QWebView) callVirtualBase_EnterEvent(event *qt.QEvent) {

	C.QWebView_virtualbase_enterEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QWebView) OnEnterEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QWebView_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebView_enterEvent
func miqt_exec_callback_QWebView_enterEvent(self *C.QWebView, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QWebView{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QWebView) callVirtualBase_LeaveEvent(event *qt.QEvent) {

	C.QWebView_virtualbase_leaveEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QWebView) OnLeaveEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QWebView_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebView_leaveEvent
func miqt_exec_callback_QWebView_leaveEvent(self *C.QWebView, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QWebView{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QWebView) callVirtualBase_MoveEvent(event *qt.QMoveEvent) {

	C.QWebView_virtualbase_moveEvent(unsafe.Pointer(this.h), (*C.QMoveEvent)(event.UnsafePointer()))

}
func (this *QWebView) OnMoveEvent(slot func(super func(event *qt.QMoveEvent), event *qt.QMoveEvent)) {
	ok := C.QWebView_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebView_moveEvent
func miqt_exec_callback_QWebView_moveEvent(self *C.QWebView, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMoveEvent), event *qt.QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMoveEvent(unsafe.Pointer(event))

	gofunc((&QWebView{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QWebView) callVirtualBase_CloseEvent(event *qt.QCloseEvent) {

	C.QWebView_virtualbase_closeEvent(unsafe.Pointer(this.h), (*C.QCloseEvent)(event.UnsafePointer()))

}
func (this *QWebView) OnCloseEvent(slot func(super func(event *qt.QCloseEvent), event *qt.QCloseEvent)) {
	ok := C.QWebView_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebView_closeEvent
func miqt_exec_callback_QWebView_closeEvent(self *C.QWebView, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QCloseEvent), event *qt.QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQCloseEvent(unsafe.Pointer(event))

	gofunc((&QWebView{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QWebView) callVirtualBase_TabletEvent(event *qt.QTabletEvent) {

	C.QWebView_virtualbase_tabletEvent(unsafe.Pointer(this.h), (*C.QTabletEvent)(event.UnsafePointer()))

}
func (this *QWebView) OnTabletEvent(slot func(super func(event *qt.QTabletEvent), event *qt.QTabletEvent)) {
	ok := C.QWebView_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebView_tabletEvent
func miqt_exec_callback_QWebView_tabletEvent(self *C.QWebView, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTabletEvent), event *qt.QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTabletEvent(unsafe.Pointer(event))

	gofunc((&QWebView{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QWebView) callVirtualBase_ActionEvent(event *qt.QActionEvent) {

	C.QWebView_virtualbase_actionEvent(unsafe.Pointer(this.h), (*C.QActionEvent)(event.UnsafePointer()))

}
func (this *QWebView) OnActionEvent(slot func(super func(event *qt.QActionEvent), event *qt.QActionEvent)) {
	ok := C.QWebView_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebView_actionEvent
func miqt_exec_callback_QWebView_actionEvent(self *C.QWebView, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QActionEvent), event *qt.QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQActionEvent(unsafe.Pointer(event))

	gofunc((&QWebView{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QWebView) callVirtualBase_ShowEvent(event *qt.QShowEvent) {

	C.QWebView_virtualbase_showEvent(unsafe.Pointer(this.h), (*C.QShowEvent)(event.UnsafePointer()))

}
func (this *QWebView) OnShowEvent(slot func(super func(event *qt.QShowEvent), event *qt.QShowEvent)) {
	ok := C.QWebView_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebView_showEvent
func miqt_exec_callback_QWebView_showEvent(self *C.QWebView, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QShowEvent), event *qt.QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQShowEvent(unsafe.Pointer(event))

	gofunc((&QWebView{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QWebView) callVirtualBase_HideEvent(event *qt.QHideEvent) {

	C.QWebView_virtualbase_hideEvent(unsafe.Pointer(this.h), (*C.QHideEvent)(event.UnsafePointer()))

}
func (this *QWebView) OnHideEvent(slot func(super func(event *qt.QHideEvent), event *qt.QHideEvent)) {
	ok := C.QWebView_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebView_hideEvent
func miqt_exec_callback_QWebView_hideEvent(self *C.QWebView, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QHideEvent), event *qt.QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQHideEvent(unsafe.Pointer(event))

	gofunc((&QWebView{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QWebView) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *int64) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QWebView_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.long)(unsafe.Pointer(result))))

}
func (this *QWebView) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool) {
	ok := C.QWebView_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebView_nativeEvent
func miqt_exec_callback_QWebView_nativeEvent(self *C.QWebView, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.long) C.bool {
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

	return (int)(C.QWebView_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QWebView) OnMetric(slot func(super func(param1 qt.QPaintDevice__PaintDeviceMetric) int, param1 qt.QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QWebView_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebView_metric
func miqt_exec_callback_QWebView_metric(self *C.QWebView, cb C.intptr_t, param1 C.int) C.int {
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

	C.QWebView_virtualbase_initPainter(unsafe.Pointer(this.h), (*C.QPainter)(painter.UnsafePointer()))

}
func (this *QWebView) OnInitPainter(slot func(super func(painter *qt.QPainter), painter *qt.QPainter)) {
	ok := C.QWebView_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebView_initPainter
func miqt_exec_callback_QWebView_initPainter(self *C.QWebView, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *qt.QPainter), painter *qt.QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(painter))

	gofunc((&QWebView{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QWebView) callVirtualBase_Redirected(offset *qt.QPoint) *qt.QPaintDevice {

	return qt.UnsafeNewQPaintDevice(unsafe.Pointer(C.QWebView_virtualbase_redirected(unsafe.Pointer(this.h), (*C.QPoint)(offset.UnsafePointer()))))

}
func (this *QWebView) OnRedirected(slot func(super func(offset *qt.QPoint) *qt.QPaintDevice, offset *qt.QPoint) *qt.QPaintDevice) {
	ok := C.QWebView_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebView_redirected
func miqt_exec_callback_QWebView_redirected(self *C.QWebView, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
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

	return qt.UnsafeNewQPainter(unsafe.Pointer(C.QWebView_virtualbase_sharedPainter(unsafe.Pointer(this.h))))

}
func (this *QWebView) OnSharedPainter(slot func(super func() *qt.QPainter) *qt.QPainter) {
	ok := C.QWebView_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebView_sharedPainter
func miqt_exec_callback_QWebView_sharedPainter(self *C.QWebView, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QPainter) *qt.QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWebView{h: self}).callVirtualBase_SharedPainter)

	return (*C.QPainter)(virtualReturn.UnsafePointer())

}

func (this *QWebView) callVirtualBase_EventFilter(watched *qt.QObject, event *qt.QEvent) bool {

	return (bool)(C.QWebView_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QWebView) OnEventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	ok := C.QWebView_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebView_eventFilter
func miqt_exec_callback_QWebView_eventFilter(self *C.QWebView, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QWebView{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QWebView) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.QWebView_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QWebView) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	ok := C.QWebView_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebView_timerEvent
func miqt_exec_callback_QWebView_timerEvent(self *C.QWebView, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QWebView{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QWebView) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QWebView_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QWebView) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	ok := C.QWebView_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebView_childEvent
func miqt_exec_callback_QWebView_childEvent(self *C.QWebView, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QWebView{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QWebView) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QWebView_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QWebView) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QWebView_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebView_customEvent
func miqt_exec_callback_QWebView_customEvent(self *C.QWebView, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QWebView{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QWebView) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QWebView_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QWebView) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QWebView_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebView_connectNotify
func miqt_exec_callback_QWebView_connectNotify(self *C.QWebView, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QWebView{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QWebView) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QWebView_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QWebView) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QWebView_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebView_disconnectNotify
func miqt_exec_callback_QWebView_disconnectNotify(self *C.QWebView, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QWebView{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QWebView) Delete() {
	C.QWebView_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWebView) GoGC() {
	runtime.SetFinalizer(this, func(this *QWebView) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
