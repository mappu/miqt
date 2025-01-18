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
	h          *C.QWebHitTestResult
	isSubclass bool
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

	ret := newQWebHitTestResult(C.QWebHitTestResult_new())
	ret.isSubclass = true
	return ret
}

// NewQWebHitTestResult2 constructs a new QWebHitTestResult object.
func NewQWebHitTestResult2(other *QWebHitTestResult) *QWebHitTestResult {

	ret := newQWebHitTestResult(C.QWebHitTestResult_new2(other.cPointer()))
	ret.isSubclass = true
	return ret
}

func (this *QWebHitTestResult) OperatorAssign(other *QWebHitTestResult) {
	C.QWebHitTestResult_OperatorAssign(this.h, other.cPointer())
}

func (this *QWebHitTestResult) IsNull() bool {
	return (bool)(C.QWebHitTestResult_IsNull(this.h))
}

func (this *QWebHitTestResult) Pos() *qt.QPoint {
	_goptr := qt.UnsafeNewQPoint(unsafe.Pointer(C.QWebHitTestResult_Pos(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebHitTestResult) BoundingRect() *qt.QRect {
	_goptr := qt.UnsafeNewQRect(unsafe.Pointer(C.QWebHitTestResult_BoundingRect(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebHitTestResult) EnclosingBlockElement() *QWebElement {
	_goptr := newQWebElement(C.QWebHitTestResult_EnclosingBlockElement(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebHitTestResult) Title() string {
	var _ms C.struct_miqt_string = C.QWebHitTestResult_Title(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebHitTestResult) LinkText() string {
	var _ms C.struct_miqt_string = C.QWebHitTestResult_LinkText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebHitTestResult) LinkUrl() *qt.QUrl {
	_goptr := qt.UnsafeNewQUrl(unsafe.Pointer(C.QWebHitTestResult_LinkUrl(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebHitTestResult) LinkTitle() *qt.QUrl {
	_goptr := qt.UnsafeNewQUrl(unsafe.Pointer(C.QWebHitTestResult_LinkTitle(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebHitTestResult) LinkTitleString() string {
	var _ms C.struct_miqt_string = C.QWebHitTestResult_LinkTitleString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebHitTestResult) LinkTargetFrame() *QWebFrame {
	return newQWebFrame(C.QWebHitTestResult_LinkTargetFrame(this.h))
}

func (this *QWebHitTestResult) LinkElement() *QWebElement {
	_goptr := newQWebElement(C.QWebHitTestResult_LinkElement(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebHitTestResult) AlternateText() string {
	var _ms C.struct_miqt_string = C.QWebHitTestResult_AlternateText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebHitTestResult) ImageUrl() *qt.QUrl {
	_goptr := qt.UnsafeNewQUrl(unsafe.Pointer(C.QWebHitTestResult_ImageUrl(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebHitTestResult) Pixmap() *qt.QPixmap {
	_goptr := qt.UnsafeNewQPixmap(unsafe.Pointer(C.QWebHitTestResult_Pixmap(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebHitTestResult) MediaUrl() *qt.QUrl {
	_goptr := qt.UnsafeNewQUrl(unsafe.Pointer(C.QWebHitTestResult_MediaUrl(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebHitTestResult) IsContentEditable() bool {
	return (bool)(C.QWebHitTestResult_IsContentEditable(this.h))
}

func (this *QWebHitTestResult) IsContentSelected() bool {
	return (bool)(C.QWebHitTestResult_IsContentSelected(this.h))
}

func (this *QWebHitTestResult) Element() *QWebElement {
	_goptr := newQWebElement(C.QWebHitTestResult_Element(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebHitTestResult) Frame() *QWebFrame {
	return newQWebFrame(C.QWebHitTestResult_Frame(this.h))
}

// Delete this object from C++ memory.
func (this *QWebHitTestResult) Delete() {
	C.QWebHitTestResult_Delete(this.h)
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
	h          *C.QWebFrame
	isSubclass bool
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
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QWebFrame_MetaObject(this.h)))
}

func (this *QWebFrame) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QWebFrame_Metacast(this.h, param1_Cstring))
}

func QWebFrame_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QWebFrame_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebFrame_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QWebFrame_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebFrame) Page() *QWebPage {
	return newQWebPage(C.QWebFrame_Page(this.h))
}

func (this *QWebFrame) Load(url *qt.QUrl) {
	C.QWebFrame_Load(this.h, (*C.QUrl)(url.UnsafePointer()))
}

func (this *QWebFrame) LoadWithRequest(request *network.QNetworkRequest) {
	C.QWebFrame_LoadWithRequest(this.h, (*C.QNetworkRequest)(request.UnsafePointer()))
}

func (this *QWebFrame) SetHtml(html string) {
	html_ms := C.struct_miqt_string{}
	html_ms.data = C.CString(html)
	html_ms.len = C.size_t(len(html))
	defer C.free(unsafe.Pointer(html_ms.data))
	C.QWebFrame_SetHtml(this.h, html_ms)
}

func (this *QWebFrame) SetContent(data []byte) {
	data_alias := C.struct_miqt_string{}
	data_alias.data = (*C.char)(unsafe.Pointer(&data[0]))
	data_alias.len = C.size_t(len(data))
	C.QWebFrame_SetContent(this.h, data_alias)
}

func (this *QWebFrame) AddToJavaScriptWindowObject(name string, object *qt.QObject) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QWebFrame_AddToJavaScriptWindowObject(this.h, name_ms, (*C.QObject)(object.UnsafePointer()))
}

func (this *QWebFrame) ToHtml() string {
	var _ms C.struct_miqt_string = C.QWebFrame_ToHtml(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebFrame) ToPlainText() string {
	var _ms C.struct_miqt_string = C.QWebFrame_ToPlainText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebFrame) Title() string {
	var _ms C.struct_miqt_string = C.QWebFrame_Title(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebFrame) SetUrl(url *qt.QUrl) {
	C.QWebFrame_SetUrl(this.h, (*C.QUrl)(url.UnsafePointer()))
}

func (this *QWebFrame) Url() *qt.QUrl {
	_goptr := qt.UnsafeNewQUrl(unsafe.Pointer(C.QWebFrame_Url(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebFrame) RequestedUrl() *qt.QUrl {
	_goptr := qt.UnsafeNewQUrl(unsafe.Pointer(C.QWebFrame_RequestedUrl(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebFrame) BaseUrl() *qt.QUrl {
	_goptr := qt.UnsafeNewQUrl(unsafe.Pointer(C.QWebFrame_BaseUrl(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebFrame) Icon() *qt.QIcon {
	_goptr := qt.UnsafeNewQIcon(unsafe.Pointer(C.QWebFrame_Icon(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebFrame) FrameName() string {
	var _ms C.struct_miqt_string = C.QWebFrame_FrameName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebFrame) ParentFrame() *QWebFrame {
	return newQWebFrame(C.QWebFrame_ParentFrame(this.h))
}

func (this *QWebFrame) ChildFrames() []*QWebFrame {
	var _ma C.struct_miqt_array = C.QWebFrame_ChildFrames(this.h)
	_ret := make([]*QWebFrame, int(_ma.len))
	_outCast := (*[0xffff]*C.QWebFrame)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQWebFrame(_outCast[i])
	}
	return _ret
}

func (this *QWebFrame) ScrollBarPolicy(orientation qt.Orientation) qt.ScrollBarPolicy {
	return (qt.ScrollBarPolicy)(C.QWebFrame_ScrollBarPolicy(this.h, (C.int)(orientation)))
}

func (this *QWebFrame) SetScrollBarPolicy(orientation qt.Orientation, policy qt.ScrollBarPolicy) {
	C.QWebFrame_SetScrollBarPolicy(this.h, (C.int)(orientation), (C.int)(policy))
}

func (this *QWebFrame) SetScrollBarValue(orientation qt.Orientation, value int) {
	C.QWebFrame_SetScrollBarValue(this.h, (C.int)(orientation), (C.int)(value))
}

func (this *QWebFrame) ScrollBarValue(orientation qt.Orientation) int {
	return (int)(C.QWebFrame_ScrollBarValue(this.h, (C.int)(orientation)))
}

func (this *QWebFrame) ScrollBarMinimum(orientation qt.Orientation) int {
	return (int)(C.QWebFrame_ScrollBarMinimum(this.h, (C.int)(orientation)))
}

func (this *QWebFrame) ScrollBarMaximum(orientation qt.Orientation) int {
	return (int)(C.QWebFrame_ScrollBarMaximum(this.h, (C.int)(orientation)))
}

func (this *QWebFrame) ScrollBarGeometry(orientation qt.Orientation) *qt.QRect {
	_goptr := qt.UnsafeNewQRect(unsafe.Pointer(C.QWebFrame_ScrollBarGeometry(this.h, (C.int)(orientation))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebFrame) Scroll(param1 int, param2 int) {
	C.QWebFrame_Scroll(this.h, (C.int)(param1), (C.int)(param2))
}

func (this *QWebFrame) ScrollPosition() *qt.QPoint {
	_goptr := qt.UnsafeNewQPoint(unsafe.Pointer(C.QWebFrame_ScrollPosition(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebFrame) SetScrollPosition(pos *qt.QPoint) {
	C.QWebFrame_SetScrollPosition(this.h, (*C.QPoint)(pos.UnsafePointer()))
}

func (this *QWebFrame) ScrollToAnchor(anchor string) {
	anchor_ms := C.struct_miqt_string{}
	anchor_ms.data = C.CString(anchor)
	anchor_ms.len = C.size_t(len(anchor))
	defer C.free(unsafe.Pointer(anchor_ms.data))
	C.QWebFrame_ScrollToAnchor(this.h, anchor_ms)
}

func (this *QWebFrame) Render(param1 *qt.QPainter) {
	C.QWebFrame_Render(this.h, (*C.QPainter)(param1.UnsafePointer()))
}

func (this *QWebFrame) Render2(param1 *qt.QPainter, layer QWebFrame__RenderLayer) {
	C.QWebFrame_Render2(this.h, (*C.QPainter)(param1.UnsafePointer()), (C.int)(layer))
}

func (this *QWebFrame) SetTextSizeMultiplier(factor float64) {
	C.QWebFrame_SetTextSizeMultiplier(this.h, (C.double)(factor))
}

func (this *QWebFrame) TextSizeMultiplier() float64 {
	return (float64)(C.QWebFrame_TextSizeMultiplier(this.h))
}

func (this *QWebFrame) ZoomFactor() float64 {
	return (float64)(C.QWebFrame_ZoomFactor(this.h))
}

func (this *QWebFrame) SetZoomFactor(factor float64) {
	C.QWebFrame_SetZoomFactor(this.h, (C.double)(factor))
}

func (this *QWebFrame) HasFocus() bool {
	return (bool)(C.QWebFrame_HasFocus(this.h))
}

func (this *QWebFrame) SetFocus() {
	C.QWebFrame_SetFocus(this.h)
}

func (this *QWebFrame) Pos() *qt.QPoint {
	_goptr := qt.UnsafeNewQPoint(unsafe.Pointer(C.QWebFrame_Pos(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebFrame) Geometry() *qt.QRect {
	_goptr := qt.UnsafeNewQRect(unsafe.Pointer(C.QWebFrame_Geometry(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebFrame) ContentsSize() *qt.QSize {
	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QWebFrame_ContentsSize(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebFrame) DocumentElement() *QWebElement {
	_goptr := newQWebElement(C.QWebFrame_DocumentElement(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebFrame) OwnerElement() *QWebElement {
	_goptr := newQWebElement(C.QWebFrame_OwnerElement(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebFrame) FindAllElements(selectorQuery string) *QWebElementCollection {
	selectorQuery_ms := C.struct_miqt_string{}
	selectorQuery_ms.data = C.CString(selectorQuery)
	selectorQuery_ms.len = C.size_t(len(selectorQuery))
	defer C.free(unsafe.Pointer(selectorQuery_ms.data))
	_goptr := newQWebElementCollection(C.QWebFrame_FindAllElements(this.h, selectorQuery_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebFrame) FindFirstElement(selectorQuery string) *QWebElement {
	selectorQuery_ms := C.struct_miqt_string{}
	selectorQuery_ms.data = C.CString(selectorQuery)
	selectorQuery_ms.len = C.size_t(len(selectorQuery))
	defer C.free(unsafe.Pointer(selectorQuery_ms.data))
	_goptr := newQWebElement(C.QWebFrame_FindFirstElement(this.h, selectorQuery_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebFrame) HitTestContent(pos *qt.QPoint) *QWebHitTestResult {
	_goptr := newQWebHitTestResult(C.QWebFrame_HitTestContent(this.h, (*C.QPoint)(pos.UnsafePointer())))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebFrame) Event(param1 *qt.QEvent) bool {
	return (bool)(C.QWebFrame_Event(this.h, (*C.QEvent)(param1.UnsafePointer())))
}

func (this *QWebFrame) SecurityOrigin() *QWebSecurityOrigin {
	_goptr := newQWebSecurityOrigin(C.QWebFrame_SecurityOrigin(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebFrame) EvaluateJavaScript(scriptSource string) *qt.QVariant {
	scriptSource_ms := C.struct_miqt_string{}
	scriptSource_ms.data = C.CString(scriptSource)
	scriptSource_ms.len = C.size_t(len(scriptSource))
	defer C.free(unsafe.Pointer(scriptSource_ms.data))
	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QWebFrame_EvaluateJavaScript(this.h, scriptSource_ms)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebFrame) Print(printer *printsupport.QPrinter) {
	C.QWebFrame_Print(this.h, (*C.QPrinter)(printer.UnsafePointer()))
}

func (this *QWebFrame) JavaScriptWindowObjectCleared() {
	C.QWebFrame_JavaScriptWindowObjectCleared(this.h)
}
func (this *QWebFrame) OnJavaScriptWindowObjectCleared(slot func()) {
	C.QWebFrame_connect_JavaScriptWindowObjectCleared(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebFrame_JavaScriptWindowObjectCleared
func miqt_exec_callback_QWebFrame_JavaScriptWindowObjectCleared(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QWebFrame) ProvisionalLoad() {
	C.QWebFrame_ProvisionalLoad(this.h)
}
func (this *QWebFrame) OnProvisionalLoad(slot func()) {
	C.QWebFrame_connect_ProvisionalLoad(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebFrame_ProvisionalLoad
func miqt_exec_callback_QWebFrame_ProvisionalLoad(cb C.intptr_t) {
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
	C.QWebFrame_TitleChanged(this.h, title_ms)
}
func (this *QWebFrame) OnTitleChanged(slot func(title string)) {
	C.QWebFrame_connect_TitleChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebFrame_TitleChanged
func miqt_exec_callback_QWebFrame_TitleChanged(cb C.intptr_t, title C.struct_miqt_string) {
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
	C.QWebFrame_UrlChanged(this.h, (*C.QUrl)(url.UnsafePointer()))
}
func (this *QWebFrame) OnUrlChanged(slot func(url *qt.QUrl)) {
	C.QWebFrame_connect_UrlChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebFrame_UrlChanged
func miqt_exec_callback_QWebFrame_UrlChanged(cb C.intptr_t, url *C.QUrl) {
	gofunc, ok := cgo.Handle(cb).Value().(func(url *qt.QUrl))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQUrl(unsafe.Pointer(url))

	gofunc(slotval1)
}

func (this *QWebFrame) InitialLayoutCompleted() {
	C.QWebFrame_InitialLayoutCompleted(this.h)
}
func (this *QWebFrame) OnInitialLayoutCompleted(slot func()) {
	C.QWebFrame_connect_InitialLayoutCompleted(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebFrame_InitialLayoutCompleted
func miqt_exec_callback_QWebFrame_InitialLayoutCompleted(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QWebFrame) IconChanged() {
	C.QWebFrame_IconChanged(this.h)
}
func (this *QWebFrame) OnIconChanged(slot func()) {
	C.QWebFrame_connect_IconChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebFrame_IconChanged
func miqt_exec_callback_QWebFrame_IconChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QWebFrame) ContentsSizeChanged(size *qt.QSize) {
	C.QWebFrame_ContentsSizeChanged(this.h, (*C.QSize)(size.UnsafePointer()))
}
func (this *QWebFrame) OnContentsSizeChanged(slot func(size *qt.QSize)) {
	C.QWebFrame_connect_ContentsSizeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebFrame_ContentsSizeChanged
func miqt_exec_callback_QWebFrame_ContentsSizeChanged(cb C.intptr_t, size *C.QSize) {
	gofunc, ok := cgo.Handle(cb).Value().(func(size *qt.QSize))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQSize(unsafe.Pointer(size))

	gofunc(slotval1)
}

func (this *QWebFrame) LoadStarted() {
	C.QWebFrame_LoadStarted(this.h)
}
func (this *QWebFrame) OnLoadStarted(slot func()) {
	C.QWebFrame_connect_LoadStarted(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebFrame_LoadStarted
func miqt_exec_callback_QWebFrame_LoadStarted(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QWebFrame) LoadFinished(ok bool) {
	C.QWebFrame_LoadFinished(this.h, (C.bool)(ok))
}
func (this *QWebFrame) OnLoadFinished(slot func(ok bool)) {
	C.QWebFrame_connect_LoadFinished(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebFrame_LoadFinished
func miqt_exec_callback_QWebFrame_LoadFinished(cb C.intptr_t, ok C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(ok bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(ok)

	gofunc(slotval1)
}

func (this *QWebFrame) PageChanged() {
	C.QWebFrame_PageChanged(this.h)
}
func (this *QWebFrame) OnPageChanged(slot func()) {
	C.QWebFrame_connect_PageChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebFrame_PageChanged
func miqt_exec_callback_QWebFrame_PageChanged(cb C.intptr_t) {
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
	var _ms C.struct_miqt_string = C.QWebFrame_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebFrame_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebFrame_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebFrame_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebFrame_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebFrame_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebFrame_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebFrame) Load2(request *network.QNetworkRequest, operation network.QNetworkAccessManager__Operation) {
	C.QWebFrame_Load2(this.h, (*C.QNetworkRequest)(request.UnsafePointer()), (C.int)(operation))
}

func (this *QWebFrame) Load3(request *network.QNetworkRequest, operation network.QNetworkAccessManager__Operation, body []byte) {
	body_alias := C.struct_miqt_string{}
	body_alias.data = (*C.char)(unsafe.Pointer(&body[0]))
	body_alias.len = C.size_t(len(body))
	C.QWebFrame_Load3(this.h, (*C.QNetworkRequest)(request.UnsafePointer()), (C.int)(operation), body_alias)
}

func (this *QWebFrame) SetHtml2(html string, baseUrl *qt.QUrl) {
	html_ms := C.struct_miqt_string{}
	html_ms.data = C.CString(html)
	html_ms.len = C.size_t(len(html))
	defer C.free(unsafe.Pointer(html_ms.data))
	C.QWebFrame_SetHtml2(this.h, html_ms, (*C.QUrl)(baseUrl.UnsafePointer()))
}

func (this *QWebFrame) SetContent2(data []byte, mimeType string) {
	data_alias := C.struct_miqt_string{}
	data_alias.data = (*C.char)(unsafe.Pointer(&data[0]))
	data_alias.len = C.size_t(len(data))
	mimeType_ms := C.struct_miqt_string{}
	mimeType_ms.data = C.CString(mimeType)
	mimeType_ms.len = C.size_t(len(mimeType))
	defer C.free(unsafe.Pointer(mimeType_ms.data))
	C.QWebFrame_SetContent2(this.h, data_alias, mimeType_ms)
}

func (this *QWebFrame) SetContent3(data []byte, mimeType string, baseUrl *qt.QUrl) {
	data_alias := C.struct_miqt_string{}
	data_alias.data = (*C.char)(unsafe.Pointer(&data[0]))
	data_alias.len = C.size_t(len(data))
	mimeType_ms := C.struct_miqt_string{}
	mimeType_ms.data = C.CString(mimeType)
	mimeType_ms.len = C.size_t(len(mimeType))
	defer C.free(unsafe.Pointer(mimeType_ms.data))
	C.QWebFrame_SetContent3(this.h, data_alias, mimeType_ms, (*C.QUrl)(baseUrl.UnsafePointer()))
}

func (this *QWebFrame) AddToJavaScriptWindowObject3(name string, object *qt.QObject, ownership QWebFrame__ValueOwnership) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QWebFrame_AddToJavaScriptWindowObject3(this.h, name_ms, (*C.QObject)(object.UnsafePointer()), (C.int)(ownership))
}

func (this *QWebFrame) Render22(param1 *qt.QPainter, clip *qt.QRegion) {
	C.QWebFrame_Render22(this.h, (*C.QPainter)(param1.UnsafePointer()), (*C.QRegion)(clip.UnsafePointer()))
}

func (this *QWebFrame) Render3(param1 *qt.QPainter, layer QWebFrame__RenderLayer, clip *qt.QRegion) {
	C.QWebFrame_Render3(this.h, (*C.QPainter)(param1.UnsafePointer()), (C.int)(layer), (*C.QRegion)(clip.UnsafePointer()))
}
