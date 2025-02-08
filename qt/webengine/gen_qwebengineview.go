package webengine

/*

#include "gen_qwebengineview.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QWebEngineView struct {
	h *C.QWebEngineView
	*qt.QWidget
}

func (this *QWebEngineView) cPointer() *C.QWebEngineView {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWebEngineView) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWebEngineView constructs the type using only CGO pointers.
func newQWebEngineView(h *C.QWebEngineView) *QWebEngineView {
	if h == nil {
		return nil
	}
	var outptr_QWidget *C.QWidget = nil
	C.QWebEngineView_virtbase(h, &outptr_QWidget)

	return &QWebEngineView{h: h,
		QWidget: qt.UnsafeNewQWidget(unsafe.Pointer(outptr_QWidget))}
}

// UnsafeNewQWebEngineView constructs the type using only unsafe pointers.
func UnsafeNewQWebEngineView(h unsafe.Pointer) *QWebEngineView {
	return newQWebEngineView((*C.QWebEngineView)(h))
}

// NewQWebEngineView constructs a new QWebEngineView object.
func NewQWebEngineView(parent *qt.QWidget) *QWebEngineView {

	return newQWebEngineView(C.QWebEngineView_new((*C.QWidget)(parent.UnsafePointer())))
}

// NewQWebEngineView2 constructs a new QWebEngineView object.
func NewQWebEngineView2() *QWebEngineView {

	return newQWebEngineView(C.QWebEngineView_new2())
}

func (this *QWebEngineView) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QWebEngineView_metaObject(this.h)))
}

func (this *QWebEngineView) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QWebEngineView_metacast(this.h, param1_Cstring))
}

func QWebEngineView_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QWebEngineView_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebEngineView_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QWebEngineView_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebEngineView) Page() *QWebEnginePage {
	return newQWebEnginePage(C.QWebEngineView_page(this.h))
}

func (this *QWebEngineView) SetPage(page *QWebEnginePage) {
	C.QWebEngineView_setPage(this.h, page.cPointer())
}

func (this *QWebEngineView) Load(url *qt.QUrl) {
	C.QWebEngineView_load(this.h, (*C.QUrl)(url.UnsafePointer()))
}

func (this *QWebEngineView) LoadWithRequest(request *QWebEngineHttpRequest) {
	C.QWebEngineView_loadWithRequest(this.h, request.cPointer())
}

func (this *QWebEngineView) SetHtml(html string) {
	html_ms := C.struct_miqt_string{}
	html_ms.data = C.CString(html)
	html_ms.len = C.size_t(len(html))
	defer C.free(unsafe.Pointer(html_ms.data))
	C.QWebEngineView_setHtml(this.h, html_ms)
}

func (this *QWebEngineView) SetContent(data []byte) {
	data_alias := C.struct_miqt_string{}
	if len(data) > 0 {
		data_alias.data = (*C.char)(unsafe.Pointer(&data[0]))
	} else {
		data_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	data_alias.len = C.size_t(len(data))
	C.QWebEngineView_setContent(this.h, data_alias)
}

func (this *QWebEngineView) History() *QWebEngineHistory {
	return newQWebEngineHistory(C.QWebEngineView_history(this.h))
}

func (this *QWebEngineView) Title() string {
	var _ms C.struct_miqt_string = C.QWebEngineView_title(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebEngineView) SetUrl(url *qt.QUrl) {
	C.QWebEngineView_setUrl(this.h, (*C.QUrl)(url.UnsafePointer()))
}

func (this *QWebEngineView) Url() *qt.QUrl {
	_goptr := qt.UnsafeNewQUrl(unsafe.Pointer(C.QWebEngineView_url(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebEngineView) IconUrl() *qt.QUrl {
	_goptr := qt.UnsafeNewQUrl(unsafe.Pointer(C.QWebEngineView_iconUrl(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebEngineView) Icon() *qt.QIcon {
	_goptr := qt.UnsafeNewQIcon(unsafe.Pointer(C.QWebEngineView_icon(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebEngineView) HasSelection() bool {
	return (bool)(C.QWebEngineView_hasSelection(this.h))
}

func (this *QWebEngineView) SelectedText() string {
	var _ms C.struct_miqt_string = C.QWebEngineView_selectedText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebEngineView) PageAction(action QWebEnginePage__WebAction) *qt.QAction {
	return qt.UnsafeNewQAction(unsafe.Pointer(C.QWebEngineView_pageAction(this.h, (C.int)(action))))
}

func (this *QWebEngineView) TriggerPageAction(action QWebEnginePage__WebAction) {
	C.QWebEngineView_triggerPageAction(this.h, (C.int)(action))
}

func (this *QWebEngineView) ZoomFactor() float64 {
	return (float64)(C.QWebEngineView_zoomFactor(this.h))
}

func (this *QWebEngineView) SetZoomFactor(factor float64) {
	C.QWebEngineView_setZoomFactor(this.h, (C.double)(factor))
}

func (this *QWebEngineView) FindText(subString string) {
	subString_ms := C.struct_miqt_string{}
	subString_ms.data = C.CString(subString)
	subString_ms.len = C.size_t(len(subString))
	defer C.free(unsafe.Pointer(subString_ms.data))
	C.QWebEngineView_findText(this.h, subString_ms)
}

func (this *QWebEngineView) SizeHint() *qt.QSize {
	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QWebEngineView_sizeHint(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebEngineView) Settings() *QWebEngineSettings {
	return newQWebEngineSettings(C.QWebEngineView_settings(this.h))
}

func (this *QWebEngineView) Stop() {
	C.QWebEngineView_stop(this.h)
}

func (this *QWebEngineView) Back() {
	C.QWebEngineView_back(this.h)
}

func (this *QWebEngineView) Forward() {
	C.QWebEngineView_forward(this.h)
}

func (this *QWebEngineView) Reload() {
	C.QWebEngineView_reload(this.h)
}

func (this *QWebEngineView) LoadStarted() {
	C.QWebEngineView_loadStarted(this.h)
}
func (this *QWebEngineView) OnLoadStarted(slot func()) {
	C.QWebEngineView_connect_loadStarted(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebEngineView_loadStarted
func miqt_exec_callback_QWebEngineView_loadStarted(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QWebEngineView) LoadProgress(progress int) {
	C.QWebEngineView_loadProgress(this.h, (C.int)(progress))
}
func (this *QWebEngineView) OnLoadProgress(slot func(progress int)) {
	C.QWebEngineView_connect_loadProgress(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebEngineView_loadProgress
func miqt_exec_callback_QWebEngineView_loadProgress(cb C.intptr_t, progress C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(progress int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(progress)

	gofunc(slotval1)
}

func (this *QWebEngineView) LoadFinished(param1 bool) {
	C.QWebEngineView_loadFinished(this.h, (C.bool)(param1))
}
func (this *QWebEngineView) OnLoadFinished(slot func(param1 bool)) {
	C.QWebEngineView_connect_loadFinished(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebEngineView_loadFinished
func miqt_exec_callback_QWebEngineView_loadFinished(cb C.intptr_t, param1 C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(param1)

	gofunc(slotval1)
}

func (this *QWebEngineView) TitleChanged(title string) {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	C.QWebEngineView_titleChanged(this.h, title_ms)
}
func (this *QWebEngineView) OnTitleChanged(slot func(title string)) {
	C.QWebEngineView_connect_titleChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebEngineView_titleChanged
func miqt_exec_callback_QWebEngineView_titleChanged(cb C.intptr_t, title C.struct_miqt_string) {
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

func (this *QWebEngineView) SelectionChanged() {
	C.QWebEngineView_selectionChanged(this.h)
}
func (this *QWebEngineView) OnSelectionChanged(slot func()) {
	C.QWebEngineView_connect_selectionChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebEngineView_selectionChanged
func miqt_exec_callback_QWebEngineView_selectionChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QWebEngineView) UrlChanged(param1 *qt.QUrl) {
	C.QWebEngineView_urlChanged(this.h, (*C.QUrl)(param1.UnsafePointer()))
}
func (this *QWebEngineView) OnUrlChanged(slot func(param1 *qt.QUrl)) {
	C.QWebEngineView_connect_urlChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebEngineView_urlChanged
func miqt_exec_callback_QWebEngineView_urlChanged(cb C.intptr_t, param1 *C.QUrl) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 *qt.QUrl))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQUrl(unsafe.Pointer(param1))

	gofunc(slotval1)
}

func (this *QWebEngineView) IconUrlChanged(param1 *qt.QUrl) {
	C.QWebEngineView_iconUrlChanged(this.h, (*C.QUrl)(param1.UnsafePointer()))
}
func (this *QWebEngineView) OnIconUrlChanged(slot func(param1 *qt.QUrl)) {
	C.QWebEngineView_connect_iconUrlChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebEngineView_iconUrlChanged
func miqt_exec_callback_QWebEngineView_iconUrlChanged(cb C.intptr_t, param1 *C.QUrl) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 *qt.QUrl))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQUrl(unsafe.Pointer(param1))

	gofunc(slotval1)
}

func (this *QWebEngineView) IconChanged(param1 *qt.QIcon) {
	C.QWebEngineView_iconChanged(this.h, (*C.QIcon)(param1.UnsafePointer()))
}
func (this *QWebEngineView) OnIconChanged(slot func(param1 *qt.QIcon)) {
	C.QWebEngineView_connect_iconChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebEngineView_iconChanged
func miqt_exec_callback_QWebEngineView_iconChanged(cb C.intptr_t, param1 *C.QIcon) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 *qt.QIcon))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQIcon(unsafe.Pointer(param1))

	gofunc(slotval1)
}

func (this *QWebEngineView) RenderProcessTerminated(terminationStatus QWebEnginePage__RenderProcessTerminationStatus, exitCode int) {
	C.QWebEngineView_renderProcessTerminated(this.h, (C.int)(terminationStatus), (C.int)(exitCode))
}
func (this *QWebEngineView) OnRenderProcessTerminated(slot func(terminationStatus QWebEnginePage__RenderProcessTerminationStatus, exitCode int)) {
	C.QWebEngineView_connect_renderProcessTerminated(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebEngineView_renderProcessTerminated
func miqt_exec_callback_QWebEngineView_renderProcessTerminated(cb C.intptr_t, terminationStatus C.int, exitCode C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(terminationStatus QWebEnginePage__RenderProcessTerminationStatus, exitCode int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QWebEnginePage__RenderProcessTerminationStatus)(terminationStatus)

	slotval2 := (int)(exitCode)

	gofunc(slotval1, slotval2)
}

func QWebEngineView_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebEngineView_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebEngineView_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebEngineView_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebEngineView_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebEngineView_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebEngineView_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebEngineView_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebEngineView) SetHtml2(html string, baseUrl *qt.QUrl) {
	html_ms := C.struct_miqt_string{}
	html_ms.data = C.CString(html)
	html_ms.len = C.size_t(len(html))
	defer C.free(unsafe.Pointer(html_ms.data))
	C.QWebEngineView_setHtml2(this.h, html_ms, (*C.QUrl)(baseUrl.UnsafePointer()))
}

func (this *QWebEngineView) SetContent2(data []byte, mimeType string) {
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
	C.QWebEngineView_setContent2(this.h, data_alias, mimeType_ms)
}

func (this *QWebEngineView) SetContent3(data []byte, mimeType string, baseUrl *qt.QUrl) {
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
	C.QWebEngineView_setContent3(this.h, data_alias, mimeType_ms, (*C.QUrl)(baseUrl.UnsafePointer()))
}

func (this *QWebEngineView) TriggerPageAction2(action QWebEnginePage__WebAction, checked bool) {
	C.QWebEngineView_triggerPageAction2(this.h, (C.int)(action), (C.bool)(checked))
}

func (this *QWebEngineView) FindText2(subString string, options QWebEnginePage__FindFlag) {
	subString_ms := C.struct_miqt_string{}
	subString_ms.data = C.CString(subString)
	subString_ms.len = C.size_t(len(subString))
	defer C.free(unsafe.Pointer(subString_ms.data))
	C.QWebEngineView_findText2(this.h, subString_ms, (C.int)(options))
}

// UpdateMicroFocus can only be called from a QWebEngineView that was directly constructed.
func (this *QWebEngineView) UpdateMicroFocus() {

	var _dynamic_cast_ok C.bool = false
	C.QWebEngineView_protectedbase_updateMicroFocus(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Create can only be called from a QWebEngineView that was directly constructed.
func (this *QWebEngineView) Create() {

	var _dynamic_cast_ok C.bool = false
	C.QWebEngineView_protectedbase_create(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Destroy can only be called from a QWebEngineView that was directly constructed.
func (this *QWebEngineView) Destroy() {

	var _dynamic_cast_ok C.bool = false
	C.QWebEngineView_protectedbase_destroy(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// FocusNextChild can only be called from a QWebEngineView that was directly constructed.
func (this *QWebEngineView) FocusNextChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QWebEngineView_protectedbase_focusNextChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// FocusPreviousChild can only be called from a QWebEngineView that was directly constructed.
func (this *QWebEngineView) FocusPreviousChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QWebEngineView_protectedbase_focusPreviousChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a QWebEngineView that was directly constructed.
func (this *QWebEngineView) Sender() *qt.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt.UnsafeNewQObject(unsafe.Pointer(C.QWebEngineView_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QWebEngineView that was directly constructed.
func (this *QWebEngineView) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QWebEngineView_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QWebEngineView that was directly constructed.
func (this *QWebEngineView) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QWebEngineView_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QWebEngineView that was directly constructed.
func (this *QWebEngineView) IsSignalConnected(signal *qt.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QWebEngineView_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QWebEngineView) callVirtualBase_SizeHint() *qt.QSize {

	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QWebEngineView_virtualbase_sizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QWebEngineView) OnSizeHint(slot func(super func() *qt.QSize) *qt.QSize) {
	ok := C.QWebEngineView_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineView_sizeHint
func miqt_exec_callback_QWebEngineView_sizeHint(self *C.QWebEngineView, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QSize) *qt.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWebEngineView{h: self}).callVirtualBase_SizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QWebEngineView) callVirtualBase_CreateWindow(typeVal QWebEnginePage__WebWindowType) *QWebEngineView {

	return newQWebEngineView(C.QWebEngineView_virtualbase_createWindow(unsafe.Pointer(this.h), (C.int)(typeVal)))

}
func (this *QWebEngineView) OnCreateWindow(slot func(super func(typeVal QWebEnginePage__WebWindowType) *QWebEngineView, typeVal QWebEnginePage__WebWindowType) *QWebEngineView) {
	ok := C.QWebEngineView_override_virtual_createWindow(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineView_createWindow
func miqt_exec_callback_QWebEngineView_createWindow(self *C.QWebEngineView, cb C.intptr_t, typeVal C.int) *C.QWebEngineView {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(typeVal QWebEnginePage__WebWindowType) *QWebEngineView, typeVal QWebEnginePage__WebWindowType) *QWebEngineView)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QWebEnginePage__WebWindowType)(typeVal)

	virtualReturn := gofunc((&QWebEngineView{h: self}).callVirtualBase_CreateWindow, slotval1)

	return virtualReturn.cPointer()

}

func (this *QWebEngineView) callVirtualBase_ContextMenuEvent(param1 *qt.QContextMenuEvent) {

	C.QWebEngineView_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), (*C.QContextMenuEvent)(param1.UnsafePointer()))

}
func (this *QWebEngineView) OnContextMenuEvent(slot func(super func(param1 *qt.QContextMenuEvent), param1 *qt.QContextMenuEvent)) {
	ok := C.QWebEngineView_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineView_contextMenuEvent
func miqt_exec_callback_QWebEngineView_contextMenuEvent(self *C.QWebEngineView, cb C.intptr_t, param1 *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QContextMenuEvent), param1 *qt.QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQContextMenuEvent(unsafe.Pointer(param1))

	gofunc((&QWebEngineView{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QWebEngineView) callVirtualBase_Event(param1 *qt.QEvent) bool {

	return (bool)(C.QWebEngineView_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(param1.UnsafePointer())))

}
func (this *QWebEngineView) OnEvent(slot func(super func(param1 *qt.QEvent) bool, param1 *qt.QEvent) bool) {
	ok := C.QWebEngineView_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineView_event
func miqt_exec_callback_QWebEngineView_event(self *C.QWebEngineView, cb C.intptr_t, param1 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QEvent) bool, param1 *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(param1))

	virtualReturn := gofunc((&QWebEngineView{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QWebEngineView) callVirtualBase_ShowEvent(param1 *qt.QShowEvent) {

	C.QWebEngineView_virtualbase_showEvent(unsafe.Pointer(this.h), (*C.QShowEvent)(param1.UnsafePointer()))

}
func (this *QWebEngineView) OnShowEvent(slot func(super func(param1 *qt.QShowEvent), param1 *qt.QShowEvent)) {
	ok := C.QWebEngineView_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineView_showEvent
func miqt_exec_callback_QWebEngineView_showEvent(self *C.QWebEngineView, cb C.intptr_t, param1 *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QShowEvent), param1 *qt.QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQShowEvent(unsafe.Pointer(param1))

	gofunc((&QWebEngineView{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QWebEngineView) callVirtualBase_HideEvent(param1 *qt.QHideEvent) {

	C.QWebEngineView_virtualbase_hideEvent(unsafe.Pointer(this.h), (*C.QHideEvent)(param1.UnsafePointer()))

}
func (this *QWebEngineView) OnHideEvent(slot func(super func(param1 *qt.QHideEvent), param1 *qt.QHideEvent)) {
	ok := C.QWebEngineView_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineView_hideEvent
func miqt_exec_callback_QWebEngineView_hideEvent(self *C.QWebEngineView, cb C.intptr_t, param1 *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QHideEvent), param1 *qt.QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQHideEvent(unsafe.Pointer(param1))

	gofunc((&QWebEngineView{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QWebEngineView) callVirtualBase_CloseEvent(param1 *qt.QCloseEvent) {

	C.QWebEngineView_virtualbase_closeEvent(unsafe.Pointer(this.h), (*C.QCloseEvent)(param1.UnsafePointer()))

}
func (this *QWebEngineView) OnCloseEvent(slot func(super func(param1 *qt.QCloseEvent), param1 *qt.QCloseEvent)) {
	ok := C.QWebEngineView_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineView_closeEvent
func miqt_exec_callback_QWebEngineView_closeEvent(self *C.QWebEngineView, cb C.intptr_t, param1 *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QCloseEvent), param1 *qt.QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQCloseEvent(unsafe.Pointer(param1))

	gofunc((&QWebEngineView{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QWebEngineView) callVirtualBase_DragEnterEvent(e *qt.QDragEnterEvent) {

	C.QWebEngineView_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), (*C.QDragEnterEvent)(e.UnsafePointer()))

}
func (this *QWebEngineView) OnDragEnterEvent(slot func(super func(e *qt.QDragEnterEvent), e *qt.QDragEnterEvent)) {
	ok := C.QWebEngineView_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineView_dragEnterEvent
func miqt_exec_callback_QWebEngineView_dragEnterEvent(self *C.QWebEngineView, cb C.intptr_t, e *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *qt.QDragEnterEvent), e *qt.QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDragEnterEvent(unsafe.Pointer(e))

	gofunc((&QWebEngineView{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QWebEngineView) callVirtualBase_DragLeaveEvent(e *qt.QDragLeaveEvent) {

	C.QWebEngineView_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), (*C.QDragLeaveEvent)(e.UnsafePointer()))

}
func (this *QWebEngineView) OnDragLeaveEvent(slot func(super func(e *qt.QDragLeaveEvent), e *qt.QDragLeaveEvent)) {
	ok := C.QWebEngineView_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineView_dragLeaveEvent
func miqt_exec_callback_QWebEngineView_dragLeaveEvent(self *C.QWebEngineView, cb C.intptr_t, e *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *qt.QDragLeaveEvent), e *qt.QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDragLeaveEvent(unsafe.Pointer(e))

	gofunc((&QWebEngineView{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QWebEngineView) callVirtualBase_DragMoveEvent(e *qt.QDragMoveEvent) {

	C.QWebEngineView_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), (*C.QDragMoveEvent)(e.UnsafePointer()))

}
func (this *QWebEngineView) OnDragMoveEvent(slot func(super func(e *qt.QDragMoveEvent), e *qt.QDragMoveEvent)) {
	ok := C.QWebEngineView_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineView_dragMoveEvent
func miqt_exec_callback_QWebEngineView_dragMoveEvent(self *C.QWebEngineView, cb C.intptr_t, e *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *qt.QDragMoveEvent), e *qt.QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDragMoveEvent(unsafe.Pointer(e))

	gofunc((&QWebEngineView{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QWebEngineView) callVirtualBase_DropEvent(e *qt.QDropEvent) {

	C.QWebEngineView_virtualbase_dropEvent(unsafe.Pointer(this.h), (*C.QDropEvent)(e.UnsafePointer()))

}
func (this *QWebEngineView) OnDropEvent(slot func(super func(e *qt.QDropEvent), e *qt.QDropEvent)) {
	ok := C.QWebEngineView_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineView_dropEvent
func miqt_exec_callback_QWebEngineView_dropEvent(self *C.QWebEngineView, cb C.intptr_t, e *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *qt.QDropEvent), e *qt.QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDropEvent(unsafe.Pointer(e))

	gofunc((&QWebEngineView{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QWebEngineView) callVirtualBase_DevType() int {

	return (int)(C.QWebEngineView_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QWebEngineView) OnDevType(slot func(super func() int) int) {
	ok := C.QWebEngineView_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineView_devType
func miqt_exec_callback_QWebEngineView_devType(self *C.QWebEngineView, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWebEngineView{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QWebEngineView) callVirtualBase_SetVisible(visible bool) {

	C.QWebEngineView_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QWebEngineView) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QWebEngineView_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineView_setVisible
func miqt_exec_callback_QWebEngineView_setVisible(self *C.QWebEngineView, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QWebEngineView{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QWebEngineView) callVirtualBase_MinimumSizeHint() *qt.QSize {

	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QWebEngineView_virtualbase_minimumSizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QWebEngineView) OnMinimumSizeHint(slot func(super func() *qt.QSize) *qt.QSize) {
	ok := C.QWebEngineView_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineView_minimumSizeHint
func miqt_exec_callback_QWebEngineView_minimumSizeHint(self *C.QWebEngineView, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QSize) *qt.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWebEngineView{h: self}).callVirtualBase_MinimumSizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QWebEngineView) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QWebEngineView_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QWebEngineView) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QWebEngineView_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineView_heightForWidth
func miqt_exec_callback_QWebEngineView_heightForWidth(self *C.QWebEngineView, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QWebEngineView{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QWebEngineView) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QWebEngineView_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QWebEngineView) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QWebEngineView_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineView_hasHeightForWidth
func miqt_exec_callback_QWebEngineView_hasHeightForWidth(self *C.QWebEngineView, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWebEngineView{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QWebEngineView) callVirtualBase_PaintEngine() *qt.QPaintEngine {

	return qt.UnsafeNewQPaintEngine(unsafe.Pointer(C.QWebEngineView_virtualbase_paintEngine(unsafe.Pointer(this.h))))

}
func (this *QWebEngineView) OnPaintEngine(slot func(super func() *qt.QPaintEngine) *qt.QPaintEngine) {
	ok := C.QWebEngineView_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineView_paintEngine
func miqt_exec_callback_QWebEngineView_paintEngine(self *C.QWebEngineView, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QPaintEngine) *qt.QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWebEngineView{h: self}).callVirtualBase_PaintEngine)

	return (*C.QPaintEngine)(virtualReturn.UnsafePointer())

}

func (this *QWebEngineView) callVirtualBase_MousePressEvent(event *qt.QMouseEvent) {

	C.QWebEngineView_virtualbase_mousePressEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QWebEngineView) OnMousePressEvent(slot func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent)) {
	ok := C.QWebEngineView_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineView_mousePressEvent
func miqt_exec_callback_QWebEngineView_mousePressEvent(self *C.QWebEngineView, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QWebEngineView{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QWebEngineView) callVirtualBase_MouseReleaseEvent(event *qt.QMouseEvent) {

	C.QWebEngineView_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QWebEngineView) OnMouseReleaseEvent(slot func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent)) {
	ok := C.QWebEngineView_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineView_mouseReleaseEvent
func miqt_exec_callback_QWebEngineView_mouseReleaseEvent(self *C.QWebEngineView, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QWebEngineView{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QWebEngineView) callVirtualBase_MouseDoubleClickEvent(event *qt.QMouseEvent) {

	C.QWebEngineView_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QWebEngineView) OnMouseDoubleClickEvent(slot func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent)) {
	ok := C.QWebEngineView_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineView_mouseDoubleClickEvent
func miqt_exec_callback_QWebEngineView_mouseDoubleClickEvent(self *C.QWebEngineView, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QWebEngineView{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QWebEngineView) callVirtualBase_MouseMoveEvent(event *qt.QMouseEvent) {

	C.QWebEngineView_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QWebEngineView) OnMouseMoveEvent(slot func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent)) {
	ok := C.QWebEngineView_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineView_mouseMoveEvent
func miqt_exec_callback_QWebEngineView_mouseMoveEvent(self *C.QWebEngineView, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QWebEngineView{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QWebEngineView) callVirtualBase_WheelEvent(event *qt.QWheelEvent) {

	C.QWebEngineView_virtualbase_wheelEvent(unsafe.Pointer(this.h), (*C.QWheelEvent)(event.UnsafePointer()))

}
func (this *QWebEngineView) OnWheelEvent(slot func(super func(event *qt.QWheelEvent), event *qt.QWheelEvent)) {
	ok := C.QWebEngineView_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineView_wheelEvent
func miqt_exec_callback_QWebEngineView_wheelEvent(self *C.QWebEngineView, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QWheelEvent), event *qt.QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQWheelEvent(unsafe.Pointer(event))

	gofunc((&QWebEngineView{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QWebEngineView) callVirtualBase_KeyPressEvent(event *qt.QKeyEvent) {

	C.QWebEngineView_virtualbase_keyPressEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(event.UnsafePointer()))

}
func (this *QWebEngineView) OnKeyPressEvent(slot func(super func(event *qt.QKeyEvent), event *qt.QKeyEvent)) {
	ok := C.QWebEngineView_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineView_keyPressEvent
func miqt_exec_callback_QWebEngineView_keyPressEvent(self *C.QWebEngineView, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QKeyEvent), event *qt.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQKeyEvent(unsafe.Pointer(event))

	gofunc((&QWebEngineView{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QWebEngineView) callVirtualBase_KeyReleaseEvent(event *qt.QKeyEvent) {

	C.QWebEngineView_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(event.UnsafePointer()))

}
func (this *QWebEngineView) OnKeyReleaseEvent(slot func(super func(event *qt.QKeyEvent), event *qt.QKeyEvent)) {
	ok := C.QWebEngineView_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineView_keyReleaseEvent
func miqt_exec_callback_QWebEngineView_keyReleaseEvent(self *C.QWebEngineView, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QKeyEvent), event *qt.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQKeyEvent(unsafe.Pointer(event))

	gofunc((&QWebEngineView{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QWebEngineView) callVirtualBase_FocusInEvent(event *qt.QFocusEvent) {

	C.QWebEngineView_virtualbase_focusInEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(event.UnsafePointer()))

}
func (this *QWebEngineView) OnFocusInEvent(slot func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent)) {
	ok := C.QWebEngineView_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineView_focusInEvent
func miqt_exec_callback_QWebEngineView_focusInEvent(self *C.QWebEngineView, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFocusEvent(unsafe.Pointer(event))

	gofunc((&QWebEngineView{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QWebEngineView) callVirtualBase_FocusOutEvent(event *qt.QFocusEvent) {

	C.QWebEngineView_virtualbase_focusOutEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(event.UnsafePointer()))

}
func (this *QWebEngineView) OnFocusOutEvent(slot func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent)) {
	ok := C.QWebEngineView_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineView_focusOutEvent
func miqt_exec_callback_QWebEngineView_focusOutEvent(self *C.QWebEngineView, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFocusEvent(unsafe.Pointer(event))

	gofunc((&QWebEngineView{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QWebEngineView) callVirtualBase_EnterEvent(event *qt.QEvent) {

	C.QWebEngineView_virtualbase_enterEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QWebEngineView) OnEnterEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QWebEngineView_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineView_enterEvent
func miqt_exec_callback_QWebEngineView_enterEvent(self *C.QWebEngineView, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QWebEngineView{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QWebEngineView) callVirtualBase_LeaveEvent(event *qt.QEvent) {

	C.QWebEngineView_virtualbase_leaveEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QWebEngineView) OnLeaveEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QWebEngineView_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineView_leaveEvent
func miqt_exec_callback_QWebEngineView_leaveEvent(self *C.QWebEngineView, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QWebEngineView{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QWebEngineView) callVirtualBase_PaintEvent(event *qt.QPaintEvent) {

	C.QWebEngineView_virtualbase_paintEvent(unsafe.Pointer(this.h), (*C.QPaintEvent)(event.UnsafePointer()))

}
func (this *QWebEngineView) OnPaintEvent(slot func(super func(event *qt.QPaintEvent), event *qt.QPaintEvent)) {
	ok := C.QWebEngineView_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineView_paintEvent
func miqt_exec_callback_QWebEngineView_paintEvent(self *C.QWebEngineView, cb C.intptr_t, event *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QPaintEvent), event *qt.QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPaintEvent(unsafe.Pointer(event))

	gofunc((&QWebEngineView{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QWebEngineView) callVirtualBase_MoveEvent(event *qt.QMoveEvent) {

	C.QWebEngineView_virtualbase_moveEvent(unsafe.Pointer(this.h), (*C.QMoveEvent)(event.UnsafePointer()))

}
func (this *QWebEngineView) OnMoveEvent(slot func(super func(event *qt.QMoveEvent), event *qt.QMoveEvent)) {
	ok := C.QWebEngineView_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineView_moveEvent
func miqt_exec_callback_QWebEngineView_moveEvent(self *C.QWebEngineView, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMoveEvent), event *qt.QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMoveEvent(unsafe.Pointer(event))

	gofunc((&QWebEngineView{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QWebEngineView) callVirtualBase_ResizeEvent(event *qt.QResizeEvent) {

	C.QWebEngineView_virtualbase_resizeEvent(unsafe.Pointer(this.h), (*C.QResizeEvent)(event.UnsafePointer()))

}
func (this *QWebEngineView) OnResizeEvent(slot func(super func(event *qt.QResizeEvent), event *qt.QResizeEvent)) {
	ok := C.QWebEngineView_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineView_resizeEvent
func miqt_exec_callback_QWebEngineView_resizeEvent(self *C.QWebEngineView, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QResizeEvent), event *qt.QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQResizeEvent(unsafe.Pointer(event))

	gofunc((&QWebEngineView{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QWebEngineView) callVirtualBase_TabletEvent(event *qt.QTabletEvent) {

	C.QWebEngineView_virtualbase_tabletEvent(unsafe.Pointer(this.h), (*C.QTabletEvent)(event.UnsafePointer()))

}
func (this *QWebEngineView) OnTabletEvent(slot func(super func(event *qt.QTabletEvent), event *qt.QTabletEvent)) {
	ok := C.QWebEngineView_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineView_tabletEvent
func miqt_exec_callback_QWebEngineView_tabletEvent(self *C.QWebEngineView, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTabletEvent), event *qt.QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTabletEvent(unsafe.Pointer(event))

	gofunc((&QWebEngineView{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QWebEngineView) callVirtualBase_ActionEvent(event *qt.QActionEvent) {

	C.QWebEngineView_virtualbase_actionEvent(unsafe.Pointer(this.h), (*C.QActionEvent)(event.UnsafePointer()))

}
func (this *QWebEngineView) OnActionEvent(slot func(super func(event *qt.QActionEvent), event *qt.QActionEvent)) {
	ok := C.QWebEngineView_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineView_actionEvent
func miqt_exec_callback_QWebEngineView_actionEvent(self *C.QWebEngineView, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QActionEvent), event *qt.QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQActionEvent(unsafe.Pointer(event))

	gofunc((&QWebEngineView{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QWebEngineView) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *int64) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QWebEngineView_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.long)(unsafe.Pointer(result))))

}
func (this *QWebEngineView) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool) {
	ok := C.QWebEngineView_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineView_nativeEvent
func miqt_exec_callback_QWebEngineView_nativeEvent(self *C.QWebEngineView, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.long) C.bool {
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

	virtualReturn := gofunc((&QWebEngineView{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QWebEngineView) callVirtualBase_ChangeEvent(param1 *qt.QEvent) {

	C.QWebEngineView_virtualbase_changeEvent(unsafe.Pointer(this.h), (*C.QEvent)(param1.UnsafePointer()))

}
func (this *QWebEngineView) OnChangeEvent(slot func(super func(param1 *qt.QEvent), param1 *qt.QEvent)) {
	ok := C.QWebEngineView_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineView_changeEvent
func miqt_exec_callback_QWebEngineView_changeEvent(self *C.QWebEngineView, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QEvent), param1 *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(param1))

	gofunc((&QWebEngineView{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QWebEngineView) callVirtualBase_Metric(param1 qt.QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QWebEngineView_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QWebEngineView) OnMetric(slot func(super func(param1 qt.QPaintDevice__PaintDeviceMetric) int, param1 qt.QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QWebEngineView_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineView_metric
func miqt_exec_callback_QWebEngineView_metric(self *C.QWebEngineView, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 qt.QPaintDevice__PaintDeviceMetric) int, param1 qt.QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt.QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QWebEngineView{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QWebEngineView) callVirtualBase_InitPainter(painter *qt.QPainter) {

	C.QWebEngineView_virtualbase_initPainter(unsafe.Pointer(this.h), (*C.QPainter)(painter.UnsafePointer()))

}
func (this *QWebEngineView) OnInitPainter(slot func(super func(painter *qt.QPainter), painter *qt.QPainter)) {
	ok := C.QWebEngineView_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineView_initPainter
func miqt_exec_callback_QWebEngineView_initPainter(self *C.QWebEngineView, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *qt.QPainter), painter *qt.QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(painter))

	gofunc((&QWebEngineView{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QWebEngineView) callVirtualBase_Redirected(offset *qt.QPoint) *qt.QPaintDevice {

	return qt.UnsafeNewQPaintDevice(unsafe.Pointer(C.QWebEngineView_virtualbase_redirected(unsafe.Pointer(this.h), (*C.QPoint)(offset.UnsafePointer()))))

}
func (this *QWebEngineView) OnRedirected(slot func(super func(offset *qt.QPoint) *qt.QPaintDevice, offset *qt.QPoint) *qt.QPaintDevice) {
	ok := C.QWebEngineView_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineView_redirected
func miqt_exec_callback_QWebEngineView_redirected(self *C.QWebEngineView, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *qt.QPoint) *qt.QPaintDevice, offset *qt.QPoint) *qt.QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPoint(unsafe.Pointer(offset))

	virtualReturn := gofunc((&QWebEngineView{h: self}).callVirtualBase_Redirected, slotval1)

	return (*C.QPaintDevice)(virtualReturn.UnsafePointer())

}

func (this *QWebEngineView) callVirtualBase_SharedPainter() *qt.QPainter {

	return qt.UnsafeNewQPainter(unsafe.Pointer(C.QWebEngineView_virtualbase_sharedPainter(unsafe.Pointer(this.h))))

}
func (this *QWebEngineView) OnSharedPainter(slot func(super func() *qt.QPainter) *qt.QPainter) {
	ok := C.QWebEngineView_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineView_sharedPainter
func miqt_exec_callback_QWebEngineView_sharedPainter(self *C.QWebEngineView, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QPainter) *qt.QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWebEngineView{h: self}).callVirtualBase_SharedPainter)

	return (*C.QPainter)(virtualReturn.UnsafePointer())

}

func (this *QWebEngineView) callVirtualBase_InputMethodEvent(param1 *qt.QInputMethodEvent) {

	C.QWebEngineView_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), (*C.QInputMethodEvent)(param1.UnsafePointer()))

}
func (this *QWebEngineView) OnInputMethodEvent(slot func(super func(param1 *qt.QInputMethodEvent), param1 *qt.QInputMethodEvent)) {
	ok := C.QWebEngineView_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineView_inputMethodEvent
func miqt_exec_callback_QWebEngineView_inputMethodEvent(self *C.QWebEngineView, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QInputMethodEvent), param1 *qt.QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQInputMethodEvent(unsafe.Pointer(param1))

	gofunc((&QWebEngineView{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QWebEngineView) callVirtualBase_InputMethodQuery(param1 qt.InputMethodQuery) *qt.QVariant {

	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QWebEngineView_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QWebEngineView) OnInputMethodQuery(slot func(super func(param1 qt.InputMethodQuery) *qt.QVariant, param1 qt.InputMethodQuery) *qt.QVariant) {
	ok := C.QWebEngineView_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineView_inputMethodQuery
func miqt_exec_callback_QWebEngineView_inputMethodQuery(self *C.QWebEngineView, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 qt.InputMethodQuery) *qt.QVariant, param1 qt.InputMethodQuery) *qt.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt.InputMethodQuery)(param1)

	virtualReturn := gofunc((&QWebEngineView{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}

func (this *QWebEngineView) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QWebEngineView_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QWebEngineView) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QWebEngineView_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineView_focusNextPrevChild
func miqt_exec_callback_QWebEngineView_focusNextPrevChild(self *C.QWebEngineView, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QWebEngineView{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QWebEngineView) callVirtualBase_EventFilter(watched *qt.QObject, event *qt.QEvent) bool {

	return (bool)(C.QWebEngineView_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QWebEngineView) OnEventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	ok := C.QWebEngineView_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineView_eventFilter
func miqt_exec_callback_QWebEngineView_eventFilter(self *C.QWebEngineView, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QWebEngineView{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QWebEngineView) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.QWebEngineView_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QWebEngineView) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	ok := C.QWebEngineView_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineView_timerEvent
func miqt_exec_callback_QWebEngineView_timerEvent(self *C.QWebEngineView, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QWebEngineView{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QWebEngineView) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QWebEngineView_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QWebEngineView) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	ok := C.QWebEngineView_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineView_childEvent
func miqt_exec_callback_QWebEngineView_childEvent(self *C.QWebEngineView, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QWebEngineView{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QWebEngineView) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QWebEngineView_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QWebEngineView) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QWebEngineView_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineView_customEvent
func miqt_exec_callback_QWebEngineView_customEvent(self *C.QWebEngineView, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QWebEngineView{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QWebEngineView) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QWebEngineView_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QWebEngineView) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QWebEngineView_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineView_connectNotify
func miqt_exec_callback_QWebEngineView_connectNotify(self *C.QWebEngineView, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QWebEngineView{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QWebEngineView) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QWebEngineView_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QWebEngineView) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QWebEngineView_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineView_disconnectNotify
func miqt_exec_callback_QWebEngineView_disconnectNotify(self *C.QWebEngineView, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QWebEngineView{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QWebEngineView) Delete() {
	C.QWebEngineView_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWebEngineView) GoGC() {
	runtime.SetFinalizer(this, func(this *QWebEngineView) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
