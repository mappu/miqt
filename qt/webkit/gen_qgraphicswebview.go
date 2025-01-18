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
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QGraphicsWebView_MetaObject(this.h)))
}

func (this *QGraphicsWebView) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QGraphicsWebView_Metacast(this.h, param1_Cstring))
}

func QGraphicsWebView_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsWebView_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGraphicsWebView_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsWebView_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGraphicsWebView) Page() *QWebPage {
	return newQWebPage(C.QGraphicsWebView_Page(this.h))
}

func (this *QGraphicsWebView) SetPage(page *QWebPage) {
	C.QGraphicsWebView_SetPage(this.h, page.cPointer())
}

func (this *QGraphicsWebView) Url() *qt.QUrl {
	_goptr := qt.UnsafeNewQUrl(unsafe.Pointer(C.QGraphicsWebView_Url(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsWebView) SetUrl(url *qt.QUrl) {
	C.QGraphicsWebView_SetUrl(this.h, (*C.QUrl)(url.UnsafePointer()))
}

func (this *QGraphicsWebView) Title() string {
	var _ms C.struct_miqt_string = C.QGraphicsWebView_Title(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGraphicsWebView) Icon() *qt.QIcon {
	_goptr := qt.UnsafeNewQIcon(unsafe.Pointer(C.QGraphicsWebView_Icon(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsWebView) ZoomFactor() float64 {
	return (float64)(C.QGraphicsWebView_ZoomFactor(this.h))
}

func (this *QGraphicsWebView) SetZoomFactor(zoomFactor float64) {
	C.QGraphicsWebView_SetZoomFactor(this.h, (C.double)(zoomFactor))
}

func (this *QGraphicsWebView) IsModified() bool {
	return (bool)(C.QGraphicsWebView_IsModified(this.h))
}

func (this *QGraphicsWebView) Load(url *qt.QUrl) {
	C.QGraphicsWebView_Load(this.h, (*C.QUrl)(url.UnsafePointer()))
}

func (this *QGraphicsWebView) LoadWithRequest(request *network.QNetworkRequest) {
	C.QGraphicsWebView_LoadWithRequest(this.h, (*C.QNetworkRequest)(request.UnsafePointer()))
}

func (this *QGraphicsWebView) SetHtml(html string) {
	html_ms := C.struct_miqt_string{}
	html_ms.data = C.CString(html)
	html_ms.len = C.size_t(len(html))
	defer C.free(unsafe.Pointer(html_ms.data))
	C.QGraphicsWebView_SetHtml(this.h, html_ms)
}

func (this *QGraphicsWebView) SetContent(data []byte) {
	data_alias := C.struct_miqt_string{}
	data_alias.data = (*C.char)(unsafe.Pointer(&data[0]))
	data_alias.len = C.size_t(len(data))
	C.QGraphicsWebView_SetContent(this.h, data_alias)
}

func (this *QGraphicsWebView) History() *QWebHistory {
	return newQWebHistory(C.QGraphicsWebView_History(this.h))
}

func (this *QGraphicsWebView) Settings() *QWebSettings {
	return newQWebSettings(C.QGraphicsWebView_Settings(this.h))
}

func (this *QGraphicsWebView) PageAction(action QWebPage__WebAction) *qt.QAction {
	return qt.UnsafeNewQAction(unsafe.Pointer(C.QGraphicsWebView_PageAction(this.h, (C.int)(action))))
}

func (this *QGraphicsWebView) TriggerPageAction(action QWebPage__WebAction) {
	C.QGraphicsWebView_TriggerPageAction(this.h, (C.int)(action))
}

func (this *QGraphicsWebView) FindText(subString string) bool {
	subString_ms := C.struct_miqt_string{}
	subString_ms.data = C.CString(subString)
	subString_ms.len = C.size_t(len(subString))
	defer C.free(unsafe.Pointer(subString_ms.data))
	return (bool)(C.QGraphicsWebView_FindText(this.h, subString_ms))
}

func (this *QGraphicsWebView) ResizesToContents() bool {
	return (bool)(C.QGraphicsWebView_ResizesToContents(this.h))
}

func (this *QGraphicsWebView) SetResizesToContents(enabled bool) {
	C.QGraphicsWebView_SetResizesToContents(this.h, (C.bool)(enabled))
}

func (this *QGraphicsWebView) IsTiledBackingStoreFrozen() bool {
	return (bool)(C.QGraphicsWebView_IsTiledBackingStoreFrozen(this.h))
}

func (this *QGraphicsWebView) SetTiledBackingStoreFrozen(frozen bool) {
	C.QGraphicsWebView_SetTiledBackingStoreFrozen(this.h, (C.bool)(frozen))
}

func (this *QGraphicsWebView) SetGeometry(rect *qt.QRectF) {
	C.QGraphicsWebView_SetGeometry(this.h, (*C.QRectF)(rect.UnsafePointer()))
}

func (this *QGraphicsWebView) UpdateGeometry() {
	C.QGraphicsWebView_UpdateGeometry(this.h)
}

func (this *QGraphicsWebView) Paint(param1 *qt.QPainter, options *qt.QStyleOptionGraphicsItem, widget *qt.QWidget) {
	C.QGraphicsWebView_Paint(this.h, (*C.QPainter)(param1.UnsafePointer()), (*C.QStyleOptionGraphicsItem)(options.UnsafePointer()), (*C.QWidget)(widget.UnsafePointer()))
}

func (this *QGraphicsWebView) ItemChange(change qt.QGraphicsItem__GraphicsItemChange, value *qt.QVariant) *qt.QVariant {
	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QGraphicsWebView_ItemChange(this.h, (C.int)(change), (*C.QVariant)(value.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsWebView) Event(param1 *qt.QEvent) bool {
	return (bool)(C.QGraphicsWebView_Event(this.h, (*C.QEvent)(param1.UnsafePointer())))
}

func (this *QGraphicsWebView) SizeHint(which qt.SizeHint, constraint *qt.QSizeF) *qt.QSizeF {
	_goptr := qt.UnsafeNewQSizeF(unsafe.Pointer(C.QGraphicsWebView_SizeHint(this.h, (C.int)(which), (*C.QSizeF)(constraint.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsWebView) InputMethodQuery(query qt.InputMethodQuery) *qt.QVariant {
	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QGraphicsWebView_InputMethodQuery(this.h, (C.int)(query))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsWebView) RenderHints() qt.QPainter__RenderHint {
	return (qt.QPainter__RenderHint)(C.QGraphicsWebView_RenderHints(this.h))
}

func (this *QGraphicsWebView) SetRenderHints(renderHints qt.QPainter__RenderHint) {
	C.QGraphicsWebView_SetRenderHints(this.h, (C.int)(renderHints))
}

func (this *QGraphicsWebView) SetRenderHint(param1 qt.QPainter__RenderHint) {
	C.QGraphicsWebView_SetRenderHint(this.h, (C.int)(param1))
}

func (this *QGraphicsWebView) Stop() {
	C.QGraphicsWebView_Stop(this.h)
}

func (this *QGraphicsWebView) Back() {
	C.QGraphicsWebView_Back(this.h)
}

func (this *QGraphicsWebView) Forward() {
	C.QGraphicsWebView_Forward(this.h)
}

func (this *QGraphicsWebView) Reload() {
	C.QGraphicsWebView_Reload(this.h)
}

func (this *QGraphicsWebView) LoadStarted() {
	C.QGraphicsWebView_LoadStarted(this.h)
}
func (this *QGraphicsWebView) OnLoadStarted(slot func()) {
	C.QGraphicsWebView_connect_LoadStarted(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsWebView_LoadStarted
func miqt_exec_callback_QGraphicsWebView_LoadStarted(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QGraphicsWebView) LoadFinished(param1 bool) {
	C.QGraphicsWebView_LoadFinished(this.h, (C.bool)(param1))
}
func (this *QGraphicsWebView) OnLoadFinished(slot func(param1 bool)) {
	C.QGraphicsWebView_connect_LoadFinished(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsWebView_LoadFinished
func miqt_exec_callback_QGraphicsWebView_LoadFinished(cb C.intptr_t, param1 C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(param1)

	gofunc(slotval1)
}

func (this *QGraphicsWebView) LoadProgress(progress int) {
	C.QGraphicsWebView_LoadProgress(this.h, (C.int)(progress))
}
func (this *QGraphicsWebView) OnLoadProgress(slot func(progress int)) {
	C.QGraphicsWebView_connect_LoadProgress(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsWebView_LoadProgress
func miqt_exec_callback_QGraphicsWebView_LoadProgress(cb C.intptr_t, progress C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(progress int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(progress)

	gofunc(slotval1)
}

func (this *QGraphicsWebView) UrlChanged(param1 *qt.QUrl) {
	C.QGraphicsWebView_UrlChanged(this.h, (*C.QUrl)(param1.UnsafePointer()))
}
func (this *QGraphicsWebView) OnUrlChanged(slot func(param1 *qt.QUrl)) {
	C.QGraphicsWebView_connect_UrlChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsWebView_UrlChanged
func miqt_exec_callback_QGraphicsWebView_UrlChanged(cb C.intptr_t, param1 *C.QUrl) {
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
	C.QGraphicsWebView_TitleChanged(this.h, param1_ms)
}
func (this *QGraphicsWebView) OnTitleChanged(slot func(param1 string)) {
	C.QGraphicsWebView_connect_TitleChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsWebView_TitleChanged
func miqt_exec_callback_QGraphicsWebView_TitleChanged(cb C.intptr_t, param1 C.struct_miqt_string) {
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
	C.QGraphicsWebView_IconChanged(this.h)
}
func (this *QGraphicsWebView) OnIconChanged(slot func()) {
	C.QGraphicsWebView_connect_IconChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsWebView_IconChanged
func miqt_exec_callback_QGraphicsWebView_IconChanged(cb C.intptr_t) {
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
	C.QGraphicsWebView_StatusBarMessage(this.h, message_ms)
}
func (this *QGraphicsWebView) OnStatusBarMessage(slot func(message string)) {
	C.QGraphicsWebView_connect_StatusBarMessage(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsWebView_StatusBarMessage
func miqt_exec_callback_QGraphicsWebView_StatusBarMessage(cb C.intptr_t, message C.struct_miqt_string) {
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
	C.QGraphicsWebView_LinkClicked(this.h, (*C.QUrl)(param1.UnsafePointer()))
}
func (this *QGraphicsWebView) OnLinkClicked(slot func(param1 *qt.QUrl)) {
	C.QGraphicsWebView_connect_LinkClicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsWebView_LinkClicked
func miqt_exec_callback_QGraphicsWebView_LinkClicked(cb C.intptr_t, param1 *C.QUrl) {
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
	var _ms C.struct_miqt_string = C.QGraphicsWebView_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGraphicsWebView_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsWebView_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGraphicsWebView_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsWebView_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGraphicsWebView_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsWebView_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGraphicsWebView) Load2(request *network.QNetworkRequest, operation network.QNetworkAccessManager__Operation) {
	C.QGraphicsWebView_Load2(this.h, (*C.QNetworkRequest)(request.UnsafePointer()), (C.int)(operation))
}

func (this *QGraphicsWebView) Load3(request *network.QNetworkRequest, operation network.QNetworkAccessManager__Operation, body []byte) {
	body_alias := C.struct_miqt_string{}
	body_alias.data = (*C.char)(unsafe.Pointer(&body[0]))
	body_alias.len = C.size_t(len(body))
	C.QGraphicsWebView_Load3(this.h, (*C.QNetworkRequest)(request.UnsafePointer()), (C.int)(operation), body_alias)
}

func (this *QGraphicsWebView) SetHtml2(html string, baseUrl *qt.QUrl) {
	html_ms := C.struct_miqt_string{}
	html_ms.data = C.CString(html)
	html_ms.len = C.size_t(len(html))
	defer C.free(unsafe.Pointer(html_ms.data))
	C.QGraphicsWebView_SetHtml2(this.h, html_ms, (*C.QUrl)(baseUrl.UnsafePointer()))
}

func (this *QGraphicsWebView) SetContent2(data []byte, mimeType string) {
	data_alias := C.struct_miqt_string{}
	data_alias.data = (*C.char)(unsafe.Pointer(&data[0]))
	data_alias.len = C.size_t(len(data))
	mimeType_ms := C.struct_miqt_string{}
	mimeType_ms.data = C.CString(mimeType)
	mimeType_ms.len = C.size_t(len(mimeType))
	defer C.free(unsafe.Pointer(mimeType_ms.data))
	C.QGraphicsWebView_SetContent2(this.h, data_alias, mimeType_ms)
}

func (this *QGraphicsWebView) SetContent3(data []byte, mimeType string, baseUrl *qt.QUrl) {
	data_alias := C.struct_miqt_string{}
	data_alias.data = (*C.char)(unsafe.Pointer(&data[0]))
	data_alias.len = C.size_t(len(data))
	mimeType_ms := C.struct_miqt_string{}
	mimeType_ms.data = C.CString(mimeType)
	mimeType_ms.len = C.size_t(len(mimeType))
	defer C.free(unsafe.Pointer(mimeType_ms.data))
	C.QGraphicsWebView_SetContent3(this.h, data_alias, mimeType_ms, (*C.QUrl)(baseUrl.UnsafePointer()))
}

func (this *QGraphicsWebView) TriggerPageAction2(action QWebPage__WebAction, checked bool) {
	C.QGraphicsWebView_TriggerPageAction2(this.h, (C.int)(action), (C.bool)(checked))
}

func (this *QGraphicsWebView) FindText2(subString string, options QWebPage__FindFlag) bool {
	subString_ms := C.struct_miqt_string{}
	subString_ms.data = C.CString(subString)
	subString_ms.len = C.size_t(len(subString))
	defer C.free(unsafe.Pointer(subString_ms.data))
	return (bool)(C.QGraphicsWebView_FindText2(this.h, subString_ms, (C.int)(options)))
}

func (this *QGraphicsWebView) SetRenderHint2(param1 qt.QPainter__RenderHint, enabled bool) {
	C.QGraphicsWebView_SetRenderHint2(this.h, (C.int)(param1), (C.bool)(enabled))
}

func (this *QGraphicsWebView) callVirtualBase_SetGeometry(rect *qt.QRectF) {

	C.QGraphicsWebView_virtualbase_SetGeometry(unsafe.Pointer(this.h), (*C.QRectF)(rect.UnsafePointer()))

}
func (this *QGraphicsWebView) OnSetGeometry(slot func(super func(rect *qt.QRectF), rect *qt.QRectF)) {
	ok := C.QGraphicsWebView_override_virtual_SetGeometry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_SetGeometry
func miqt_exec_callback_QGraphicsWebView_SetGeometry(self *C.QGraphicsWebView, cb C.intptr_t, rect *C.QRectF) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(rect *qt.QRectF), rect *qt.QRectF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQRectF(unsafe.Pointer(rect))

	gofunc((&QGraphicsWebView{h: self}).callVirtualBase_SetGeometry, slotval1)

}

func (this *QGraphicsWebView) callVirtualBase_UpdateGeometry() {

	C.QGraphicsWebView_virtualbase_UpdateGeometry(unsafe.Pointer(this.h))

}
func (this *QGraphicsWebView) OnUpdateGeometry(slot func(super func())) {
	ok := C.QGraphicsWebView_override_virtual_UpdateGeometry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_UpdateGeometry
func miqt_exec_callback_QGraphicsWebView_UpdateGeometry(self *C.QGraphicsWebView, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QGraphicsWebView{h: self}).callVirtualBase_UpdateGeometry)

}

func (this *QGraphicsWebView) callVirtualBase_Paint(param1 *qt.QPainter, options *qt.QStyleOptionGraphicsItem, widget *qt.QWidget) {

	C.QGraphicsWebView_virtualbase_Paint(unsafe.Pointer(this.h), (*C.QPainter)(param1.UnsafePointer()), (*C.QStyleOptionGraphicsItem)(options.UnsafePointer()), (*C.QWidget)(widget.UnsafePointer()))

}
func (this *QGraphicsWebView) OnPaint(slot func(super func(param1 *qt.QPainter, options *qt.QStyleOptionGraphicsItem, widget *qt.QWidget), param1 *qt.QPainter, options *qt.QStyleOptionGraphicsItem, widget *qt.QWidget)) {
	ok := C.QGraphicsWebView_override_virtual_Paint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_Paint
func miqt_exec_callback_QGraphicsWebView_Paint(self *C.QGraphicsWebView, cb C.intptr_t, param1 *C.QPainter, options *C.QStyleOptionGraphicsItem, widget *C.QWidget) {
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

	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QGraphicsWebView_virtualbase_ItemChange(unsafe.Pointer(this.h), (C.int)(change), (*C.QVariant)(value.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsWebView) OnItemChange(slot func(super func(change qt.QGraphicsItem__GraphicsItemChange, value *qt.QVariant) *qt.QVariant, change qt.QGraphicsItem__GraphicsItemChange, value *qt.QVariant) *qt.QVariant) {
	ok := C.QGraphicsWebView_override_virtual_ItemChange(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_ItemChange
func miqt_exec_callback_QGraphicsWebView_ItemChange(self *C.QGraphicsWebView, cb C.intptr_t, change C.int, value *C.QVariant) *C.QVariant {
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

	return (bool)(C.QGraphicsWebView_virtualbase_Event(unsafe.Pointer(this.h), (*C.QEvent)(param1.UnsafePointer())))

}
func (this *QGraphicsWebView) OnEvent(slot func(super func(param1 *qt.QEvent) bool, param1 *qt.QEvent) bool) {
	ok := C.QGraphicsWebView_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_Event
func miqt_exec_callback_QGraphicsWebView_Event(self *C.QGraphicsWebView, cb C.intptr_t, param1 *C.QEvent) C.bool {
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

	_goptr := qt.UnsafeNewQSizeF(unsafe.Pointer(C.QGraphicsWebView_virtualbase_SizeHint(unsafe.Pointer(this.h), (C.int)(which), (*C.QSizeF)(constraint.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsWebView) OnSizeHint(slot func(super func(which qt.SizeHint, constraint *qt.QSizeF) *qt.QSizeF, which qt.SizeHint, constraint *qt.QSizeF) *qt.QSizeF) {
	ok := C.QGraphicsWebView_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_SizeHint
func miqt_exec_callback_QGraphicsWebView_SizeHint(self *C.QGraphicsWebView, cb C.intptr_t, which C.int, constraint *C.QSizeF) *C.QSizeF {
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

	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QGraphicsWebView_virtualbase_InputMethodQuery(unsafe.Pointer(this.h), (C.int)(query))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsWebView) OnInputMethodQuery(slot func(super func(query qt.InputMethodQuery) *qt.QVariant, query qt.InputMethodQuery) *qt.QVariant) {
	ok := C.QGraphicsWebView_override_virtual_InputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_InputMethodQuery
func miqt_exec_callback_QGraphicsWebView_InputMethodQuery(self *C.QGraphicsWebView, cb C.intptr_t, query C.int) *C.QVariant {
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

	C.QGraphicsWebView_virtualbase_MousePressEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneMouseEvent)(param1.UnsafePointer()))

}
func (this *QGraphicsWebView) OnMousePressEvent(slot func(super func(param1 *qt.QGraphicsSceneMouseEvent), param1 *qt.QGraphicsSceneMouseEvent)) {
	ok := C.QGraphicsWebView_override_virtual_MousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_MousePressEvent
func miqt_exec_callback_QGraphicsWebView_MousePressEvent(self *C.QGraphicsWebView, cb C.intptr_t, param1 *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QGraphicsSceneMouseEvent), param1 *qt.QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQGraphicsSceneMouseEvent(unsafe.Pointer(param1))

	gofunc((&QGraphicsWebView{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QGraphicsWebView) callVirtualBase_MouseDoubleClickEvent(param1 *qt.QGraphicsSceneMouseEvent) {

	C.QGraphicsWebView_virtualbase_MouseDoubleClickEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneMouseEvent)(param1.UnsafePointer()))

}
func (this *QGraphicsWebView) OnMouseDoubleClickEvent(slot func(super func(param1 *qt.QGraphicsSceneMouseEvent), param1 *qt.QGraphicsSceneMouseEvent)) {
	ok := C.QGraphicsWebView_override_virtual_MouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_MouseDoubleClickEvent
func miqt_exec_callback_QGraphicsWebView_MouseDoubleClickEvent(self *C.QGraphicsWebView, cb C.intptr_t, param1 *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QGraphicsSceneMouseEvent), param1 *qt.QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQGraphicsSceneMouseEvent(unsafe.Pointer(param1))

	gofunc((&QGraphicsWebView{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QGraphicsWebView) callVirtualBase_MouseReleaseEvent(param1 *qt.QGraphicsSceneMouseEvent) {

	C.QGraphicsWebView_virtualbase_MouseReleaseEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneMouseEvent)(param1.UnsafePointer()))

}
func (this *QGraphicsWebView) OnMouseReleaseEvent(slot func(super func(param1 *qt.QGraphicsSceneMouseEvent), param1 *qt.QGraphicsSceneMouseEvent)) {
	ok := C.QGraphicsWebView_override_virtual_MouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_MouseReleaseEvent
func miqt_exec_callback_QGraphicsWebView_MouseReleaseEvent(self *C.QGraphicsWebView, cb C.intptr_t, param1 *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QGraphicsSceneMouseEvent), param1 *qt.QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQGraphicsSceneMouseEvent(unsafe.Pointer(param1))

	gofunc((&QGraphicsWebView{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QGraphicsWebView) callVirtualBase_MouseMoveEvent(param1 *qt.QGraphicsSceneMouseEvent) {

	C.QGraphicsWebView_virtualbase_MouseMoveEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneMouseEvent)(param1.UnsafePointer()))

}
func (this *QGraphicsWebView) OnMouseMoveEvent(slot func(super func(param1 *qt.QGraphicsSceneMouseEvent), param1 *qt.QGraphicsSceneMouseEvent)) {
	ok := C.QGraphicsWebView_override_virtual_MouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_MouseMoveEvent
func miqt_exec_callback_QGraphicsWebView_MouseMoveEvent(self *C.QGraphicsWebView, cb C.intptr_t, param1 *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QGraphicsSceneMouseEvent), param1 *qt.QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQGraphicsSceneMouseEvent(unsafe.Pointer(param1))

	gofunc((&QGraphicsWebView{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QGraphicsWebView) callVirtualBase_HoverMoveEvent(param1 *qt.QGraphicsSceneHoverEvent) {

	C.QGraphicsWebView_virtualbase_HoverMoveEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneHoverEvent)(param1.UnsafePointer()))

}
func (this *QGraphicsWebView) OnHoverMoveEvent(slot func(super func(param1 *qt.QGraphicsSceneHoverEvent), param1 *qt.QGraphicsSceneHoverEvent)) {
	ok := C.QGraphicsWebView_override_virtual_HoverMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_HoverMoveEvent
func miqt_exec_callback_QGraphicsWebView_HoverMoveEvent(self *C.QGraphicsWebView, cb C.intptr_t, param1 *C.QGraphicsSceneHoverEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QGraphicsSceneHoverEvent), param1 *qt.QGraphicsSceneHoverEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQGraphicsSceneHoverEvent(unsafe.Pointer(param1))

	gofunc((&QGraphicsWebView{h: self}).callVirtualBase_HoverMoveEvent, slotval1)

}

func (this *QGraphicsWebView) callVirtualBase_HoverLeaveEvent(param1 *qt.QGraphicsSceneHoverEvent) {

	C.QGraphicsWebView_virtualbase_HoverLeaveEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneHoverEvent)(param1.UnsafePointer()))

}
func (this *QGraphicsWebView) OnHoverLeaveEvent(slot func(super func(param1 *qt.QGraphicsSceneHoverEvent), param1 *qt.QGraphicsSceneHoverEvent)) {
	ok := C.QGraphicsWebView_override_virtual_HoverLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_HoverLeaveEvent
func miqt_exec_callback_QGraphicsWebView_HoverLeaveEvent(self *C.QGraphicsWebView, cb C.intptr_t, param1 *C.QGraphicsSceneHoverEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QGraphicsSceneHoverEvent), param1 *qt.QGraphicsSceneHoverEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQGraphicsSceneHoverEvent(unsafe.Pointer(param1))

	gofunc((&QGraphicsWebView{h: self}).callVirtualBase_HoverLeaveEvent, slotval1)

}

func (this *QGraphicsWebView) callVirtualBase_WheelEvent(param1 *qt.QGraphicsSceneWheelEvent) {

	C.QGraphicsWebView_virtualbase_WheelEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneWheelEvent)(param1.UnsafePointer()))

}
func (this *QGraphicsWebView) OnWheelEvent(slot func(super func(param1 *qt.QGraphicsSceneWheelEvent), param1 *qt.QGraphicsSceneWheelEvent)) {
	ok := C.QGraphicsWebView_override_virtual_WheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_WheelEvent
func miqt_exec_callback_QGraphicsWebView_WheelEvent(self *C.QGraphicsWebView, cb C.intptr_t, param1 *C.QGraphicsSceneWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QGraphicsSceneWheelEvent), param1 *qt.QGraphicsSceneWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQGraphicsSceneWheelEvent(unsafe.Pointer(param1))

	gofunc((&QGraphicsWebView{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QGraphicsWebView) callVirtualBase_KeyPressEvent(param1 *qt.QKeyEvent) {

	C.QGraphicsWebView_virtualbase_KeyPressEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(param1.UnsafePointer()))

}
func (this *QGraphicsWebView) OnKeyPressEvent(slot func(super func(param1 *qt.QKeyEvent), param1 *qt.QKeyEvent)) {
	ok := C.QGraphicsWebView_override_virtual_KeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_KeyPressEvent
func miqt_exec_callback_QGraphicsWebView_KeyPressEvent(self *C.QGraphicsWebView, cb C.intptr_t, param1 *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QKeyEvent), param1 *qt.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQKeyEvent(unsafe.Pointer(param1))

	gofunc((&QGraphicsWebView{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QGraphicsWebView) callVirtualBase_KeyReleaseEvent(param1 *qt.QKeyEvent) {

	C.QGraphicsWebView_virtualbase_KeyReleaseEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(param1.UnsafePointer()))

}
func (this *QGraphicsWebView) OnKeyReleaseEvent(slot func(super func(param1 *qt.QKeyEvent), param1 *qt.QKeyEvent)) {
	ok := C.QGraphicsWebView_override_virtual_KeyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_KeyReleaseEvent
func miqt_exec_callback_QGraphicsWebView_KeyReleaseEvent(self *C.QGraphicsWebView, cb C.intptr_t, param1 *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QKeyEvent), param1 *qt.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQKeyEvent(unsafe.Pointer(param1))

	gofunc((&QGraphicsWebView{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QGraphicsWebView) callVirtualBase_ContextMenuEvent(param1 *qt.QGraphicsSceneContextMenuEvent) {

	C.QGraphicsWebView_virtualbase_ContextMenuEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneContextMenuEvent)(param1.UnsafePointer()))

}
func (this *QGraphicsWebView) OnContextMenuEvent(slot func(super func(param1 *qt.QGraphicsSceneContextMenuEvent), param1 *qt.QGraphicsSceneContextMenuEvent)) {
	ok := C.QGraphicsWebView_override_virtual_ContextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_ContextMenuEvent
func miqt_exec_callback_QGraphicsWebView_ContextMenuEvent(self *C.QGraphicsWebView, cb C.intptr_t, param1 *C.QGraphicsSceneContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QGraphicsSceneContextMenuEvent), param1 *qt.QGraphicsSceneContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQGraphicsSceneContextMenuEvent(unsafe.Pointer(param1))

	gofunc((&QGraphicsWebView{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QGraphicsWebView) callVirtualBase_DragEnterEvent(param1 *qt.QGraphicsSceneDragDropEvent) {

	C.QGraphicsWebView_virtualbase_DragEnterEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneDragDropEvent)(param1.UnsafePointer()))

}
func (this *QGraphicsWebView) OnDragEnterEvent(slot func(super func(param1 *qt.QGraphicsSceneDragDropEvent), param1 *qt.QGraphicsSceneDragDropEvent)) {
	ok := C.QGraphicsWebView_override_virtual_DragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_DragEnterEvent
func miqt_exec_callback_QGraphicsWebView_DragEnterEvent(self *C.QGraphicsWebView, cb C.intptr_t, param1 *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QGraphicsSceneDragDropEvent), param1 *qt.QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQGraphicsSceneDragDropEvent(unsafe.Pointer(param1))

	gofunc((&QGraphicsWebView{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QGraphicsWebView) callVirtualBase_DragLeaveEvent(param1 *qt.QGraphicsSceneDragDropEvent) {

	C.QGraphicsWebView_virtualbase_DragLeaveEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneDragDropEvent)(param1.UnsafePointer()))

}
func (this *QGraphicsWebView) OnDragLeaveEvent(slot func(super func(param1 *qt.QGraphicsSceneDragDropEvent), param1 *qt.QGraphicsSceneDragDropEvent)) {
	ok := C.QGraphicsWebView_override_virtual_DragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_DragLeaveEvent
func miqt_exec_callback_QGraphicsWebView_DragLeaveEvent(self *C.QGraphicsWebView, cb C.intptr_t, param1 *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QGraphicsSceneDragDropEvent), param1 *qt.QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQGraphicsSceneDragDropEvent(unsafe.Pointer(param1))

	gofunc((&QGraphicsWebView{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QGraphicsWebView) callVirtualBase_DragMoveEvent(param1 *qt.QGraphicsSceneDragDropEvent) {

	C.QGraphicsWebView_virtualbase_DragMoveEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneDragDropEvent)(param1.UnsafePointer()))

}
func (this *QGraphicsWebView) OnDragMoveEvent(slot func(super func(param1 *qt.QGraphicsSceneDragDropEvent), param1 *qt.QGraphicsSceneDragDropEvent)) {
	ok := C.QGraphicsWebView_override_virtual_DragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_DragMoveEvent
func miqt_exec_callback_QGraphicsWebView_DragMoveEvent(self *C.QGraphicsWebView, cb C.intptr_t, param1 *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QGraphicsSceneDragDropEvent), param1 *qt.QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQGraphicsSceneDragDropEvent(unsafe.Pointer(param1))

	gofunc((&QGraphicsWebView{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QGraphicsWebView) callVirtualBase_DropEvent(param1 *qt.QGraphicsSceneDragDropEvent) {

	C.QGraphicsWebView_virtualbase_DropEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneDragDropEvent)(param1.UnsafePointer()))

}
func (this *QGraphicsWebView) OnDropEvent(slot func(super func(param1 *qt.QGraphicsSceneDragDropEvent), param1 *qt.QGraphicsSceneDragDropEvent)) {
	ok := C.QGraphicsWebView_override_virtual_DropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_DropEvent
func miqt_exec_callback_QGraphicsWebView_DropEvent(self *C.QGraphicsWebView, cb C.intptr_t, param1 *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QGraphicsSceneDragDropEvent), param1 *qt.QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQGraphicsSceneDragDropEvent(unsafe.Pointer(param1))

	gofunc((&QGraphicsWebView{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QGraphicsWebView) callVirtualBase_FocusInEvent(param1 *qt.QFocusEvent) {

	C.QGraphicsWebView_virtualbase_FocusInEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(param1.UnsafePointer()))

}
func (this *QGraphicsWebView) OnFocusInEvent(slot func(super func(param1 *qt.QFocusEvent), param1 *qt.QFocusEvent)) {
	ok := C.QGraphicsWebView_override_virtual_FocusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_FocusInEvent
func miqt_exec_callback_QGraphicsWebView_FocusInEvent(self *C.QGraphicsWebView, cb C.intptr_t, param1 *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QFocusEvent), param1 *qt.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFocusEvent(unsafe.Pointer(param1))

	gofunc((&QGraphicsWebView{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QGraphicsWebView) callVirtualBase_FocusOutEvent(param1 *qt.QFocusEvent) {

	C.QGraphicsWebView_virtualbase_FocusOutEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(param1.UnsafePointer()))

}
func (this *QGraphicsWebView) OnFocusOutEvent(slot func(super func(param1 *qt.QFocusEvent), param1 *qt.QFocusEvent)) {
	ok := C.QGraphicsWebView_override_virtual_FocusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_FocusOutEvent
func miqt_exec_callback_QGraphicsWebView_FocusOutEvent(self *C.QGraphicsWebView, cb C.intptr_t, param1 *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QFocusEvent), param1 *qt.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFocusEvent(unsafe.Pointer(param1))

	gofunc((&QGraphicsWebView{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QGraphicsWebView) callVirtualBase_InputMethodEvent(param1 *qt.QInputMethodEvent) {

	C.QGraphicsWebView_virtualbase_InputMethodEvent(unsafe.Pointer(this.h), (*C.QInputMethodEvent)(param1.UnsafePointer()))

}
func (this *QGraphicsWebView) OnInputMethodEvent(slot func(super func(param1 *qt.QInputMethodEvent), param1 *qt.QInputMethodEvent)) {
	ok := C.QGraphicsWebView_override_virtual_InputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_InputMethodEvent
func miqt_exec_callback_QGraphicsWebView_InputMethodEvent(self *C.QGraphicsWebView, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QInputMethodEvent), param1 *qt.QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQInputMethodEvent(unsafe.Pointer(param1))

	gofunc((&QGraphicsWebView{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QGraphicsWebView) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QGraphicsWebView_virtualbase_FocusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QGraphicsWebView) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QGraphicsWebView_override_virtual_FocusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_FocusNextPrevChild
func miqt_exec_callback_QGraphicsWebView_FocusNextPrevChild(self *C.QGraphicsWebView, cb C.intptr_t, next C.bool) C.bool {
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

	return (bool)(C.QGraphicsWebView_virtualbase_SceneEvent(unsafe.Pointer(this.h), (*C.QEvent)(param1.UnsafePointer())))

}
func (this *QGraphicsWebView) OnSceneEvent(slot func(super func(param1 *qt.QEvent) bool, param1 *qt.QEvent) bool) {
	ok := C.QGraphicsWebView_override_virtual_SceneEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_SceneEvent
func miqt_exec_callback_QGraphicsWebView_SceneEvent(self *C.QGraphicsWebView, cb C.intptr_t, param1 *C.QEvent) C.bool {
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

	C.QGraphicsWebView_virtualbase_GetContentsMargins(unsafe.Pointer(this.h), (*C.double)(unsafe.Pointer(left)), (*C.double)(unsafe.Pointer(top)), (*C.double)(unsafe.Pointer(right)), (*C.double)(unsafe.Pointer(bottom)))

}
func (this *QGraphicsWebView) OnGetContentsMargins(slot func(super func(left *float64, top *float64, right *float64, bottom *float64), left *float64, top *float64, right *float64, bottom *float64)) {
	ok := C.QGraphicsWebView_override_virtual_GetContentsMargins(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_GetContentsMargins
func miqt_exec_callback_QGraphicsWebView_GetContentsMargins(self *C.QGraphicsWebView, cb C.intptr_t, left *C.double, top *C.double, right *C.double, bottom *C.double) {
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

	return (int)(C.QGraphicsWebView_virtualbase_Type(unsafe.Pointer(this.h)))

}
func (this *QGraphicsWebView) OnType(slot func(super func() int) int) {
	ok := C.QGraphicsWebView_override_virtual_Type(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_Type
func miqt_exec_callback_QGraphicsWebView_Type(self *C.QGraphicsWebView, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsWebView{h: self}).callVirtualBase_Type)

	return (C.int)(virtualReturn)

}

func (this *QGraphicsWebView) callVirtualBase_PaintWindowFrame(painter *qt.QPainter, option *qt.QStyleOptionGraphicsItem, widget *qt.QWidget) {

	C.QGraphicsWebView_virtualbase_PaintWindowFrame(unsafe.Pointer(this.h), (*C.QPainter)(painter.UnsafePointer()), (*C.QStyleOptionGraphicsItem)(option.UnsafePointer()), (*C.QWidget)(widget.UnsafePointer()))

}
func (this *QGraphicsWebView) OnPaintWindowFrame(slot func(super func(painter *qt.QPainter, option *qt.QStyleOptionGraphicsItem, widget *qt.QWidget), painter *qt.QPainter, option *qt.QStyleOptionGraphicsItem, widget *qt.QWidget)) {
	ok := C.QGraphicsWebView_override_virtual_PaintWindowFrame(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_PaintWindowFrame
func miqt_exec_callback_QGraphicsWebView_PaintWindowFrame(self *C.QGraphicsWebView, cb C.intptr_t, painter *C.QPainter, option *C.QStyleOptionGraphicsItem, widget *C.QWidget) {
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

	_goptr := qt.UnsafeNewQRectF(unsafe.Pointer(C.QGraphicsWebView_virtualbase_BoundingRect(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsWebView) OnBoundingRect(slot func(super func() *qt.QRectF) *qt.QRectF) {
	ok := C.QGraphicsWebView_override_virtual_BoundingRect(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_BoundingRect
func miqt_exec_callback_QGraphicsWebView_BoundingRect(self *C.QGraphicsWebView, cb C.intptr_t) *C.QRectF {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QRectF) *qt.QRectF)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsWebView{h: self}).callVirtualBase_BoundingRect)

	return (*C.QRectF)(virtualReturn.UnsafePointer())

}

func (this *QGraphicsWebView) callVirtualBase_Shape() *qt.QPainterPath {

	_goptr := qt.UnsafeNewQPainterPath(unsafe.Pointer(C.QGraphicsWebView_virtualbase_Shape(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsWebView) OnShape(slot func(super func() *qt.QPainterPath) *qt.QPainterPath) {
	ok := C.QGraphicsWebView_override_virtual_Shape(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_Shape
func miqt_exec_callback_QGraphicsWebView_Shape(self *C.QGraphicsWebView, cb C.intptr_t) *C.QPainterPath {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QPainterPath) *qt.QPainterPath)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsWebView{h: self}).callVirtualBase_Shape)

	return (*C.QPainterPath)(virtualReturn.UnsafePointer())

}

func (this *QGraphicsWebView) callVirtualBase_InitStyleOption(option *qt.QStyleOption) {

	C.QGraphicsWebView_virtualbase_InitStyleOption(unsafe.Pointer(this.h), (*C.QStyleOption)(option.UnsafePointer()))

}
func (this *QGraphicsWebView) OnInitStyleOption(slot func(super func(option *qt.QStyleOption), option *qt.QStyleOption)) {
	ok := C.QGraphicsWebView_override_virtual_InitStyleOption(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_InitStyleOption
func miqt_exec_callback_QGraphicsWebView_InitStyleOption(self *C.QGraphicsWebView, cb C.intptr_t, option *C.QStyleOption) {
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

	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QGraphicsWebView_virtualbase_PropertyChange(unsafe.Pointer(this.h), propertyName_ms, (*C.QVariant)(value.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsWebView) OnPropertyChange(slot func(super func(propertyName string, value *qt.QVariant) *qt.QVariant, propertyName string, value *qt.QVariant) *qt.QVariant) {
	ok := C.QGraphicsWebView_override_virtual_PropertyChange(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_PropertyChange
func miqt_exec_callback_QGraphicsWebView_PropertyChange(self *C.QGraphicsWebView, cb C.intptr_t, propertyName C.struct_miqt_string, value *C.QVariant) *C.QVariant {
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

	return (bool)(C.QGraphicsWebView_virtualbase_WindowFrameEvent(unsafe.Pointer(this.h), (*C.QEvent)(e.UnsafePointer())))

}
func (this *QGraphicsWebView) OnWindowFrameEvent(slot func(super func(e *qt.QEvent) bool, e *qt.QEvent) bool) {
	ok := C.QGraphicsWebView_override_virtual_WindowFrameEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_WindowFrameEvent
func miqt_exec_callback_QGraphicsWebView_WindowFrameEvent(self *C.QGraphicsWebView, cb C.intptr_t, e *C.QEvent) C.bool {
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

	return (qt.WindowFrameSection)(C.QGraphicsWebView_virtualbase_WindowFrameSectionAt(unsafe.Pointer(this.h), (*C.QPointF)(pos.UnsafePointer())))

}
func (this *QGraphicsWebView) OnWindowFrameSectionAt(slot func(super func(pos *qt.QPointF) qt.WindowFrameSection, pos *qt.QPointF) qt.WindowFrameSection) {
	ok := C.QGraphicsWebView_override_virtual_WindowFrameSectionAt(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_WindowFrameSectionAt
func miqt_exec_callback_QGraphicsWebView_WindowFrameSectionAt(self *C.QGraphicsWebView, cb C.intptr_t, pos *C.QPointF) C.int {
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

	C.QGraphicsWebView_virtualbase_ChangeEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QGraphicsWebView) OnChangeEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QGraphicsWebView_override_virtual_ChangeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_ChangeEvent
func miqt_exec_callback_QGraphicsWebView_ChangeEvent(self *C.QGraphicsWebView, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QGraphicsWebView{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QGraphicsWebView) callVirtualBase_CloseEvent(event *qt.QCloseEvent) {

	C.QGraphicsWebView_virtualbase_CloseEvent(unsafe.Pointer(this.h), (*C.QCloseEvent)(event.UnsafePointer()))

}
func (this *QGraphicsWebView) OnCloseEvent(slot func(super func(event *qt.QCloseEvent), event *qt.QCloseEvent)) {
	ok := C.QGraphicsWebView_override_virtual_CloseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_CloseEvent
func miqt_exec_callback_QGraphicsWebView_CloseEvent(self *C.QGraphicsWebView, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QCloseEvent), event *qt.QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQCloseEvent(unsafe.Pointer(event))

	gofunc((&QGraphicsWebView{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QGraphicsWebView) callVirtualBase_HideEvent(event *qt.QHideEvent) {

	C.QGraphicsWebView_virtualbase_HideEvent(unsafe.Pointer(this.h), (*C.QHideEvent)(event.UnsafePointer()))

}
func (this *QGraphicsWebView) OnHideEvent(slot func(super func(event *qt.QHideEvent), event *qt.QHideEvent)) {
	ok := C.QGraphicsWebView_override_virtual_HideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_HideEvent
func miqt_exec_callback_QGraphicsWebView_HideEvent(self *C.QGraphicsWebView, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QHideEvent), event *qt.QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQHideEvent(unsafe.Pointer(event))

	gofunc((&QGraphicsWebView{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QGraphicsWebView) callVirtualBase_MoveEvent(event *qt.QGraphicsSceneMoveEvent) {

	C.QGraphicsWebView_virtualbase_MoveEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneMoveEvent)(event.UnsafePointer()))

}
func (this *QGraphicsWebView) OnMoveEvent(slot func(super func(event *qt.QGraphicsSceneMoveEvent), event *qt.QGraphicsSceneMoveEvent)) {
	ok := C.QGraphicsWebView_override_virtual_MoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_MoveEvent
func miqt_exec_callback_QGraphicsWebView_MoveEvent(self *C.QGraphicsWebView, cb C.intptr_t, event *C.QGraphicsSceneMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QGraphicsSceneMoveEvent), event *qt.QGraphicsSceneMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQGraphicsSceneMoveEvent(unsafe.Pointer(event))

	gofunc((&QGraphicsWebView{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QGraphicsWebView) callVirtualBase_PolishEvent() {

	C.QGraphicsWebView_virtualbase_PolishEvent(unsafe.Pointer(this.h))

}
func (this *QGraphicsWebView) OnPolishEvent(slot func(super func())) {
	ok := C.QGraphicsWebView_override_virtual_PolishEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_PolishEvent
func miqt_exec_callback_QGraphicsWebView_PolishEvent(self *C.QGraphicsWebView, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QGraphicsWebView{h: self}).callVirtualBase_PolishEvent)

}

func (this *QGraphicsWebView) callVirtualBase_ResizeEvent(event *qt.QGraphicsSceneResizeEvent) {

	C.QGraphicsWebView_virtualbase_ResizeEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneResizeEvent)(event.UnsafePointer()))

}
func (this *QGraphicsWebView) OnResizeEvent(slot func(super func(event *qt.QGraphicsSceneResizeEvent), event *qt.QGraphicsSceneResizeEvent)) {
	ok := C.QGraphicsWebView_override_virtual_ResizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_ResizeEvent
func miqt_exec_callback_QGraphicsWebView_ResizeEvent(self *C.QGraphicsWebView, cb C.intptr_t, event *C.QGraphicsSceneResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QGraphicsSceneResizeEvent), event *qt.QGraphicsSceneResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQGraphicsSceneResizeEvent(unsafe.Pointer(event))

	gofunc((&QGraphicsWebView{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QGraphicsWebView) callVirtualBase_ShowEvent(event *qt.QShowEvent) {

	C.QGraphicsWebView_virtualbase_ShowEvent(unsafe.Pointer(this.h), (*C.QShowEvent)(event.UnsafePointer()))

}
func (this *QGraphicsWebView) OnShowEvent(slot func(super func(event *qt.QShowEvent), event *qt.QShowEvent)) {
	ok := C.QGraphicsWebView_override_virtual_ShowEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_ShowEvent
func miqt_exec_callback_QGraphicsWebView_ShowEvent(self *C.QGraphicsWebView, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QShowEvent), event *qt.QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQShowEvent(unsafe.Pointer(event))

	gofunc((&QGraphicsWebView{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QGraphicsWebView) callVirtualBase_GrabMouseEvent(event *qt.QEvent) {

	C.QGraphicsWebView_virtualbase_GrabMouseEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QGraphicsWebView) OnGrabMouseEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QGraphicsWebView_override_virtual_GrabMouseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_GrabMouseEvent
func miqt_exec_callback_QGraphicsWebView_GrabMouseEvent(self *C.QGraphicsWebView, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QGraphicsWebView{h: self}).callVirtualBase_GrabMouseEvent, slotval1)

}

func (this *QGraphicsWebView) callVirtualBase_UngrabMouseEvent(event *qt.QEvent) {

	C.QGraphicsWebView_virtualbase_UngrabMouseEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QGraphicsWebView) OnUngrabMouseEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QGraphicsWebView_override_virtual_UngrabMouseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_UngrabMouseEvent
func miqt_exec_callback_QGraphicsWebView_UngrabMouseEvent(self *C.QGraphicsWebView, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QGraphicsWebView{h: self}).callVirtualBase_UngrabMouseEvent, slotval1)

}

func (this *QGraphicsWebView) callVirtualBase_GrabKeyboardEvent(event *qt.QEvent) {

	C.QGraphicsWebView_virtualbase_GrabKeyboardEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QGraphicsWebView) OnGrabKeyboardEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QGraphicsWebView_override_virtual_GrabKeyboardEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_GrabKeyboardEvent
func miqt_exec_callback_QGraphicsWebView_GrabKeyboardEvent(self *C.QGraphicsWebView, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QGraphicsWebView{h: self}).callVirtualBase_GrabKeyboardEvent, slotval1)

}

func (this *QGraphicsWebView) callVirtualBase_UngrabKeyboardEvent(event *qt.QEvent) {

	C.QGraphicsWebView_virtualbase_UngrabKeyboardEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QGraphicsWebView) OnUngrabKeyboardEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QGraphicsWebView_override_virtual_UngrabKeyboardEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWebView_UngrabKeyboardEvent
func miqt_exec_callback_QGraphicsWebView_UngrabKeyboardEvent(self *C.QGraphicsWebView, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QGraphicsWebView{h: self}).callVirtualBase_UngrabKeyboardEvent, slotval1)

}

// Delete this object from C++ memory.
func (this *QGraphicsWebView) Delete() {
	C.QGraphicsWebView_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGraphicsWebView) GoGC() {
	runtime.SetFinalizer(this, func(this *QGraphicsWebView) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
