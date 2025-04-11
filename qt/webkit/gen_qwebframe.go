package webkit

/*

#include "gen_qwebframe.h"
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

type QWebFrame__ValueOwnership int

const (
	QWebFrame__QtOwnership     QWebFrame__ValueOwnership = 0
	QWebFrame__ScriptOwnership QWebFrame__ValueOwnership = 1
	QWebFrame__AutoOwnership   QWebFrame__ValueOwnership = 2
)

type QWebFrame__RenderLayer int

const (
	QWebFrame__ContentsLayer  QWebFrame__RenderLayer = 16
	QWebFrame__ScrollBarLayer QWebFrame__RenderLayer = 32
	QWebFrame__PanIconLayer   QWebFrame__RenderLayer = 64
	QWebFrame__AllLayers      QWebFrame__RenderLayer = 255
)

type QWebHitTestResult struct {
	h *C.QWebHitTestResult
}

func (this *QWebHitTestResult) cPointer() *C.QWebHitTestResult {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWebHitTestResult) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWebHitTestResult constructs the type using only CGO pointers.
func newQWebHitTestResult(h *C.QWebHitTestResult) *QWebHitTestResult {
	if h == nil {
		return nil
	}

	return &QWebHitTestResult{h: h}
}

// UnsafeNewQWebHitTestResult constructs the type using only unsafe pointers.
func UnsafeNewQWebHitTestResult(h unsafe.Pointer) *QWebHitTestResult {
	return newQWebHitTestResult((*C.QWebHitTestResult)(h))
}

// NewQWebHitTestResult constructs a new QWebHitTestResult object.
func NewQWebHitTestResult() *QWebHitTestResult {

	return newQWebHitTestResult(C.QWebHitTestResult_new())
}

// NewQWebHitTestResult2 constructs a new QWebHitTestResult object.
func NewQWebHitTestResult2(other *QWebHitTestResult) *QWebHitTestResult {

	return newQWebHitTestResult(C.QWebHitTestResult_new2(other.cPointer()))
}

func (this *QWebHitTestResult) OperatorAssign(other *QWebHitTestResult) {
	C.QWebHitTestResult_operatorAssign(this.h, other.cPointer())
}

func (this *QWebHitTestResult) IsNull() bool {
	return (bool)(C.QWebHitTestResult_isNull(this.h))
}

func (this *QWebHitTestResult) Pos() *qt.QPoint {
	_goptr := qt.UnsafeNewQPoint(unsafe.Pointer(C.QWebHitTestResult_pos(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebHitTestResult) BoundingRect() *qt.QRect {
	_goptr := qt.UnsafeNewQRect(unsafe.Pointer(C.QWebHitTestResult_boundingRect(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebHitTestResult) EnclosingBlockElement() *QWebElement {
	_goptr := newQWebElement(C.QWebHitTestResult_enclosingBlockElement(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebHitTestResult) Title() string {
	var _ms C.struct_miqt_string = C.QWebHitTestResult_title(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebHitTestResult) LinkText() string {
	var _ms C.struct_miqt_string = C.QWebHitTestResult_linkText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebHitTestResult) LinkUrl() *qt.QUrl {
	_goptr := qt.UnsafeNewQUrl(unsafe.Pointer(C.QWebHitTestResult_linkUrl(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebHitTestResult) LinkTitle() *qt.QUrl {
	_goptr := qt.UnsafeNewQUrl(unsafe.Pointer(C.QWebHitTestResult_linkTitle(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebHitTestResult) LinkTitleString() string {
	var _ms C.struct_miqt_string = C.QWebHitTestResult_linkTitleString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebHitTestResult) LinkTargetFrame() *QWebFrame {
	return newQWebFrame(C.QWebHitTestResult_linkTargetFrame(this.h))
}

func (this *QWebHitTestResult) LinkElement() *QWebElement {
	_goptr := newQWebElement(C.QWebHitTestResult_linkElement(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebHitTestResult) AlternateText() string {
	var _ms C.struct_miqt_string = C.QWebHitTestResult_alternateText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebHitTestResult) ImageUrl() *qt.QUrl {
	_goptr := qt.UnsafeNewQUrl(unsafe.Pointer(C.QWebHitTestResult_imageUrl(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebHitTestResult) Pixmap() *qt.QPixmap {
	_goptr := qt.UnsafeNewQPixmap(unsafe.Pointer(C.QWebHitTestResult_pixmap(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebHitTestResult) MediaUrl() *qt.QUrl {
	_goptr := qt.UnsafeNewQUrl(unsafe.Pointer(C.QWebHitTestResult_mediaUrl(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebHitTestResult) IsContentEditable() bool {
	return (bool)(C.QWebHitTestResult_isContentEditable(this.h))
}

func (this *QWebHitTestResult) IsContentSelected() bool {
	return (bool)(C.QWebHitTestResult_isContentSelected(this.h))
}

func (this *QWebHitTestResult) Element() *QWebElement {
	_goptr := newQWebElement(C.QWebHitTestResult_element(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebHitTestResult) Frame() *QWebFrame {
	return newQWebFrame(C.QWebHitTestResult_frame(this.h))
}

// Delete this object from C++ memory.
func (this *QWebHitTestResult) Delete() {
	C.QWebHitTestResult_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWebHitTestResult) GoGC() {
	runtime.SetFinalizer(this, func(this *QWebHitTestResult) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QWebFrame struct {
	h *C.QWebFrame
	*qt.QObject
}

func (this *QWebFrame) cPointer() *C.QWebFrame {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWebFrame) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWebFrame constructs the type using only CGO pointers.
func newQWebFrame(h *C.QWebFrame) *QWebFrame {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QWebFrame_virtbase(h, &outptr_QObject)

	return &QWebFrame{h: h,
		QObject: qt.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQWebFrame constructs the type using only unsafe pointers.
func UnsafeNewQWebFrame(h unsafe.Pointer) *QWebFrame {
	return newQWebFrame((*C.QWebFrame)(h))
}

func (this *QWebFrame) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QWebFrame_metaObject(this.h)))
}

func (this *QWebFrame) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QWebFrame_metacast(this.h, param1_Cstring))
}

func QWebFrame_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QWebFrame_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebFrame_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QWebFrame_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebFrame) Page() *QWebPage {
	return newQWebPage(C.QWebFrame_page(this.h))
}

func (this *QWebFrame) Load(url *qt.QUrl) {
	C.QWebFrame_load(this.h, (*C.QUrl)(url.UnsafePointer()))
}

func (this *QWebFrame) LoadWithRequest(request *network.QNetworkRequest) {
	C.QWebFrame_loadWithRequest(this.h, (*C.QNetworkRequest)(request.UnsafePointer()))
}

func (this *QWebFrame) SetHtml(html string) {
	html_ms := C.struct_miqt_string{}
	html_ms.data = C.CString(html)
	html_ms.len = C.size_t(len(html))
	defer C.free(unsafe.Pointer(html_ms.data))
	C.QWebFrame_setHtml(this.h, html_ms)
}

func (this *QWebFrame) SetContent(data []byte) {
	data_alias := C.struct_miqt_string{}
	if len(data) > 0 {
		data_alias.data = (*C.char)(unsafe.Pointer(&data[0]))
	} else {
		data_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	data_alias.len = C.size_t(len(data))
	C.QWebFrame_setContent(this.h, data_alias)
}

func (this *QWebFrame) AddToJavaScriptWindowObject(name string, object *qt.QObject) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QWebFrame_addToJavaScriptWindowObject(this.h, name_ms, (*C.QObject)(object.UnsafePointer()))
}

func (this *QWebFrame) ToHtml() string {
	var _ms C.struct_miqt_string = C.QWebFrame_toHtml(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebFrame) ToPlainText() string {
	var _ms C.struct_miqt_string = C.QWebFrame_toPlainText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebFrame) Title() string {
	var _ms C.struct_miqt_string = C.QWebFrame_title(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebFrame) SetUrl(url *qt.QUrl) {
	C.QWebFrame_setUrl(this.h, (*C.QUrl)(url.UnsafePointer()))
}

func (this *QWebFrame) Url() *qt.QUrl {
	_goptr := qt.UnsafeNewQUrl(unsafe.Pointer(C.QWebFrame_url(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebFrame) RequestedUrl() *qt.QUrl {
	_goptr := qt.UnsafeNewQUrl(unsafe.Pointer(C.QWebFrame_requestedUrl(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebFrame) BaseUrl() *qt.QUrl {
	_goptr := qt.UnsafeNewQUrl(unsafe.Pointer(C.QWebFrame_baseUrl(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebFrame) Icon() *qt.QIcon {
	_goptr := qt.UnsafeNewQIcon(unsafe.Pointer(C.QWebFrame_icon(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebFrame) FrameName() string {
	var _ms C.struct_miqt_string = C.QWebFrame_frameName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebFrame) ParentFrame() *QWebFrame {
	return newQWebFrame(C.QWebFrame_parentFrame(this.h))
}

func (this *QWebFrame) ChildFrames() []*QWebFrame {
	var _ma C.struct_miqt_array = C.QWebFrame_childFrames(this.h)
	_ret := make([]*QWebFrame, int(_ma.len))
	_outCast := (*[0xffff]*C.QWebFrame)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQWebFrame(_outCast[i])
	}
	return _ret
}

func (this *QWebFrame) ScrollBarPolicy(orientation qt.Orientation) qt.ScrollBarPolicy {
	return (qt.ScrollBarPolicy)(C.QWebFrame_scrollBarPolicy(this.h, (C.int)(orientation)))
}

func (this *QWebFrame) SetScrollBarPolicy(orientation qt.Orientation, policy qt.ScrollBarPolicy) {
	C.QWebFrame_setScrollBarPolicy(this.h, (C.int)(orientation), (C.int)(policy))
}

func (this *QWebFrame) SetScrollBarValue(orientation qt.Orientation, value int) {
	C.QWebFrame_setScrollBarValue(this.h, (C.int)(orientation), (C.int)(value))
}

func (this *QWebFrame) ScrollBarValue(orientation qt.Orientation) int {
	return (int)(C.QWebFrame_scrollBarValue(this.h, (C.int)(orientation)))
}

func (this *QWebFrame) ScrollBarMinimum(orientation qt.Orientation) int {
	return (int)(C.QWebFrame_scrollBarMinimum(this.h, (C.int)(orientation)))
}

func (this *QWebFrame) ScrollBarMaximum(orientation qt.Orientation) int {
	return (int)(C.QWebFrame_scrollBarMaximum(this.h, (C.int)(orientation)))
}

func (this *QWebFrame) ScrollBarGeometry(orientation qt.Orientation) *qt.QRect {
	_goptr := qt.UnsafeNewQRect(unsafe.Pointer(C.QWebFrame_scrollBarGeometry(this.h, (C.int)(orientation))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebFrame) Scroll(param1 int, param2 int) {
	C.QWebFrame_scroll(this.h, (C.int)(param1), (C.int)(param2))
}

func (this *QWebFrame) ScrollPosition() *qt.QPoint {
	_goptr := qt.UnsafeNewQPoint(unsafe.Pointer(C.QWebFrame_scrollPosition(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebFrame) SetScrollPosition(pos *qt.QPoint) {
	C.QWebFrame_setScrollPosition(this.h, (*C.QPoint)(pos.UnsafePointer()))
}

func (this *QWebFrame) ScrollToAnchor(anchor string) {
	anchor_ms := C.struct_miqt_string{}
	anchor_ms.data = C.CString(anchor)
	anchor_ms.len = C.size_t(len(anchor))
	defer C.free(unsafe.Pointer(anchor_ms.data))
	C.QWebFrame_scrollToAnchor(this.h, anchor_ms)
}

func (this *QWebFrame) Render(param1 *qt.QPainter) {
	C.QWebFrame_render(this.h, (*C.QPainter)(param1.UnsafePointer()))
}

func (this *QWebFrame) Render2(param1 *qt.QPainter, layer QWebFrame__RenderLayer) {
	C.QWebFrame_render2(this.h, (*C.QPainter)(param1.UnsafePointer()), (C.int)(layer))
}

func (this *QWebFrame) SetTextSizeMultiplier(factor float64) {
	C.QWebFrame_setTextSizeMultiplier(this.h, (C.double)(factor))
}

func (this *QWebFrame) TextSizeMultiplier() float64 {
	return (float64)(C.QWebFrame_textSizeMultiplier(this.h))
}

func (this *QWebFrame) ZoomFactor() float64 {
	return (float64)(C.QWebFrame_zoomFactor(this.h))
}

func (this *QWebFrame) SetZoomFactor(factor float64) {
	C.QWebFrame_setZoomFactor(this.h, (C.double)(factor))
}

func (this *QWebFrame) HasFocus() bool {
	return (bool)(C.QWebFrame_hasFocus(this.h))
}

func (this *QWebFrame) SetFocus() {
	C.QWebFrame_setFocus(this.h)
}

func (this *QWebFrame) Pos() *qt.QPoint {
	_goptr := qt.UnsafeNewQPoint(unsafe.Pointer(C.QWebFrame_pos(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebFrame) Geometry() *qt.QRect {
	_goptr := qt.UnsafeNewQRect(unsafe.Pointer(C.QWebFrame_geometry(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebFrame) ContentsSize() *qt.QSize {
	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QWebFrame_contentsSize(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebFrame) DocumentElement() *QWebElement {
	_goptr := newQWebElement(C.QWebFrame_documentElement(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebFrame) OwnerElement() *QWebElement {
	_goptr := newQWebElement(C.QWebFrame_ownerElement(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebFrame) FindAllElements(selectorQuery string) *QWebElementCollection {
	selectorQuery_ms := C.struct_miqt_string{}
	selectorQuery_ms.data = C.CString(selectorQuery)
	selectorQuery_ms.len = C.size_t(len(selectorQuery))
	defer C.free(unsafe.Pointer(selectorQuery_ms.data))
	_goptr := newQWebElementCollection(C.QWebFrame_findAllElements(this.h, selectorQuery_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebFrame) FindFirstElement(selectorQuery string) *QWebElement {
	selectorQuery_ms := C.struct_miqt_string{}
	selectorQuery_ms.data = C.CString(selectorQuery)
	selectorQuery_ms.len = C.size_t(len(selectorQuery))
	defer C.free(unsafe.Pointer(selectorQuery_ms.data))
	_goptr := newQWebElement(C.QWebFrame_findFirstElement(this.h, selectorQuery_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebFrame) HitTestContent(pos *qt.QPoint) *QWebHitTestResult {
	_goptr := newQWebHitTestResult(C.QWebFrame_hitTestContent(this.h, (*C.QPoint)(pos.UnsafePointer())))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebFrame) Event(param1 *qt.QEvent) bool {
	return (bool)(C.QWebFrame_event(this.h, (*C.QEvent)(param1.UnsafePointer())))
}

func (this *QWebFrame) SecurityOrigin() *QWebSecurityOrigin {
	_goptr := newQWebSecurityOrigin(C.QWebFrame_securityOrigin(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebFrame) EvaluateJavaScript(scriptSource string) *qt.QVariant {
	scriptSource_ms := C.struct_miqt_string{}
	scriptSource_ms.data = C.CString(scriptSource)
	scriptSource_ms.len = C.size_t(len(scriptSource))
	defer C.free(unsafe.Pointer(scriptSource_ms.data))
	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QWebFrame_evaluateJavaScript(this.h, scriptSource_ms)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebFrame) Print(printer *printsupport.QPrinter) {
	C.QWebFrame_print(this.h, (*C.QPrinter)(printer.UnsafePointer()))
}

func (this *QWebFrame) JavaScriptWindowObjectCleared() {
	C.QWebFrame_javaScriptWindowObjectCleared(this.h)
}
func (this *QWebFrame) OnJavaScriptWindowObjectCleared(slot func()) {
	C.QWebFrame_connect_javaScriptWindowObjectCleared(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebFrame_javaScriptWindowObjectCleared
func miqt_exec_callback_QWebFrame_javaScriptWindowObjectCleared(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QWebFrame) ProvisionalLoad() {
	C.QWebFrame_provisionalLoad(this.h)
}
func (this *QWebFrame) OnProvisionalLoad(slot func()) {
	C.QWebFrame_connect_provisionalLoad(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebFrame_provisionalLoad
func miqt_exec_callback_QWebFrame_provisionalLoad(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QWebFrame) TitleChanged(title string) {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	C.QWebFrame_titleChanged(this.h, title_ms)
}
func (this *QWebFrame) OnTitleChanged(slot func(title string)) {
	C.QWebFrame_connect_titleChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebFrame_titleChanged
func miqt_exec_callback_QWebFrame_titleChanged(cb C.intptr_t, title C.struct_miqt_string) {
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

func (this *QWebFrame) UrlChanged(url *qt.QUrl) {
	C.QWebFrame_urlChanged(this.h, (*C.QUrl)(url.UnsafePointer()))
}
func (this *QWebFrame) OnUrlChanged(slot func(url *qt.QUrl)) {
	C.QWebFrame_connect_urlChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebFrame_urlChanged
func miqt_exec_callback_QWebFrame_urlChanged(cb C.intptr_t, url *C.QUrl) {
	gofunc, ok := cgo.Handle(cb).Value().(func(url *qt.QUrl))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQUrl(unsafe.Pointer(url))

	gofunc(slotval1)
}

func (this *QWebFrame) InitialLayoutCompleted() {
	C.QWebFrame_initialLayoutCompleted(this.h)
}
func (this *QWebFrame) OnInitialLayoutCompleted(slot func()) {
	C.QWebFrame_connect_initialLayoutCompleted(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebFrame_initialLayoutCompleted
func miqt_exec_callback_QWebFrame_initialLayoutCompleted(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QWebFrame) IconChanged() {
	C.QWebFrame_iconChanged(this.h)
}
func (this *QWebFrame) OnIconChanged(slot func()) {
	C.QWebFrame_connect_iconChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebFrame_iconChanged
func miqt_exec_callback_QWebFrame_iconChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QWebFrame) ContentsSizeChanged(size *qt.QSize) {
	C.QWebFrame_contentsSizeChanged(this.h, (*C.QSize)(size.UnsafePointer()))
}
func (this *QWebFrame) OnContentsSizeChanged(slot func(size *qt.QSize)) {
	C.QWebFrame_connect_contentsSizeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebFrame_contentsSizeChanged
func miqt_exec_callback_QWebFrame_contentsSizeChanged(cb C.intptr_t, size *C.QSize) {
	gofunc, ok := cgo.Handle(cb).Value().(func(size *qt.QSize))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQSize(unsafe.Pointer(size))

	gofunc(slotval1)
}

func (this *QWebFrame) LoadStarted() {
	C.QWebFrame_loadStarted(this.h)
}
func (this *QWebFrame) OnLoadStarted(slot func()) {
	C.QWebFrame_connect_loadStarted(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebFrame_loadStarted
func miqt_exec_callback_QWebFrame_loadStarted(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QWebFrame) LoadFinished(ok bool) {
	C.QWebFrame_loadFinished(this.h, (C.bool)(ok))
}
func (this *QWebFrame) OnLoadFinished(slot func(ok bool)) {
	C.QWebFrame_connect_loadFinished(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebFrame_loadFinished
func miqt_exec_callback_QWebFrame_loadFinished(cb C.intptr_t, ok C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(ok bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(ok)

	gofunc(slotval1)
}

func (this *QWebFrame) PageChanged() {
	C.QWebFrame_pageChanged(this.h)
}
func (this *QWebFrame) OnPageChanged(slot func()) {
	C.QWebFrame_connect_pageChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebFrame_pageChanged
func miqt_exec_callback_QWebFrame_pageChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func QWebFrame_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebFrame_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebFrame_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebFrame_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebFrame_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebFrame_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebFrame_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebFrame_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebFrame) Load2(request *network.QNetworkRequest, operation network.QNetworkAccessManager__Operation) {
	C.QWebFrame_load2(this.h, (*C.QNetworkRequest)(request.UnsafePointer()), (C.int)(operation))
}

func (this *QWebFrame) Load3(request *network.QNetworkRequest, operation network.QNetworkAccessManager__Operation, body []byte) {
	body_alias := C.struct_miqt_string{}
	if len(body) > 0 {
		body_alias.data = (*C.char)(unsafe.Pointer(&body[0]))
	} else {
		body_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	body_alias.len = C.size_t(len(body))
	C.QWebFrame_load3(this.h, (*C.QNetworkRequest)(request.UnsafePointer()), (C.int)(operation), body_alias)
}

func (this *QWebFrame) SetHtml2(html string, baseUrl *qt.QUrl) {
	html_ms := C.struct_miqt_string{}
	html_ms.data = C.CString(html)
	html_ms.len = C.size_t(len(html))
	defer C.free(unsafe.Pointer(html_ms.data))
	C.QWebFrame_setHtml2(this.h, html_ms, (*C.QUrl)(baseUrl.UnsafePointer()))
}

func (this *QWebFrame) SetContent2(data []byte, mimeType string) {
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
	C.QWebFrame_setContent2(this.h, data_alias, mimeType_ms)
}

func (this *QWebFrame) SetContent3(data []byte, mimeType string, baseUrl *qt.QUrl) {
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
	C.QWebFrame_setContent3(this.h, data_alias, mimeType_ms, (*C.QUrl)(baseUrl.UnsafePointer()))
}

func (this *QWebFrame) AddToJavaScriptWindowObject2(name string, object *qt.QObject, ownership QWebFrame__ValueOwnership) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QWebFrame_addToJavaScriptWindowObject2(this.h, name_ms, (*C.QObject)(object.UnsafePointer()), (C.int)(ownership))
}

func (this *QWebFrame) Render3(param1 *qt.QPainter, clip *qt.QRegion) {
	C.QWebFrame_render3(this.h, (*C.QPainter)(param1.UnsafePointer()), (*C.QRegion)(clip.UnsafePointer()))
}

func (this *QWebFrame) Render4(param1 *qt.QPainter, layer QWebFrame__RenderLayer, clip *qt.QRegion) {
	C.QWebFrame_render4(this.h, (*C.QPainter)(param1.UnsafePointer()), (C.int)(layer), (*C.QRegion)(clip.UnsafePointer()))
}
