package webkit

/*

#include "gen_qgraphicswebview.h"
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

type QGraphicsWebView struct {
	h *C.QGraphicsWebView
	*qt.QGraphicsWidget
}

func (this *QGraphicsWebView) cPointer() *C.QGraphicsWebView {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QGraphicsWebView) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQGraphicsWebView constructs the type using only CGO pointers.
func newQGraphicsWebView(h *C.QGraphicsWebView) *QGraphicsWebView {
	if h == nil {
		return nil
	}
	var outptr_QGraphicsWidget *C.QGraphicsWidget = nil
	C.QGraphicsWebView_virtbase(h, &outptr_QGraphicsWidget)

	return &QGraphicsWebView{h: h,
		QGraphicsWidget: qt.UnsafeNewQGraphicsWidget(unsafe.Pointer(outptr_QGraphicsWidget))}
}

// UnsafeNewQGraphicsWebView constructs the type using only unsafe pointers.
func UnsafeNewQGraphicsWebView(h unsafe.Pointer) *QGraphicsWebView {
	return newQGraphicsWebView((*C.QGraphicsWebView)(h))
}

// NewQGraphicsWebView constructs a new QGraphicsWebView object.
func NewQGraphicsWebView() *QGraphicsWebView {

	return newQGraphicsWebView(C.QGraphicsWebView_new())
}

// NewQGraphicsWebView2 constructs a new QGraphicsWebView object.
func NewQGraphicsWebView2(parent *qt.QGraphicsItem) *QGraphicsWebView {

	return newQGraphicsWebView(C.QGraphicsWebView_new2((*C.QGraphicsItem)(parent.UnsafePointer())))
}

func (this *QGraphicsWebView) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QGraphicsWebView_metaObject(this.h)))
}

func (this *QGraphicsWebView) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QGraphicsWebView_metacast(this.h, param1_Cstring))
}

func QGraphicsWebView_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsWebView_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGraphicsWebView_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsWebView_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGraphicsWebView) Page() *QWebPage {
	return newQWebPage(C.QGraphicsWebView_page(this.h))
}

func (this *QGraphicsWebView) SetPage(page *QWebPage) {
	C.QGraphicsWebView_setPage(this.h, page.cPointer())
}

func (this *QGraphicsWebView) Url() *qt.QUrl {
	_goptr := qt.UnsafeNewQUrl(unsafe.Pointer(C.QGraphicsWebView_url(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsWebView) SetUrl(url *qt.QUrl) {
	C.QGraphicsWebView_setUrl(this.h, (*C.QUrl)(url.UnsafePointer()))
}

func (this *QGraphicsWebView) Title() string {
	var _ms C.struct_miqt_string = C.QGraphicsWebView_title(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGraphicsWebView) Icon() *qt.QIcon {
	_goptr := qt.UnsafeNewQIcon(unsafe.Pointer(C.QGraphicsWebView_icon(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsWebView) ZoomFactor() float64 {
	return (float64)(C.QGraphicsWebView_zoomFactor(this.h))
}

func (this *QGraphicsWebView) SetZoomFactor(zoomFactor float64) {
	C.QGraphicsWebView_setZoomFactor(this.h, (C.double)(zoomFactor))
}

func (this *QGraphicsWebView) IsModified() bool {
	return (bool)(C.QGraphicsWebView_isModified(this.h))
}

func (this *QGraphicsWebView) Load(url *qt.QUrl) {
	C.QGraphicsWebView_load(this.h, (*C.QUrl)(url.UnsafePointer()))
}

func (this *QGraphicsWebView) LoadWithRequest(request *network.QNetworkRequest) {
	C.QGraphicsWebView_loadWithRequest(this.h, (*C.QNetworkRequest)(request.UnsafePointer()))
}

func (this *QGraphicsWebView) SetHtml(html string) {
	html_ms := C.struct_miqt_string{}
	html_ms.data = C.CString(html)
	html_ms.len = C.size_t(len(html))
	defer C.free(unsafe.Pointer(html_ms.data))
	C.QGraphicsWebView_setHtml(this.h, html_ms)
}

func (this *QGraphicsWebView) SetContent(data []byte) {
	data_alias := C.struct_miqt_string{}
	if len(data) > 0 {
		data_alias.data = (*C.char)(unsafe.Pointer(&data[0]))
	} else {
		data_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	data_alias.len = C.size_t(len(data))
	C.QGraphicsWebView_setContent(this.h, data_alias)
}

func (this *QGraphicsWebView) History() *QWebHistory {
	return newQWebHistory(C.QGraphicsWebView_history(this.h))
}

func (this *QGraphicsWebView) Settings() *QWebSettings {
	return newQWebSettings(C.QGraphicsWebView_settings(this.h))
}

func (this *QGraphicsWebView) PageAction(action QWebPage__WebAction) *qt.QAction {
	return qt.UnsafeNewQAction(unsafe.Pointer(C.QGraphicsWebView_pageAction(this.h, (C.int)(action))))
}

func (this *QGraphicsWebView) TriggerPageAction(action QWebPage__WebAction) {
	C.QGraphicsWebView_triggerPageAction(this.h, (C.int)(action))
}

func (this *QGraphicsWebView) FindText(subString string) bool {
	subString_ms := C.struct_miqt_string{}
	subString_ms.data = C.CString(subString)
	subString_ms.len = C.size_t(len(subString))
	defer C.free(unsafe.Pointer(subString_ms.data))
	return (bool)(C.QGraphicsWebView_findText(this.h, subString_ms))
}

func (this *QGraphicsWebView) ResizesToContents() bool {
	return (bool)(C.QGraphicsWebView_resizesToContents(this.h))
}

func (this *QGraphicsWebView) SetResizesToContents(enabled bool) {
	C.QGraphicsWebView_setResizesToContents(this.h, (C.bool)(enabled))
}

func (this *QGraphicsWebView) IsTiledBackingStoreFrozen() bool {
	return (bool)(C.QGraphicsWebView_isTiledBackingStoreFrozen(this.h))
}

func (this *QGraphicsWebView) SetTiledBackingStoreFrozen(frozen bool) {
	C.QGraphicsWebView_setTiledBackingStoreFrozen(this.h, (C.bool)(frozen))
}

func (this *QGraphicsWebView) SetGeometry(rect *qt.QRectF) {
	C.QGraphicsWebView_setGeometry(this.h, (*C.QRectF)(rect.UnsafePointer()))
}

func (this *QGraphicsWebView) UpdateGeometry() {
	C.QGraphicsWebView_updateGeometry(this.h)
}

func (this *QGraphicsWebView) Paint(param1 *qt.QPainter, options *qt.QStyleOptionGraphicsItem, widget *qt.QWidget) {
	C.QGraphicsWebView_paint(this.h, (*C.QPainter)(param1.UnsafePointer()), (*C.QStyleOptionGraphicsItem)(options.UnsafePointer()), (*C.QWidget)(widget.UnsafePointer()))
}

func (this *QGraphicsWebView) ItemChange(change qt.QGraphicsItem__GraphicsItemChange, value *qt.QVariant) *qt.QVariant {
	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QGraphicsWebView_itemChange(this.h, (C.int)(change), (*C.QVariant)(value.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsWebView) Event(param1 *qt.QEvent) bool {
	return (bool)(C.QGraphicsWebView_event(this.h, (*C.QEvent)(param1.UnsafePointer())))
}

func (this *QGraphicsWebView) SizeHint(which qt.SizeHint, constraint *qt.QSizeF) *qt.QSizeF {
	_goptr := qt.UnsafeNewQSizeF(unsafe.Pointer(C.QGraphicsWebView_sizeHint(this.h, (C.int)(which), (*C.QSizeF)(constraint.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsWebView) InputMethodQuery(query qt.InputMethodQuery) *qt.QVariant {
	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QGraphicsWebView_inputMethodQuery(this.h, (C.int)(query))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsWebView) RenderHints() qt.QPainter__RenderHint {
	return (qt.QPainter__RenderHint)(C.QGraphicsWebView_renderHints(this.h))
}

func (this *QGraphicsWebView) SetRenderHints(renderHints qt.QPainter__RenderHint) {
	C.QGraphicsWebView_setRenderHints(this.h, (C.int)(renderHints))
}

func (this *QGraphicsWebView) SetRenderHint(param1 qt.QPainter__RenderHint) {
	C.QGraphicsWebView_setRenderHint(this.h, (C.int)(param1))
}

func (this *QGraphicsWebView) Stop() {
	C.QGraphicsWebView_stop(this.h)
}

func (this *QGraphicsWebView) Back() {
	C.QGraphicsWebView_back(this.h)
}

func (this *QGraphicsWebView) Forward() {
	C.QGraphicsWebView_forward(this.h)
}

func (this *QGraphicsWebView) Reload() {
	C.QGraphicsWebView_reload(this.h)
}

func (this *QGraphicsWebView) LoadStarted() {
	C.QGraphicsWebView_loadStarted(this.h)
}
func (this *QGraphicsWebView) OnLoadStarted(slot func()) {
	C.QGraphicsWebView_connect_loadStarted(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsWebView_loadStarted
func miqt_exec_callback_QGraphicsWebView_loadStarted(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QGraphicsWebView) LoadFinished(param1 bool) {
	C.QGraphicsWebView_loadFinished(this.h, (C.bool)(param1))
}
func (this *QGraphicsWebView) OnLoadFinished(slot func(param1 bool)) {
	C.QGraphicsWebView_connect_loadFinished(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsWebView_loadFinished
func miqt_exec_callback_QGraphicsWebView_loadFinished(cb C.intptr_t, param1 C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(param1)

	gofunc(slotval1)
}

func (this *QGraphicsWebView) LoadProgress(progress int) {
	C.QGraphicsWebView_loadProgress(this.h, (C.int)(progress))
}
func (this *QGraphicsWebView) OnLoadProgress(slot func(progress int)) {
	C.QGraphicsWebView_connect_loadProgress(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsWebView_loadProgress
func miqt_exec_callback_QGraphicsWebView_loadProgress(cb C.intptr_t, progress C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(progress int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(progress)

	gofunc(slotval1)
}

func (this *QGraphicsWebView) UrlChanged(param1 *qt.QUrl) {
	C.QGraphicsWebView_urlChanged(this.h, (*C.QUrl)(param1.UnsafePointer()))
}
func (this *QGraphicsWebView) OnUrlChanged(slot func(param1 *qt.QUrl)) {
	C.QGraphicsWebView_connect_urlChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsWebView_urlChanged
func miqt_exec_callback_QGraphicsWebView_urlChanged(cb C.intptr_t, param1 *C.QUrl) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 *qt.QUrl))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQUrl(unsafe.Pointer(param1))

	gofunc(slotval1)
}

func (this *QGraphicsWebView) TitleChanged(param1 string) {
	param1_ms := C.struct_miqt_string{}
	param1_ms.data = C.CString(param1)
	param1_ms.len = C.size_t(len(param1))
	defer C.free(unsafe.Pointer(param1_ms.data))
	C.QGraphicsWebView_titleChanged(this.h, param1_ms)
}
func (this *QGraphicsWebView) OnTitleChanged(slot func(param1 string)) {
	C.QGraphicsWebView_connect_titleChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsWebView_titleChanged
func miqt_exec_callback_QGraphicsWebView_titleChanged(cb C.intptr_t, param1 C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var param1_ms C.struct_miqt_string = param1
	param1_ret := C.GoStringN(param1_ms.data, C.int(int64(param1_ms.len)))
	C.free(unsafe.Pointer(param1_ms.data))
	slotval1 := param1_ret

	gofunc(slotval1)
}

func (this *QGraphicsWebView) IconChanged() {
	C.QGraphicsWebView_iconChanged(this.h)
}
func (this *QGraphicsWebView) OnIconChanged(slot func()) {
	C.QGraphicsWebView_connect_iconChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsWebView_iconChanged
func miqt_exec_callback_QGraphicsWebView_iconChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QGraphicsWebView) StatusBarMessage(message string) {
	message_ms := C.struct_miqt_string{}
	message_ms.data = C.CString(message)
	message_ms.len = C.size_t(len(message))
	defer C.free(unsafe.Pointer(message_ms.data))
	C.QGraphicsWebView_statusBarMessage(this.h, message_ms)
}
func (this *QGraphicsWebView) OnStatusBarMessage(slot func(message string)) {
	C.QGraphicsWebView_connect_statusBarMessage(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsWebView_statusBarMessage
func miqt_exec_callback_QGraphicsWebView_statusBarMessage(cb C.intptr_t, message C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(message string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var message_ms C.struct_miqt_string = message
	message_ret := C.GoStringN(message_ms.data, C.int(int64(message_ms.len)))
	C.free(unsafe.Pointer(message_ms.data))
	slotval1 := message_ret

	gofunc(slotval1)
}

func (this *QGraphicsWebView) LinkClicked(param1 *qt.QUrl) {
	C.QGraphicsWebView_linkClicked(this.h, (*C.QUrl)(param1.UnsafePointer()))
}
func (this *QGraphicsWebView) OnLinkClicked(slot func(param1 *qt.QUrl)) {
	C.QGraphicsWebView_connect_linkClicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsWebView_linkClicked
func miqt_exec_callback_QGraphicsWebView_linkClicked(cb C.intptr_t, param1 *C.QUrl) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 *qt.QUrl))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQUrl(unsafe.Pointer(param1))

	gofunc(slotval1)
}

func QGraphicsWebView_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsWebView_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGraphicsWebView_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsWebView_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGraphicsWebView_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsWebView_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGraphicsWebView_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsWebView_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGraphicsWebView) Load2(request *network.QNetworkRequest, operation network.QNetworkAccessManager__Operation) {
	C.QGraphicsWebView_load2(this.h, (*C.QNetworkRequest)(request.UnsafePointer()), (C.int)(operation))
}

func (this *QGraphicsWebView) Load3(request *network.QNetworkRequest, operation network.QNetworkAccessManager__Operation, body []byte) {
	body_alias := C.struct_miqt_string{}
	if len(body) > 0 {
		body_alias.data = (*C.char)(unsafe.Pointer(&body[0]))
	} else {
		body_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	body_alias.len = C.size_t(len(body))
	C.QGraphicsWebView_load3(this.h, (*C.QNetworkRequest)(request.UnsafePointer()), (C.int)(operation), body_alias)
}

func (this *QGraphicsWebView) SetHtml2(html string, baseUrl *qt.QUrl) {
	html_ms := C.struct_miqt_string{}
	html_ms.data = C.CString(html)
	html_ms.len = C.size_t(len(html))
	defer C.free(unsafe.Pointer(html_ms.data))
	C.QGraphicsWebView_setHtml2(this.h, html_ms, (*C.QUrl)(baseUrl.UnsafePointer()))
}

func (this *QGraphicsWebView) SetContent2(data []byte, mimeType string) {
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
	C.QGraphicsWebView_setContent2(this.h, data_alias, mimeType_ms)
}

func (this *QGraphicsWebView) SetContent3(data []byte, mimeType string, baseUrl *qt.QUrl) {
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
	C.QGraphicsWebView_setContent3(this.h, data_alias, mimeType_ms, (*C.QUrl)(baseUrl.UnsafePointer()))
}

func (this *QGraphicsWebView) TriggerPageAction2(action QWebPage__WebAction, checked bool) {
	C.QGraphicsWebView_triggerPageAction2(this.h, (C.int)(action), (C.bool)(checked))
}

func (this *QGraphicsWebView) FindText2(subString string, options QWebPage__FindFlag) bool {
	subString_ms := C.struct_miqt_string{}
	subString_ms.data = C.CString(subString)
	subString_ms.len = C.size_t(len(subString))
	defer C.free(unsafe.Pointer(subString_ms.data))
	return (bool)(C.QGraphicsWebView_findText2(this.h, subString_ms, (C.int)(options)))
}

func (this *QGraphicsWebView) SetRenderHint2(param1 qt.QPainter__RenderHint, enabled bool) {
	C.QGraphicsWebView_setRenderHint2(this.h, (C.int)(param1), (C.bool)(enabled))
}

func (this *QGraphicsWebView) callVirtualBase_SetGeometry(rect *qt.QRectF) {

	C.QGraphicsWebView_virtualbase_setGeometry(unsafe.Pointer(this.h), (*C.QRectF)(rect.UnsafePointer()))

}
func (this *QGraphicsWebView) OnsetGeometry(slot func(super func(rect *qt.QRectF), rect *qt.QRectF)) {
	ok := C.QGraphicsWebView_override_virtual_setGeometry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_setGeometry
func miqt_exec_callback_QGraphicsWebView_setGeometry(self *C.QGraphicsWebView, cb C.intptr_t, rect *C.QRectF) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(rect *qt.QRectF), rect *qt.QRectF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQRectF(unsafe.Pointer(rect))

	gofunc((&QGraphicsWebView{h: self}).callVirtualBase_SetGeometry, slotval1)

}

func (this *QGraphicsWebView) callVirtualBase_UpdateGeometry() {

	C.QGraphicsWebView_virtualbase_updateGeometry(unsafe.Pointer(this.h))

}
func (this *QGraphicsWebView) OnupdateGeometry(slot func(super func())) {
	ok := C.QGraphicsWebView_override_virtual_updateGeometry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_updateGeometry
func miqt_exec_callback_QGraphicsWebView_updateGeometry(self *C.QGraphicsWebView, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QGraphicsWebView{h: self}).callVirtualBase_UpdateGeometry)

}

func (this *QGraphicsWebView) callVirtualBase_Paint(param1 *qt.QPainter, options *qt.QStyleOptionGraphicsItem, widget *qt.QWidget) {

	C.QGraphicsWebView_virtualbase_paint(unsafe.Pointer(this.h), (*C.QPainter)(param1.UnsafePointer()), (*C.QStyleOptionGraphicsItem)(options.UnsafePointer()), (*C.QWidget)(widget.UnsafePointer()))

}
func (this *QGraphicsWebView) Onpaint(slot func(super func(param1 *qt.QPainter, options *qt.QStyleOptionGraphicsItem, widget *qt.QWidget), param1 *qt.QPainter, options *qt.QStyleOptionGraphicsItem, widget *qt.QWidget)) {
	ok := C.QGraphicsWebView_override_virtual_paint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_paint
func miqt_exec_callback_QGraphicsWebView_paint(self *C.QGraphicsWebView, cb C.intptr_t, param1 *C.QPainter, options *C.QStyleOptionGraphicsItem, widget *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPainter, options *qt.QStyleOptionGraphicsItem, widget *qt.QWidget), param1 *qt.QPainter, options *qt.QStyleOptionGraphicsItem, widget *qt.QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(param1))

	slotval2 := qt.UnsafeNewQStyleOptionGraphicsItem(unsafe.Pointer(options))

	slotval3 := qt.UnsafeNewQWidget(unsafe.Pointer(widget))

	gofunc((&QGraphicsWebView{h: self}).callVirtualBase_Paint, slotval1, slotval2, slotval3)

}

func (this *QGraphicsWebView) callVirtualBase_ItemChange(change qt.QGraphicsItem__GraphicsItemChange, value *qt.QVariant) *qt.QVariant {

	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QGraphicsWebView_virtualbase_itemChange(unsafe.Pointer(this.h), (C.int)(change), (*C.QVariant)(value.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsWebView) OnitemChange(slot func(super func(change qt.QGraphicsItem__GraphicsItemChange, value *qt.QVariant) *qt.QVariant, change qt.QGraphicsItem__GraphicsItemChange, value *qt.QVariant) *qt.QVariant) {
	ok := C.QGraphicsWebView_override_virtual_itemChange(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_itemChange
func miqt_exec_callback_QGraphicsWebView_itemChange(self *C.QGraphicsWebView, cb C.intptr_t, change C.int, value *C.QVariant) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(change qt.QGraphicsItem__GraphicsItemChange, value *qt.QVariant) *qt.QVariant, change qt.QGraphicsItem__GraphicsItemChange, value *qt.QVariant) *qt.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt.QGraphicsItem__GraphicsItemChange)(change)

	slotval2 := qt.UnsafeNewQVariant(unsafe.Pointer(value))

	virtualReturn := gofunc((&QGraphicsWebView{h: self}).callVirtualBase_ItemChange, slotval1, slotval2)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}

func (this *QGraphicsWebView) callVirtualBase_Event(param1 *qt.QEvent) bool {

	return (bool)(C.QGraphicsWebView_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(param1.UnsafePointer())))

}
func (this *QGraphicsWebView) Onevent(slot func(super func(param1 *qt.QEvent) bool, param1 *qt.QEvent) bool) {
	ok := C.QGraphicsWebView_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_event
func miqt_exec_callback_QGraphicsWebView_event(self *C.QGraphicsWebView, cb C.intptr_t, param1 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QEvent) bool, param1 *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(param1))

	virtualReturn := gofunc((&QGraphicsWebView{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsWebView) callVirtualBase_SizeHint(which qt.SizeHint, constraint *qt.QSizeF) *qt.QSizeF {

	_goptr := qt.UnsafeNewQSizeF(unsafe.Pointer(C.QGraphicsWebView_virtualbase_sizeHint(unsafe.Pointer(this.h), (C.int)(which), (*C.QSizeF)(constraint.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsWebView) OnsizeHint(slot func(super func(which qt.SizeHint, constraint *qt.QSizeF) *qt.QSizeF, which qt.SizeHint, constraint *qt.QSizeF) *qt.QSizeF) {
	ok := C.QGraphicsWebView_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_sizeHint
func miqt_exec_callback_QGraphicsWebView_sizeHint(self *C.QGraphicsWebView, cb C.intptr_t, which C.int, constraint *C.QSizeF) *C.QSizeF {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(which qt.SizeHint, constraint *qt.QSizeF) *qt.QSizeF, which qt.SizeHint, constraint *qt.QSizeF) *qt.QSizeF)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt.SizeHint)(which)

	slotval2 := qt.UnsafeNewQSizeF(unsafe.Pointer(constraint))

	virtualReturn := gofunc((&QGraphicsWebView{h: self}).callVirtualBase_SizeHint, slotval1, slotval2)

	return (*C.QSizeF)(virtualReturn.UnsafePointer())

}

func (this *QGraphicsWebView) callVirtualBase_InputMethodQuery(query qt.InputMethodQuery) *qt.QVariant {

	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QGraphicsWebView_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(query))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsWebView) OninputMethodQuery(slot func(super func(query qt.InputMethodQuery) *qt.QVariant, query qt.InputMethodQuery) *qt.QVariant) {
	ok := C.QGraphicsWebView_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_inputMethodQuery
func miqt_exec_callback_QGraphicsWebView_inputMethodQuery(self *C.QGraphicsWebView, cb C.intptr_t, query C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(query qt.InputMethodQuery) *qt.QVariant, query qt.InputMethodQuery) *qt.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt.InputMethodQuery)(query)

	virtualReturn := gofunc((&QGraphicsWebView{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}

func (this *QGraphicsWebView) callVirtualBase_MousePressEvent(param1 *qt.QGraphicsSceneMouseEvent) {

	C.QGraphicsWebView_virtualbase_mousePressEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneMouseEvent)(param1.UnsafePointer()))

}
func (this *QGraphicsWebView) OnmousePressEvent(slot func(super func(param1 *qt.QGraphicsSceneMouseEvent), param1 *qt.QGraphicsSceneMouseEvent)) {
	ok := C.QGraphicsWebView_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_mousePressEvent
func miqt_exec_callback_QGraphicsWebView_mousePressEvent(self *C.QGraphicsWebView, cb C.intptr_t, param1 *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QGraphicsSceneMouseEvent), param1 *qt.QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQGraphicsSceneMouseEvent(unsafe.Pointer(param1))

	gofunc((&QGraphicsWebView{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QGraphicsWebView) callVirtualBase_MouseDoubleClickEvent(param1 *qt.QGraphicsSceneMouseEvent) {

	C.QGraphicsWebView_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneMouseEvent)(param1.UnsafePointer()))

}
func (this *QGraphicsWebView) OnmouseDoubleClickEvent(slot func(super func(param1 *qt.QGraphicsSceneMouseEvent), param1 *qt.QGraphicsSceneMouseEvent)) {
	ok := C.QGraphicsWebView_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_mouseDoubleClickEvent
func miqt_exec_callback_QGraphicsWebView_mouseDoubleClickEvent(self *C.QGraphicsWebView, cb C.intptr_t, param1 *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QGraphicsSceneMouseEvent), param1 *qt.QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQGraphicsSceneMouseEvent(unsafe.Pointer(param1))

	gofunc((&QGraphicsWebView{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QGraphicsWebView) callVirtualBase_MouseReleaseEvent(param1 *qt.QGraphicsSceneMouseEvent) {

	C.QGraphicsWebView_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneMouseEvent)(param1.UnsafePointer()))

}
func (this *QGraphicsWebView) OnmouseReleaseEvent(slot func(super func(param1 *qt.QGraphicsSceneMouseEvent), param1 *qt.QGraphicsSceneMouseEvent)) {
	ok := C.QGraphicsWebView_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_mouseReleaseEvent
func miqt_exec_callback_QGraphicsWebView_mouseReleaseEvent(self *C.QGraphicsWebView, cb C.intptr_t, param1 *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QGraphicsSceneMouseEvent), param1 *qt.QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQGraphicsSceneMouseEvent(unsafe.Pointer(param1))

	gofunc((&QGraphicsWebView{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QGraphicsWebView) callVirtualBase_MouseMoveEvent(param1 *qt.QGraphicsSceneMouseEvent) {

	C.QGraphicsWebView_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneMouseEvent)(param1.UnsafePointer()))

}
func (this *QGraphicsWebView) OnmouseMoveEvent(slot func(super func(param1 *qt.QGraphicsSceneMouseEvent), param1 *qt.QGraphicsSceneMouseEvent)) {
	ok := C.QGraphicsWebView_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_mouseMoveEvent
func miqt_exec_callback_QGraphicsWebView_mouseMoveEvent(self *C.QGraphicsWebView, cb C.intptr_t, param1 *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QGraphicsSceneMouseEvent), param1 *qt.QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQGraphicsSceneMouseEvent(unsafe.Pointer(param1))

	gofunc((&QGraphicsWebView{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QGraphicsWebView) callVirtualBase_HoverMoveEvent(param1 *qt.QGraphicsSceneHoverEvent) {

	C.QGraphicsWebView_virtualbase_hoverMoveEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneHoverEvent)(param1.UnsafePointer()))

}
func (this *QGraphicsWebView) OnhoverMoveEvent(slot func(super func(param1 *qt.QGraphicsSceneHoverEvent), param1 *qt.QGraphicsSceneHoverEvent)) {
	ok := C.QGraphicsWebView_override_virtual_hoverMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_hoverMoveEvent
func miqt_exec_callback_QGraphicsWebView_hoverMoveEvent(self *C.QGraphicsWebView, cb C.intptr_t, param1 *C.QGraphicsSceneHoverEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QGraphicsSceneHoverEvent), param1 *qt.QGraphicsSceneHoverEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQGraphicsSceneHoverEvent(unsafe.Pointer(param1))

	gofunc((&QGraphicsWebView{h: self}).callVirtualBase_HoverMoveEvent, slotval1)

}

func (this *QGraphicsWebView) callVirtualBase_HoverLeaveEvent(param1 *qt.QGraphicsSceneHoverEvent) {

	C.QGraphicsWebView_virtualbase_hoverLeaveEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneHoverEvent)(param1.UnsafePointer()))

}
func (this *QGraphicsWebView) OnhoverLeaveEvent(slot func(super func(param1 *qt.QGraphicsSceneHoverEvent), param1 *qt.QGraphicsSceneHoverEvent)) {
	ok := C.QGraphicsWebView_override_virtual_hoverLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_hoverLeaveEvent
func miqt_exec_callback_QGraphicsWebView_hoverLeaveEvent(self *C.QGraphicsWebView, cb C.intptr_t, param1 *C.QGraphicsSceneHoverEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QGraphicsSceneHoverEvent), param1 *qt.QGraphicsSceneHoverEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQGraphicsSceneHoverEvent(unsafe.Pointer(param1))

	gofunc((&QGraphicsWebView{h: self}).callVirtualBase_HoverLeaveEvent, slotval1)

}

func (this *QGraphicsWebView) callVirtualBase_WheelEvent(param1 *qt.QGraphicsSceneWheelEvent) {

	C.QGraphicsWebView_virtualbase_wheelEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneWheelEvent)(param1.UnsafePointer()))

}
func (this *QGraphicsWebView) OnwheelEvent(slot func(super func(param1 *qt.QGraphicsSceneWheelEvent), param1 *qt.QGraphicsSceneWheelEvent)) {
	ok := C.QGraphicsWebView_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_wheelEvent
func miqt_exec_callback_QGraphicsWebView_wheelEvent(self *C.QGraphicsWebView, cb C.intptr_t, param1 *C.QGraphicsSceneWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QGraphicsSceneWheelEvent), param1 *qt.QGraphicsSceneWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQGraphicsSceneWheelEvent(unsafe.Pointer(param1))

	gofunc((&QGraphicsWebView{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QGraphicsWebView) callVirtualBase_KeyPressEvent(param1 *qt.QKeyEvent) {

	C.QGraphicsWebView_virtualbase_keyPressEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(param1.UnsafePointer()))

}
func (this *QGraphicsWebView) OnkeyPressEvent(slot func(super func(param1 *qt.QKeyEvent), param1 *qt.QKeyEvent)) {
	ok := C.QGraphicsWebView_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_keyPressEvent
func miqt_exec_callback_QGraphicsWebView_keyPressEvent(self *C.QGraphicsWebView, cb C.intptr_t, param1 *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QKeyEvent), param1 *qt.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQKeyEvent(unsafe.Pointer(param1))

	gofunc((&QGraphicsWebView{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QGraphicsWebView) callVirtualBase_KeyReleaseEvent(param1 *qt.QKeyEvent) {

	C.QGraphicsWebView_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(param1.UnsafePointer()))

}
func (this *QGraphicsWebView) OnkeyReleaseEvent(slot func(super func(param1 *qt.QKeyEvent), param1 *qt.QKeyEvent)) {
	ok := C.QGraphicsWebView_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_keyReleaseEvent
func miqt_exec_callback_QGraphicsWebView_keyReleaseEvent(self *C.QGraphicsWebView, cb C.intptr_t, param1 *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QKeyEvent), param1 *qt.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQKeyEvent(unsafe.Pointer(param1))

	gofunc((&QGraphicsWebView{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QGraphicsWebView) callVirtualBase_ContextMenuEvent(param1 *qt.QGraphicsSceneContextMenuEvent) {

	C.QGraphicsWebView_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneContextMenuEvent)(param1.UnsafePointer()))

}
func (this *QGraphicsWebView) OncontextMenuEvent(slot func(super func(param1 *qt.QGraphicsSceneContextMenuEvent), param1 *qt.QGraphicsSceneContextMenuEvent)) {
	ok := C.QGraphicsWebView_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_contextMenuEvent
func miqt_exec_callback_QGraphicsWebView_contextMenuEvent(self *C.QGraphicsWebView, cb C.intptr_t, param1 *C.QGraphicsSceneContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QGraphicsSceneContextMenuEvent), param1 *qt.QGraphicsSceneContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQGraphicsSceneContextMenuEvent(unsafe.Pointer(param1))

	gofunc((&QGraphicsWebView{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QGraphicsWebView) callVirtualBase_DragEnterEvent(param1 *qt.QGraphicsSceneDragDropEvent) {

	C.QGraphicsWebView_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneDragDropEvent)(param1.UnsafePointer()))

}
func (this *QGraphicsWebView) OndragEnterEvent(slot func(super func(param1 *qt.QGraphicsSceneDragDropEvent), param1 *qt.QGraphicsSceneDragDropEvent)) {
	ok := C.QGraphicsWebView_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_dragEnterEvent
func miqt_exec_callback_QGraphicsWebView_dragEnterEvent(self *C.QGraphicsWebView, cb C.intptr_t, param1 *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QGraphicsSceneDragDropEvent), param1 *qt.QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQGraphicsSceneDragDropEvent(unsafe.Pointer(param1))

	gofunc((&QGraphicsWebView{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QGraphicsWebView) callVirtualBase_DragLeaveEvent(param1 *qt.QGraphicsSceneDragDropEvent) {

	C.QGraphicsWebView_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneDragDropEvent)(param1.UnsafePointer()))

}
func (this *QGraphicsWebView) OndragLeaveEvent(slot func(super func(param1 *qt.QGraphicsSceneDragDropEvent), param1 *qt.QGraphicsSceneDragDropEvent)) {
	ok := C.QGraphicsWebView_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_dragLeaveEvent
func miqt_exec_callback_QGraphicsWebView_dragLeaveEvent(self *C.QGraphicsWebView, cb C.intptr_t, param1 *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QGraphicsSceneDragDropEvent), param1 *qt.QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQGraphicsSceneDragDropEvent(unsafe.Pointer(param1))

	gofunc((&QGraphicsWebView{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QGraphicsWebView) callVirtualBase_DragMoveEvent(param1 *qt.QGraphicsSceneDragDropEvent) {

	C.QGraphicsWebView_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneDragDropEvent)(param1.UnsafePointer()))

}
func (this *QGraphicsWebView) OndragMoveEvent(slot func(super func(param1 *qt.QGraphicsSceneDragDropEvent), param1 *qt.QGraphicsSceneDragDropEvent)) {
	ok := C.QGraphicsWebView_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_dragMoveEvent
func miqt_exec_callback_QGraphicsWebView_dragMoveEvent(self *C.QGraphicsWebView, cb C.intptr_t, param1 *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QGraphicsSceneDragDropEvent), param1 *qt.QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQGraphicsSceneDragDropEvent(unsafe.Pointer(param1))

	gofunc((&QGraphicsWebView{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QGraphicsWebView) callVirtualBase_DropEvent(param1 *qt.QGraphicsSceneDragDropEvent) {

	C.QGraphicsWebView_virtualbase_dropEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneDragDropEvent)(param1.UnsafePointer()))

}
func (this *QGraphicsWebView) OndropEvent(slot func(super func(param1 *qt.QGraphicsSceneDragDropEvent), param1 *qt.QGraphicsSceneDragDropEvent)) {
	ok := C.QGraphicsWebView_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_dropEvent
func miqt_exec_callback_QGraphicsWebView_dropEvent(self *C.QGraphicsWebView, cb C.intptr_t, param1 *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QGraphicsSceneDragDropEvent), param1 *qt.QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQGraphicsSceneDragDropEvent(unsafe.Pointer(param1))

	gofunc((&QGraphicsWebView{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QGraphicsWebView) callVirtualBase_FocusInEvent(param1 *qt.QFocusEvent) {

	C.QGraphicsWebView_virtualbase_focusInEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(param1.UnsafePointer()))

}
func (this *QGraphicsWebView) OnfocusInEvent(slot func(super func(param1 *qt.QFocusEvent), param1 *qt.QFocusEvent)) {
	ok := C.QGraphicsWebView_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_focusInEvent
func miqt_exec_callback_QGraphicsWebView_focusInEvent(self *C.QGraphicsWebView, cb C.intptr_t, param1 *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QFocusEvent), param1 *qt.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFocusEvent(unsafe.Pointer(param1))

	gofunc((&QGraphicsWebView{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QGraphicsWebView) callVirtualBase_FocusOutEvent(param1 *qt.QFocusEvent) {

	C.QGraphicsWebView_virtualbase_focusOutEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(param1.UnsafePointer()))

}
func (this *QGraphicsWebView) OnfocusOutEvent(slot func(super func(param1 *qt.QFocusEvent), param1 *qt.QFocusEvent)) {
	ok := C.QGraphicsWebView_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_focusOutEvent
func miqt_exec_callback_QGraphicsWebView_focusOutEvent(self *C.QGraphicsWebView, cb C.intptr_t, param1 *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QFocusEvent), param1 *qt.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFocusEvent(unsafe.Pointer(param1))

	gofunc((&QGraphicsWebView{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QGraphicsWebView) callVirtualBase_InputMethodEvent(param1 *qt.QInputMethodEvent) {

	C.QGraphicsWebView_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), (*C.QInputMethodEvent)(param1.UnsafePointer()))

}
func (this *QGraphicsWebView) OninputMethodEvent(slot func(super func(param1 *qt.QInputMethodEvent), param1 *qt.QInputMethodEvent)) {
	ok := C.QGraphicsWebView_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_inputMethodEvent
func miqt_exec_callback_QGraphicsWebView_inputMethodEvent(self *C.QGraphicsWebView, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QInputMethodEvent), param1 *qt.QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQInputMethodEvent(unsafe.Pointer(param1))

	gofunc((&QGraphicsWebView{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QGraphicsWebView) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QGraphicsWebView_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QGraphicsWebView) OnfocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QGraphicsWebView_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_focusNextPrevChild
func miqt_exec_callback_QGraphicsWebView_focusNextPrevChild(self *C.QGraphicsWebView, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QGraphicsWebView{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsWebView) callVirtualBase_SceneEvent(param1 *qt.QEvent) bool {

	return (bool)(C.QGraphicsWebView_virtualbase_sceneEvent(unsafe.Pointer(this.h), (*C.QEvent)(param1.UnsafePointer())))

}
func (this *QGraphicsWebView) OnsceneEvent(slot func(super func(param1 *qt.QEvent) bool, param1 *qt.QEvent) bool) {
	ok := C.QGraphicsWebView_override_virtual_sceneEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_sceneEvent
func miqt_exec_callback_QGraphicsWebView_sceneEvent(self *C.QGraphicsWebView, cb C.intptr_t, param1 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QEvent) bool, param1 *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(param1))

	virtualReturn := gofunc((&QGraphicsWebView{h: self}).callVirtualBase_SceneEvent, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsWebView) callVirtualBase_GetContentsMargins(left *float64, top *float64, right *float64, bottom *float64) {

	C.QGraphicsWebView_virtualbase_getContentsMargins(unsafe.Pointer(this.h), (*C.double)(unsafe.Pointer(left)), (*C.double)(unsafe.Pointer(top)), (*C.double)(unsafe.Pointer(right)), (*C.double)(unsafe.Pointer(bottom)))

}
func (this *QGraphicsWebView) OngetContentsMargins(slot func(super func(left *float64, top *float64, right *float64, bottom *float64), left *float64, top *float64, right *float64, bottom *float64)) {
	ok := C.QGraphicsWebView_override_virtual_getContentsMargins(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_getContentsMargins
func miqt_exec_callback_QGraphicsWebView_getContentsMargins(self *C.QGraphicsWebView, cb C.intptr_t, left *C.double, top *C.double, right *C.double, bottom *C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(left *float64, top *float64, right *float64, bottom *float64), left *float64, top *float64, right *float64, bottom *float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (*float64)(unsafe.Pointer(left))

	slotval2 := (*float64)(unsafe.Pointer(top))

	slotval3 := (*float64)(unsafe.Pointer(right))

	slotval4 := (*float64)(unsafe.Pointer(bottom))

	gofunc((&QGraphicsWebView{h: self}).callVirtualBase_GetContentsMargins, slotval1, slotval2, slotval3, slotval4)

}

func (this *QGraphicsWebView) callVirtualBase_Type() int {

	return (int)(C.QGraphicsWebView_virtualbase_type(unsafe.Pointer(this.h)))

}
func (this *QGraphicsWebView) Ontype(slot func(super func() int) int) {
	ok := C.QGraphicsWebView_override_virtual_type(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_type
func miqt_exec_callback_QGraphicsWebView_type(self *C.QGraphicsWebView, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsWebView{h: self}).callVirtualBase_Type)

	return (C.int)(virtualReturn)

}

func (this *QGraphicsWebView) callVirtualBase_PaintWindowFrame(painter *qt.QPainter, option *qt.QStyleOptionGraphicsItem, widget *qt.QWidget) {

	C.QGraphicsWebView_virtualbase_paintWindowFrame(unsafe.Pointer(this.h), (*C.QPainter)(painter.UnsafePointer()), (*C.QStyleOptionGraphicsItem)(option.UnsafePointer()), (*C.QWidget)(widget.UnsafePointer()))

}
func (this *QGraphicsWebView) OnpaintWindowFrame(slot func(super func(painter *qt.QPainter, option *qt.QStyleOptionGraphicsItem, widget *qt.QWidget), painter *qt.QPainter, option *qt.QStyleOptionGraphicsItem, widget *qt.QWidget)) {
	ok := C.QGraphicsWebView_override_virtual_paintWindowFrame(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_paintWindowFrame
func miqt_exec_callback_QGraphicsWebView_paintWindowFrame(self *C.QGraphicsWebView, cb C.intptr_t, painter *C.QPainter, option *C.QStyleOptionGraphicsItem, widget *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *qt.QPainter, option *qt.QStyleOptionGraphicsItem, widget *qt.QWidget), painter *qt.QPainter, option *qt.QStyleOptionGraphicsItem, widget *qt.QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(painter))

	slotval2 := qt.UnsafeNewQStyleOptionGraphicsItem(unsafe.Pointer(option))

	slotval3 := qt.UnsafeNewQWidget(unsafe.Pointer(widget))

	gofunc((&QGraphicsWebView{h: self}).callVirtualBase_PaintWindowFrame, slotval1, slotval2, slotval3)

}

func (this *QGraphicsWebView) callVirtualBase_BoundingRect() *qt.QRectF {

	_goptr := qt.UnsafeNewQRectF(unsafe.Pointer(C.QGraphicsWebView_virtualbase_boundingRect(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsWebView) OnboundingRect(slot func(super func() *qt.QRectF) *qt.QRectF) {
	ok := C.QGraphicsWebView_override_virtual_boundingRect(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_boundingRect
func miqt_exec_callback_QGraphicsWebView_boundingRect(self *C.QGraphicsWebView, cb C.intptr_t) *C.QRectF {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QRectF) *qt.QRectF)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsWebView{h: self}).callVirtualBase_BoundingRect)

	return (*C.QRectF)(virtualReturn.UnsafePointer())

}

func (this *QGraphicsWebView) callVirtualBase_Shape() *qt.QPainterPath {

	_goptr := qt.UnsafeNewQPainterPath(unsafe.Pointer(C.QGraphicsWebView_virtualbase_shape(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsWebView) Onshape(slot func(super func() *qt.QPainterPath) *qt.QPainterPath) {
	ok := C.QGraphicsWebView_override_virtual_shape(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_shape
func miqt_exec_callback_QGraphicsWebView_shape(self *C.QGraphicsWebView, cb C.intptr_t) *C.QPainterPath {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QPainterPath) *qt.QPainterPath)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsWebView{h: self}).callVirtualBase_Shape)

	return (*C.QPainterPath)(virtualReturn.UnsafePointer())

}

func (this *QGraphicsWebView) callVirtualBase_InitStyleOption(option *qt.QStyleOption) {

	C.QGraphicsWebView_virtualbase_initStyleOption(unsafe.Pointer(this.h), (*C.QStyleOption)(option.UnsafePointer()))

}
func (this *QGraphicsWebView) OninitStyleOption(slot func(super func(option *qt.QStyleOption), option *qt.QStyleOption)) {
	ok := C.QGraphicsWebView_override_virtual_initStyleOption(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_initStyleOption
func miqt_exec_callback_QGraphicsWebView_initStyleOption(self *C.QGraphicsWebView, cb C.intptr_t, option *C.QStyleOption) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(option *qt.QStyleOption), option *qt.QStyleOption))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQStyleOption(unsafe.Pointer(option))

	gofunc((&QGraphicsWebView{h: self}).callVirtualBase_InitStyleOption, slotval1)

}

func (this *QGraphicsWebView) callVirtualBase_PropertyChange(propertyName string, value *qt.QVariant) *qt.QVariant {
	propertyName_ms := C.struct_miqt_string{}
	propertyName_ms.data = C.CString(propertyName)
	propertyName_ms.len = C.size_t(len(propertyName))
	defer C.free(unsafe.Pointer(propertyName_ms.data))

	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QGraphicsWebView_virtualbase_propertyChange(unsafe.Pointer(this.h), propertyName_ms, (*C.QVariant)(value.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsWebView) OnpropertyChange(slot func(super func(propertyName string, value *qt.QVariant) *qt.QVariant, propertyName string, value *qt.QVariant) *qt.QVariant) {
	ok := C.QGraphicsWebView_override_virtual_propertyChange(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_propertyChange
func miqt_exec_callback_QGraphicsWebView_propertyChange(self *C.QGraphicsWebView, cb C.intptr_t, propertyName C.struct_miqt_string, value *C.QVariant) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(propertyName string, value *qt.QVariant) *qt.QVariant, propertyName string, value *qt.QVariant) *qt.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var propertyName_ms C.struct_miqt_string = propertyName
	propertyName_ret := C.GoStringN(propertyName_ms.data, C.int(int64(propertyName_ms.len)))
	C.free(unsafe.Pointer(propertyName_ms.data))
	slotval1 := propertyName_ret
	slotval2 := qt.UnsafeNewQVariant(unsafe.Pointer(value))

	virtualReturn := gofunc((&QGraphicsWebView{h: self}).callVirtualBase_PropertyChange, slotval1, slotval2)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}

func (this *QGraphicsWebView) callVirtualBase_WindowFrameEvent(e *qt.QEvent) bool {

	return (bool)(C.QGraphicsWebView_virtualbase_windowFrameEvent(unsafe.Pointer(this.h), (*C.QEvent)(e.UnsafePointer())))

}
func (this *QGraphicsWebView) OnwindowFrameEvent(slot func(super func(e *qt.QEvent) bool, e *qt.QEvent) bool) {
	ok := C.QGraphicsWebView_override_virtual_windowFrameEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_windowFrameEvent
func miqt_exec_callback_QGraphicsWebView_windowFrameEvent(self *C.QGraphicsWebView, cb C.intptr_t, e *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *qt.QEvent) bool, e *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(e))

	virtualReturn := gofunc((&QGraphicsWebView{h: self}).callVirtualBase_WindowFrameEvent, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsWebView) callVirtualBase_WindowFrameSectionAt(pos *qt.QPointF) qt.WindowFrameSection {

	return (qt.WindowFrameSection)(C.QGraphicsWebView_virtualbase_windowFrameSectionAt(unsafe.Pointer(this.h), (*C.QPointF)(pos.UnsafePointer())))

}
func (this *QGraphicsWebView) OnwindowFrameSectionAt(slot func(super func(pos *qt.QPointF) qt.WindowFrameSection, pos *qt.QPointF) qt.WindowFrameSection) {
	ok := C.QGraphicsWebView_override_virtual_windowFrameSectionAt(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_windowFrameSectionAt
func miqt_exec_callback_QGraphicsWebView_windowFrameSectionAt(self *C.QGraphicsWebView, cb C.intptr_t, pos *C.QPointF) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(pos *qt.QPointF) qt.WindowFrameSection, pos *qt.QPointF) qt.WindowFrameSection)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPointF(unsafe.Pointer(pos))

	virtualReturn := gofunc((&QGraphicsWebView{h: self}).callVirtualBase_WindowFrameSectionAt, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QGraphicsWebView) callVirtualBase_ChangeEvent(event *qt.QEvent) {

	C.QGraphicsWebView_virtualbase_changeEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QGraphicsWebView) OnchangeEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QGraphicsWebView_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_changeEvent
func miqt_exec_callback_QGraphicsWebView_changeEvent(self *C.QGraphicsWebView, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QGraphicsWebView{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QGraphicsWebView) callVirtualBase_CloseEvent(event *qt.QCloseEvent) {

	C.QGraphicsWebView_virtualbase_closeEvent(unsafe.Pointer(this.h), (*C.QCloseEvent)(event.UnsafePointer()))

}
func (this *QGraphicsWebView) OncloseEvent(slot func(super func(event *qt.QCloseEvent), event *qt.QCloseEvent)) {
	ok := C.QGraphicsWebView_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_closeEvent
func miqt_exec_callback_QGraphicsWebView_closeEvent(self *C.QGraphicsWebView, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QCloseEvent), event *qt.QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQCloseEvent(unsafe.Pointer(event))

	gofunc((&QGraphicsWebView{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QGraphicsWebView) callVirtualBase_HideEvent(event *qt.QHideEvent) {

	C.QGraphicsWebView_virtualbase_hideEvent(unsafe.Pointer(this.h), (*C.QHideEvent)(event.UnsafePointer()))

}
func (this *QGraphicsWebView) OnhideEvent(slot func(super func(event *qt.QHideEvent), event *qt.QHideEvent)) {
	ok := C.QGraphicsWebView_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_hideEvent
func miqt_exec_callback_QGraphicsWebView_hideEvent(self *C.QGraphicsWebView, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QHideEvent), event *qt.QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQHideEvent(unsafe.Pointer(event))

	gofunc((&QGraphicsWebView{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QGraphicsWebView) callVirtualBase_MoveEvent(event *qt.QGraphicsSceneMoveEvent) {

	C.QGraphicsWebView_virtualbase_moveEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneMoveEvent)(event.UnsafePointer()))

}
func (this *QGraphicsWebView) OnmoveEvent(slot func(super func(event *qt.QGraphicsSceneMoveEvent), event *qt.QGraphicsSceneMoveEvent)) {
	ok := C.QGraphicsWebView_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_moveEvent
func miqt_exec_callback_QGraphicsWebView_moveEvent(self *C.QGraphicsWebView, cb C.intptr_t, event *C.QGraphicsSceneMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QGraphicsSceneMoveEvent), event *qt.QGraphicsSceneMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQGraphicsSceneMoveEvent(unsafe.Pointer(event))

	gofunc((&QGraphicsWebView{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QGraphicsWebView) callVirtualBase_PolishEvent() {

	C.QGraphicsWebView_virtualbase_polishEvent(unsafe.Pointer(this.h))

}
func (this *QGraphicsWebView) OnpolishEvent(slot func(super func())) {
	ok := C.QGraphicsWebView_override_virtual_polishEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_polishEvent
func miqt_exec_callback_QGraphicsWebView_polishEvent(self *C.QGraphicsWebView, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QGraphicsWebView{h: self}).callVirtualBase_PolishEvent)

}

func (this *QGraphicsWebView) callVirtualBase_ResizeEvent(event *qt.QGraphicsSceneResizeEvent) {

	C.QGraphicsWebView_virtualbase_resizeEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneResizeEvent)(event.UnsafePointer()))

}
func (this *QGraphicsWebView) OnresizeEvent(slot func(super func(event *qt.QGraphicsSceneResizeEvent), event *qt.QGraphicsSceneResizeEvent)) {
	ok := C.QGraphicsWebView_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_resizeEvent
func miqt_exec_callback_QGraphicsWebView_resizeEvent(self *C.QGraphicsWebView, cb C.intptr_t, event *C.QGraphicsSceneResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QGraphicsSceneResizeEvent), event *qt.QGraphicsSceneResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQGraphicsSceneResizeEvent(unsafe.Pointer(event))

	gofunc((&QGraphicsWebView{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QGraphicsWebView) callVirtualBase_ShowEvent(event *qt.QShowEvent) {

	C.QGraphicsWebView_virtualbase_showEvent(unsafe.Pointer(this.h), (*C.QShowEvent)(event.UnsafePointer()))

}
func (this *QGraphicsWebView) OnshowEvent(slot func(super func(event *qt.QShowEvent), event *qt.QShowEvent)) {
	ok := C.QGraphicsWebView_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_showEvent
func miqt_exec_callback_QGraphicsWebView_showEvent(self *C.QGraphicsWebView, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QShowEvent), event *qt.QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQShowEvent(unsafe.Pointer(event))

	gofunc((&QGraphicsWebView{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QGraphicsWebView) callVirtualBase_GrabMouseEvent(event *qt.QEvent) {

	C.QGraphicsWebView_virtualbase_grabMouseEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QGraphicsWebView) OngrabMouseEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QGraphicsWebView_override_virtual_grabMouseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_grabMouseEvent
func miqt_exec_callback_QGraphicsWebView_grabMouseEvent(self *C.QGraphicsWebView, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QGraphicsWebView{h: self}).callVirtualBase_GrabMouseEvent, slotval1)

}

func (this *QGraphicsWebView) callVirtualBase_UngrabMouseEvent(event *qt.QEvent) {

	C.QGraphicsWebView_virtualbase_ungrabMouseEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QGraphicsWebView) OnungrabMouseEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QGraphicsWebView_override_virtual_ungrabMouseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_ungrabMouseEvent
func miqt_exec_callback_QGraphicsWebView_ungrabMouseEvent(self *C.QGraphicsWebView, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QGraphicsWebView{h: self}).callVirtualBase_UngrabMouseEvent, slotval1)

}

func (this *QGraphicsWebView) callVirtualBase_GrabKeyboardEvent(event *qt.QEvent) {

	C.QGraphicsWebView_virtualbase_grabKeyboardEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QGraphicsWebView) OngrabKeyboardEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QGraphicsWebView_override_virtual_grabKeyboardEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_grabKeyboardEvent
func miqt_exec_callback_QGraphicsWebView_grabKeyboardEvent(self *C.QGraphicsWebView, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QGraphicsWebView{h: self}).callVirtualBase_GrabKeyboardEvent, slotval1)

}

func (this *QGraphicsWebView) callVirtualBase_UngrabKeyboardEvent(event *qt.QEvent) {

	C.QGraphicsWebView_virtualbase_ungrabKeyboardEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QGraphicsWebView) OnungrabKeyboardEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QGraphicsWebView_override_virtual_ungrabKeyboardEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_ungrabKeyboardEvent
func miqt_exec_callback_QGraphicsWebView_ungrabKeyboardEvent(self *C.QGraphicsWebView, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QGraphicsWebView{h: self}).callVirtualBase_UngrabKeyboardEvent, slotval1)

}

func (this *QGraphicsWebView) callVirtualBase_EventFilter(watched *qt.QObject, event *qt.QEvent) bool {

	return (bool)(C.QGraphicsWebView_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QGraphicsWebView) OneventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	ok := C.QGraphicsWebView_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_eventFilter
func miqt_exec_callback_QGraphicsWebView_eventFilter(self *C.QGraphicsWebView, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QGraphicsWebView{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsWebView) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.QGraphicsWebView_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QGraphicsWebView) OntimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	ok := C.QGraphicsWebView_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_timerEvent
func miqt_exec_callback_QGraphicsWebView_timerEvent(self *C.QGraphicsWebView, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QGraphicsWebView{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QGraphicsWebView) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QGraphicsWebView_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QGraphicsWebView) OnchildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	ok := C.QGraphicsWebView_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_childEvent
func miqt_exec_callback_QGraphicsWebView_childEvent(self *C.QGraphicsWebView, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QGraphicsWebView{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QGraphicsWebView) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QGraphicsWebView_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QGraphicsWebView) OncustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QGraphicsWebView_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_customEvent
func miqt_exec_callback_QGraphicsWebView_customEvent(self *C.QGraphicsWebView, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QGraphicsWebView{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QGraphicsWebView) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QGraphicsWebView_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QGraphicsWebView) OnconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QGraphicsWebView_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_connectNotify
func miqt_exec_callback_QGraphicsWebView_connectNotify(self *C.QGraphicsWebView, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QGraphicsWebView{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QGraphicsWebView) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QGraphicsWebView_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QGraphicsWebView) OndisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QGraphicsWebView_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_disconnectNotify
func miqt_exec_callback_QGraphicsWebView_disconnectNotify(self *C.QGraphicsWebView, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QGraphicsWebView{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

func (this *QGraphicsWebView) callVirtualBase_Advance(phase int) {

	C.QGraphicsWebView_virtualbase_advance(unsafe.Pointer(this.h), (C.int)(phase))

}
func (this *QGraphicsWebView) Onadvance(slot func(super func(phase int), phase int)) {
	ok := C.QGraphicsWebView_override_virtual_advance(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_advance
func miqt_exec_callback_QGraphicsWebView_advance(self *C.QGraphicsWebView, cb C.intptr_t, phase C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(phase int), phase int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(phase)

	gofunc((&QGraphicsWebView{h: self}).callVirtualBase_Advance, slotval1)

}

func (this *QGraphicsWebView) callVirtualBase_Contains(point *qt.QPointF) bool {

	return (bool)(C.QGraphicsWebView_virtualbase_contains(unsafe.Pointer(this.h), (*C.QPointF)(point.UnsafePointer())))

}
func (this *QGraphicsWebView) Oncontains(slot func(super func(point *qt.QPointF) bool, point *qt.QPointF) bool) {
	ok := C.QGraphicsWebView_override_virtual_contains(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_contains
func miqt_exec_callback_QGraphicsWebView_contains(self *C.QGraphicsWebView, cb C.intptr_t, point *C.QPointF) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(point *qt.QPointF) bool, point *qt.QPointF) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPointF(unsafe.Pointer(point))

	virtualReturn := gofunc((&QGraphicsWebView{h: self}).callVirtualBase_Contains, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsWebView) callVirtualBase_CollidesWithItem(other *qt.QGraphicsItem, mode qt.ItemSelectionMode) bool {

	return (bool)(C.QGraphicsWebView_virtualbase_collidesWithItem(unsafe.Pointer(this.h), (*C.QGraphicsItem)(other.UnsafePointer()), (C.int)(mode)))

}
func (this *QGraphicsWebView) OncollidesWithItem(slot func(super func(other *qt.QGraphicsItem, mode qt.ItemSelectionMode) bool, other *qt.QGraphicsItem, mode qt.ItemSelectionMode) bool) {
	ok := C.QGraphicsWebView_override_virtual_collidesWithItem(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_collidesWithItem
func miqt_exec_callback_QGraphicsWebView_collidesWithItem(self *C.QGraphicsWebView, cb C.intptr_t, other *C.QGraphicsItem, mode C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(other *qt.QGraphicsItem, mode qt.ItemSelectionMode) bool, other *qt.QGraphicsItem, mode qt.ItemSelectionMode) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQGraphicsItem(unsafe.Pointer(other))

	slotval2 := (qt.ItemSelectionMode)(mode)

	virtualReturn := gofunc((&QGraphicsWebView{h: self}).callVirtualBase_CollidesWithItem, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsWebView) callVirtualBase_CollidesWithPath(path *qt.QPainterPath, mode qt.ItemSelectionMode) bool {

	return (bool)(C.QGraphicsWebView_virtualbase_collidesWithPath(unsafe.Pointer(this.h), (*C.QPainterPath)(path.UnsafePointer()), (C.int)(mode)))

}
func (this *QGraphicsWebView) OncollidesWithPath(slot func(super func(path *qt.QPainterPath, mode qt.ItemSelectionMode) bool, path *qt.QPainterPath, mode qt.ItemSelectionMode) bool) {
	ok := C.QGraphicsWebView_override_virtual_collidesWithPath(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_collidesWithPath
func miqt_exec_callback_QGraphicsWebView_collidesWithPath(self *C.QGraphicsWebView, cb C.intptr_t, path *C.QPainterPath, mode C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(path *qt.QPainterPath, mode qt.ItemSelectionMode) bool, path *qt.QPainterPath, mode qt.ItemSelectionMode) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainterPath(unsafe.Pointer(path))

	slotval2 := (qt.ItemSelectionMode)(mode)

	virtualReturn := gofunc((&QGraphicsWebView{h: self}).callVirtualBase_CollidesWithPath, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsWebView) callVirtualBase_IsObscuredBy(item *qt.QGraphicsItem) bool {

	return (bool)(C.QGraphicsWebView_virtualbase_isObscuredBy(unsafe.Pointer(this.h), (*C.QGraphicsItem)(item.UnsafePointer())))

}
func (this *QGraphicsWebView) OnisObscuredBy(slot func(super func(item *qt.QGraphicsItem) bool, item *qt.QGraphicsItem) bool) {
	ok := C.QGraphicsWebView_override_virtual_isObscuredBy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_isObscuredBy
func miqt_exec_callback_QGraphicsWebView_isObscuredBy(self *C.QGraphicsWebView, cb C.intptr_t, item *C.QGraphicsItem) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(item *qt.QGraphicsItem) bool, item *qt.QGraphicsItem) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQGraphicsItem(unsafe.Pointer(item))

	virtualReturn := gofunc((&QGraphicsWebView{h: self}).callVirtualBase_IsObscuredBy, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsWebView) callVirtualBase_OpaqueArea() *qt.QPainterPath {

	_goptr := qt.UnsafeNewQPainterPath(unsafe.Pointer(C.QGraphicsWebView_virtualbase_opaqueArea(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsWebView) OnopaqueArea(slot func(super func() *qt.QPainterPath) *qt.QPainterPath) {
	ok := C.QGraphicsWebView_override_virtual_opaqueArea(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_opaqueArea
func miqt_exec_callback_QGraphicsWebView_opaqueArea(self *C.QGraphicsWebView, cb C.intptr_t) *C.QPainterPath {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QPainterPath) *qt.QPainterPath)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsWebView{h: self}).callVirtualBase_OpaqueArea)

	return (*C.QPainterPath)(virtualReturn.UnsafePointer())

}

func (this *QGraphicsWebView) callVirtualBase_SceneEventFilter(watched *qt.QGraphicsItem, event *qt.QEvent) bool {

	return (bool)(C.QGraphicsWebView_virtualbase_sceneEventFilter(unsafe.Pointer(this.h), (*C.QGraphicsItem)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QGraphicsWebView) OnsceneEventFilter(slot func(super func(watched *qt.QGraphicsItem, event *qt.QEvent) bool, watched *qt.QGraphicsItem, event *qt.QEvent) bool) {
	ok := C.QGraphicsWebView_override_virtual_sceneEventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_sceneEventFilter
func miqt_exec_callback_QGraphicsWebView_sceneEventFilter(self *C.QGraphicsWebView, cb C.intptr_t, watched *C.QGraphicsItem, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt.QGraphicsItem, event *qt.QEvent) bool, watched *qt.QGraphicsItem, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQGraphicsItem(unsafe.Pointer(watched))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QGraphicsWebView{h: self}).callVirtualBase_SceneEventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsWebView) callVirtualBase_HoverEnterEvent(event *qt.QGraphicsSceneHoverEvent) {

	C.QGraphicsWebView_virtualbase_hoverEnterEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneHoverEvent)(event.UnsafePointer()))

}
func (this *QGraphicsWebView) OnhoverEnterEvent(slot func(super func(event *qt.QGraphicsSceneHoverEvent), event *qt.QGraphicsSceneHoverEvent)) {
	ok := C.QGraphicsWebView_override_virtual_hoverEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_hoverEnterEvent
func miqt_exec_callback_QGraphicsWebView_hoverEnterEvent(self *C.QGraphicsWebView, cb C.intptr_t, event *C.QGraphicsSceneHoverEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QGraphicsSceneHoverEvent), event *qt.QGraphicsSceneHoverEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQGraphicsSceneHoverEvent(unsafe.Pointer(event))

	gofunc((&QGraphicsWebView{h: self}).callVirtualBase_HoverEnterEvent, slotval1)

}

func (this *QGraphicsWebView) callVirtualBase_SupportsExtension(extension qt.QGraphicsItem__Extension) bool {

	return (bool)(C.QGraphicsWebView_virtualbase_supportsExtension(unsafe.Pointer(this.h), (C.int)(extension)))

}
func (this *QGraphicsWebView) OnsupportsExtension(slot func(super func(extension qt.QGraphicsItem__Extension) bool, extension qt.QGraphicsItem__Extension) bool) {
	ok := C.QGraphicsWebView_override_virtual_supportsExtension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_supportsExtension
func miqt_exec_callback_QGraphicsWebView_supportsExtension(self *C.QGraphicsWebView, cb C.intptr_t, extension C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(extension qt.QGraphicsItem__Extension) bool, extension qt.QGraphicsItem__Extension) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt.QGraphicsItem__Extension)(extension)

	virtualReturn := gofunc((&QGraphicsWebView{h: self}).callVirtualBase_SupportsExtension, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsWebView) callVirtualBase_SetExtension(extension qt.QGraphicsItem__Extension, variant *qt.QVariant) {

	C.QGraphicsWebView_virtualbase_setExtension(unsafe.Pointer(this.h), (C.int)(extension), (*C.QVariant)(variant.UnsafePointer()))

}
func (this *QGraphicsWebView) OnsetExtension(slot func(super func(extension qt.QGraphicsItem__Extension, variant *qt.QVariant), extension qt.QGraphicsItem__Extension, variant *qt.QVariant)) {
	ok := C.QGraphicsWebView_override_virtual_setExtension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_setExtension
func miqt_exec_callback_QGraphicsWebView_setExtension(self *C.QGraphicsWebView, cb C.intptr_t, extension C.int, variant *C.QVariant) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(extension qt.QGraphicsItem__Extension, variant *qt.QVariant), extension qt.QGraphicsItem__Extension, variant *qt.QVariant))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt.QGraphicsItem__Extension)(extension)

	slotval2 := qt.UnsafeNewQVariant(unsafe.Pointer(variant))

	gofunc((&QGraphicsWebView{h: self}).callVirtualBase_SetExtension, slotval1, slotval2)

}

func (this *QGraphicsWebView) callVirtualBase_Extension(variant *qt.QVariant) *qt.QVariant {

	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QGraphicsWebView_virtualbase_extension(unsafe.Pointer(this.h), (*C.QVariant)(variant.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsWebView) Onextension(slot func(super func(variant *qt.QVariant) *qt.QVariant, variant *qt.QVariant) *qt.QVariant) {
	ok := C.QGraphicsWebView_override_virtual_extension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_extension
func miqt_exec_callback_QGraphicsWebView_extension(self *C.QGraphicsWebView, cb C.intptr_t, variant *C.QVariant) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(variant *qt.QVariant) *qt.QVariant, variant *qt.QVariant) *qt.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQVariant(unsafe.Pointer(variant))

	virtualReturn := gofunc((&QGraphicsWebView{h: self}).callVirtualBase_Extension, slotval1)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}

// Delete this object from C++ memory.
func (this *QGraphicsWebView) Delete() {
	C.QGraphicsWebView_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGraphicsWebView) GoGC() {
	runtime.SetFinalizer(this, func(this *QGraphicsWebView) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
