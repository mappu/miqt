package webengine

/*

#include "gen_qwebengineview.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"github.com/mappu/miqt/qt6/printsupport"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QWebEngineView struct {
	h *C.QWebEngineView
	*qt6.QWidget
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
		QWidget: qt6.UnsafeNewQWidget(unsafe.Pointer(outptr_QWidget))}
}

// UnsafeNewQWebEngineView constructs the type using only unsafe pointers.
func UnsafeNewQWebEngineView(h unsafe.Pointer) *QWebEngineView {
	return newQWebEngineView((*C.QWebEngineView)(h))
}

// NewQWebEngineView constructs a new QWebEngineView object.
func NewQWebEngineView(parent *qt6.QWidget) *QWebEngineView {

	return newQWebEngineView(C.QWebEngineView_new((*C.QWidget)(parent.UnsafePointer())))
}

// NewQWebEngineView2 constructs a new QWebEngineView object.
func NewQWebEngineView2() *QWebEngineView {

	return newQWebEngineView(C.QWebEngineView_new2())
}

// NewQWebEngineView3 constructs a new QWebEngineView object.
func NewQWebEngineView3(profile *QWebEngineProfile) *QWebEngineView {

	return newQWebEngineView(C.QWebEngineView_new3(profile.cPointer()))
}

// NewQWebEngineView4 constructs a new QWebEngineView object.
func NewQWebEngineView4(page *QWebEnginePage) *QWebEngineView {

	return newQWebEngineView(C.QWebEngineView_new4(page.cPointer()))
}

// NewQWebEngineView5 constructs a new QWebEngineView object.
func NewQWebEngineView5(profile *QWebEngineProfile, parent *qt6.QWidget) *QWebEngineView {

	return newQWebEngineView(C.QWebEngineView_new5(profile.cPointer(), (*C.QWidget)(parent.UnsafePointer())))
}

// NewQWebEngineView6 constructs a new QWebEngineView object.
func NewQWebEngineView6(page *QWebEnginePage, parent *qt6.QWidget) *QWebEngineView {

	return newQWebEngineView(C.QWebEngineView_new6(page.cPointer(), (*C.QWidget)(parent.UnsafePointer())))
}

func (this *QWebEngineView) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QWebEngineView_MetaObject(this.h)))
}

func (this *QWebEngineView) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QWebEngineView_Metacast(this.h, param1_Cstring))
}

func QWebEngineView_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QWebEngineView_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebEngineView_ForPage(page *QWebEnginePage) *QWebEngineView {
	return newQWebEngineView(C.QWebEngineView_ForPage(page.cPointer()))
}

func (this *QWebEngineView) Page() *QWebEnginePage {
	return newQWebEnginePage(C.QWebEngineView_Page(this.h))
}

func (this *QWebEngineView) SetPage(page *QWebEnginePage) {
	C.QWebEngineView_SetPage(this.h, page.cPointer())
}

func (this *QWebEngineView) Load(url *qt6.QUrl) {
	C.QWebEngineView_Load(this.h, (*C.QUrl)(url.UnsafePointer()))
}

func (this *QWebEngineView) LoadWithRequest(request *QWebEngineHttpRequest) {
	C.QWebEngineView_LoadWithRequest(this.h, request.cPointer())
}

func (this *QWebEngineView) SetHtml(html string) {
	html_ms := C.struct_miqt_string{}
	html_ms.data = C.CString(html)
	html_ms.len = C.size_t(len(html))
	defer C.free(unsafe.Pointer(html_ms.data))
	C.QWebEngineView_SetHtml(this.h, html_ms)
}

func (this *QWebEngineView) SetContent(data []byte) {
	data_alias := C.struct_miqt_string{}
	data_alias.data = (*C.char)(unsafe.Pointer(&data[0]))
	data_alias.len = C.size_t(len(data))
	C.QWebEngineView_SetContent(this.h, data_alias)
}

func (this *QWebEngineView) History() *QWebEngineHistory {
	return newQWebEngineHistory(C.QWebEngineView_History(this.h))
}

func (this *QWebEngineView) Title() string {
	var _ms C.struct_miqt_string = C.QWebEngineView_Title(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebEngineView) SetUrl(url *qt6.QUrl) {
	C.QWebEngineView_SetUrl(this.h, (*C.QUrl)(url.UnsafePointer()))
}

func (this *QWebEngineView) Url() *qt6.QUrl {
	_goptr := qt6.UnsafeNewQUrl(unsafe.Pointer(C.QWebEngineView_Url(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebEngineView) IconUrl() *qt6.QUrl {
	_goptr := qt6.UnsafeNewQUrl(unsafe.Pointer(C.QWebEngineView_IconUrl(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebEngineView) Icon() *qt6.QIcon {
	_goptr := qt6.UnsafeNewQIcon(unsafe.Pointer(C.QWebEngineView_Icon(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebEngineView) HasSelection() bool {
	return (bool)(C.QWebEngineView_HasSelection(this.h))
}

func (this *QWebEngineView) SelectedText() string {
	var _ms C.struct_miqt_string = C.QWebEngineView_SelectedText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebEngineView) PageAction(action QWebEnginePage__WebAction) *qt6.QAction {
	return qt6.UnsafeNewQAction(unsafe.Pointer(C.QWebEngineView_PageAction(this.h, (C.int)(action))))
}

func (this *QWebEngineView) TriggerPageAction(action QWebEnginePage__WebAction) {
	C.QWebEngineView_TriggerPageAction(this.h, (C.int)(action))
}

func (this *QWebEngineView) ZoomFactor() float64 {
	return (float64)(C.QWebEngineView_ZoomFactor(this.h))
}

func (this *QWebEngineView) SetZoomFactor(factor float64) {
	C.QWebEngineView_SetZoomFactor(this.h, (C.double)(factor))
}

func (this *QWebEngineView) SizeHint() *qt6.QSize {
	_goptr := qt6.UnsafeNewQSize(unsafe.Pointer(C.QWebEngineView_SizeHint(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebEngineView) Settings() *QWebEngineSettings {
	return newQWebEngineSettings(C.QWebEngineView_Settings(this.h))
}

func (this *QWebEngineView) CreateStandardContextMenu() *qt6.QMenu {
	return qt6.UnsafeNewQMenu(unsafe.Pointer(C.QWebEngineView_CreateStandardContextMenu(this.h)))
}

func (this *QWebEngineView) LastContextMenuRequest() *QWebEngineContextMenuRequest {
	return newQWebEngineContextMenuRequest(C.QWebEngineView_LastContextMenuRequest(this.h))
}

func (this *QWebEngineView) PrintToPdf(filePath string) {
	filePath_ms := C.struct_miqt_string{}
	filePath_ms.data = C.CString(filePath)
	filePath_ms.len = C.size_t(len(filePath))
	defer C.free(unsafe.Pointer(filePath_ms.data))
	C.QWebEngineView_PrintToPdf(this.h, filePath_ms)
}

func (this *QWebEngineView) Print(printer *printsupport.QPrinter) {
	C.QWebEngineView_Print(this.h, (*C.QPrinter)(printer.UnsafePointer()))
}

func (this *QWebEngineView) Stop() {
	C.QWebEngineView_Stop(this.h)
}

func (this *QWebEngineView) Back() {
	C.QWebEngineView_Back(this.h)
}

func (this *QWebEngineView) Forward() {
	C.QWebEngineView_Forward(this.h)
}

func (this *QWebEngineView) Reload() {
	C.QWebEngineView_Reload(this.h)
}

func (this *QWebEngineView) LoadStarted() {
	C.QWebEngineView_LoadStarted(this.h)
}
func (this *QWebEngineView) OnLoadStarted(slot func()) {
	C.QWebEngineView_connect_LoadStarted(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebEngineView_LoadStarted
func miqt_exec_callback_QWebEngineView_LoadStarted(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QWebEngineView) LoadProgress(progress int) {
	C.QWebEngineView_LoadProgress(this.h, (C.int)(progress))
}
func (this *QWebEngineView) OnLoadProgress(slot func(progress int)) {
	C.QWebEngineView_connect_LoadProgress(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebEngineView_LoadProgress
func miqt_exec_callback_QWebEngineView_LoadProgress(cb C.intptr_t, progress C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(progress int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(progress)

	gofunc(slotval1)
}

func (this *QWebEngineView) LoadFinished(param1 bool) {
	C.QWebEngineView_LoadFinished(this.h, (C.bool)(param1))
}
func (this *QWebEngineView) OnLoadFinished(slot func(param1 bool)) {
	C.QWebEngineView_connect_LoadFinished(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebEngineView_LoadFinished
func miqt_exec_callback_QWebEngineView_LoadFinished(cb C.intptr_t, param1 C.bool) {
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
	C.QWebEngineView_TitleChanged(this.h, title_ms)
}
func (this *QWebEngineView) OnTitleChanged(slot func(title string)) {
	C.QWebEngineView_connect_TitleChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebEngineView_TitleChanged
func miqt_exec_callback_QWebEngineView_TitleChanged(cb C.intptr_t, title C.struct_miqt_string) {
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
	C.QWebEngineView_SelectionChanged(this.h)
}
func (this *QWebEngineView) OnSelectionChanged(slot func()) {
	C.QWebEngineView_connect_SelectionChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebEngineView_SelectionChanged
func miqt_exec_callback_QWebEngineView_SelectionChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QWebEngineView) UrlChanged(param1 *qt6.QUrl) {
	C.QWebEngineView_UrlChanged(this.h, (*C.QUrl)(param1.UnsafePointer()))
}
func (this *QWebEngineView) OnUrlChanged(slot func(param1 *qt6.QUrl)) {
	C.QWebEngineView_connect_UrlChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebEngineView_UrlChanged
func miqt_exec_callback_QWebEngineView_UrlChanged(cb C.intptr_t, param1 *C.QUrl) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 *qt6.QUrl))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQUrl(unsafe.Pointer(param1))

	gofunc(slotval1)
}

func (this *QWebEngineView) IconUrlChanged(param1 *qt6.QUrl) {
	C.QWebEngineView_IconUrlChanged(this.h, (*C.QUrl)(param1.UnsafePointer()))
}
func (this *QWebEngineView) OnIconUrlChanged(slot func(param1 *qt6.QUrl)) {
	C.QWebEngineView_connect_IconUrlChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebEngineView_IconUrlChanged
func miqt_exec_callback_QWebEngineView_IconUrlChanged(cb C.intptr_t, param1 *C.QUrl) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 *qt6.QUrl))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQUrl(unsafe.Pointer(param1))

	gofunc(slotval1)
}

func (this *QWebEngineView) IconChanged(param1 *qt6.QIcon) {
	C.QWebEngineView_IconChanged(this.h, (*C.QIcon)(param1.UnsafePointer()))
}
func (this *QWebEngineView) OnIconChanged(slot func(param1 *qt6.QIcon)) {
	C.QWebEngineView_connect_IconChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebEngineView_IconChanged
func miqt_exec_callback_QWebEngineView_IconChanged(cb C.intptr_t, param1 *C.QIcon) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 *qt6.QIcon))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQIcon(unsafe.Pointer(param1))

	gofunc(slotval1)
}

func (this *QWebEngineView) RenderProcessTerminated(terminationStatus QWebEnginePage__RenderProcessTerminationStatus, exitCode int) {
	C.QWebEngineView_RenderProcessTerminated(this.h, (C.int)(terminationStatus), (C.int)(exitCode))
}
func (this *QWebEngineView) OnRenderProcessTerminated(slot func(terminationStatus QWebEnginePage__RenderProcessTerminationStatus, exitCode int)) {
	C.QWebEngineView_connect_RenderProcessTerminated(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebEngineView_RenderProcessTerminated
func miqt_exec_callback_QWebEngineView_RenderProcessTerminated(cb C.intptr_t, terminationStatus C.int, exitCode C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(terminationStatus QWebEnginePage__RenderProcessTerminationStatus, exitCode int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QWebEnginePage__RenderProcessTerminationStatus)(terminationStatus)

	slotval2 := (int)(exitCode)

	gofunc(slotval1, slotval2)
}

func (this *QWebEngineView) PdfPrintingFinished(filePath string, success bool) {
	filePath_ms := C.struct_miqt_string{}
	filePath_ms.data = C.CString(filePath)
	filePath_ms.len = C.size_t(len(filePath))
	defer C.free(unsafe.Pointer(filePath_ms.data))
	C.QWebEngineView_PdfPrintingFinished(this.h, filePath_ms, (C.bool)(success))
}
func (this *QWebEngineView) OnPdfPrintingFinished(slot func(filePath string, success bool)) {
	C.QWebEngineView_connect_PdfPrintingFinished(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebEngineView_PdfPrintingFinished
func miqt_exec_callback_QWebEngineView_PdfPrintingFinished(cb C.intptr_t, filePath C.struct_miqt_string, success C.bool) {
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

func (this *QWebEngineView) PrintRequested() {
	C.QWebEngineView_PrintRequested(this.h)
}
func (this *QWebEngineView) OnPrintRequested(slot func()) {
	C.QWebEngineView_connect_PrintRequested(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebEngineView_PrintRequested
func miqt_exec_callback_QWebEngineView_PrintRequested(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QWebEngineView) PrintFinished(success bool) {
	C.QWebEngineView_PrintFinished(this.h, (C.bool)(success))
}
func (this *QWebEngineView) OnPrintFinished(slot func(success bool)) {
	C.QWebEngineView_connect_PrintFinished(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebEngineView_PrintFinished
func miqt_exec_callback_QWebEngineView_PrintFinished(cb C.intptr_t, success C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(success bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(success)

	gofunc(slotval1)
}

func QWebEngineView_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebEngineView_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebEngineView_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebEngineView_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebEngineView) SetHtml2(html string, baseUrl *qt6.QUrl) {
	html_ms := C.struct_miqt_string{}
	html_ms.data = C.CString(html)
	html_ms.len = C.size_t(len(html))
	defer C.free(unsafe.Pointer(html_ms.data))
	C.QWebEngineView_SetHtml2(this.h, html_ms, (*C.QUrl)(baseUrl.UnsafePointer()))
}

func (this *QWebEngineView) SetContent2(data []byte, mimeType string) {
	data_alias := C.struct_miqt_string{}
	data_alias.data = (*C.char)(unsafe.Pointer(&data[0]))
	data_alias.len = C.size_t(len(data))
	mimeType_ms := C.struct_miqt_string{}
	mimeType_ms.data = C.CString(mimeType)
	mimeType_ms.len = C.size_t(len(mimeType))
	defer C.free(unsafe.Pointer(mimeType_ms.data))
	C.QWebEngineView_SetContent2(this.h, data_alias, mimeType_ms)
}

func (this *QWebEngineView) SetContent3(data []byte, mimeType string, baseUrl *qt6.QUrl) {
	data_alias := C.struct_miqt_string{}
	data_alias.data = (*C.char)(unsafe.Pointer(&data[0]))
	data_alias.len = C.size_t(len(data))
	mimeType_ms := C.struct_miqt_string{}
	mimeType_ms.data = C.CString(mimeType)
	mimeType_ms.len = C.size_t(len(mimeType))
	defer C.free(unsafe.Pointer(mimeType_ms.data))
	C.QWebEngineView_SetContent3(this.h, data_alias, mimeType_ms, (*C.QUrl)(baseUrl.UnsafePointer()))
}

func (this *QWebEngineView) TriggerPageAction2(action QWebEnginePage__WebAction, checked bool) {
	C.QWebEngineView_TriggerPageAction2(this.h, (C.int)(action), (C.bool)(checked))
}

func (this *QWebEngineView) PrintToPdf2(filePath string, layout *qt6.QPageLayout) {
	filePath_ms := C.struct_miqt_string{}
	filePath_ms.data = C.CString(filePath)
	filePath_ms.len = C.size_t(len(filePath))
	defer C.free(unsafe.Pointer(filePath_ms.data))
	C.QWebEngineView_PrintToPdf2(this.h, filePath_ms, (*C.QPageLayout)(layout.UnsafePointer()))
}

func (this *QWebEngineView) PrintToPdf3(filePath string, layout *qt6.QPageLayout, ranges *qt6.QPageRanges) {
	filePath_ms := C.struct_miqt_string{}
	filePath_ms.data = C.CString(filePath)
	filePath_ms.len = C.size_t(len(filePath))
	defer C.free(unsafe.Pointer(filePath_ms.data))
	C.QWebEngineView_PrintToPdf3(this.h, filePath_ms, (*C.QPageLayout)(layout.UnsafePointer()), (*C.QPageRanges)(ranges.UnsafePointer()))
}

func (this *QWebEngineView) callVirtualBase_SizeHint() *qt6.QSize {

	_goptr := qt6.UnsafeNewQSize(unsafe.Pointer(C.QWebEngineView_virtualbase_SizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QWebEngineView) OnSizeHint(slot func(super func() *qt6.QSize) *qt6.QSize) {
	ok := C.QWebEngineView_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineView_SizeHint
func miqt_exec_callback_QWebEngineView_SizeHint(self *C.QWebEngineView, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QSize) *qt6.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWebEngineView{h: self}).callVirtualBase_SizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QWebEngineView) callVirtualBase_CreateWindow(typeVal QWebEnginePage__WebWindowType) *QWebEngineView {

	return newQWebEngineView(C.QWebEngineView_virtualbase_CreateWindow(unsafe.Pointer(this.h), (C.int)(typeVal)))

}
func (this *QWebEngineView) OnCreateWindow(slot func(super func(typeVal QWebEnginePage__WebWindowType) *QWebEngineView, typeVal QWebEnginePage__WebWindowType) *QWebEngineView) {
	ok := C.QWebEngineView_override_virtual_CreateWindow(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineView_CreateWindow
func miqt_exec_callback_QWebEngineView_CreateWindow(self *C.QWebEngineView, cb C.intptr_t, typeVal C.int) *C.QWebEngineView {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(typeVal QWebEnginePage__WebWindowType) *QWebEngineView, typeVal QWebEnginePage__WebWindowType) *QWebEngineView)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QWebEnginePage__WebWindowType)(typeVal)

	virtualReturn := gofunc((&QWebEngineView{h: self}).callVirtualBase_CreateWindow, slotval1)

	return virtualReturn.cPointer()

}

func (this *QWebEngineView) callVirtualBase_ContextMenuEvent(param1 *qt6.QContextMenuEvent) {

	C.QWebEngineView_virtualbase_ContextMenuEvent(unsafe.Pointer(this.h), (*C.QContextMenuEvent)(param1.UnsafePointer()))

}
func (this *QWebEngineView) OnContextMenuEvent(slot func(super func(param1 *qt6.QContextMenuEvent), param1 *qt6.QContextMenuEvent)) {
	ok := C.QWebEngineView_override_virtual_ContextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineView_ContextMenuEvent
func miqt_exec_callback_QWebEngineView_ContextMenuEvent(self *C.QWebEngineView, cb C.intptr_t, param1 *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QContextMenuEvent), param1 *qt6.QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQContextMenuEvent(unsafe.Pointer(param1))

	gofunc((&QWebEngineView{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QWebEngineView) callVirtualBase_Event(param1 *qt6.QEvent) bool {

	return (bool)(C.QWebEngineView_virtualbase_Event(unsafe.Pointer(this.h), (*C.QEvent)(param1.UnsafePointer())))

}
func (this *QWebEngineView) OnEvent(slot func(super func(param1 *qt6.QEvent) bool, param1 *qt6.QEvent) bool) {
	ok := C.QWebEngineView_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineView_Event
func miqt_exec_callback_QWebEngineView_Event(self *C.QWebEngineView, cb C.intptr_t, param1 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QEvent) bool, param1 *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(param1))

	virtualReturn := gofunc((&QWebEngineView{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QWebEngineView) callVirtualBase_ShowEvent(param1 *qt6.QShowEvent) {

	C.QWebEngineView_virtualbase_ShowEvent(unsafe.Pointer(this.h), (*C.QShowEvent)(param1.UnsafePointer()))

}
func (this *QWebEngineView) OnShowEvent(slot func(super func(param1 *qt6.QShowEvent), param1 *qt6.QShowEvent)) {
	ok := C.QWebEngineView_override_virtual_ShowEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineView_ShowEvent
func miqt_exec_callback_QWebEngineView_ShowEvent(self *C.QWebEngineView, cb C.intptr_t, param1 *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QShowEvent), param1 *qt6.QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQShowEvent(unsafe.Pointer(param1))

	gofunc((&QWebEngineView{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QWebEngineView) callVirtualBase_HideEvent(param1 *qt6.QHideEvent) {

	C.QWebEngineView_virtualbase_HideEvent(unsafe.Pointer(this.h), (*C.QHideEvent)(param1.UnsafePointer()))

}
func (this *QWebEngineView) OnHideEvent(slot func(super func(param1 *qt6.QHideEvent), param1 *qt6.QHideEvent)) {
	ok := C.QWebEngineView_override_virtual_HideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineView_HideEvent
func miqt_exec_callback_QWebEngineView_HideEvent(self *C.QWebEngineView, cb C.intptr_t, param1 *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QHideEvent), param1 *qt6.QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQHideEvent(unsafe.Pointer(param1))

	gofunc((&QWebEngineView{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QWebEngineView) callVirtualBase_CloseEvent(param1 *qt6.QCloseEvent) {

	C.QWebEngineView_virtualbase_CloseEvent(unsafe.Pointer(this.h), (*C.QCloseEvent)(param1.UnsafePointer()))

}
func (this *QWebEngineView) OnCloseEvent(slot func(super func(param1 *qt6.QCloseEvent), param1 *qt6.QCloseEvent)) {
	ok := C.QWebEngineView_override_virtual_CloseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineView_CloseEvent
func miqt_exec_callback_QWebEngineView_CloseEvent(self *C.QWebEngineView, cb C.intptr_t, param1 *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QCloseEvent), param1 *qt6.QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQCloseEvent(unsafe.Pointer(param1))

	gofunc((&QWebEngineView{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QWebEngineView) callVirtualBase_DragEnterEvent(e *qt6.QDragEnterEvent) {

	C.QWebEngineView_virtualbase_DragEnterEvent(unsafe.Pointer(this.h), (*C.QDragEnterEvent)(e.UnsafePointer()))

}
func (this *QWebEngineView) OnDragEnterEvent(slot func(super func(e *qt6.QDragEnterEvent), e *qt6.QDragEnterEvent)) {
	ok := C.QWebEngineView_override_virtual_DragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineView_DragEnterEvent
func miqt_exec_callback_QWebEngineView_DragEnterEvent(self *C.QWebEngineView, cb C.intptr_t, e *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *qt6.QDragEnterEvent), e *qt6.QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQDragEnterEvent(unsafe.Pointer(e))

	gofunc((&QWebEngineView{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QWebEngineView) callVirtualBase_DragLeaveEvent(e *qt6.QDragLeaveEvent) {

	C.QWebEngineView_virtualbase_DragLeaveEvent(unsafe.Pointer(this.h), (*C.QDragLeaveEvent)(e.UnsafePointer()))

}
func (this *QWebEngineView) OnDragLeaveEvent(slot func(super func(e *qt6.QDragLeaveEvent), e *qt6.QDragLeaveEvent)) {
	ok := C.QWebEngineView_override_virtual_DragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineView_DragLeaveEvent
func miqt_exec_callback_QWebEngineView_DragLeaveEvent(self *C.QWebEngineView, cb C.intptr_t, e *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *qt6.QDragLeaveEvent), e *qt6.QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQDragLeaveEvent(unsafe.Pointer(e))

	gofunc((&QWebEngineView{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QWebEngineView) callVirtualBase_DragMoveEvent(e *qt6.QDragMoveEvent) {

	C.QWebEngineView_virtualbase_DragMoveEvent(unsafe.Pointer(this.h), (*C.QDragMoveEvent)(e.UnsafePointer()))

}
func (this *QWebEngineView) OnDragMoveEvent(slot func(super func(e *qt6.QDragMoveEvent), e *qt6.QDragMoveEvent)) {
	ok := C.QWebEngineView_override_virtual_DragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineView_DragMoveEvent
func miqt_exec_callback_QWebEngineView_DragMoveEvent(self *C.QWebEngineView, cb C.intptr_t, e *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *qt6.QDragMoveEvent), e *qt6.QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQDragMoveEvent(unsafe.Pointer(e))

	gofunc((&QWebEngineView{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QWebEngineView) callVirtualBase_DropEvent(e *qt6.QDropEvent) {

	C.QWebEngineView_virtualbase_DropEvent(unsafe.Pointer(this.h), (*C.QDropEvent)(e.UnsafePointer()))

}
func (this *QWebEngineView) OnDropEvent(slot func(super func(e *qt6.QDropEvent), e *qt6.QDropEvent)) {
	ok := C.QWebEngineView_override_virtual_DropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineView_DropEvent
func miqt_exec_callback_QWebEngineView_DropEvent(self *C.QWebEngineView, cb C.intptr_t, e *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *qt6.QDropEvent), e *qt6.QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQDropEvent(unsafe.Pointer(e))

	gofunc((&QWebEngineView{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QWebEngineView) callVirtualBase_DevType() int {

	return (int)(C.QWebEngineView_virtualbase_DevType(unsafe.Pointer(this.h)))

}
func (this *QWebEngineView) OnDevType(slot func(super func() int) int) {
	ok := C.QWebEngineView_override_virtual_DevType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineView_DevType
func miqt_exec_callback_QWebEngineView_DevType(self *C.QWebEngineView, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWebEngineView{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QWebEngineView) callVirtualBase_SetVisible(visible bool) {

	C.QWebEngineView_virtualbase_SetVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QWebEngineView) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QWebEngineView_override_virtual_SetVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineView_SetVisible
func miqt_exec_callback_QWebEngineView_SetVisible(self *C.QWebEngineView, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QWebEngineView{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QWebEngineView) callVirtualBase_MinimumSizeHint() *qt6.QSize {

	_goptr := qt6.UnsafeNewQSize(unsafe.Pointer(C.QWebEngineView_virtualbase_MinimumSizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QWebEngineView) OnMinimumSizeHint(slot func(super func() *qt6.QSize) *qt6.QSize) {
	ok := C.QWebEngineView_override_virtual_MinimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineView_MinimumSizeHint
func miqt_exec_callback_QWebEngineView_MinimumSizeHint(self *C.QWebEngineView, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QSize) *qt6.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWebEngineView{h: self}).callVirtualBase_MinimumSizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QWebEngineView) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QWebEngineView_virtualbase_HeightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QWebEngineView) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QWebEngineView_override_virtual_HeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineView_HeightForWidth
func miqt_exec_callback_QWebEngineView_HeightForWidth(self *C.QWebEngineView, cb C.intptr_t, param1 C.int) C.int {
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

	return (bool)(C.QWebEngineView_virtualbase_HasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QWebEngineView) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QWebEngineView_override_virtual_HasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineView_HasHeightForWidth
func miqt_exec_callback_QWebEngineView_HasHeightForWidth(self *C.QWebEngineView, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWebEngineView{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QWebEngineView) callVirtualBase_PaintEngine() *qt6.QPaintEngine {

	return qt6.UnsafeNewQPaintEngine(unsafe.Pointer(C.QWebEngineView_virtualbase_PaintEngine(unsafe.Pointer(this.h))))

}
func (this *QWebEngineView) OnPaintEngine(slot func(super func() *qt6.QPaintEngine) *qt6.QPaintEngine) {
	ok := C.QWebEngineView_override_virtual_PaintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineView_PaintEngine
func miqt_exec_callback_QWebEngineView_PaintEngine(self *C.QWebEngineView, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QPaintEngine) *qt6.QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWebEngineView{h: self}).callVirtualBase_PaintEngine)

	return (*C.QPaintEngine)(virtualReturn.UnsafePointer())

}

func (this *QWebEngineView) callVirtualBase_MousePressEvent(event *qt6.QMouseEvent) {

	C.QWebEngineView_virtualbase_MousePressEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QWebEngineView) OnMousePressEvent(slot func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent)) {
	ok := C.QWebEngineView_override_virtual_MousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineView_MousePressEvent
func miqt_exec_callback_QWebEngineView_MousePressEvent(self *C.QWebEngineView, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QWebEngineView{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QWebEngineView) callVirtualBase_MouseReleaseEvent(event *qt6.QMouseEvent) {

	C.QWebEngineView_virtualbase_MouseReleaseEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QWebEngineView) OnMouseReleaseEvent(slot func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent)) {
	ok := C.QWebEngineView_override_virtual_MouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineView_MouseReleaseEvent
func miqt_exec_callback_QWebEngineView_MouseReleaseEvent(self *C.QWebEngineView, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QWebEngineView{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QWebEngineView) callVirtualBase_MouseDoubleClickEvent(event *qt6.QMouseEvent) {

	C.QWebEngineView_virtualbase_MouseDoubleClickEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QWebEngineView) OnMouseDoubleClickEvent(slot func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent)) {
	ok := C.QWebEngineView_override_virtual_MouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineView_MouseDoubleClickEvent
func miqt_exec_callback_QWebEngineView_MouseDoubleClickEvent(self *C.QWebEngineView, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QWebEngineView{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QWebEngineView) callVirtualBase_MouseMoveEvent(event *qt6.QMouseEvent) {

	C.QWebEngineView_virtualbase_MouseMoveEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QWebEngineView) OnMouseMoveEvent(slot func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent)) {
	ok := C.QWebEngineView_override_virtual_MouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineView_MouseMoveEvent
func miqt_exec_callback_QWebEngineView_MouseMoveEvent(self *C.QWebEngineView, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QWebEngineView{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QWebEngineView) callVirtualBase_WheelEvent(event *qt6.QWheelEvent) {

	C.QWebEngineView_virtualbase_WheelEvent(unsafe.Pointer(this.h), (*C.QWheelEvent)(event.UnsafePointer()))

}
func (this *QWebEngineView) OnWheelEvent(slot func(super func(event *qt6.QWheelEvent), event *qt6.QWheelEvent)) {
	ok := C.QWebEngineView_override_virtual_WheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineView_WheelEvent
func miqt_exec_callback_QWebEngineView_WheelEvent(self *C.QWebEngineView, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QWheelEvent), event *qt6.QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQWheelEvent(unsafe.Pointer(event))

	gofunc((&QWebEngineView{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QWebEngineView) callVirtualBase_KeyPressEvent(event *qt6.QKeyEvent) {

	C.QWebEngineView_virtualbase_KeyPressEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(event.UnsafePointer()))

}
func (this *QWebEngineView) OnKeyPressEvent(slot func(super func(event *qt6.QKeyEvent), event *qt6.QKeyEvent)) {
	ok := C.QWebEngineView_override_virtual_KeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineView_KeyPressEvent
func miqt_exec_callback_QWebEngineView_KeyPressEvent(self *C.QWebEngineView, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QKeyEvent), event *qt6.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQKeyEvent(unsafe.Pointer(event))

	gofunc((&QWebEngineView{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QWebEngineView) callVirtualBase_KeyReleaseEvent(event *qt6.QKeyEvent) {

	C.QWebEngineView_virtualbase_KeyReleaseEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(event.UnsafePointer()))

}
func (this *QWebEngineView) OnKeyReleaseEvent(slot func(super func(event *qt6.QKeyEvent), event *qt6.QKeyEvent)) {
	ok := C.QWebEngineView_override_virtual_KeyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineView_KeyReleaseEvent
func miqt_exec_callback_QWebEngineView_KeyReleaseEvent(self *C.QWebEngineView, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QKeyEvent), event *qt6.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQKeyEvent(unsafe.Pointer(event))

	gofunc((&QWebEngineView{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QWebEngineView) callVirtualBase_FocusInEvent(event *qt6.QFocusEvent) {

	C.QWebEngineView_virtualbase_FocusInEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(event.UnsafePointer()))

}
func (this *QWebEngineView) OnFocusInEvent(slot func(super func(event *qt6.QFocusEvent), event *qt6.QFocusEvent)) {
	ok := C.QWebEngineView_override_virtual_FocusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineView_FocusInEvent
func miqt_exec_callback_QWebEngineView_FocusInEvent(self *C.QWebEngineView, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QFocusEvent), event *qt6.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQFocusEvent(unsafe.Pointer(event))

	gofunc((&QWebEngineView{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QWebEngineView) callVirtualBase_FocusOutEvent(event *qt6.QFocusEvent) {

	C.QWebEngineView_virtualbase_FocusOutEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(event.UnsafePointer()))

}
func (this *QWebEngineView) OnFocusOutEvent(slot func(super func(event *qt6.QFocusEvent), event *qt6.QFocusEvent)) {
	ok := C.QWebEngineView_override_virtual_FocusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineView_FocusOutEvent
func miqt_exec_callback_QWebEngineView_FocusOutEvent(self *C.QWebEngineView, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QFocusEvent), event *qt6.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQFocusEvent(unsafe.Pointer(event))

	gofunc((&QWebEngineView{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QWebEngineView) callVirtualBase_EnterEvent(event *qt6.QEnterEvent) {

	C.QWebEngineView_virtualbase_EnterEvent(unsafe.Pointer(this.h), (*C.QEnterEvent)(event.UnsafePointer()))

}
func (this *QWebEngineView) OnEnterEvent(slot func(super func(event *qt6.QEnterEvent), event *qt6.QEnterEvent)) {
	ok := C.QWebEngineView_override_virtual_EnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineView_EnterEvent
func miqt_exec_callback_QWebEngineView_EnterEvent(self *C.QWebEngineView, cb C.intptr_t, event *C.QEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEnterEvent), event *qt6.QEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEnterEvent(unsafe.Pointer(event))

	gofunc((&QWebEngineView{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QWebEngineView) callVirtualBase_LeaveEvent(event *qt6.QEvent) {

	C.QWebEngineView_virtualbase_LeaveEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QWebEngineView) OnLeaveEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QWebEngineView_override_virtual_LeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineView_LeaveEvent
func miqt_exec_callback_QWebEngineView_LeaveEvent(self *C.QWebEngineView, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QWebEngineView{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QWebEngineView) callVirtualBase_PaintEvent(event *qt6.QPaintEvent) {

	C.QWebEngineView_virtualbase_PaintEvent(unsafe.Pointer(this.h), (*C.QPaintEvent)(event.UnsafePointer()))

}
func (this *QWebEngineView) OnPaintEvent(slot func(super func(event *qt6.QPaintEvent), event *qt6.QPaintEvent)) {
	ok := C.QWebEngineView_override_virtual_PaintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineView_PaintEvent
func miqt_exec_callback_QWebEngineView_PaintEvent(self *C.QWebEngineView, cb C.intptr_t, event *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QPaintEvent), event *qt6.QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPaintEvent(unsafe.Pointer(event))

	gofunc((&QWebEngineView{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QWebEngineView) callVirtualBase_MoveEvent(event *qt6.QMoveEvent) {

	C.QWebEngineView_virtualbase_MoveEvent(unsafe.Pointer(this.h), (*C.QMoveEvent)(event.UnsafePointer()))

}
func (this *QWebEngineView) OnMoveEvent(slot func(super func(event *qt6.QMoveEvent), event *qt6.QMoveEvent)) {
	ok := C.QWebEngineView_override_virtual_MoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineView_MoveEvent
func miqt_exec_callback_QWebEngineView_MoveEvent(self *C.QWebEngineView, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QMoveEvent), event *qt6.QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMoveEvent(unsafe.Pointer(event))

	gofunc((&QWebEngineView{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QWebEngineView) callVirtualBase_ResizeEvent(event *qt6.QResizeEvent) {

	C.QWebEngineView_virtualbase_ResizeEvent(unsafe.Pointer(this.h), (*C.QResizeEvent)(event.UnsafePointer()))

}
func (this *QWebEngineView) OnResizeEvent(slot func(super func(event *qt6.QResizeEvent), event *qt6.QResizeEvent)) {
	ok := C.QWebEngineView_override_virtual_ResizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineView_ResizeEvent
func miqt_exec_callback_QWebEngineView_ResizeEvent(self *C.QWebEngineView, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QResizeEvent), event *qt6.QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQResizeEvent(unsafe.Pointer(event))

	gofunc((&QWebEngineView{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QWebEngineView) callVirtualBase_TabletEvent(event *qt6.QTabletEvent) {

	C.QWebEngineView_virtualbase_TabletEvent(unsafe.Pointer(this.h), (*C.QTabletEvent)(event.UnsafePointer()))

}
func (this *QWebEngineView) OnTabletEvent(slot func(super func(event *qt6.QTabletEvent), event *qt6.QTabletEvent)) {
	ok := C.QWebEngineView_override_virtual_TabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineView_TabletEvent
func miqt_exec_callback_QWebEngineView_TabletEvent(self *C.QWebEngineView, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTabletEvent), event *qt6.QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTabletEvent(unsafe.Pointer(event))

	gofunc((&QWebEngineView{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QWebEngineView) callVirtualBase_ActionEvent(event *qt6.QActionEvent) {

	C.QWebEngineView_virtualbase_ActionEvent(unsafe.Pointer(this.h), (*C.QActionEvent)(event.UnsafePointer()))

}
func (this *QWebEngineView) OnActionEvent(slot func(super func(event *qt6.QActionEvent), event *qt6.QActionEvent)) {
	ok := C.QWebEngineView_override_virtual_ActionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineView_ActionEvent
func miqt_exec_callback_QWebEngineView_ActionEvent(self *C.QWebEngineView, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QActionEvent), event *qt6.QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQActionEvent(unsafe.Pointer(event))

	gofunc((&QWebEngineView{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QWebEngineView) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *uintptr) bool {
	eventType_alias := C.struct_miqt_string{}
	eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QWebEngineView_virtualbase_NativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.intptr_t)(unsafe.Pointer(result))))

}
func (this *QWebEngineView) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool) {
	ok := C.QWebEngineView_override_virtual_NativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineView_NativeEvent
func miqt_exec_callback_QWebEngineView_NativeEvent(self *C.QWebEngineView, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var eventType_bytearray C.struct_miqt_string = eventType
	eventType_ret := C.GoBytes(unsafe.Pointer(eventType_bytearray.data), C.int(int64(eventType_bytearray.len)))
	C.free(unsafe.Pointer(eventType_bytearray.data))
	slotval1 := eventType_ret
	slotval2 := (unsafe.Pointer)(message)

	slotval3 := (*uintptr)(unsafe.Pointer(result))

	virtualReturn := gofunc((&QWebEngineView{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QWebEngineView) callVirtualBase_ChangeEvent(param1 *qt6.QEvent) {

	C.QWebEngineView_virtualbase_ChangeEvent(unsafe.Pointer(this.h), (*C.QEvent)(param1.UnsafePointer()))

}
func (this *QWebEngineView) OnChangeEvent(slot func(super func(param1 *qt6.QEvent), param1 *qt6.QEvent)) {
	ok := C.QWebEngineView_override_virtual_ChangeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineView_ChangeEvent
func miqt_exec_callback_QWebEngineView_ChangeEvent(self *C.QWebEngineView, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QEvent), param1 *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(param1))

	gofunc((&QWebEngineView{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QWebEngineView) callVirtualBase_Metric(param1 qt6.QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QWebEngineView_virtualbase_Metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QWebEngineView) OnMetric(slot func(super func(param1 qt6.QPaintDevice__PaintDeviceMetric) int, param1 qt6.QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QWebEngineView_override_virtual_Metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineView_Metric
func miqt_exec_callback_QWebEngineView_Metric(self *C.QWebEngineView, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 qt6.QPaintDevice__PaintDeviceMetric) int, param1 qt6.QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt6.QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QWebEngineView{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QWebEngineView) callVirtualBase_InitPainter(painter *qt6.QPainter) {

	C.QWebEngineView_virtualbase_InitPainter(unsafe.Pointer(this.h), (*C.QPainter)(painter.UnsafePointer()))

}
func (this *QWebEngineView) OnInitPainter(slot func(super func(painter *qt6.QPainter), painter *qt6.QPainter)) {
	ok := C.QWebEngineView_override_virtual_InitPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineView_InitPainter
func miqt_exec_callback_QWebEngineView_InitPainter(self *C.QWebEngineView, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *qt6.QPainter), painter *qt6.QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPainter(unsafe.Pointer(painter))

	gofunc((&QWebEngineView{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QWebEngineView) callVirtualBase_Redirected(offset *qt6.QPoint) *qt6.QPaintDevice {

	return qt6.UnsafeNewQPaintDevice(unsafe.Pointer(C.QWebEngineView_virtualbase_Redirected(unsafe.Pointer(this.h), (*C.QPoint)(offset.UnsafePointer()))))

}
func (this *QWebEngineView) OnRedirected(slot func(super func(offset *qt6.QPoint) *qt6.QPaintDevice, offset *qt6.QPoint) *qt6.QPaintDevice) {
	ok := C.QWebEngineView_override_virtual_Redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineView_Redirected
func miqt_exec_callback_QWebEngineView_Redirected(self *C.QWebEngineView, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *qt6.QPoint) *qt6.QPaintDevice, offset *qt6.QPoint) *qt6.QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPoint(unsafe.Pointer(offset))

	virtualReturn := gofunc((&QWebEngineView{h: self}).callVirtualBase_Redirected, slotval1)

	return (*C.QPaintDevice)(virtualReturn.UnsafePointer())

}

func (this *QWebEngineView) callVirtualBase_SharedPainter() *qt6.QPainter {

	return qt6.UnsafeNewQPainter(unsafe.Pointer(C.QWebEngineView_virtualbase_SharedPainter(unsafe.Pointer(this.h))))

}
func (this *QWebEngineView) OnSharedPainter(slot func(super func() *qt6.QPainter) *qt6.QPainter) {
	ok := C.QWebEngineView_override_virtual_SharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineView_SharedPainter
func miqt_exec_callback_QWebEngineView_SharedPainter(self *C.QWebEngineView, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QPainter) *qt6.QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWebEngineView{h: self}).callVirtualBase_SharedPainter)

	return (*C.QPainter)(virtualReturn.UnsafePointer())

}

func (this *QWebEngineView) callVirtualBase_InputMethodEvent(param1 *qt6.QInputMethodEvent) {

	C.QWebEngineView_virtualbase_InputMethodEvent(unsafe.Pointer(this.h), (*C.QInputMethodEvent)(param1.UnsafePointer()))

}
func (this *QWebEngineView) OnInputMethodEvent(slot func(super func(param1 *qt6.QInputMethodEvent), param1 *qt6.QInputMethodEvent)) {
	ok := C.QWebEngineView_override_virtual_InputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineView_InputMethodEvent
func miqt_exec_callback_QWebEngineView_InputMethodEvent(self *C.QWebEngineView, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QInputMethodEvent), param1 *qt6.QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQInputMethodEvent(unsafe.Pointer(param1))

	gofunc((&QWebEngineView{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QWebEngineView) callVirtualBase_InputMethodQuery(param1 qt6.InputMethodQuery) *qt6.QVariant {

	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(C.QWebEngineView_virtualbase_InputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QWebEngineView) OnInputMethodQuery(slot func(super func(param1 qt6.InputMethodQuery) *qt6.QVariant, param1 qt6.InputMethodQuery) *qt6.QVariant) {
	ok := C.QWebEngineView_override_virtual_InputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineView_InputMethodQuery
func miqt_exec_callback_QWebEngineView_InputMethodQuery(self *C.QWebEngineView, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 qt6.InputMethodQuery) *qt6.QVariant, param1 qt6.InputMethodQuery) *qt6.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt6.InputMethodQuery)(param1)

	virtualReturn := gofunc((&QWebEngineView{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}

func (this *QWebEngineView) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QWebEngineView_virtualbase_FocusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QWebEngineView) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QWebEngineView_override_virtual_FocusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebEngineView_FocusNextPrevChild
func miqt_exec_callback_QWebEngineView_FocusNextPrevChild(self *C.QWebEngineView, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QWebEngineView{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

// Delete this object from C++ memory.
func (this *QWebEngineView) Delete() {
	C.QWebEngineView_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWebEngineView) GoGC() {
	runtime.SetFinalizer(this, func(this *QWebEngineView) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
